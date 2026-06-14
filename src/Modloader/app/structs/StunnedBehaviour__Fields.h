#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StunnedBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StunnedBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnedBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityTask__Fields.h>
#include <Modloader/app/structs/StunnedBehaviour_StunnedState__Enum.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_StunnedBehaviour_StunnedState__Enum_DEFINED)
#define IL2CPP_STRUCT_StunnedBehaviour__Fields_DEFINED
struct MoonTimeline;
struct LegacyTimelineSequence;
struct Locomotion;
struct StunnedBehaviour__Fields {
    struct EntityTask__Fields _;
    float StunnedTime;
    struct MoonTimeline* StunnedIdleAnimatorNew;
    struct MoonTimeline* RecoveryAnimatorNew;
    struct LegacyTimelineSequence* StunnedIdleAnimator;
    struct LegacyTimelineSequence* RecoveryAnimator;
    struct Locomotion* m_locomotion;
    float m_timer;
    StunnedBehaviour_StunnedState__Enum State;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StunnedBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_StunnedBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_StunnedBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnedBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StunnedBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/StunnedBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StunnedBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
