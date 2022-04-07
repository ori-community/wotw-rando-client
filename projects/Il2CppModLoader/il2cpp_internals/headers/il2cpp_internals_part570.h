namespace app {
struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___StaticFields {
};
struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___VTable vtable;
};
struct SoftCollider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoftCollider__StaticFields {
};
struct SoftCollider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoftCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoftCollider__VTable vtable;
};
struct ILaunchable__VTable {
  VirtualInvokeData ResolveLaunch;
  VirtualInvokeData ResolveLaunchIgnoreCollisions;
  VirtualInvokeData ResolveLaunchHide;
  VirtualInvokeData ResolveLaunchRelease;
  VirtualInvokeData UpdateLaunchPosition;
};
struct ILaunchable__StaticFields {
};
struct ILaunchable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ILaunchable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ILaunchable__VTable vtable;
};
struct LauncherPlantEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LauncherPlantEntity__StaticFields {
};
struct LauncherPlantEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LauncherPlantEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LauncherPlantEntity__VTable vtable;
};

struct ActivateLianaTongueAction__Fields {
  struct ActionMethod__Fields _;
  struct LianaEntity * Liana;
  bool ActivateTongue;
};
struct ActivateLianaTongueAction {
  struct ActivateLianaTongueAction__Class *klass;
  struct MonitorData *monitor;
  struct ActivateLianaTongueAction__Fields fields;
};
struct SnapTrapEntity_SnapTrapParameters {
  float StayClosedDuration;
  float StayOpenAfterCaughtDuration;
  float ChewDamage;
};
struct SnapTrapEntity_SnapTrapParameters__Boxed {
  struct SnapTrapEntity_SnapTrapParameters__Class *klass;
  struct MonitorData *monitor;
  struct SnapTrapEntity_SnapTrapParameters fields;
};
enum SnapTrapEntity_State__Enum : int32_t {
  SnapTrapEntity_State__Enum_Frozen = 0,
  SnapTrapEntity_State__Enum_Opened = 1,
  SnapTrapEntity_State__Enum_Warning = 2,
  SnapTrapEntity_State__Enum_Closing = 3,
  SnapTrapEntity_State__Enum_Chewing = 4,
  SnapTrapEntity_State__Enum_Missed = 5,
  SnapTrapEntity_State__Enum_Opening = 6,
  SnapTrapEntity_State__Enum_Resting = 7,
};
struct SnapTrapEntity_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SnapTrapEntity_State__Enum value;
};
struct SnapTrapEntity__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundBankEntry * SoundBank;
  struct DesiredUberStateBool * ThawedUberState;
  bool CanBeFrozen;
  struct GameObject * FrozenObj;
  struct GameObject * ThawedObj;
  struct MoonTimeline * IdleTimeline;
  struct MoonTimeline * WarnTimeline;
  struct MoonTimeline * ClosingTimeline;
  struct MoonTimeline * ClosedLoopTimeline;
  struct MoonTimeline * ChewingTimeline;
  struct MoonTimeline * OpeningAfterMissedTimeline;
  struct MoonTimeline * OpeningAfterCaughtTimeline;
  struct EventTriggerAnimator * CheckTrapTrigger;
  struct EventTriggerAnimator * ChewingDoDamageEvent;
  struct EventTriggerAnimator * ActivateOriAfterCaughtEvent;
  struct EventTriggerAnimator * FullyOpenedEvent;
  struct BoxCollider * CatchBoundsCollider;
  struct BoxCollider * ActivationTrigger;
  struct Transform * AfterCatchSeinPosition;
  struct Rigidbody * ThawedRigidBody;
  struct SnapTrapEntity_SnapTrapParameters Parameters;
  struct List_1_UnityEngine_GameObject_ * CrushPlayerTriggers;
  struct PhysicalSystemManager * PhysicalSystemManager;
  struct Rigidbody * AttachToBody;
  struct AttachJointSettings * JointSettings;
  struct ConfigurableJoint * AttachmentJoint;
  struct Vector3 m_connectedAnchor;
  struct GameObject * ThawingEffect;
  struct GameObject * FreezingEffect;
  bool m_reattached;
  enum SuspendableMask__Enum m_suspensionMask;
  enum SnapTrapEntity_State__Enum m_state;
  float m_closedDuration;
  float m_restDuration;
  struct Collider__Array * m_catchResultsColliders;
  struct IDamageReciever * m_caughtDamageReceiver;
  bool m_isSuspended;
  struct Vector3 m_suspendedVelocity;
  struct SoundHost * m_soundHost;
  bool m_isScenarioInstance;
  bool m_crushDetectorsEnabled;
  struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
