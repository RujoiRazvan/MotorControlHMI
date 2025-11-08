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
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0x6C, 0x6E, 0x70, 0xFF };
static const XColor _Const0001 = { 0xA8, 0xAB, 0xAB, 0xFF };
static const XColor _Const0002 = { 0xA8, 0xAB, 0xAB, 0xAA };
static const XPoint _Const0003 = { 70, 39 };
static const XColor _Const0004 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0005 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0006 = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const0007 = { 0, 50 };
static const XPoint _Const0008 = { 150, 50 };
static const XPoint _Const0009 = { 150, 0 };
static const XPoint _Const000A = { 0, 0 };
static const XRect _Const000B = {{ 0, 0 }, { 0, 0 }};
static const XPoint _Const000C = { -1, -1 };
static const XColor _Const000D = { 0x00, 0x00, 0x00, 0x00 };
static const XColor _Const000E = { 0x00, 0x00, 0x00, 0xEE };
static const XColor _Const000F = { 0x00, 0x00, 0x00, 0x88 };
static const XColor _Const0010 = { 0x00, 0x00, 0x00, 0x22 };
static const XColor _Const0011 = { 0x00, 0x00, 0x00, 0x44 };
static const XColor _Const0012 = { 0x44, 0x44, 0x44, 0xFF };
static const XColor _Const0013 = { 0x44, 0x44, 0x44, 0x44 };
static const XPoint _Const0014 = { 40, 40 };
static const XColor _Const0015 = { 0x00, 0x00, 0x00, 0x11 };
static const XPoint _Const0016 = { 12, 0 };
static const XPoint _Const0017 = { 70, 60 };
static const XPoint _Const0018 = { 60, 60 };
static const XPoint _Const0019 = { -2, 0 };
static const XPoint _Const001A = { -12, 0 };
static const XColor _Const001B = { 0xDD, 0xDD, 0xDD, 0xFF };
static const XColor _Const001C = { 0xEE, 0xEE, 0xEE, 0xFF };
static const XPoint _Const001D = { -3, 0 };
static const XPoint _Const001E = { 40, 30 };
static const XPoint _Const001F = { 30, 30 };
static const XPoint _Const0020 = { -17, 0 };
static const XPoint _Const0021 = { -27, 0 };
static const XPoint _Const0022 = { 60, 36 };
static const XPoint _Const0023 = { 60, 40 };

/* Include a file containing the bitmap resource : 'WidgetSet::SwitchMedium' */
#include "_WidgetSetSwitchMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::SwitchMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetSwitchMedium )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DEFINE_AUTOOBJECT( WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig )

/* Initializer for the auto object 'WidgetSet::Switch_Lime_Medium' */
void WidgetSetSwitch_Lime_Medium__Init( WidgetSetToggleButtonConfig _this )
{
  WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetLabelAlignment( _this, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetLabelOnFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetLabelOffFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetIconAlignment( _this, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetFaceLayout( _this, CoreLayoutAlignToRight );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( _this, 7 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( _this, 5 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( _this, 3 );
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( _this, 6 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( _this, 4 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( _this, 0 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetWidgetMinSize( _this, _Const0003 );
}

/* Re-Initializer for the auto object 'WidgetSet::Switch_Lime_Medium' */
void WidgetSetSwitch_Lime_Medium__ReInit( WidgetSetToggleButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::Switch_Lime_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Medium )

/* Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Init( WidgetSetToggleButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->AccentLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->ThumbLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->TrackLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->LabelOnColorActive = _Const0004;
  _this->LabelOnColorFocused = _Const0004;
  _this->LabelOnColorDisabled = _Const0004;
  _this->LabelOnColorDefault = _Const0004;
  _this->LabelOffColorActive = _Const0004;
  _this->LabelOffColorFocused = _Const0004;
  _this->LabelOffColorDisabled = _Const0004;
  _this->LabelOffColorDefault = _Const0004;
  _this->IconOnTintActive = _Const0005;
  _this->IconOnTintFocused = _Const0005;
  _this->IconOnTintDisabled = _Const0005;
  _this->IconOnTintDefault = _Const0005;
  _this->IconOffTintActive = _Const0005;
  _this->IconOffTintFocused = _Const0005;
  _this->IconOffTintDisabled = _Const0005;
  _this->IconOffTintDefault = _Const0005;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->FaceLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->FaceOnFrameActive = -1;
  _this->FaceOnFrameFocused = -1;
  _this->FaceOnFrameDisabled = -1;
  _this->FaceOnFrameDefault = -1;
  _this->FaceOffFrameActive = -1;
  _this->FaceOffFrameFocused = -1;
  _this->FaceOffFrameDisabled = -1;
  _this->FaceOffFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__ReInit( WidgetSetToggleButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Done( WidgetSetToggleButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetStateTransitionDuration()' */
void WidgetSetToggleButtonConfig_OnSetStateTransitionDuration( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->StateTransitionDuration == value )
    return;

  _this->StateTransitionDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetPressedFeedbackDuration()' */
void WidgetSetToggleButtonConfig_OnSetPressedFeedbackDuration( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->PressedFeedbackDuration == value )
    return;

  _this->PressedFeedbackDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLimitTouchArea()' */
void WidgetSetToggleButtonConfig_OnSetLimitTouchArea( WidgetSetToggleButtonConfig _this, 
  XBool value )
{
  if ( _this->LimitTouchArea == value )
    return;

  _this->LimitTouchArea = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOnColorActive, value ))
    return;

  _this->AccentOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOnColorFocused, value ))
    return;

  _this->AccentOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusActive == value )
    return;

  _this->AccentOnCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusFocused == value )
    return;

  _this->AccentOnCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusDisabled == value )
    return;

  _this->AccentOnCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusDefault == value )
    return;

  _this->AccentOnCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetActive, value ))
    return;

  _this->AccentOnOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetFocused, value ))
    return;

  _this->AccentOnOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetDisabled, value ))
    return;

  _this->AccentOnOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetDefault, value ))
    return;

  _this->AccentOnOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeActive, value ))
    return;

  _this->AccentOnSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeFocused, value ))
    return;

  _this->AccentOnSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeDisabled, value ))
    return;

  _this->AccentOnSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeDefault, value ))
    return;

  _this->AccentOnSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOffColorActive, value ))
    return;

  _this->AccentOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOffColorFocused, value ))
    return;

  _this->AccentOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusActive == value )
    return;

  _this->AccentOffCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusFocused == value )
    return;

  _this->AccentOffCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusDisabled == value )
    return;

  _this->AccentOffCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusDefault == value )
    return;

  _this->AccentOffCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetActive, value ))
    return;

  _this->AccentOffOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetFocused, value ))
    return;

  _this->AccentOffOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetDisabled, value ))
    return;

  _this->AccentOffOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetDefault, value ))
    return;

  _this->AccentOffOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeActive, value ))
    return;

  _this->AccentOffSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeFocused, value ))
    return;

  _this->AccentOffSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeDisabled, value ))
    return;

  _this->AccentOffSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeDefault, value ))
    return;

  _this->AccentOffSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentLayout()' */
