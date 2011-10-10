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
 **     class Worker!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGVCoREArena.h"              // Parent Class
#include "OSGVCoreItem.h"               // Items Class

#include "OSGVCoREWorkerBase.h"
#include "OSGVCoREWorker.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

VCORE_IMPORT_NAMESPACE;

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Worker
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Arena *         WorkerBase::_sfParent
    
*/

/*! \var VCoreItem *     WorkerBase::_mfItems
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Worker *, nsVCoRE>::_type("WorkerPtr", "AttachmentContainerPtr", nsVCoRE);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(Worker *, nsVCoRE)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Worker *,
                           nsVCoRE);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Worker *,
                           nsVCoRE);

DataType &FieldTraits< Worker *, nsVCoRE + 1 >::getType(void)
{
    return FieldTraits<Worker *, nsVCoRE>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      Worker *,
                      UnrecordedRefCountPolicy,
                      nsVCoRE + 1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      Worker *,
                      UnrecordedRefCountPolicy,
                      nsVCoRE + 1);


OSG_END_NAMESPACE

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

void WorkerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentArenaPtr::Description(
        SFParentArenaPtr::getClassType(),
        "parent",
        "",
        ParentFieldId, ParentFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&Worker::invalidEditField),
        static_cast     <FieldGetMethodSig >(&Worker::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecVCoreItemPtr::Description(
        MFUnrecVCoreItemPtr::getClassType(),
        "items",
        "",
        ItemsFieldId, ItemsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Worker::editHandleItems),
        static_cast<FieldGetMethodSig >(&Worker::getHandleItems));

    oType.addInitialDesc(pDesc);
}


WorkerBase::TypeObject WorkerBase::_type(
    WorkerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsVCoRE, //Namespace
    reinterpret_cast<PrototypeCreateF>(&WorkerBase::createEmptyLocal),
    Worker::initMethod,
    Worker::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Worker::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"Worker\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"VCoRESystem\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    docGroupBase=\"GrpVCoreSystem\"\n"
    "    childFields=\"both\"\n"
    "    libnamespace=\"VCoRE\"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"parent\"\n"
    "      type=\"VCoRE::Arena\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"internal\"\n"
    "      access=\"none\"\n"
    "      category=\"parentpointer\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"items\"\n"
    "      type=\"VCoreItem\"\n"
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

FieldContainerType &WorkerBase::getType(void)
{
    return _type;
}

const FieldContainerType &WorkerBase::getType(void) const
{
    return _type;
}

UInt32 WorkerBase::getContainerSize(void) const
{
    return sizeof(Worker);
}

/*------------------------- decorator get ------------------------------*/



//! Get the Worker::_mfItems field.
const MFUnrecVCoreItemPtr *WorkerBase::getMFItems(void) const
{
    return &_mfItems;
}

MFUnrecVCoreItemPtr *WorkerBase::editMFItems          (void)
{
    editMField(ItemsFieldMask, _mfItems);

    return &_mfItems;
}



void WorkerBase::pushToItems(VCoreItem * const value)
{
    editMField(ItemsFieldMask, _mfItems);

    _mfItems.push_back(value);
}

void WorkerBase::assignItems    (const MFUnrecVCoreItemPtr &value)
{
    MFUnrecVCoreItemPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecVCoreItemPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<Worker *>(this)->clearItems();

    while(elemIt != elemEnd)
    {
        this->pushToItems(*elemIt);

        ++elemIt;
    }
}

void WorkerBase::removeFromItems(UInt32 uiIndex)
{
    if(uiIndex < _mfItems.size())
    {
        editMField(ItemsFieldMask, _mfItems);

        _mfItems.erase(uiIndex);
    }
}

