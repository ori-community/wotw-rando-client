#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EntityBehaviourNode_1_PiranhaEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_PiranhaEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_DEFINED
struct Rigidbody;
struct Vector3__Array_1;
struct PiranhaPatrolBehaviour__Fields {
    struct EntityBehaviourNode_1_PiranhaEntity___Fields _;
    int32_t LatitudePointsCount;
    int32_t LongtitdePointsCount;
    float SpeetTier;
    float MinDistanceToTarget;
    float MaxDistanceToTarget;
    float MinLatitudeT;
    float MaxLatitudeT;
    bool LimitToPatrolArea;
    bool LimitToAllowedArea;
    bool ReturnToSpawnPositionOnFail;
    float MaxPatrolTime;
    float MinSubmersion;
    bool UseSelfAsAimTarget;
    bool AllowMoveBelowTarget;
    bool LockFacingDirection;
    float LookLockDelay;
    struct Rigidbody* m_rigidbody;
    bool m_hasValidFinalPosition;
    struct Vector3 m_positionToMoveTo;
    float m_time;
    bool m_lockDirection;
    float m_arrivalTime;
    struct Vector3 m_initialEntityPosition;
    int32_t m_randomIndexOffset;
    struct Vector3__Array_1* m_positionCache;
    struct Color d_pointsColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Vector3__Array_1.h>
#endif
#undef IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaPatrolBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaPatrolBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaPatrolBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