void WidgetSetToggleButtonConfig_OnSetAccentLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->AccentLayout == value )
    return;

  _this->AccentLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorActive, value ))
    return;

  _this->ThumbOnBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorFocused, value ))
    return;

  _this->ThumbOnBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorDisabled, value ))
    return;

  _this->ThumbOnBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorDefault, value ))
    return;

  _this->ThumbOnBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthActive == value )
    return;

  _this->ThumbOnBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthFocused == value )
    return;

  _this->ThumbOnBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthDisabled == value )
    return;

  _this->ThumbOnBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthDefault == value )
    return;

  _this->ThumbOnBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorActive, value ))
    return;

  _this->ThumbOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorFocused, value ))
    return;

  _this->ThumbOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorDisabled, value ))
    return;

  _this->ThumbOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorDefault, value ))
    return;

  _this->ThumbOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusActive == value )
    return;

  _this->ThumbOnCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusFocused == value )
    return;

  _this->ThumbOnCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusDisabled == value )
    return;

  _this->ThumbOnCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusDefault == value )
    return;

  _this->ThumbOnCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetActive, value ))
    return;

  _this->ThumbOnOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetFocused, value ))
    return;

  _this->ThumbOnOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetDisabled, value ))
    return;

  _this->ThumbOnOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetDefault, value ))
    return;

  _this->ThumbOnOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeActive, value ))
    return;

  _this->ThumbOnSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeFocused, value ))
    return;

  _this->ThumbOnSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeDisabled, value ))
    return;

  _this->ThumbOnSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeDefault, value ))
    return;

  _this->ThumbOnSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorActive, value ))
    return;

  _this->ThumbOffBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorFocused, value ))
    return;

  _this->ThumbOffBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorDisabled, value ))
    return;

  _this->ThumbOffBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorDefault, value ))
    return;

  _this->ThumbOffBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthActive == value )
    return;

  _this->ThumbOffBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthFocused == value )
    return;

  _this->ThumbOffBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthDisabled == value )
    return;

  _this->ThumbOffBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthDefault == value )
    return;

  _this->ThumbOffBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorActive, value ))
    return;

  _this->ThumbOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorFocused, value ))
    return;

  _this->ThumbOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorDisabled, value ))
    return;

  _this->ThumbOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorDefault, value ))
    return;

  _this->ThumbOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusActive == value )
    return;

  _this->ThumbOffCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusFocused == value )
    return;

  _this->ThumbOffCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusDisabled == value )
    return;

  _this->ThumbOffCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusDefault == value )
    return;

  _this->ThumbOffCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetActive, value ))
    return;

  _this->ThumbOffOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetFocused, value ))
    return;

  _this->ThumbOffOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetDisabled, value ))
    return;

  _this->ThumbOffOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetDefault, value ))
    return;

  _this->ThumbOffOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeActive, value ))
    return;

  _this->ThumbOffSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeFocused, value ))
    return;

  _this->ThumbOffSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeDisabled, value ))
    return;

  _this->ThumbOffSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeDefault, value ))
    return;

  _this->ThumbOffSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbLayout()' */
void WidgetSetToggleButtonConfig_OnSetThumbLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->ThumbLayout == value )
    return;

  _this->ThumbLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorActive, value ))
    return;

  _this->TrackOnBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorFocused, value ))
    return;

  _this->TrackOnBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorDisabled, value ))
    return;

  _this->TrackOnBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorDefault, value ))
    return;

  _this->TrackOnBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthActive == value )
    return;

  _this->TrackOnBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthFocused == value )
    return;

  _this->TrackOnBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthDisabled == value )
    return;

  _this->TrackOnBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthDefault == value )
    return;

  _this->TrackOnBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorActive, value ))
    return;

  _this->TrackOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorFocused, value ))
    return;

  _this->TrackOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorDisabled, value ))
    return;

  _this->TrackOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorDefault, value ))
    return;

  _this->TrackOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorActive, value ))
    return;

  _this->TrackOffBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorFocused, value ))
    return;

  _this->TrackOffBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorDisabled, value ))
    return;

  _this->TrackOffBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorDefault, value ))
    return;

  _this->TrackOffBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthActive == value )
    return;

  _this->TrackOffBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthFocused == value )
    return;

  _this->TrackOffBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthDisabled == value )
    return;

  _this->TrackOffBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthDefault == value )
    return;

  _this->TrackOffBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorActive, value ))
    return;

  _this->TrackOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorFocused, value ))
    return;

  _this->TrackOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorDisabled, value ))
    return;

  _this->TrackOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorDefault, value ))
    return;

  _this->TrackOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackCornerRadius()' */
void WidgetSetToggleButtonConfig_OnSetTrackCornerRadius( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackCornerRadius == value )
    return;

  _this->TrackCornerRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackSize()' */
void WidgetSetToggleButtonConfig_OnSetTrackSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->TrackSize, value ))
    return;

  _this->TrackSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackLayout()' */
void WidgetSetToggleButtonConfig_OnSetTrackLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->TrackLayout == value )
    return;

  _this->TrackLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorActive, value ))
    return;

  _this->LabelOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorFocused, value ))
    return;

  _this->LabelOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDisabled, value ))
    return;

  _this->LabelOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDefault, value ))
    return;

  _this->LabelOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorActive, value ))
    return;

  _this->LabelOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorFocused, value ))
    return;

  _this->LabelOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDisabled, value ))
    return;

  _this->LabelOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDefault, value ))
    return;

  _this->LabelOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetLabelMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintActive, value ))
    return;

  _this->IconOnTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintFocused, value ))
    return;

  _this->IconOnTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDisabled, value ))
    return;

  _this->IconOnTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDefault, value ))
    return;

  _this->IconOnTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintActive, value ))
    return;

  _this->IconOffTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintFocused, value ))
    return;

  _this->IconOffTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDisabled, value ))
    return;

  _this->IconOffTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDefault, value ))
    return;

  _this->IconOffTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetIconMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelAlignment()' */
void WidgetSetToggleButtonConfig_OnSetLabelAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->LabelAlignment == value )
    return;

  _this->LabelAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOnFont == value )
    return;

  _this->LabelOnFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOffFont == value )
    return;

  _this->LabelOffFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconAlignment()' */
void WidgetSetToggleButtonConfig_OnSetIconAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->IconAlignment == value )
    return;

  _this->IconAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceLayout()' */
void WidgetSetToggleButtonConfig_OnSetFaceLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->FaceLayout == value )
    return;

  _this->FaceLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameActive == value )
    return;

  _this->FaceOnFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameFocused == value )
    return;

  _this->FaceOnFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDisabled == value )
    return;

  _this->FaceOnFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDefault == value )
    return;

  _this->FaceOnFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapActive == value )
    return;

  _this->FaceOnBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapFocused == value )
    return;

  _this->FaceOnBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDisabled == value )
    return;

  _this->FaceOnBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDefault == value )
    return;

  _this->FaceOnBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameActive == value )
    return;

  _this->FaceOffFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameFocused == value )
    return;

  _this->FaceOffFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDisabled == value )
    return;

  _this->FaceOffFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDefault == value )
    return;

  _this->FaceOffFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapActive == value )
    return;

  _this->FaceOffBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapFocused == value )
    return;

  _this->FaceOffBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDisabled == value )
    return;

  _this->FaceOffBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDefault == value )
    return;

  _this->FaceOffBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetToggleButtonConfig_OnSetWidgetMinSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig, LabelOnFont, 
                 LabelOnFont, StateTransitionDuration, StateTransitionDuration, 
                 StateTransitionDuration, StateTransitionDuration, "WidgetSet::ToggleButtonConfig" )
EW_END_OF_CLASS( WidgetSetToggleButtonConfig )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->LabelColorActive = _Const0004;
  _this->LabelColorFocused = _Const0004;
  _this->LabelColorDisabled = _Const0004;
  _this->LabelColorDefault = _Const0004;
  _this->IconTintActive = _Const0005;
  _this->IconTintFocused = _Const0005;
  _this->IconTintDisabled = _Const0005;
  _this->IconTintDefault = _Const0005;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetStateTransitionDuration()' */
void WidgetSetPushButtonConfig_OnSetStateTransitionDuration( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->StateTransitionDuration == value )
    return;

  _this->StateTransitionDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetPressedFeedbackDuration()' */
