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
 **     class OSGTreeItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGNode.h"                    // Root Class

#include "OSGVCoREOSGTreeItemBase.h"
#include "OSGVCoREOSGTreeItem.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

VCORE_IMPORT_NAMESPACE;

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::OSGTreeItem
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          OSGTreeItemBase::_sfRoot
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<OSGTreeItem *, nsVCoRE>::_type(
    "OSGTreeItemPtr", 
    "OSGBaseItemPtr", 
    OSGTreeItem::getClassType(),
    nsVCoRE);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(OSGTreeItem *, nsVCoRE)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           OSGTreeItem *,
                           nsVCoRE);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           OSGTreeItem *,
                           nsVCoRE);

DataType &FieldTraits<OSGTreeItem *, nsVCoRE + 1 >::getType(void)
{
    return FieldTraits<OSGTreeItem *, nsVCoRE>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    OSGTreeItem *,
                    NoRefCountPolicy,
                    nsVCoRE + 1);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         OSGTreeItem *,
                         NoRefCountPolicy,
                         nsVCoRE + 1);


OSG_END_NAMESPACE

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

void OSGTreeItemBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "root",
        "",
        RootFieldId, RootFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&OSGTreeItem::editHandleRoot),
        static_cast<FieldGetMethodSig >(&OSGTreeItem::getHandleRoot));

    oType.addInitialDesc(pDesc);
}


OSGTreeItemBase::TypeObject OSGTreeItemBase::_type(
    OSGTreeItemBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsVCoRE, //Namespace
    NULL,
    OSGTreeItem::initMethod,
    OSGTreeItem::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&OSGTreeItem::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"OSGTreeItem\"\n"
    "    parent=\"OSGBaseItem\"\n"
    "    library=\"VCoRECSM\"\n"
    "    structure=\"abstract\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    docGroupBase=\"GrpVCoreCSM\"\n"
    "    parentFields=\"single\"\n"
    "    libnamespace=\"VCoRE\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"root\"\n"
    "\t type=\"Node\"\n"
    "\t cardinality=\"single\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &OSGTreeItemBase::getType(void)
{
    return _type;
}

const FieldContainerType &OSGTreeItemBase::getType(void) const
{
    return _type;
}

UInt32 OSGTreeItemBase::getContainerSize(void) const
{
    return sizeof(OSGTreeItem);
}

/*------------------------- decorator get ------------------------------*/


//! Get the OSGTreeItem::_sfRoot field.
const SFUnrecNodePtr *OSGTreeItemBase::getSFRoot(void) const
{
    return &_sfRoot;
}

SFUnrecNodePtr      *OSGTreeItemBase::editSFRoot           (void)
{
    editSField(RootFieldMask);

    return &_sfRoot;
}





/*------------------------------ access -----------------------------------*/

SizeT OSGTreeItemBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }

    return returnValue;
}

void OSGTreeItemBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }
}

void OSGTreeItemBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        editSField(RootFieldMask);
        _sfRoot.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

OSGTreeItemBase::OSGTreeItemBase(void) :
    Inherited(),
    _sfRoot                   (NULL)
{
}

OSGTreeItemBase::OSGTreeItemBase(const OSGTreeItemBase &source) :
    Inherited(source),
    _sfRoot                   (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

OSGTreeItemBase::~OSGTreeItemBase(void)
{
}

void OSGTreeItemBase::onCreate(const OSGTreeItem *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        OSGTreeItem *pThis = static_cast<OSGTreeItem *>(this);

        pThis->setRoot(source->getRoot());
    }
}

GetFieldHandlePtr OSGTreeItemBase::getHandleRoot            (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId),
             const_cast<OSGTreeItemBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr OSGTreeItemBase::editHandleRoot           (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&OSGTreeItem::setRoot,
                    static_cast<OSGTreeItem *>(this), _1));

    editSField(RootFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void OSGTreeItemBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    OSGTreeItem *pThis = static_cast<OSGTreeItem *>(this);

    pThis->execSync(static_cast<OSGTreeItem *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void OSGTreeItemBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<OSGTreeItem *>(this)->setRoot(NULL);


}


VCORE_END_NAMESPACE
