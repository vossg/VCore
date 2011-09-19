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
 **     class VCoreArena!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGVCoreWorker.h"             // Worker Class
#include "OSGVCoreItem.h"               // Items Class

#include "OSGVCoreArenaBase.h"
#include "OSGVCoreArena.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VCoreArena
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var VCoreWorker *   VCoreArenaBase::_mfWorker
    
*/

/*! \var VCoreItem *     VCoreArenaBase::_mfItems
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<VCoreArena *>::_type("VCoreArenaPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(VCoreArena *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VCoreArena *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VCoreArena *,
                           0);

DataType &FieldTraits<VCoreArena *, 1 >::getType(void)
{
    return FieldTraits<VCoreArena *, 0>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    VCoreArena *,
                    NoRefCountPolicy,
                    1);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         VCoreArena *,
                         NoRefCountPolicy,
                         1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VCoreArenaBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecChildVCoreWorkerPtr::Description(
        MFUnrecChildVCoreWorkerPtr::getClassType(),
        "worker",
        "",
        WorkerFieldId, WorkerFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VCoreArena::editHandleWorker),
        static_cast<FieldGetMethodSig >(&VCoreArena::getHandleWorker));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecChildVCoreItemPtr::Description(
        MFUnrecChildVCoreItemPtr::getClassType(),
        "items",
        "",
        ItemsFieldId, ItemsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VCoreArena::editHandleItems),
        static_cast<FieldGetMethodSig >(&VCoreArena::getHandleItems));

    oType.addInitialDesc(pDesc);
}


VCoreArenaBase::TypeObject VCoreArenaBase::_type(
    VCoreArenaBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&VCoreArenaBase::createEmptyLocal),
    VCoreArena::initMethod,
    VCoreArena::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VCoreArena::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"VCoreArena\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"VCoreSystem\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    docGroupBase=\"GrpVCoreSystem\"\n"
    "    parentFields=\"single\"\n"
    "   >\n"
    "  <Field\n"
    "      name=\"worker\"\n"
    "      type=\"VCoreWorker\"\n"
    "      cardinality=\"multi\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      category=\"childpointer\"\n"
    "      childParentType=\"VCoreArena\"\n"
    "      linkParentField=\"Parent\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"items\"\n"
    "      type=\"VCoreItem\"\n"
    "      cardinality=\"multi\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      category=\"childpointer\"\n"
    "      childParentType=\"FieldContainer\"\n"
    "      linkParentField=\"Parent\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VCoreArenaBase::getType(void)
{
    return _type;
}

const FieldContainerType &VCoreArenaBase::getType(void) const
{
    return _type;
}

UInt32 VCoreArenaBase::getContainerSize(void) const
{
    return sizeof(VCoreArena);
}

/*------------------------- decorator get ------------------------------*/


//! Get the VCoreArena::_mfWorker field.
const MFUnrecChildVCoreWorkerPtr *VCoreArenaBase::getMFWorker(void) const
{
    return &_mfWorker;
}

MFUnrecChildVCoreWorkerPtr *VCoreArenaBase::editMFWorker         (void)
{
    editMField(WorkerFieldMask, _mfWorker);

    return &_mfWorker;
}

//! Get the VCoreArena::_mfItems field.
const MFUnrecChildVCoreItemPtr *VCoreArenaBase::getMFItems(void) const
{
    return &_mfItems;
}

MFUnrecChildVCoreItemPtr *VCoreArenaBase::editMFItems          (void)
{
    editMField(ItemsFieldMask, _mfItems);

    return &_mfItems;
}



void VCoreArenaBase::pushToWorker(VCoreWorker * const value)
{
    editMField(WorkerFieldMask, _mfWorker);

    _mfWorker.push_back(value);
}

void VCoreArenaBase::assignWorker   (const MFUnrecChildVCoreWorkerPtr &value)
{
    MFUnrecChildVCoreWorkerPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecChildVCoreWorkerPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<VCoreArena *>(this)->clearWorker();

    while(elemIt != elemEnd)
    {
        this->pushToWorker(*elemIt);

        ++elemIt;
    }
}

