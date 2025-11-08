/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 14.05
* Profile  : Profile
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationFaultOrWarning.h"
#include "_ApplicationHMI.h"
#include "_ApplicationInput.h"
#include "_ApplicationLed.h"
#include "_ApplicationMainPage.h"
#include "_ApplicationMeasuredValues.h"
#include "_ApplicationNumKeyboard.h"
#include "_ApplicationReady.h"
#include "_ApplicationSystemInfo.h"
#include "_ApplicationWelcomePage.h"
#include "_CoreGroup.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_CoreWipeTouchHandler.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "Application.h"
#include "Core.h"
#include "Resources.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000003A0, /* ratio 55.17 % */
  0xB8003300, 0x8009A452, 0x1CE80037, 0x00072004, 0x12530008, 0x50C30802, 0x0F8A9962,
  0x0368008B, 0x36000EA0, 0x6C222513, 0x86800008, 0x22404581, 0x400648A4, 0x006E001A,
  0x6008719C, 0x1531800E, 0xF98C5E2F, 0x894F2110, 0x245E392F, 0xCA00E009, 0xC6251D27,
  0x68F45928, 0x98328552, 0xA5494036, 0x34384BE2, 0x68B800A5, 0x92C2A2F3, 0x190E5005,
  0x5880D4C8, 0x30AF6300, 0xCF367045, 0x995B8FCD, 0x16FB684A, 0x3887C5E4, 0xA98C7A11,
  0x1D002870, 0x259A4B34, 0x0006B518, 0x12D925C3, 0x23D21234, 0x1400AFC8, 0xB14B54A0,
  0x3197CC61, 0x80749667, 0x9B5BA232, 0x4CD2377D, 0x99801302, 0xA03B2585, 0x0004C834,
  0x697F2163, 0x706000E6, 0x5187D2EC, 0xD000C297, 0x20D2C002, 0x00D38000, 0xEEF7BBB0,
  0x0789C12C, 0x25022006, 0x43A098E9, 0x51490482, 0x349F4BE1, 0x0D0C8489, 0x19803718,
  0x05249534, 0xEEFBD6E9, 0xA0294CC2, 0x2151EE04, 0xBB0D859A, 0x55CAA803, 0x1AAAC3E2,
  0xD92D5623, 0x846B609C, 0xD2E75538, 0x47C93142, 0x01F64D5F, 0x62451AD0, 0x839DB7C0,
  0xD340B16E, 0xE0B9C352, 0xC5AB5C9B, 0x1E4D9145, 0x4B517435, 0x5D21590F, 0x7495F552,
  0x290B5501, 0x0F481144, 0x435345A5, 0x1408A908, 0x57CA0881, 0xC6280612, 0x688B6238,
  0x8C10F591, 0x5D780912, 0x08D93669, 0x21047A80, 0x425F9585, 0x43D33696, 0x61D42C48,
  0x560DCB8D, 0x3DEF43C4, 0x0F4A1824, 0x0025A471, 0x90F41161, 0x4519254D, 0x487881D0,
  0x5A4A1894, 0x0012C45D, 0x1CE9956E, 0x84D04E00, 0x16665305, 0x0F9D5A41, 0x4127252D,
  0xD514D27B, 0x49D27A9F, 0x06847813, 0x2570D0FA, 0x9F928011, 0x184A3800, 0x81169253,
  0x3128A468, 0x8841298A, 0x0D845A6D, 0x4374A294, 0x40E104A8, 0x35B3116A, 0x4C6ED28A,
  0x00101531, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0001 = {{ 0, 200 }, { 480, 272 }};
static const XRect _Const0002 = {{ 221, 64 }, { 480, 136 }};
static const XRect _Const0003 = {{ 0, 97 }, { 480, 176 }};
static const XColor _Const0004 = { 0x50, 0xDF, 0xFF, 0xFF };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x001B };
static const XRect _Const0007 = {{ 0, -1 }, { 480, 272 }};
static const XRect _Const0008 = {{ 340, 43 }, { 463, 93 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x0035 };
static const XRect _Const000A = {{ 340, 96 }, { 463, 146 }};
static const XStringRes _Const000B = { _StringsDefault0, 0x003C };
static const XRect _Const000C = {{ 338, 151 }, { 463, 201 }};
static const XStringRes _Const000D = { _StringsDefault0, 0x0043 };
static const XRect _Const000E = {{ 13, 50 }, { 128, 96 }};
static const XStringRes _Const000F = { _StringsDefault0, 0x0050 };
static const XRect _Const0010 = {{ 0, 93 }, { 128, 143 }};
static const XStringRes _Const0011 = { _StringsDefault0, 0x0055 };
static const XRect _Const0012 = {{ 0, 143 }, { 128, 192 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x005B };
static const XRect _Const0014 = {{ 11, 192 }, { 113, 222 }};
static const XStringRes _Const0015 = { _StringsDefault0, 0x0063 };
static const XColor _Const0016 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0017 = {{ 109, 192 }, { 147, 222 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x0075 };
static const XRect _Const0019 = {{ 350, 208 }, { 451, 237 }};
static const XStringRes _Const001A = { _StringsDefault0, 0x007B };
static const XRect _Const001B = {{ 350, 240 }, { 451, 269 }};
static const XStringRes _Const001C = { _StringsDefault0, 0x0083 };
static const XRect _Const001D = {{ 12, 2 }, { 135, 45 }};
static const XRect _Const001E = {{ 202, 50 }, { 325, 93 }};
static const XRect _Const001F = {{ 202, 92 }, { 325, 135 }};
static const XRect _Const0020 = {{ 202, 136 }, { 325, 179 }};
static const XRect _Const0021 = {{ 202, 178 }, { 325, 221 }};
static const XRect _Const0022 = {{ 135, 49 }, { 166, 92 }};
static const XRect _Const0023 = {{ 135, 97 }, { 166, 140 }};
static const XRect _Const0024 = {{ 135, 146 }, { 166, 189 }};
static const XRect _Const0025 = {{ 285, 34 }, { 478, 254 }};
static const XPoint _Const0026 = { 102, 189 };
static const XPoint _Const0027 = { 177, 189 };
static const XPoint _Const0028 = { 177, 222 };
static const XPoint _Const0029 = { 102, 222 };
static const XPoint _Const002A = { 398, 188 };
static const XPoint _Const002B = { 473, 188 };
static const XPoint _Const002C = { 473, 250 };
static const XPoint _Const002D = { 398, 250 };
static const XRect _Const002E = {{ 134, 2 }, { 346, 32 }};
static const XStringRes _Const002F = { _StringsDefault0, 0x008D };
static const XRect _Const0030 = {{ 21, 66 }, { 306, 96 }};
static const XStringRes _Const0031 = { _StringsDefault0, 0x009B };
static const XRect _Const0032 = {{ 15, 96 }, { 306, 126 }};
static const XStringRes _Const0033 = { _StringsDefault0, 0x00B8 };
static const XRect _Const0034 = {{ 14, 150 }, { 201, 180 }};
static const XStringRes _Const0035 = { _StringsDefault0, 0x00DA };
static const XRect _Const0036 = {{ 19, 123 }, { 310, 153 }};
static const XStringRes _Const0037 = { _StringsDefault0, 0x00EE };
static const XRect _Const0038 = {{ 118, 2 }, { 360, 32 }};
static const XStringRes _Const0039 = { _StringsDefault0, 0x0110 };
static const XRect _Const003A = {{ 18, 64 }, { 202, 94 }};
static const XStringRes _Const003B = { _StringsDefault0, 0x0122 };
static const XRect _Const003C = {{ 18, 94 }, { 214, 124 }};
static const XStringRes _Const003D = { _StringsDefault0, 0x0139 };
static const XRect _Const003E = {{ 18, 221 }, { 347, 251 }};
static const XStringRes _Const003F = { _StringsDefault0, 0x0151 };
static const XStringRes _Const0040 = { _StringsDefault0, 0x0165 };
static const XStringRes _Const0041 = { _StringsDefault0, 0x016B };
static const XStringRes _Const0042 = { _StringsDefault0, 0x0171 };
static const XRect _Const0043 = {{ 0, 0 }, { 100, 30 }};
static const XRect _Const0044 = {{ 0, 1 }, { 100, 30 }};
static const XColor _Const0045 = { 0xD6, 0xD6, 0xD6, 0xFF };
static const XStringRes _Const0046 = { _StringsDefault0, 0x0176 };
static const XColor _Const0047 = { 0xD6, 0x08, 0x02, 0xFF };
static const XColor _Const0048 = { 0xF6, 0x8F, 0x00, 0xFF };
static const XRect _Const0049 = {{ 0, 0 }, { 114, 40 }};
static const XRect _Const004A = {{ 1, 2 }, { 37, 38 }};
static const XColor _Const004B = { 0xCC, 0xCC, 0xCC, 0xFF };
static const XRect _Const004C = {{ 39, 5 }, { 114, 35 }};
static const XStringRes _Const004D = { _StringsDefault0, 0x017D };
static const XRect _Const004E = {{ 5, 6 }, { 33, 34 }};
static const XColor _Const004F = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0050 = { 0x00, 0xFF, 0x3F, 0xFF };
static const XRect _Const0051 = {{ 0, 0 }, { 94, 40 }};
static const XRect _Const0052 = {{ 60, 6 }, { 91, 38 }};
static const XRect _Const0053 = {{ 1, 8 }, { 57, 32 }};
static const XStringRes _Const0054 = { _StringsDefault0, 0x0185 };
static const XRect _Const0055 = {{ 63, 9 }, { 88, 35 }};
static const XStringRes _Const0056 = { _StringsDefault0, 0x018C };
static const XStringRes _Const0057 = { _StringsDefault0, 0x0193 };
static const XStringRes _Const0058 = { _StringsDefault0, 0x019A };
static const XStringRes _Const0059 = { _StringsDefault0, 0x01A1 };
static const XRect _Const005A = {{ 0, 0 }, { 31, 40 }};
static const XRect _Const005B = {{ 0, 6 }, { 31, 38 }};
static const XRect _Const005C = {{ 3, 9 }, { 28, 35 }};
static const XRect _Const005D = {{ 0, 0 }, { 170, 180 }};
static const XPoint _Const005E = { 10, 170 };
static const XPoint _Const005F = { 160, 170 };
static const XPoint _Const0060 = { 160, 10 };
static const XPoint _Const0061 = { 10, 10 };
static const XRect _Const0062 = {{ 10, 10 }, { 60, 50 }};
static const XColor _Const0063 = { 0xFF, 0x00, 0x00, 0xFF };
static const XStringRes _Const0064 = { _StringsDefault0, 0x01A8 };
static const XRect _Const0065 = {{ 60, 10 }, { 110, 50 }};
static const XStringRes _Const0066 = { _StringsDefault0, 0x01AC };
static const XRect _Const0067 = {{ 110, 10 }, { 160, 50 }};
static const XStringRes _Const0068 = { _StringsDefault0, 0x01B0 };
static const XRect _Const0069 = {{ 10, 50 }, { 60, 90 }};
static const XStringRes _Const006A = { _StringsDefault0, 0x01B4 };
static const XRect _Const006B = {{ 60, 50 }, { 110, 90 }};
static const XStringRes _Const006C = { _StringsDefault0, 0x01B8 };
static const XRect _Const006D = {{ 110, 50 }, { 160, 90 }};
static const XStringRes _Const006E = { _StringsDefault0, 0x01BC };
static const XRect _Const006F = {{ 10, 90 }, { 60, 130 }};
static const XStringRes _Const0070 = { _StringsDefault0, 0x01C0 };
static const XRect _Const0071 = {{ 60, 90 }, { 110, 130 }};
static const XStringRes _Const0072 = { _StringsDefault0, 0x01C4 };
static const XRect _Const0073 = {{ 110, 90 }, { 160, 130 }};
static const XStringRes _Const0074 = { _StringsDefault0, 0x01C8 };
static const XRect _Const0075 = {{ 60, 130 }, { 110, 170 }};
static const XStringRes _Const0076 = { _StringsDefault0, 0x01CC };
static const XRect _Const0077 = {{ 10, 130 }, { 60, 170 }};
static const XRect _Const0078 = {{ 110, 130 }, { 160, 170 }};

/* Include a file containing the font resource : 'Application::Font' */
#include "_ApplicationFont.h"

/* Table with links to derived variants of the font resource : 'Application::Font' */
EW_RES_WITHOUT_VARIANTS( ApplicationFont )

/* Initializer for the class 'Application::MainPage' */
void ApplicationMainPage__Init( ApplicationMainPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMainPage );

  /* ... then construct all embedded objects */
  ApplicationHMI__Init( &_this->HMI, &_this->_.XObject, 0 );
  ApplicationWelcomePage__Init( &_this->WelcomePage, &_this->_.XObject, 0 );
  ApplicationSystemInfo__Init( &_this->SystemInfo, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler1, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->WelcomePageTimer, &_this->_.XObject, 0 );
  ApplicationMeasuredValues__Init( &_this->MeasuredValues, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMainPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->HMI, _Const0000 );
  CoreRectView__OnSetBounds( &_this->WelcomePage, _Const0000 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->WelcomePage, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->WelcomePage, 1 );
  CoreRectView__OnSetBounds( &_this->SystemInfo, _Const0000 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->SystemInfo, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->SystemInfo, 0 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0001 );
  _this->SlideTouchHandler.SlideVert = 0;
  CoreSlideTouchHandler_OnSetRubberBandEffectDuration( &_this->SlideTouchHandler, 
  0 );
  CoreSlideTouchHandler_OnSetRetargetDelay( &_this->SlideTouchHandler, 1000 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler1, _Const0002 );
  _this->SlideTouchHandler1.SlideVert = 0;
  CoreSlideTouchHandler_OnSetRubberBandEffectDuration( &_this->SlideTouchHandler1, 
  500 );
  _this->SlideTouchHandler1.RubberBandScrolling = 0;
  CoreSlideTouchHandler_OnSetRetargetDelay( &_this->SlideTouchHandler1, 1000 );
  CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler1, 0 );
  CoreTimer_OnSetPeriod( &_this->WelcomePageTimer, 1000 );
  CoreTimer_OnSetEnabled( &_this->WelcomePageTimer, 1 );
  CoreRectView__OnSetBounds( &_this->MeasuredValues, _Const0000 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->MeasuredValues, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->MeasuredValues, 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HMI ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->WelcomePage ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SystemInfo ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SlideTouchHandler1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->MeasuredValues ), 0 );
  _this->SlideTouchHandler.OnSlide = EwNewSlot( _this, ApplicationMainPage_onSlide );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, ApplicationMainPage_onEnd );
  _this->SlideTouchHandler.OnStart = EwNewSlot( _this, ApplicationMainPage_onStart );
  _this->SlideTouchHandler1.OnSlide = EwNewSlot( _this, ApplicationMainPage_onSlide1 );
  _this->SlideTouchHandler1.OnEnd = EwNewSlot( _this, ApplicationMainPage_onEnd );
  _this->SlideTouchHandler1.OnStart = EwNewSlot( _this, ApplicationMainPage_onStart );
  _this->WelcomePageTimer.OnTrigger = EwNewSlot( _this, ApplicationMainPage_onWelcomePageTimer );
}

