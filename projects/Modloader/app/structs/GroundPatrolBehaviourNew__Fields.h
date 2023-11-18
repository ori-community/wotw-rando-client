#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/GroundPatrolBehaviourNew_GroundPatrolModeType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolBehaviourNew_GroundPatrolModeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_DEFINED
struct MoonVector3;
struct Predicate_1_UnityEngine_Vector3_;
struct GroundEntityLocomotion;
struct GroundPatrolBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    GroundPatrolBehaviourNew_GroundPatrolModeType__Enum GroundPatrolMode;

    float MinIdleInterval;
    float MaxIdleInterval;
    bool StartWithMoving;
    struct MoonVector3* PatrolOrigin;
    float MaxPatrolRadius;
    bool UseSeparateMaxPatrolRadiusForVertical;
    float MaxVerticalPatrolRadius;
    float TraversalSpeed;
    float MinDistance;
    float m_timeUntilIdleEnd;
    struct Predicate_1_UnityEngine_Vector3_* m_patrolTargetPredicate;
    struct Vector2 m_targetPosition;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_patrollLeft;
    struct Vector3 m_leftPatrollCenter;
    struct Vector3 m_rightPatrollCenter;
    float m_halfRadius;
    struct Vector3 m_patrolOrigin;
    float m_directionToTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundPatrolBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/GroundPatrolBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundPatrolBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
