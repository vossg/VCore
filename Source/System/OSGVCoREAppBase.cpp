/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class App!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGVCoRERepository.h"         // Repositories Class
#include "OSGVCoREArena.h"              // Arenas Class

#include "OSGVCoREAppBase.h"
#include "OSGVCoREApp.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

VCORE_IMPORT_NAMESPACE;

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::App
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Repository *    AppBase::_mfRepositories
    
*/

/*! \var Arena *         AppBase::_mfArenas
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<App *, nsVCoRE>::_type(
    "AppPtr", 
    "AttachmentContainerPtr", 
    App::getClassType(),
    nsVCoRE);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(App *, nsVCoRE)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           App *,
                           nsVCoRE);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           App *,
                           nsVCoRE);

OSG_END_NAMESPACE

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

void AppBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecRepositoryPtr::Description(
        MFUnrecRepositoryPtr::getClassType(),
        "repositories",
        "",
        RepositoriesFieldId, RepositoriesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&App::editHandleRepositories),
        static_cast<FieldGetMethodSig >(&App::getHandleRepositories));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecArenaPtr::Description(
        MFUnrecArenaPtr::getClassType(),
        "arenas",
        "",
        ArenasFieldId, ArenasFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&App::editHandleArenas),
        static_cast<FieldGetMethodSig >(&App::getHandleArenas));

    oType.addInitialDesc(pDesc);
}


AppBase::TypeObject AppBase::_type(
    AppBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsVCoRE, //Namespace
    reinterpret_cast<PrototypeCreateF>(&AppBase::createEmptyLocal),
    App::initMethod,
    App::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&App::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"App\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    parentnamespace=\"OSG\"\n"
    "    library=\"VCoRESystem\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    docGroupBase=\"GrpVCoreSystem\"\n"
    "    libnamespace=\"VCoRE\"\n"
    "   >\n"
    "  <Field\n"
    "      name=\"repositories\"\n"
    "      type=\"VCoRE::Repository\"\n"
    "      cardinality=\"multi\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      category=\"pointer\"\n"
    "      >\n"
    "  </Field> \n"
    "  <Field\n"
    "      name=\"arenas\"\n"
    "      type=\"VCoRE::Arena\"\n"
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

FieldContainerType &AppBase::getType(void)
{
    return _type;
}

const FieldContainerType &AppBase::getType(void) const
{
    return _type;
}

UInt32 AppBase::getContainerSize(void) const
{
    return sizeof(App);
}

/*------------------------- decorator get ------------------------------*/


//! Get the App::_mfRepositories field.
const MFUnrecRepositoryPtr *AppBase::getMFRepositories(void) const
{
    return &_mfRepositories;
}

MFUnrecRepositoryPtr *AppBase::editMFRepositories   (void)
{
    editMField(RepositoriesFieldMask, _mfRepositories);

    return &_mfRepositories;
}
Repository * AppBase::getRepositories(const UInt32 index) const
{
    return _mfRepositories[index];
}

//! Get the App::_mfArenas field.
const MFUnrecArenaPtr *AppBase::getMFArenas(void) const
{
    return &_mfArenas;
}

MFUnrecArenaPtr     *AppBase::editMFArenas         (void)
{
    editMField(ArenasFieldMask, _mfArenas);

    return &_mfArenas;
}
Arena * AppBase::getArenas(const UInt32 index) const
{
    return _mfArenas[index];
}



void AppBase::pushToRepositories(Repository * const value)
{
    editMField(RepositoriesFieldMask, _mfRepositories);

    _mfRepositories.push_back(value);
}

void AppBase::assignRepositories(const MFUnrecRepositoryPtr &value)
{
    MFUnrecRepositoryPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecRepositoryPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<App *>(this)->clearRepositories();

    while(elemIt != elemEnd)
    {
        this->pushToRepositories(*elemIt);

        ++elemIt;
    }
}

void AppBase::removeFromRepositories(UInt32 uiIndex)
{
    if(uiIndex < _mfRepositories.size())
    {
        editMField(RepositoriesFieldMask, _mfRepositories);

        _mfRepositories.erase(uiIndex);
    }
}

void AppBase::removeObjFromRepositories(Repository * const value)
{
    Int32 iElemIdx = _mfRepositories.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(RepositoriesFieldMask, _mfRepositories);

        _mfRepositories.erase(iElemIdx);
    }
}
void AppBase::clearRepositories(void)
{
    editMField(RepositoriesFieldMask, _mfRepositories);


    _mfRepositories.clear();
}

void AppBase::pushToArenas(Arena * const value)
{
    editMField(ArenasFieldMask, _mfArenas);

    _mfArenas.push_back(value);
}

void AppBase::assignArenas   (const MFUnrecArenaPtr   &value)
{
    MFUnrecArenaPtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecArenaPtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<App *>(this)->clearArenas();

    while(elemIt != elemEnd)
    {
        this->pushToArenas(*elemIt);

        ++elemIt;
    }
}

void AppBase::removeFromArenas(UInt32 uiIndex)
{
    if(uiIndex < _mfArenas.size())
    {
        editMField(ArenasFieldMask, _mfArenas);

        _mfArenas.erase(uiIndex);
    }
}

