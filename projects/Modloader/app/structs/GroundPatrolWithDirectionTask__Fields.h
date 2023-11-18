#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_DEFINED)
#include <Modloader/app/structs/EntityTask__Fields.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionTask_GroundPatrolMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolWithDirectionTask_GroundPatrolMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_DEFINED
struct MoonVector3;
struct GroundEntityLocomotion;
struct GroundPatrolWithDirectionTask__Fields {
    struct EntityTask__Fields _;
    GroundPatrolWithDirectionTask_GroundPatrolMode__Enum PatrolMode;

    GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum PatrolDirectionMode;

    bool IdleBeforeTurning;
    struct MoonVector3* m_patrolOrigin;
    float MaxPatrolRadius;
    bool ShouldIdle;
    float MinIdleInterval;
    float MaxIdleInterval;
    float MinMovingInterval;
    float MaxMovingInterval;
    bool StartWithMoving;
    float TraversalSpeed;
    float m_timeUntilIdleEnd;
    float m_timeUntilMovingEnd;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_movingLeft;
    bool m_isMoving;
    struct Vector2 m_effectivePatrolOrigin;
    int32_t m_standingOnLedge;
    int32_t m_wallHitreqId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionTask__Fields_FWDDECL)
#include <Modloader/app/structs/GroundPatrolWithDirectionTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundPatrolWithDirectionTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
