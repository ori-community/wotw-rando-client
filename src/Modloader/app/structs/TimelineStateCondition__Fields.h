#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineStateCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineStateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineStateCondition__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimatorPlayState__Enum_DEFINED)
#define IL2CPP_STRUCT_TimelineStateCondition__Fields_DEFINED
struct MoonTimeline;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonReference_1_Moon_Timeline_EventTriggerAnimator_;
struct TimelineStateCondition__Fields {
    struct Condition_1__Fields _;
    struct MoonTimeline* Timeline;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* MoonTimeline;
    bool UseEventTrigger;
    struct MoonReference_1_Moon_Timeline_EventTriggerAnimator_* EventTrigger;
    AnimatorPlayState__Enum DesiredState;

    bool MustPlayAndFinish;
    bool TriggerOnce;
    bool m_triggered;
    bool m_started;
    bool m_hitEventTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineStateCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineStateCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_TimelineStateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineStateCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineStateCondition__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineStateCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineStateCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
