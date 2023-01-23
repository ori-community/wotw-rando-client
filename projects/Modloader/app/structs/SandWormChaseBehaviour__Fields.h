#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/SandWormChaseBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SandWormChaseBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonFloat;
struct SandWormLocomotion;
struct Transform;
struct TargetBreadcrumbsTracker;
struct SandWormChaseBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    NavigationType__Enum ChaseZone;

    struct MoonReference_1_UnityEngine_GameObject_* TargetToFollow;
    struct MoonFloat* ArriveDistance;
    struct MoonFloat* ProximityDistance;
    struct MoonFloat* ClearanceRadius;
    struct SandWormLocomotion* m_wormLocomotion;
    struct Transform* m_targetToFollow;
    float m_arriveDistance;
    float m_proximityDistance;
    struct Vector2 m_directionToNextIntermidiateTarget;
    struct Vector3 m_currentIntermidiateTarget;
    struct TargetBreadcrumbsTracker* m_tracker;
    float m_timeToTrim;
    float m_clearanceRadius;
    SandWormChaseBehaviour_State__Enum m_state;

    struct Vector3 m_jumpTargetPosition;
    struct Vector2 m_directionToTarget;
    float m_distanceToTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/TargetBreadcrumbsTracker.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormChaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormChaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormChaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
