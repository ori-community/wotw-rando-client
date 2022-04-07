namespace app {

enum HeatUpPlatformAction_HeatupPlatformMethod__Enum : int32_t {
  HeatUpPlatformAction_HeatupPlatformMethod__Enum_Activate = 0,
  HeatUpPlatformAction_HeatupPlatformMethod__Enum_Deactivate = 1,
};
struct HeatUpPlatformAction_HeatupPlatformMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HeatUpPlatformAction_HeatupPlatformMethod__Enum value;
};
struct HeatUpPlatformAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * HeatUpPlatform;
  enum HeatUpPlatformAction_HeatupPlatformMethod__Enum Method;
};
struct HeatUpPlatformAction {
  struct HeatUpPlatformAction__Class *klass;
  struct MonitorData *monitor;
  struct HeatUpPlatformAction__Fields fields;
};
struct HeatUpPlatformAction__VTable {
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
struct HeatUpPlatformAction__StaticFields {
};
struct HeatUpPlatformAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HeatUpPlatformAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HeatUpPlatformAction__VTable vtable;
};

struct InstantiateAction__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Position;
  struct GameObject * Prefab;
  bool ShouldFollowTarget;
  struct Transform * FollowTarget;
  bool SpawnWhenNotOnScreen;
  int32_t PrewarmAmount;
};
struct InstantiateAction {
  struct InstantiateAction__Class *klass;
  struct MonitorData *monitor;
  struct InstantiateAction__Fields fields;
};
struct InstantiateAction__VTable {
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
struct InstantiateAction__StaticFields {
};
struct InstantiateAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InstantiateAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InstantiateAction__VTable vtable;
};

struct InstantiateCharacterAction__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Position;
  struct GameObject * Prefab;
  enum CharacterFactory_Characters__Enum Character;
};
struct InstantiateCharacterAction {
  struct InstantiateCharacterAction__Class *klass;
  struct MonitorData *monitor;
  struct InstantiateCharacterAction__Fields fields;
};
struct InstantiateCharacterAction__VTable {
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
struct InstantiateCharacterAction__StaticFields {
};
struct InstantiateCharacterAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InstantiateCharacterAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InstantiateCharacterAction__VTable vtable;
};

struct IntroLogosFinishedAction__Fields {
  struct ActionMethod__Fields _;
};
struct IntroLogosFinishedAction {
  struct IntroLogosFinishedAction__Class *klass;
  struct MonitorData *monitor;
  struct IntroLogosFinishedAction__Fields fields;
};
struct IntroLogosFinishedAction__VTable {
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
struct IntroLogosFinishedAction__StaticFields {
};
struct IntroLogosFinishedAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntroLogosFinishedAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntroLogosFinishedAction__VTable vtable;
};

enum IsActiveCondition_Mode__Enum : int32_t {
  IsActiveCondition_Mode__Enum_ActiveSelf = 0,
  IsActiveCondition_Mode__Enum_ActiveInHierarchy = 1,
};
struct IsActiveCondition_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum IsActiveCondition_Mode__Enum value;
};
struct IsActiveCondition__Fields {
  struct Condition_1__Fields _;
  struct GameObject * Target;
  struct MoonReference_1_UnityEngine_GameObject_ * MoonTarget;
  bool Active;
  enum IsActiveCondition_Mode__Enum ActivationType;
};
struct IsActiveCondition {
  struct IsActiveCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsActiveCondition__Fields fields;
};
struct IsActiveCondition__VTable {
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
struct IsActiveCondition__StaticFields {
};
struct IsActiveCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsActiveCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsActiveCondition__VTable vtable;
};

struct IsWarmingShadersCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsWarmingShadersCondition {
  struct IsWarmingShadersCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsWarmingShadersCondition__Fields fields;
};
struct IsWarmingShadersCondition__VTable {
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
struct IsWarmingShadersCondition__StaticFields {
};
struct IsWarmingShadersCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsWarmingShadersCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsWarmingShadersCondition__VTable vtable;
};

struct LegacyGameObjectDisabler__Fields {
  struct MonoBehaviour__Fields _;
};
struct LegacyGameObjectDisabler {
  struct LegacyGameObjectDisabler__Class *klass;
  struct MonitorData *monitor;
  struct LegacyGameObjectDisabler__Fields fields;
};
struct LegacyGameObjectDisabler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LegacyGameObjectDisabler__StaticFields {
};
struct LegacyGameObjectDisabler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyGameObjectDisabler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyGameObjectDisabler__VTable vtable;
};

