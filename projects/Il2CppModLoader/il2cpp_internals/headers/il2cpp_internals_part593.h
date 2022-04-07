namespace app {
struct BossRaceHandler_ChallengeFailedFade_d_15__StaticFields {
};
struct BossRaceHandler_ChallengeFailedFade_d_15__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BossRaceHandler_ChallengeFailedFade_d_15__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BossRaceHandler_ChallengeFailedFade_d_15__VTable vtable;
};

struct __declspec(align(8)) BossRaceHandler_StartMenuRaceNextFrame_d_20__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct BossRaceHandler * __4__this;
};
struct BossRaceHandler_StartMenuRaceNextFrame_d_20 {
  struct BossRaceHandler_StartMenuRaceNextFrame_d_20__Class *klass;
  struct MonitorData *monitor;
  struct BossRaceHandler_StartMenuRaceNextFrame_d_20__Fields fields;
};
struct BossRaceHandler_StartMenuRaceNextFrame_d_20__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct BossRaceHandler_StartMenuRaceNextFrame_d_20__StaticFields {
};
struct BossRaceHandler_StartMenuRaceNextFrame_d_20__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BossRaceHandler_StartMenuRaceNextFrame_d_20__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BossRaceHandler_StartMenuRaceNextFrame_d_20__VTable vtable;
};

struct CancelRaceAction__Fields {
  struct ActionMethod__Fields _;
};
struct CancelRaceAction {
  struct CancelRaceAction__Class *klass;
  struct MonitorData *monitor;
  struct CancelRaceAction__Fields fields;
};
struct CancelRaceAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct CancelRaceAction__StaticFields {
};
struct CancelRaceAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelRaceAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelRaceAction__VTable vtable;
};

struct __declspec(align(8)) GhostService__Fields {
  struct List_1_GhostPlayer_ * m_ghosts;
};
struct GhostService {
  struct GhostService__Class *klass;
  struct MonitorData *monitor;
  struct GhostService__Fields fields;
};
struct GhostService__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GhostService__StaticFields {
};
struct GhostService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GhostService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GhostService__VTable vtable;
};

struct HelperGhostController__Fields {
  struct MonoBehaviour__Fields _;
  struct String * HelperGhostReplayFilePath;
  struct MessageProvider * Hint;
  bool m_isRunning;
  struct MessageBox * m_messageBox;
  struct GhostPlayer * m_ghostPlayer;
};
struct HelperGhostController {
  struct HelperGhostController__Class *klass;
  struct MonitorData *monitor;
  struct HelperGhostController__Fields fields;
};
struct HelperGhostController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HelperGhostController__StaticFields {
};
struct HelperGhostController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HelperGhostController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HelperGhostController__VTable vtable;
};

struct __declspec(align(8)) HelperGhostController_OnFinishedRoutive_d_9__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct HelperGhostController * __4__this;
  struct FaderBCustomFadeAction * _fader_5__2;
};
struct HelperGhostController_OnFinishedRoutive_d_9 {
  struct HelperGhostController_OnFinishedRoutive_d_9__Class *klass;
  struct MonitorData *monitor;
  struct HelperGhostController_OnFinishedRoutive_d_9__Fields fields;
};
struct ActionWithDuration__Fields {
  struct PerformingAction__Fields _;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ActionWithDuration {
  struct ActionWithDuration__Class *klass;
  struct MonitorData *monitor;
  struct ActionWithDuration__Fields fields;
};
enum FaderB_State__Enum : int32_t {
  FaderB_State__Enum_FadeToBlack = 0,
  FaderB_State__Enum_FadeStay = 1,
  FaderB_State__Enum_FadeFromBlack = 2,
  FaderB_State__Enum_Invisible = 3,
  FaderB_State__Enum_Timeline = 4,
  FaderB_State__Enum_EditorDebug = 5,
  FaderB_State__Enum_TimelineFinished = 6,
};
struct FaderB_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FaderB_State__Enum value;
};
struct FaderBCustomFadeAction__Fields {
  struct ActionWithDuration__Fields _;
  enum FaderB_State__Enum State;
  float FadeInDuration;
  float FadeStayDuration;
  float FadeOutDuration;
};
struct FaderBCustomFadeAction {
  struct FaderBCustomFadeAction__Class *klass;
  struct MonitorData *monitor;
  struct FaderBCustomFadeAction__Fields fields;
};
struct SeinMaxSpeedAction__Fields {
  struct ActionWithDuration__Fields _;
  bool m_isPerforming;
  float m_currentTime;
  struct AnimationCurve * SpeedOverTime;
  float ChangeDuration;
};
struct SeinMaxSpeedAction {
  struct SeinMaxSpeedAction__Class *klass;
  struct MonitorData *monitor;
  struct SeinMaxSpeedAction__Fields fields;
};
struct SeinMaxSpeedAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData set_Duration;
  VirtualInvokeData get_Duration;
};
struct SeinMaxSpeedAction__StaticFields {
};
struct SeinMaxSpeedAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinMaxSpeedAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinMaxSpeedAction__VTable vtable;
};
struct ActionWithDuration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData get_IsBlocking;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
};
struct ActionWithDuration__StaticFields {
};
struct ActionWithDuration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionWithDuration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionWithDuration__VTable vtable;
};
struct FaderBCustomFadeAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData set_Duration;
  VirtualInvokeData get_Duration;
};
struct FaderBCustomFadeAction__StaticFields {
};
struct FaderBCustomFadeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FaderBCustomFadeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FaderBCustomFadeAction__VTable vtable;
};
struct HelperGhostController_OnFinishedRoutive_d_9__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct HelperGhostController_OnFinishedRoutive_d_9__StaticFields {
};
struct HelperGhostController_OnFinishedRoutive_d_9__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HelperGhostController_OnFinishedRoutive_d_9__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HelperGhostController_OnFinishedRoutive_d_9__VTable vtable;
};

