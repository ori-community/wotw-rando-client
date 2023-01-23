#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/KwolokBossLocomotion_LocomotionMode__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossLocomotion_LocomotionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBossLocomotion__Fields_DEFINED
struct Transform;
struct EntityLocomotionTask;
struct KwolokBossEntity;
struct MoonTimeline;
struct MoonAnimation;
struct IKPostprocess;
struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate;
struct AnimationCurve;
struct KwolokBossLocomotion_ModifyAccelerationDelegate;
struct KwolokBossLocomotion_ModifyBodyHeightDelegate;
struct KwolokBossLocomotion_StayAtRangeSettings;
struct Action_1_KwolokBossLocomotion_StayAtRangeSettings_;
struct KwolokBossLocomotion_OverrideTurnMultiplier;
struct List_1_KwolokBossLocomotion_StepSoundInfo_;
struct Event_1;
struct RTPC;
struct KwolokBossLocomotion_MoveRequest;
struct KwolokBossLocomotion__Fields {
    struct Locomotion__Fields _;
    struct Transform* _FeetTransform_k__BackingField;
    struct Vector3 _FeetPosition_k__BackingField;
    bool _HasArrivedAtTarget_k__BackingField;
    float _Gravity_k__BackingField;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    struct EntityLocomotionTask* _DefaultFSMState_k__BackingField;
    struct KwolokBossEntity* Kwolok;
    struct MoonTimeline* Idle;
    struct MoonAnimation* WalkLeftToRight;
    struct ActiveAnimationHandle m_activeWalkAnimation;
    float m_previousNormalizedAnimationTime;
    float m_normalizedAnimationTime;
    struct IKPostprocess* FrontLeftLegIK;
    struct IKPostprocess* FrontRightLegIK;
    struct IKPostprocess* BackLeftLegIK;
    struct IKPostprocess* BackRightLegIK;
    bool m_isIKLocked;
    float DefaultMaxMovementSpeed;
    struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate* ModifyMaxMovementSpeed;
    float SpeedForMaxFeetHeight;
    struct AnimationCurve* AccelerationCurve;
    struct AnimationCurve* DecelerationCurve;
    struct AnimationCurve* SpeedDecayAtLimits;
    struct KwolokBossLocomotion_ModifyAccelerationDelegate* ModifyAcceleration;
    struct KwolokBossLocomotion_ModifyBodyHeightDelegate* ModifyBodyHeight;
    float WalkLeftLimit;
    float WalkRightLimit;
    float BodyHeightLerpTime;
    float BodyHeightAdjustmentThreshold;
    float BodyHeightDryPhase;
    float BodyHeightWaterPhase;
    struct Vector2 FollowCooldownTimeRandomRange;
    float m_followCooldownTimer;
    float LookAngleChangeSpeed;
    struct KwolokBossLocomotion_StayAtRangeSettings* DefaultRangeSettings;
    struct Action_1_KwolokBossLocomotion_StayAtRangeSettings_* ModifyStayAtRangeSettingsEvent;
    struct KwolokBossLocomotion_OverrideTurnMultiplier* OnOverrideTurnMultiplier;
    struct List_1_KwolokBossLocomotion_StepSoundInfo_* StepSoundsLTR;
    struct List_1_KwolokBossLocomotion_StepSoundInfo_* StepSoundsRTL;
    struct Event_1* StepEvent;
    float PaddingBeforeRetriggeringNormalized;
    struct Event_1* WalkLoopEvent;
    struct RTPC* WalkSpeedRTPC;
    struct WwiseEventSystem_SoundHandle m_walkingSoundHandle;
    KwolokBossLocomotion_LocomotionMode__Enum m_currentLocomotionMode;

    bool m_isMoving;
    float m_desiredSpeed;
    float m_currentSpeed;
    struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
    struct Vector2 m_rangeModeRange;
    bool m_wasInRange;
    float m_rangeIdleTimer;
    float TestLookAngle;
    float TestDirectionChangeTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_KwolokBossLocomotion_StayAtRangeSettings_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/IKPostprocess.h>
#include <Modloader/app/structs/KwolokBossEntity.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyAccelerationDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyBodyHeightDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/KwolokBossLocomotion_OverrideTurnMultiplier.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StayAtRangeSettings.h>
#include <Modloader/app/structs/List_1_KwolokBossLocomotion_StepSoundInfo_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