/* Re-Initializer for the class 'Application::MainPage' */
void ApplicationMainPage__ReInit( ApplicationMainPage _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationHMI__ReInit( &_this->HMI );
  ApplicationWelcomePage__ReInit( &_this->WelcomePage );
  ApplicationSystemInfo__ReInit( &_this->SystemInfo );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler1 );
  CoreTimer__ReInit( &_this->WelcomePageTimer );
  ApplicationMeasuredValues__ReInit( &_this->MeasuredValues );
}

/* Finalizer method for the class 'Application::MainPage' */
void ApplicationMainPage__Done( ApplicationMainPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationHMI__Done( &_this->HMI );
  ApplicationWelcomePage__Done( &_this->WelcomePage );
  ApplicationSystemInfo__Done( &_this->SystemInfo );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler1 );
  CoreTimer__Done( &_this->WelcomePageTimer );
  ApplicationMeasuredValues__Done( &_this->MeasuredValues );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::MainPage.onWelcomePageTimer()' */
void ApplicationMainPage_onWelcomePageTimer( ApplicationMainPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->WelcomePage, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->WelcomePage, 0 );
  CoreTimer_OnSetEnabled( &_this->WelcomePageTimer, 0 );
}

/* 'C' function for method : 'Application::MainPage.onSlide()' */
void ApplicationMainPage_onSlide( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SlideTouchHandler.Offset.X > 20 ) || ( _this->SlideTouchHandler.Offset.X 
      < -20 ))
    ApplicationMainPage_changePage( _this, &_this->SlideTouchHandler );
}

/* 'C' function for method : 'Application::MainPage.onSlide1()' */
void ApplicationMainPage_onSlide1( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SlideTouchHandler1.Offset.X > 20 ) || ( _this->SlideTouchHandler1.Offset.X 
      < -20 ))
    ApplicationMainPage_changePage( _this, &_this->SlideTouchHandler1 );
}

/* 'C' function for method : 'Application::MainPage.changePage()' */
void ApplicationMainPage_changePage( ApplicationMainPage _this, CoreSlideTouchHandler 
  touchHandler )
{
  if ((( touchHandler->Offset.X < 0 ) && CoreGroup_OnGetVisible((CoreGroup)&_this->HMI )) 
      && _this->readyToSlide )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->MeasuredValues, 1 );
    CoreGroup_OnSetVisible((CoreGroup)&_this->MeasuredValues, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->HMI, 0 );
    CoreGroup_OnSetVisible((CoreGroup)&_this->HMI, 0 );
    _this->readyToSlide = 0;
    CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)&_this->MeasuredValues ), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
  else
    if ((( touchHandler->Offset.X < 0 ) && CoreGroup_OnGetVisible((CoreGroup)&_this->MeasuredValues )) 
        && _this->readyToSlide )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->MeasuredValues, 0 );
      CoreGroup_OnSetVisible((CoreGroup)&_this->MeasuredValues, 0 );
      _this->readyToSlide = 0;
      CoreGroup_OnSetEnabled((CoreGroup)&_this->SystemInfo, 1 );
      CoreGroup_OnSetVisible((CoreGroup)&_this->SystemInfo, 1 );
    }
    else
      if ((( touchHandler->Offset.X > 0 ) && CoreGroup_OnGetVisible((CoreGroup)&_this->SystemInfo )) 
          && _this->readyToSlide )
      {
        CoreGroup_OnSetEnabled((CoreGroup)&_this->MeasuredValues, 1 );
        CoreGroup_OnSetVisible((CoreGroup)&_this->MeasuredValues, 1 );
        CoreGroup_OnSetEnabled((CoreGroup)&_this->SystemInfo, 0 );
        CoreGroup_OnSetVisible((CoreGroup)&_this->SystemInfo, 0 );
        _this->readyToSlide = 0;
      }
      else
        if ((( touchHandler->Offset.X > 0 ) && CoreGroup_OnGetVisible((CoreGroup)&_this->MeasuredValues )) 
            && _this->readyToSlide )
        {
          CoreGroup_OnSetEnabled((CoreGroup)&_this->MeasuredValues, 0 );
          CoreGroup_OnSetVisible((CoreGroup)&_this->MeasuredValues, 0 );
          CoreGroup_OnSetEnabled((CoreGroup)&_this->HMI, 1 );
          CoreGroup_OnSetVisible((CoreGroup)&_this->HMI, 1 );
          _this->readyToSlide = 0;
        }
}

