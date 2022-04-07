namespace app {
struct SpringContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpringContext__StaticFields {
};
struct SpringContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringContext__VTable vtable;
};
struct LegacySpring__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnCollisionEnter;
};
struct LegacySpring__StaticFields {
};
struct LegacySpring__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacySpring__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacySpring__VTable vtable;
};

struct __declspec(align(8)) LegacyTrigger_ProcessTrigger_d_35__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct LegacyTrigger * __4__this;
  float _t_5__2;
};
struct LegacyTrigger_ProcessTrigger_d_35 {
  struct LegacyTrigger_ProcessTrigger_d_35__Class *klass;
  struct MonitorData *monitor;
  struct LegacyTrigger_ProcessTrigger_d_35__Fields fields;
};
struct LegacyTrigger_ProcessTrigger_d_35__VTable {
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
struct LegacyTrigger_ProcessTrigger_d_35__StaticFields {
};
struct LegacyTrigger_ProcessTrigger_d_35__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyTrigger_ProcessTrigger_d_35__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyTrigger_ProcessTrigger_d_35__VTable vtable;
};

struct LegacyTrigger_c {
  struct LegacyTrigger_c__Class *klass;
  struct MonitorData *monitor;
};
struct LegacyTrigger_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LegacyTrigger_c__StaticFields {
  struct LegacyTrigger_c * __9;
  struct Action_1_LegacyTrigger_ * __9__37_0;
};
struct LegacyTrigger_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyTrigger_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyTrigger_c__VTable vtable;
};

struct NearSeinTrigger__Fields {
  struct MonoBehaviour__Fields _;
  float DelayUntilNextTrigger;
  float TriggerDistance;
  bool TriggerOnEventEnd;
  float DistanceSmoothFactor;
  float m_time;
  bool m_eventTriggered;
  struct Component_1__Array * m_recievers;
};
struct NearSeinTrigger {
  struct NearSeinTrigger__Class *klass;
  struct MonitorData *monitor;
  struct NearSeinTrigger__Fields fields;
};
struct NearSeinTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NearSeinTrigger__StaticFields {
};
struct NearSeinTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NearSeinTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NearSeinTrigger__VTable vtable;
};

struct OnCollisionTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * OnCollisionEnterAction;
  struct ActionMethod * OnCollisionExitAction;
  struct ActionMethod * OnTriggerEnterAction;
  struct ActionMethod * OnTriggerExitAction;
  struct ActionMethod * OnTriggerStayAction;
};
struct OnCollisionTrigger {
  struct OnCollisionTrigger__Class *klass;
  struct MonitorData *monitor;
  struct OnCollisionTrigger__Fields fields;
};
struct OnCollisionTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OnCollisionTrigger__StaticFields {
};
struct OnCollisionTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnCollisionTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnCollisionTrigger__VTable vtable;
};

struct OnEnterWaterTrigger__Fields {
  struct LegacyTrigger__Fields _;
};
struct OnEnterWaterTrigger {
  struct OnEnterWaterTrigger__Class *klass;
  struct MonitorData *monitor;
  struct OnEnterWaterTrigger__Fields fields;
};
struct OnEnterWaterTrigger__VTable {
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
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
};
struct OnEnterWaterTrigger__StaticFields {
};
struct OnEnterWaterTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnEnterWaterTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnEnterWaterTrigger__VTable vtable;
};

struct OnObjectStartRunAction__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * ActionToRun;
  struct Condition_1 * Condition;
};
struct OnObjectStartRunAction {
  struct OnObjectStartRunAction__Class *klass;
  struct MonitorData *monitor;
  struct OnObjectStartRunAction__Fields fields;
};
struct OnObjectStartRunAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OnObjectStartRunAction__StaticFields {
};
struct OnObjectStartRunAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnObjectStartRunAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnObjectStartRunAction__VTable vtable;
};

struct OnSceneStartRunAction__Fields {
  struct SaveSerialize__Fields _;
  struct ActionMethod * ActionToRun;
  struct Condition_1 * Condition;
  bool TriggerOnce;
  bool m_isTriggered;
};
struct OnSceneStartRunAction {
  struct OnSceneStartRunAction__Class *klass;
  struct MonitorData *monitor;
  struct OnSceneStartRunAction__Fields fields;
};
struct OnSceneStartRunAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct OnSceneStartRunAction__StaticFields {
};
struct OnSceneStartRunAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnSceneStartRunAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnSceneStartRunAction__VTable vtable;
};

struct OriHintZone__Fields {
  struct OriInterestTriggerB__Fields _;
};
struct OriHintZone {
  struct OriHintZone__Class *klass;
  struct MonitorData *monitor;
  struct OriHintZone__Fields fields;
};
struct OriHintZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Category;
};
struct OriHintZone__StaticFields {
};
struct OriHintZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriHintZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriHintZone__VTable vtable;
};