enum RaceCondition_RaceStates__Enum : int32_t {
  RaceCondition_RaceStates__Enum_Active = 0,
  RaceCondition_RaceStates__Enum_Inactive = 1,
};
struct RaceCondition_RaceStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceCondition_RaceStates__Enum value;
};
struct RaceCondition__Fields {
  struct Condition_1__Fields _;
  enum RaceCondition_RaceStates__Enum RequiredRaceState;
};
struct RaceCondition {
  struct RaceCondition__Class *klass;
  struct MonitorData *monitor;
  struct RaceCondition__Fields fields;
};
struct RaceCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct RaceCondition__StaticFields {
};
struct RaceCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceCondition__VTable vtable;
};

struct RaceHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct RaceData * Data;
  bool m_initialized;
  bool m_inProgress;
  bool m_inStartProximity;
  bool m_inEndProximity;
  bool m_isSyncing;
  bool m_startRaceOnEnable;
  bool m_showingChallengeUi;
  struct Action * m_onStartRaceAction;
  struct Vector3 m_oriStartRacePosition;
  struct PickupBase * m_rewardInstance;
};
struct RaceHandler {
  struct RaceHandler__Class *klass;
  struct MonitorData *monitor;
  struct RaceHandler__Fields fields;
};
struct RaceData__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedIntUberState * m_raceState;
  struct SerializedBooleanUberState * m_raceIconState;
  struct DesiredUberStateComposite * m_stateOverride;
  struct List_1_EquipmentType_ * m_disabledAbilities;
  struct RaceSettings * m_raceSettings;
  struct PickupBase * m_reward;
  int32_t ExperienceRewardOverrideAmount;
  struct Texture2D * m_rewardIcon;
  struct List_1_SceneMetaData_ * m_requiredPreviewScenes;
  struct List_1_Moon_MoonReference_1__13 * m_raceSyncables;
  struct BooleanUberState * RaceInProgressState;
  struct Transform * m_startTransform;
  struct Transform * m_startLineTransform;
  struct Transform * m_endTransform;
  enum RaceData_RaceStartFaceDirection__Enum m_raceStartFaceDirection;
  struct CinematicCharacterAnimator__Array * m_countdownCinematicCharacterAnimators;
  struct Transform * EndCenterTransform;
  struct MoonTimeline * PreviewTimeline;
  struct List_1_Moon_Timeline_MoonTimeline_ * GhostFinishTimelines;
  struct List_1_Moon_Timeline_MoonTimeline_ * OriFinishTimelines;
  struct MoonTimeline * CountdownTimeline;
  struct EventTriggerAnimator * CountdownEventTrigger;
  struct MoonTimeline * SpectatorCountdownTimeline;
  struct EventTriggerAnimator * SpectatorCountdownEventTrigger;
  struct MoonTimeline * ActivateTimeline;
  struct EventTriggerAnimator * ForceFrustumInstantUpdateTriggerBegin;
  struct EventTriggerAnimator * ForceFrustumInstantUpdateTriggerEnd;
  struct PlayerInsideZoneChecker * StartZoneChecker;
  struct PlayerInsideZoneChecker * EndZoneChecker;
  struct TriggerColliderCallback * EndTriggerCollider;
  struct Transform * RewardHolder;
  struct MeshRenderer * RewardIconRenderer;
  struct ActionSequence * EnterActionSequence;
  struct ActionSequence * ExitActionSequence;
  struct EventTriggerAnimator__Array * ShowRewardChallengeTriggers;
  struct EventTriggerAnimator__Array * HideRewardChallengeTriggers;
  struct Rect__Array * Waypoints;
  struct String * m_leaderBoardId;
  struct PlayerInsideZoneChecker__Array * m_raceAreaCheckers;
  struct Bounds m_bounds;
  bool m_insideFrustum;
  struct DynamicDataResolver * m_dataResolver;
};
struct RaceData {
  struct RaceData__Class *klass;
  struct MonitorData *monitor;
  struct RaceData__Fields fields;
};
enum CinematicCharacterAnimator_FacingDirection__Enum : int32_t {
  CinematicCharacterAnimator_FacingDirection__Enum_UseCurrent = 0,
  CinematicCharacterAnimator_FacingDirection__Enum_FaceLeft = 1,
  CinematicCharacterAnimator_FacingDirection__Enum_FaceRight = 2,
};
struct CinematicCharacterAnimator_FacingDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CinematicCharacterAnimator_FacingDirection__Enum value;
};
enum CinematicCharacterAnimator_GameplayTransitionStart__Enum : int32_t {
  CinematicCharacterAnimator_GameplayTransitionStart__Enum_None = 0,
  CinematicCharacterAnimator_GameplayTransitionStart__Enum_ForceOnGround = 1,
};
struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CinematicCharacterAnimator_GameplayTransitionStart__Enum value;
};
enum CinematicCharacterAnimator_GameplayTransitionEnd__Enum : int32_t {
  CinematicCharacterAnimator_GameplayTransitionEnd__Enum_None = 0,
  CinematicCharacterAnimator_GameplayTransitionEnd__Enum_ForceOnGround = 1,
  CinematicCharacterAnimator_GameplayTransitionEnd__Enum_LerpToGround = 2,
};
struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CinematicCharacterAnimator_GameplayTransitionEnd__Enum value;
};
struct CinematicCharacterAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonAnimation * Animation;
  enum CinematicCharacterAnimator_Character__Enum AnimatedCharacter;
  bool DismountIfRiding;
  struct EventTriggerAnimator * MountTrigger;
  bool UseAnimatorAsStartingPoint;
  bool DisableColliderWhenPlaying;
  float DisableColliderDurationOffset;
  bool UsePerspectiveAdjustment;
  enum CinematicCharacterAnimator_FacingDirection__Enum Direction;
  enum CinematicCharacterAnimator_FacingDirection__Enum PostPlayDirection;
  enum CinematicCharacterAnimator_GameplayTransitionStart__Enum TransitionStart;
  enum CinematicCharacterAnimator_GameplayTransitionEnd__Enum TransitionEnd;
  float LerpToGroundDuration;
  float InterpolationTime;
  bool ForceUsingCurves;
  struct AnimationCurve * m_xCurve;
  struct AnimationCurve * m_yCurve;
  struct AnimationCurve * m_zCurve;
  bool ResetCharacterRotation;
  float m_time;
  struct ActiveAnimationHandle m_animationState;
  float _CachedMoonAnimationDuration_k__BackingField;
  struct MoonAnimation * _CachedMoonAnimation_k__BackingField;
  bool m_wasCarrying;
  float m_lerpPosition;
  bool m_preparedToStart;
};
struct CinematicCharacterAnimator {
  struct CinematicCharacterAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CinematicCharacterAnimator__Fields fields;
};
struct CinematicCharacterAnimator__Array {
  struct CinematicCharacterAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CinematicCharacterAnimator * vector[32];
};
struct CinematicCharacterAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct CinematicCharacterAnimator__StaticFields {
};
struct CinematicCharacterAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CinematicCharacterAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CinematicCharacterAnimator__VTable vtable;
};
struct RaceData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_RaceName;
  VirtualInvokeData get_RequiredScenes;
  VirtualInvokeData get_StartLinePosition;
  VirtualInvokeData get_EndPosition;
  VirtualInvokeData get_FlythroughTimeline;
  VirtualInvokeData get_RaceSettings;
  VirtualInvokeData get_TimeLimit;
  VirtualInvokeData get_GetReadyCondition;
  VirtualInvokeData get_PostFinishCondition;
  VirtualInvokeData get_IsBeaten;
  VirtualInvokeData get_ShouldPlayEndingAnimation;
  VirtualInvokeData get_StateOverride;
  VirtualInvokeData get_DisabledAbilities;
  VirtualInvokeData get_RaceSyncables;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct RaceData__StaticFields {
};
struct RaceData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceData__VTable vtable;
};
struct RaceHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnGhostFinished;
  VirtualInvokeData OnPlayerFinished;
  VirtualInvokeData OnRaceFinished;
  VirtualInvokeData OnRaceFailed;
  VirtualInvokeData SetRaceInProgressState;
  VirtualInvokeData IsInsideRaceArea;
  VirtualInvokeData StartMenuRace;
  VirtualInvokeData PlaceOriAtStart;
};
struct RaceHandler__StaticFields {
};
struct RaceHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceHandler__VTable vtable;
};

