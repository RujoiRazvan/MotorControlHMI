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

#ifndef _ApplicationHMI_H
#define _ApplicationHMI_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 14
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 14
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationFaultOrWarning.h"
#include "_ApplicationInput.h"
#include "_ApplicationLed.h"
#include "_ApplicationReady.h"
#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_CoreWipeTouchHandler.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetToggleButton.h"

/* Forward declaration of the class Application::HMI */
#ifndef _ApplicationHMI_
  EW_DECLARE_CLASS( ApplicationHMI )
#define _ApplicationHMI_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif


/* Deklaration of class : 'Application::HMI' */
EW_DEFINE_FIELDS( ApplicationHMI, CoreGroup )
  EW_OBJECT  ( WipeTouchHandler, CoreWipeTouchHandler )
  EW_OBJECT  ( splashTimer,     CoreTimer )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( Out1,            WidgetSetToggleButton )
  EW_OBJECT  ( Out2,            WidgetSetToggleButton )
  EW_OBJECT  ( TripResetButton, WidgetSetPushButton )
  EW_OBJECT  ( CW,              WidgetSetToggleButton )
  EW_OBJECT  ( CCW,             WidgetSetToggleButton )
  EW_OBJECT  ( Cycle,           WidgetSetToggleButton )
  EW_OBJECT  ( CycleCounterText, ViewsText )
  EW_OBJECT  ( CycleCounterValue, ViewsText )
  EW_OBJECT  ( Fault,           ApplicationFaultOrWarning )
  EW_OBJECT  ( Warning,         ApplicationFaultOrWarning )
  EW_OBJECT  ( Ready,           ApplicationReady )
  EW_OBJECT  ( IN1,             ApplicationInput )
  EW_OBJECT  ( IN2,             ApplicationInput )
  EW_OBJECT  ( IN3,             ApplicationInput )
  EW_OBJECT  ( IN4,             ApplicationInput )
  EW_OBJECT  ( CWLed,           ApplicationLed )
  EW_OBJECT  ( CCWLed,          ApplicationLed )
  EW_OBJECT  ( CycleLed,        ApplicationLed )
  EW_PROPERTY( Outlet_On1,      XRef )
  EW_PROPERTY( Outlet_On2,      XRef )
  EW_PROPERTY( Value,           XInt32 )
  EW_PROPERTY( Value_Out2,      XInt32 )
  EW_PROPERTY( cwValue,         XInt16 )
  EW_PROPERTY( ccwValue,        XInt16 )
  EW_PROPERTY( faultEnabled,    XBool )
  EW_PROPERTY( warningEnabled,  XBool )
  EW_PROPERTY( input1State,     XBool )
EW_END_OF_FIELDS( ApplicationHMI )

/* Virtual Method Table (VMT) for the class : 'Application::HMI' */
EW_DEFINE_METHODS( ApplicationHMI, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( ApplicationHMI )

/* 'C' function for method : 'Application::HMI.onTimer()' */
void ApplicationHMI_onTimer( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.onTripResetPress()' */
void ApplicationHMI_onTripResetPress( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.onOut1On()' */
void ApplicationHMI_onOut1On( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.onOut1Off()' */
void ApplicationHMI_onOut1Off( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.OnSetValue()' */
void ApplicationHMI_OnSetValue( ApplicationHMI _this, XInt32 value );

/* 'C' function for method : 'Application::HMI.onOut2On()' */
void ApplicationHMI_onOut2On( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.onOut2Off()' */
void ApplicationHMI_onOut2Off( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.OnSetValue_Out2()' */
void ApplicationHMI_OnSetValue_Out2( ApplicationHMI _this, XInt32 value );

/* 'C' function for method : 'Application::HMI.onCWOn()' */
void ApplicationHMI_onCWOn( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.onCWOff()' */
void ApplicationHMI_onCWOff( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.onCCWOn()' */
void ApplicationHMI_onCCWOn( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.onCCWOff()' */
void ApplicationHMI_onCCWOff( ApplicationHMI _this, XObject sender );

/* 'C' function for method : 'Application::HMI.OnSetcwValue()' */
void ApplicationHMI_OnSetcwValue( ApplicationHMI _this, XInt16 value );

/* 'C' function for method : 'Application::HMI.OnSetccwValue()' */
void ApplicationHMI_OnSetccwValue( ApplicationHMI _this, XInt16 value );

/* 'C' function for method : 'Application::HMI.OnSetfaultEnabled()' */
void ApplicationHMI_OnSetfaultEnabled( ApplicationHMI _this, XBool value );

/* 'C' function for method : 'Application::HMI.OnSetwarningEnabled()' */
void ApplicationHMI_OnSetwarningEnabled( ApplicationHMI _this, XBool value );

/* 'C' function for method : 'Application::HMI.OnSetinput1State()' */
void ApplicationHMI_OnSetinput1State( ApplicationHMI _this, XBool value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationHMI_H */

/* Embedded Wizard */
