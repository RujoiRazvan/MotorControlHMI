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
#include "_TemplatesDeviceClass.h"
#include "_TemplatesNumKeyboard.h"
#include "Templates.h"

/* Initializer for the class 'Templates::NumKeyboard' */
void TemplatesNumKeyboard__Init( TemplatesNumKeyboard _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesNumKeyboard );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesNumKeyboard );
}

/* Re-Initializer for the class 'Templates::NumKeyboard' */
void TemplatesNumKeyboard__ReInit( TemplatesNumKeyboard _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::NumKeyboard' */
void TemplatesNumKeyboard__Done( TemplatesNumKeyboard _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::NumKeyboard' */
EW_DEFINE_CLASS_VARIANTS( TemplatesNumKeyboard )
EW_END_OF_CLASS_VARIANTS( TemplatesNumKeyboard )

/* Virtual Method Table (VMT) for the class : 'Templates::NumKeyboard' */
EW_DEFINE_CLASS( TemplatesNumKeyboard, CoreGroup, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Templates::NumKeyboard" )
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
EW_END_OF_CLASS( TemplatesNumKeyboard )

/* Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Init( TemplatesDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesDeviceClass );
}

/* Re-Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__ReInit( TemplatesDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Done( TemplatesDeviceClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( TemplatesDeviceClass )
EW_END_OF_CLASS_VARIANTS( TemplatesDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS( TemplatesDeviceClass, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Templates::DeviceClass" )
EW_END_OF_CLASS( TemplatesDeviceClass )

/* Embedded Wizard */
