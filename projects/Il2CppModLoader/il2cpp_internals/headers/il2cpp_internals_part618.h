namespace app {
struct RemoveConfigurableJointAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoveConfigurableJointAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoveConfigurableJointAction__VTable vtable;
};

enum ReportLocationAction_GameLocations__Enum : int32_t {
  ReportLocationAction_GameLocations__Enum_Act1End = 0,
  ReportLocationAction_GameLocations__Enum_Act2End = 1,
  ReportLocationAction_GameLocations__Enum_Act3End = 2,
};
struct ReportLocationAction_GameLocations__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReportLocationAction_GameLocations__Enum value;
};
struct ReportLocationAction__Fields {
  struct ActionMethod__Fields _;
  enum ReportLocationAction_GameLocations__Enum Location;
};
struct ReportLocationAction {
  struct ReportLocationAction__Class *klass;
  struct MonitorData *monitor;
  struct ReportLocationAction__Fields fields;
};
struct ReportLocationAction__VTable {
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
struct ReportLocationAction__StaticFields {
  struct Action * OnAct1End;
  struct Action * OnAct2End;
  struct Action * OnAct3End;
};
struct ReportLocationAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReportLocationAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReportLocationAction__VTable vtable;
};

struct ReportLocationAction_c {
  struct ReportLocationAction_c__Class *klass;
  struct MonitorData *monitor;
};
struct ReportLocationAction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReportLocationAction_c__StaticFields {
  struct ReportLocationAction_c * __9;
};
struct ReportLocationAction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReportLocationAction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReportLocationAction_c__VTable vtable;
};

struct ResetDamageRecieversAction__Fields {
  struct ActionMethod__Fields _;
  struct LegacyDamageReciever__Array * DamageRecievers;
};
struct ResetDamageRecieversAction {
  struct ResetDamageRecieversAction__Class *klass;
  struct MonitorData *monitor;
  struct ResetDamageRecieversAction__Fields fields;
};
struct LegacyDamageReciever__Array {
  struct LegacyDamageReciever__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyDamageReciever * vector[32];
};
struct ResetDamageRecieversAction__VTable {
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
struct ResetDamageRecieversAction__StaticFields {
};
struct ResetDamageRecieversAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResetDamageRecieversAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResetDamageRecieversAction__VTable vtable;
};

struct ResetPathFollowerToNode__Fields {
  struct ActionMethod__Fields _;
  struct PathPositionFollower * Target;
  int32_t ResetToNode;
};
struct ResetPathFollowerToNode {
  struct ResetPathFollowerToNode__Class *klass;
  struct MonitorData *monitor;
  struct ResetPathFollowerToNode__Fields fields;
};
struct PathPositionFollower__Fields {
  struct SaveSerialize__Fields _;
  struct PathFollower * m_follower;
  float Speed;
  struct LinearPath * LinearPath;
  bool ChangeAngle;
  struct ActionSequence * OnReachEndSequence;
  bool m_startCalled;
  bool m_hasLoaded;
  bool m_endSequenceExecuted;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Bounds ActiveBounds;
};
struct PathPositionFollower {
  struct PathPositionFollower__Class *klass;
  struct MonitorData *monitor;
  struct PathPositionFollower__Fields fields;
};
struct __declspec(align(8)) PathFollower__Fields {
  struct LinearPath * Path;
  int32_t Node;
  float Distance;
  float Speed;
  struct Vector3 m_position;
  float m_angle;
  bool _ReachedTheEnd_k__BackingField;
};
struct PathFollower {
  struct PathFollower__Class *klass;
  struct MonitorData *monitor;
  struct PathFollower__Fields fields;
};
struct PathFollower__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PathFollower__StaticFields {
};
struct PathFollower__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PathFollower__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PathFollower__VTable vtable;
};
struct PathPositionFollower__VTable {
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
struct PathPositionFollower__StaticFields {
};
struct PathPositionFollower__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PathPositionFollower__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PathPositionFollower__VTable vtable;
};
struct ResetPathFollowerToNode__VTable {
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
struct ResetPathFollowerToNode__StaticFields {
};
struct ResetPathFollowerToNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResetPathFollowerToNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResetPathFollowerToNode__VTable vtable;
};

struct RespawnPlaceholdersInHierarchyAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * RespawnHierarchy;
};
struct RespawnPlaceholdersInHierarchyAction {
  struct RespawnPlaceholdersInHierarchyAction__Class *klass;
  struct MonitorData *monitor;
  struct RespawnPlaceholdersInHierarchyAction__Fields fields;
};
struct RespawnPlaceholdersInHierarchyAction__VTable {
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
struct RespawnPlaceholdersInHierarchyAction__StaticFields {
};
struct RespawnPlaceholdersInHierarchyAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RespawnPlaceholdersInHierarchyAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RespawnPlaceholdersInHierarchyAction__VTable vtable;
};

