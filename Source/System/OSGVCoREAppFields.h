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


#ifndef _OSGAPPFIELDS_H_
#define _OSGAPPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGVCoRESystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

class App;

OSG_GEN_CONTAINERPTR(App);

VCORE_END_NAMESPACE

OSG_BEGIN_NAMESPACE

VCORE_IMPORT_NAMESPACE;
/*! \ingroup GrpVCoreSystemFieldTraits
    \ingroup GrpLibOSGVCoRESystem
 */
template <>
struct FieldTraits<App *, nsVCoRE> :
    public FieldTraitsFCPtrBase<App *, nsVCoRE>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<App *, nsVCoRE>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_VCORESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAppPtr"; 
}

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAppPtr"; 
}

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAppPtr"; 
}

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAppPtr"; 
}

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAppPtr"; 
}

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAppPtr"; 
}

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAppPtr"; 
}

template<> inline
const Char8 *FieldTraits<App *, nsVCoRE>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAppPtr"; 
}


OSG_END_NAMESPACE

VCORE_BEGIN_NAMESPACE

OSG_IMPORT_NAMESPACE;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpVCoreSystemFieldSFields */
typedef PointerSField<App *,
                      RecordedRefCountPolicy, nsVCoRE  > SFRecAppPtr;
/*! \ingroup GrpVCoreSystemFieldSFields */
typedef PointerSField<App *,
                      UnrecordedRefCountPolicy, nsVCoRE> SFUnrecAppPtr;
/*! \ingroup GrpVCoreSystemFieldSFields */
typedef PointerSField<App *,
                      WeakRefCountPolicy, nsVCoRE      > SFWeakAppPtr;
/*! \ingroup GrpVCoreSystemFieldSFields */
typedef PointerSField<App *,
                      NoRefCountPolicy, nsVCoRE        > SFUncountedAppPtr;


/*! \ingroup GrpVCoreSystemFieldMFields */
typedef PointerMField<App *,
                      RecordedRefCountPolicy, nsVCoRE  > MFRecAppPtr;
/*! \ingroup GrpVCoreSystemFieldMFields */
typedef PointerMField<App *,
                      UnrecordedRefCountPolicy, nsVCoRE> MFUnrecAppPtr;
/*! \ingroup GrpVCoreSystemFieldMFields */
typedef PointerMField<App *,
                      WeakRefCountPolicy, nsVCoRE      > MFWeakAppPtr;
/*! \ingroup GrpVCoreSystemFieldMFields */
typedef PointerMField<App *,
                      NoRefCountPolicy, nsVCoRE        > MFUncountedAppPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpVCoreSystemFieldSFields \ingroup GrpLibOSGVCoRESystem */
struct SFRecAppPtr : 
    public PointerSField<App *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpVCoreSystemFieldSFields \ingroup GrpLibOSGVCoRESystem */
struct SFUnrecAppPtr : 
    public PointerSField<App *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpVCoreSystemFieldSFields \ingroup GrpLibOSGVCoRESystem */
struct SFWeakAppPtr :
    public PointerSField<App *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpVCoreSystemFieldSFields \ingroup GrpLibOSGVCoRESystem */
struct SFUncountedAppPtr :
    public PointerSField<App *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpVCoreSystemFieldMFields \ingroup GrpLibOSGVCoRESystem */
struct MFRecAppPtr :
    public PointerMField<App *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpVCoreSystemFieldMFields \ingroup GrpLibOSGVCoRESystem */
struct MFUnrecAppPtr :
    public PointerMField<App *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpVCoreSystemFieldMFields \ingroup GrpLibOSGVCoRESystem */
struct MFWeakAppPtr :
    public PointerMField<App *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpVCoreSystemFieldMFields \ingroup GrpLibOSGVCoRESystem */
struct MFUncountedAppPtr :
    public PointerMField<App *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

VCORE_END_NAMESPACE

#endif /* _OSGAPPFIELDS_H_ */