/* 'C' function for method : 'Application::MainPage.onStart()' */
void ApplicationMainPage_onStart( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->readyToSlide = 1;
}

/* 'C' function for method : 'Application::MainPage.onEnd()' */
void ApplicationMainPage_onEnd( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->readyToSlide = 1;
}

/* Variants derived from the class : 'Application::MainPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMainPage )
EW_END_OF_CLASS_VARIANTS( ApplicationMainPage )

/* Virtual Method Table (VMT) for the class : 'Application::MainPage' */
EW_DEFINE_CLASS( ApplicationMainPage, CoreRoot, HMI, readyToSlide, readyToSlide, 
                 readyToSlide, readyToSlide, readyToSlide, "Application::MainPage" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( ApplicationMainPage )

/* Initializer for the class 'Application::WelcomePage' */
void ApplicationWelcomePage__Init( ApplicationWelcomePage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationWelcomePage );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->splashTimer, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationWelcomePage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->splashTimer, 3000 );
  CoreTimer_OnSetBegin( &_this->splashTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->splashTimer, 0 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0003 );
  ViewsText_OnSetOverflowWarning( &_this->Text, 1 );
  ViewsText_OnSetColorBL( &_this->Text, _Const0004 );
  ViewsText_OnSetColorBR( &_this->Text, _Const0004 );
  ViewsText_OnSetColorTR( &_this->Text, _Const0004 );
  ViewsText_OnSetColorTL( &_this->Text, _Const0004 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0005 ));
  ViewsText_OnSetColor( &_this->Text, _Const0004 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  _this->splashTimer.OnTrigger = EwNewSlot( _this, ApplicationWelcomePage_onTimer );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontExtraLarge, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::WelcomePage' */
void ApplicationWelcomePage__ReInit( ApplicationWelcomePage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->splashTimer );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::WelcomePage' */
void ApplicationWelcomePage__Done( ApplicationWelcomePage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->splashTimer );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::WelcomePage.onTimer()' */
void ApplicationWelcomePage_onTimer( ApplicationWelcomePage _this, XObject sender )
{
  CoreGroup theCurrentDialog;
  CoreGroup mainscreen;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const0006 ));
  theCurrentDialog = CoreGroup_FindCurrentDialog((CoreGroup)_this );
  CoreGroup_DismissDialog((CoreGroup)_this, theCurrentDialog, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  mainscreen = ((CoreGroup)EwNewObject( ApplicationMainPage, 0 ));
  CoreTimer_OnSetEnabled( &_this->splashTimer, 0 );
  CoreGroup_PresentDialog((CoreGroup)_this, mainscreen, 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::WelcomePage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationWelcomePage )
EW_END_OF_CLASS_VARIANTS( ApplicationWelcomePage )

/* Virtual Method Table (VMT) for the class : 'Application::WelcomePage' */
EW_DEFINE_CLASS( ApplicationWelcomePage, CoreGroup, splashTimer, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::WelcomePage" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationWelcomePage )

/* Initializer for the class 'Application::HMI' */
void ApplicationHMI__Init( ApplicationHMI _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationHMI );

  /* ... then construct all embedded objects */
  CoreWipeTouchHandler__Init( &_this->WipeTouchHandler, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->splashTimer, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->Out1, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->Out2, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->TripResetButton, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->CW, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->CCW, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->Cycle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->CycleCounterText, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->CycleCounterValue, &_this->_.XObject, 0 );
  ApplicationFaultOrWarning__Init( &_this->Fault, &_this->_.XObject, 0 );
  ApplicationFaultOrWarning__Init( &_this->Warning, &_this->_.XObject, 0 );
  ApplicationReady__Init( &_this->Ready, &_this->_.XObject, 0 );
  ApplicationInput__Init( &_this->IN1, &_this->_.XObject, 0 );
  ApplicationInput__Init( &_this->IN2, &_this->_.XObject, 0 );
  ApplicationInput__Init( &_this->IN3, &_this->_.XObject, 0 );
  ApplicationInput__Init( &_this->IN4, &_this->_.XObject, 0 );
  ApplicationLed__Init( &_this->CWLed, &_this->_.XObject, 0 );
  ApplicationLed__Init( &_this->CCWLed, &_this->_.XObject, 0 );
  ApplicationLed__Init( &_this->CycleLed, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->Timer, &_this->_.XObject, 0 );
  ApplicationNumKeyboard__Init( &_this->NumKeyboard, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->ModifyCycleCounterTouch, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->EnterTouch, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationHMI );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0007 );
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->splashTimer, 3000 );
  CoreTimer_OnSetBegin( &_this->splashTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->splashTimer, 1 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Out1, _Const0008 );
  WidgetSetToggleButton_OnSetLabel( &_this->Out1, EwLoadString( &_Const0009 ));
  CoreRectView__OnSetBounds( &_this->Out2, _Const000A );
  WidgetSetToggleButton_OnSetLabel( &_this->Out2, EwLoadString( &_Const000B ));
  CoreRectView__OnSetBounds( &_this->TripResetButton, _Const000C );
  CoreGroup_OnSetVisible((CoreGroup)&_this->TripResetButton, 0 );
  WidgetSetPushButton_OnSetLabel( &_this->TripResetButton, EwLoadString( &_Const000D ));
  CoreRectView__OnSetBounds( &_this->CW, _Const000E );
  WidgetSetToggleButton_OnSetChecked( &_this->CW, 0 );
  WidgetSetToggleButton_OnSetLabel( &_this->CW, EwLoadString( &_Const000F ));
  CoreRectView__OnSetBounds( &_this->CCW, _Const0010 );
  WidgetSetToggleButton_OnSetChecked( &_this->CCW, 0 );
  WidgetSetToggleButton_OnSetLabel( &_this->CCW, EwLoadString( &_Const0011 ));
  CoreRectView__OnSetBounds( &_this->Cycle, _Const0012 );
  WidgetSetToggleButton_OnSetChecked( &_this->Cycle, 0 );
  WidgetSetToggleButton_OnSetLabel( &_this->Cycle, EwLoadString( &_Const0013 ));
  CoreRectView__OnSetBounds( &_this->CycleCounterText, _Const0014 );
  ViewsText_OnSetOverflowWarning( &_this->CycleCounterText, 1 );
  ViewsText_OnSetString( &_this->CycleCounterText, EwLoadString( &_Const0015 ));
  ViewsText_OnSetColor( &_this->CycleCounterText, _Const0016 );
  CoreRectView__OnSetBounds( &_this->CycleCounterValue, _Const0017 );
  ViewsText_OnSetOverflowWarning( &_this->CycleCounterValue, 1 );
  ViewsText_OnSetString( &_this->CycleCounterValue, EwLoadString( &_Const0018 ));
  ViewsText_OnSetColor( &_this->CycleCounterValue, _Const0016 );
  CoreRectView__OnSetBounds( &_this->Fault, _Const0019 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->Fault, 0 );
  ApplicationFaultOrWarning_OnSettype( &_this->Fault, EwLoadString( &_Const001A ));
  CoreRectView__OnSetBounds( &_this->Warning, _Const001B );
  ApplicationFaultOrWarning_OnSettype( &_this->Warning, EwLoadString( &_Const001C ));
  CoreRectView__OnSetBounds( &_this->Ready, _Const001D );
  ApplicationReady_OnSetreadyFlag( &_this->Ready, 0 );
  CoreRectView__OnSetBounds( &_this->IN1, _Const001E );
  ApplicationInput_OnSetinputState( &_this->IN1, 0 );
  ApplicationInput_OnSetinputNumber( &_this->IN1, 1 );
  CoreRectView__OnSetBounds( &_this->IN2, _Const001F );
  ApplicationInput_OnSetinputState( &_this->IN2, 0 );
  ApplicationInput_OnSetinputNumber( &_this->IN2, 2 );
  CoreRectView__OnSetBounds( &_this->IN3, _Const0020 );
  ApplicationInput_OnSetinputState( &_this->IN3, 0 );
  ApplicationInput_OnSetinputNumber( &_this->IN3, 3 );
  CoreRectView__OnSetBounds( &_this->IN4, _Const0021 );
  ApplicationInput_OnSetinputState( &_this->IN4, 0 );
  ApplicationInput_OnSetinputNumber( &_this->IN4, 4 );
  CoreRectView__OnSetBounds( &_this->CWLed, _Const0022 );
  CoreRectView__OnSetBounds( &_this->CCWLed, _Const0023 );
  CoreRectView__OnSetBounds( &_this->CycleLed, _Const0024 );
  CoreTimer_OnSetPeriod( &_this->Timer, 1 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreRectView__OnSetBounds( &_this->NumKeyboard, _Const0025 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->NumKeyboard, 0 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->NumKeyboard, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->NumKeyboard, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->ModifyCycleCounterTouch, _Const0026 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->ModifyCycleCounterTouch, _Const0027 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->ModifyCycleCounterTouch, _Const0028 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->ModifyCycleCounterTouch, _Const0029 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->EnterTouch, _Const002A );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->EnterTouch, _Const002B );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->EnterTouch, _Const002C );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->EnterTouch, _Const002D );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Out1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Out2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TripResetButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CW ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CCW ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Cycle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CycleCounterText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CycleCounterValue ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Fault ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Warning ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Ready ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CWLed ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CCWLed ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CycleLed ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->NumKeyboard ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ModifyCycleCounterTouch ), 
  0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->EnterTouch ), 0 );
  _this->splashTimer.OnTrigger = EwNewSlot( _this, ApplicationHMI_onTimer );
  WidgetSetToggleButton_OnSetOutlet( &_this->Out1, EwNewRef( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), ApplicationDeviceClass_OnGetDeviceClass_Out1, ApplicationDeviceClass_OnSetDeviceClass_Out1 ));
  _this->Out1.OnSwitchOn = EwNewSlot( _this, ApplicationHMI_onOut1On );
  _this->Out1.OnSwitchOff = EwNewSlot( _this, ApplicationHMI_onOut1Off );
  WidgetSetToggleButton_OnSetAppearance( &_this->Out1, EwGetAutoObject( &WidgetSetSwitch_Lime_Medium, 
  WidgetSetToggleButtonConfig ));
  WidgetSetToggleButton_OnSetOutlet( &_this->Out2, EwNewRef( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), ApplicationDeviceClass_OnGetDeviceClass_Out2, ApplicationDeviceClass_OnSetDeviceClass_Out2 ));
  _this->Out2.OnSwitchOn = EwNewSlot( _this, ApplicationHMI_onOut2On );
  _this->Out2.OnSwitchOff = EwNewSlot( _this, ApplicationHMI_onOut2Off );
  WidgetSetToggleButton_OnSetAppearance( &_this->Out2, EwGetAutoObject( &WidgetSetSwitch_Lime_Medium, 
  WidgetSetToggleButtonConfig ));
  _this->TripResetButton.OnPress = EwNewSlot( _this, ApplicationHMI_onTripResetPress );
  WidgetSetPushButton_OnSetAppearance( &_this->TripResetButton, EwGetAutoObject( 
  &WidgetSetPushButton_Mono_Medium, WidgetSetPushButtonConfig ));
  _this->Outlet_On1 = EwNewRef( &_this->Out1, WidgetSetToggleButton_OnGetChecked, 
  WidgetSetToggleButton_OnSetChecked );
  _this->Outlet_On2 = EwNewRef( &_this->Out2, WidgetSetToggleButton_OnGetChecked, 
  WidgetSetToggleButton_OnSetChecked );
  WidgetSetToggleButton_OnSetOutlet( &_this->CW, EwNullRef );
  _this->CW.OnSwitchOn = EwNewSlot( _this, ApplicationHMI_onCWOn );
  _this->CW.OnSwitchOff = EwNewSlot( _this, ApplicationHMI_onCWOff );
  WidgetSetToggleButton_OnSetAppearance( &_this->CW, EwGetAutoObject( &WidgetSetSwitch_Mono_Medium, 
  WidgetSetToggleButtonConfig ));
  WidgetSetToggleButton_OnSetOutlet( &_this->CCW, EwNullRef );
  _this->CCW.OnSwitchOn = EwNewSlot( _this, ApplicationHMI_onCCWOn );
  _this->CCW.OnSwitchOff = EwNewSlot( _this, ApplicationHMI_onCCWOff );
  WidgetSetToggleButton_OnSetAppearance( &_this->CCW, EwGetAutoObject( &WidgetSetSwitch_Mono_Medium, 
  WidgetSetToggleButtonConfig ));
  WidgetSetToggleButton_OnSetOutlet( &_this->Cycle, EwNullRef );
  _this->Cycle.OnSwitchOn = EwNewSlot( _this, ApplicationHMI_onSetCycle );
  _this->Cycle.OnSwitchOff = EwNewSlot( _this, ApplicationHMI_onResetCycle );
  WidgetSetToggleButton_OnSetAppearance( &_this->Cycle, EwGetAutoObject( &WidgetSetSwitch_Mono_Medium, 
  WidgetSetToggleButtonConfig ));
  ViewsText_OnSetFont( &_this->CycleCounterText, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->CycleCounterValue, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
  _this->IN1.Outlet = EwNullRef;
  _this->Timer.OnTrigger = EwNewSlot( _this, ApplicationHMI_checkMotorStatus );
  _this->ModifyCycleCounterTouch.OnPress = EwNewSlot( _this, ApplicationHMI_CycleCounterTouchSlot );
  _this->EnterTouch.OnPress = EwNewSlot( _this, ApplicationHMI_ClearKeyBoard );
}

