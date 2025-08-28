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

#ifndef _ApplicationMainPage_H
#define _ApplicationMainPage_H

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

#include "_ApplicationHMI.h"
#include "_ApplicationMeasuredValues.h"
#include "_ApplicationSystemInfo.h"
#include "_ApplicationWelcomePage.h"
#include "_CoreRoot.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"

/* Forward declaration of the class Application::MainPage */
#ifndef _ApplicationMainPage_
  EW_DECLARE_CLASS( ApplicationMainPage )
#define _ApplicationMainPage_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
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

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* This is the root component of the entire GUI application. */
EW_DEFINE_FIELDS( ApplicationMainPage, CoreRoot )
  EW_OBJECT  ( HMI,             ApplicationHMI )
  EW_OBJECT  ( WelcomePage,     ApplicationWelcomePage )
  EW_OBJECT  ( SystemInfo,      ApplicationSystemInfo )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( SlideTouchHandler1, CoreSlideTouchHandler )
  EW_OBJECT  ( WelcomePageTimer, CoreTimer )
  EW_OBJECT  ( MeasuredValues,  ApplicationMeasuredValues )
  EW_VARIABLE( readyToSlide,    XBool )
EW_END_OF_FIELDS( ApplicationMainPage )

/* Virtual Method Table (VMT) for the class : 'Application::MainPage' */
EW_DEFINE_METHODS( ApplicationMainPage, CoreRoot )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreRoot _this )
  EW_METHOD( Draw,              void )( CoreRoot _this, GraphicsCanvas aCanvas, 
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
  EW_METHOD( ChangeViewState,   void )( CoreRoot _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreRoot _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreRoot _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreRoot _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreRoot _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreRoot _this, XRect aArea )
EW_END_OF_METHODS( ApplicationMainPage )

/* 'C' function for method : 'Application::MainPage.onWelcomePageTimer()' */
void ApplicationMainPage_onWelcomePageTimer( ApplicationMainPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::MainPage.onSlide()' */
void ApplicationMainPage_onSlide( ApplicationMainPage _this, XObject sender );

/* 'C' function for method : 'Application::MainPage.onSlide1()' */
void ApplicationMainPage_onSlide1( ApplicationMainPage _this, XObject sender );

/* 'C' function for method : 'Application::MainPage.changePage()' */
void ApplicationMainPage_changePage( ApplicationMainPage _this, CoreSlideTouchHandler 
  touchHandler );

/* 'C' function for method : 'Application::MainPage.onStart()' */
void ApplicationMainPage_onStart( ApplicationMainPage _this, XObject sender );

/* 'C' function for method : 'Application::MainPage.onEnd()' */
void ApplicationMainPage_onEnd( ApplicationMainPage _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationMainPage_H */

/* Embedded Wizard */
