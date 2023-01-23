#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDashPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDashPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDashPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_KuDashPuppet__Fields_DEFINED
struct MoonTimeline;
struct FloatAnimator;
struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_;
struct KuDashPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonTimeline* HitWallTimeline;
    struct MoonTimeline* ForwardTimelineStart;
    struct MoonTimeline* ForwardAirTimelineStart;
    struct MoonTimeline* BackwardTimelineStart;
    struct MoonTimeline* BackwardAirTimelineStart;
    struct MoonTimeline* ForwardTimelineEnd;
    struct MoonTimeline* ForwardAirTimelineEnd;
    struct MoonTimeline* BackwardTimelineEnd;
    struct MoonTimeline* BackwardAirTimelineEnd;
    struct FloatAnimator* BackwardAirStartGravity;
    struct FloatAnimator* ForwardAirStartGravity;
    struct FloatAnimator* BackwardAirEndGravity;
    struct FloatAnimator* ForwardAirEndGravity;
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_* m_gravityDictionary;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDashPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuDashPuppet__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KuDashPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDashPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuDashPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/KuDashPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDashPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
