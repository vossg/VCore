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
 **     class CSMItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGVCoREItem.h"               // Item Class

#include "OSGVCoRECSMItemBase.h"
#include "OSGVCoRECSMItem.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

VCORE_IMPORT_NAMESPACE;

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMItem
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Item *          CSMItemBase::_sfItem
    
*/

/*! \var UInt32          CSMItemBase::_sfAspect
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CSMItem *, nsVCoRE>::_type(
    "CSMItemPtr", 
    "NodePtr", 
    CSMItem::getClassType(),
    nsVCoRE);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CSMItem *, nsVCoRE)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMItem *,
                           nsVCoRE);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMItem *,
                           nsVCoRE);

DataType &FieldTraits<CSMItem *, nsVCoRE + 1 >::getType(void)
{
    return FieldTraits<CSMItem *, nsVCoRE>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    CSMItem *,
                    NoRefCountPolicy,
                    nsVCoRE + 1);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         CSMItem *,
                         NoRefCountPolicy,
                         nsVCoRE + 1);


OSG_END_NAMESPACE

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

void CSMItemBase::classDescInserter(TypeObject &oType)
{
    Inherited::classDescInserter(oType);

    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecChildItemPtr::Description(
        SFUnrecChildItemPtr::getClassType(),
        "item",
        "",
        ItemFieldId, ItemFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMItem::editHandleItem),
        static_cast<FieldGetMethodSig >(&CSMItem::getHandleItem));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "aspect",
        "",
        AspectFieldId, AspectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMItem::editHandleAspect),
        static_cast<FieldGetMethodSig >(&CSMItem::getHandleAspect));

    oType.addInitialDesc(pDesc);
}


CSMItemBase::TypeObject CSMItemBase::_type(
    CSMItemBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsVCoRE, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CSMItemBase::createEmptyLocal),
    CSMItem::initMethod,
    CSMItem::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMItem::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMItem\"\n"
    "    parent=\"Node\"\n"
    "    mixinparent=\"NodeProducerParent\"\n"
    "    parentnamespace=\"OSG\"\n"
    "    library=\"VCoRECSM\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    docGroupBase=\"GrpVCoreCSM\"\n"
    "    parentFields=\"single\"\n"
    "    libnamespace=\"VCoRE\"\n"
    "   >\n"
    "  <Field\n"
    "      name=\"item\"\n"
    "      type=\"VCoRE::Item\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      category=\"childpointer\"\n"
    "      childParentType=\"FieldContainer\"\n"
    "      linkParentField=\"Parent\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"aspect\"\n"
    "      type=\"UInt32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"1\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMItemBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMItemBase::getType(void) const
{
    return _type;
}

UInt32 CSMItemBase::getContainerSize(void) const
{
    return sizeof(CSMItem);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CSMItem::_sfItem field.
const SFUnrecChildItemPtr *CSMItemBase::getSFItem(void) const
{
    return &_sfItem;
}

SFUnrecChildItemPtr *CSMItemBase::editSFItem           (void)
{
    editSField(ItemFieldMask);

    return &_sfItem;
}

SFUInt32 *CSMItemBase::editSFAspect(void)
{
    editSField(AspectFieldMask);

    return &_sfAspect;
}

const SFUInt32 *CSMItemBase::getSFAspect(void) const
{
    return &_sfAspect;
}






/*------------------------------ access -----------------------------------*/

SizeT CSMItemBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ItemFieldMask & whichField))
    {
        returnValue += _sfItem.getBinSize();
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        returnValue += _sfAspect.getBinSize();
    }

    return returnValue;
}

void CSMItemBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ItemFieldMask & whichField))
    {
        _sfItem.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyToBin(pMem);
    }
}

void CSMItemBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ItemFieldMask & whichField))
    {
        editSField(ItemFieldMask);
        _sfItem.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        editSField(AspectFieldMask);
        _sfAspect.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMItemTransitPtr CSMItemBase::createLocal(BitVector bFlags)
{
    CSMItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMItem>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMItemTransitPtr CSMItemBase::createDependent(BitVector bFlags)
{
    CSMItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMItem>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMItemTransitPtr CSMItemBase::create(void)
{
    CSMItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CSMItem>(tmpPtr);
    }

    return fc;
}

CSMItem *CSMItemBase::createEmptyLocal(BitVector bFlags)
{
    CSMItem *returnValue;

    newPtr<CSMItem>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMItem *CSMItemBase::createEmpty(void)
{
    CSMItem *returnValue;

    newPtr<CSMItem>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CSMItemBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMItem *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMItem *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMItemBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMItem *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMItem *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMItemBase::shallowCopy(void) const
{
    CSMItem *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CSMItem *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CSMItemBase::CSMItemBase(void) :
    Inherited(),
    _sfItem                   (this,
                          ItemFieldId,
                          Item::ParentFieldId),
    _sfAspect                 (UInt32(1))
{
}

CSMItemBase::CSMItemBase(const CSMItemBase &source) :
    Inherited(source),
    _sfItem                   (this,
                          ItemFieldId,
                          Item::ParentFieldId),
    _sfAspect                 (source._sfAspect                 )
{
}


/*-------------------------- destructors ----------------------------------*/

CSMItemBase::~CSMItemBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool CSMItemBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == ItemFieldId)
    {
        Item * pTypedChild =
            dynamic_cast<Item *>(pChild);

        if(pTypedChild != NULL)
        {
            if(_sfItem.getValue() == pTypedChild)
            {
                editSField(ItemFieldMask);

                _sfItem.setValue(NULL);

                return true;
            }

            SWARNING << "Parent (["        << this
                     << "] id ["           << this->getId()
                     << "] type ["         << this->getType().getCName()
                     << "] childFieldId [" << childFieldId
                     << "]) - Child (["    << pChild
                     << "] id ["           << pChild->getId()
                     << "] type ["         << pChild->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void CSMItemBase::onCreate(const CSMItem *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CSMItem *pThis = static_cast<CSMItem *>(this);

        pThis->setItem(source->getItem());
    }
}

GetFieldHandlePtr CSMItemBase::getHandleItem            (void) const
{
    SFUnrecChildItemPtr::GetHandlePtr returnValue(
        new  SFUnrecChildItemPtr::GetHandle(
             &_sfItem,
             this->getType().getFieldDesc(ItemFieldId),
             const_cast<CSMItemBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMItemBase::editHandleItem           (void)
{
    SFUnrecChildItemPtr::EditHandlePtr returnValue(
        new  SFUnrecChildItemPtr::EditHandle(
             &_sfItem,
             this->getType().getFieldDesc(ItemFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CSMItem::setItem,
                    static_cast<CSMItem *>(this), _1));

    editSField(ItemFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMItemBase::getHandleAspect          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfAspect,
             this->getType().getFieldDesc(AspectFieldId),
             const_cast<CSMItemBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMItemBase::editHandleAspect         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfAspect,
             this->getType().getFieldDesc(AspectFieldId),
             this));


    editSField(AspectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMItemBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMItem *pThis = static_cast<CSMItem *>(this);

    pThis->execSync(static_cast<CSMItem *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMItemBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMItem *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMItem *>(pRefAspect),
                  dynamic_cast<const CSMItem *>(this));

    return returnValue;
}
#endif

void CSMItemBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CSMItem *>(this)->setItem(NULL);


}


VCORE_END_NAMESPACE
