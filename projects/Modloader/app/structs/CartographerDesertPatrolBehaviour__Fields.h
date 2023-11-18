#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_State__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_DEFINED
struct CartographerDesertPatrolBehaviour_IdleStop;
struct MoonTimeline;
struct GroundEntityLocomotion;
struct CartographerDesertPatrolBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    CartographerDesertPatrolBehaviour_State__Enum m_prevState;

    CartographerDesertPatrolBehaviour_State__Enum m_currentState;

    float m_waitTimer;
    float TraversalSpeed;
    struct CartographerDesertPatrolBehaviour_IdleStop* CrateStop;
    struct CartographerDesertPatrolBehaviour_IdleStop* RockStop;
    struct CartographerDesertPatrolBehaviour_IdleStop* FarRightStop;
    struct CartographerDesertPatrolBehaviour_IdleStop* m_currentTargetStop;
    bool m_arrivedAtGoal;
    struct MoonTimeline* m_currentTimeline;
    int32_t m_breakupId;
    int32_t m_breakupsToPlay;
    struct GroundEntityLocomotion* m_groundLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartographerDesertPatrolBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