struct __declspec(align(8)) RaceHandler_CreateGhostFolder_d_15__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct String * _directory_5__2;
};
struct RaceHandler_CreateGhostFolder_d_15 {
  struct RaceHandler_CreateGhostFolder_d_15__Class *klass;
  struct MonitorData *monitor;
  struct RaceHandler_CreateGhostFolder_d_15__Fields fields;
};
struct RaceHandler_CreateGhostFolder_d_15__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct RaceHandler_CreateGhostFolder_d_15__StaticFields {
};
struct RaceHandler_CreateGhostFolder_d_15__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceHandler_CreateGhostFolder_d_15__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceHandler_CreateGhostFolder_d_15__VTable vtable;
};

struct __declspec(align(8)) RaceHandler_StartMenuRaceNextFrame_d_42__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct RaceHandler * __4__this;
  struct SceneMetaData * _closestScene_5__2;
  float _timeSoFar_5__3;
};
struct RaceHandler_StartMenuRaceNextFrame_d_42 {
  struct RaceHandler_StartMenuRaceNextFrame_d_42__Class *klass;
  struct MonitorData *monitor;
  struct RaceHandler_StartMenuRaceNextFrame_d_42__Fields fields;
};
struct RaceHandler_StartMenuRaceNextFrame_d_42__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct RaceHandler_StartMenuRaceNextFrame_d_42__StaticFields {
};
struct RaceHandler_StartMenuRaceNextFrame_d_42__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceHandler_StartMenuRaceNextFrame_d_42__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceHandler_StartMenuRaceNextFrame_d_42__VTable vtable;
};