void WidgetSetPushButtonConfig_OnSetPressedFeedbackDuration( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->PressedFeedbackDuration == value )
    return;

  _this->PressedFeedbackDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorFocused, value ))
    return;

  _this->ThumbShadowColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorDefault, value ))
    return;

  _this->ThumbShadowColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusFocused == value )
    return;

  _this->ThumbShadowBlurRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusDefault == value )
    return;

  _this->ThumbShadowBlurRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorActive, value ))
    return;

  _this->ThumbBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorFocused, value ))
    return;

  _this->ThumbBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDisabled, value ))
    return;

  _this->ThumbBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDefault, value ))
    return;

  _this->ThumbBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthActive()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthActive == value )
    return;

  _this->ThumbBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthFocused == value )
    return;

  _this->ThumbBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDisabled == value )
    return;

  _this->ThumbBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDefault == value )
    return;

  _this->ThumbBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorActive, value ))
    return;

  _this->ThumbColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorFocused, value ))
    return;

  _this->ThumbColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDisabled, value ))
    return;

  _this->ThumbColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDefault, value ))
    return;

  _this->ThumbColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusActive()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusActive == value )
    return;

  _this->ThumbCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusFocused == value )
    return;

  _this->ThumbCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDisabled == value )
    return;

  _this->ThumbCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDefault == value )
    return;

  _this->ThumbCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginBottom == value )
    return;

  _this->LabelMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginTop()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginTop == value )
    return;

  _this->LabelMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginLeft == value )
    return;

  _this->LabelMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintActive()' */
void WidgetSetPushButtonConfig_OnSetIconTintActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintActive, value ))
    return;

  _this->IconTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintFocused()' */
void WidgetSetPushButtonConfig_OnSetIconTintFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintFocused, value ))
    return;

  _this->IconTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetIconTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDisabled, value ))
    return;

  _this->IconTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDefault()' */
void WidgetSetPushButtonConfig_OnSetIconTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDefault, value ))
    return;

  _this->IconTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetIconMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginBottom == value )
    return;

  _this->IconMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginTop()' */
void WidgetSetPushButtonConfig_OnSetIconMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginTop == value )
    return;

  _this->IconMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginRight()' */
