/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class VCViewarea!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;


//! access the type of the class
inline
OSG::FieldContainerType &VCViewareaBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 VCViewareaBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 VCViewareaBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the VCViewarea::_sfRendererRef field.

inline
std::string &VCViewareaBase::editRendererRef(void)
{
    editSField(RendererRefFieldMask);

    return _sfRendererRef.getValue();
}

//! Get the value of the VCViewarea::_sfRendererRef field.
inline
const std::string &VCViewareaBase::getRendererRef(void) const
{
    return _sfRendererRef.getValue();
}

//! Set the value of the VCViewarea::_sfRendererRef field.
inline
void VCViewareaBase::setRendererRef(const std::string &value)
{
    editSField(RendererRefFieldMask);

    _sfRendererRef.setValue(value);
}
//! Get the value of the VCViewarea::_sfRootRef field.

inline
std::string &VCViewareaBase::editRootRef(void)
{
    editSField(RootRefFieldMask);

    return _sfRootRef.getValue();
}

//! Get the value of the VCViewarea::_sfRootRef field.
inline
const std::string &VCViewareaBase::getRootRef(void) const
{
    return _sfRootRef.getValue();
}

//! Set the value of the VCViewarea::_sfRootRef field.
inline
void VCViewareaBase::setRootRef(const std::string &value)
{
    editSField(RootRefFieldMask);

    _sfRootRef.setValue(value);
}
//! Get the value of the VCViewarea::_sfCameraRef field.

inline
std::string &VCViewareaBase::editCameraRef(void)
{
    editSField(CameraRefFieldMask);

    return _sfCameraRef.getValue();
}

//! Get the value of the VCViewarea::_sfCameraRef field.
inline
const std::string &VCViewareaBase::getCameraRef(void) const
{
    return _sfCameraRef.getValue();
}

//! Set the value of the VCViewarea::_sfCameraRef field.
inline
void VCViewareaBase::setCameraRef(const std::string &value)
{
    editSField(CameraRefFieldMask);

    _sfCameraRef.setValue(value);
}

//! Get the value of the VCViewarea::_sfRoot field.
inline
Node * VCViewareaBase::getRoot(void) const
{
    return _sfRoot.getValue();
}

//! Set the value of the VCViewarea::_sfRoot field.
inline
void VCViewareaBase::setRoot(Node * const value)
{
    editSField(RootFieldMask);

    _sfRoot.setValue(value);
}

//! Get the value of the VCViewarea::_sfRenderer field.
inline
RendererItem * VCViewareaBase::getRenderer(void) const
{
    return _sfRenderer.getValue();
}

//! Set the value of the VCViewarea::_sfRenderer field.
inline
void VCViewareaBase::setRenderer(RendererItem * const value)
{
    editSField(RendererFieldMask);

    _sfRenderer.setValue(value);
}

//! Get the value of the VCViewarea::_sfCamera field.
inline
Camera * VCViewareaBase::getCamera(void) const
{
    return _sfCamera.getValue();
}

//! Set the value of the VCViewarea::_sfCamera field.
inline
void VCViewareaBase::setCamera(Camera * const value)
{
    editSField(CameraFieldMask);

    _sfCamera.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void VCViewareaBase::execSync (      VCViewareaBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RendererRefFieldMask & whichField))
        _sfRendererRef.syncWith(pFrom->_sfRendererRef);

    if(FieldBits::NoField != (RootRefFieldMask & whichField))
        _sfRootRef.syncWith(pFrom->_sfRootRef);

    if(FieldBits::NoField != (CameraRefFieldMask & whichField))
        _sfCameraRef.syncWith(pFrom->_sfCameraRef);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pFrom->_sfRoot);

    if(FieldBits::NoField != (RendererFieldMask & whichField))
        _sfRenderer.syncWith(pFrom->_sfRenderer);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
        _sfCamera.syncWith(pFrom->_sfCamera);
}
#endif


inline
const Char8 *VCViewareaBase::getClassname(void)
{
    return "VCViewarea";
}
OSG_GEN_CONTAINERPTR(VCViewarea);

VCORE_END_NAMESPACE
