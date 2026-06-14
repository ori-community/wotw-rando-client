#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabRope__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabRope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRope__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinGrabRope_State__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinGrabRope_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_SeinGrabRope__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct FloatAnimationParameter;
struct SoundSource;
struct Event_1;
struct RTPC;
struct SeinGrabRope_VerticalVFXPlayer;
struct SeinGrabRope_HorizontalVFXPlayer;
struct SeinGrabRope_SwingVFXPlayer;
struct MaterialBasedResourceMap;
struct IGrabbableRope;
struct SeinGrabRope__Fields {
    struct CharacterState__Fields _;
    struct Transform* PlayerCenter;
    float MinActivationTimeAfterJump;
    float JumpImpulse;
    float AttachImpulse;
    float AttachMaxSnapSpeed;
    float ClimbForce;
    float ClimbForceFrequency;
    bool AllowDashOff;
    bool FaceJumpDirectionBack;
    float MinRopeAngleWithHorizontalForDash;
    struct AnimationCurve* ForceAddedToRopeVsOriSpeed;
    struct FloatAnimationParameter* HorizontalClimbSlopeParameter;
    struct SoundSource* SwingLoopSound;
    struct Event_1* SwingLoopSoundWwise;
    struct RTPC* SwingLoopSoundRtpc;
    struct Event_1* SlideDownLoopSound;
    struct Event_1* ClimbUpLoopSound;
    struct Event_1* SwingExitSound;
    struct Event_1* DashToPoleSound;
    struct Event_1* JumpOnPoleVerticalSound;
    struct Event_1* JumpOffPoleVerticalSound;
    struct Event_1* JumpOnPoleHorizontalSound;
    struct Event_1* JumpOffPoleHorizontalSound;
    struct Event_1* JumpOnPoleHandStandSound;
    struct Event_1* JumpOffPoleHandStandSound;
    struct Event_1* VerticalPoleJumpUpSound;
    struct Event_1* EnterPoleDangleSound;
    struct SeinGrabRope_VerticalVFXPlayer* VerticalVFX;
    struct SeinGrabRope_HorizontalVFXPlayer* HorizontalVFX;
    struct SeinGrabRope_SwingVFXPlayer* SwingVFX;
    struct MaterialBasedResourceMap* EffectsMap;
    float DelayPostGrabBeforeJumpAllowed;
    float DurationAfterDropToCheckOverlap;
    float DelayAfterGrabBeforeDropAllowed;
    float DropPressComboMaxDelay;
    float SwingPosOffset;
    struct AnimationCurve* SwingUpAnimationSpeedCurve;
    struct AnimationCurve* SlowDownDurationCurve;
    float SwingSlowDownRate;
    float SwingSlowDownMinSpeed;
    float SwingSlowDownNormalizedExitTime;
    float MinEdgeDistanceToAllowSwing;
    float SwingJumpDuration;
    float SwingJumpVelocityMultiplier;
    struct AnimationCurve* SwingJumpVelocityCurve;
    struct AnimationCurve* SwingSpeedVsSpinDuration;
    struct AnimationCurve* SwingSoundPitchVsSpeedCurve;
    float NormalizedTransitionToSwingJumpTime;
    float NormalizedSwingJumpAnimStartTime;
    float AutoReleaseDistance;
    float ClimbSpeedUp;
    float ClimbSpeedDown;
    float ClimbSpeedHorizontal;
    float Acceleration;
    float InputDelayAfterJumpUpPole;
    float HandStandOffset;
    float JumpToHandStandMaxActivationOffset;
    float HandStandSpeedUp;
    float HandStandSpeedDown;
    float HandStandJumpHeight;
    float HandStandJumpHorizontalSpeed;
    float ClimbToHandstandSwitchSidesLock;
    float DangleOffset;
    float DangleSpeedUp;
    float DangleSpeedDown;
    float ClimbToDangleSwitchSidesLock;
    struct AnimationCurve* SlipperySpeedCurve;
    float SlipperyStickDuration;
    float m_slippingDuration;
    SeinGrabRope_State__Enum m_currentState;

    SeinGrabRope_State__Enum m_previousState;

    float m_currentStateTime;
    float m_positionOnRope;
    struct IGrabbableRope* m_rope;
    float m_lastDownPressTime;
    bool m_wantsToStopSwinging;
    int32_t m_wantsToStopSwingingLastCycle;
    struct ActiveAnimationHandle m_swingLoopAnimationState;
    struct ActiveAnimationHandle m_swingUpAnimationState;
    bool m_wantsToPerformSwingJump;
    float m_swingLoopEndTime;
    float m_swingJumpStartTime;
    float m_numSwingCycles;
    float m_swingLoopSpeed;
    float m_timeUntilJumpFinished;
    float m_swingJumpSpeed;
    bool _m_isFlipped_k__BackingField;
    bool m_queuedFaceLeft;
    bool m_applyQueuedFaceLeft;
    float m_side;
    bool m_movingToDangle;
    bool m_movingToHandstand;
    bool m_forceHandStand;
    bool m_isInHandStand;
    float m_lastJumpToHandstandTime;
    bool m_switchingSidesFaceLeft;
    float m_horizontalSpeed;
    float m_verticalSpeed;
    struct ActiveAnimationHandle m_jumpUpPoleAnimation;
    bool m_shouldPlayDangleSound;
    bool m_enterHandStandSoundPlayed;
    bool m_climbUpSoundIsPlaying;
    bool m_slideDownSoundIsPlaying;
    bool m_swingSoundIsPlaying;
    bool m_hasClearedRopeAfterDrop;
    float m_lastJumpTime;
    float m_lastDropTime;
    bool m_enteredStateByDashing;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabRope__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabRope__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/IGrabbableRope.h>
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SeinGrabRope_HorizontalVFXPlayer.h>
#include <Modloader/app/structs/SeinGrabRope_SwingVFXPlayer.h>
#include <Modloader/app/structs/SeinGrabRope_VerticalVFXPlayer.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabRope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRope__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabRope__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrabRope__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabRope__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