/* Re-Initializer for the class 'Application::HMI' */
void ApplicationHMI__ReInit( ApplicationHMI _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreWipeTouchHandler__ReInit( &_this->WipeTouchHandler );
  CoreTimer__ReInit( &_this->splashTimer );
  ViewsRectangle__ReInit( &_this->Rectangle );
  WidgetSetToggleButton__ReInit( &_this->Out1 );
  WidgetSetToggleButton__ReInit( &_this->Out2 );
  WidgetSetPushButton__ReInit( &_this->TripResetButton );
  WidgetSetToggleButton__ReInit( &_this->CW );
  WidgetSetToggleButton__ReInit( &_this->CCW );
  WidgetSetToggleButton__ReInit( &_this->Cycle );
  ViewsText__ReInit( &_this->CycleCounterText );
  ViewsText__ReInit( &_this->CycleCounterValue );
  ApplicationFaultOrWarning__ReInit( &_this->Fault );
  ApplicationFaultOrWarning__ReInit( &_this->Warning );
  ApplicationReady__ReInit( &_this->Ready );
  ApplicationInput__ReInit( &_this->IN1 );
  ApplicationInput__ReInit( &_this->IN2 );
  ApplicationInput__ReInit( &_this->IN3 );
  ApplicationInput__ReInit( &_this->IN4 );
  ApplicationLed__ReInit( &_this->CWLed );
  ApplicationLed__ReInit( &_this->CCWLed );
  ApplicationLed__ReInit( &_this->CycleLed );
  CoreTimer__ReInit( &_this->Timer );
  ApplicationNumKeyboard__ReInit( &_this->NumKeyboard );
  CoreSimpleTouchHandler__ReInit( &_this->ModifyCycleCounterTouch );
  CoreSimpleTouchHandler__ReInit( &_this->EnterTouch );
}