struct RestoreCheckpointAction__Fields {
  struct ActionMethod__Fields _;
};
struct RestoreCheckpointAction {
  struct RestoreCheckpointAction__Class *klass;
  struct MonitorData *monitor;
  struct RestoreCheckpointAction__Fields fields;
};
struct RestoreCheckpointAction__VTable {
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
struct RestoreCheckpointAction__StaticFields {
};
struct RestoreCheckpointAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RestoreCheckpointAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RestoreCheckpointAction__VTable vtable;
};

struct RunActionAndWait__Fields {
  struct ActionMethod__Fields _;
  float WaitingDuration;
  struct ActionMethod * Action;
  float m_remaingWaitTime;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct RunActionAndWait {
  struct RunActionAndWait__Class *klass;
  struct MonitorData *monitor;
  struct RunActionAndWait__Fields fields;
};
struct RunActionAndWait__VTable {
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
struct RunActionAndWait__StaticFields {
};
struct RunActionAndWait__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RunActionAndWait__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RunActionAndWait__VTable vtable;
};

struct RunActionOnce__Fields {
  struct ActionMethod__Fields _;
  struct ActionMethod * Action;
  bool m_hasRun;
};
struct RunActionOnce {
  struct RunActionOnce__Class *klass;
  struct MonitorData *monitor;
  struct RunActionOnce__Fields fields;
};
struct RunActionOnce__VTable {
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
struct RunActionOnce__StaticFields {
};
struct RunActionOnce__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RunActionOnce__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RunActionOnce__VTable vtable;
};

struct ScrollUIAction__Fields {
  struct ActionMethod__Fields _;
  struct CleverMenuItemSelectionManager * CleverMenuItemSelectionManager;
  struct Transform * Achievements;
  float RowHeight;
  bool m_scroll;
  int32_t m_rowIndex;
  int32_t m_focusIndex;
  int32_t m_topLineIndex;
  int32_t m_bottomLineIndex;
  float m_height;
  int32_t m_indexScrollShift;
};
struct ScrollUIAction {
  struct ScrollUIAction__Class *klass;
  struct MonitorData *monitor;
  struct ScrollUIAction__Fields fields;
};
struct ScrollUIAction__VTable {
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
struct ScrollUIAction__StaticFields {
};
struct ScrollUIAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScrollUIAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScrollUIAction__VTable vtable;
};

struct SeinLocalSpeedAction__Fields {
  struct ActionMethod__Fields _;
  struct Vector2 Speed;
};
struct SeinLocalSpeedAction {
  struct SeinLocalSpeedAction__Class *klass;
  struct MonitorData *monitor;
  struct SeinLocalSpeedAction__Fields fields;
};
struct SeinLocalSpeedAction__VTable {
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
struct SeinLocalSpeedAction__StaticFields {
};
struct SeinLocalSpeedAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinLocalSpeedAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinLocalSpeedAction__VTable vtable;
};

struct SeinRunToTargetAction__Fields {
  struct PerformingAction__Fields _;
  struct AnimationCurve * SpeedCurve;
  struct Transform * TargetPosition;
  struct TextureAnimationWithTransitions * CustomWalkMovingAnimation;
  struct TextureAnimationWithTransitions * CustomJogMovingAnimation;
  struct TextureAnimationWithTransitions * CustomRunMovingAnimation;
  struct TextureAnimationWithTransitions * m_originalWalkMovingAnimation;
  struct TextureAnimationWithTransitions * m_originalJogMovingAnimation;
  struct TextureAnimationWithTransitions * m_originalRunMovingAnimation;
  bool m_isPerforming;
  float MaxDuration;
};
struct SeinRunToTargetAction {
  struct SeinRunToTargetAction__Class *klass;
  struct MonitorData *monitor;
  struct SeinRunToTargetAction__Fields fields;
};
struct SeinRunToTargetAction__VTable {
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
struct SeinRunToTargetAction__StaticFields {
};
struct SeinRunToTargetAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinRunToTargetAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinRunToTargetAction__VTable vtable;
};

struct __declspec(align(8)) SeinRunToTargetAction_Perform_d_14__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct SeinRunToTargetAction * __4__this;
  float _distance_5__2;
  float _time_5__3;
};
struct SeinRunToTargetAction_Perform_d_14 {
  struct SeinRunToTargetAction_Perform_d_14__Class *klass;
  struct MonitorData *monitor;
  struct SeinRunToTargetAction_Perform_d_14__Fields fields;
};
struct SeinRunToTargetAction_Perform_d_14__VTable {
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
struct SeinRunToTargetAction_Perform_d_14__StaticFields {
};
struct SeinRunToTargetAction_Perform_d_14__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinRunToTargetAction_Perform_d_14__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinRunToTargetAction_Perform_d_14__VTable vtable;
};

