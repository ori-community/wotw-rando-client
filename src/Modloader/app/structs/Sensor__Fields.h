#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sensor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sensor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/PhysicsUtils_Mask__Enum.h>
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateSyncGuard.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_PhysicsUtils_Mask__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_DEFINED) && defined(IL2CPP_STRUCT_UpdateSyncGuard_DEFINED)
#define IL2CPP_STRUCT_Sensor__Fields_DEFINED
struct DynamicDataResolver;
struct Transform;
struct OriPositionPrediction;
struct PlatformMovement;
struct Sensor__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    PhysicsUtils_Mask__Enum OcclusionMask;

    float MaxSensorRadius;
    float LoseSightRadius;
    float ForceSenseRadius;
    float LoseSightDelay;
    float EnterSightDelay;
    bool UseTwoWayLineOfSightCheck;
    float ForceSenseDelay;
    float RayOriginYOffsetWhenOccludedBySlope;
    bool HasVerticalLimit;
    float VerticalSensorLimit;
    struct Transform* RayOrigin;
    struct LayerMask LayerMask;
    float UpdateInterval;
    float OriPredictionTime;
    float ConeOfVisionRadius;
    float ConeOfVisionAngle;
    bool ShowGizmos;
    bool ShowCoveOfVisionGizmo;
    bool m_canSeeCharacter;
    bool m_prevCanSeeCharacter;
    float m_timeUntilNextUpdate;
    struct Nullable_1_UnityEngine_Vector3_ m_lastSeenPosition;
    struct Nullable_1_UnityEngine_Vector3_ m_lostSightLocation;
    struct OriPositionPrediction* m_oriPredictor;
    struct Vector3 m_predictedOriPosition;
    float m_timeSinceTargetAcquired;
    float m_timeSinceTargetLost;
    float m_timeSinceForceSenseStarted;
    struct Transform* m_transform;
    struct PlatformMovement* m_platformMovement;
    bool m_componentsCached;
    struct Sensor_CanSeeCharacterHelper m_csc;
    struct LayerMask LayerMaskWithPlayer;
    struct UpdateSyncGuard sync;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sensor__Fields_FWDDECL)
#define IL2CPP_STRUCT_Sensor__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/OriPositionPrediction.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Sensor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Sensor__Fields_FWDDECL)
#include <Modloader/app/structs/Sensor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sensor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
