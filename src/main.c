#include <string.h>

#include "board_hw/board_hw.h"
#include "utils/ustdlib.h"
#include "grlib_driver/grlib_raster_driver_16bpp.h"

#include "grlib/grlib.h"
#include "grlib/widget.h"
#include "grlib/canvas.h"
#include "grlib/checkbox.h"
#include "grlib/container.h"
#include "grlib/pushbutton.h"
#include "grlib/imgbutton.h"
#include "grlib/radiobutton.h"
#include "grlib/slider.h"

#define IMAGE_WIDTH(ptr) ((*(uint16_t *)((uint8_t *)(ptr) + 1)))
#define IMAGE_HEIGHT(ptr) ((*(uint16_t *)((uint8_t *)(ptr) + 3)))

extern const unsigned char ti_logo[];
extern const uint8_t btn100x50[];
extern const uint8_t btn100x50_pressed[];

char data[20]={};
uint16_t tp_x_coord, tp_y_coord, tp_flag=0;
uint8_t rled_status=0, gled_status=0;
uint32_t sys_tick_cnt;

void SysTickIntHandler(void)
{
    sys_tick_cnt++;

    if(sys_tick_cnt>=1000)
    {
        sys_tick_cnt=0;
        rled_status=rled_status^0x01;
        LEDs_Set(RLED,rled_status);
    }
}

void onBtn1Click(tWidget *psWidgett);
void onEditBox1Paint(tWidget *psWidgett, tContext *psContext);
void screenPaint(tWidget *psWidgett, tContext *psContext);

Canvas(screen1, 0, 0, 0, &g_sGrRaster16BppDriver, 0, 0, 800, 480,
       CANVAS_STYLE_IMG|CANVAS_STYLE_APP_DRAWN , ClrBlack, 0, ClrSilver,
       g_psFontCm20, 0, 0, screenPaint);

RectangularButton(btn1, (tWidget *)&screen1, 0, 0, &g_sGrRaster16BppDriver, 100, 350, 100, 50,
                  PB_STYLE_IMG | PB_STYLE_TEXT|PB_STYLE_RELEASE_NOTIFY|PB_STYLE_FILL, ClrWhite, ClrWhite, 0, ClrBlack,
                  g_psFontCmss26, "test", btn100x50, btn100x50_pressed, 0, 0, onBtn1Click);

Canvas(editBox1, 0, 0, 0, &g_sGrRaster16BppDriver, 580, 370, 160, 40,
       CANVAS_STYLE_TEXT |CANVAS_STYLE_APP_DRAWN| CANVAS_STYLE_TEXT_OPAQUE, ClrBlack, 0, ClrOrange,
       g_psFontCmss20b, 0, 0, onEditBox1Paint);

void onBtn1Click(tWidget *psWidgett)
{
    gled_status=gled_status^0x01;
    LEDs_Set(GLED,gled_status);
}
void onEditBox1Paint(tWidget *psWidgett, tContext *psContext)
{
    //nothing to do
}
void screenPaint(tWidget *psWidgett, tContext *psContext)
{
    uint32_t ui32X, ui32Y;

    GrContextBackgroundSet(psContext, ClrBlack);
    GrContextForegroundSet(psContext, ClrBlack);

    tRectangle r={0,0,799,479};
    GrRectFill(psContext,&r);

    GrContextFontSet(psContext, g_psFontCmss28);
    GrContextForegroundSet(psContext, ClrYellow);
    GrStringDrawCentered(psContext, "mikromedia 5 for Tiva C series", -1, GrContextDpyWidthGet(psContext) / 2, (GrContextDpyHeightGet(psContext) / 2) - 120, false);

    ui32X = (GrContextDpyWidthGet(psContext) - IMAGE_WIDTH(ti_logo)) / 2;
    ui32Y = (GrContextDpyHeightGet(psContext) - IMAGE_HEIGHT(ti_logo)) / 2;

    GrImageDraw(psContext, ti_logo, ui32X, ui32Y);
}
int main(void)
{
    BOARD_HW_Init();

    GrRaster16BppDriverInit(DISPLAY_getFrameBufferAddress());

    WidgetAdd(WIDGET_ROOT, (tWidget *)&screen1);
    WidgetAdd((tWidget *)&screen1, (tWidget *)&btn1);
    WidgetAdd((tWidget *)&screen1, (tWidget *)&editBox1);
    WidgetPaint(WIDGET_ROOT);


    while(1)
    {
        //Read touch screen and pass info to grlib
        if(TSC2006_isPressed())
        {
            delayMS(30);
            if(TSC2006_isPressed())
            {
                TSC2006_readXYCalibrated(&tp_x_coord,&tp_y_coord);
                if(!tp_flag)
                {
                    WidgetPointerMessage(WIDGET_MSG_PTR_DOWN,tp_x_coord,tp_y_coord);
                    tp_flag=1;
                }
                else
                {
                    WidgetPointerMessage(WIDGET_MSG_PTR_MOVE,tp_x_coord,tp_y_coord);
                }
            }
        }
        else
        {
            tp_flag=0;
            WidgetPointerMessage(WIDGET_MSG_PTR_UP,tp_x_coord,tp_y_coord);
        }
        WidgetMessageQueueProcess();

        usprintf(data, "tpx:%03d tpy:%03d", tp_x_coord,tp_y_coord);
        CanvasTextSet(&editBox1, data);
        while(!WidgetPaint((tWidget *)&editBox1));

        SERIAL_Write((uint8_t *)data,strlen(data));
        SERIAL_Write("\n",1);

        delayMS(50);
    }
}