struct PlayerCollisionLeaveTrigger__Fields {
  struct LegacyTrigger__Fields _;
  bool m_isIn;
  struct Rect m_bounds;
};
struct PlayerCollisionLeaveTrigger {
  struct PlayerCollisionLeaveTrigger__Class *klass;
  struct MonitorData *monitor;
  struct PlayerCollisionLeaveTrigger__Fields fields;
};
struct PlayerCollisionLeaveTrigger__VTable {
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
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
  VirtualInvokeData get_Category;
};
struct PlayerCollisionLeaveTrigger__StaticFields {
};
struct PlayerCollisionLeaveTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerCollisionLeaveTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerCollisionLeaveTrigger__VTable vtable;
};

struct PlayerCollisionStayTrigger__Fields {
  struct LegacyTrigger__Fields _;
  struct Rect m_bounds;
};
struct PlayerCollisionStayTrigger {
  struct PlayerCollisionStayTrigger__Class *klass;
  struct MonitorData *monitor;
  struct PlayerCollisionStayTrigger__Fields fields;
};
struct PlayerCollisionStayTrigger__VTable {
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
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
  VirtualInvokeData get_Category;
};
struct PlayerCollisionStayTrigger__StaticFields {
};
struct PlayerCollisionStayTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerCollisionStayTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerCollisionStayTrigger__VTable vtable;
};

struct Trigger_1__Fields {
  struct Condition_1__Fields _;
  struct MoonTimeline * TimelineToRun;
  bool Active;
  struct Condition_1 * Condition;
  float Delay;
  bool DontTriggerWhileRunning;
  bool TriggerOnce;
  bool _IsSuspended_k__BackingField;
  float Expiration;
  bool CreateCheckpointBeforeTriggering;
  struct CheckpointFunctionality Checkpoint;
  struct Action * OnTriggerActivatedCallback;
  struct Action_1_Trigger_ * OnTriggerActivatedCallbackTrigger;
  float m_activeTime;
  enum SuspendableMask__Enum m_suspensionMask;
  int32_t _AmountOfTimesActivated_k__BackingField;
  bool _IsTriggered_k__BackingField;
};
struct Trigger_1 {
  struct Trigger_1__Class *klass;
  struct MonitorData *monitor;
  struct Trigger_1__Fields fields;
};
struct PlayerCollisionTrigger__Fields {
  struct Trigger_1__Fields _;
  bool UseTrigger;
  struct Rect m_bounds;
  bool m_hasCollided;
  struct Vector3 m_position;
  bool m_actionStartedStressTest;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct PlayerCollisionTrigger {
  struct PlayerCollisionTrigger__Class *klass;
  struct MonitorData *monitor;
  struct PlayerCollisionTrigger__Fields fields;
};
struct Action_1_Trigger___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Trigger_ {
  struct Action_1_Trigger___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Trigger___Fields fields;
};
struct Action_1_Trigger___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Action_1_Trigger___StaticFields {
};
struct Action_1_Trigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Trigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Trigger___VTable vtable;
};
struct Trigger_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
};
struct Trigger_1__StaticFields {
};
struct Trigger_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Trigger_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Trigger_1__VTable vtable;
};
struct PlayerCollisionTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
  VirtualInvokeData get_Category;
  VirtualInvokeData get_StressTestName;
  VirtualInvokeData StartStressTest;
  VirtualInvokeData StressTestUpdate;
  VirtualInvokeData EndStressTest;
  VirtualInvokeData get_StressTestStatus;
  VirtualInvokeData set_StressTestStatus;
  VirtualInvokeData get_CanExecuteStressTest;
  VirtualInvokeData get_StopMovingPlayerWhilePerforming;
};
struct PlayerCollisionTrigger__StaticFields {
};
struct PlayerCollisionTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerCollisionTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerCollisionTrigger__VTable vtable;
};

struct PlayerCollisionUberStateTrigger__Fields {
  struct LegacyTrigger__Fields _;
  bool UseTrigger;
  bool OnlyTriggerIfGrounded;
  struct Rect m_bounds;
  bool m_hasCollided;
  struct Vector3 m_position;
  struct DesiredUberStateComposite * DesiredUberState;
};
struct PlayerCollisionUberStateTrigger {
  struct PlayerCollisionUberStateTrigger__Class *klass;
  struct MonitorData *monitor;
  struct PlayerCollisionUberStateTrigger__Fields fields;
};
struct PlayerCollisionUberStateTrigger__VTable {
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
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
  VirtualInvokeData get_Category;
};
struct PlayerCollisionUberStateTrigger__StaticFields {
};
struct PlayerCollisionUberStateTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerCollisionUberStateTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerCollisionUberStateTrigger__VTable vtable;
};

