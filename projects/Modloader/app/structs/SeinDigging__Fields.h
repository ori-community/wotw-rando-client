#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDigging__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDigging__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDigging__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinDigging_State__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinDigging_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinDigging__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct SeinDigging_DiggingEffects__Array;
struct SeinDigging_DiggingEffects;
struct SoundProvider;
struct State;
struct Event_1;
struct RTPC;
struct DigZone;
struct Rigidbody;
struct CharacterPlatformMovement_ScheduledSpeedCurve;
struct ParticleSystem;
struct DigZoneHandler;
struct Collider__Array;
struct Transform;
struct SeinDigging__Fields {
    struct CharacterState__Fields _;
    bool DebugDrawEnabled;
    SeinDigging_State__Enum m_currentState;

    struct AnimationCurve* DeadZoneRemappingCurve;
    float DigSpeed;
    float DigAccel;
    float DashSpeed;
    float DashTime;
    float DashDecelSmoothDamp;
    float DashDecelMaxSpeed;
    float DashCooldown;
    float DashCooldownOnExit;
    float DashCooldownOnEnter;
    float TurnSmoothTime;
    struct AnimationCurve* SmoothTimeVsInputMagnitude;
    float MinSmoothTime;
    float DashTurnSmoothTime;
    float SpeedMultiplierOnExit;
    float OutOfDigDashSpeed;
    float OutOfDigDashDuration;
    float ExitDashDuration;
    struct AnimationCurve* OutOfDigDashSpeedCurve;
    float DashDamage;
    DamageWeight__Enum DashDamageWeight;

    float DashDamageRadius;
    float DashDamageForce;
    struct LayerMask DashDamageLayerMask;
    bool ApplyDashExitCurve;
    struct AnimationCurve* DashExitCurve;
    float DashExitDigSpeed;
    struct GameObject* DashHitEffect;
    float DashExitEnableTurnThreshold;
    float AutoDashMaxDistance;
    float FailedDashRotationResetTime;
    struct LayerMask RicochetCheckMask;
    float RicochetInputCooldown;
    float RicochetStickToWallCooldown;
    float SpeedMultiplierOnRicochet;
    float RicochetCheckMinDotProduct;
    struct LayerMask StickToWallCheckMask;
    float StickToWallRadius;
    float StickToWallMaxDotProduct;
    float StickToWallMinInputAlignment;
    float StickToWallTurnSmoothTime;
    float DigBlendParameterSpeed;
    float ExitSandRootScale;
    struct SeinDigging_DiggingEffects__Array* DiggingVFX;
    struct SeinDigging_DiggingEffects* m_currentVFX;
    float m_pushTimeoutInterval;
    float m_pushTimeout;
    float RicochetEffectCooldown;
    float m_ricochetEffectTimer;
    float TrailEffectDistance;
    float TrailAllowedBorder;
    float DashExtraSandParticleRadius;
    int32_t DashExtraSandParticleAmount;
    float SeinRadius;
    float DigInsteadOfDashPredictionTime;
    float DigInsteadOfDashRadius;
    struct AnimationCurve* DigInsteadOfDashThreasholdAngleCurve;
    struct SoundProvider* DashSoundProvider;
    struct SoundProvider* RicochetSoundProvider;
    struct SoundProvider* InSandSoundLoopingProvider;
    struct SoundProvider* StartDigAbilitySoundProvider;
    struct SoundProvider* EnterSandSoundEvent;
    struct SoundProvider* ExitSandSoundEvent;
    struct State* InSandSoundState;
    struct State* OutSandSoundState;
    struct Event_1* DashEnableSoundEvent;
    struct RTPC* DigTurnAngle;
    struct Event_1* DigTurn;
    float DigTurnThreshold;
    float CameraXWeight;
    float CameraYWeight;
    struct Vector2 CameraMinOffset;
    struct Vector2 CameraMaxOffset;
    float CameraSpeed;
    int32_t StartVFX;
    bool m_cameraLookAheadActive;
    float m_currentStateTime;
    struct DigZone* m_currentZone;
    struct Rigidbody* m_currentZoneBody;
    struct DigZone* m_lastZone;
    float m_speed;
    float m_angle;
    float m_previousWantedAngle;
    struct CharacterPlatformMovement_ScheduledSpeedCurve* m_dashExitCurve;
    float m_angleSpeed;
    float m_dashDecelSmoothVelocity;
    struct Vector3 m_dir;
    struct GameObject* m_trailEffect;
    struct ParticleSystem* m_trailParticleSystem;
    float m_ricochetCooldownRemaining;
    float m_ricochetStickToWallCooldownRemaining;
    bool m_damaged;
    bool m_isSlidingAlongWall;
    struct Vector2 m_lastCollisionNormal;
    bool m_isDashing;
    float m_dashTimer;
    float m_dashCooldown;
    struct GameObject* m_digDashEffect;
    struct Vector2 m_outOfZoneDashStartDirection;
    float m_totalDigDistanceTravelled;
    float m_exitingSandDuration;
    bool m_canDealDamage;
    float m_dealDamageTimer;
    struct DigZoneHandler* m_digZoneEntranceHandler;
    struct Collider__Array* m_damageHitColliders;
    int32_t m_currentDamageID;
    bool m_shouldStartDashing;
    bool m_adjustDashDirection;
    struct Vector2 m_adjustedDashDirection;
    float m_rotationFrom;
    struct Vector3 m_lastSandEnterPosition;
    float m_currentDigBlendValue;
    bool m_wasInSand;
    float m_timeSinceLastOutOfSandDash;
    struct Transform* m_trailAnchor;
    struct Vector3 m_trailAnchorPos;
    struct Transform* m_trailBackAnchor;
    struct Vector3 m_lastTrailAnchorPosition;
    struct WwiseEventSystem_SoundHandle m_inSandSoundHandle;
    float m_deltaAngle;
    float m_digParam;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDigging__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDigging__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CharacterPlatformMovement_ScheduledSpeedCurve.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/DigZoneHandler.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinDigging_DiggingEffects.h>
#include <Modloader/app/structs/SeinDigging_DiggingEffects__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinDigging__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDigging__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDigging__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDigging__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDigging__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
