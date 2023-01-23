#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerIdle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerIdle__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/MinerIdle_IdleStates__Enum.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_DEFINED)
#define IL2CPP_STRUCT_MinerIdle__Fields_DEFINED
struct MoonTimeline;
struct NPCEntity;
struct MinerIdle__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline* TransitioningToSharpenTimeline;
    struct MoonTimeline* TransitioningFromSharpenTimeline;
    struct MoonTimeline* SharpenAxeTimeline;
    struct MoonTimeline* SharpenAxeLookAroundTimeline;
    float TransitionInDuration;
    float ChanceOfPlayingSharpeningVariation;
    MinerIdle_IdleStates__Enum m_currentState;

    struct MoonTimeline* m_currentTimeline;
    struct NPCEntity* m_npcEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerIdle__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerIdle__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NPCEntity.h>
#endif
#undef IL2CPP_STRUCT_MinerIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerIdle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerIdle__Fields_FWDDECL)
#include <Modloader/app/structs/MinerIdle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerIdle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
