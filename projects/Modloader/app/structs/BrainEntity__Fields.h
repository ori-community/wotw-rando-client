#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrainEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrainEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BrainEntity__Fields_DEFINED
struct MoonReference_1_IBrainController_;
struct Dictionary_2_System_Int32_Moon_MoonReference_1_;
struct List_1_Moon_MoonReference_1__2;
struct MoonTimeline;
struct List_1_Moon_Timeline_TimelineEntityRecord_;
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct IBrainController;
struct ITrimController;
struct BrainEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_IBrainController_* BrainController;
    struct Dictionary_2_System_Int32_Moon_MoonReference_1_* m_entryLookup;
    struct List_1_Moon_MoonReference_1__2* m_entries;
    struct MoonTimeline* m_targetTimeline;
    int32_t m_previewBranchIndex;
    struct List_1_Moon_Timeline_TimelineEntityRecord_* m_records;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* m_activeTimeline;
    float _CurrentTime_k__BackingField;
    bool _ShouldUpdateRecords_k__BackingField;
    struct IBrainController* m_resolvedBrainController;
    struct ITrimController* _TrimController_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrainEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrainEntity__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_MoonReference_1_.h>
#include <Modloader/app/structs/IBrainController.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/MoonReference_1_IBrainController_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_BrainEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrainEntity__Fields_FWDDECL)
#include <Modloader/app/structs/BrainEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrainEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
