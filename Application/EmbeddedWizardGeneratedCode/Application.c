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
#include "_ApplicationHMI.h"
#include "_ApplicationMainPage.h"
#include "_ApplicationMeasuredValues.h"
#include "_ApplicationSystemInfo.h"
#include "_ApplicationWelcomePage.h"
#include "_CoreGroup.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_CoreWipeTouchHandler.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
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
  0x000002BE, /* ratio 55.84 % */
  0xB8001F00, 0x800AE452, 0x00D80032, 0x0DE00318, 0x01073680, 0x05000080, 0x67001840,
  0xA0000222, 0x85116061, 0x01922F0E, 0x1B800690, 0xCC01128C, 0x4E400859, 0x27278444,
  0x80098C3A, 0x1187C90E, 0xE0346E5D, 0x230009F1, 0x2802373F, 0x40C871E0, 0x1A093CA1,
  0x63706A35, 0x1A4D8F04, 0x72EA94D6, 0x5399D1A2, 0xB8543A5D, 0x9E81E372, 0x8D4CEA00,
  0x412BF421, 0xCA6D629F, 0x0931EA40, 0xC8002700, 0x16FB6CEE, 0x04B9DAC0, 0xC19DC2DD,
  0x1A5D6F36, 0xA4781B42, 0x9C26F2D2, 0xAE225294, 0xA3736844, 0x00538F03, 0x153951E4,
  0x6E89C421, 0xBA919A4F, 0x00540271, 0x010A824C, 0xDF2523A0, 0x02E24BC4, 0x00030BE0,
  0x522D89E0, 0xF741146E, 0x179B4AE4, 0x68BC2A15, 0x89D624B3, 0x26562C44, 0xDF2D729D,
  0x26C24A89, 0x401C5C94, 0x8435B5EB, 0x4418F052, 0x54344DB9, 0x8C244F89, 0xC24A76F0,
  0x26440045, 0x6863DB3C, 0xDF790C87, 0xBB7A5AC4, 0x4313A9E2, 0x5D93145F, 0x939743BD,
  0x0B24A459, 0x8DEA85D8, 0xD0867C12, 0xE5892B45, 0x4D234212, 0x0A708564, 0x509DD589,
  0x15260C17, 0x7559CB6E, 0x4D5A44D4, 0x266F9EA5, 0x509ED651, 0x10E84818, 0xC8590A85,
  0x52194A54, 0xB6549BD8, 0x581D2769, 0xD2E42187, 0x34661D86, 0x19521211, 0x006CA1E8,
  0x44C45524, 0xD7844DD8, 0x3909388F, 0x75134794, 0x0146D425, 0x00000001, 0x00000000
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
static const XRect _Const0008 = {{ 20, 79 }, { 220, 129 }};
static const XRect _Const0009 = {{ 92, 49 }, { 147, 79 }};
static const XColor _Const000A = { 0x00, 0x00, 0x00, 0xFF };
static const XStringRes _Const000B = { _StringsDefault0, 0x002B };
static const XRect _Const000C = {{ 185, 49 }, { 220, 79 }};
static const XStringRes _Const000D = { _StringsDefault0, 0x0031 };
static const XRect _Const000E = {{ 7, 49 }, { 60, 79 }};
static const XStringRes _Const000F = { _StringsDefault0, 0x0036 };
static const XRect _Const0010 = {{ 136, 3 }, { 370, 33 }};
static const XStringRes _Const0011 = { _StringsDefault0, 0x003C };
static const XRect _Const0012 = {{ 395, 30 }, { 445, 80 }};
static const XRect _Const0013 = {{ 22, 140 }, { 145, 190 }};
static const XStringRes _Const0014 = { _StringsDefault0, 0x004D };
static const XRect _Const0015 = {{ 335, 140 }, { 458, 190 }};
static const XStringRes _Const0016 = { _StringsDefault0, 0x0054 };
static const XRect _Const0017 = {{ 44, 212 }, { 94, 262 }};
static const XRect _Const0018 = {{ 151, 212 }, { 203, 262 }};
static const XRect _Const0019 = {{ 152, 212 }, { 202, 262 }};
static const XRect _Const001A = {{ 274, 212 }, { 324, 262 }};
static const XRect _Const001B = {{ 382, 212 }, { 432, 262 }};
static const XRect _Const001C = {{ 2, 222 }, { 55, 252 }};
static const XStringRes _Const001D = { _StringsDefault0, 0x005B };
static const XRect _Const001E = {{ 113, 222 }, { 154, 252 }};
static const XStringRes _Const001F = { _StringsDefault0, 0x0061 };
static const XRect _Const0020 = {{ 233, 222 }, { 274, 252 }};
static const XStringRes _Const0021 = { _StringsDefault0, 0x0067 };
static const XRect _Const0022 = {{ 341, 222 }, { 382, 252 }};
static const XStringRes _Const0023 = { _StringsDefault0, 0x006D };
static const XRect _Const0024 = {{ 178, 140 }, { 303, 190 }};
static const XStringRes _Const0025 = { _StringsDefault0, 0x0073 };
static const XRect _Const0026 = {{ 134, 2 }, { 346, 32 }};
static const XStringRes _Const0027 = { _StringsDefault0, 0x0080 };
static const XRect _Const0028 = {{ 13, 63 }, { 298, 93 }};
static const XStringRes _Const0029 = { _StringsDefault0, 0x008E };
static const XRect _Const002A = {{ 16, 96 }, { 307, 126 }};
static const XStringRes _Const002B = { _StringsDefault0, 0x00A1 };
static const XRect _Const002C = {{ 14, 150 }, { 201, 180 }};
static const XStringRes _Const002D = { _StringsDefault0, 0x00C3 };
static const XRect _Const002E = {{ 19, 123 }, { 310, 153 }};
static const XStringRes _Const002F = { _StringsDefault0, 0x00D7 };
static const XRect _Const0030 = {{ 118, 2 }, { 360, 32 }};
static const XStringRes _Const0031 = { _StringsDefault0, 0x00F9 };
static const XRect _Const0032 = {{ 18, 64 }, { 202, 94 }};
static const XStringRes _Const0033 = { _StringsDefault0, 0x010B };
static const XRect _Const0034 = {{ 18, 94 }, { 214, 124 }};
static const XStringRes _Const0035 = { _StringsDefault0, 0x0122 };
static const XRect _Const0036 = {{ 18, 221 }, { 347, 251 }};
static const XStringRes _Const0037 = { _StringsDefault0, 0x013A };
static const XStringRes _Const0038 = { _StringsDefault0, 0x014E };
static const XStringRes _Const0039 = { _StringsDefault0, 0x0154 };
static const XStringRes _Const003A = { _StringsDefault0, 0x015A };

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
  CoreSlideTouchHandler_OnSetRubberBandEffectDuration( &_this->SlideTouchHandler, 
  0 );
  CoreSlideTouchHandler_OnSetRetargetDelay( &_this->SlideTouchHandler, 1000 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler1, _Const0002 );
  CoreSlideTouchHandler_OnSetRubberBandEffectDuration( &_this->SlideTouchHandler1, 
  500 );
  _this->SlideTouchHandler1.RubberBandScrolling = 0;
  CoreSlideTouchHandler_OnSetRetargetDelay( &_this->SlideTouchHandler1, 1000 );
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

  ApplicationMainPage_changePage( _this, &_this->SlideTouchHandler );
}

