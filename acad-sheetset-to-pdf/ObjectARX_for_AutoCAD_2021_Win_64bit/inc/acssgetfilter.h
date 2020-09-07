//////////////////////////////////////////////////////////////////////////////
//
//  Copyright 2020 Autodesk, Inc.  All rights reserved.
//
//  Use of this software is subject to the terms of the Autodesk license 
//  agreement provided at the time of installation or download, or which 
//  otherwise accompanies this software in either electronic or hard copy form.   
//
//////////////////////////////////////////////////////////////////////////////
//
//  ssgetfilter.h - Header file for AcEdSelectionSetService and AcEdSSGetFilter
//

#ifndef _SSGETFILTER_H
#define _SSGETFILTER_H
#include "acedinpt.h"  // AcEdInputContextReactor
#include "AcCoreDefs.h" // for ACCORE_PORT

class AcApDocument;


class AcEdSelectionSetService
{
public:
    virtual ~AcEdSelectionSetService() {}

    virtual Acad::ErrorStatus ssNameX(
        bool bIsSubSelectionIndex,
        int index,
        resbuf*& result) = 0;
    
    virtual Acad::ErrorStatus ssNameSubentityX(
        bool bIsSubSelectionIndex,
        int index,
        int subentityIndex,
        resbuf*& result) = 0;

    virtual Acad::ErrorStatus ssNameSubentities(
        bool bIsSubSelectionIndex,
        int index,
        AcDbFullSubentPathArray& subEntities) = 0;
        
    virtual Acad::ErrorStatus add(
        resbuf *ssnameXList,
        const AcDbFullSubentPath *pPath = NULL,
        const AcDbObjectId* pEntselSubent = NULL) = 0;

    virtual Acad::ErrorStatus addSubentity(
        resbuf *ssnameXList,
        const AcDbFullSubentPath& subEntity) = 0;

    virtual Acad::ErrorStatus remove(
        int index) = 0;

    virtual Acad::ErrorStatus removeSubentity(
        int entityIndex,
        int subEntityIndex) = 0; 

    virtual Acad::ErrorStatus highlight(
        int subSelectionIndex,
        const AcDbFullSubentPath& path) = 0;

    virtual int subSelectionMode() = 0;

    virtual Acad::ErrorStatus getSubSelectionPoints(
        AcGePoint3dArray& points) = 0;

    virtual Acad::ErrorStatus add(
        const AcArray<resbuf *>& ssnameXList,
        const AcArray<AcDbFullSubentPath *> *pPath,
        bool bAddsAreUnique) = 0;

    virtual Acad::ErrorStatus addSubentities(
        resbuf * ssnameXList,
        const AcArray<AcDbFullSubentPath>& subEntities,
        bool bAddsAreUnique) = 0;

    virtual Acad::ErrorStatus remove(
        const AcArray<int>& indices) = 0;

    virtual Acad::ErrorStatus removeSubentities(
        int entityIndex,
        const AcArray<int>& subEntityIndices) = 0;

    // Provides a more granular selection mode.
    // When subSelectionMode=kBox, subSelectionSubMode will provide kPick/kCross/kWin
    virtual int subSelectionSubMode() = 0;
};

typedef AcArray<AcDbIntArray, AcArrayObjectCopyReallocator<AcDbIntArray> > 
    AcDbArrayIntArray;

class AcEdSSGetFilter: public AcEdInputContextReactor
{
public:

    ACAD_PORT virtual ~AcEdSSGetFilter();
    virtual void
    ssgetAddFilter(
        int ssgetFlags,
        AcEdSelectionSetService &service,
        const AcDbObjectIdArray& selectionSet,
        const AcDbObjectIdArray& subSelectionSet)
    { 
        ADESK_UNREFED_PARAM(ssgetFlags);
        ADESK_UNREFED_PARAM(service);
        ADESK_UNREFED_PARAM(selectionSet);
        ADESK_UNREFED_PARAM(subSelectionSet);
    }

    virtual void
    ssgetRemoveFilter(
        int ssgetFlags,
        AcEdSelectionSetService &service,
        const AcDbObjectIdArray& selectionSet,
        const AcDbObjectIdArray& subSelectionSet,
        AcDbIntArray& removeIndexes,
        AcDbArrayIntArray& removeSubentIndexes)
    { 
        ADESK_UNREFED_PARAM(ssgetFlags);
        ADESK_UNREFED_PARAM(service);
        ADESK_UNREFED_PARAM(selectionSet);
        ADESK_UNREFED_PARAM(subSelectionSet);
        ADESK_UNREFED_PARAM(removeIndexes);
        ADESK_UNREFED_PARAM(removeSubentIndexes);}

