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
#include "_ApplicationReady.h"
#include "_ApplicationSystemInfo.h"
#include "_ApplicationWelcomePage.h"
#include "_CoreGroup.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_CoreWipeTouchHandler.h"
#include "_ResourcesFont.h"
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
  0x0000033C, /* ratio 56.04 % */
  0xB8001F00, 0x800AE452, 0x00D80032, 0x0DE00318, 0x01073680, 0x05000080, 0x67001840,
  0xA0000222, 0x85116061, 0x01922F0E, 0x1B800690, 0xCC01128C, 0x4E400859, 0x27278444,
  0x80098C3A, 0x1187C90E, 0xE03C6E5D, 0x3A8009F1, 0xD8C40135, 0x41278008, 0xCA6D409F,
  0x23C0DA20, 0xE1379695, 0x711294A4, 0x1B9B4225, 0x321C780B, 0xAD81A890, 0xDC1AB800,
  0x1E6C0088, 0x6E110A96, 0x6D166094, 0x1D0C89C4, 0x13693D02, 0x291D4BA1, 0xB8257E37,
  0xBF0006B4, 0xB11A3D64, 0xD06133F8, 0x1A3C0A8D, 0x64F2E8BC, 0x371993C9, 0x0538F03A,
  0x7595D9C0, 0x624C4E71, 0x86998012, 0x6C783B44, 0x80098002, 0xE00042C1, 0x0003989D,
  0x2743AE69, 0x030A1D2E, 0x00A10B40, 0x4006E482, 0xDBED4003, 0xAEECB3B5, 0x08A3713D,
  0x624F9C8F, 0xE150AC26, 0x67259B45, 0x384224A6, 0x4B006AF3, 0x5254A467, 0xD959E158,
  0x25FFB1BE, 0xEEA3C14A, 0x80D000A4, 0x29F29BBE, 0x9F13E5C2, 0xF9500116, 0xA68F71A9,
  0x7E7C321D, 0xF775FA53, 0x9135052A, 0xB1891769, 0x9E07755E, 0x434A42C5, 0x6E02E6F5,
  0xD1168D6B, 0xE5012B45, 0x4D234212, 0x85730564, 0x05D447BD, 0xD366814E, 0x244D0A45,
  0x392E4A56, 0xD1506234, 0x75D2B675, 0xA210611B, 0x189A1C8A, 0xA5135756, 0x2D7F1418,
  0x5E5AA72A, 0x14779400, 0x85D95200, 0x4D2863E0, 0x16680484, 0x00230806, 0x9131157B,
  0xE941C57A, 0x551044D1, 0x134115A9, 0x8853B4AD, 0x1871E108, 0x44116500, 0x59224215,
  0x45519446, 0x4A44E670, 0x1C89AC58, 0x344E6F00, 0xB90497D4, 0x7852D299, 0x4A6749B6,
  0xE7A9F5DA, 0x4511BD44, 0x00004054, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0001 = {{ 0, 200 }, { 480, 272 }};
