#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGCManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGCManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCManager__StaticFields_DEFINED)
#include <Modloader/app/structs/UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum.h>
#include <Modloader/app/structs/UberGCManager_GcCleanupReason__Enum.h>
#if defined(IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_DEFINED) && defined(IL2CPP_STRUCT_UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum_DEFINED)
#define IL2CPP_STRUCT_UberGCManager__StaticFields_DEFINED
struct AsyncOperation_1;
struct String;
struct UberGCManager__StaticFields {
    bool FinishAllTimesliceUnloadsOnCleanup;
    bool UnloadMoreScenesOnCleanup;
    bool UnloadMoreScenesBeforeCleanup;
    bool CollectALittleEachFrame;
    bool ExhaustCollectALittleEachFrame;
    bool UsePanicHints;
    bool AllowGcOnPanicHints;
    bool DisableMemoryAutoRefresh;
    int32_t LastCollectionCount;
    int32_t LastNumGcsRan;
    int32_t InitialMaxHeapSize;
    int32_t HeapSizeReservedPercentage;
    int32_t MaxHeapSize;
    int32_t AcceptableHeapUsageToSkipGCOnFader;
    int32_t FullPurgeMaxHeapResetSize;
    int32_t HeapGrowIncrement;
    bool AutoPurgeHeap;
    float EarliestFullPurgeTime;
    bool AllowPanicCleanups;
    float PanicCleanupThreshold;
    float PanicCleanupTimegate;
    float m_lastPanicCleanupTime;
    bool SimplePanicEnabled;
    float SimplePanicAt;
    float s_simplePanicTimegate;
    float s_simplePanicHappenedAt;
    float MaxMemoryRefreshInterval;
    float SystemMemorySize;
    int32_t NumPanicCleanupsDone;
    int32_t NumResourceCleanupsDone;
    int32_t NumGCsDone;
    bool IgnoreScriptReferencesOnUnloads;
    float ProactiveCleanupTimegate;
    float ProactiveCleanupMemoryThreshold;
    float ProactiveSkipThreshold;
    float m_lastKnownMemoryAvailable;
    int32_t m_panicMemoryCheckFrames;
    float s_lastMemoryRefresh;
    bool DefaultEnableAutomaticGc;
    bool DefaultPreallocateHeap;
    float s_lastUnload;
    float s_lastPanicCheck;
    float s_lastCheck;
    struct AsyncOperation_1* m_unloadOperation;
    float m_lastKnownNvnUsage;
    float m_lastKnownNvnAlloc;
    UberGCManager_GcCleanupReason__Enum LastGcTrigger;

    UberGCManager_GcCleanupReason__Enum LastPanicTrigger;

    UberGCManager_GcCleanupReason__Enum m_lastPanicTriggerQueued;

    UberGCManager_GcCleanupReason__Enum m_lastGcTriggerQueued;

    struct String* m_lastCleanOpportunity;
    UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum LastCleanupTrigger;

    float LastFaderTime;
    uint64_t s_lastGcHeapSize;
    int32_t m_lastResourceCollectPriority;
    float _LastPanicTime_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberGCManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberGCManager__StaticFields_FWDDECL
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UberGCManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberGCManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberGCManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGCManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
