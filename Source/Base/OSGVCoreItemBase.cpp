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
 **     class VCoreItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // Parent Class

#include "OSGVCoreItemBase.h"
#include "OSGVCoreItem.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VCoreItem
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * VCoreItemBase::_sfParent
    
*/

/*! \var Int32           VCoreItemBase::_sfPostDFMixinTestField
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<VCoreItem *>::_type("VCoreItemPtr", "VCoreDynFieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(VCoreItem *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VCoreItem *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VCoreItem *,
                           0);

DataType &FieldTraits< VCoreItem *, 1 >::getType(void)
{
    return FieldTraits<VCoreItem *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      VCoreItem *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      VCoreItem *,
                      UnrecordedRefCountPolicy,
                      1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VCoreItemBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentFieldContainerPtr::Description(
        SFParentFieldContainerPtr::getClassType(),
        "parent",
        "",
        ParentFieldId, ParentFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&VCoreItem::invalidEditField),
        static_cast     <FieldGetMethodSig >(&VCoreItem::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "postDFMixinTestField",
        "",
        PostDFMixinTestFieldFieldId, PostDFMixinTestFieldFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VCoreItem::editHandlePostDFMixinTestField),
        static_cast<FieldGetMethodSig >(&VCoreItem::getHandlePostDFMixinTestField));

    oType.addInitialDesc(pDesc);
}


VCoreItemBase::TypeObject VCoreItemBase::_type(
    VCoreItemBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&VCoreItemBase::createEmptyLocal),
    VCoreItem::initMethod,
    VCoreItem::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VCoreItem::classDescInserter),
    true,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"VCoreItem\"\n"
    "   parent=\"VCoreDynFieldContainer\"\n"
    "   library=\"VCoreBase\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"true\"\n"
    "   docGroupBase=\"GrpVCoreBase\"\n"
    "   typeDescAddable=\"true\"\n"
    "   dynFCDerived=\"true\"\n"
    "   childFields=\"both\"\n"
    "   >\n"
    "  <Field\n"
    "      name=\"parent\"\n"
    "      type=\"FieldContainer\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"internal\"\n"
    "      access=\"none\"\n"
    "      category=\"parentpointer\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"postDFMixinTestField\"\n"
    "     type=\"Int32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"10\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VCoreItemBase::getType(void)
{
    return _localType;
}

const FieldContainerType &VCoreItemBase::getType(void) const
{
    return _localType;
}

UInt32 VCoreItemBase::getContainerSize(void) const
{
    return sizeof(VCoreItem);
}

VCoreItemBase::TypeObject &VCoreItemBase::getFinalType(void)
{
    return _type;
}

const VCoreItemBase::TypeObject &VCoreItemBase::getFinalType(void) const
{
    return _type;
}

/*------------------------- decorator get ------------------------------*/



SFInt32 *VCoreItemBase::editSFPostDFMixinTestField(void)
{
    editSField(PostDFMixinTestFieldFieldMask);

    return &_sfPostDFMixinTestField;
}

const SFInt32 *VCoreItemBase::getSFPostDFMixinTestField(void) const
{
    return &_sfPostDFMixinTestField;
}






/*------------------------------ access -----------------------------------*/

UInt32 VCoreItemBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }
    if(FieldBits::NoField != (PostDFMixinTestFieldFieldMask & whichField))
    {
        returnValue += _sfPostDFMixinTestField.getBinSize();
    }

    return returnValue;
}

void VCoreItemBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PostDFMixinTestFieldFieldMask & whichField))
    {
        _sfPostDFMixinTestField.copyToBin(pMem);
    }
}

void VCoreItemBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        editSField(ParentFieldMask);
        _sfParent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PostDFMixinTestFieldFieldMask & whichField))
    {
        editSField(PostDFMixinTestFieldFieldMask);
        _sfPostDFMixinTestField.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VCoreItemTransitPtr VCoreItemBase::createLocal(BitVector bFlags)
{
    VCoreItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VCoreItem>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VCoreItemTransitPtr VCoreItemBase::createDependent(BitVector bFlags)
{
    VCoreItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VCoreItem>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VCoreItemTransitPtr VCoreItemBase::create(void)
{
    VCoreItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VCoreItem>(tmpPtr);
    }

    return fc;
}

VCoreItem *VCoreItemBase::createEmptyLocal(BitVector bFlags)
{
    VCoreItem *returnValue;

    newPtr<VCoreItem>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VCoreItem *VCoreItemBase::createEmpty(void)
{
    VCoreItem *returnValue;

    newPtr<VCoreItem>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VCoreItemBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VCoreItem *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VCoreItem *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VCoreItemBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VCoreItem *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VCoreItem *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VCoreItemBase::shallowCopy(void) const
{
    VCoreItem *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VCoreItem *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VCoreItemBase::VCoreItemBase(void) :
    Inherited(),
    _sfParent                 (NULL),
    _sfPostDFMixinTestField   (Int32(10))
{
}

VCoreItemBase::VCoreItemBase(const VCoreItemBase &source) :
    Inherited(source),
    _sfParent                 (NULL),
    _sfPostDFMixinTestField   (source._sfPostDFMixinTestField   )
{
}


/*-------------------------- destructors ----------------------------------*/

VCoreItemBase::~VCoreItemBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool VCoreItemBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfParent.getValue         ();

            UInt16 oldChildFieldId =
                _sfParent.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(ParentFieldMask);

            _sfParent.setValue(static_cast<FieldContainer *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool VCoreItemBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfParent.getValue() == pTypedParent)
            {
                editSField(ParentFieldMask);

                _sfParent.setValue(NULL, 0xFFFF);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr VCoreItemBase::getHandleParent          (void) const
{
    SFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr VCoreItemBase::editHandleParent         (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr VCoreItemBase::getHandlePostDFMixinTestField (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfPostDFMixinTestField,
             this->getType().getFieldDesc(PostDFMixinTestFieldFieldId),
             const_cast<VCoreItemBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VCoreItemBase::editHandlePostDFMixinTestField(void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfPostDFMixinTestField,
             this->getType().getFieldDesc(PostDFMixinTestFieldFieldId),
             this));


    editSField(PostDFMixinTestFieldFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VCoreItemBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VCoreItem *pThis = static_cast<VCoreItem *>(this);

    pThis->execSync(static_cast<VCoreItem *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VCoreItemBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VCoreItem *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VCoreItem *>(pRefAspect),
                  dynamic_cast<const VCoreItem *>(this));

    return returnValue;
}
#endif

void VCoreItemBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
