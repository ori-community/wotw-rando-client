#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_DEFINED
struct MoonTimeline__Array;
struct GroundEntityLocomotion;
struct MoonTimeline;
struct RootMotionProcessorData;
struct GroundAreaPatrolBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum GroundAreaPatrolMode;

    struct MoonTimeline__Array* IdleTimelines;
    float MinIdleInterval;
    float MaxIdleInterval;
    bool StartWithMoving;
    bool StartMovingInCurrentlyFacedDirection;
    float TraversalSpeed;
    float PatrolRadiusWhenLost;
    float m_timeUntilIdle;
    float m_timeSinceStartedWalking;
    struct Vector2 m_targetPosition;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_patrolLeft;
    int32_t m_nextIdle;
    struct MoonTimeline* m_currentIdleTimeline;
    struct RootMotionProcessorData* IdleRootMotion;
    int32_t m_forceKeepMovingForNFrames;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundAreaPatrolBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