void WidgetSetPushButtonConfig_OnSetIconMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetIconMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginLeft == value )
    return;

  _this->IconMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetPushButtonConfig_OnSetWidgetMinSize( WidgetSetPushButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, LabelFont, 
                 StateTransitionDuration, StateTransitionDuration, StateTransitionDuration, 
                 StateTransitionDuration, "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Init( WidgetSetToggleButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0006 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0007 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0008 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000A );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetToggleButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetToggleButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetToggleButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__ReInit( WidgetSetToggleButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Done( WidgetSetToggleButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetBounds()' */
void WidgetSetToggleButton_OnSetBounds( WidgetSetToggleButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
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
void WidgetSetToggleButton_UpdateViewState( WidgetSetToggleButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsText;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsRect2;
  XBool needsBorder2;
  XBool needsRect3;
  XRect area;
  XRect trackArea;
  XRect thumbArea;
  XInt32 thumbCornerRadius;
  XRect accentArea;
  XInt32 accentCornerRadius;
  XChar isState;
  XBool needsAnimation;
  XBool startAnimation;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && (((((((( _this->Appearance->FaceOffBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceOffBitmapDisabled != 0 )) || ( _this->Appearance->FaceOffBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOffBitmapActive != 0 )) || ( _this->Appearance->FaceOnBitmapDefault 
  != 0 )) || ( _this->Appearance->FaceOnBitmapDisabled != 0 )) || ( _this->Appearance->FaceOnBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOnBitmapActive != 0 )));
  needsText = (XBool)(( _this->Appearance != 0 ) && (( !EwIsStringEmpty( _this->LabelOff ) 
  && ( _this->Appearance->LabelOffFont != 0 )) || ( !EwIsStringEmpty( _this->LabelOn ) 
  && ( _this->Appearance->LabelOnFont != 0 ))));
  needsRect1 = (XBool)(( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( _this->Appearance->TrackOffColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackOffColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackOffColorFocused )) || !EwIsColorNull( _this->Appearance->TrackOffColorActive )) 
  || !EwIsColorNull( _this->Appearance->TrackOnColorDefault )) || !EwIsColorNull( 
  _this->Appearance->TrackOnColorDisabled )) || !EwIsColorNull( _this->Appearance->TrackOnColorFocused )) 
  || !EwIsColorNull( _this->Appearance->TrackOnColorActive )));
  needsBorder1 = (XBool)((( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( 
  _this->Appearance->TrackOffBorderColorDefault ) || !EwIsColorNull( _this->Appearance->TrackOffBorderColorDisabled )) 
  || !EwIsColorNull( _this->Appearance->TrackOffBorderColorFocused )) || !EwIsColorNull( 
  _this->Appearance->TrackOffBorderColorActive )) || !EwIsColorNull( _this->Appearance->TrackOnBorderColorDefault )) 
  || !EwIsColorNull( _this->Appearance->TrackOnBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackOnBorderColorFocused )) || !EwIsColorNull( _this->Appearance->TrackOnBorderColorActive ))) 
  && ((((((( !!_this->Appearance->TrackOffBorderWidthDefault || !!_this->Appearance->TrackOffBorderWidthDisabled ) 
  || !!_this->Appearance->TrackOffBorderWidthFocused ) || !!_this->Appearance->TrackOffBorderWidthActive ) 
  || !!_this->Appearance->TrackOnBorderWidthDefault ) || !!_this->Appearance->TrackOnBorderWidthDisabled ) 
  || !!_this->Appearance->TrackOnBorderWidthFocused ) || !!_this->Appearance->TrackOnBorderWidthActive ));
  needsRect2 = (XBool)(( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( _this->Appearance->ThumbOffColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbOffColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbOffColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbOffColorActive )) 
  || !EwIsColorNull( _this->Appearance->ThumbOnColorDefault )) || !EwIsColorNull( 
  _this->Appearance->ThumbOnColorDisabled )) || !EwIsColorNull( _this->Appearance->ThumbOnColorFocused )) 
  || !EwIsColorNull( _this->Appearance->ThumbOnColorActive )));
  needsBorder2 = (XBool)((( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( 
  _this->Appearance->ThumbOffBorderColorDefault ) || !EwIsColorNull( _this->Appearance->ThumbOffBorderColorDisabled )) 
  || !EwIsColorNull( _this->Appearance->ThumbOffBorderColorFocused )) || !EwIsColorNull( 
  _this->Appearance->ThumbOffBorderColorActive )) || !EwIsColorNull( _this->Appearance->ThumbOnBorderColorDefault )) 
  || !EwIsColorNull( _this->Appearance->ThumbOnBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbOnBorderColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbOnBorderColorActive ))) 
  && ((((((( !!_this->Appearance->ThumbOffBorderWidthDefault || !!_this->Appearance->ThumbOffBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbOffBorderWidthFocused ) || !!_this->Appearance->ThumbOffBorderWidthActive ) 
  || !!_this->Appearance->ThumbOnBorderWidthDefault ) || !!_this->Appearance->ThumbOnBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbOnBorderWidthFocused ) || !!_this->Appearance->ThumbOnBorderWidthActive ));
  needsRect3 = (XBool)(( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->AccentOffColorFocused ) 
  || !EwIsColorNull( _this->Appearance->AccentOffColorActive )) || !EwIsColorNull( 
  _this->Appearance->AccentOnColorFocused )) || !EwIsColorNull( _this->Appearance->AccentOnColorActive )));
  area = EwGetRectORect( _this->Super2.Bounds );
  trackArea = _Const000B;
  thumbArea = _Const000B;
  thumbCornerRadius = 0;
  accentArea = _Const000B;
  accentCornerRadius = 0;

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsRect2 && !( _this->rectView2 != 0 ))
  {
    _this->rectView2 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView2 ), 0 );
  }
  else
    if ( !needsRect2 && ( _this->rectView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView2 ));
      _this->rectView2 = 0;
    }

  if ( needsBorder2 && !( _this->borderView2 != 0 ))
  {
    _this->borderView2 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView2 ), 0 );
  }
  else
    if ( !needsBorder2 && ( _this->borderView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView2 ));
      _this->borderView2 = 0;
    }

  if ( needsRect3 && !( _this->rectView3 != 0 ))
  {
    _this->rectView3 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView3 ), 0 );
  }
  else
    if ( !needsRect3 && ( _this->rectView3 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView3 ));
      _this->rectView3 = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  if ( !_this->Checked )
    isState = EwGetCharLower( isState );

  needsAnimation = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->StateTransitionDuration 
  > 0 ));
  startAnimation = (XBool)(( needsAnimation && ( _this->prevState != isState )) 
  && !!_this->prevState );

  if ((( startAnimation && ( _this->animation != 0 )) && !_this->animation->Super1.Reversed ) 
      && ( isState == _this->animStartState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 1 );
    startAnimation = 0;
  }

  if ((( startAnimation && ( _this->animation != 0 )) && _this->animation->Super1.Reversed ) 
      && ( isState == _this->animEndState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 0 );
    startAnimation = 0;
  }

  if (( _this->animation != 0 ) && (( !_this->animation->Super1.Enabled || startAnimation ) 
      || !needsAnimation ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 0 );
    _this->animation->Super1.OnAnimate = EwNullSlot;
    _this->animation->Super1.OnFinished = EwNullSlot;
    _this->animation = 0;
  }

  if ( startAnimation )
  {
    _this->animation = EwNewObject( EffectsFloatEffect, 0 );
    _this->animation->Super1.OnAnimate = EwNewSlot( _this, WidgetSetToggleButton_onAnimate );
    _this->animation->Super1.OnFinished = EwNewSlot( _this, WidgetSetToggleButton_onAnimate );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->animation, _this->Appearance->StateTransitionDuration );
    EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->animation, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 1 );
    _this->animStartState = _this->prevState;
    _this->animEndState = isState;
  }

  _this->prevState = isState;

  if (( _this->frameView != 0 ) || ( _this->textView != 0 ))
  {
    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      case 'd' :
      case 'a' :
      case 'f' :
      break;

      default :; 
    }

    if ( _this->animation != 0 )
      switch ( _this->animStartState )
      {
        case 'D' :
        case 'A' :
        case 'F' :
        case 'E' :
        case 'd' :
        case 'a' :
        case 'f' :
        break;

        default :; 
      }
  }

  if (( _this->rectView1 != 0 ) || ( _this->borderView1 != 0 ))
  {
    XSet layout = _this->Appearance->TrackLayout;
    XPoint s = _this->Appearance->TrackSize;
    XRect r = area;
    XBool alignToLeft;
    XBool alignToRight;
    XBool alignToTop;
    XBool alignToBottom;

    if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
      s.X = ( s.X + EwGetRectW( r ));

    if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
      s.Y = ( s.Y + EwGetRectH( r ));

    alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
    alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
    alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
    alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );

    if ( alignToLeft && !alignToRight )
      r.Point2.X = ( r.Point1.X + s.X );
    else
      if ( !alignToLeft && alignToRight )
        r.Point1.X = ( r.Point2.X - s.X );
      else
      {
        r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( s.X / 2 ));
        r.Point2.X = ( r.Point1.X + s.X );
      }

    if ( alignToTop && !alignToBottom )
      r.Point2.Y = ( r.Point1.Y + s.Y );
    else
      if ( !alignToTop && alignToBottom )
        r.Point1.Y = ( r.Point2.Y - s.Y );
      else
      {
        r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( s.Y / 2 ));
        r.Point2.Y = ( r.Point1.Y + s.Y );
      }

    trackArea = r;
  }

  if (( _this->borderView2 != 0 ) || ( _this->rectView2 != 0 ))
  {
    XSet layout = _this->Appearance->ThumbLayout;
    XRect r = area;
    XPoint thumbOffset;
    XPoint thumbSize;
    XBool alignToLeft;
    XBool alignToRight;
    XBool alignToTop;
    XBool alignToBottom;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetDisabled;
        thumbSize = _this->Appearance->ThumbOnSizeDisabled;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetActive;
        thumbSize = _this->Appearance->ThumbOnSizeActive;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetFocused;
        thumbSize = _this->Appearance->ThumbOnSizeFocused;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusFocused;
      }
      break;

      case 'E' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetDefault;
        thumbSize = _this->Appearance->ThumbOnSizeDefault;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusDefault;
      }
      break;

      case 'd' :
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetDisabled;
        thumbSize = _this->Appearance->ThumbOffSizeDisabled;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusDisabled;
      }
      break;

      case 'a' :
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetActive;
        thumbSize = _this->Appearance->ThumbOffSizeActive;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusActive;
      }
      break;

      case 'f' :
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetFocused;
        thumbSize = _this->Appearance->ThumbOffSizeFocused;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusFocused;
      }
      break;

      default : 
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetDefault;
        thumbSize = _this->Appearance->ThumbOffSizeDefault;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusDefault;
      }
    }

    if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
      thumbSize.X = ( thumbSize.X + EwGetRectW( r ));

    if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
      thumbSize.Y = ( thumbSize.Y + EwGetRectH( r ));

    thumbSize = EwGetPointMax( 2, thumbSize, _Const000A );

    if ( _this->animation != 0 )
    {
      XPoint thumbOffsetS;
      XPoint thumbSizeS;
      XInt32 thumbCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetDisabled;
          thumbSizeS = _this->Appearance->ThumbOnSizeDisabled;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetActive;
          thumbSizeS = _this->Appearance->ThumbOnSizeActive;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetFocused;
          thumbSizeS = _this->Appearance->ThumbOnSizeFocused;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusFocused;
        }
        break;

        case 'E' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetDefault;
          thumbSizeS = _this->Appearance->ThumbOnSizeDefault;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusDefault;
        }
        break;

        case 'd' :
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetDisabled;
          thumbSizeS = _this->Appearance->ThumbOffSizeDisabled;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusDisabled;
        }
        break;

        case 'a' :
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetActive;
          thumbSizeS = _this->Appearance->ThumbOffSizeActive;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusActive;
        }
        break;

        case 'f' :
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetFocused;
          thumbSizeS = _this->Appearance->ThumbOffSizeFocused;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusFocused;
        }
        break;

        default : 
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetDefault;
          thumbSizeS = _this->Appearance->ThumbOffSizeDefault;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusDefault;
        }
      }

      if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
        thumbSizeS.X = ( thumbSizeS.X + EwGetRectW( r ));

      if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
        thumbSizeS.Y = ( thumbSizeS.Y + EwGetRectH( r ));

      thumbSizeS = EwGetPointMax( 2, thumbSizeS, _Const000A );
      thumbCornerRadius = EwMathMixInt32( thumbCornerRadiusS, thumbCornerRadius, 
      _this->animation->Value );
      thumbOffset = EwMathMixPoint( thumbOffsetS, thumbOffset, _this->animation->Value );
      thumbSize = EwMathMixPoint( thumbSizeS, thumbSize, _this->animation->Value );
    }

    alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
    alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
    alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
    alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );

    if ( alignToLeft && !alignToRight )
      r.Point2.X = ( r.Point1.X + thumbSize.X );
    else
      if ( !alignToLeft && alignToRight )
        r.Point1.X = ( r.Point2.X - thumbSize.X );
      else
      {
        r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( thumbSize.X / 2 ));
        r.Point2.X = ( r.Point1.X + thumbSize.X );
      }

    if ( alignToTop && !alignToBottom )
      r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
    else
      if ( !alignToTop && alignToBottom )
        r.Point1.Y = ( r.Point2.Y - thumbSize.Y );
      else
      {
        r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( thumbSize.Y / 2 ));
        r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
      }

    thumbArea = EwMoveRectPos( r, thumbOffset );
  }

  if ( _this->rectView3 != 0 )
  {
    XSet layout = _this->Appearance->AccentLayout;
    XRect r = area;
    XPoint accentOffset;
    XPoint accentSize;
    XBool alignToLeft;
    XBool alignToRight;
    XBool alignToTop;
    XBool alignToBottom;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetDisabled;
        accentSize = _this->Appearance->AccentOnSizeDisabled;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetActive;
        accentSize = _this->Appearance->AccentOnSizeActive;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetFocused;
        accentSize = _this->Appearance->AccentOnSizeFocused;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusFocused;
      }
      break;

      case 'E' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetDefault;
        accentSize = _this->Appearance->AccentOnSizeDefault;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusDefault;
      }
      break;

      case 'd' :
      {
        accentOffset = _this->Appearance->AccentOffOffsetDisabled;
        accentSize = _this->Appearance->AccentOffSizeDisabled;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusDisabled;
      }
      break;

      case 'a' :
      {
        accentOffset = _this->Appearance->AccentOffOffsetActive;
        accentSize = _this->Appearance->AccentOffSizeActive;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusActive;
      }
      break;

      case 'f' :
      {
        accentOffset = _this->Appearance->AccentOffOffsetFocused;
        accentSize = _this->Appearance->AccentOffSizeFocused;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusFocused;
      }
      break;

      default : 
      {
        accentOffset = _this->Appearance->AccentOffOffsetDefault;
        accentSize = _this->Appearance->AccentOffSizeDefault;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusDefault;
      }
    }

    if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
      accentSize.X = ( accentSize.X + EwGetRectW( r ));

    if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
      accentSize.Y = ( accentSize.Y + EwGetRectH( r ));

    accentSize = EwGetPointMax( 2, accentSize, _Const000A );

    if ( _this->animation != 0 )
    {
      XPoint accentOffsetS;
      XPoint accentSizeS;
      XInt32 accentCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetDisabled;
          accentSizeS = _this->Appearance->AccentOnSizeDisabled;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetActive;
          accentSizeS = _this->Appearance->AccentOnSizeActive;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetFocused;
          accentSizeS = _this->Appearance->AccentOnSizeFocused;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusFocused;
        }
        break;

        case 'E' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetDefault;
          accentSizeS = _this->Appearance->AccentOnSizeDefault;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusDefault;
        }
        break;

        case 'd' :
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetDisabled;
          accentSizeS = _this->Appearance->AccentOffSizeDisabled;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusDisabled;
        }
        break;

        case 'a' :
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetActive;
          accentSizeS = _this->Appearance->AccentOffSizeActive;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusActive;
        }
        break;

        case 'f' :
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetFocused;
          accentSizeS = _this->Appearance->AccentOffSizeFocused;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusFocused;
        }
        break;

        default : 
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetDefault;
          accentSizeS = _this->Appearance->AccentOffSizeDefault;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusDefault;
        }
      }

      if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
        accentSizeS.X = ( accentSizeS.X + EwGetRectW( r ));

      if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
        accentSizeS.Y = ( accentSizeS.Y + EwGetRectH( r ));

      accentSizeS = EwGetPointMax( 2, accentSizeS, _Const000A );
      accentCornerRadius = EwMathMixInt32( accentCornerRadiusS, accentCornerRadius, 
      _this->animation->Value );
      accentOffset = EwMathMixPoint( accentOffsetS, accentOffset, _this->animation->Value );
      accentSize = EwMathMixPoint( accentSizeS, accentSize, _this->animation->Value );
    }

    alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
    alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
    alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
    alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );

    if ( alignToLeft && !alignToRight )
      r.Point2.X = ( r.Point1.X + accentSize.X );
    else
      if ( !alignToLeft && alignToRight )
        r.Point1.X = ( r.Point2.X - accentSize.X );
      else
      {
        r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( accentSize.X / 2 ));
        r.Point2.X = ( r.Point1.X + accentSize.X );
      }

    if ( alignToTop && !alignToBottom )
      r.Point2.Y = ( r.Point1.Y + accentSize.Y );
    else
      if ( !alignToTop && alignToBottom )
        r.Point1.Y = ( r.Point2.Y - accentSize.Y );
      else
      {
        r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( accentSize.Y / 2 ));
        r.Point2.Y = ( r.Point1.Y + accentSize.Y );
      }

    accentArea = EwMoveRectPos( r, accentOffset );
  }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->TrackOnBorderColorDisabled;
        width = _this->Appearance->TrackOnBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->TrackOnBorderColorActive;
        width = _this->Appearance->TrackOnBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->TrackOnBorderColorFocused;
        width = _this->Appearance->TrackOnBorderWidthFocused;
      }
      break;

      case 'E' :
      {
        clr = _this->Appearance->TrackOnBorderColorDefault;
        width = _this->Appearance->TrackOnBorderWidthDefault;
      }
      break;

      case 'd' :
      {
        clr = _this->Appearance->TrackOffBorderColorDisabled;
        width = _this->Appearance->TrackOffBorderWidthDisabled;
      }
      break;

      case 'a' :
      {
        clr = _this->Appearance->TrackOffBorderColorActive;
        width = _this->Appearance->TrackOffBorderWidthActive;
      }
      break;

      case 'f' :
      {
        clr = _this->Appearance->TrackOffBorderColorFocused;
        width = _this->Appearance->TrackOffBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->TrackOffBorderColorDefault;
        width = _this->Appearance->TrackOffBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->TrackOnBorderColorDisabled;
          widthS = _this->Appearance->TrackOnBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->TrackOnBorderColorActive;
          widthS = _this->Appearance->TrackOnBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->TrackOnBorderColorFocused;
          widthS = _this->Appearance->TrackOnBorderWidthFocused;
        }
        break;

        case 'E' :
        {
          clrS = _this->Appearance->TrackOnBorderColorDefault;
          widthS = _this->Appearance->TrackOnBorderWidthDefault;
        }
        break;

        case 'd' :
        {
          clrS = _this->Appearance->TrackOffBorderColorDisabled;
          widthS = _this->Appearance->TrackOffBorderWidthDisabled;
        }
        break;

        case 'a' :
        {
          clrS = _this->Appearance->TrackOffBorderColorActive;
          widthS = _this->Appearance->TrackOffBorderWidthActive;
        }
        break;

        case 'f' :
        {
          clrS = _this->Appearance->TrackOffBorderColorFocused;
          widthS = _this->Appearance->TrackOffBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->TrackOffBorderColorDefault;
          widthS = _this->Appearance->TrackOffBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->borderView1, trackArea );
    ViewsBorder_OnSetRadius( _this->borderView1, _this->Appearance->TrackCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 34 );
  }

  if ( _this->rectView1 != 0 )
  {
    XRect r = trackArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->TrackOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->TrackOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->TrackOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->TrackOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->TrackOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->TrackOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->TrackOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->TrackOffColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->TrackOnColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->TrackOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->TrackOnColorFocused;
        break;

        case 'E' :
          clrS = _this->Appearance->TrackOnColorDefault;
        break;

        case 'd' :
          clrS = _this->Appearance->TrackOffColorDisabled;
        break;

        case 'a' :
          clrS = _this->Appearance->TrackOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->TrackOffColorFocused;
        break;

        default : 
          clrS = _this->Appearance->TrackOffColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    if ((( _this->borderView1 != 0 ) && !!_this->borderView1->Width ) && ( _this->borderView1->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const000C );

    CoreRectView__OnSetBounds( _this->rectView1, r );
    ViewsRectangle_OnSetRadius( _this->rectView1, _this->Appearance->TrackCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 33 );
  }

  if ( _this->borderView2 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->ThumbOnBorderColorDisabled;
        width = _this->Appearance->ThumbOnBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->ThumbOnBorderColorActive;
        width = _this->Appearance->ThumbOnBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->ThumbOnBorderColorFocused;
        width = _this->Appearance->ThumbOnBorderWidthFocused;
      }
      break;

      case 'E' :
      {
        clr = _this->Appearance->ThumbOnBorderColorDefault;
        width = _this->Appearance->ThumbOnBorderWidthDefault;
      }
      break;

      case 'd' :
      {
        clr = _this->Appearance->ThumbOffBorderColorDisabled;
        width = _this->Appearance->ThumbOffBorderWidthDisabled;
      }
      break;

      case 'a' :
      {
        clr = _this->Appearance->ThumbOffBorderColorActive;
        width = _this->Appearance->ThumbOffBorderWidthActive;
      }
      break;

      case 'f' :
      {
        clr = _this->Appearance->ThumbOffBorderColorFocused;
        width = _this->Appearance->ThumbOffBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->ThumbOffBorderColorDefault;
        width = _this->Appearance->ThumbOffBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorDisabled;
          widthS = _this->Appearance->ThumbOnBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorActive;
          widthS = _this->Appearance->ThumbOnBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorFocused;
          widthS = _this->Appearance->ThumbOnBorderWidthFocused;
        }
        break;

        case 'E' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorDefault;
          widthS = _this->Appearance->ThumbOnBorderWidthDefault;
        }
        break;

        case 'd' :
        {
          clrS = _this->Appearance->ThumbOffBorderColorDisabled;
          widthS = _this->Appearance->ThumbOffBorderWidthDisabled;
        }
        break;

        case 'a' :
        {
          clrS = _this->Appearance->ThumbOffBorderColorActive;
          widthS = _this->Appearance->ThumbOffBorderWidthActive;
        }
        break;

        case 'f' :
        {
          clrS = _this->Appearance->ThumbOffBorderColorFocused;
          widthS = _this->Appearance->ThumbOffBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->ThumbOffBorderColorDefault;
          widthS = _this->Appearance->ThumbOffBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->borderView2, thumbArea );
    ViewsBorder_OnSetRadius( _this->borderView2, thumbCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView2, clr );
    ViewsBorder_OnSetWidth( _this->borderView2, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView2, 57 );
  }

  if ( _this->rectView2 != 0 )
  {
    XRect r = thumbArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->ThumbOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->ThumbOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->ThumbOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->ThumbOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->ThumbOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->ThumbOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->ThumbOffColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->ThumbOnColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->ThumbOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->ThumbOnColorFocused;
        break;

        case 'E' :
          clrS = _this->Appearance->ThumbOnColorDefault;
        break;

        case 'd' :
          clrS = _this->Appearance->ThumbOffColorDisabled;
        break;

        case 'a' :
          clrS = _this->Appearance->ThumbOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->ThumbOffColorFocused;
        break;

        default : 
          clrS = _this->Appearance->ThumbOffColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    if ((( _this->borderView2 != 0 ) && !!_this->borderView2->Width ) && ( _this->borderView2->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const000C );

    CoreRectView__OnSetBounds( _this->rectView2, r );
    ViewsRectangle_OnSetRadius( _this->rectView2, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView2, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView2, 56 );
  }

  if ( _this->rectView3 != 0 )
  {
    XRect r = accentArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'A' :
        clr = _this->Appearance->AccentOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->AccentOnColorFocused;
      break;

      case 'D' :
      case 'E' :
      case 'd' :
        clr = _Const000D;
      break;

      case 'a' :
        clr = _this->Appearance->AccentOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->AccentOffColorFocused;
      break;

      default : 
        clr = _Const000D;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'A' :
          clrS = _this->Appearance->AccentOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->AccentOnColorFocused;
        break;

        case 'D' :
        case 'E' :
        case 'd' :
          clrS = _Const000D;
        break;

        case 'a' :
          clrS = _this->Appearance->AccentOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->AccentOffColorFocused;
        break;

        default : 
          clrS = _Const000D;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->rectView3, r );
    ViewsRectangle_OnSetRadius( _this->rectView3, accentCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView3, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView3, 109 );
  }

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;
    XSet layout = _this->Appearance->FaceLayout;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDisabled;
        frameNo = _this->Appearance->FaceOnFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->FaceOnBitmapActive;
        frameNo = _this->Appearance->FaceOnFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->FaceOnBitmapFocused;
        frameNo = _this->Appearance->FaceOnFrameFocused;
      }
      break;

      case 'E' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDefault;
        frameNo = _this->Appearance->FaceOnFrameDefault;
      }
      break;

      case 'd' :
      {
        bitmap = _this->Appearance->FaceOffBitmapDisabled;
        frameNo = _this->Appearance->FaceOffFrameDisabled;
      }
      break;

      case 'a' :
      {
        bitmap = _this->Appearance->FaceOffBitmapActive;
        frameNo = _this->Appearance->FaceOffFrameActive;
      }
      break;

      case 'f' :
      {
        bitmap = _this->Appearance->FaceOffBitmapFocused;
        frameNo = _this->Appearance->FaceOffFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->FaceOffBitmapDefault;
        frameNo = _this->Appearance->FaceOffFrameDefault;
      }
    }

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      case 'd' :
      case 'a' :
      case 'f' :
      break;

      default :; 
    }

    if ( _this->animation != 0 )
      switch ( _this->animStartState )
      {
        case 'D' :
        case 'A' :
        case 'F' :
        case 'E' :
        case 'd' :
        case 'a' :
        case 'f' :
        break;

        default :; 
      }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, _Const0005 );

    if ( frameNo < 0 )
      frameNo = 0;

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XInt32 w = bitmap->FrameSize.X;

      if ( alignToLeft && !alignToRight )
        r.Point2.X = ( r.Point1.X + w );
      else
        if ( !alignToLeft && alignToRight )
          r.Point1.X = ( r.Point2.X - w );
        else
        {
          r.Point1.X = ( r.Point1.X + (( EwGetRectW( r ) / 2 ) - ( w / 2 )));
          r.Point2.X = ( r.Point1.X + w );
        }
    }

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XInt32 h = bitmap->FrameSize.Y;

      if ( alignToTop && !alignToBottom )
        r.Point2.Y = ( r.Point1.Y + h );
      else
        if ( !alignToTop && alignToBottom )
          r.Point1.Y = ( r.Point2.Y - h );
        else
        {
          r.Point1.Y = ( r.Point1.Y + (( EwGetRectH( r ) / 2 ) - ( h / 2 )));
          r.Point2.Y = ( r.Point1.Y + h );
        }
    }

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;
    ResourcesFont font;
    XString label;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      {
        font = _this->Appearance->LabelOnFont;
        label = _this->LabelOn;
      }
      break;

      case 'd' :
      case 'a' :
      case 'f' :
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
      break;

      default : 
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
    }

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->LabelOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->LabelOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->LabelOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->LabelOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->LabelOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelOffColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->LabelOnColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->LabelOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->LabelOnColorFocused;
        break;

        case 'E' :
          clrS = _this->Appearance->LabelOnColorDefault;
        break;

        case 'd' :
          clrS = _this->Appearance->LabelOffColorDisabled;
        break;

        case 'a' :
          clrS = _this->Appearance->LabelOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->LabelOffColorFocused;
        break;

        default : 
          clrS = _this->Appearance->LabelOffColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X, area.Point1.Y, 
    area.Point2.X - _this->Appearance->LabelMarginRight, area.Point2.Y ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetFont( _this->textView, font );
    ViewsText_OnSetString( _this->textView, label );
    ViewsText_OnSetColor( _this->textView, clr );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 92 );
  }

  if ( !EwIsRectNull( thumbArea ) || !EwIsRectNull( accentArea ))
  {
    XRect r = EwUnionRect( thumbArea, accentArea );

    if ( _this->frameView != 0 )
      r = EwUnionRect( r, CoreView__GetExtent( _this->frameView ));

    CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
    EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
    0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
  }
  else
    CoreGroup_ExtendClipping((CoreGroup)_this, 0, 0, 0, 0 );

  if ( !( _this->animation != 0 ))
  {
    XRect touchArea = area;

    if ((( _this->Appearance != 0 ) && _this->Appearance->LimitTouchArea ) && (((( 
        _this->rectView1 != 0 ) || ( _this->borderView1 != 0 )) || ( _this->rectView2 
        != 0 )) || ( _this->borderView2 != 0 )))
      touchArea = EwIntersectRect( EwUnionRect( trackArea, thumbArea ), area );
    else
      if ((( _this->Appearance != 0 ) && _this->Appearance->LimitTouchArea ) && 
          ( _this->frameView != 0 ))
        touchArea = EwIntersectRect( _this->frameView->Super1.Bounds, area );

    CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, touchArea.Point1 );
    CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, touchArea.Point2 );
    CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point2.X, 
    touchArea.Point1.Y ));
    CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point1.X, 
    touchArea.Point2.Y ));
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onAnimate()' */
void WidgetSetToggleButton_onAnimate( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onConfigChanged()' */
void WidgetSetToggleButton_onConfigChanged( WidgetSetToggleButton _this, XObject 
  sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onOutlet()' */
void WidgetSetToggleButton_onOutlet( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetToggleButton_OnSetChecked( _this, EwOnGetBool( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onFlashTimer()' */
void WidgetSetToggleButton_onFlashTimer( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

  if ( _this->Checked )
    EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
  else
    EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetBool( _this->Outlet, _this->Checked );
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseKey()' */
void WidgetSetToggleButton_onReleaseKey( WidgetSetToggleButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressKey()' */
void WidgetSetToggleButton_onPressKey( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onLeaveTouch()' */
void WidgetSetToggleButton_onLeaveTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onEnterTouch()' */
void WidgetSetToggleButton_onEnterTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseTouch()' */
void WidgetSetToggleButton_onReleaseTouch( WidgetSetToggleButton _this, XObject 
  sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressTouch()' */
void WidgetSetToggleButton_onPressTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetOutlet()' */
void WidgetSetToggleButton_OnSetOutlet( WidgetSetToggleButton _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), value, 
      0 );

  if ( value.Object != 0 )
    EwSignal( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetChecked()' */
void WidgetSetToggleButton_OnSetChecked( WidgetSetToggleButton _this, XBool value )
{
  if ( _this->Checked == value )
    return;

  _this->Checked = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabel()' */
void WidgetSetToggleButton_OnSetLabel( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( value, _this->LabelOff ) && !EwCompString( value, _this->LabelOn ))
    return;

  _this->LabelOff = EwShareString( value );
  _this->LabelOn = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetAppearance()' */
void WidgetSetToggleButton_OnSetAppearance( WidgetSetToggleButton _this, WidgetSetToggleButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), ((XObject)_this ));
}

/* Default onget method for the property 'Checked' */
XBool WidgetSetToggleButton_OnGetChecked( WidgetSetToggleButton _this )
{
  return _this->Checked;
}

/* Variants derived from the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS( WidgetSetToggleButton, CoreGroup, FlashTimer, animation, OnSwitchOn, 
                 Outlet, LabelOn, onPressKeyTime, "WidgetSet::ToggleButton" )
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
  WidgetSetToggleButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetToggleButton_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetToggleButton )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0006 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0007 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0008 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000A );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
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
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsText;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsShadow;
  XRect area;
  XRect thumbArea;
  XInt32 thumbCornerRadius;
  XChar isState;
  XBool needsAnimation;
  XBool startAnimation;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsText = (XBool)((( _this->Appearance != 0 ) && !EwIsStringEmpty( _this->Label )) 
  && ( _this->Appearance->LabelFont != 0 ));
  needsRect1 = (XBool)(( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbColorActive )));
  needsBorder1 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbBorderColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbBorderColorActive ))) 
  && ((( !!_this->Appearance->ThumbBorderWidthDefault || !!_this->Appearance->ThumbBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbBorderWidthFocused ) || !!_this->Appearance->ThumbBorderWidthActive ));
  needsShadow = (XBool)(( _this->Appearance != 0 ) && ( !EwIsColorNull( _this->Appearance->ThumbShadowColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbShadowColorFocused )));
  area = EwGetRectORect( _this->Super2.Bounds );
  thumbArea = _Const000B;
  thumbCornerRadius = 0;

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsShadow && !( _this->shadowView != 0 ))
  {
    _this->shadowView = EwNewObject( ViewsShadow, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->shadowView ), 0 );
  }
  else
    if ( !needsShadow && ( _this->shadowView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->shadowView ));
      _this->shadowView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  needsAnimation = (XBool)(( _this->Appearance != 0 ) && !!_this->Appearance->StateTransitionDuration );
  startAnimation = (XBool)(( needsAnimation && ( _this->prevState != isState )) 
  && !!_this->prevState );

  if ((( startAnimation && ( _this->animation != 0 )) && !_this->animation->Super1.Reversed ) 
      && ( isState == _this->animStartState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 1 );
    startAnimation = 0;
  }

  if ((( startAnimation && ( _this->animation != 0 )) && _this->animation->Super1.Reversed ) 
      && ( isState == _this->animEndState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 0 );
    startAnimation = 0;
  }

  if (( _this->animation != 0 ) && (( !_this->animation->Super1.Enabled || startAnimation ) 
      || !needsAnimation ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 0 );
    _this->animation->Super1.OnAnimate = EwNullSlot;
    _this->animation->Super1.OnFinished = EwNullSlot;
    _this->animation = 0;
  }

  if ( startAnimation )
  {
    _this->animation = EwNewObject( EffectsFloatEffect, 0 );
    _this->animation->Super1.OnAnimate = EwNewSlot( _this, WidgetSetPushButton_onAnimate );
    _this->animation->Super1.OnFinished = EwNewSlot( _this, WidgetSetPushButton_onAnimate );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->animation, _this->Appearance->StateTransitionDuration );
    EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->animation, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 1 );
    _this->animStartState = _this->prevState;
    _this->animEndState = isState;
  }

  _this->prevState = isState;

  if ( _this->textView != 0 )
  {
    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    if ( _this->animation != 0 )
      switch ( _this->animStartState )
      {
        case 'D' :
        case 'A' :
        case 'F' :
        break;

        default :; 
      }
  }

  if ((( _this->shadowView != 0 ) || ( _this->borderView1 != 0 )) || ( _this->rectView1 
      != 0 ))
  {
    XRect r = area;
    XPoint thumbSize;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        thumbSize = _Const000A;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        thumbSize = _Const000A;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        thumbSize = _Const000A;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusFocused;
      }
      break;

      default : 
      {
        thumbSize = _Const000A;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDefault;
      }
    }

    thumbSize.X = ( thumbSize.X + EwGetRectW( r ));
    thumbSize.Y = ( thumbSize.Y + EwGetRectH( r ));
    thumbSize = EwGetPointMax( 2, thumbSize, _Const000A );

    if ( _this->animation != 0 )
    {
      XPoint thumbSizeS;
      XInt32 thumbCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          thumbSizeS = _Const000A;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          thumbSizeS = _Const000A;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          thumbSizeS = _Const000A;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusFocused;
        }
        break;

        default : 
        {
          thumbSizeS = _Const000A;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDefault;
        }
      }

      thumbSizeS.X = ( thumbSizeS.X + EwGetRectW( r ));
      thumbSizeS.Y = ( thumbSizeS.Y + EwGetRectH( r ));
      thumbSizeS = EwGetPointMax( 2, thumbSizeS, _Const000A );
      thumbCornerRadius = EwMathMixInt32( thumbCornerRadiusS, thumbCornerRadius, 
      _this->animation->Value );
      thumbSize = EwMathMixPoint( thumbSizeS, thumbSize, _this->animation->Value );
    }

    r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( thumbSize.X / 2 ));
    r.Point2.X = ( r.Point1.X + thumbSize.X );
    r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( thumbSize.Y / 2 ));
    r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
    thumbArea = r;
  }

  if ( _this->shadowView != 0 )
  {
    XInt32 blur;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      case 'A' :
      {
        blur = 0;
        clr = _Const000D;
      }
      break;

      case 'F' :
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusFocused;
        clr = _this->Appearance->ThumbShadowColorFocused;
      }
      break;

      default : 
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusDefault;
        clr = _this->Appearance->ThumbShadowColorDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XInt32 blurS;
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
        case 'A' :
        {
          blurS = 0;
          clrS = _Const000D;
        }
        break;

        case 'F' :
        {
          blurS = _this->Appearance->ThumbShadowBlurRadiusFocused;
          clrS = _this->Appearance->ThumbShadowColorFocused;
        }
        break;

        default : 
        {
          blurS = _this->Appearance->ThumbShadowBlurRadiusDefault;
          clrS = _this->Appearance->ThumbShadowColorDefault;
        }
      }

      blur = EwMathMixInt32( blurS, blur, _this->animation->Value );
      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->shadowView, thumbArea );
    ViewsShadow_OnSetBlurRadius( _this->shadowView, blur );
    ViewsShadow_OnSetRadius( _this->shadowView, thumbCornerRadius );
    ViewsShadow_OnSetColor( _this->shadowView, clr );
    ViewsShadow_OnSetOffset( _this->shadowView, _Const000A );
    CoreView_OnSetStackingPriority((CoreView)_this->shadowView, 39 );
  }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->ThumbBorderColorDisabled;
        width = _this->Appearance->ThumbBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->ThumbBorderColorActive;
        width = _this->Appearance->ThumbBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->ThumbBorderColorFocused;
        width = _this->Appearance->ThumbBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->ThumbBorderColorDefault;
        width = _this->Appearance->ThumbBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->ThumbBorderColorDisabled;
          widthS = _this->Appearance->ThumbBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->ThumbBorderColorActive;
          widthS = _this->Appearance->ThumbBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->ThumbBorderColorFocused;
          widthS = _this->Appearance->ThumbBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->ThumbBorderColorDefault;
          widthS = _this->Appearance->ThumbBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->borderView1, thumbArea );
    ViewsBorder_OnSetRadius( _this->borderView1, thumbCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 41 );
  }

  if ( _this->rectView1 != 0 )
  {
    XRect r = thumbArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->ThumbColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->ThumbColorFocused;
      break;

      default : 
        clr = _this->Appearance->ThumbColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->ThumbColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->ThumbColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->ThumbColorFocused;
        break;

        default : 
          clrS = _this->Appearance->ThumbColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    if ((( _this->borderView1 != 0 ) && !!_this->borderView1->Width ) && ( _this->borderView1->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const000C );

    CoreRectView__OnSetBounds( _this->rectView1, r );
    ViewsRectangle_OnSetRadius( _this->rectView1, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 40 );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->LabelColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->LabelColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->LabelColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->LabelColorFocused;
        break;

        default : 
          clrS = _this->Appearance->LabelColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, ViewsTextAlignmentAlignHorzCenter 
    | ViewsTextAlignmentAlignVertCenter );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 76 );
  }

  if ( !EwIsRectNull( thumbArea ))
  {
    XRect r = thumbArea;

    if ( _this->shadowView != 0 )
      r = EwUnionRect( r, CoreView__GetClipping( _this->shadowView ));

    CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
    EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
    0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
  }
  else
    CoreGroup_ExtendClipping((CoreGroup)_this, 0, 0, 0, 0 );
}

/* 'C' function for method : 'WidgetSet::PushButton.onAnimate()' */
void WidgetSetPushButton_onAnimate( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( !( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, FlashTimer, animation, OnPress, 
                 Label, Label, onPressKeyTime, "WidgetSet::PushButton" )
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
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetPushButton )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Mono_Medium, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Mono_Medium' */
void WidgetSetPushButton_Mono_Medium__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetStateTransitionDuration( _this, 50 );
  WidgetSetPushButtonConfig_OnSetPressedFeedbackDuration( _this, 100 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( _this, _Const000E );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( _this, _Const000F );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( _this, 4 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( _this, 3 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( _this, _Const0010 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( _this, _Const0011 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( _this, _Const0010 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( _this, _Const0010 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthActive( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDisabled( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( _this, _Const0005 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( _this, _Const0005 );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( _this, _Const0005 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( _this, _Const0005 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusActive( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusFocused( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDisabled( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( _this, 8 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0012 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0012 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0013 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0012 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconTintActive( _this, _Const0012 );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( _this, _Const0012 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0013 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0012 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0014 );
}

/* Re-Initializer for the auto object 'WidgetSet::PushButton_Mono_Medium' */
void WidgetSetPushButton_Mono_Medium__ReInit( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Medium )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DEFINE_AUTOOBJECT( WidgetSetSwitch_Mono_Medium, WidgetSetToggleButtonConfig )

/* Initializer for the auto object 'WidgetSet::Switch_Mono_Medium' */
void WidgetSetSwitch_Mono_Medium__Init( WidgetSetToggleButtonConfig _this )
{
  WidgetSetToggleButtonConfig_OnSetStateTransitionDuration( _this, 50 );
  WidgetSetToggleButtonConfig_OnSetPressedFeedbackDuration( _this, 100 );
  WidgetSetToggleButtonConfig_OnSetLimitTouchArea( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetAccentOnColorActive( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetAccentOnColorFocused( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusActive( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusFocused( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDisabled( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDefault( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetActive( _this, _Const0016 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetFocused( _this, _Const0016 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDisabled( _this, _Const0016 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDefault( _this, _Const0016 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeActive( _this, _Const0017 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeFocused( _this, _Const0018 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeDisabled( _this, _Const0018 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeDefault( _this, _Const0018 );
  WidgetSetToggleButtonConfig_OnSetAccentOffColorActive( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetAccentOffColorFocused( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusActive( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusFocused( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDisabled( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDefault( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetActive( _this, _Const0019 );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetFocused( _this, _Const001A );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDisabled( _this, _Const001A );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDefault( _this, _Const001A );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeActive( _this, _Const0017 );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeFocused( _this, _Const0018 );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeDisabled( _this, _Const0018 );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeDefault( _this, _Const0018 );
  WidgetSetToggleButtonConfig_OnSetAccentLayout( _this, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorActive( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorFocused( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDisabled( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDefault( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthActive( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthFocused( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDefault( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorActive( _this, _Const001B );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorFocused( _this, _Const001B );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorDisabled( _this, _Const001C );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorDefault( _this, _Const001B );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusActive( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusFocused( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDisabled( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDefault( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetActive( _this, _Const001D );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetFocused( _this, _Const001D );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDisabled( _this, _Const001D );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDefault( _this, _Const001D );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeActive( _this, _Const001E );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeFocused( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeDisabled( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeDefault( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorActive( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorFocused( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDisabled( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDefault( _this, _Const0015 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthActive( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthFocused( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDefault( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorActive( _this, _Const001B );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorFocused( _this, _Const001B );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorDisabled( _this, _Const001C );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorDefault( _this, _Const001B );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusActive( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusFocused( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDisabled( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDefault( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetActive( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetFocused( _this, _Const0021 );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDisabled( _this, _Const0021 );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDefault( _this, _Const0021 );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeActive( _this, _Const001E );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeFocused( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeDisabled( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeDefault( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetThumbLayout( _this, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorActive( _this, _Const0011 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorFocused( _this, _Const0011 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDisabled( _this, _Const0010 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDefault( _this, _Const0011 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthActive( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthFocused( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDisabled( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorActive( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorFocused( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorDisabled( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorDefault( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorActive( _this, _Const0011 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorFocused( _this, _Const0011 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDisabled( _this, _Const0010 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDefault( _this, _Const0011 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthActive( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthFocused( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDisabled( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorActive( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorFocused( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorDisabled( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorDefault( _this, _Const0005 );
  WidgetSetToggleButtonConfig_OnSetTrackCornerRadius( _this, 18 );
  WidgetSetToggleButtonConfig_OnSetTrackSize( _this, _Const0022 );
  WidgetSetToggleButtonConfig_OnSetTrackLayout( _this, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( _this, _Const0013 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( _this, _Const0013 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetLabelMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintActive( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( _this, _Const0013 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintActive( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( _this, _Const0013 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( _this, _Const0012 );
  WidgetSetToggleButtonConfig_OnSetIconMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetLabelAlignment( _this, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetLabelOnFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetLabelOffFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetIconAlignment( _this, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetWidgetMinSize( _this, _Const0023 );
}

/* Re-Initializer for the auto object 'WidgetSet::Switch_Mono_Medium' */
void WidgetSetSwitch_Mono_Medium__ReInit( WidgetSetToggleButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::Switch_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Mono_Medium )

/* Embedded Wizard */