    virtual void
    ssgetAddFailed(
        int ssgetFlags,
        int ssgetMode,
        AcEdSelectionSetService &service,
        const AcDbObjectIdArray& selectionSet,
        resbuf *rbPoints)
    {
        ADESK_UNREFED_PARAM(ssgetFlags);
        ADESK_UNREFED_PARAM(ssgetMode);
        ADESK_UNREFED_PARAM(service);
        ADESK_UNREFED_PARAM(selectionSet);
        ADESK_UNREFED_PARAM(rbPoints);
    }

    virtual void
    ssgetRemoveFailed(
        int ssgetFlags,
        int ssgetMode,
        AcEdSelectionSetService &service,
        const AcDbObjectIdArray& selectionSet,
        resbuf *rbPoints,
        AcDbIntArray& removeIndexes,
        AcDbArrayIntArray& removeSubentIndexes)
    {
        ADESK_UNREFED_PARAM(ssgetFlags);
        ADESK_UNREFED_PARAM(ssgetMode);
        ADESK_UNREFED_PARAM(service);
        ADESK_UNREFED_PARAM(selectionSet);
        ADESK_UNREFED_PARAM(rbPoints);
        ADESK_UNREFED_PARAM(removeIndexes);
        ADESK_UNREFED_PARAM(removeSubentIndexes);
    }

    virtual void
    endSSGet(
        Acad::PromptStatus returnStatus,
        int ssgetFlags,
        AcEdSelectionSetService &service,
        const AcDbObjectIdArray& selectionSet)
    {
        ADESK_UNREFED_PARAM(returnStatus);
        ADESK_UNREFED_PARAM(ssgetFlags);
        ADESK_UNREFED_PARAM(service);
        ADESK_UNREFED_PARAM(selectionSet);
    }

    virtual void
    endEntsel(
        Acad::PromptStatus       returnStatus,
        const AcDbObjectId&      pickedEntity,
        const AcGePoint3d&       pickedPoint,
        AcEdSelectionSetService& service)
    {
        ADESK_UNREFED_PARAM(returnStatus);
        ADESK_UNREFED_PARAM(pickedEntity);
        ADESK_UNREFED_PARAM(pickedPoint);
        ADESK_UNREFED_PARAM(service);
    }

   virtual void
    endNEntsel(
        Acad::PromptStatus       returnStatus,
        const AcDbObjectId&      pickedEntity,
        const AcGePoint3d&       pickedPoint,
        ads_point                xformres[4], 
        struct resbuf **         refstkres,
        AcEdSelectionSetService& service)
    {
        ADESK_UNREFED_PARAM(returnStatus);
        ADESK_UNREFED_PARAM(pickedEntity);
        ADESK_UNREFED_PARAM(pickedPoint);
        ADESK_UNREFED_PARAM(xformres);
        ADESK_UNREFED_PARAM(refstkres);
        ADESK_UNREFED_PARAM(service);
        }

    virtual void beginSSGetCustomKeywordCallback(const ACHAR* /*pKeyword*/) {}
    virtual void endSSGetCustomKeywordCallback(const ACHAR* /*pKeyword*/) {}

    // highlightPath has same contents as subEntityPath.  Callee can
    // remove from or add to it.
    //
    virtual void
    ssgetRolloverFilter(
        const AcDbFullSubentPath &subEntityPath, 
        AcDbFullSubentPath &highlightPath)
    {
        ADESK_UNREFED_PARAM(subEntityPath);
        ADESK_UNREFED_PARAM(highlightPath);
    }

    // highlightPaths has same contents as subEntityPath. Callee can
    // remove from or add to it.
    //
    virtual void
    ssgetRolloverFilter(
        const AcDbFullSubentPath &subEntityPath, 
        AcDbFullSubentPathArray &highlightPaths)
    {
        ADESK_UNREFED_PARAM(subEntityPath);
        ADESK_UNREFED_PARAM(highlightPaths);
    }

    // highlightPaths has same contents as subEntityPaths. Callee can
    // remove from or add to it.
    //
    virtual void ssgetPreviewFilter(
        const AcDbFullSubentPathArray& subEntityPaths,
        AcDbFullSubentPathArray& highlightPaths)
    {
        ADESK_UNREFED_PARAM(subEntityPaths);
        ADESK_UNREFED_PARAM(highlightPaths);
    }

    // Used to help optimize the callback overhead.
    // Callers to addSSgetFilterInputContextReactor() should specify which groups
    // of callbacks they override, using these bits.
    // Only use kAll if you are overriding all four groups
    // Also be sure to add the "override" keyword to your method declarations
    //
    enum MethodGroups {
        kAddRemove = 1,         // includes ssgetAdd*() and ssgetRemove*()
        kBeginEnd  = 2,         // includes begin*() and end*() 
        kRollover  = 4,         // includes ssgetRolloverFilter()
        kMisc      = 8,         // includes ssgetPreviewFilter()
        kAll       = 15
    };
};

