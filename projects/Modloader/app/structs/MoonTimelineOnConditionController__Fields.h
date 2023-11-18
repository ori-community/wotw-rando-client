#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_DEFINED
struct Condition_1;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonTimeline;
struct MoonTimelineOnConditionController__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* Condition;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnConditionEnter;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnConditionStay;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnConditionExit;
    struct MoonTimeline* m_onConditionEnterResolved;
    struct MoonTimeline* m_onConditionStayResolved;
    struct MoonTimeline* m_onConditionExitResolved;
    bool _InvalidateParentTimelineCache_k__BackingField;
    bool m_wasActivated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimelineOnConditionController__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTimelineOnConditionController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimelineOnConditionController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