/* Finalizer method for the class 'Application::HMI' */
void ApplicationHMI__Done( ApplicationHMI _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreWipeTouchHandler__Done( &_this->WipeTouchHandler );
  CoreTimer__Done( &_this->splashTimer );
  ViewsRectangle__Done( &_this->Rectangle );
  WidgetSetToggleButton__Done( &_this->Out1 );
  WidgetSetToggleButton__Done( &_this->Out2 );
  WidgetSetPushButton__Done( &_this->TripResetButton );
  WidgetSetToggleButton__Done( &_this->CW );
  WidgetSetToggleButton__Done( &_this->CCW );
  WidgetSetToggleButton__Done( &_this->Cycle );
  ViewsText__Done( &_this->CycleCounterText );
  ViewsText__Done( &_this->CycleCounterValue );
  ApplicationFaultOrWarning__Done( &_this->Fault );
  ApplicationFaultOrWarning__Done( &_this->Warning );
  ApplicationReady__Done( &_this->Ready );
  ApplicationInput__Done( &_this->IN1 );
  ApplicationInput__Done( &_this->IN2 );
  ApplicationInput__Done( &_this->IN3 );
  ApplicationInput__Done( &_this->IN4 );
  ApplicationLed__Done( &_this->CWLed );
  ApplicationLed__Done( &_this->CCWLed );
  ApplicationLed__Done( &_this->CycleLed );
  CoreTimer__Done( &_this->Timer );
  ApplicationNumKeyboard__Done( &_this->NumKeyboard );
  CoreSimpleTouchHandler__Done( &_this->ModifyCycleCounterTouch );
  CoreSimpleTouchHandler__Done( &_this->EnterTouch );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::HMI.onTimer()' */
void ApplicationHMI_onTimer( ApplicationHMI _this, XObject sender )
{
  CoreGroup theCurrentDialog;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  theCurrentDialog = CoreGroup_FindCurrentDialog((CoreGroup)_this );
  CoreGroup_DismissDialog((CoreGroup)_this, theCurrentDialog, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::HMI.onTripResetPress()' */
void ApplicationHMI_onTripResetPress( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetFaultStatus( _this, 0 );
  ApplicationHMI_OnSetWarningStatus( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.onOut1On()' */
void ApplicationHMI_onOut1On( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetValue( _this, 1 );
  EwTrace( "%i", _this->Value );
}

/* 'C' function for method : 'Application::HMI.onOut1Off()' */
void ApplicationHMI_onOut1Off( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetValue( _this, 0 );
  EwTrace( "%i", _this->Value );
}

/* 'C' function for method : 'Application::HMI.OnSetValue()' */
void ApplicationHMI_OnSetValue( ApplicationHMI _this, XInt32 value )
{
  if ( _this->Value == value )
    return;

  _this->Value = value;

  if ( _this->Outlet_On1.Object != 0 )
  {
    if ( value == 0 )
      EwOnSetBool( _this->Outlet_On1, 0 );
    else
      EwOnSetBool( _this->Outlet_On1, 1 );
  }
}

/* 'C' function for method : 'Application::HMI.onOut2On()' */
void ApplicationHMI_onOut2On( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetValue_Out2( _this, 1 );
}

/* 'C' function for method : 'Application::HMI.onOut2Off()' */
void ApplicationHMI_onOut2Off( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetValue_Out2( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.OnSetValue_Out2()' */
void ApplicationHMI_OnSetValue_Out2( ApplicationHMI _this, XInt32 value )
{
  if ( _this->Value_Out2 == value )
    return;

  _this->Value_Out2 = value;

  if ( _this->Outlet_On2.Object != 0 )
  {
    if ( value == 0 )
      EwOnSetBool( _this->Outlet_On2, 0 );
    else
      EwOnSetBool( _this->Outlet_On2, 1 );
  }
}

/* 'C' function for method : 'Application::HMI.onCWOn()' */
void ApplicationHMI_onCWOn( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->motorReady )
    ApplicationHMI_OnSetcwValue( _this, 1 );
  else
    ApplicationHMI_OnSetcwValue( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.onCWOff()' */
void ApplicationHMI_onCWOff( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetcwValue( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.onCCWOn()' */
void ApplicationHMI_onCCWOn( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->motorReady )
    ApplicationHMI_OnSetccwValue( _this, 1 );
  else
    ApplicationHMI_OnSetccwValue( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.onCCWOff()' */
void ApplicationHMI_onCCWOff( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetccwValue( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.OnSetcwValue()' */
void ApplicationHMI_OnSetcwValue( ApplicationHMI _this, XInt16 value )
{
  if ( _this->cwValue == value )
    return;

  _this->cwValue = value;
  ApplicationLed_OnSetledState( &_this->CWLed, !!value );
}

/* 'C' function for method : 'Application::HMI.OnSetccwValue()' */
void ApplicationHMI_OnSetccwValue( ApplicationHMI _this, XInt16 value )
{
  if ( _this->ccwValue == value )
    return;

  _this->ccwValue = value;
  ApplicationLed_OnSetledState( &_this->CCWLed, !!value );
}

/* 'C' function for method : 'Application::HMI.OnSetmotorReady()' */
void ApplicationHMI_OnSetmotorReady( ApplicationHMI _this, XBool value )
{
  if ( _this->motorReady == value )
    return;

  _this->motorReady = value;
  ApplicationReady_OnSetreadyFlag( &_this->Ready, _this->motorReady );
  CoreGroup_OnSetVisible((CoreGroup)&_this->TripResetButton, 0 );
}

/* 'C' function for method : 'Application::HMI.OnSetFaultStatus()' */
void ApplicationHMI_OnSetFaultStatus( ApplicationHMI _this, XBool value )
{
  if ( _this->FaultStatus == value )
    return;

  _this->FaultStatus = value;
  ApplicationFaultOrWarning_OnSettype( &_this->Fault, EwLoadString( &_Const001A ));
  ViewsText_OnSetString( &_this->Fault.Text, EwLoadString( &_Const001A ));
  ApplicationFaultOrWarning_OnSetenabled( &_this->Fault, _this->FaultStatus );
  ApplicationHMI_OnSetmotorReady( _this, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->TripResetButton, 1 );
}

/* 'C' function for method : 'Application::HMI.OnSetWarningStatus()' */
void ApplicationHMI_OnSetWarningStatus( ApplicationHMI _this, XBool value )
{
  if ( _this->WarningStatus == value )
    return;

  _this->WarningStatus = value;
  ApplicationFaultOrWarning_OnSettype( &_this->Warning, EwLoadString( &_Const001C ));
  ViewsText_OnSetString( &_this->Warning.Text, EwLoadString( &_Const001C ));
  ApplicationFaultOrWarning_OnSetenabled( &_this->Warning, _this->WarningStatus );
}

/* 'C' function for method : 'Application::HMI.onSetCycle()' */
void ApplicationHMI_onSetCycle( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->motorReady )
    ApplicationHMI_OnSetcycleValue( _this, 1 );
  else
    ApplicationHMI_OnSetcycleValue( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.OnSetcycleValue()' */
void ApplicationHMI_OnSetcycleValue( ApplicationHMI _this, XInt16 value )
{
  if ( _this->cycleValue == value )
    return;

  _this->cycleValue = value;
  ApplicationLed_OnSetledState( &_this->CycleLed, !!value );
}

/* 'C' function for method : 'Application::HMI.onResetCycle()' */
void ApplicationHMI_onResetCycle( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetcycleValue( _this, 0 );
}

/* 'C' function for method : 'Application::HMI.checkMotorStatus()' */
void ApplicationHMI_checkMotorStatus( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ((( _this->cwValue == 1 ) && ( _this->ccwValue == 1 )) || ((( _this->cwValue 
      == 1 ) || ( _this->ccwValue == 1 )) && ( _this->cycleValue == 1 )))
    ApplicationHMI_OnSetFaultStatus( _this, 1 );

  if ( !_this->FaultStatus )
    ApplicationHMI_OnSetmotorReady( _this, 1 );
}

/* 'C' function for method : 'Application::HMI.CycleCounterTouchSlot()' */
void ApplicationHMI_CycleCounterTouchSlot( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->NumKeyboard, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->NumKeyboard, 1 );
  _this->NumKeyboard.generatedNumber = 0;
}

/* 'C' function for method : 'Application::HMI.ClearKeyBoard()' */
void ApplicationHMI_ClearKeyBoard( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->CycleCounterValue, EwNewStringInt( _this->NumKeyboard.generatedNumber, 
  0, 10 ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->NumKeyboard, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->NumKeyboard, 0 );
}

/* Variants derived from the class : 'Application::HMI' */
EW_DEFINE_CLASS_VARIANTS( ApplicationHMI )
EW_END_OF_CLASS_VARIANTS( ApplicationHMI )

/* Virtual Method Table (VMT) for the class : 'Application::HMI' */
EW_DEFINE_CLASS( ApplicationHMI, CoreGroup, WipeTouchHandler, Outlet_On1, Outlet_On1, 
                 Outlet_On1, Value, Value, "Application::HMI" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationHMI )

/* Initializer for the class 'Application::SystemInfo' */
void ApplicationSystemInfo__Init( ApplicationSystemInfo _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSystemInfo );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->splashTimer, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Title, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MLFB, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->InstallationDate, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Author, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Location, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSystemInfo );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->splashTimer, 3000 );
  CoreTimer_OnSetBegin( &_this->splashTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->splashTimer, 1 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Title, _Const002E );
  ViewsText_OnSetOverflowWarning( &_this->Title, 0 );
  ViewsText_OnSetColorBL( &_this->Title, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Title, _Const0016 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const002F ));
  ViewsText_OnSetColor( &_this->Title, _Const0016 );
  CoreRectView__OnSetBounds( &_this->MLFB, _Const0030 );
  ViewsText_OnSetOverflowWarning( &_this->MLFB, 1 );
  ViewsText_OnSetColorBL( &_this->MLFB, _Const0016 );
  ViewsText_OnSetColorBR( &_this->MLFB, _Const0016 );
  ViewsText_OnSetColorTR( &_this->MLFB, _Const0016 );
  ViewsText_OnSetColorTL( &_this->MLFB, _Const0016 );
  ViewsText_OnSetString( &_this->MLFB, EwLoadString( &_Const0031 ));
  ViewsText_OnSetColor( &_this->MLFB, _Const0016 );
  CoreRectView__OnSetBounds( &_this->InstallationDate, _Const0032 );
  ViewsText_OnSetOverflowWarning( &_this->InstallationDate, 1 );
  ViewsText_OnSetColorBL( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetColorBR( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetColorTR( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetColorTL( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetString( &_this->InstallationDate, EwLoadString( &_Const0033 ));
  ViewsText_OnSetColor( &_this->InstallationDate, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->Author, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Author, _Const0034 );
  ViewsText_OnSetOverflowWarning( &_this->Author, 1 );
  ViewsText_OnSetColorBL( &_this->Author, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Author, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Author, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Author, _Const0016 );
  ViewsText_OnSetString( &_this->Author, EwLoadString( &_Const0035 ));
  ViewsText_OnSetColor( &_this->Author, _Const0016 );
  CoreRectView__OnSetBounds( &_this->Location, _Const0036 );
  ViewsText_OnSetOverflowWarning( &_this->Location, 1 );
  ViewsText_OnSetColorBL( &_this->Location, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Location, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Location, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Location, _Const0016 );
  ViewsText_OnSetString( &_this->Location, EwLoadString( &_Const0037 ));
  ViewsText_OnSetColor( &_this->Location, _Const0016 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Title ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->MLFB ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->InstallationDate ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Author ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Location ), 0 );
  _this->splashTimer.OnTrigger = EwNewSlot( _this, ApplicationSystemInfo_onTimer );
  ViewsText_OnSetFont( &_this->Title, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->MLFB, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->InstallationDate, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Author, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Location, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::SystemInfo' */
void ApplicationSystemInfo__ReInit( ApplicationSystemInfo _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->splashTimer );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Title );
  ViewsText__ReInit( &_this->MLFB );
  ViewsText__ReInit( &_this->InstallationDate );
  ViewsText__ReInit( &_this->Author );
  ViewsText__ReInit( &_this->Location );
}

/* Finalizer method for the class 'Application::SystemInfo' */
void ApplicationSystemInfo__Done( ApplicationSystemInfo _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->splashTimer );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Title );
  ViewsText__Done( &_this->MLFB );
  ViewsText__Done( &_this->InstallationDate );
  ViewsText__Done( &_this->Author );
  ViewsText__Done( &_this->Location );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::SystemInfo.onTimer()' */
void ApplicationSystemInfo_onTimer( ApplicationSystemInfo _this, XObject sender )
{
  CoreGroup theCurrentDialog;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  theCurrentDialog = CoreGroup_FindCurrentDialog((CoreGroup)_this );
  CoreGroup_DismissDialog((CoreGroup)_this, theCurrentDialog, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SystemInfo' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSystemInfo )
EW_END_OF_CLASS_VARIANTS( ApplicationSystemInfo )

/* Virtual Method Table (VMT) for the class : 'Application::SystemInfo' */
EW_DEFINE_CLASS( ApplicationSystemInfo, CoreGroup, splashTimer, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::SystemInfo" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationSystemInfo )

/* Initializer for the class 'Application::MeasuredValues' */
void ApplicationMeasuredValues__Init( ApplicationMeasuredValues _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMeasuredValues );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->splashTimer, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Title, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NumberOfCWrotations, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NumberOfCCWrotations, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->OperatingHours, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->measureOperatingHours, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMeasuredValues );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->splashTimer, 3000 );
  CoreTimer_OnSetBegin( &_this->splashTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->splashTimer, 1 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Title, _Const0038 );
  ViewsText_OnSetOverflowWarning( &_this->Title, 0 );
  ViewsText_OnSetColorBL( &_this->Title, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Title, _Const0016 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0039 ));
  ViewsText_OnSetColor( &_this->Title, _Const0016 );
  CoreRectView__OnSetBounds( &_this->NumberOfCWrotations, _Const003A );
  ViewsText_OnSetOverflowWarning( &_this->NumberOfCWrotations, 1 );
  ViewsText_OnSetColorBL( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetColorBR( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetColorTR( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetColorTL( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetString( &_this->NumberOfCWrotations, EwLoadString( &_Const003B ));
  ViewsText_OnSetColor( &_this->NumberOfCWrotations, _Const0016 );
  CoreRectView__OnSetBounds( &_this->NumberOfCCWrotations, _Const003C );
  ViewsText_OnSetOverflowWarning( &_this->NumberOfCCWrotations, 1 );
  ViewsText_OnSetColorBL( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetColorBR( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetColorTR( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetColorTL( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetString( &_this->NumberOfCCWrotations, EwLoadString( &_Const003D ));
  ViewsText_OnSetColor( &_this->NumberOfCCWrotations, _Const0016 );
  CoreRectView__OnSetBounds( &_this->OperatingHours, _Const003E );
  ViewsText_OnSetOverflowWarning( &_this->OperatingHours, 1 );
  ViewsText_OnSetColorBL( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetColorBR( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetColorTR( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetColorTL( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetString( &_this->OperatingHours, EwLoadString( &_Const003F ));
  ViewsText_OnSetColor( &_this->OperatingHours, _Const0016 );
  CoreTimer_OnSetEnabled( &_this->measureOperatingHours, 1 );
  _this->isFirstStart = 1;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Title ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->NumberOfCWrotations ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->NumberOfCCWrotations ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->OperatingHours ), 0 );
  _this->splashTimer.OnTrigger = EwNewSlot( _this, ApplicationMeasuredValues_onTimer );
  ViewsText_OnSetFont( &_this->Title, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->NumberOfCWrotations, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->NumberOfCCWrotations, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->OperatingHours, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  _this->measureOperatingHours.OnTrigger = EwNewSlot( _this, ApplicationMeasuredValues_onMeasureOperatingHours );
}

/* Re-Initializer for the class 'Application::MeasuredValues' */
void ApplicationMeasuredValues__ReInit( ApplicationMeasuredValues _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->splashTimer );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Title );
  ViewsText__ReInit( &_this->NumberOfCWrotations );
  ViewsText__ReInit( &_this->NumberOfCCWrotations );
  ViewsText__ReInit( &_this->OperatingHours );
  CoreTimer__ReInit( &_this->measureOperatingHours );
}

/* Finalizer method for the class 'Application::MeasuredValues' */
void ApplicationMeasuredValues__Done( ApplicationMeasuredValues _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->splashTimer );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Title );
  ViewsText__Done( &_this->NumberOfCWrotations );
  ViewsText__Done( &_this->NumberOfCCWrotations );
  ViewsText__Done( &_this->OperatingHours );
  CoreTimer__Done( &_this->measureOperatingHours );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::MeasuredValues.onTimer()' */
void ApplicationMeasuredValues_onTimer( ApplicationMeasuredValues _this, XObject 
  sender )
{
  CoreGroup theCurrentDialog;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  theCurrentDialog = CoreGroup_FindCurrentDialog((CoreGroup)_this );
  CoreGroup_DismissDialog((CoreGroup)_this, theCurrentDialog, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MeasuredValues.onMeasureOperatingHours()' */
void ApplicationMeasuredValues_onMeasureOperatingHours( ApplicationMeasuredValues _this, 
  XObject sender )
{
  XInt32 hours;
  XInt32 minutes;
  XInt32 seconds;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->isFirstStart )
  {
    _this->ElapsedSeconds = EwMathRandInt32( 512, 2048 );
    _this->isFirstStart = 0;
  }

  _this->ElapsedSeconds = _this->ElapsedSeconds + 1;
  hours = _this->ElapsedSeconds / 3600;
  minutes = ( _this->ElapsedSeconds % 3600 ) / 60;
  seconds = _this->ElapsedSeconds % 60;
  ViewsText_OnSetString( &_this->OperatingHours, EwConcatString( EwConcatString( 
  EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
  &_Const003F ), EwNewStringInt( hours, 0, 10 )), EwLoadString( &_Const0040 )), 
  EwNewStringInt( minutes, 0, 10 )), EwLoadString( &_Const0041 )), EwNewStringInt( 
  seconds, 0, 10 )), EwLoadString( &_Const0042 )));
}

/* Variants derived from the class : 'Application::MeasuredValues' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMeasuredValues )
EW_END_OF_CLASS_VARIANTS( ApplicationMeasuredValues )

/* Virtual Method Table (VMT) for the class : 'Application::MeasuredValues' */
EW_DEFINE_CLASS( ApplicationMeasuredValues, CoreGroup, splashTimer, ElapsedSeconds, 
                 ElapsedSeconds, ElapsedSeconds, ElapsedSeconds, ElapsedSeconds, 
                 "Application::MeasuredValues" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationMeasuredValues )

/* User defined inline code: 'Application::Inline' */
#include "DeviceDriver.h"

void DeviceDriver_SetOutputState(XInt32 output_number, XBool output_state);

void DeviceDriver_SetMotorState(XInt8 rotation, XBool rotation_state);

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass );

  /* Call the user defined constructor */
  ApplicationDeviceClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this )
{
  XObject thisObject = ((XObject)_this );

  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       de-initialization steps. For example, you invoke some 'C' function:

         YourDevice_DeInitialize();

       IMPORTANT:
       ----------

       The variable 'thisObject' represents the actually de-initialized instance of the
       Application::DeviceClass. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg )
{
  XObject thisObject;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  thisObject = ((XObject)_this );
  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       initialization steps. For example, you invoke some 'C' function:

         YourDevice_Initialize();

       The variable 'thisObject' represents the actually initialized instance of the
       Application::DeviceClass. You can store this variable e.g. in the middleware
       and use it whenever the middleware needs to notify the GUI application about
       some state alternation or events. In this manner, the middleware will be able
       to invoke methods of the interface device object.

       For example, you can store 'thisObject' in some global C variable:

         // Declaration of the global C variable
         XObject theDeviceObject;

         // Store the instance in the global variable
         theDeviceObject = thisObject;

       Later use the global variable e.g. to provide the GUI application with events:

         ApplicationDeviceClass__TriggerSomeEvent( theDeviceObject );

       IMPORTANT:
       ----------

       If you store 'thisObject' for later use, don't forget to implement the opposite
       operation in the method 'Done'. Concrete, 'Done' should set the global variable
       again to the value NULL.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.OnSetDeviceClass_Out1()' */
void ApplicationDeviceClass_OnSetDeviceClass_Out1( ApplicationDeviceClass _this, 
  XBool value )
{
  if ( _this->DeviceClass_Out1 == value )
    return;

  _this->DeviceClass_Out1 = value;
  DeviceDriver_SetOutputState(1, value);
}

/* 'C' function for method : 'Application::DeviceClass.OnSetDeviceClass_Out2()' */
void ApplicationDeviceClass_OnSetDeviceClass_Out2( ApplicationDeviceClass _this, 
  XBool value )
{
  if ( _this->DeviceClass_Out2 == value )
    return;

  _this->DeviceClass_Out2 = value;
  DeviceDriver_SetOutputState(2, value);
}

/* Default onget method for the property 'DeviceClass_Out1' */
XBool ApplicationDeviceClass_OnGetDeviceClass_Out1( ApplicationDeviceClass _this )
{
  return _this->DeviceClass_Out1;
}

/* Default onget method for the property 'DeviceClass_Out2' */
XBool ApplicationDeviceClass_OnGetDeviceClass_Out2( ApplicationDeviceClass _this )
{
  return _this->DeviceClass_Out2;
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, TemplatesDeviceClass, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* User defined auto object: 'Application::Device' */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::Device' */
void ApplicationDevice__ReInit( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Initializer for the class 'Application::FaultOrWarning' */
void ApplicationFaultOrWarning__Init( ApplicationFaultOrWarning _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationFaultOrWarning );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationFaultOrWarning );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0044 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0045 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0043 );
  ViewsText_OnSetOverflowWarning( &_this->Text, 1 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0046 ));
  ViewsText_OnSetColor( &_this->Text, _Const0016 );
  ViewsText_OnSetEmbedded( &_this->Text, 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::FaultOrWarning' */
void ApplicationFaultOrWarning__ReInit( ApplicationFaultOrWarning _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::FaultOrWarning' */
void ApplicationFaultOrWarning__Done( ApplicationFaultOrWarning _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::FaultOrWarning.OnSetenabled()' */
void ApplicationFaultOrWarning_OnSetenabled( ApplicationFaultOrWarning _this, XBool 
  value )
{
  if ( _this->enabled == value )
    return;

  _this->enabled = value;

  if ( !EwCompString( _this->type, EwLoadString( &_Const001A )) && _this->enabled )
    ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0047 );
  else
    if ( !EwCompString( _this->type, EwLoadString( &_Const001C )) && _this->enabled )
      ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0048 );
    else
      if (( !EwCompString( _this->type, EwLoadString( &_Const001A )) || !EwCompString( 
          _this->type, EwLoadString( &_Const001C ))) && !_this->enabled )
        ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0045 );
}

/* 'C' function for method : 'Application::FaultOrWarning.OnSettype()' */
void ApplicationFaultOrWarning_OnSettype( ApplicationFaultOrWarning _this, XString 
  value )
{
  if ( !EwCompString( _this->type, value ))
    return;

  _this->type = EwShareString( value );
  ViewsText_OnSetString( &_this->Text, _this->type );
}

/* Variants derived from the class : 'Application::FaultOrWarning' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFaultOrWarning )
EW_END_OF_CLASS_VARIANTS( ApplicationFaultOrWarning )

/* Virtual Method Table (VMT) for the class : 'Application::FaultOrWarning' */
EW_DEFINE_CLASS( ApplicationFaultOrWarning, CoreGroup, Rectangle, type, type, type, 
                 type, enabled, "Application::FaultOrWarning" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationFaultOrWarning )

/* Initializer for the class 'Application::Ready' */
void ApplicationReady__Init( ApplicationReady _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationReady );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->ReadyBorder, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ReadyText, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->ReadyLed, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationReady );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0049 );
  CoreRectView__OnSetBounds( &_this->ReadyBorder, _Const004A );
  ViewsRectangle_OnSetColorBL( &_this->ReadyBorder, _Const004B );
  ViewsRectangle_OnSetColorBR( &_this->ReadyBorder, _Const004B );
  ViewsRectangle_OnSetColorTR( &_this->ReadyBorder, _Const004B );
  ViewsRectangle_OnSetColorTL( &_this->ReadyBorder, _Const004B );
  ViewsRectangle_OnSetRadius( &_this->ReadyBorder, 100 );
  ViewsRectangle_OnSetColor( &_this->ReadyBorder, _Const004B );
  CoreRectView__OnSetBounds( &_this->ReadyText, _Const004C );
  ViewsText_OnSetOverflowWarning( &_this->ReadyText, 1 );
  ViewsText_OnSetString( &_this->ReadyText, EwLoadString( &_Const004D ));
  ViewsText_OnSetColor( &_this->ReadyText, _Const0016 );
  CoreRectView__OnSetBounds( &_this->ReadyLed, _Const004E );
  ViewsRectangle_OnSetRadius( &_this->ReadyLed, 100 );
  ViewsRectangle_OnSetColor( &_this->ReadyLed, _Const004F );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ReadyBorder ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ReadyText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ReadyLed ), 0 );
  ViewsText_OnSetFont( &_this->ReadyText, EwLoadResource( &ApplicationFont, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::Ready' */
void ApplicationReady__ReInit( ApplicationReady _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->ReadyBorder );
  ViewsText__ReInit( &_this->ReadyText );
  ViewsRectangle__ReInit( &_this->ReadyLed );
}

/* Finalizer method for the class 'Application::Ready' */
void ApplicationReady__Done( ApplicationReady _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->ReadyBorder );
  ViewsText__Done( &_this->ReadyText );
  ViewsRectangle__Done( &_this->ReadyLed );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Ready.OnSetreadyFlag()' */
void ApplicationReady_OnSetreadyFlag( ApplicationReady _this, XBool value )
{
  if ( _this->readyFlag == value )
    return;

  _this->readyFlag = value;

  if ( _this->readyFlag )
    ViewsRectangle_OnSetColor( &_this->ReadyLed, _Const0050 );
  else
    ViewsRectangle_OnSetColor( &_this->ReadyLed, _Const004F );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::Ready' */
EW_DEFINE_CLASS_VARIANTS( ApplicationReady )
EW_END_OF_CLASS_VARIANTS( ApplicationReady )

/* Virtual Method Table (VMT) for the class : 'Application::Ready' */
EW_DEFINE_CLASS( ApplicationReady, CoreGroup, ReadyBorder, readyFlag, readyFlag, 
                 readyFlag, readyFlag, readyFlag, "Application::Ready" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationReady )

/* Initializer for the class 'Application::Input' */
void ApplicationInput__Init( ApplicationInput _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationInput );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->LedBorder, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->InputText, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->InputLed, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationInput );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0051 );
  CoreRectView__OnSetBounds( &_this->LedBorder, _Const0052 );
  ViewsRectangle_OnSetColorBL( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetColorBR( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetColorTR( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetColorTL( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetRadius( &_this->LedBorder, 100 );
  ViewsRectangle_OnSetColor( &_this->LedBorder, _Const004B );
  CoreRectView__OnSetBounds( &_this->InputText, _Const0053 );
  ViewsText_OnSetOverflowWarning( &_this->InputText, 1 );
  ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const0054 ));
  ViewsText_OnSetColor( &_this->InputText, _Const0016 );
  CoreRectView__OnSetBounds( &_this->InputLed, _Const0055 );
  ViewsRectangle_OnSetRadius( &_this->InputLed, 100 );
  ViewsRectangle_OnSetColor( &_this->InputLed, _Const004F );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->LedBorder ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->InputText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->InputLed ), 0 );
  ViewsText_OnSetFont( &_this->InputText, EwLoadResource( &ApplicationFont, ResourcesFont ));
  _this->Outlet = EwNewRef( _this, ApplicationInput_OnGetinputState, ApplicationInput_OnSetinputState );
}

/* Re-Initializer for the class 'Application::Input' */
void ApplicationInput__ReInit( ApplicationInput _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->LedBorder );
  ViewsText__ReInit( &_this->InputText );
  ViewsRectangle__ReInit( &_this->InputLed );
}

/* Finalizer method for the class 'Application::Input' */
void ApplicationInput__Done( ApplicationInput _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->LedBorder );
  ViewsText__Done( &_this->InputText );
  ViewsRectangle__Done( &_this->InputLed );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Input.OnSetinputState()' */
void ApplicationInput_OnSetinputState( ApplicationInput _this, XBool value )
{
  if ( _this->inputState == value )
    return;

  _this->inputState = value;

  if ( _this->inputState )
    ViewsRectangle_OnSetColor( &_this->InputLed, _Const0050 );
  else
    if ( !_this->inputState )
      ViewsRectangle_OnSetColor( &_this->InputLed, _Const004F );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::Input.OnSetinputNumber()' */
void ApplicationInput_OnSetinputNumber( ApplicationInput _this, XInt32 value )
{
  if ( _this->inputNumber == value )
    return;

  _this->inputNumber = value;

  if ( _this->inputNumber == 1 )
    ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const0056 ));
  else
    if ( _this->inputNumber == 2 )
      ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const0057 ));
    else
      if ( _this->inputNumber == 3 )
        ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const0058 ));
      else
        if ( _this->inputNumber == 4 )
          ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const0059 ));
}