enum SendMessageAction_MessageType__Enum : int32_t {
  SendMessageAction_MessageType__Enum_Send = 0,
  SendMessageAction_MessageType__Enum_Broadcast = 1,
  SendMessageAction_MessageType__Enum_SendUpwards = 2,
};
struct SendMessageAction_MessageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SendMessageAction_MessageType__Enum value;
};
struct SendMessageAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * Target;
  struct String * Message;
  enum SendMessageAction_MessageType__Enum TargetMessageType;
};
struct SendMessageAction {
  struct SendMessageAction__Class *klass;
  struct MonitorData *monitor;
  struct SendMessageAction__Fields fields;
};
struct SendMessageAction__VTable {
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
struct SendMessageAction__StaticFields {
};
struct SendMessageAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SendMessageAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SendMessageAction__VTable vtable;
};

enum SetAnimatorPropertiesAction_FindAnimatorsMode__Enum : int32_t {
  SetAnimatorPropertiesAction_FindAnimatorsMode__Enum_GameObject = 0,
  SetAnimatorPropertiesAction_FindAnimatorsMode__Enum_GameObjectAndChildren = 1,
  SetAnimatorPropertiesAction_FindAnimatorsMode__Enum_List = 2,
};
struct SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SetAnimatorPropertiesAction_FindAnimatorsMode__Enum value;
};
struct SetAnimatorPropertiesAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * Target;
  enum SetAnimatorPropertiesAction_FindAnimatorsMode__Enum AnimatorsMode;
  struct LegacyAnimator__Array * Animators;
  float Speed;
  bool ShouldSetCurve;
  struct AnimationCurve * Curve;
};
struct SetAnimatorPropertiesAction {
  struct SetAnimatorPropertiesAction__Class *klass;
  struct MonitorData *monitor;
  struct SetAnimatorPropertiesAction__Fields fields;
};
struct SetAnimatorPropertiesAction__VTable {
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
struct SetAnimatorPropertiesAction__StaticFields {
};
struct SetAnimatorPropertiesAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetAnimatorPropertiesAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetAnimatorPropertiesAction__VTable vtable;
};

struct SetAnimatorSpeedAction__Fields {
  struct ActionMethod__Fields _;
  struct BaseAnimator * BaseAnimator;
  float Speed;
};
struct SetAnimatorSpeedAction {
  struct SetAnimatorSpeedAction__Class *klass;
  struct MonitorData *monitor;
  struct SetAnimatorSpeedAction__Fields fields;
};
struct SetAnimatorSpeedAction__VTable {
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
struct SetAnimatorSpeedAction__StaticFields {
};
struct SetAnimatorSpeedAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetAnimatorSpeedAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetAnimatorSpeedAction__VTable vtable;
};

struct SetBooleanUberStateDescriptorValueAction__Fields {
  struct ActionMethod__Fields _;
  struct SerializedBooleanUberState * BooleanUberStateDescriptor;
  bool Value;
};
struct SetBooleanUberStateDescriptorValueAction {
  struct SetBooleanUberStateDescriptorValueAction__Class *klass;
  struct MonitorData *monitor;
  struct SetBooleanUberStateDescriptorValueAction__Fields fields;
};
struct SetBooleanUberStateDescriptorValueAction__VTable {
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
struct SetBooleanUberStateDescriptorValueAction__StaticFields {
};
struct SetBooleanUberStateDescriptorValueAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetBooleanUberStateDescriptorValueAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetBooleanUberStateDescriptorValueAction__VTable vtable;
};

struct SetCameraTargetAction__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Target;
};
struct SetCameraTargetAction {
  struct SetCameraTargetAction__Class *klass;
  struct MonitorData *monitor;
  struct SetCameraTargetAction__Fields fields;
};
struct SetCameraTargetAction__VTable {
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
struct SetCameraTargetAction__StaticFields {
};
struct SetCameraTargetAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetCameraTargetAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetCameraTargetAction__VTable vtable;
};

struct SetCharacterPosition__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Position;
  bool PlaceOnGround;
  enum LegacyActivateAnimator_TargetMode__Enum Target;
};
struct SetCharacterPosition {
  struct SetCharacterPosition__Class *klass;
  struct MonitorData *monitor;
  struct SetCharacterPosition__Fields fields;
};
struct SetCharacterPosition__VTable {
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
struct SetCharacterPosition__StaticFields {
};
struct SetCharacterPosition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetCharacterPosition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetCharacterPosition__VTable vtable;
};

