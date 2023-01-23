#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_DEFINED
struct MoonVector3;
struct GroundEntityLocomotion;
struct GroundPatrolWithDirectionBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum PatrolMode;

    GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum PatrolDirectionMode;

    bool IdleBeforeTurning;
    struct MoonVector3* m_patrolOrigin;
    struct MoonVector3* m_targetPosition;
    float MaxPatrolRadius;
    bool ShouldIdle;
    float MinIdleInterval;
    float MaxIdleInterval;
    float MinMovingInterval;
    float MaxMovingInterval;
    bool StartWithMoving;
    float TraversalSpeed;
    bool QuickStopOnIdle;
    float QuickStopAcceleration;
    float m_timeUntilIdleEnd;
    float m_timeUntilMovingEnd;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_movingLeft;
    bool m_isMoving;
    struct Vector2 m_effectivePatrolOrigin;
    int32_t m_standingOnLedgeOrNearKill;
    int32_t m_wallHitreqId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
