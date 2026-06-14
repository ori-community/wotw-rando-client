#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum_DEFINED)
#define IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_DEFINED
struct BatchedRaycast;
struct Vector3__Array_1;
struct Single__Array_1;
struct RaycastHit__Array;
struct RaycastCommand__Array;
struct SkeetoMoveToSemiRandomPositionBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    int32_t LatitudePointsCount;
    int32_t LongtitdePointsCount;
    bool OverrideMaxSpeed;
    float MaxSpeed;
    float AccelerationMultiplier;
    float MinDistanceToTarget;
    float MaxDistanceToTarget;
    float MinLatitudeT;
    float MaxLatitudeT;
    bool UseSelfAsAimTarget;
    bool AllowMoveBelowTarget;
    bool PrioritizeCurrentSide;
    bool LimitToAllowedArea;
    bool LimitToPatrolArea;
    bool FollowTarget;
    bool AdditionalDistanceCheck;
    float DistanceForAdditionalCheck;
    bool DrawGizmos;
    struct Color GizmoPointsColor;
    bool m_hasValidFinalPosition;
    struct Vector3 m_positionToMoveTo;
    struct Vector3 m_initialEntityPosition;
    struct Vector3 m_offsetToTarget;
    SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum m_currentPhase;

    struct BatchedRaycast* m_batchedRaycasts;
    int32_t m_randomIndexOffset;
    struct Vector3__Array_1* m_positionCache;
    struct Vector3__Array_1* m_normalizedPositionCache;
    struct Single__Array_1* m_positionDistanceCache;
    struct RaycastHit__Array* m_hits;
    struct RaycastCommand__Array* m_commands;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BatchedRaycast.h>
#include <Modloader/app/structs/RaycastCommand__Array.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Single__Array_1.h>
#include <Modloader/app/structs/Vector3__Array_1.h>
#endif
#undef IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoMoveToSemiRandomPositionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