struct LetterboxAction__Fields {
  struct ActionMethod__Fields _;
  bool ShowLetterboxes;
  struct AnimationCurve * AnimationCurve;
};
struct LetterboxAction {
  struct LetterboxAction__Class *klass;
  struct MonitorData *monitor;
  struct LetterboxAction__Fields fields;
};
struct LetterboxAction__VTable {
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
struct LetterboxAction__StaticFields {
};
struct LetterboxAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LetterboxAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LetterboxAction__VTable vtable;
};

struct LevelUpDamageAction__Fields {
  struct ActionMethod__Fields _;
  struct HashSet_1_IAttackable_ * m_attackables;
  bool m_active;
  float m_time;
  struct AnimationCurve * DistanceOverTime;
  float Duration;
  int32_t Damage;
  float m_delayTime;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct LevelUpDamageAction {
  struct LevelUpDamageAction__Class *klass;
  struct MonitorData *monitor;
  struct LevelUpDamageAction__Fields fields;
};
struct LevelUpDamageAction__VTable {
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
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct LevelUpDamageAction__StaticFields {
};
struct LevelUpDamageAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LevelUpDamageAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LevelUpDamageAction__VTable vtable;
};

struct LoadFirstBuildSceneAction__Fields {
  struct ActionMethod__Fields _;
  struct SceneMetaData * SceneMetaData;
  struct SceneMetaData * VeryFirstScene;
  float FadeDuration;
};
struct LoadFirstBuildSceneAction {
  struct LoadFirstBuildSceneAction__Class *klass;
  struct MonitorData *monitor;
  struct LoadFirstBuildSceneAction__Fields fields;
};
struct LoadFirstBuildSceneAction__VTable {
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
struct LoadFirstBuildSceneAction__StaticFields {
};
struct LoadFirstBuildSceneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadFirstBuildSceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadFirstBuildSceneAction__VTable vtable;
};

struct LoadSceneAction__Fields {
  struct ActionMethod__Fields _;
  struct SceneMetaData * SceneMetaData;
  bool CreateCheckpoint;
  bool UseSceneInitialValues;
};
struct LoadSceneAction {
  struct LoadSceneAction__Class *klass;
  struct MonitorData *monitor;
  struct LoadSceneAction__Fields fields;
};
struct LoadSceneAction__VTable {
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
struct LoadSceneAction__StaticFields {
};
struct LoadSceneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadSceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadSceneAction__VTable vtable;
};

struct LockPlayerInputAction__Fields {
  struct ActionWithDuration__Fields _;
  float DurationPlayerCantMove;
};
struct LockPlayerInputAction {
  struct LockPlayerInputAction__Class *klass;
  struct MonitorData *monitor;
  struct LockPlayerInputAction__Fields fields;
};
struct LockPlayerInputAction__VTable {
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
struct LockPlayerInputAction__StaticFields {
};
struct LockPlayerInputAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LockPlayerInputAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LockPlayerInputAction__VTable vtable;
};

struct __declspec(align(8)) LockPlayerInputAction_PerformActionCoroutine_d_4__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct LockPlayerInputAction * __4__this;
  float _t_5__2;
};
struct LockPlayerInputAction_PerformActionCoroutine_d_4 {
  struct LockPlayerInputAction_PerformActionCoroutine_d_4__Class *klass;
  struct MonitorData *monitor;
  struct LockPlayerInputAction_PerformActionCoroutine_d_4__Fields fields;
};
struct LockPlayerInputAction_PerformActionCoroutine_d_4__VTable {
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
struct LockPlayerInputAction_PerformActionCoroutine_d_4__StaticFields {
};
struct LockPlayerInputAction_PerformActionCoroutine_d_4__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LockPlayerInputAction_PerformActionCoroutine_d_4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LockPlayerInputAction_PerformActionCoroutine_d_4__VTable vtable;
};

struct LockPlayerInputManualAction__Fields {
  struct ActionMethod__Fields _;
  bool ShouldLock;
};
struct LockPlayerInputManualAction {
  struct LockPlayerInputManualAction__Class *klass;
  struct MonitorData *monitor;
  struct LockPlayerInputManualAction__Fields fields;
};
struct LockPlayerInputManualAction__VTable {
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
struct LockPlayerInputManualAction__StaticFields {
};
struct LockPlayerInputManualAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LockPlayerInputManualAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LockPlayerInputManualAction__VTable vtable;
};