struct PlayerInRangeChecker__Fields {
  struct Condition_1__Fields _;
  bool m_wasInside;
  bool m_hasPlayed;
  float m_time;
  struct LayerMask Mask;
  struct BoxCollider * m_collider;
  float checkResultDelay;
};
struct PlayerInRangeChecker {
  struct PlayerInRangeChecker__Class *klass;
  struct MonitorData *monitor;
  struct PlayerInRangeChecker__Fields fields;
};
struct PlayerInRangeChecker__VTable {
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
struct PlayerInRangeChecker__StaticFields {
};
struct PlayerInRangeChecker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerInRangeChecker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerInRangeChecker__VTable vtable;
};

struct PlayerInSphereChecker__Fields {
  struct Condition_1__Fields _;
  bool m_wasInside;
  bool m_hasPlayed;
  float m_time;
  struct LayerMask Mask;
  struct SphereCollider * m_collider;
  float checkResultDelay;
};
struct PlayerInSphereChecker {
  struct PlayerInSphereChecker__Class *klass;
  struct MonitorData *monitor;
  struct PlayerInSphereChecker__Fields fields;
};
struct PlayerInSphereChecker__VTable {
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
struct PlayerInSphereChecker__StaticFields {
};
struct PlayerInSphereChecker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerInSphereChecker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerInSphereChecker__VTable vtable;
};

struct PlayerRespawnTrigger__Fields {
  struct LegacyTrigger__Fields _;
};
struct PlayerRespawnTrigger {
  struct PlayerRespawnTrigger__Class *klass;
  struct MonitorData *monitor;
  struct PlayerRespawnTrigger__Fields fields;
};
struct PlayerRespawnTrigger__VTable {
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
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
};
struct PlayerRespawnTrigger__StaticFields {
};
struct PlayerRespawnTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerRespawnTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerRespawnTrigger__VTable vtable;
};

struct PlayerStayInsideZoneTrigger__Fields {
  struct MonoBehaviour__Fields _;
  bool m_wasInside;
  struct Rect m_bounds;
  bool m_hasPlayed;
  float m_time;
  struct ActionMethod * Action;
  float TimeToTake;
  struct Vector2 Size;
  struct Color EditorColor;
};
struct PlayerStayInsideZoneTrigger {
  struct PlayerStayInsideZoneTrigger__Class *klass;
  struct MonitorData *monitor;
  struct PlayerStayInsideZoneTrigger__Fields fields;
};
struct PlayerStayInsideZoneTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerStayInsideZoneTrigger__StaticFields {
};
struct PlayerStayInsideZoneTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerStayInsideZoneTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerStayInsideZoneTrigger__VTable vtable;
};

enum PlayerTriggerSetup_TriggerSetupState__Enum : int32_t {
  PlayerTriggerSetup_TriggerSetupState__Enum_Sleeping = 0,
  PlayerTriggerSetup_TriggerSetupState__Enum_Enter = 1,
  PlayerTriggerSetup_TriggerSetupState__Enum_Stay = 2,
  PlayerTriggerSetup_TriggerSetupState__Enum_Exit = 3,
};
struct PlayerTriggerSetup_TriggerSetupState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlayerTriggerSetup_TriggerSetupState__Enum value;
};
struct PlayerTriggerSetup__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * TriggerEnterTimeline;
  struct MoonTimeline * TriggerStayTimeline;
  struct MoonTimeline * TriggerExitTimeline;
  struct PlayerInsideZoneChecker * m_trigger;
  enum PlayerTriggerSetup_TriggerSetupState__Enum m_currentState;
};
struct PlayerTriggerSetup {
  struct PlayerTriggerSetup__Class *klass;
  struct MonitorData *monitor;
  struct PlayerTriggerSetup__Fields fields;
};
struct PlayerTriggerSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerTriggerSetup__StaticFields {
};
struct PlayerTriggerSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerTriggerSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerTriggerSetup__VTable vtable;
};