struct SnapTrapEntity {
  struct SnapTrapEntity__Class *klass;
  struct MonitorData *monitor;
  struct SnapTrapEntity__Fields fields;
};
struct LianaEntity_LianaParameters {
  float ThawedTongueLength;
  float FrozenTongueLength;
  float ReelingSpeed;
  float ReelingCaughtSpeed;
  float UnreelingSpeed;
  float TongueReleaseWait;
  float SpitForce;
  float RopeGrabReleaseImpulse;
  float FrozenMouthOpenAmount;
};
struct LianaEntity_LianaParameters__Boxed {
  struct LianaEntity_LianaParameters__Class *klass;
  struct MonitorData *monitor;
  struct LianaEntity_LianaParameters fields;
};
enum LianaEntity_TongueState__Enum : int32_t {
  LianaEntity_TongueState__Enum_Resting = 0,
  LianaEntity_TongueState__Enum_Reeling = 1,
  LianaEntity_TongueState__Enum_Releasing = 2,
  LianaEntity_TongueState__Enum_Recovering = 3,
};
struct LianaEntity_TongueState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LianaEntity_TongueState__Enum value;
};
struct LianaEntity__Fields {
  struct SnapTrapEntity__Fields _;
  struct LianaEntity_LianaParameters LianaParams;
  struct MoonTimeline * PullStartTimeline;
  struct MoonTimeline * PullLoopTimeline;
  struct Rope * ThawedTongueRope;
  float ThawedDefaultLinkDensity;
  struct Rope * FrozenTongueRope;
  float FrozenDefaultLinkDensity;
  struct GrabbableRope * FrozenGrabbableRope;
  struct GrabbableRope * ThawedGrabbableRope;
  struct RopeReeler * ThawedRopeReeler;
  struct Transform * LeftFrozenLeaf;
  struct Transform * RightFrozenLeaf;
  struct Vector3 LeftFrozenLeafDefaultRotation;
  struct Vector3 RightFrozenLeafDefaultRotation;
  struct Transform * FirstFrozenTongueJoint;
  struct Transform * LastFrozenTongueJoint;
  struct Transform * FirstThawedTongueJoint;
  struct Transform * LastThawedTongueJoint;
  struct GameObject * ThawedModel;
  struct GameObject * FrozenModel;
  struct Transform * FrozenBulbTopJoint;
  struct Transform * ThawedBulbTopJoint;
  struct Rigidbody * ThawedTongueWeight;
  struct Rigidbody * FrozenTongueWeight;
  struct LiannaStickyTongue * StickyTongue;
  struct Event_1 * WwiseRopeGoUpStart;
  struct Event_1 * WwiseRopeGoUpStop;
  struct Event_1 * WwiseRopeGoDownStart;
  struct Event_1 * WwiseRopeGoDownStop;
  float m_releasingWaitTimer;
  float WaitBeforeReleasing;
  enum LianaEntity_TongueState__Enum m_tongueState;
  float m_tongueReelSpeed;
  struct LianaEntity_TongueJoint__Array * m_frozenTongueJoints;
  float m_frozenTongueJointsPerRopeJoints;
  struct LianaEntity_TongueJoint__Array * m_thawedTongueJoints;
  float m_thawedTongueJointsPerRopeJoints;
  struct Rope_LinkData m_thawedLinkData;
  struct Rope_LinkData m_frozenLinkData;
  struct Transform * m_frozenRigTongueJointsParent;
  struct Transform * m_thawedRigTongueJointsParent;
  struct Transform * m_lastThawedRopeLink;
  struct Transform * m_lastFrozenRopeLink;
  struct Vector3 m_thawedBulbJointOffset;
  struct Transform__Array * m_thawedJointTransforms;
  struct Transform__Array * m_frozenJointTransforms;
  struct Vector3__Array * m_jointPositions;
  struct Quaternion__Array * m_jointRotations;
  struct Vector3__Array * m_jointScales;
  bool m_isInFrustum;
  bool m_awakeCalled;
  bool m_needsToRegister;
  struct Bounds _Bounds_k__BackingField;
};
struct LianaEntity {
  struct LianaEntity__Class *klass;
  struct MonitorData *monitor;
  struct LianaEntity__Fields fields;
};
enum GrabbableRope_RopeModes__Enum : int32_t {
  GrabbableRope_RopeModes__Enum_Horizontal = 0,
  GrabbableRope_RopeModes__Enum_Vertical = 1,
  GrabbableRope_RopeModes__Enum_Both = 2,
};
struct GrabbableRope_RopeModes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GrabbableRope_RopeModes__Enum value;
};
enum GrabbableRope_DirectionModes__Enum : int32_t {
  GrabbableRope_DirectionModes__Enum_AutoReverse = 0,
  GrabbableRope_DirectionModes__Enum_Forward = 1,
  GrabbableRope_DirectionModes__Enum_Reversed = 2,
};
struct GrabbableRope_DirectionModes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GrabbableRope_DirectionModes__Enum value;
};
struct GrabbableRope__Fields {
  struct MonoBehaviour__Fields _;
  bool IsSlippery;
  struct List_1_UnityEngine_Transform_ * Points;
  enum GrabbableRope_RopeModes__Enum Mode;
  struct ActionMethod * OnGrabAction;
  struct ActionMethod * OnReleaseAction;
  struct MoonTimeline * OnGrabTimeline;
  struct MoonTimeline * OnReleaseTimeline;
  bool HorisontalOrVerticalBasedOnRotation;
  enum GrabbableRope_DirectionModes__Enum DirectionMode;
  struct Condition_1 * Condition;
  struct Vector3 m_lastForceApplied;
  bool HandStandAllowed;
};
struct GrabbableRope {
  struct GrabbableRope__Class *klass;
  struct MonitorData *monitor;
  struct GrabbableRope__Fields fields;
};
struct __declspec(align(8)) List_1_IGrabbableRope___Fields {
  struct IGrabbableRope__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IGrabbableRope_ {
  struct List_1_IGrabbableRope___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IGrabbableRope___Fields fields;
};
struct IGrabbableRope__Array {
  struct IGrabbableRope__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IGrabbableRope * vector[32];
};
struct IEnumerator_1_IGrabbableRope_ {
  struct IEnumerator_1_IGrabbableRope___Class *klass;
  struct MonitorData *monitor;
};
struct RopeReeler__Fields {
  struct MonoBehaviour__Fields _;
  struct Rope * Rope;
  float _LastLinkPercentage_k__BackingField;
  int32_t m_linkIndex;
  float m_distBetweenLinks;
};
struct RopeReeler {
  struct RopeReeler__Class *klass;
  struct MonitorData *monitor;
  struct RopeReeler__Fields fields;
};
struct LiannaStickyTongue__Fields {
  struct MonoBehaviour__Fields _;
  struct LianaEntity * LianaEntity;
  float ReelSpeed;
  struct Vector3 m_followOffset;
  struct Vector3 m_stuckPosition;
  struct Entity * m_stuckEntity;
};
struct LiannaStickyTongue {
  struct LiannaStickyTongue__Class *klass;
  struct MonitorData *monitor;
  struct LiannaStickyTongue__Fields fields;
};
struct LianaEntity_TongueJoint {
  struct Transform * Transform;
  struct Transform * MinLink;
  struct Transform * MaxLink;
};
struct LianaEntity_TongueJoint__Boxed {
  struct LianaEntity_TongueJoint__Class *klass;
  struct MonitorData *monitor;
  struct LianaEntity_TongueJoint fields;
};
struct LianaEntity_TongueJoint__Array {
  struct LianaEntity_TongueJoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LianaEntity_TongueJoint vector[32];
};
struct SnapTrapEntity_SnapTrapParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SnapTrapEntity_SnapTrapParameters__StaticFields {
};
struct SnapTrapEntity_SnapTrapParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnapTrapEntity_SnapTrapParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnapTrapEntity_SnapTrapParameters__VTable vtable;
};
struct SnapTrapEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_TrackTranformChangesForRecording;
  VirtualInvokeData get_TrackingExclusions;
  VirtualInvokeData get_ParsingGroup;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnEnable;
  VirtualInvokeData FixedUpdate;
  VirtualInvokeData Suspend;
  VirtualInvokeData Resume;
  VirtualInvokeData Freeze;
  VirtualInvokeData Closed;
  VirtualInvokeData ReactivateOri;
  VirtualInvokeData DoneChewing;
  VirtualInvokeData OpenedAfterCatch;
  VirtualInvokeData OpenedAfterMiss;
};
struct SnapTrapEntity__StaticFields {
};
struct SnapTrapEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnapTrapEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnapTrapEntity__VTable vtable;
};
struct LianaEntity_LianaParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LianaEntity_LianaParameters__StaticFields {
};
struct LianaEntity_LianaParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LianaEntity_LianaParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LianaEntity_LianaParameters__VTable vtable;
};
struct IEnumerator_1_IGrabbableRope___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_IGrabbableRope___StaticFields {
};
struct IEnumerator_1_IGrabbableRope___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_IGrabbableRope___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_IGrabbableRope___VTable vtable;
};
struct List_1_IGrabbableRope___VTable {
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
struct List_1_IGrabbableRope___StaticFields {
  struct IGrabbableRope__Array * _emptyArray;
};
struct List_1_IGrabbableRope___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_IGrabbableRope___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_IGrabbableRope___VTable vtable;
};
struct GrabbableRope__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanGrab;
  VirtualInvokeData OnGrabbed;
  VirtualInvokeData OnReleased;
  VirtualInvokeData GetPosition;
  VirtualInvokeData GetPosition_1;
  VirtualInvokeData GetDirection;
  VirtualInvokeData GetHorizontalAngle;
  VirtualInvokeData GetVerticalAngle;
  VirtualInvokeData IsVertical;
  VirtualInvokeData AdvancePosition;
  VirtualInvokeData AllowVertical;
  VirtualInvokeData AllowHorizontal;
  VirtualInvokeData AddForce;
  VirtualInvokeData AddImpulse;
  VirtualInvokeData RopeMinPosition;
  VirtualInvokeData RopeMaxPosition;
  VirtualInvokeData IsRopeSlippery;
  VirtualInvokeData CanHandStand;
  VirtualInvokeData OnGrabbed_1;
  VirtualInvokeData OnReleased_1;
};
struct GrabbableRope__StaticFields {
  struct List_1_IGrabbableRope_ * All;
};
struct GrabbableRope__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrabbableRope__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrabbableRope__VTable vtable;
};
struct RopeReeler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RopeReeler__StaticFields {
};
struct RopeReeler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RopeReeler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RopeReeler__VTable vtable;
};
struct LiannaStickyTongue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LiannaStickyTongue__StaticFields {
};
struct LiannaStickyTongue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LiannaStickyTongue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LiannaStickyTongue__VTable vtable;
};
struct LianaEntity_TongueJoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LianaEntity_TongueJoint__StaticFields {
};
struct LianaEntity_TongueJoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LianaEntity_TongueJoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LianaEntity_TongueJoint__VTable vtable;
};
struct LianaEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_TrackTranformChangesForRecording;
  VirtualInvokeData get_TrackingExclusions;
  VirtualInvokeData get_ParsingGroup;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnEnable;
  VirtualInvokeData FixedUpdate;
  VirtualInvokeData Suspend;
  VirtualInvokeData Resume;
  VirtualInvokeData Freeze;
  VirtualInvokeData Closed;
  VirtualInvokeData ReactivateOri;
  VirtualInvokeData DoneChewing;
  VirtualInvokeData OpenedAfterCatch;
  VirtualInvokeData OpenedAfterMiss;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData OnSceneRootPostEnable;
  VirtualInvokeData get_ShouldDisable;
  VirtualInvokeData get_ShouldEnable;
  VirtualInvokeData get_ShouldChildrenEnable;
  VirtualInvokeData get_ShouldSetMoonReady;
  VirtualInvokeData OnSceneRootPreDisable;
};
struct LianaEntity__StaticFields {
  bool FrustumCullPhysics;
  float LinkDensityMultiplier;
  bool SuperTightBounds;
  bool UseBatchTransformAPI;
};
struct LianaEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LianaEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LianaEntity__VTable vtable;
};
struct ActivateLianaTongueAction__VTable {
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
struct ActivateLianaTongueAction__StaticFields {
};
struct ActivateLianaTongueAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivateLianaTongueAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivateLianaTongueAction__VTable vtable;
};

