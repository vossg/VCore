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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGOSGBASEITEMFIELDS_H_
#define _OSGOSGBASEITEMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGVCoRECSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

class OSGBaseItem;

OSG_GEN_CONTAINERPTR(OSGBaseItem);

VCORE_END_NAMESPACE

OSG_BEGIN_NAMESPACE

VCORE_IMPORT_NAMESPACE;
/*! \ingroup GrpVCoreCSMFieldTraits
    \ingroup GrpLibOSGVCoRECSM
 */
template <>
struct FieldTraits<OSGBaseItem *, nsVCoRE> :
    public FieldTraitsFCPtrBase<OSGBaseItem *, nsVCoRE>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<OSGBaseItem *, nsVCoRE>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_VCORECSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdOSGBaseItemPtr"; 
}


/*! \ingroup GrpVCoreCSMFieldTraits
 */
template <>
struct FieldTraits<OSGBaseItem *, nsVCoRE + 1> :
    public FieldTraitsFCPtrBase<OSGBaseItem *, nsVCoRE + 1>
{
  private:

  public:
    typedef FieldTraits<OSGBaseItem *, nsVCoRE + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_VCORECSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildOSGBaseItemPtr"; 
}

template<> inline
const Char8 *FieldTraits<OSGBaseItem *, nsVCoRE + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildOSGBaseItemPtr"; 
}


/*! \ingroup GrpVCoreCSMFieldTraits
 */
template <>
struct FieldTraits<OSGBaseItem *, nsVCoRE + 2> : 
    public FieldTraitsFCPtrBase<OSGBaseItem *, nsVCoRE + 2>
{
  private:

    static  DataType                                _type;

  public:

    static const bool bIsPointerField = true;

    typedef FieldTraits<OSGBaseItem *, nsVCoRE + 2> Self;


    enum             { Convertible = Self::NotConvertible };
    
    static OSG_VCORECSM_DLLMAPPING
                 DataType &getType (void);

    static const Char8    *getSName(void) 
    {
        return "SFParentOSGBaseItemPtr"; 
    }

    static const Char8    *getMName(void) 
    { 
        return "MFParentOSGBaseItemPtr"; 
    }
};

OSG_END_NAMESPACE

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpVCoreCSMFieldSFields */
typedef PointerSField<OSGBaseItem *,
                      RecordedRefCountPolicy, nsVCoRE  > SFRecOSGBaseItemPtr;
/*! \ingroup GrpVCoreCSMFieldSFields */
typedef PointerSField<OSGBaseItem *,
                      UnrecordedRefCountPolicy, nsVCoRE> SFUnrecOSGBaseItemPtr;
/*! \ingroup GrpVCoreCSMFieldSFields */
typedef PointerSField<OSGBaseItem *,
                      WeakRefCountPolicy, nsVCoRE      > SFWeakOSGBaseItemPtr;
/*! \ingroup GrpVCoreCSMFieldSFields */
typedef PointerSField<OSGBaseItem *,
                      NoRefCountPolicy, nsVCoRE        > SFUncountedOSGBaseItemPtr;


/*! \ingroup GrpVCoreCSMFieldMFields */
typedef PointerMField<OSGBaseItem *,
                      RecordedRefCountPolicy, nsVCoRE  > MFRecOSGBaseItemPtr;
/*! \ingroup GrpVCoreCSMFieldMFields */
typedef PointerMField<OSGBaseItem *,
                      UnrecordedRefCountPolicy, nsVCoRE> MFUnrecOSGBaseItemPtr;
/*! \ingroup GrpVCoreCSMFieldMFields */
typedef PointerMField<OSGBaseItem *,
                      WeakRefCountPolicy, nsVCoRE      > MFWeakOSGBaseItemPtr;
/*! \ingroup GrpVCoreCSMFieldMFields */
typedef PointerMField<OSGBaseItem *,
                      NoRefCountPolicy, nsVCoRE        > MFUncountedOSGBaseItemPtr;



/*! \ingroup GrpVCoreCSMFieldSFields */
typedef ChildPointerSField<
          OSGBaseItem *, 
          UnrecordedRefCountPolicy,
          nsVCoRE + 1             > SFUnrecChildOSGBaseItemPtr;


/*! \ingroup GrpVCoreCSMFieldMFields */
typedef ChildPointerMField<
          OSGBaseItem *, 
          UnrecordedRefCountPolicy,
          nsVCoRE + 1             > MFUnrecChildOSGBaseItemPtr;


/*! \ingroup GrpVCoreCSMFieldSFields */
typedef ParentPointerSField<
          OSGBaseItem *, 
          NoRefCountPolicy,
          nsVCoRE + 2    > SFParentOSGBaseItemPtr;


#else // these are the doxygen hacks

/*! \ingroup GrpVCoreCSMFieldSFields \ingroup GrpLibOSGVCoRECSM */
struct SFRecOSGBaseItemPtr : 
    public PointerSField<OSGBaseItem *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpVCoreCSMFieldSFields \ingroup GrpLibOSGVCoRECSM */
struct SFUnrecOSGBaseItemPtr : 
    public PointerSField<OSGBaseItem *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpVCoreCSMFieldSFields \ingroup GrpLibOSGVCoRECSM */
struct SFWeakOSGBaseItemPtr :
    public PointerSField<OSGBaseItem *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpVCoreCSMFieldSFields \ingroup GrpLibOSGVCoRECSM */
struct SFUncountedOSGBaseItemPtr :
    public PointerSField<OSGBaseItem *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpVCoreCSMFieldMFields \ingroup GrpLibOSGVCoRECSM */
struct MFRecOSGBaseItemPtr :
    public PointerMField<OSGBaseItem *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpVCoreCSMFieldMFields \ingroup GrpLibOSGVCoRECSM */
struct MFUnrecOSGBaseItemPtr :
    public PointerMField<OSGBaseItem *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpVCoreCSMFieldMFields \ingroup GrpLibOSGVCoRECSM */
struct MFWeakOSGBaseItemPtr :
    public PointerMField<OSGBaseItem *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpVCoreCSMFieldMFields \ingroup GrpLibOSGVCoRECSM */
struct MFUncountedOSGBaseItemPtr :
    public PointerMField<OSGBaseItem *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpVCoreCSMFieldSFields \ingroup GrpLibOSGVCoRECSM */
struct SFUnrecChildOSGBaseItemPtr :
    public ChildPointerSField<
        OSGBaseItem *, 
        UnrecordedRefCountPolicy,
        nsVCoRE + 1             > {};


/*! \ingroup GrpVCoreCSMFieldMFields \ingroup GrpLibOSGVCoRECSM */
struct MFUnrecChildOSGBaseItemPtr :
    public ChildPointerMField<
        OSGBaseItem *, 
        UnrecordedRefCountPolicy,
        nsVCoRE + 1             > {};


/*! \ingroup GrpVCoreCSMFieldSFields \ingroup GrpLibOSGVCoRECSM */
struct SFParentOSGBaseItemPtr :
    public ParentPointerSField<
        OSGBaseItem *, 
        NoRefCountPolicy,
        nsVCoRE + 2    > {};

#endif // these are the doxygen hacks

VCORE_END_NAMESPACE

#endif /* _OSGOSGBASEITEMFIELDS_H_ */