struct StateHolder_1_PressurePlateSetupData___Fields {
  struct StateHolder__Fields _;
  struct List_1_PressurePlateSetupData_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_PressurePlateSetupData_ {
  struct StateHolder_1_PressurePlateSetupData___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_PressurePlateSetupData___Fields fields;
};
struct TransitionBasedSetupHolder_1_PressurePlateSetupData___Fields {
  struct StateHolder_1_PressurePlateSetupData___Fields _;
};
struct TransitionBasedSetupHolder_1_PressurePlateSetupData_ {
  struct TransitionBasedSetupHolder_1_PressurePlateSetupData___Class *klass;
  struct MonitorData *monitor;
  struct TransitionBasedSetupHolder_1_PressurePlateSetupData___Fields fields;
};
struct PressurePlateSetupHolder__Fields {
  struct TransitionBasedSetupHolder_1_PressurePlateSetupData___Fields _;
};
struct PressurePlateSetupHolder {
  struct PressurePlateSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct PressurePlateSetupHolder__Fields fields;
};
struct __declspec(align(8)) List_1_PressurePlateSetupData___Fields {
  struct PressurePlateSetupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PressurePlateSetupData_ {
  struct List_1_PressurePlateSetupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PressurePlateSetupData___Fields fields;
};
struct __declspec(align(8)) TransitionSetupData__Fields {
  struct MoonTimeline * m_transition;
  float m_desiredValue;
};
struct TransitionSetupData {
  struct TransitionSetupData__Class *klass;
  struct MonitorData *monitor;
  struct TransitionSetupData__Fields fields;
};
struct PressurePlateSetupData__Fields {
  struct TransitionSetupData__Fields _;
  struct Vector3 PlatePosition;
};
struct PressurePlateSetupData {
  struct PressurePlateSetupData__Class *klass;
  struct MonitorData *monitor;
  struct PressurePlateSetupData__Fields fields;
};
struct PressurePlateSetupData__Array {
  struct PressurePlateSetupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PressurePlateSetupData * vector[32];
};
struct IEnumerator_1_PressurePlateSetupData_ {
  struct IEnumerator_1_PressurePlateSetupData___Class *klass;
  struct MonitorData *monitor;
};
struct TransitionSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Transition;
  VirtualInvokeData get_DesiredValue;
};
struct TransitionSetupData__StaticFields {
};
struct TransitionSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransitionSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransitionSetupData__VTable vtable;
};
struct PressurePlateSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Transition;
  VirtualInvokeData get_DesiredValue;
};
struct PressurePlateSetupData__StaticFields {
};
struct PressurePlateSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PressurePlateSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PressurePlateSetupData__VTable vtable;
};
struct IEnumerator_1_PressurePlateSetupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PressurePlateSetupData___StaticFields {
};
struct IEnumerator_1_PressurePlateSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PressurePlateSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PressurePlateSetupData___VTable vtable;
};
struct List_1_PressurePlateSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_PressurePlateSetupData___StaticFields {
  struct PressurePlateSetupData__Array * _emptyArray;
};
struct List_1_PressurePlateSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PressurePlateSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PressurePlateSetupData___VTable vtable;
};
struct StateHolder_1_PressurePlateSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct StateHolder_1_PressurePlateSetupData___StaticFields {
};
struct StateHolder_1_PressurePlateSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_PressurePlateSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_PressurePlateSetupData___VTable vtable;
};
struct TransitionBasedSetupHolder_1_PressurePlateSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct TransitionBasedSetupHolder_1_PressurePlateSetupData___StaticFields {
};
struct TransitionBasedSetupHolder_1_PressurePlateSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransitionBasedSetupHolder_1_PressurePlateSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransitionBasedSetupHolder_1_PressurePlateSetupData___VTable vtable;
};
struct PressurePlateSetupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct PressurePlateSetupHolder__StaticFields {
};
struct PressurePlateSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PressurePlateSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PressurePlateSetupHolder__VTable vtable;
};

enum PressurePlate_Target__Enum : int32_t {
  PressurePlate_Target__Enum_Ori = 1,
  PressurePlate_Target__Enum_PushPullBlock = 2,
  PressurePlate_Target__Enum_Interface = 4,
  PressurePlate_Target__Enum_InterfaceExceptOri = 8,
  PressurePlate_Target__Enum_All = 15,
};
struct PressurePlate_Target__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PressurePlate_Target__Enum value;
};
struct PressurePlate__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  enum PressurePlate_Target__Enum Targets;
  struct Transform * PlateTransform;
  bool DisableOffScreen;
  bool LockPuzzleSolvedState;
  struct PressurePlateSetupHolder * Setup;
  struct MoonReference_1_IStateTransitionHolder_ * LinkedSetup;
  struct List_1_ICanActivatePressurePlate_ * m_pressing;
  struct CollisionEventHandler__Array * m_collisionHandlers;
  struct IUberState__Array * m_affectingUberStates;
};
struct PressurePlate {
  struct PressurePlate__Class *klass;
  struct MonitorData *monitor;
  struct PressurePlate__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IStateTransitionHolder___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IStateTransitionHolder_ * m_cachedProxyType;
  struct IStateTransitionHolder * m_volatileValue;
};}