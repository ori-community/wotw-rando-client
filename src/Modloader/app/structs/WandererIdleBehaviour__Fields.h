#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererIdleBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererIdleBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererIdleBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MoonTimeline__Array;
struct WandererEntity;
struct WandererIdleBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline* SadIdleLeft;
    struct MoonTimeline* SadIdleRight;
    struct MoonTimeline* IdleLeft;
    struct MoonTimeline* IdleRight;
    struct MoonTimeline__Array* IdleBreakups;
    struct MoonTimeline__Array* IdleBreakupsLeft;
    struct MoonTimeline__Array* SadIdleBreakups;
    struct MoonTimeline__Array* SadIdleBreakupsLeft;
    float TimeBetweenBreakups;
    float m_breakupTimer;
    struct WandererEntity* m_wandererEntity;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_lastBaseIdle;
    bool m_playingBreakup;
    int32_t m_breakupId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererIdleBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_WandererIdleBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/WandererEntity.h>
#endif
#undef IL2CPP_STRUCT_WandererIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererIdleBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WandererIdleBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/WandererIdleBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererIdleBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