/* Default onget method for the property 'inputState' */
XBool ApplicationInput_OnGetinputState( ApplicationInput _this )
{
  return _this->inputState;
}

/* Variants derived from the class : 'Application::Input' */
EW_DEFINE_CLASS_VARIANTS( ApplicationInput )
EW_END_OF_CLASS_VARIANTS( ApplicationInput )

/* Virtual Method Table (VMT) for the class : 'Application::Input' */
EW_DEFINE_CLASS( ApplicationInput, CoreGroup, LedBorder, Outlet, Outlet, Outlet, 
                 inputNumber, inputNumber, "Application::Input" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationInput )

/* Initializer for the class 'Application::Led' */
void ApplicationLed__Init( ApplicationLed _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationLed );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->LedBorder, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->InputLed, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationLed );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005A );
  CoreRectView__OnSetBounds( &_this->LedBorder, _Const005B );
  ViewsRectangle_OnSetColorBL( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetColorBR( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetColorTR( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetColorTL( &_this->LedBorder, _Const004B );
  ViewsRectangle_OnSetRadius( &_this->LedBorder, 100 );
  ViewsRectangle_OnSetColor( &_this->LedBorder, _Const004B );
  CoreRectView__OnSetBounds( &_this->InputLed, _Const005C );
  ViewsRectangle_OnSetRadius( &_this->InputLed, 100 );
  ViewsRectangle_OnSetColor( &_this->InputLed, _Const004F );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->LedBorder ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->InputLed ), 0 );
}

