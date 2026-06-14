#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/KwolokBossDeathReactionBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct KwolokBossLocomotion_MoveRequest;
struct KwolokBossDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* HitTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EscapeTimeline;
    float MaxMovementSpeed;
    struct EventTriggerAnimator* MultiTargetCameraDisabledWindow;
    struct EventTriggerAnimator* MoveAllowedWindow;
    struct CheckpointFunctionality m_checkpoint;
    KwolokBossDeathReactionBehaviour_State__Enum m_currentState;

    struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
    bool m_moveRequestAdded;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
