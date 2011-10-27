/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class VCWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGVCoREViewarea.h"           // Views Class

#include "OSGVCoREVCWindowBase.h"
#include "OSGVCoREVCWindow.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

VCORE_IMPORT_NAMESPACE;

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VCWindow
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Viewarea *      VCWindowBase::_mfViews
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<VCWindow *, nsVCoRE>::_type(
    "VCWindowPtr", 
    "VCoreItemPtr", 
    VCWindow::getClassType(),
    nsVCoRE);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(VCWindow *, nsVCoRE)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VCWindow *,
                           nsVCoRE);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VCWindow *,
                           nsVCoRE);

OSG_END_NAMESPACE

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

void VCWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecViewareaPtr::Description(
        MFUnrecViewareaPtr::getClassType(),
        "views",
        "",
        ViewsFieldId, ViewsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VCWindow::editHandleViews),
        static_cast<FieldGetMethodSig >(&VCWindow::getHandleViews));

    oType.addInitialDesc(pDesc);
}


VCWindowBase::TypeObject VCWindowBase::_type(
    VCWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsVCoRE, //Namespace
    reinterpret_cast<PrototypeCreateF>(&VCWindowBase::createEmptyLocal),
    VCWindow::initMethod,
    VCWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VCWindow::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"VCWindow\"\n"
    "    parent=\"VCoreItem\"\n"
    "    library=\"VCoRESystem\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    docGroupBase=\"GrpVCoreSystem\"\n"
    "    libnamespace=\"VCoRE\"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"views\"\n"
    "      type=\"VCoRE::Viewarea\"\n"
    "      cardinality=\"multi\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      category=\"pointer\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VCWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &VCWindowBase::getType(void) const
{
    return _type;
}

UInt32 VCWindowBase::getContainerSize(void) const
{
    return sizeof(VCWindow);
}

/*------------------------- decorator get ------------------------------*/


//! Get the VCWindow::_mfViews field.
const MFUnrecViewareaPtr *VCWindowBase::getMFViews(void) const
{
    return &_mfViews;
}

MFUnrecViewareaPtr  *VCWindowBase::editMFViews          (void)
{
    editMField(ViewsFieldMask, _mfViews);

    return &_mfViews;
}



void VCWindowBase::pushToViews(Viewarea * const value)
{
    editMField(ViewsFieldMask, _mfViews);

    _mfViews.push_back(value);
}

void VCWindowBase::assignViews    (const MFUnrecViewareaPtr &value)
{
    MFUnrecViewareaPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecViewareaPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<VCWindow *>(this)->clearViews();

    while(elemIt != elemEnd)
    {
        this->pushToViews(*elemIt);

        ++elemIt;
    }
}

void VCWindowBase::removeFromViews(UInt32 uiIndex)
{
    if(uiIndex < _mfViews.size())
    {
        editMField(ViewsFieldMask, _mfViews);

        _mfViews.erase(uiIndex);
    }
}

void VCWindowBase::removeObjFromViews(Viewarea * const value)
{
    Int32 iElemIdx = _mfViews.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ViewsFieldMask, _mfViews);

        _mfViews.erase(iElemIdx);
    }
}
void VCWindowBase::clearViews(void)
{
    editMField(ViewsFieldMask, _mfViews);


    _mfViews.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 VCWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ViewsFieldMask & whichField))
    {
        returnValue += _mfViews.getBinSize();
    }

    return returnValue;
}

void VCWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ViewsFieldMask & whichField))
    {
        _mfViews.copyToBin(pMem);
    }
}

void VCWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ViewsFieldMask & whichField))
    {
        editMField(ViewsFieldMask, _mfViews);
        _mfViews.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VCWindowTransitPtr VCWindowBase::createLocal(BitVector bFlags)
{
    VCWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VCWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VCWindowTransitPtr VCWindowBase::createDependent(BitVector bFlags)
{
    VCWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VCWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VCWindowTransitPtr VCWindowBase::create(void)
{
    return createLocal();
}

VCWindow *VCWindowBase::createEmptyLocal(BitVector bFlags)
{
    VCWindow *returnValue;

    newPtr<VCWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VCWindow *VCWindowBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr VCWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VCWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VCWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VCWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VCWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VCWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VCWindowBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

VCWindowBase::VCWindowBase(void) :
    Inherited(),
    _mfViews                  ()
{
}

VCWindowBase::VCWindowBase(const VCWindowBase &source) :
    Inherited(source),
    _mfViews                  ()
{
}


/*-------------------------- destructors ----------------------------------*/

VCWindowBase::~VCWindowBase(void)
{
}

void VCWindowBase::onCreate(const VCWindow *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        VCWindow *pThis = static_cast<VCWindow *>(this);

        MFUnrecViewareaPtr::const_iterator ViewsIt  =
            source->_mfViews.begin();
        MFUnrecViewareaPtr::const_iterator ViewsEnd =
            source->_mfViews.end  ();

        while(ViewsIt != ViewsEnd)
        {
            pThis->pushToViews(*ViewsIt);

            ++ViewsIt;
        }
    }
}

GetFieldHandlePtr VCWindowBase::getHandleViews           (void) const
{
    MFUnrecViewareaPtr::GetHandlePtr returnValue(
        new  MFUnrecViewareaPtr::GetHandle(
             &_mfViews,
             this->getType().getFieldDesc(ViewsFieldId),
             const_cast<VCWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VCWindowBase::editHandleViews          (void)
{
    MFUnrecViewareaPtr::EditHandlePtr returnValue(
        new  MFUnrecViewareaPtr::EditHandle(
             &_mfViews,
             this->getType().getFieldDesc(ViewsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&VCWindow::pushToViews,
                    static_cast<VCWindow *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&VCWindow::removeFromViews,
                    static_cast<VCWindow *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&VCWindow::removeObjFromViews,
                    static_cast<VCWindow *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&VCWindow::clearViews,
                    static_cast<VCWindow *>(this)));

    editMField(ViewsFieldMask, _mfViews);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VCWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VCWindow *pThis = static_cast<VCWindow *>(this);

    pThis->execSync(static_cast<VCWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VCWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VCWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VCWindow *>(pRefAspect),
                  dynamic_cast<const VCWindow *>(this));

    return returnValue;
}
#endif

void VCWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<VCWindow *>(this)->clearViews();


}


VCORE_END_NAMESPACE
