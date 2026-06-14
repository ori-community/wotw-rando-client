#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabSurface__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabSurface__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabSurface__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinGrabSurface_AnimationState__Enum.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinGrabSurface_AnimationState__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinGrabSurface__Fields_DEFINED
struct GrabbableSurfaceSettings;
struct MaterialBasedResourceMap;
struct Transform;
struct FloatAnimationParameter;
struct AnimationCurve;
struct Event_1;
struct RTPC;
struct Collider__Array;
struct GrabbableSurface;
struct Collider;
struct GrabbableSurfaceMovingWheel;
struct MoonTimeline;
struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_;
struct SeinGrabSurface__Fields {
    struct CharacterState__Fields _;
    float ClimbSpeedUp;
    float ClimbSpeedDown;
    float ClimbSpeedHorizontal;
    float ClimbSpeedForAnimationSpeed1X;
    float JumpDownReleaseMaxSpeed;
    float Acceleration;
    float MovingGrabbableVelocityMultiplier;
    struct GrabbableSurfaceSettings* GrabbableSurfaceSettings;
    struct MaterialBasedResourceMap* EffectsMap;
    struct Transform* VFXHolder;
    float DamagedCooldown;
    float ControlPointNormalInterpolationStartDistance;
    struct FloatAnimationParameter* GrabCurvatureParameter;
    float CurvatureCalculationControlPointsDistance;
    float AngleForMaxCurvature;
    float MaxTransmittedPreClimbSpeed;
    struct LayerMask GrabbableSurfaceLayerMask;
    float GrabCheckHorizontalLength;
    struct AnimationCurve* RayOffsetVsVerticalSpeed;
    struct AnimationCurve* RayOffsetVsPlayerInput;
    struct AnimationCurve* RayLengthVsVerticalSpeed;
    struct AnimationCurve* RayLengthVsPlayerInput;
    float WheelJumpAngleOffset;
    float RotationAdjustmentSpeed;
    float WheelPositionOffset;
    float WheelJumpSpeedMultiplier;
    float WheelJumpAngleAdjustment;
    float WheelRotationOffset;
    float OverrideGravity;
    float MinimumGrabbableSpeedToRideWheel;
    float DelayToFullMomentum;
    struct Event_1* StartGrabEvent;
    struct Event_1* StopGrabEvent;
    struct RTPC* MovementSpeedRTPC;
    struct Event_1* StepEvent;
    float DistancePerStep;
    struct Event_1* StartSlideDownEvent;
    struct Event_1* StopSlideDownEvent;
    struct Event_1* ShootOutFromWheelEvent;
    float m_distanceToNextStep;
    bool m_isGrabbing;
    float m_horizontalSpeed;
    float m_verticalSpeed;
    float m_ignoreRopeUntilTime;
    float m_damageCooldownRemaining;
    float m_pulledTowardsSurfaceTime;
    struct Vector3 m_grabPoint;
    float m_prevGravity;
    struct Vector3 Weight;
    float JumpForce;
    struct Transform* m_wheelAttachment;
    struct ActiveAnimationHandle m_activeAnim;
    struct ActiveAnimationHandle m_shootOutActiveAnim;
    struct Vector3 m_offset;
    bool m_touchedSurface;
    bool m_delayedWheelJumpCleanUpTriggered;
    float m_delayedWheelJumpCleanUpTimer;
    float m_wheelMomentumTimer;
    struct Collider__Array* m_collidersToIgnore;
    struct GrabbableSurface* m_touchedGrabSurface;
    struct Collider* m_wheelCollider;
    struct GrabbableSurfaceMovingWheel* m_wheel;
    struct GrabbableSurface* m_grabbedGrabSurface;
    float JumpAnimationTurnThresholdNormalizedTime;
    struct MoonTimeline* m_currentlyPlayingEffect;
    SurfaceMaterialType__Enum m_currentlyPlayingEffectSurface;

    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* m_effects;
    struct Vector3 m_overridenGrabPosition;
    bool _IsRidingWheel_k__BackingField;
    bool m_spriteMirrorLock;
    float m_currentClimbSpeed;
    SeinGrabSurface_AnimationState__Enum m_animationState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabSurface__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabSurface__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/GrabbableSurfaceMovingWheel.h>
#include <Modloader/app/structs/GrabbableSurfaceSettings.h>
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabSurface__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabSurface__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabSurface__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrabSurface__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabSurface__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