/* Re-Initializer for the class 'Application::Led' */
void ApplicationLed__ReInit( ApplicationLed _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->LedBorder );
  ViewsRectangle__ReInit( &_this->InputLed );
}

/* Finalizer method for the class 'Application::Led' */
void ApplicationLed__Done( ApplicationLed _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->LedBorder );
  ViewsRectangle__Done( &_this->InputLed );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Led.OnSetledState()' */
void ApplicationLed_OnSetledState( ApplicationLed _this, XBool value )
{
  if ( _this->ledState == value )
    return;

  _this->ledState = value;

  if ( _this->ledState )
    ViewsRectangle_OnSetColor( &_this->InputLed, _Const0050 );
  else
    ViewsRectangle_OnSetColor( &_this->InputLed, _Const004F );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::Led' */
EW_DEFINE_CLASS_VARIANTS( ApplicationLed )
EW_END_OF_CLASS_VARIANTS( ApplicationLed )

/* Virtual Method Table (VMT) for the class : 'Application::Led' */
EW_DEFINE_CLASS( ApplicationLed, CoreGroup, LedBorder, ledState, ledState, ledState, 
                 ledState, ledState, "Application::Led" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationLed )

/* Initializer for the class 'Application::NumKeyboard' */
void ApplicationNumKeyboard__Init( ApplicationNumKeyboard _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesNumKeyboard__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationNumKeyboard );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Highlight, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey5, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey6, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey7, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey8, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey9, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey0, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyClear, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyEnter, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationNumKeyboard );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005D );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const005D );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Border, _Const005D );
  ViewsBorder_OnSetWidth( &_this->Border, 3 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const005E );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const005F );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0060 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const0061 );
  _this->TouchHandler.EnableMultiTouch = 1;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Highlight, _Const0062 );
  ViewsRectangle_OnSetColor( &_this->Highlight, _Const0063 );
  ViewsRectangle_OnSetVisible( &_this->Highlight, 0 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey1, _Const0062 );
  ViewsText_OnSetString( &_this->TextKey1, EwLoadString( &_Const0064 ));
  ViewsText_OnSetColor( &_this->TextKey1, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey2, CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey2, _Const0065 );
  ViewsText_OnSetString( &_this->TextKey2, EwLoadString( &_Const0066 ));
  ViewsText_OnSetColor( &_this->TextKey2, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey3, CoreLayoutAlignToRight | CoreLayoutAlignToTop 
  | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey3, _Const0067 );
  ViewsText_OnSetString( &_this->TextKey3, EwLoadString( &_Const0068 ));
  ViewsText_OnSetColor( &_this->TextKey3, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey4, CoreLayoutAlignToLeft | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey4, _Const0069 );
  ViewsText_OnSetString( &_this->TextKey4, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->TextKey4, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey5, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey5, _Const006B );
  ViewsText_OnSetString( &_this->TextKey5, EwLoadString( &_Const006C ));
  ViewsText_OnSetColor( &_this->TextKey5, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey6, CoreLayoutAlignToRight | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey6, _Const006D );
  ViewsText_OnSetString( &_this->TextKey6, EwLoadString( &_Const006E ));
  ViewsText_OnSetColor( &_this->TextKey6, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey7, CoreLayoutAlignToLeft | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey7, _Const006F );
  ViewsText_OnSetString( &_this->TextKey7, EwLoadString( &_Const0070 ));
  ViewsText_OnSetColor( &_this->TextKey7, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey8, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey8, _Const0071 );
  ViewsText_OnSetString( &_this->TextKey8, EwLoadString( &_Const0072 ));
  ViewsText_OnSetColor( &_this->TextKey8, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey9, CoreLayoutAlignToRight | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey9, _Const0073 );
  ViewsText_OnSetString( &_this->TextKey9, EwLoadString( &_Const0074 ));
  ViewsText_OnSetColor( &_this->TextKey9, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey0, CoreLayoutAlignToBottom | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey0, _Const0075 );
  ViewsText_OnSetString( &_this->TextKey0, EwLoadString( &_Const0076 ));
  ViewsText_OnSetColor( &_this->TextKey0, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyClear, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyClear, _Const0077 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyClear, 4 );
  ViewsImage_OnSetColor( &_this->ImageKeyClear, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyEnter, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToRight | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyEnter, _Const0078 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyEnter, 6 );
  ViewsImage_OnSetColor( &_this->ImageKeyEnter, _Const0016 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Background ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Border ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Highlight ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey5 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey6 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey7 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey8 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey9 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TextKey0 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ImageKeyClear ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ImageKeyEnter ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationNumKeyboard_onFlashTimer );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, ApplicationNumKeyboard_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationNumKeyboard_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationNumKeyboard_onPressTouch );
  ViewsText_OnSetFont( &_this->TextKey1, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey2, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey3, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey4, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey5, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey6, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey7, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey8, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey9, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey0, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyClear, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyEnter, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::NumKeyboard' */
void ApplicationNumKeyboard__ReInit( ApplicationNumKeyboard _this )
{
  /* At first re-initialize the super class ... */
  TemplatesNumKeyboard__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsBorder__ReInit( &_this->Border );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsRectangle__ReInit( &_this->Highlight );
  ViewsText__ReInit( &_this->TextKey1 );
  ViewsText__ReInit( &_this->TextKey2 );
  ViewsText__ReInit( &_this->TextKey3 );
  ViewsText__ReInit( &_this->TextKey4 );
  ViewsText__ReInit( &_this->TextKey5 );
  ViewsText__ReInit( &_this->TextKey6 );
  ViewsText__ReInit( &_this->TextKey7 );
  ViewsText__ReInit( &_this->TextKey8 );
  ViewsText__ReInit( &_this->TextKey9 );
  ViewsText__ReInit( &_this->TextKey0 );
  ViewsImage__ReInit( &_this->ImageKeyClear );
  ViewsImage__ReInit( &_this->ImageKeyEnter );
}

/* Finalizer method for the class 'Application::NumKeyboard' */
void ApplicationNumKeyboard__Done( ApplicationNumKeyboard _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesNumKeyboard );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  ViewsRectangle__Done( &_this->Background );
  ViewsBorder__Done( &_this->Border );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsRectangle__Done( &_this->Highlight );
  ViewsText__Done( &_this->TextKey1 );
  ViewsText__Done( &_this->TextKey2 );
  ViewsText__Done( &_this->TextKey3 );
  ViewsText__Done( &_this->TextKey4 );
  ViewsText__Done( &_this->TextKey5 );
  ViewsText__Done( &_this->TextKey6 );
  ViewsText__Done( &_this->TextKey7 );
  ViewsText__Done( &_this->TextKey8 );
  ViewsText__Done( &_this->TextKey9 );
  ViewsText__Done( &_this->TextKey0 );
  ViewsImage__Done( &_this->ImageKeyClear );
  ViewsImage__Done( &_this->ImageKeyEnter );

  /* Don't forget to deinitialize the super class ... */
  TemplatesNumKeyboard__Done( &_this->_.Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationNumKeyboard_UpdateViewState( ApplicationNumKeyboard _this, XSet 
  aState )
{
  CoreView isKeyView;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isKeyView = 0;
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( isPressed && EwIsPointInRect( CoreView__GetExtent( &_this->TouchHandler ), 
      _this->recentPosition ))
    isKeyView = CoreGroup_FindViewAtPosition((CoreGroup)_this, 0, _this->recentPosition, 
    0 );

  if (( EwCastObject( isKeyView, ViewsText ) == 0 ) && ( EwCastObject( isKeyView, 
      ViewsImage ) == 0 ))
    isKeyView = 0;

  if ( isKeyView != _this->keyView )
  {
    ViewsText isTextKeyView = EwCastObject( isKeyView, ViewsText );
    ViewsText textKeyView = EwCastObject( _this->keyView, ViewsText );
    ViewsImage isImageKeyView = EwCastObject( isKeyView, ViewsImage );
    ViewsImage imageKeyView = EwCastObject( _this->keyView, ViewsImage );

    if ( isKeyView != 0 )
    {
      CoreRectView__OnSetBounds( &_this->Highlight, CoreView__GetExtent( isKeyView ));
      ViewsRectangle_OnSetVisible( &_this->Highlight, 1 );
    }
    else
      ViewsRectangle_OnSetVisible( &_this->Highlight, 0 );

    if ( isTextKeyView != 0 )
      ViewsText_OnSetColor( isTextKeyView, _Const004F );

    if ( textKeyView != 0 )
      ViewsText_OnSetColor( textKeyView, _Const0016 );

    if ( isImageKeyView != 0 )
      ViewsImage_OnSetColor( isImageKeyView, _Const004F );

    if ( imageKeyView != 0 )
      ViewsImage_OnSetColor( imageKeyView, _Const0016 );
  }

  _this->keyView = isKeyView;
}

/* This internal slot method is called when the recently pressed key should be activated. 
   This is when the user presses on a key and then releases the finger again. */
void ApplicationNumKeyboard_activateKey( ApplicationNumKeyboard _this, XObject sender )
{
  ViewsText textKeyView;
  XChar charCode;
  XEnum keyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  textKeyView = EwCastObject( _this->keyView, ViewsText );
  charCode = 0x0000;
  keyCode = CoreKeyCodeNoKey;

  if ( textKeyView != 0 )
  {
    charCode = EwGetStringChar( textKeyView->String, 0 );
    _this->generatedNumber = (XChar)(( _this->generatedNumber * 10 ) + charCode ) 
    - '0';
    EwTrace( "%i", _this->generatedNumber );
  }
  else
    if ( _this->keyView == ((CoreView)&_this->ImageKeyEnter ))
      keyCode = CoreKeyCodeEnter;
    else
      if ( _this->keyView == ((CoreView)&_this->ImageKeyClear ))
        keyCode = CoreKeyCodeBackspace;

  if ( charCode != 0x0000 )
  {
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), CoreKeyCodeNoKey, 
    charCode, 1 );
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), CoreKeyCodeNoKey, 
    charCode, 0 );
  }

  if ( keyCode != CoreKeyCodeNoKey )
  {
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, 0x0000, 
    1 );
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, 0x0000, 
    0 );
  }
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationNumKeyboard_onFlashTimer( ApplicationNumKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwSignal( EwNewSlot( _this, ApplicationNumKeyboard_activateKey ), ((XObject)_this ));
}