void VCoreArenaBase::removeFromWorker(UInt32 uiIndex)
{
    if(uiIndex < _mfWorker.size())
    {
        editMField(WorkerFieldMask, _mfWorker);

        _mfWorker.erase(uiIndex);
    }
}

void VCoreArenaBase::removeObjFromWorker(VCoreWorker * const value)
{
    Int32 iElemIdx = _mfWorker.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(WorkerFieldMask, _mfWorker);

        _mfWorker.erase(iElemIdx);
    }
}
void VCoreArenaBase::clearWorker(void)
{
    editMField(WorkerFieldMask, _mfWorker);


    _mfWorker.clear();
}

void VCoreArenaBase::pushToItems(VCoreItem * const value)
{
    editMField(ItemsFieldMask, _mfItems);

    _mfItems.push_back(value);
}

void VCoreArenaBase::assignItems    (const MFUnrecChildVCoreItemPtr &value)
{
    MFUnrecChildVCoreItemPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecChildVCoreItemPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<VCoreArena *>(this)->clearItems();

    while(elemIt != elemEnd)
    {
        this->pushToItems(*elemIt);

        ++elemIt;
    }
}

void VCoreArenaBase::removeFromItems(UInt32 uiIndex)
{
    if(uiIndex < _mfItems.size())
    {
        editMField(ItemsFieldMask, _mfItems);

        _mfItems.erase(uiIndex);
    }
}

void VCoreArenaBase::removeObjFromItems(VCoreItem * const value)
{
    Int32 iElemIdx = _mfItems.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ItemsFieldMask, _mfItems);

        _mfItems.erase(iElemIdx);
    }
}
void VCoreArenaBase::clearItems(void)
{
    editMField(ItemsFieldMask, _mfItems);


    _mfItems.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 VCoreArenaBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WorkerFieldMask & whichField))
    {
        returnValue += _mfWorker.getBinSize();
    }
    if(FieldBits::NoField != (ItemsFieldMask & whichField))
    {
        returnValue += _mfItems.getBinSize();
    }

    return returnValue;
}

void VCoreArenaBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WorkerFieldMask & whichField))
    {
        _mfWorker.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ItemsFieldMask & whichField))
    {
        _mfItems.copyToBin(pMem);
    }
}

void VCoreArenaBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WorkerFieldMask & whichField))
    {
        editMField(WorkerFieldMask, _mfWorker);
        _mfWorker.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ItemsFieldMask & whichField))
    {
        editMField(ItemsFieldMask, _mfItems);
        _mfItems.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VCoreArenaTransitPtr VCoreArenaBase::createLocal(BitVector bFlags)
{
    VCoreArenaTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VCoreArena>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VCoreArenaTransitPtr VCoreArenaBase::createDependent(BitVector bFlags)
{
    VCoreArenaTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VCoreArena>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VCoreArenaTransitPtr VCoreArenaBase::create(void)
{
    return createLocal();
}

VCoreArena *VCoreArenaBase::createEmptyLocal(BitVector bFlags)
{
    VCoreArena *returnValue;

    newPtr<VCoreArena>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VCoreArena *VCoreArenaBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr VCoreArenaBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VCoreArena *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VCoreArena *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VCoreArenaBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VCoreArena *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VCoreArena *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VCoreArenaBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

VCoreArenaBase::VCoreArenaBase(void) :
    Inherited(),
    _mfWorker                 (this,
                          WorkerFieldId,
                          VCoreWorker::ParentFieldId),
    _mfItems                  (this,
                          ItemsFieldId,
                          VCoreItem::ParentFieldId)
{
}

VCoreArenaBase::VCoreArenaBase(const VCoreArenaBase &source) :
    Inherited(source),
    _mfWorker                 (this,
                          WorkerFieldId,
                          VCoreWorker::ParentFieldId),
    _mfItems                  (this,
                          ItemsFieldId,
                          VCoreItem::ParentFieldId)
{
}


/*-------------------------- destructors ----------------------------------*/

VCoreArenaBase::~VCoreArenaBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool VCoreArenaBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == WorkerFieldId)
    {
        VCoreWorker * pTypedChild =
            dynamic_cast<VCoreWorker *>(pChild);

        if(pTypedChild != NULL)
        {
            Int32 iChildIdx = _mfWorker.findIndex(pTypedChild);

            if(iChildIdx != -1)
            {
                editMField(WorkerFieldMask, _mfWorker);

                _mfWorker.erase(iChildIdx);

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

    if(childFieldId == ItemsFieldId)
    {
        VCoreItem * pTypedChild =
            dynamic_cast<VCoreItem *>(pChild);

        if(pTypedChild != NULL)
        {
            Int32 iChildIdx = _mfItems.findIndex(pTypedChild);

            if(iChildIdx != -1)
            {
                editMField(ItemsFieldMask, _mfItems);

                _mfItems.erase(iChildIdx);

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

void VCoreArenaBase::onCreate(const VCoreArena *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        VCoreArena *pThis = static_cast<VCoreArena *>(this);

        MFUnrecChildVCoreWorkerPtr::const_iterator WorkerIt  =
            source->_mfWorker.begin();
        MFUnrecChildVCoreWorkerPtr::const_iterator WorkerEnd =
            source->_mfWorker.end  ();

        while(WorkerIt != WorkerEnd)
        {
            pThis->pushToWorker(*WorkerIt);

            ++WorkerIt;
        }

        MFUnrecChildVCoreItemPtr::const_iterator ItemsIt  =
            source->_mfItems.begin();
        MFUnrecChildVCoreItemPtr::const_iterator ItemsEnd =
            source->_mfItems.end  ();

        while(ItemsIt != ItemsEnd)
        {
            pThis->pushToItems(*ItemsIt);

            ++ItemsIt;
        }
    }
}

GetFieldHandlePtr VCoreArenaBase::getHandleWorker          (void) const
{
    MFUnrecChildVCoreWorkerPtr::GetHandlePtr returnValue(
        new  MFUnrecChildVCoreWorkerPtr::GetHandle(
             &_mfWorker,
             this->getType().getFieldDesc(WorkerFieldId),
             const_cast<VCoreArenaBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VCoreArenaBase::editHandleWorker         (void)
{
    MFUnrecChildVCoreWorkerPtr::EditHandlePtr returnValue(
        new  MFUnrecChildVCoreWorkerPtr::EditHandle(
             &_mfWorker,
             this->getType().getFieldDesc(WorkerFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&VCoreArena::pushToWorker,
                    static_cast<VCoreArena *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&VCoreArena::removeFromWorker,
                    static_cast<VCoreArena *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&VCoreArena::removeObjFromWorker,
                    static_cast<VCoreArena *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&VCoreArena::clearWorker,
                    static_cast<VCoreArena *>(this)));

    editMField(WorkerFieldMask, _mfWorker);

    return returnValue;
}

GetFieldHandlePtr VCoreArenaBase::getHandleItems           (void) const
{
    MFUnrecChildVCoreItemPtr::GetHandlePtr returnValue(
        new  MFUnrecChildVCoreItemPtr::GetHandle(
             &_mfItems,
             this->getType().getFieldDesc(ItemsFieldId),
             const_cast<VCoreArenaBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VCoreArenaBase::editHandleItems          (void)
{
    MFUnrecChildVCoreItemPtr::EditHandlePtr returnValue(
        new  MFUnrecChildVCoreItemPtr::EditHandle(
             &_mfItems,
             this->getType().getFieldDesc(ItemsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&VCoreArena::pushToItems,
                    static_cast<VCoreArena *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&VCoreArena::removeFromItems,
                    static_cast<VCoreArena *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&VCoreArena::removeObjFromItems,
                    static_cast<VCoreArena *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&VCoreArena::clearItems,
                    static_cast<VCoreArena *>(this)));

    editMField(ItemsFieldMask, _mfItems);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VCoreArenaBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VCoreArena *pThis = static_cast<VCoreArena *>(this);

    pThis->execSync(static_cast<VCoreArena *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VCoreArenaBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VCoreArena *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VCoreArena *>(pRefAspect),
                  dynamic_cast<const VCoreArena *>(this));

    return returnValue;
}
#endif

void VCoreArenaBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<VCoreArena *>(this)->clearWorker();

    static_cast<VCoreArena *>(this)->clearItems();


}


OSG_END_NAMESPACE