enum SetCurrentCharacterAction_Character__Enum : int32_t {
  SetCurrentCharacterAction_Character__Enum_Sein = 0,
  SetCurrentCharacterAction_Character__Enum_Naru = 1,
  SetCurrentCharacterAction_Character__Enum_BabySein = 2,
  SetCurrentCharacterAction_Character__Enum_Ku = 3,
};
struct SetCurrentCharacterAction_Character__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SetCurrentCharacterAction_Character__Enum value;
};
struct SetCurrentCharacterAction__Fields {
  struct ActionMethod__Fields _;
  enum SetCurrentCharacterAction_Character__Enum Select;
};
struct SetCurrentCharacterAction {
  struct SetCurrentCharacterAction__Class *klass;
  struct MonitorData *monitor;
  struct SetCurrentCharacterAction__Fields fields;
};
struct SetCurrentCharacterAction__VTable {
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
struct SetCurrentCharacterAction__StaticFields {
};
struct SetCurrentCharacterAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetCurrentCharacterAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetCurrentCharacterAction__VTable vtable;
};

struct SetMecanimTriggerAction__Fields {
  struct ActionMethod__Fields _;
  struct Animator * Target;
  struct String * TriggerName;
};
struct SetMecanimTriggerAction {
  struct SetMecanimTriggerAction__Class *klass;
  struct MonitorData *monitor;
  struct SetMecanimTriggerAction__Fields fields;
};
struct SetMecanimTriggerAction__VTable {
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
struct SetMecanimTriggerAction__StaticFields {
};
struct SetMecanimTriggerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetMecanimTriggerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetMecanimTriggerAction__VTable vtable;
};

struct SetNightberryPositionAction__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Target;
};
struct SetNightberryPositionAction {
  struct SetNightberryPositionAction__Class *klass;
  struct MonitorData *monitor;
  struct SetNightberryPositionAction__Fields fields;
};
struct SetNightberryPositionAction__VTable {
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
struct SetNightberryPositionAction__StaticFields {
};
struct SetNightberryPositionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetNightberryPositionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetNightberryPositionAction__VTable vtable;
};

struct SetParentAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * GameObject;
  struct GameObject * ParentGameObject;
};
struct SetParentAction {
  struct SetParentAction__Class *klass;
  struct MonitorData *monitor;
  struct SetParentAction__Fields fields;
};
struct SetParentAction__VTable {
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
struct SetParentAction__StaticFields {
};
struct SetParentAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetParentAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetParentAction__VTable vtable;
};

struct SetPositionAction__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Target;
  struct Transform * Position;
  bool TargetPlayer;
  bool UseX;
  bool UseY;
};
struct SetPositionAction {
  struct SetPositionAction__Class *klass;
  struct MonitorData *monitor;
  struct SetPositionAction__Fields fields;
};
struct SetPositionAction__VTable {
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
struct SetPositionAction__StaticFields {
};
struct SetPositionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetPositionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetPositionAction__VTable vtable;
};

struct SetRigidBodyPropertiesAction__Fields {
  struct ActionMethod__Fields _;
  struct RopePhysicsSettings * PhysicsSettings;
  float AngularDrag;
  struct Rigidbody__Array * TargetRigidbodies;
  bool IsAffectedByGravity;
  bool ShouldSerializeTheEffect;
  bool ShouldSetLayer;
  struct String * TargetLayerName;
};
struct SetRigidBodyPropertiesAction {
  struct SetRigidBodyPropertiesAction__Class *klass;
  struct MonitorData *monitor;
  struct SetRigidBodyPropertiesAction__Fields fields;
};
struct SetRigidBodyPropertiesAction__VTable {
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
struct SetRigidBodyPropertiesAction__StaticFields {
};
struct SetRigidBodyPropertiesAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetRigidBodyPropertiesAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetRigidBodyPropertiesAction__VTable vtable;
};

struct ShowAreaMessageAction__Fields {
  struct ActionMethod__Fields _;
  struct MessageProvider * Message;
};
struct ShowAreaMessageAction {
  struct ShowAreaMessageAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowAreaMessageAction__Fields fields;
};
struct ShowAreaMessageAction__VTable {
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
struct ShowAreaMessageAction__StaticFields {
};
struct ShowAreaMessageAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowAreaMessageAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowAreaMessageAction__VTable vtable;
};

struct ShowHelpTextAction__Fields {
  struct PerformingAction__Fields _;
  struct MessageProvider * HelpMessage;
  struct GameObject * Avatar;
  struct SoundProvider * OpenSound;
  struct MessageBox * m_messageBox;
};
struct ShowHelpTextAction {
  struct ShowHelpTextAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowHelpTextAction__Fields fields;
};
struct ShowHelpTextAction__VTable {
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
};}