struct AttachPrefabsToLiannaTongue__Fields {
  struct MonoBehaviour__Fields _;
  struct Rope * RopeToAttachTo;
  struct List_1_AttachPrefabsToLiannaTongue_TonguePoints_ * TongueAttachPoints;
};
struct AttachPrefabsToLiannaTongue {
  struct AttachPrefabsToLiannaTongue__Class *klass;
  struct MonitorData *monitor;
  struct AttachPrefabsToLiannaTongue__Fields fields;
};
struct __declspec(align(8)) List_1_AttachPrefabsToLiannaTongue_TonguePoints___Fields {
  struct AttachPrefabsToLiannaTongue_TonguePoints__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AttachPrefabsToLiannaTongue_TonguePoints_ {
  struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___Fields fields;
};
struct AttachPrefabsToLiannaTongue_TonguePoints {
  int32_t JointNumber;
  struct GameObject * PrefabToAttach;
};
struct AttachPrefabsToLiannaTongue_TonguePoints__Boxed {
  struct AttachPrefabsToLiannaTongue_TonguePoints__Class *klass;
  struct MonitorData *monitor;
  struct AttachPrefabsToLiannaTongue_TonguePoints fields;
};
struct AttachPrefabsToLiannaTongue_TonguePoints__Array {
  struct AttachPrefabsToLiannaTongue_TonguePoints__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AttachPrefabsToLiannaTongue_TonguePoints vector[32];
};
struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints_ {
  struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___Class *klass;
  struct MonitorData *monitor;
};
struct AttachPrefabsToLiannaTongue_TonguePoints__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttachPrefabsToLiannaTongue_TonguePoints__StaticFields {
};
struct AttachPrefabsToLiannaTongue_TonguePoints__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachPrefabsToLiannaTongue_TonguePoints__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachPrefabsToLiannaTongue_TonguePoints__VTable vtable;
};
struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields {
};
struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable vtable;
};
struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable {
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
struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields {
  struct AttachPrefabsToLiannaTongue_TonguePoints__Array * _emptyArray;
};
struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable vtable;
};
struct AttachPrefabsToLiannaTongue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttachPrefabsToLiannaTongue__StaticFields {
};
struct AttachPrefabsToLiannaTongue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachPrefabsToLiannaTongue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachPrefabsToLiannaTongue__VTable vtable;
};