void WorkerBase::removeObjFromItems(VCoreItem * const value)
{
    Int32 iElemIdx = _mfItems.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ItemsFieldMask, _mfItems);

        _mfItems.erase(iElemIdx);
    }
}
void WorkerBase::clearItems(void)
{
    editMField(ItemsFieldMask, _mfItems);


    _mfItems.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 WorkerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }
    if(FieldBits::NoField != (ItemsFieldMask & whichField))
    {
        returnValue += _mfItems.getBinSize();
    }

    return returnValue;
}

void WorkerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ItemsFieldMask & whichField))
    {
        _mfItems.copyToBin(pMem);
    }
}

void WorkerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        editSField(ParentFieldMask);
        _sfParent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ItemsFieldMask & whichField))
    {
        editMField(ItemsFieldMask, _mfItems);
        _mfItems.copyFromBin(pMem);
    }
}

//! create a new instance of the class
WorkerTransitPtr WorkerBase::createLocal(BitVector bFlags)
{
    WorkerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Worker>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
WorkerTransitPtr WorkerBase::createDependent(BitVector bFlags)
{
    WorkerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Worker>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
WorkerTransitPtr WorkerBase::create(void)
{
    return createLocal();
}

Worker *WorkerBase::createEmptyLocal(BitVector bFlags)
{
    Worker *returnValue;

    newPtr<Worker>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Worker *WorkerBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr WorkerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Worker *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Worker *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr WorkerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Worker *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Worker *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr WorkerBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

WorkerBase::WorkerBase(void) :
    Inherited(),
    _sfParent                 (NULL),
    _mfItems                  ()
{
}

WorkerBase::WorkerBase(const WorkerBase &source) :
    Inherited(source),
    _sfParent                 (NULL),
    _mfItems                  ()
{
}


/*-------------------------- destructors ----------------------------------*/

WorkerBase::~WorkerBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool WorkerBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentFieldId)
    {
        Arena * pTypedParent =
            dynamic_cast< Arena * >(pParent);

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

            _sfParent.setValue(static_cast<Arena *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool WorkerBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentFieldId)
    {
        Arena * pTypedParent =
            dynamic_cast< Arena * >(pParent);

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


void WorkerBase::onCreate(const Worker *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Worker *pThis = static_cast<Worker *>(this);

        MFUnrecVCoreItemPtr::const_iterator ItemsIt  =
            source->_mfItems.begin();
        MFUnrecVCoreItemPtr::const_iterator ItemsEnd =
            source->_mfItems.end  ();

        while(ItemsIt != ItemsEnd)
        {
            pThis->pushToItems(*ItemsIt);

            ++ItemsIt;
        }
    }
}

GetFieldHandlePtr WorkerBase::getHandleParent          (void) const
{
    SFParentArenaPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr WorkerBase::editHandleParent         (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr WorkerBase::getHandleItems           (void) const
{
    MFUnrecVCoreItemPtr::GetHandlePtr returnValue(
        new  MFUnrecVCoreItemPtr::GetHandle(
             &_mfItems,
             this->getType().getFieldDesc(ItemsFieldId),
             const_cast<WorkerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr WorkerBase::editHandleItems          (void)
{
    MFUnrecVCoreItemPtr::EditHandlePtr returnValue(
        new  MFUnrecVCoreItemPtr::EditHandle(
             &_mfItems,
             this->getType().getFieldDesc(ItemsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&Worker::pushToItems,
                    static_cast<Worker *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&Worker::removeFromItems,
                    static_cast<Worker *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&Worker::removeObjFromItems,
                    static_cast<Worker *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&Worker::clearItems,
                    static_cast<Worker *>(this)));

    editMField(ItemsFieldMask, _mfItems);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void WorkerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Worker *pThis = static_cast<Worker *>(this);

    pThis->execSync(static_cast<Worker *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *WorkerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Worker *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Worker *>(pRefAspect),
                  dynamic_cast<const Worker *>(this));

    return returnValue;
}
#endif

void WorkerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Worker *>(this)->clearItems();


}


VCORE_END_NAMESPACE