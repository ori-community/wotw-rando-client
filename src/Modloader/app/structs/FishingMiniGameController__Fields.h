#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishingMiniGameController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishingMiniGameController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishingMiniGameController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_FishingMiniGameController__Fields_DEFINED
struct MoonSwarm;
struct UberSwarmPOI;
struct AnimationCurve;
struct VerletStructure;
struct MoonTimeline;
struct StateMachine_2;
struct FishingMiniGameController_States;
struct FishingMiniGameController__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float InteractionRadius;
    struct MoonSwarm* Swarm;
    struct UberSwarmPOI* POI;
    struct AnimationCurve* AttractForceMultiplierNormalized;
    float CatchTime;
    float BaitMoveSpeed;
    struct VerletStructure* RodVerletStructure;
    int32_t VerletJointIndex;
    struct MoonTimeline* EnterTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* ExitTimeline;
    float m_attractForce;
    struct StateMachine_2* m_stateMachine;
    struct FishingMiniGameController_States* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishingMiniGameController__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishingMiniGameController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FishingMiniGameController_States.h>
#include <Modloader/app/structs/MoonSwarm.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/UberSwarmPOI.h>
#include <Modloader/app/structs/VerletStructure.h>
#endif
#undef IL2CPP_STRUCT_FishingMiniGameController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishingMiniGameController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishingMiniGameController__Fields_FWDDECL)
#include <Modloader/app/structs/FishingMiniGameController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishingMiniGameController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