static const XRect _Const0002 = {{ 221, 64 }, { 480, 136 }};
static const XRect _Const0003 = {{ 86, 97 }, { 394, 176 }};
static const XColor _Const0004 = { 0xFF, 0x30, 0x03, 0xFF };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0011 };
static const XRect _Const0007 = {{ 0, -1 }, { 480, 272 }};
static const XRect _Const0008 = {{ 340, 43 }, { 463, 93 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x002B };
static const XRect _Const000A = {{ 340, 96 }, { 463, 146 }};
static const XStringRes _Const000B = { _StringsDefault0, 0x0032 };
static const XRect _Const000C = {{ 338, 151 }, { 463, 201 }};
static const XStringRes _Const000D = { _StringsDefault0, 0x0039 };
static const XRect _Const000E = {{ 13, 50 }, { 128, 96 }};
static const XStringRes _Const000F = { _StringsDefault0, 0x0046 };
static const XRect _Const0010 = {{ 0, 93 }, { 128, 143 }};
static const XStringRes _Const0011 = { _StringsDefault0, 0x004B };
static const XRect _Const0012 = {{ 0, 143 }, { 128, 192 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x0051 };
static const XRect _Const0014 = {{ 11, 192 }, { 113, 222 }};
static const XStringRes _Const0015 = { _StringsDefault0, 0x0059 };
static const XColor _Const0016 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0017 = {{ 109, 192 }, { 147, 222 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x006B };
static const XRect _Const0019 = {{ 350, 208 }, { 451, 237 }};
static const XStringRes _Const001A = { _StringsDefault0, 0x0071 };
static const XRect _Const001B = {{ 350, 240 }, { 451, 269 }};
static const XStringRes _Const001C = { _StringsDefault0, 0x0079 };
static const XRect _Const001D = {{ 12, 2 }, { 135, 45 }};
static const XRect _Const001E = {{ 202, 50 }, { 325, 93 }};
static const XRect _Const001F = {{ 202, 92 }, { 325, 135 }};
static const XRect _Const0020 = {{ 202, 136 }, { 325, 179 }};
static const XRect _Const0021 = {{ 202, 178 }, { 325, 221 }};
static const XRect _Const0022 = {{ 135, 49 }, { 166, 92 }};
static const XRect _Const0023 = {{ 135, 97 }, { 166, 140 }};
static const XRect _Const0024 = {{ 135, 146 }, { 166, 189 }};
static const XRect _Const0025 = {{ 134, 2 }, { 346, 32 }};
static const XStringRes _Const0026 = { _StringsDefault0, 0x0083 };
static const XRect _Const0027 = {{ 21, 66 }, { 306, 96 }};
static const XStringRes _Const0028 = { _StringsDefault0, 0x0091 };
static const XRect _Const0029 = {{ 15, 96 }, { 306, 126 }};
static const XStringRes _Const002A = { _StringsDefault0, 0x00AE };
static const XRect _Const002B = {{ 14, 150 }, { 201, 180 }};
static const XStringRes _Const002C = { _StringsDefault0, 0x00D0 };
static const XRect _Const002D = {{ 19, 123 }, { 310, 153 }};
static const XStringRes _Const002E = { _StringsDefault0, 0x00E4 };
static const XRect _Const002F = {{ 118, 2 }, { 360, 32 }};
static const XStringRes _Const0030 = { _StringsDefault0, 0x0106 };
static const XRect _Const0031 = {{ 18, 64 }, { 202, 94 }};
static const XStringRes _Const0032 = { _StringsDefault0, 0x0118 };
static const XRect _Const0033 = {{ 18, 94 }, { 214, 124 }};
static const XStringRes _Const0034 = { _StringsDefault0, 0x012F };
static const XRect _Const0035 = {{ 18, 221 }, { 347, 251 }};
static const XStringRes _Const0036 = { _StringsDefault0, 0x0147 };
static const XStringRes _Const0037 = { _StringsDefault0, 0x015B };
static const XStringRes _Const0038 = { _StringsDefault0, 0x0161 };
static const XStringRes _Const0039 = { _StringsDefault0, 0x0167 };
static const XRect _Const003A = {{ 0, 0 }, { 100, 30 }};
static const XRect _Const003B = {{ 0, 1 }, { 100, 30 }};
static const XColor _Const003C = { 0xD6, 0xD6, 0xD6, 0xFF };
static const XStringRes _Const003D = { _StringsDefault0, 0x016C };
static const XColor _Const003E = { 0xD6, 0x08, 0x02, 0xFF };
static const XColor _Const003F = { 0xF6, 0x8F, 0x00, 0xFF };
static const XRect _Const0040 = {{ 0, 0 }, { 114, 40 }};
static const XRect _Const0041 = {{ 1, 2 }, { 37, 38 }};
static const XColor _Const0042 = { 0xCC, 0xCC, 0xCC, 0xFF };
static const XRect _Const0043 = {{ 39, 5 }, { 114, 35 }};
static const XStringRes _Const0044 = { _StringsDefault0, 0x0173 };
static const XRect _Const0045 = {{ 5, 6 }, { 33, 34 }};
static const XColor _Const0046 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0047 = { 0x00, 0xFF, 0x3F, 0xFF };
static const XRect _Const0048 = {{ 0, 0 }, { 94, 40 }};
static const XRect _Const0049 = {{ 60, 6 }, { 91, 38 }};
static const XRect _Const004A = {{ 1, 8 }, { 57, 32 }};
static const XStringRes _Const004B = { _StringsDefault0, 0x017B };
static const XRect _Const004C = {{ 63, 9 }, { 88, 35 }};
static const XStringRes _Const004D = { _StringsDefault0, 0x0182 };
static const XStringRes _Const004E = { _StringsDefault0, 0x0189 };
static const XStringRes _Const004F = { _StringsDefault0, 0x0190 };
static const XStringRes _Const0050 = { _StringsDefault0, 0x0197 };
static const XRect _Const0051 = {{ 0, 0 }, { 31, 40 }};
static const XRect _Const0052 = {{ 0, 6 }, { 31, 38 }};
static const XRect _Const0053 = {{ 3, 9 }, { 28, 35 }};

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
  CoreGroup_OnSetVisible((CoreGroup)&_this->TripResetButton, 1 );
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
  _this->Cycle.OnSwitchOn = EwNullSlot;
  _this->Cycle.OnSwitchOff = EwNullSlot;
  WidgetSetToggleButton_OnSetAppearance( &_this->Cycle, EwGetAutoObject( &WidgetSetSwitch_Mono_Medium, 
  WidgetSetToggleButtonConfig ));
  ViewsText_OnSetFont( &_this->CycleCounterText, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->CycleCounterValue, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
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

  ApplicationHMI_OnSetfaultEnabled( _this, (XBool)!_this->faultEnabled );
  ApplicationHMI_OnSetwarningEnabled( _this, (XBool)!_this->warningEnabled );
  ApplicationHMI_OnSetinput1State( _this, (XBool)!_this->input1State );
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

  ApplicationHMI_OnSetcwValue( _this, 1 );
  EwTrace( "%i", _this->Value );
}

/* 'C' function for method : 'Application::HMI.onCWOff()' */
void ApplicationHMI_onCWOff( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetcwValue( _this, 0 );
  EwTrace( "%i", _this->Value );
}

/* 'C' function for method : 'Application::HMI.onCCWOn()' */
void ApplicationHMI_onCCWOn( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetccwValue( _this, 1 );
  EwTrace( "%i", _this->Value );
}

/* 'C' function for method : 'Application::HMI.onCCWOff()' */
void ApplicationHMI_onCCWOff( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationHMI_OnSetccwValue( _this, 0 );
  EwTrace( "%i", _this->Value );
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

/* 'C' function for method : 'Application::HMI.OnSetfaultEnabled()' */
void ApplicationHMI_OnSetfaultEnabled( ApplicationHMI _this, XBool value )
{
  if ( _this->faultEnabled == value )
    return;

  _this->faultEnabled = value;
  ApplicationFaultOrWarning_OnSettype( &_this->Fault, EwLoadString( &_Const001A ));
  ViewsText_OnSetString( &_this->Fault.Text, EwLoadString( &_Const001A ));
  ApplicationFaultOrWarning_OnSetenabled( &_this->Fault, _this->faultEnabled );
}

/* 'C' function for method : 'Application::HMI.OnSetwarningEnabled()' */
void ApplicationHMI_OnSetwarningEnabled( ApplicationHMI _this, XBool value )
{
  if ( _this->warningEnabled == value )
    return;

  _this->warningEnabled = value;
  ApplicationFaultOrWarning_OnSettype( &_this->Warning, EwLoadString( &_Const001C ));
  ViewsText_OnSetString( &_this->Warning.Text, EwLoadString( &_Const001C ));
  ApplicationFaultOrWarning_OnSetenabled( &_this->Warning, _this->warningEnabled );
}

/* 'C' function for method : 'Application::HMI.OnSetinput1State()' */
void ApplicationHMI_OnSetinput1State( ApplicationHMI _this, XBool value )
{
  if ( _this->input1State == value )
    return;

  _this->input1State = value;
  ApplicationInput_OnSetinputState( &_this->IN1, _this->input1State );
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
  CoreRectView__OnSetBounds( &_this->Title, _Const0025 );
  ViewsText_OnSetOverflowWarning( &_this->Title, 0 );
  ViewsText_OnSetColorBL( &_this->Title, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Title, _Const0016 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0026 ));
  ViewsText_OnSetColor( &_this->Title, _Const0016 );
  CoreRectView__OnSetBounds( &_this->MLFB, _Const0027 );
  ViewsText_OnSetOverflowWarning( &_this->MLFB, 1 );
  ViewsText_OnSetColorBL( &_this->MLFB, _Const0016 );
  ViewsText_OnSetColorBR( &_this->MLFB, _Const0016 );
  ViewsText_OnSetColorTR( &_this->MLFB, _Const0016 );
  ViewsText_OnSetColorTL( &_this->MLFB, _Const0016 );
  ViewsText_OnSetString( &_this->MLFB, EwLoadString( &_Const0028 ));
  ViewsText_OnSetColor( &_this->MLFB, _Const0016 );
  CoreRectView__OnSetBounds( &_this->InstallationDate, _Const0029 );
  ViewsText_OnSetOverflowWarning( &_this->InstallationDate, 1 );
  ViewsText_OnSetColorBL( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetColorBR( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetColorTR( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetColorTL( &_this->InstallationDate, _Const0016 );
  ViewsText_OnSetString( &_this->InstallationDate, EwLoadString( &_Const002A ));
  ViewsText_OnSetColor( &_this->InstallationDate, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->Author, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Author, _Const002B );
  ViewsText_OnSetOverflowWarning( &_this->Author, 1 );
  ViewsText_OnSetColorBL( &_this->Author, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Author, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Author, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Author, _Const0016 );
  ViewsText_OnSetString( &_this->Author, EwLoadString( &_Const002C ));
  ViewsText_OnSetColor( &_this->Author, _Const0016 );
  CoreRectView__OnSetBounds( &_this->Location, _Const002D );
  ViewsText_OnSetOverflowWarning( &_this->Location, 1 );
  ViewsText_OnSetColorBL( &_this->Location, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Location, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Location, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Location, _Const0016 );
  ViewsText_OnSetString( &_this->Location, EwLoadString( &_Const002E ));
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
  CoreRectView__OnSetBounds( &_this->Title, _Const002F );
  ViewsText_OnSetOverflowWarning( &_this->Title, 0 );
  ViewsText_OnSetColorBL( &_this->Title, _Const0016 );
  ViewsText_OnSetColorBR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTR( &_this->Title, _Const0016 );
  ViewsText_OnSetColorTL( &_this->Title, _Const0016 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0030 ));
  ViewsText_OnSetColor( &_this->Title, _Const0016 );
  CoreRectView__OnSetBounds( &_this->NumberOfCWrotations, _Const0031 );
  ViewsText_OnSetOverflowWarning( &_this->NumberOfCWrotations, 1 );
  ViewsText_OnSetColorBL( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetColorBR( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetColorTR( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetColorTL( &_this->NumberOfCWrotations, _Const0016 );
  ViewsText_OnSetString( &_this->NumberOfCWrotations, EwLoadString( &_Const0032 ));
  ViewsText_OnSetColor( &_this->NumberOfCWrotations, _Const0016 );
  CoreRectView__OnSetBounds( &_this->NumberOfCCWrotations, _Const0033 );
  ViewsText_OnSetOverflowWarning( &_this->NumberOfCCWrotations, 1 );
  ViewsText_OnSetColorBL( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetColorBR( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetColorTR( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetColorTL( &_this->NumberOfCCWrotations, _Const0016 );
  ViewsText_OnSetString( &_this->NumberOfCCWrotations, EwLoadString( &_Const0034 ));
  ViewsText_OnSetColor( &_this->NumberOfCCWrotations, _Const0016 );
  CoreRectView__OnSetBounds( &_this->OperatingHours, _Const0035 );
  ViewsText_OnSetOverflowWarning( &_this->OperatingHours, 1 );
  ViewsText_OnSetColorBL( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetColorBR( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetColorTR( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetColorTL( &_this->OperatingHours, _Const0016 );
  ViewsText_OnSetString( &_this->OperatingHours, EwLoadString( &_Const0036 ));
  ViewsText_OnSetColor( &_this->OperatingHours, _Const0016 );
  CoreTimer_OnSetEnabled( &_this->measureOperatingHours, 1 );
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

  _this->ElapsedSeconds = _this->ElapsedSeconds + 1;
  hours = _this->ElapsedSeconds / 3600;
  minutes = ( _this->ElapsedSeconds % 3600 ) / 60;
  seconds = _this->ElapsedSeconds % 60;
  ViewsText_OnSetString( &_this->OperatingHours, EwConcatString( EwConcatString( 
  EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
  &_Const0036 ), EwNewStringInt( hours, 0, 10 )), EwLoadString( &_Const0037 )), 
  EwNewStringInt( minutes, 0, 10 )), EwLoadString( &_Const0038 )), EwNewStringInt( 
  seconds, 0, 10 )), EwLoadString( &_Const0039 )));
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
  CoreRectView__OnSetBounds( _this, _Const003A );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const003B );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const003C );
  CoreRectView__OnSetBounds( &_this->Text, _Const003A );
  ViewsText_OnSetOverflowWarning( &_this->Text, 1 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const003D ));
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
    ViewsRectangle_OnSetColor( &_this->Rectangle, _Const003E );
  else
    if ( !EwCompString( _this->type, EwLoadString( &_Const001C )) && _this->enabled )
      ViewsRectangle_OnSetColor( &_this->Rectangle, _Const003F );
    else
      if (( !EwCompString( _this->type, EwLoadString( &_Const001A )) || !EwCompString( 
          _this->type, EwLoadString( &_Const001C ))) && !_this->enabled )
        ViewsRectangle_OnSetColor( &_this->Rectangle, _Const003C );
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
  CoreRectView__OnSetBounds( _this, _Const0040 );
  CoreRectView__OnSetBounds( &_this->ReadyBorder, _Const0041 );
  ViewsRectangle_OnSetColorBL( &_this->ReadyBorder, _Const0042 );
  ViewsRectangle_OnSetColorBR( &_this->ReadyBorder, _Const0042 );
  ViewsRectangle_OnSetColorTR( &_this->ReadyBorder, _Const0042 );
  ViewsRectangle_OnSetColorTL( &_this->ReadyBorder, _Const0042 );
  ViewsRectangle_OnSetRadius( &_this->ReadyBorder, 100 );
  ViewsRectangle_OnSetColor( &_this->ReadyBorder, _Const0042 );
  CoreRectView__OnSetBounds( &_this->ReadyText, _Const0043 );
  ViewsText_OnSetOverflowWarning( &_this->ReadyText, 1 );
  ViewsText_OnSetString( &_this->ReadyText, EwLoadString( &_Const0044 ));
  ViewsText_OnSetColor( &_this->ReadyText, _Const0016 );
  CoreRectView__OnSetBounds( &_this->ReadyLed, _Const0045 );
  ViewsRectangle_OnSetRadius( &_this->ReadyLed, 100 );
  ViewsRectangle_OnSetColor( &_this->ReadyLed, _Const0046 );
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
    ViewsRectangle_OnSetColor( &_this->ReadyLed, _Const0047 );
  else
    ViewsRectangle_OnSetColor( &_this->ReadyLed, _Const0046 );

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
  CoreRectView__OnSetBounds( _this, _Const0048 );
  CoreRectView__OnSetBounds( &_this->LedBorder, _Const0049 );
  ViewsRectangle_OnSetColorBL( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetColorBR( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetColorTR( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetColorTL( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetRadius( &_this->LedBorder, 100 );
  ViewsRectangle_OnSetColor( &_this->LedBorder, _Const0042 );
  CoreRectView__OnSetBounds( &_this->InputText, _Const004A );
  ViewsText_OnSetOverflowWarning( &_this->InputText, 1 );
  ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const004B ));
  ViewsText_OnSetColor( &_this->InputText, _Const0016 );
  CoreRectView__OnSetBounds( &_this->InputLed, _Const004C );
  ViewsRectangle_OnSetRadius( &_this->InputLed, 100 );
  ViewsRectangle_OnSetColor( &_this->InputLed, _Const0046 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->LedBorder ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->InputText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->InputLed ), 0 );
  ViewsText_OnSetFont( &_this->InputText, EwLoadResource( &ApplicationFont, ResourcesFont ));
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
    ViewsRectangle_OnSetColor( &_this->InputLed, _Const0047 );
  else
    ViewsRectangle_OnSetColor( &_this->InputLed, _Const0046 );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::Input.OnSetinputNumber()' */
void ApplicationInput_OnSetinputNumber( ApplicationInput _this, XInt32 value )
{
  if ( _this->inputNumber == value )
    return;

  _this->inputNumber = value;

  if ( _this->inputNumber == 1 )
    ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const004D ));
  else
    if ( _this->inputNumber == 2 )
      ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const004E ));
    else
      if ( _this->inputNumber == 3 )
        ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const004F ));
      else
        if ( _this->inputNumber == 4 )
          ViewsText_OnSetString( &_this->InputText, EwLoadString( &_Const0050 ));
}

/* Variants derived from the class : 'Application::Input' */
EW_DEFINE_CLASS_VARIANTS( ApplicationInput )
EW_END_OF_CLASS_VARIANTS( ApplicationInput )

/* Virtual Method Table (VMT) for the class : 'Application::Input' */
EW_DEFINE_CLASS( ApplicationInput, CoreGroup, LedBorder, inputNumber, inputNumber, 
                 inputNumber, inputNumber, inputNumber, "Application::Input" )
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
  CoreRectView__OnSetBounds( _this, _Const0051 );
  CoreRectView__OnSetBounds( &_this->LedBorder, _Const0052 );
  ViewsRectangle_OnSetColorBL( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetColorBR( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetColorTR( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetColorTL( &_this->LedBorder, _Const0042 );
  ViewsRectangle_OnSetRadius( &_this->LedBorder, 100 );
  ViewsRectangle_OnSetColor( &_this->LedBorder, _Const0042 );
  CoreRectView__OnSetBounds( &_this->InputLed, _Const0053 );
  ViewsRectangle_OnSetRadius( &_this->InputLed, 100 );
  ViewsRectangle_OnSetColor( &_this->InputLed, _Const0046 );
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
    ViewsRectangle_OnSetColor( &_this->InputLed, _Const0047 );
  else
    ViewsRectangle_OnSetColor( &_this->InputLed, _Const0046 );

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

/* Embedded Wizard */