struct RacesEnabledCondition__Fields {
  struct Condition_1__Fields _;
  bool Enabled;
};
struct RacesEnabledCondition {
  struct RacesEnabledCondition__Class *klass;
  struct MonitorData *monitor;
  struct RacesEnabledCondition__Fields fields;
};
struct RacesEnabledCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct RacesEnabledCondition__StaticFields {
};
struct RacesEnabledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RacesEnabledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RacesEnabledCondition__VTable vtable;
};

enum RaceStartCondition_RaceStates__Enum : int32_t {
  RaceStartCondition_RaceStates__Enum_Active = 0,
  RaceStartCondition_RaceStates__Enum_Inactive = 1,
};
struct RaceStartCondition_RaceStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceStartCondition_RaceStates__Enum value;
};
enum RaceStartCondition_ButtonStates__Enum : int32_t {
  RaceStartCondition_ButtonStates__Enum_Pressed = 0,
  RaceStartCondition_ButtonStates__Enum_Released = 1,
  RaceStartCondition_ButtonStates__Enum_OnPressed = 2,
  RaceStartCondition_ButtonStates__Enum_OnReleased = 3,
};
struct RaceStartCondition_ButtonStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceStartCondition_ButtonStates__Enum value;
};
struct RaceStartCondition__Fields {
  struct Condition_1__Fields _;
  enum RaceStartCondition_RaceStates__Enum RequiredRaceState;
  enum Input_Button__Enum Button;
  enum RaceStartCondition_ButtonStates__Enum State;
};
struct RaceStartCondition {
  struct RaceStartCondition__Class *klass;
  struct MonitorData *monitor;
  struct RaceStartCondition__Fields fields;
};
struct RaceStartCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct RaceStartCondition__StaticFields {
};
struct RaceStartCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStartCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStartCondition__VTable vtable;
};