// These interfaces have been rolled into the main interface (AcEdSSGetFilter) and
// will be removed in the future. Please use AcEdSSGetFilter instead
//
typedef AcEdSSGetFilter AcEdSSGetFilter2;
typedef AcEdSSGetFilter AcEdSSGetFilter3;
typedef AcEdSSGetFilter AcEdSSGetFilter4;

// Register a reactor (filter).
// For better performance, please specify which group(s) of callbacks the object
// overrides, instead of specifying kAll.
// Also be sure to add the override keyword to your methods, for compile time checking
//
ACCORE_PORT Acad::ErrorStatus addSSgetFilterInputContextReactor(
                                AcApDocument *pDoc, AcEdSSGetFilter *pFilter,
                                int nMethodsOverridden = AcEdSSGetFilter::MethodGroups::kAll);

ACCORE_PORT Acad::ErrorStatus removeSSgetFilterInputContextReactor(
                                AcApDocument *pDoc, AcEdSSGetFilter *pFilter);

// Note: an internal counter is incremented when flag is true and decremented when false.
// duplicateSelectionsAllowed() returns true if the counter is > 0.
//
ACCORE_PORT Acad::ErrorStatus setAllowDuplicateSelection(AcApDocument *pDoc, bool flag);

ACCORE_PORT bool              duplicateSelectionsAllowed(AcApDocument *pDoc);


namespace AcEdSSGet {

enum AcEdSSGetFlags {
    kNormal         =   0,
    kPickPoints     =   1,
    kDuplicates     =   2,
    kNestedEntities =   4,
    kSubEntities    =   8,
    kSinglePick     =  16,
    kPickfirstSet   =  32,
    kPreviousSet    =  64,
    kSubSelection   = 128,
    kUndo           = 256,
    kFailedPickAuto = 512,
    kCommandPreview = 1024,
    kAllViewports   = 2048,
    kForBoxPick     = 4096,
    kPreSelectionHilite = 8192
};

enum AcEdSSGetModes {
    kUnknown = 0, // (Unknown mode)
    kWin,       //  (Window spec)
    kCross,     //  (Crossing spec)
    kBox,       //  (Box spec)
    kLast,      //  (Last)
    kEntity,    //  (Explicit entity name)
    kAll,       //  (Select all)
    kFence,     //  (Fence Selection)
    kCPoly,     //  (Crossing Poly)
    kWPoly,     //  (Window Poly)
    kPick,      //  (Single pick)
    kEvery,     //  (every entity on single pick)
    kXten,      //  (ssget "X")
    kGroup,     //  (selection set from "group" specification)
    kPrevious,  //  (previous selectionset)
    kMultiple,  //  (Multiple keyword)
};

};

class AcEdSubSelectFilterService
{
public:

    virtual Acad::ErrorStatus ssNameX(
        bool bIsSubSelectionIndex,
        int index,
        resbuf*& result) = 0;
    
    virtual Acad::ErrorStatus add(
        resbuf *ssnameXList,
        const AcDbFullSubentPath& path) = 0;

    virtual Acad::ErrorStatus remove(
        bool bIsSubSelectionIndex,
        int index) = 0;
};

class AcEdSSGetSubSelectFilter : public AcEdInputContextReactor
{
public:
    ACAD_PORT virtual ~AcEdSSGetSubSelectFilter();

    virtual Acad::ErrorStatus 
        getSubentPathsAtGsMarker(
            AcDbEntity*                    pEnt, 
            bool                           bAdding,
            const AcDbFullSubentPathArray& selectedPaths,
            AcDb::SubentType               type,
            Adesk::GsMarker                gsMark, 
            const AcGePoint3d&             pickPoint,
            const AcGeMatrix3d&            viewXForm,
            int&                           numPaths,
            AcDbFullSubentPath*&           subentPaths,
            int                            numInserts,
            AcDbObjectId*                  entAndInsertStack) = 0;
    
    virtual Acad::ErrorStatus 
        subSelectClassList(AcArray<AcRxClass*>& classes) = 0;

    virtual void
        ssgetAddFilter(
            int                            ssgetFlags,
            AcEdSubSelectFilterService&    service,
            const AcDbObjectId&            object,
            const AcDbFullSubentPathArray& selectedPaths,
            const AcDbFullSubentPathArray& addedPaths) = 0;

    virtual void
        ssgetRemoveFilter(
            int                            ssgetFlags, 
            AcEdSubSelectFilterService&    service,
            const AcDbObjectId&            object,
            const AcDbFullSubentPathArray& selectedPaths,
            const AcDbFullSubentPathArray& removedPaths) = 0;
};

ACCORE_PORT Acad::ErrorStatus addSSgetFilterInputContextReactor(
                        AcApDocument             *pDoc, 
                        AcEdSSGetSubSelectFilter *pFilter);

ACCORE_PORT Acad::ErrorStatus removeSSgetFilterInputContextReactor(
                        AcApDocument             *pDoc, 
                        AcEdSSGetSubSelectFilter *pFilter);

#endif  // _SSGETFILTER_H