/* This internal slot method is called when the user drags the finger while pressing 
   the keyboard. This updates the keyboard to highlight the key at the new touch 
   position. */
void ApplicationNumKeyboard_onDragTouch( ApplicationNumKeyboard _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->recentPosition = _this->TouchHandler.CurrentPos;
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the keyboard area. This activates the key the user has touched. */
void ApplicationNumKeyboard_onReleaseTouch( ApplicationNumKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwSignal( EwNewSlot( _this, ApplicationNumKeyboard_activateKey ), ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the keyboard area. */
void ApplicationNumKeyboard_onPressTouch( ApplicationNumKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwSignal( EwNewSlot( _this, ApplicationNumKeyboard_activateKey ), ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  _this->recentPosition = _this->TouchHandler.CurrentPos;
}

/* Variants derived from the class : 'Application::NumKeyboard' */
EW_DEFINE_CLASS_VARIANTS( ApplicationNumKeyboard )
EW_END_OF_CLASS_VARIANTS( ApplicationNumKeyboard )

/* Virtual Method Table (VMT) for the class : 'Application::NumKeyboard' */
EW_DEFINE_CLASS( ApplicationNumKeyboard, TemplatesNumKeyboard, FlashTimer, keyView, 
                 recentPosition, recentPosition, recentPosition, recentPosition, 
                 "Application::NumKeyboard" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationNumKeyboard_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationNumKeyboard )

/* Embedded Wizard */