void AppBase::removeObjFromArenas(Arena * const value)
{
    Int32 iElemIdx = _mfArenas.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ArenasFieldMask, _mfArenas);

        _mfArenas.erase(iElemIdx);
    }
}
void AppBase::clearArenas(void)
{
    editMField(ArenasFieldMask, _mfArenas);


    _mfArenas.clear();
}



/*------------------------------ access -----------------------------------*/

SizeT AppBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RepositoriesFieldMask & whichField))
    {
        returnValue += _mfRepositories.getBinSize();
    }
    if(FieldBits::NoField != (ArenasFieldMask & whichField))
    {
        returnValue += _mfArenas.getBinSize();
    }

    return returnValue;
}

void AppBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RepositoriesFieldMask & whichField))
    {
        _mfRepositories.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ArenasFieldMask & whichField))
    {
        _mfArenas.copyToBin(pMem);
    }
}

void AppBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RepositoriesFieldMask & whichField))
    {
        editMField(RepositoriesFieldMask, _mfRepositories);
        _mfRepositories.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ArenasFieldMask & whichField))
    {
        editMField(ArenasFieldMask, _mfArenas);
        _mfArenas.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AppTransitPtr AppBase::createLocal(BitVector bFlags)
{
    AppTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<App>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AppTransitPtr AppBase::createDependent(BitVector bFlags)
{
    AppTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<App>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AppTransitPtr AppBase::create(void)
{
    return createLocal();
}

App *AppBase::createEmptyLocal(BitVector bFlags)
{
    App *returnValue;

    newPtr<App>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
App *AppBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr AppBase::shallowCopyLocal(
    BitVector bFlags) const
{
    App *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const App *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AppBase::shallowCopyDependent(
    BitVector bFlags) const
{
    App *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const App *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AppBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

AppBase::AppBase(void) :
    Inherited(),
    _mfRepositories           (),
    _mfArenas                 ()
{
}

AppBase::AppBase(const AppBase &source) :
    Inherited(source),
    _mfRepositories           (),
    _mfArenas                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

AppBase::~AppBase(void)
{
}

void AppBase::onCreate(const App *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        App *pThis = static_cast<App *>(this);

        MFUnrecRepositoryPtr::const_iterator RepositoriesIt  =
            source->_mfRepositories.begin();
        MFUnrecRepositoryPtr::const_iterator RepositoriesEnd =
            source->_mfRepositories.end  ();

        while(RepositoriesIt != RepositoriesEnd)
        {
            pThis->pushToRepositories(*RepositoriesIt);

            ++RepositoriesIt;
        }

        MFUnrecArenaPtr::const_iterator ArenasIt  =
            source->_mfArenas.begin();
        MFUnrecArenaPtr::const_iterator ArenasEnd =
            source->_mfArenas.end  ();

        while(ArenasIt != ArenasEnd)
        {
            pThis->pushToArenas(*ArenasIt);

            ++ArenasIt;
        }
    }
}

GetFieldHandlePtr AppBase::getHandleRepositories    (void) const
{
    MFUnrecRepositoryPtr::GetHandlePtr returnValue(
        new  MFUnrecRepositoryPtr::GetHandle(
             &_mfRepositories,
             this->getType().getFieldDesc(RepositoriesFieldId),
             const_cast<AppBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AppBase::editHandleRepositories   (void)
{
    MFUnrecRepositoryPtr::EditHandlePtr returnValue(
        new  MFUnrecRepositoryPtr::EditHandle(
             &_mfRepositories,
             this->getType().getFieldDesc(RepositoriesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&App::pushToRepositories,
                    static_cast<App *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&App::removeFromRepositories,
                    static_cast<App *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&App::removeObjFromRepositories,
                    static_cast<App *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&App::clearRepositories,
                    static_cast<App *>(this)));

    editMField(RepositoriesFieldMask, _mfRepositories);

    return returnValue;
}

GetFieldHandlePtr AppBase::getHandleArenas          (void) const
{
    MFUnrecArenaPtr::GetHandlePtr returnValue(
        new  MFUnrecArenaPtr::GetHandle(
             &_mfArenas,
             this->getType().getFieldDesc(ArenasFieldId),
             const_cast<AppBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AppBase::editHandleArenas         (void)
{
    MFUnrecArenaPtr::EditHandlePtr returnValue(
        new  MFUnrecArenaPtr::EditHandle(
             &_mfArenas,
             this->getType().getFieldDesc(ArenasFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&App::pushToArenas,
                    static_cast<App *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&App::removeFromArenas,
                    static_cast<App *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&App::removeObjFromArenas,
                    static_cast<App *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&App::clearArenas,
                    static_cast<App *>(this)));

    editMField(ArenasFieldMask, _mfArenas);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AppBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    App *pThis = static_cast<App *>(this);

    pThis->execSync(static_cast<App *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AppBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    App *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const App *>(pRefAspect),
                  dynamic_cast<const App *>(this));

    return returnValue;
}
#endif

void AppBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<App *>(this)->clearRepositories();

    static_cast<App *>(this)->clearArenas();


}


VCORE_END_NAMESPACE