struct MarkActiveScenesAsCheckpointKeepLoaded__Fields {
  struct ActionMethod__Fields _;
};
struct MarkActiveScenesAsCheckpointKeepLoaded {
  struct MarkActiveScenesAsCheckpointKeepLoaded__Class *klass;
  struct MonitorData *monitor;
  struct MarkActiveScenesAsCheckpointKeepLoaded__Fields fields;
};
struct MarkActiveScenesAsCheckpointKeepLoaded__VTable {
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
struct MarkActiveScenesAsCheckpointKeepLoaded__StaticFields {
};
struct MarkActiveScenesAsCheckpointKeepLoaded__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MarkActiveScenesAsCheckpointKeepLoaded__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MarkActiveScenesAsCheckpointKeepLoaded__VTable vtable;
};

struct MoveCameraAction__Fields {
  struct PerformingAction__Fields _;
  struct GameObject * Target;
  float MovementDuration;
};
struct MoveCameraAction {
  struct MoveCameraAction__Class *klass;
  struct MonitorData *monitor;
  struct MoveCameraAction__Fields fields;
};
struct MoveCameraAction__VTable {
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
};
struct MoveCameraAction__StaticFields {
};
struct MoveCameraAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveCameraAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveCameraAction__VTable vtable;
};

struct MoveCameraHereAction__Fields {
  struct ActionWithDuration__Fields _;
  struct GameObject * Target;
  bool Active;
  bool SkipMiddle;
  bool MoveCamera;
  bool AutoDetermineSkipMiddle;
  float AutoDistance;
  float ZoomOffset;
  bool IgnoreScrollLock;
  float WideScreenAdjustment;
  float DurationOfMovement;
};
struct MoveCameraHereAction {
  struct MoveCameraHereAction__Class *klass;
  struct MonitorData *monitor;
  struct MoveCameraHereAction__Fields fields;
};
struct MoveCameraHereAction__VTable {
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
struct MoveCameraHereAction__StaticFields {
};
struct MoveCameraHereAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveCameraHereAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveCameraHereAction__VTable vtable;
};

struct MoveCameraToPlayerAction__Fields {
  struct ActionWithDuration__Fields _;
  float DurationOfMovement;
};
struct MoveCameraToPlayerAction {
  struct MoveCameraToPlayerAction__Class *klass;
  struct MonitorData *monitor;
  struct MoveCameraToPlayerAction__Fields fields;
};
struct MoveCameraToPlayerAction__VTable {
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
struct MoveCameraToPlayerAction__StaticFields {
};
struct MoveCameraToPlayerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveCameraToPlayerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveCameraToPlayerAction__VTable vtable;
};

struct OnTimerPerformAction__Fields {
  struct SaveSerialize__Fields _;
  struct ActionMethod * Action;
  float Interval;
  struct Condition_1 * Condition;
  float Offset;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  float m_time;
};
struct OnTimerPerformAction {
  struct OnTimerPerformAction__Class *klass;
  struct MonitorData *monitor;
  struct OnTimerPerformAction__Fields fields;
};
struct OnTimerPerformAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct OnTimerPerformAction__StaticFields {
};
struct OnTimerPerformAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnTimerPerformAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnTimerPerformAction__VTable vtable;
};

struct OriFlyBackToPlayerAction__Fields {
  struct ActionWithDuration__Fields _;
};
struct OriFlyBackToPlayerAction {
  struct OriFlyBackToPlayerAction__Class *klass;
  struct MonitorData *monitor;
  struct OriFlyBackToPlayerAction__Fields fields;
};
struct OriFlyBackToPlayerAction__VTable {
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
struct OriFlyBackToPlayerAction__StaticFields {
};
struct OriFlyBackToPlayerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriFlyBackToPlayerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriFlyBackToPlayerAction__VTable vtable;
};

struct OriFlyToPositionAction__Fields {
  struct ActionWithDuration__Fields _;
  struct Transform * Target;
  bool LookAtIt;
  struct SoundProvider * MovingSoundProvider;
  float DurationOfMovement;
};
struct OriFlyToPositionAction {
  struct OriFlyToPositionAction__Class *klass;
  struct MonitorData *monitor;
  struct OriFlyToPositionAction__Fields fields;
};
struct OriFlyToPositionAction__VTable {
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
struct OriFlyToPositionAction__StaticFields {
};
struct OriFlyToPositionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriFlyToPositionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriFlyToPositionAction__VTable vtable;
};