struct __declspec(align(8)) LianaEntity_WaitReleaseTongue_d_83__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  float waitTime;
  struct LianaEntity * __4__this;
};
struct LianaEntity_WaitReleaseTongue_d_83 {
  struct LianaEntity_WaitReleaseTongue_d_83__Class *klass;
  struct MonitorData *monitor;
  struct LianaEntity_WaitReleaseTongue_d_83__Fields fields;
};
struct LianaEntity_WaitReleaseTongue_d_83__VTable {
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
struct LianaEntity_WaitReleaseTongue_d_83__StaticFields {
};
struct LianaEntity_WaitReleaseTongue_d_83__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LianaEntity_WaitReleaseTongue_d_83__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LianaEntity_WaitReleaseTongue_d_83__VTable vtable;
};

struct PrefabPlaceholder__Fields {
  struct SaveSerialize__Fields _;
  struct GameObject * Prefab;
  bool SerializeSelf;
  bool SerializeInstance;
  struct Condition_1 * Condition;
  bool DeleteOldInstance;
  bool ReuseInstance;
  bool AssociateWithScene;
  bool m_spawnedInstance;
  struct GameObject * m_currentInstance;
};
struct PrefabPlaceholder {
  struct PrefabPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct PrefabPlaceholder__Fields fields;
};
struct LianaPlaceholder__Fields {
  struct PrefabPlaceholder__Fields _;
  struct SerializedBooleanUberState * ThawedUberState;
  struct SnapTrapEntity_SnapTrapParameters SnapTrapEntityParameters;
  struct LianaEntity_LianaParameters LianaEntityParameters;
  bool CanBeFrozen;
  float m_lastFrozenLeafRotation;
  bool m_hasInitialized;
};
struct LianaPlaceholder {
  struct LianaPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct LianaPlaceholder__Fields fields;
};
struct PrefabPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Initialize;
  VirtualInvokeData Prewarm;
  VirtualInvokeData PoolCurrentInstance;
};
struct PrefabPlaceholder__StaticFields {
};
struct PrefabPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrefabPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrefabPlaceholder__VTable vtable;
};
struct LianaPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Initialize;
  VirtualInvokeData Prewarm;
  VirtualInvokeData PoolCurrentInstance;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
};
struct LianaPlaceholder__StaticFields {
};
struct LianaPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LianaPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LianaPlaceholder__VTable vtable;
};