/* 'C' function for method : 'Application::MainPage.onSlide1()' */
void ApplicationMainPage_onSlide1( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

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
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSlider, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Motor_On, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Motor_Error, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Motor_Off, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->ToggleButton, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->ToggleButton1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN1_ON, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN1_Off, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN2_ON, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN2_Off, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN3_ON, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN3_Off, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN4_ON, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->IN4_Off, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IN1_Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IN2_Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IN3_Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IN4_Text, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->TripResetButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationHMI );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0007 );
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->splashTimer, 3000 );
  CoreTimer_OnSetBegin( &_this->splashTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->splashTimer, 1 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->HorizontalSlider, _Const0008 );
  CoreGroup_OnSetClipViews((CoreGroup)&_this->HorizontalSlider, 1 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->HorizontalSlider, 2 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSlider, 1 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0009 );
  ViewsText_OnSetOverflowWarning( &_this->Text, 1 );
  ViewsText_OnSetColorBL( &_this->Text, _Const000A );
  ViewsText_OnSetColorBR( &_this->Text, _Const000A );
  ViewsText_OnSetColorTR( &_this->Text, _Const000A );
  ViewsText_OnSetColorTL( &_this->Text, _Const000A );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const000B ));
  ViewsText_OnSetColor( &_this->Text, _Const000A );
  CoreRectView__OnSetBounds( &_this->Text1, _Const000C );
  ViewsText_OnSetOverflowWarning( &_this->Text1, 1 );
  ViewsText_OnSetColorBL( &_this->Text1, _Const000A );
  ViewsText_OnSetColorBR( &_this->Text1, _Const000A );
  ViewsText_OnSetColorTR( &_this->Text1, _Const000A );
  ViewsText_OnSetColorTL( &_this->Text1, _Const000A );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const000D ));
  ViewsText_OnSetColor( &_this->Text1, _Const000A );
  CoreRectView__OnSetBounds( &_this->Text2, _Const000E );
  ViewsText_OnSetOverflowWarning( &_this->Text2, 1 );
  ViewsText_OnSetColorBL( &_this->Text2, _Const000A );
  ViewsText_OnSetColorBR( &_this->Text2, _Const000A );
  ViewsText_OnSetColorTR( &_this->Text2, _Const000A );
  ViewsText_OnSetColorTL( &_this->Text2, _Const000A );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const000F ));
  ViewsText_OnSetColor( &_this->Text2, _Const000A );
  CoreRectView__OnSetBounds( &_this->Text3, _Const0010 );
  ViewsText_OnSetOverflowWarning( &_this->Text3, 0 );
  ViewsText_OnSetColorBL( &_this->Text3, _Const000A );
  ViewsText_OnSetColorBR( &_this->Text3, _Const000A );
  ViewsText_OnSetColorTR( &_this->Text3, _Const000A );
  ViewsText_OnSetColorTL( &_this->Text3, _Const000A );
  ViewsText_OnSetWrapWidth( &_this->Text3, 0 );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const0011 ));
  ViewsText_OnSetColor( &_this->Text3, _Const000A );
  CoreRectView__OnSetBounds( &_this->Motor_On, _Const0012 );
  CoreRectView__OnSetBounds( &_this->Motor_Error, _Const0012 );
  CoreRectView__OnSetBounds( &_this->Motor_Off, _Const0012 );
  CoreRectView__OnSetBounds( &_this->ToggleButton, _Const0013 );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButton, EwLoadString( &_Const0014 ));
  CoreRectView__OnSetBounds( &_this->ToggleButton1, _Const0015 );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButton1, EwLoadString( &_Const0016 ));
  CoreRectView__OnSetBounds( &_this->IN1_ON, _Const0017 );
  CoreRectView__OnSetBounds( &_this->IN1_Off, _Const0017 );
  CoreRectView__OnSetBounds( &_this->IN2_ON, _Const0018 );
  CoreRectView__OnSetBounds( &_this->IN2_Off, _Const0019 );
  CoreRectView__OnSetBounds( &_this->IN3_ON, _Const001A );
  CoreRectView__OnSetBounds( &_this->IN3_Off, _Const001A );
  CoreRectView__OnSetBounds( &_this->IN4_ON, _Const001B );
  CoreRectView__OnSetBounds( &_this->IN4_Off, _Const001B );
  CoreRectView__OnSetBounds( &_this->IN1_Text, _Const001C );
  ViewsText_OnSetOverflowWarning( &_this->IN1_Text, 1 );
  ViewsText_OnSetColorBL( &_this->IN1_Text, _Const000A );
  ViewsText_OnSetColorBR( &_this->IN1_Text, _Const000A );
  ViewsText_OnSetColorTR( &_this->IN1_Text, _Const000A );
  ViewsText_OnSetColorTL( &_this->IN1_Text, _Const000A );
  ViewsText_OnSetString( &_this->IN1_Text, EwLoadString( &_Const001D ));
  ViewsText_OnSetColor( &_this->IN1_Text, _Const000A );
  CoreRectView__OnSetBounds( &_this->IN2_Text, _Const001E );
  ViewsText_OnSetOverflowWarning( &_this->IN2_Text, 1 );
  ViewsText_OnSetColorBL( &_this->IN2_Text, _Const000A );
  ViewsText_OnSetColorBR( &_this->IN2_Text, _Const000A );
  ViewsText_OnSetColorTR( &_this->IN2_Text, _Const000A );
  ViewsText_OnSetColorTL( &_this->IN2_Text, _Const000A );
  ViewsText_OnSetString( &_this->IN2_Text, EwLoadString( &_Const001F ));
  ViewsText_OnSetColor( &_this->IN2_Text, _Const000A );
  CoreRectView__OnSetBounds( &_this->IN3_Text, _Const0020 );
  ViewsText_OnSetOverflowWarning( &_this->IN3_Text, 1 );
  ViewsText_OnSetColorBL( &_this->IN3_Text, _Const000A );
  ViewsText_OnSetColorBR( &_this->IN3_Text, _Const000A );
  ViewsText_OnSetColorTR( &_this->IN3_Text, _Const000A );
  ViewsText_OnSetColorTL( &_this->IN3_Text, _Const000A );
  ViewsText_OnSetString( &_this->IN3_Text, EwLoadString( &_Const0021 ));
  ViewsText_OnSetColor( &_this->IN3_Text, _Const000A );
  CoreRectView__OnSetBounds( &_this->IN4_Text, _Const0022 );
  ViewsText_OnSetOverflowWarning( &_this->IN4_Text, 1 );
  ViewsText_OnSetColorBL( &_this->IN4_Text, _Const000A );
  ViewsText_OnSetColorBR( &_this->IN4_Text, _Const000A );
  ViewsText_OnSetColorTR( &_this->IN4_Text, _Const000A );
  ViewsText_OnSetColorTL( &_this->IN4_Text, _Const000A );
  ViewsText_OnSetString( &_this->IN4_Text, EwLoadString( &_Const0023 ));
  ViewsText_OnSetColor( &_this->IN4_Text, _Const000A );
  CoreRectView__OnSetBounds( &_this->TripResetButton, _Const0024 );
  WidgetSetPushButton_OnSetLabel( &_this->TripResetButton, EwLoadString( &_Const0025 ));
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HorizontalSlider ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Motor_On ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Motor_Error ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Motor_Off ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ToggleButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ToggleButton1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN1_ON ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN1_Off ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN2_ON ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN2_Off ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN3_ON ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN3_Off ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN4_ON ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN4_Off ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN1_Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN2_Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN3_Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->IN4_Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TripResetButton ), 0 );
  _this->splashTimer.OnTrigger = EwNewSlot( _this, ApplicationHMI_onTimer );
  _this->HorizontalSlider.OnChange = EwNewSlot( _this, ApplicationHMI_motorSlider );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSlider, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Small, WidgetSetHorizontalSliderConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Motor_On, EwLoadResource( &ApplicationGreenLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Motor_Error, EwLoadResource( &ApplicationRedLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Motor_Off, EwLoadResource( &ApplicationTurnedOffLed, 
  ResourcesBitmap ));
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButton, EwGetAutoObject( 
  &WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig ));
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButton1, EwGetAutoObject( 
  &WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig ));
  ViewsImage_OnSetBitmap( &_this->IN1_ON, EwLoadResource( &ApplicationGreenLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->IN1_Off, EwLoadResource( &ApplicationTurnedOffLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->IN2_ON, EwLoadResource( &ApplicationGreenLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->IN2_Off, EwLoadResource( &ApplicationTurnedOffLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->IN3_ON, EwLoadResource( &ApplicationGreenLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->IN3_Off, EwLoadResource( &ApplicationTurnedOffLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->IN4_ON, EwLoadResource( &ApplicationGreenLed, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->IN4_Off, EwLoadResource( &ApplicationTurnedOffLed, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->IN1_Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->IN2_Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->IN3_Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->IN4_Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->TripResetButton.OnPress = EwNewSlot( _this, ApplicationHMI_onTripResetPress );
  WidgetSetPushButton_OnSetAppearance( &_this->TripResetButton, EwGetAutoObject( 
  &WidgetSetPushButton_Mono_Medium, WidgetSetPushButtonConfig ));
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
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSlider );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text3 );
  ViewsImage__ReInit( &_this->Motor_On );
  ViewsImage__ReInit( &_this->Motor_Error );
  ViewsImage__ReInit( &_this->Motor_Off );
  WidgetSetToggleButton__ReInit( &_this->ToggleButton );
  WidgetSetToggleButton__ReInit( &_this->ToggleButton1 );
  ViewsImage__ReInit( &_this->IN1_ON );
  ViewsImage__ReInit( &_this->IN1_Off );
  ViewsImage__ReInit( &_this->IN2_ON );
  ViewsImage__ReInit( &_this->IN2_Off );
  ViewsImage__ReInit( &_this->IN3_ON );
  ViewsImage__ReInit( &_this->IN3_Off );
  ViewsImage__ReInit( &_this->IN4_ON );
  ViewsImage__ReInit( &_this->IN4_Off );
  ViewsText__ReInit( &_this->IN1_Text );
  ViewsText__ReInit( &_this->IN2_Text );
  ViewsText__ReInit( &_this->IN3_Text );
  ViewsText__ReInit( &_this->IN4_Text );
  WidgetSetPushButton__ReInit( &_this->TripResetButton );
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
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSlider );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text3 );
  ViewsImage__Done( &_this->Motor_On );
  ViewsImage__Done( &_this->Motor_Error );
  ViewsImage__Done( &_this->Motor_Off );
  WidgetSetToggleButton__Done( &_this->ToggleButton );
  WidgetSetToggleButton__Done( &_this->ToggleButton1 );
  ViewsImage__Done( &_this->IN1_ON );
  ViewsImage__Done( &_this->IN1_Off );
  ViewsImage__Done( &_this->IN2_ON );
  ViewsImage__Done( &_this->IN2_Off );
  ViewsImage__Done( &_this->IN3_ON );
  ViewsImage__Done( &_this->IN3_Off );
  ViewsImage__Done( &_this->IN4_ON );
  ViewsImage__Done( &_this->IN4_Off );
  ViewsText__Done( &_this->IN1_Text );
  ViewsText__Done( &_this->IN2_Text );
  ViewsText__Done( &_this->IN3_Text );
  ViewsText__Done( &_this->IN4_Text );
  WidgetSetPushButton__Done( &_this->TripResetButton );

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

/* 'C' function for method : 'Application::HMI.motorSlider()' */
void ApplicationHMI_motorSlider( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSlider ) 
      == 0 ) || ( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSlider ) 
      == 2 ))
  {
    ViewsImage_OnSetVisible( &_this->Motor_Error, 0 );
    ViewsImage_OnSetVisible( &_this->Motor_Off, 0 );
    ViewsImage_OnSetVisible( &_this->Motor_On, 1 );
  }
  else
    if ( WidgetSetHorizontalSlider_OnGetCurrentValue( &_this->HorizontalSlider ) 
        == 1 )
    {
      ViewsImage_OnSetVisible( &_this->Motor_Error, 0 );
      ViewsImage_OnSetVisible( &_this->Motor_Off, 1 );
      ViewsImage_OnSetVisible( &_this->Motor_On, 0 );
    }
}

/* 'C' function for method : 'Application::HMI.onTripResetPress()' */
void ApplicationHMI_onTripResetPress( ApplicationHMI _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* Variants derived from the class : 'Application::HMI' */
EW_DEFINE_CLASS_VARIANTS( ApplicationHMI )
EW_END_OF_CLASS_VARIANTS( ApplicationHMI )

/* Virtual Method Table (VMT) for the class : 'Application::HMI' */
EW_DEFINE_CLASS( ApplicationHMI, CoreGroup, WipeTouchHandler, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::HMI" )
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

/* Include a file containing the bitmap resource : 'Application::GreenLed' */
#include "_ApplicationGreenLed.h"

/* Table with links to derived variants of the bitmap resource : 'Application::GreenLed' */
EW_RES_WITHOUT_VARIANTS( ApplicationGreenLed )

/* Include a file containing the bitmap resource : 'Application::RedLed' */
#include "_ApplicationRedLed.h"

/* Table with links to derived variants of the bitmap resource : 'Application::RedLed' */
EW_RES_WITHOUT_VARIANTS( ApplicationRedLed )

/* Include a file containing the bitmap resource : 'Application::TurnedOffLed' */
#include "_ApplicationTurnedOffLed.h"

/* Table with links to derived variants of the bitmap resource : 'Application::TurnedOffLed' */
EW_RES_WITHOUT_VARIANTS( ApplicationTurnedOffLed )

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
  CoreRectView__OnSetBounds( &_this->Title, _Const0026 );
  ViewsText_OnSetOverflowWarning( &_this->Title, 0 );
  ViewsText_OnSetColorBL( &_this->Title, _Const000A );
  ViewsText_OnSetColorBR( &_this->Title, _Const000A );
  ViewsText_OnSetColorTR( &_this->Title, _Const000A );
  ViewsText_OnSetColorTL( &_this->Title, _Const000A );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0027 ));
  ViewsText_OnSetColor( &_this->Title, _Const000A );
  CoreRectView__OnSetBounds( &_this->MLFB, _Const0028 );
  ViewsText_OnSetOverflowWarning( &_this->MLFB, 1 );
  ViewsText_OnSetColorBL( &_this->MLFB, _Const000A );
  ViewsText_OnSetColorBR( &_this->MLFB, _Const000A );
  ViewsText_OnSetColorTR( &_this->MLFB, _Const000A );
  ViewsText_OnSetColorTL( &_this->MLFB, _Const000A );
  ViewsText_OnSetString( &_this->MLFB, EwLoadString( &_Const0029 ));
  ViewsText_OnSetColor( &_this->MLFB, _Const000A );
  CoreRectView__OnSetBounds( &_this->InstallationDate, _Const002A );
  ViewsText_OnSetOverflowWarning( &_this->InstallationDate, 1 );
  ViewsText_OnSetColorBL( &_this->InstallationDate, _Const000A );
  ViewsText_OnSetColorBR( &_this->InstallationDate, _Const000A );
  ViewsText_OnSetColorTR( &_this->InstallationDate, _Const000A );
  ViewsText_OnSetColorTL( &_this->InstallationDate, _Const000A );
  ViewsText_OnSetString( &_this->InstallationDate, EwLoadString( &_Const002B ));
  ViewsText_OnSetColor( &_this->InstallationDate, _Const000A );
  CoreView_OnSetLayout((CoreView)&_this->Author, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Author, _Const002C );
  ViewsText_OnSetOverflowWarning( &_this->Author, 1 );
  ViewsText_OnSetColorBL( &_this->Author, _Const000A );
  ViewsText_OnSetColorBR( &_this->Author, _Const000A );
  ViewsText_OnSetColorTR( &_this->Author, _Const000A );
  ViewsText_OnSetColorTL( &_this->Author, _Const000A );
  ViewsText_OnSetString( &_this->Author, EwLoadString( &_Const002D ));
  ViewsText_OnSetColor( &_this->Author, _Const000A );
  CoreRectView__OnSetBounds( &_this->Location, _Const002E );
  ViewsText_OnSetOverflowWarning( &_this->Location, 1 );
  ViewsText_OnSetColorBL( &_this->Location, _Const000A );
  ViewsText_OnSetColorBR( &_this->Location, _Const000A );
  ViewsText_OnSetColorTR( &_this->Location, _Const000A );
  ViewsText_OnSetColorTL( &_this->Location, _Const000A );
  ViewsText_OnSetString( &_this->Location, EwLoadString( &_Const002F ));
  ViewsText_OnSetColor( &_this->Location, _Const000A );
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
  CoreRectView__OnSetBounds( &_this->Title, _Const0030 );
  ViewsText_OnSetOverflowWarning( &_this->Title, 0 );
  ViewsText_OnSetColorBL( &_this->Title, _Const000A );
  ViewsText_OnSetColorBR( &_this->Title, _Const000A );
  ViewsText_OnSetColorTR( &_this->Title, _Const000A );
  ViewsText_OnSetColorTL( &_this->Title, _Const000A );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0031 ));
  ViewsText_OnSetColor( &_this->Title, _Const000A );
  CoreRectView__OnSetBounds( &_this->NumberOfCWrotations, _Const0032 );
  ViewsText_OnSetOverflowWarning( &_this->NumberOfCWrotations, 1 );
  ViewsText_OnSetColorBL( &_this->NumberOfCWrotations, _Const000A );
  ViewsText_OnSetColorBR( &_this->NumberOfCWrotations, _Const000A );
  ViewsText_OnSetColorTR( &_this->NumberOfCWrotations, _Const000A );
  ViewsText_OnSetColorTL( &_this->NumberOfCWrotations, _Const000A );
  ViewsText_OnSetString( &_this->NumberOfCWrotations, EwLoadString( &_Const0033 ));
  ViewsText_OnSetColor( &_this->NumberOfCWrotations, _Const000A );
  CoreRectView__OnSetBounds( &_this->NumberOfCCWrotations, _Const0034 );
  ViewsText_OnSetOverflowWarning( &_this->NumberOfCCWrotations, 1 );
  ViewsText_OnSetColorBL( &_this->NumberOfCCWrotations, _Const000A );
  ViewsText_OnSetColorBR( &_this->NumberOfCCWrotations, _Const000A );
  ViewsText_OnSetColorTR( &_this->NumberOfCCWrotations, _Const000A );
  ViewsText_OnSetColorTL( &_this->NumberOfCCWrotations, _Const000A );
  ViewsText_OnSetString( &_this->NumberOfCCWrotations, EwLoadString( &_Const0035 ));
  ViewsText_OnSetColor( &_this->NumberOfCCWrotations, _Const000A );
  CoreRectView__OnSetBounds( &_this->OperatingHours, _Const0036 );
  ViewsText_OnSetOverflowWarning( &_this->OperatingHours, 1 );
  ViewsText_OnSetColorBL( &_this->OperatingHours, _Const000A );
  ViewsText_OnSetColorBR( &_this->OperatingHours, _Const000A );
  ViewsText_OnSetColorTR( &_this->OperatingHours, _Const000A );
  ViewsText_OnSetColorTL( &_this->OperatingHours, _Const000A );
  ViewsText_OnSetString( &_this->OperatingHours, EwLoadString( &_Const0037 ));
  ViewsText_OnSetColor( &_this->OperatingHours, _Const000A );
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
  &_Const0037 ), EwNewStringInt( hours, 0, 10 )), EwLoadString( &_Const0038 )), 
  EwNewStringInt( minutes, 0, 10 )), EwLoadString( &_Const0039 )), EwNewStringInt( 
  seconds, 0, 10 )), EwLoadString( &_Const003A )));
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

/* Embedded Wizard */