struct FinishHandlerService_c {
  struct FinishHandlerService_c__Class *klass;
  struct MonitorData *monitor;
};
struct FinishHandlerService_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FinishHandlerService_c__StaticFields {
  struct FinishHandlerService_c * __9;
  struct Action * __9__9_0;
};
struct FinishHandlerService_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FinishHandlerService_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FinishHandlerService_c__VTable vtable;
};

struct __declspec(align(8)) RaceBaseState__Fields {
  struct RaceSystem * m_raceSystem;
};
struct RaceBaseState {
  struct RaceBaseState__Class *klass;
  struct MonitorData *monitor;
  struct RaceBaseState__Fields fields;
};
enum RaceSystem_DebugRaceList__Enum : int32_t {
  RaceSystem_DebugRaceList__Enum_inkwaterMarshRaceSetups = 0,
  RaceSystem_DebugRaceList__Enum_kwolokDropRace = 1,
  RaceSystem_DebugRaceList__Enum_silentWoodlandRaceSetups = 2,
  RaceSystem_DebugRaceList__Enum_wellspringRaceSetups = 3,
  RaceSystem_DebugRaceList__Enum_baursReachWindTunnel = 4,
  RaceSystem_DebugRaceList__Enum_lumaPoolsRaceSetups = 5,
  RaceSystem_DebugRaceList__Enum_mouldwoodDepthsRaceSetups = 6,
  RaceSystem_DebugRaceList__Enum_desertRaceBGScene__clone0 = 7,
};
struct RaceSystem_DebugRaceList__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceSystem_DebugRaceList__Enum value;
};
enum RaceSystem_PrimaryFilter__Enum : int32_t {
  RaceSystem_PrimaryFilter__Enum_Overall = 0,
  RaceSystem_PrimaryFilter__Enum_Friends = 1,
};
struct RaceSystem_PrimaryFilter__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceSystem_PrimaryFilter__Enum value;
};
enum RaceSystem_SecondaryFilter__Enum : int32_t {
  RaceSystem_SecondaryFilter__Enum_MyScore = 0,
  RaceSystem_SecondaryFilter__Enum_HighScore = 1,
};
struct RaceSystem_SecondaryFilter__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceSystem_SecondaryFilter__Enum value;
};
struct RaceSystem__Fields {
  struct MonoBehaviour__Fields _;
  enum RaceSystem_DebugRaceList__Enum CurrentDebugRace;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct RaceTimer * m_timer;
  struct RaceLeaderboardUI * m_raceLeaderboardUi;
  struct SerializedIntUberState * m_leaderboardFilterState;
  struct RaceSettings__Array * m_raceSettings;
  struct ActionSequence * m_showFloatingLeaderboard;
  struct ActionSequence * m_hideFloatingLeaderboard;
  struct MessageProvider * m_helpMessagePedestalInactive;
  struct MessageProvider * m_helpTopMessagePedestal;
  struct MessageProvider * m_helpBottomMessagePedestal;
  struct MessageProvider * m_helpBottomMessagePedestalNoFriends;
  struct MessageProvider * m_activateRaceMessage;
  struct MessageProvider * m_skipFlythroughMessage;
  struct MessageProvider * m_timeoutRaceMessage;
  struct MessageProvider * m_returnRaceMessage;
  struct MessageProvider * m_abandonedRaceMessage;
  struct MessageProvider * m_messageRaceFinishedControlHelp;
  struct MessageProvider * m_messageRaceInterruptedControlHelp;
  struct MessageProvider * m_messageRaceFinishedExitOnlyMessage;
  struct MessageProvider * m_hashcodeMessageProvider;
  struct MessageProvider * m_messageTimeoutControlHelp;
  struct MessageProvider * m_messageOffline;
  struct MessageProvider * m_messageNoToken;
  struct MessageProvider * m_leaderboardFilterFriendsMessageProvider;
  struct MessageProvider * m_leaderboardFilterGlobalMessageProvider;
  struct Transform * m_uiTransform;
  struct RaceLeaderboardScreen * m_leaderboardScreenPrefab;
  struct RaceStateMachineContext_SequencesConfiguration * m_sequencesConfiguration;
  struct RaceStateMachineContext_TimelinesConfiguration * m_timelinesConfiguration;
  struct RaceStateMachineContext_MessagesConfiguration * m_messagesConfiguration;
  struct GameObject * Indicator;
  struct OriGhostRigVisuals_GhostVisualSettings__Array * GhostVisualSettings;
  struct RaceTargetIndicator * m_targetIdicatorPrefab;
  struct RaceSettings * m_startFromMenuRaceSettings;
  bool m_startFromMenuLoading;
  bool m_checkOfflineFiles;
  struct StateMachine_2 * m_stateMachine;
  struct GhostService * m_ghostService;
  float m_timeToNextLocalUploadAttempt;
  struct RaceStateMachineContext * _Context_k__BackingField;
  enum RaceSystem_PrimaryFilter__Enum _CurrentPrimaryFilter_k__BackingField;
  enum RaceSystem_SecondaryFilter__Enum _CurrentSecondaryFilter_k__BackingField;
  struct List_1_fsm_IState_ * m_states;
  struct GhostRecorder * m_recorder;
  enum RaceContentType__Enum LastRaceType;
  bool m_showingFloatingLeaderboard;
  struct Vector3 PositionPriorToRaceStart;
  struct SceneMetaData * ScenePriorToRaceStart;
};
struct RaceSystem {
  struct RaceSystem__Class *klass;
  struct MonitorData *monitor;
  struct RaceSystem__Fields fields;
};
struct RaceTimer__Fields {
  struct MonoBehaviour__Fields _;
  float _ElapsedTime_k__BackingField;
  float _PersonalBestTime_k__BackingField;
  float _TimeLimit_k__BackingField;
  float _BestTime_k__BackingField;
  float _TimeToBeat_k__BackingField;
  float _PreviousElapsedTime_k__BackingField;
  struct Action * TimeoutPulse;
  struct Event_1 * TimeoutWarningEvent;
  struct Event_1 * BestTimeNotBeatenSoundEvent;
  float m_adjustedElapsedTime;
  bool m_startedRace;
  struct ISoundHost * m_soundHost;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct RaceTimer {
  struct RaceTimer__Class *klass;
  struct MonitorData *monitor;
  struct RaceTimer__Fields fields;
};
struct RaceSettings__Array {
  struct RaceSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceSettings * vector[32];
};
struct OriGhostRigVisuals_GhostVisualSettings__Array {
  struct OriGhostRigVisuals_GhostVisualSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OriGhostRigVisuals_GhostVisualSettings * vector[32];
};
struct TargetIndicator__Fields {
  struct MonoBehaviour__Fields _;
  struct AnimationCurve * DistanceToScale;
  float RationMultiplier;
  struct Rect ViewportVisibilityBounds;
  struct Renderer__Array * m_renderers;
};
struct TargetIndicator {
  struct TargetIndicator__Class *klass;
  struct MonitorData *monitor;
  struct TargetIndicator__Fields fields;
};
struct RaceTargetIndicator__Fields {
  struct TargetIndicator__Fields _;
};
struct RaceTargetIndicator {
  struct RaceTargetIndicator__Class *klass;
  struct MonitorData *monitor;
  struct RaceTargetIndicator__Fields fields;
};
struct GhostIndicator__Fields {
  struct TargetIndicator__Fields _;
  struct MoonTimeline * m_fadeOutTimeline;
  int32_t _Index_k__BackingField;
  bool m_fadeOutFinished;
};
struct GhostIndicator {
  struct GhostIndicator__Class *klass;
  struct MonitorData *monitor;
  struct GhostIndicator__Fields fields;
};
struct RaceCountdownState__Fields {
  struct RaceBaseState__Fields _;
  bool m_countdownFinished;
  struct MoonTimeline * m_countdownTimeline;
};
struct RaceCountdownState {
  struct RaceCountdownState__Class *klass;
  struct MonitorData *monitor;
  struct RaceCountdownState__Fields fields;
};
struct RaceTimer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct RaceTimer__StaticFields {
};
struct RaceTimer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceTimer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceTimer__VTable vtable;
};
struct GhostIndicator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AllowIndicator;
  VirtualInvokeData get_TargetPositon;
  VirtualInvokeData get_RotateIndicator;
  VirtualInvokeData get_ScaleByDistance;
  VirtualInvokeData Start;
};
struct GhostIndicator__StaticFields {
};
struct GhostIndicator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GhostIndicator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GhostIndicator__VTable vtable;
};
struct TargetIndicator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData Start;
};}