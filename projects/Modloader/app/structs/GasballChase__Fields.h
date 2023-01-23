#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballChase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballChase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballChase__Fields_DEFINED)
#include <Modloader/app/structs/AirChaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AirChaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GasballChase__Fields_DEFINED
struct SuspendWhenOutOfFrustrumWithCondition;
struct IGasBallBait;
struct RaycastHit__Array;
struct List_1_UnityEngine_Vector3_;
struct AirEntityLocomotion;
struct GasballAirMoveTimelineBehaviour;
struct GasballChase__Fields {
    struct AirChaseBehaviour__Fields _;
    float SphereCastRadius;
    float AvoidanceAngle;
    float AvoidanceAngleTreshold;
    float BreadcrumbDistance;
    float MaxStuckTime;
    float MaxUnstuckRetreatTime;
    float MoveStepDistance;
    float TurnOffSteeringForcesDistance;
    bool PreventFromSuspending;
    float ReleaseSuspentionLockDistance;
    struct SuspendWhenOutOfFrustrumWithCondition* FrustrumSuspentionComponent;
    bool DrawDebugs;
    float m_baitZoneTimer;
    struct IGasBallBait* m_currentBait;
    bool m_onRangeOfBaitZone;
    struct Vector3 m_cachedGasballChaseTargetPosision;
    struct RaycastHit__Array* m_hitsCache;
    float m_lastAvoidanceAngleDirection;
    struct List_1_UnityEngine_Vector3_* m_followPoints;
    bool m_isStuck;
    float m_stuckTime;
    float m_timeInStuckState;
    struct Vector3 m_lastPosition;
    struct Vector3 m_unstuckRetreatDirection;
    float m_turnOffSteeringForcesDistanceSqr;
    struct AirEntityLocomotion* m_locomotion;
    struct GasballAirMoveTimelineBehaviour* m_movementBehaviour;
    bool m_useSteeringForcesByDefault;
    bool m_hasBlockedSuspention;
    float m_sqrReleaseSuspentionLockDistance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballChase__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballChase__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour.h>
#include <Modloader/app/structs/IGasBallBait.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrumWithCondition.h>
#endif
#undef IL2CPP_STRUCT_GasballChase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballChase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballChase__Fields_FWDDECL)
#include <Modloader/app/structs/GasballChase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballChase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