struct MessageControllerB__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * AreaMessage;
  struct GameObject * AbilityMessage;
  struct GameObject * HintMessage;
  struct GameObject * HintSmallMessage;
  struct GameObject * BottomHintMessage;
  struct GameObject * PickupMessage;
  struct GameObject * StoryMessage;
  struct GameObject * HelpMessage;
  struct GameObject * SpiritTreeText;
  struct GameObject * QuestMessage;
  struct GameObject * CompleteQuestMessage;
  struct GameObject * UpdatedQuestMessage;
  struct GameObject * RaceFinishMessage;
  struct GameObject * AchievementMessage;
  struct GameObject * WispMessage;
  struct GameObject * CinematicStoryMessage;
  struct GameObject * CinematicMessageScreen;
  struct GameObject * NPCStoryMessage;
  struct GameObject * NPCMessageScreen;
  struct GameObject * NPCInteractionMessage;
  struct List_1_UnityEngine_GameObject_ * NPCSideStoryMessages;
  struct List_1_UnityEngine_GameObject_ * NPCSideMessageScreens;
  struct GameObject * UrlAndCodeMessage;
  struct MessageBox * m_currentMessageBox;
  struct MessageBox * m_lastActiveNpcMessageScreen;
  struct MessageBox__Array * m_activeNpcMessageScreens;
  struct MessageBox__Array * m_activeNpcMessages;
  struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ * DefaultVisuals;
  enum MessageControllerB_NpcMessageStyle__Enum m_currentNpcMessageStyle;
  bool _LastMessageWasShard_k__BackingField;
  bool _LastMessageWasQuest_k__BackingField;
  struct Quest * _LastQuest_k__BackingField;
  enum SpiritShardType__Enum _LastShard_k__BackingField;
  struct MessageBox * m_lastWindow;
  struct Vector2 spellMessageLocation;
  struct Vector2 areaMessageLocation;
};
struct MessageControllerB {
  struct MessageControllerB__Class *klass;
  struct MonitorData *monitor;
  struct MessageControllerB__Fields fields;
};
struct MessageBox__Array {
  struct MessageBox__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MessageBox * vector[32];
};
struct __declspec(align(8)) Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
  struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
  int32_t hashCode;
  int32_t next;
  enum MessageControllerB_NpcMessageStyle__Enum key;
  struct ShowFixedTimeTextEntity_TextVisuals * value;
};
struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array {
  struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ vector[32];
};
struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle_ {
  struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields {
  struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields fields;
};
struct MessageControllerB_NpcMessageStyle__Enum__Array {
  struct MessageControllerB_NpcMessageStyle__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum MessageControllerB_NpcMessageStyle__Enum vector[32];
};
struct IEnumerator_1_MessageControllerB_NpcMessageStyle_ {
  struct IEnumerator_1_MessageControllerB_NpcMessageStyle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields {
  struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields fields;
};
struct ShowFixedTimeTextEntity_TextVisuals__Array {
  struct ShowFixedTimeTextEntity_TextVisuals__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ShowFixedTimeTextEntity_TextVisuals * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
  struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class *klass;
  struct MonitorData *monitor;
};}