struct PauseGameAction__Fields {
  struct ActionWithDuration__Fields _;
  float PauseDuration;
  float m_pausedTime;
  bool m_isPaused;
  struct GameObject__Array * Exclude;
  bool SuspendCamera;
  bool SuspendPlayer;
  bool SuspendOri;
  struct HashSet_1_Moon_ISuspendable_ * m_exclude;
  bool ShowLetterbox;
};
struct PauseGameAction {
  struct PauseGameAction__Class *klass;
  struct MonitorData *monitor;
  struct PauseGameAction__Fields fields;
};
struct PauseGameAction__VTable {
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
struct PauseGameAction__StaticFields {
};
struct PauseGameAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PauseGameAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PauseGameAction__VTable vtable;
};

struct PerformBackOutAction__Fields {
  struct ActionMethod__Fields _;
  struct ActionSequence * sequence;
};
struct PerformBackOutAction {
  struct PerformBackOutAction__Class *klass;
  struct MonitorData *monitor;
  struct PerformBackOutAction__Fields fields;
};
struct PerformBackOutAction__VTable {
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
struct PerformBackOutAction__StaticFields {
  bool AbandonChallangeActive;
  struct ConditionUberState * AbandonChallangeCondition;
};
struct PerformBackOutAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformBackOutAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformBackOutAction__VTable vtable;
};

struct __declspec(align(8)) PerformBackOutAction_AbandonChallange_d_8__Fields {
  int32_t __1__state;
  struct Object * __2__current;
};
struct PerformBackOutAction_AbandonChallange_d_8 {
  struct PerformBackOutAction_AbandonChallange_d_8__Class *klass;
  struct MonitorData *monitor;
  struct PerformBackOutAction_AbandonChallange_d_8__Fields fields;
};
struct PerformBackOutAction_AbandonChallange_d_8__VTable {
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
struct PerformBackOutAction_AbandonChallange_d_8__StaticFields {
};
struct PerformBackOutAction_AbandonChallange_d_8__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformBackOutAction_AbandonChallange_d_8__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformBackOutAction_AbandonChallange_d_8__VTable vtable;
};

struct PerformLoremasterReplayExitAction__Fields {
  struct ActionMethod__Fields _;
};
struct PerformLoremasterReplayExitAction {
  struct PerformLoremasterReplayExitAction__Class *klass;
  struct MonitorData *monitor;
  struct PerformLoremasterReplayExitAction__Fields fields;
};
struct PerformLoremasterReplayExitAction__VTable {
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
struct PerformLoremasterReplayExitAction__StaticFields {
};
struct PerformLoremasterReplayExitAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformLoremasterReplayExitAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformLoremasterReplayExitAction__VTable vtable;
};

struct PerformLoremasterReplayRestartAction__Fields {
  struct ActionMethod__Fields _;
};
struct PerformLoremasterReplayRestartAction {
  struct PerformLoremasterReplayRestartAction__Class *klass;
  struct MonitorData *monitor;
  struct PerformLoremasterReplayRestartAction__Fields fields;
};
struct PerformLoremasterReplayRestartAction__VTable {
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
struct PerformLoremasterReplayRestartAction__StaticFields {
};
struct PerformLoremasterReplayRestartAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformLoremasterReplayRestartAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformLoremasterReplayRestartAction__VTable vtable;
};

struct PerformSkipAction__Fields {
  struct ActionMethod__Fields _;
};
struct PerformSkipAction {
  struct PerformSkipAction__Class *klass;
  struct MonitorData *monitor;
  struct PerformSkipAction__Fields fields;
};
struct PerformSkipAction__VTable {
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
struct PerformSkipAction__StaticFields {
};
struct PerformSkipAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformSkipAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformSkipAction__VTable vtable;
};

struct PlaceOnGroundAction__Fields {
  struct ActionMethod__Fields _;
};
struct PlaceOnGroundAction {
  struct PlaceOnGroundAction__Class *klass;
  struct MonitorData *monitor;
  struct PlaceOnGroundAction__Fields fields;
};
struct PlaceOnGroundAction__VTable {
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
};}