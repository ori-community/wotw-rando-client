namespace app {
struct Ori__Fields {
  struct SaveSerialize__Fields _;
  bool InsideDoor;
  bool InsideMapstone;
  enum Ori_State__Enum CurrentState;
  struct AnimationCurve * MoveToPositionCurve;
  struct AnimationCurve * DistanceToSpeedCurve;
  struct LegacyAnimator * ShootAnimation;
  struct Renderer * SpriteRenderer;
  struct ScaleAnimator * TwinkleAnimator;
  struct Vector3 TargetOffset;
  struct Vector3 TargetOffsetAttack;
  struct Vector2 ListenOffset;
  bool UseZPosition;
  struct Collider * m_collider;
  bool m_enableHoverWobbling;
  float m_moveToPositionDuration;
  struct Vector3 m_moveToPositionEndPosition;
  struct Vector3 m_moveToPositionStartPosition;
  struct Vector3 m_moveToPositionStartVelocity;
  float m_moveToPositionTime;
  struct SoundProvider * MoveToPositionSound;
  struct SoundProvider * OnHighlightInterestZoneSound;
  struct SoundProvider * OnUnhighlightInterestZoneSound;
  struct AnimationCurve * m_positionXCurve;
  struct AnimationCurve * m_positionYCurve;
  struct AnimationCurve * m_positionZCurve;
  struct Transform * m_spriteTransform;
  float m_stateCurrentTime;
  struct Transform * m_transform;
  float m_twinkleTime;
  float m_listenTime;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  bool m_isTwinkling;
  bool m_isListening;
};
struct Ori {
  struct Ori__Class *klass;
  struct MonitorData *monitor;
  struct Ori__Fields fields;
};
struct Ori__VTable {
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
struct Ori__StaticFields {
};
struct Ori__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Ori__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Ori__VTable vtable;
};

struct DesertEscapeWormPathFollower__Fields {
  struct GuidOwner__Fields _;
  struct SerializedIntUberState * DesertWormNodeState;
  struct SerializedFloatUberState * DesertWormDistanceState;
  struct LinearPathVariedSpeed * LinearPath;
  float ChangeAngleSpeed;
  struct Transform__Array * Segments;
  struct Single__Array * m_segmentOffsets;
  struct Single__Array * m_segmentRotationLastFrame;
  struct PathFollowerVariedSpeed * m_follower;
  bool m_startCalled;
  bool m_hasLoaded;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  bool _ApplyOnEditor_k__BackingField;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct DesertEscapeWormPathFollower {
  struct DesertEscapeWormPathFollower__Class *klass;
  struct MonitorData *monitor;
  struct DesertEscapeWormPathFollower__Fields fields;
};
struct LinearPathVariedSpeed__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_LinearPathVariedSpeed_PathPoint_ * Path;
  struct Color PathColor;
  bool ClosedPath;
  float DefaultSpeed;
};
struct LinearPathVariedSpeed {
  struct LinearPathVariedSpeed__Class *klass;
  struct MonitorData *monitor;
  struct LinearPathVariedSpeed__Fields fields;
};
struct __declspec(align(8)) List_1_LinearPathVariedSpeed_PathPoint___Fields {
  struct LinearPathVariedSpeed_PathPoint__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LinearPathVariedSpeed_PathPoint_ {
  struct List_1_LinearPathVariedSpeed_PathPoint___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LinearPathVariedSpeed_PathPoint___Fields fields;
};
struct __declspec(align(8)) LinearPathVariedSpeed_PathPoint__Fields {
  struct Vector3 Position;
  bool UseDefaultSpeed;
  float OverrideSpeed;
};
struct LinearPathVariedSpeed_PathPoint {
  struct LinearPathVariedSpeed_PathPoint__Class *klass;
  struct MonitorData *monitor;
  struct LinearPathVariedSpeed_PathPoint__Fields fields;
};
struct LinearPathVariedSpeed_PathPoint__Array {
  struct LinearPathVariedSpeed_PathPoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LinearPathVariedSpeed_PathPoint * vector[32];
};
struct IEnumerator_1_LinearPathVariedSpeed_PathPoint_ {
  struct IEnumerator_1_LinearPathVariedSpeed_PathPoint___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PathFollowerVariedSpeed__Fields {
  struct LinearPathVariedSpeed * Path;
  int32_t Node;
  float Distance;
  bool StopWhenReachEnd;
  struct Vector3 m_position;
  float m_angle;
  float _DistanceBetweenCurrentNodes_k__BackingField;
  bool _ReachedTheEnd_k__BackingField;
};
struct PathFollowerVariedSpeed {
  struct PathFollowerVariedSpeed__Class *klass;
  struct MonitorData *monitor;
  struct PathFollowerVariedSpeed__Fields fields;
};
struct LinearPathVariedSpeed_PathPoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LinearPathVariedSpeed_PathPoint__StaticFields {
};
struct LinearPathVariedSpeed_PathPoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LinearPathVariedSpeed_PathPoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LinearPathVariedSpeed_PathPoint__VTable vtable;
};
struct IEnumerator_1_LinearPathVariedSpeed_PathPoint___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LinearPathVariedSpeed_PathPoint___StaticFields {
};
struct IEnumerator_1_LinearPathVariedSpeed_PathPoint___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LinearPathVariedSpeed_PathPoint___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LinearPathVariedSpeed_PathPoint___VTable vtable;
};
struct List_1_LinearPathVariedSpeed_PathPoint___VTable {
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
struct List_1_LinearPathVariedSpeed_PathPoint___StaticFields {
  struct LinearPathVariedSpeed_PathPoint__Array * _emptyArray;
};
struct List_1_LinearPathVariedSpeed_PathPoint___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LinearPathVariedSpeed_PathPoint___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LinearPathVariedSpeed_PathPoint___VTable vtable;
};
struct LinearPathVariedSpeed__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LinearPathVariedSpeed__StaticFields {
};
struct LinearPathVariedSpeed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LinearPathVariedSpeed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LinearPathVariedSpeed__VTable vtable;
};
struct PathFollowerVariedSpeed__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PathFollowerVariedSpeed__StaticFields {
};
struct PathFollowerVariedSpeed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PathFollowerVariedSpeed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PathFollowerVariedSpeed__VTable vtable;
};
struct DesertEscapeWormPathFollower__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct DesertEscapeWormPathFollower__StaticFields {
};
struct DesertEscapeWormPathFollower__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesertEscapeWormPathFollower__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesertEscapeWormPathFollower__VTable vtable;
};

struct DeactivatePetrifiedFogAction__Fields {
  struct ActionMethod__Fields _;
  struct PetrifiedFog * PetrifiedFog;
};
struct DeactivatePetrifiedFogAction {
  struct DeactivatePetrifiedFogAction__Class *klass;
  struct MonitorData *monitor;
  struct DeactivatePetrifiedFogAction__Fields fields;
};
struct PetrifiedFog__Fields {
  struct SaveSerialize__Fields _;
  struct Rect Bounds;
  bool m_active;
  struct Vector3 m_previousPosition;
  struct Vector3 m_previousScale;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct PetrifiedFog {
  struct PetrifiedFog__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedFog__Fields fields;
};
struct PetrifiedFog__VTable {
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
  VirtualInvokeData get_Category;
};
struct PetrifiedFog__StaticFields {
  float m_duration;
};
struct PetrifiedFog__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedFog__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedFog__VTable vtable;
};
struct DeactivatePetrifiedFogAction__VTable {
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
struct DeactivatePetrifiedFogAction__StaticFields {
};
struct DeactivatePetrifiedFogAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeactivatePetrifiedFogAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeactivatePetrifiedFogAction__VTable vtable;
};

struct CollectablePlaceholder_c {
  struct CollectablePlaceholder_c__Class *klass;
  struct MonitorData *monitor;
};
struct CollectablePlaceholder_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CollectablePlaceholder_c__StaticFields {
  struct CollectablePlaceholder_c * __9;
  struct Action * __9__54_0;
};
struct CollectablePlaceholder_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollectablePlaceholder_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollectablePlaceholder_c__VTable vtable;
};

struct DropPickup__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 Gravity;
  struct DamageBasedPrefabProvider * DeathEffectProvider;
  struct AnimationCurve * SuckInForceOverTime;
  struct AnimationCurve * SuckInForceOverDistance;
  float HoverDuration;
  float FallingDuration;
  float FlashDuration;
  enum DropPickup_State__Enum CurrentState;
  bool OverrideGravity;
  struct Vector3 GravityOverride;
  struct Transform * m_transformSource;
  struct Rigidbody * m_rigidbody;
  float m_gravityWeight;
  float m_suckTowardsPlayerCurrentTime;
  float m_stateCurrentTime;
  float m_radius;
  struct SphereCollider * m_sphereCollider;
  struct Vector3 m_startGravity;
  bool m_shouldSuckTowardsPlayer;
  int32_t m_frame;
  bool m_inWater;
  float m_targetRadius;
  struct LegacyAnimator__Array * m_legacyAnimator;
  bool m_areComponentsCached;
  struct PickupBase * m_pickup;
  bool m_awakened;
  enum CollisionDetectionMode__Enum m_originalMode;
  bool _CanFall_k__BackingField;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct DropPickup {
  struct DropPickup__Class *klass;
  struct MonitorData *monitor;
  struct DropPickup__Fields fields;
};
struct DropPickup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct DropPickup__StaticFields {
  bool UseColliderSizeFix;
  bool OptimizeColliderResize;
};
struct DropPickup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropPickup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropPickup__VTable vtable;
};

struct DropPickup_SharedUpdateData {
  struct Vector3 OriPos;
  float AttractionDistance;
  float DeltaTime;
  bool IsMagnetEquipped;
  bool HasUltraMagnet;
};
struct DropPickup_SharedUpdateData__Boxed {
  struct DropPickup_SharedUpdateData__Class *klass;
  struct MonitorData *monitor;
  struct DropPickup_SharedUpdateData fields;
};
struct DropPickup_SharedUpdateData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DropPickup_SharedUpdateData__StaticFields {
};
struct DropPickup_SharedUpdateData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropPickup_SharedUpdateData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropPickup_SharedUpdateData__VTable vtable;
};

struct GetPickupOnCondition__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * PickupsParent;
  struct SerializedBooleanUberState * CollectedUberState;
  bool CreateCheckpointOnPickup;
  struct CheckpointFunctionality Checkpoint;
  struct EventTriggerAnimator * Event;
  struct Condition_1 * Condition;
  struct MoonTimeline * TimelinToPlayOnEvent;
  struct PickupBase__Array * m_pickups;
};
struct GetPickupOnCondition {
  struct GetPickupOnCondition__Class *klass;
  struct MonitorData *monitor;
  struct GetPickupOnCondition__Fields fields;
};
struct PickupBase__Array {
  struct PickupBase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PickupBase * vector[32];
};
struct GetPickupOnCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnSkipCutscene;
};
struct GetPickupOnCondition__StaticFields {
};
struct GetPickupOnCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPickupOnCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPickupOnCondition__VTable vtable;
};

struct PickupBase_c {
  struct PickupBase_c__Class *klass;
  struct MonitorData *monitor;
};
struct PickupBase_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PickupBase_c__StaticFields {
  struct PickupBase_c * __9;
  struct Action * __9__33_0;
  struct Action * __9__56_0;
};
struct PickupBase_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PickupBase_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PickupBase_c__VTable vtable;
};

struct PickupCollectedCondition__Fields {
  struct Condition_1__Fields _;
  struct PickupBase * Pickup;
  struct CollectablePlaceholder * Placeholder;
  bool IsCollected;
};
struct PickupCollectedCondition {
  struct PickupCollectedCondition__Class *klass;
  struct MonitorData *monitor;
  struct PickupCollectedCondition__Fields fields;
};
struct PickupCollectedCondition__VTable {
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
struct PickupCollectedCondition__StaticFields {
};
struct PickupCollectedCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PickupCollectedCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PickupCollectedCondition__VTable vtable;
};

struct SceneBasedUberState__Fields {
  struct MonoBehaviour__Fields _;
  struct UberID * m_id;
  struct IUberStateGroup * m_group;
};
struct SceneBasedUberState {
  struct SceneBasedUberState__Class *klass;
  struct MonitorData *monitor;
  struct SceneBasedUberState__Fields fields;
};
enum CollapsingPlatform_CollapsingPlatformType__Enum : int32_t {
  CollapsingPlatform_CollapsingPlatformType__Enum_Sand = 0,
  CollapsingPlatform_CollapsingPlatformType__Enum_Snow = 1,
};
struct CollapsingPlatform_CollapsingPlatformType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CollapsingPlatform_CollapsingPlatformType__Enum value;
};
struct CollapsingPlatform__Fields {
  struct SceneBasedUberState__Fields _;
  struct GameObject * PlatformRoot;
  struct CollapsingPlatformAnimator * Animator;
  bool CanBeDisabledWhenNotVisible;
  enum CollapsingPlatform_CollapsingPlatformType__Enum PlatformType;
  bool RespawnOnLanding;
  bool CollapseOnDigThrough;
  bool m_isCollapsed;
  float m_maxDelayToPlayFastCollapse;
  struct DamageReceiver * m_damageReceiver;
  struct DigZone * m_digZone;
  struct CageStructureTool * m_cageStructure;
  bool m_stressTested;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
  struct IUberState__Array * m_affectingUberStates;
  bool _DefaultBooleanValue_k__BackingField;
  struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
struct CollapsingPlatform {
  struct CollapsingPlatform__Class *klass;
  struct MonitorData *monitor;
  struct CollapsingPlatform__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_DigZone_CollapsingPlatform___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_DigZone_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_DigZone_CollapsingPlatform_ {
  struct Dictionary_2_DigZone_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_DigZone_CollapsingPlatform___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform_ {
  int32_t hashCode;
  int32_t next;
  struct DigZone * key;
  struct CollapsingPlatform * value;
};
struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array {
  struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Fields {
  struct Dictionary_2_DigZone_CollapsingPlatform_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Fields {
  struct Dictionary_2_DigZone_CollapsingPlatform_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Fields fields;
};
struct CollapsingPlatform__Array {
  struct CollapsingPlatform__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CollapsingPlatform * vector[32];
};
struct IEnumerator_1_CollapsingPlatform_ {
  struct IEnumerator_1_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_DigZone_ {
  struct ICollection_1_DigZone___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_CollapsingPlatform_ {
  struct ICollection_1_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_DigZone_CollapsingPlatform_ {
  struct DigZone * key;
  struct CollapsingPlatform * value;
};
struct KeyValuePair_2_DigZone_CollapsingPlatform___Boxed {
  struct KeyValuePair_2_DigZone_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_DigZone_CollapsingPlatform_ fields;
};
struct KeyValuePair_2_DigZone_CollapsingPlatform___Array {
  struct KeyValuePair_2_DigZone_CollapsingPlatform___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_DigZone_CollapsingPlatform_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform_ {
  struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_CollapsingPlatform_ {
  struct IEnumerable_1_CollapsingPlatform___Class *klass;
  struct MonitorData *monitor;
};
struct CollapsingPlatformAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct Action * OnActivatePlatform;
  struct CollapsingPlatformVisuals * Visuals;
  struct MoonTimeline * CollapseTimeline;
  struct MoonTimeline * CollapseFastTimeline;
  struct MoonTimeline * RespawnTimeline;
  struct EventTriggerAnimator__Array * ActivatePlatformTriggers;
  struct List_1_UnityEngine_Renderer_ * m_renderers;
};
struct CollapsingPlatformAnimator {
  struct CollapsingPlatformAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CollapsingPlatformAnimator__Fields fields;
};
struct CollapsingPlatformVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Platform;
  struct GameObject * AnimatedVisuals;
  struct ParticleSystem * Particles;
};
struct CollapsingPlatformVisuals {
  struct CollapsingPlatformVisuals__Class *klass;
  struct MonitorData *monitor;
  struct CollapsingPlatformVisuals__Fields fields;
};
struct SceneBasedUberState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UberStateGroup;
  VirtualInvokeData get_GroupID;
  VirtualInvokeData get_StateID;
  VirtualInvokeData get_Name;
};
struct SceneBasedUberState__StaticFields {
};
struct SceneBasedUberState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneBasedUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneBasedUberState__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___VTable vtable;
};
struct IEnumerator_1_CollapsingPlatform___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CollapsingPlatform___StaticFields {
};
struct IEnumerator_1_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CollapsingPlatform___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___VTable vtable;
};
struct ICollection_1_DigZone___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_DigZone___StaticFields {
};
struct ICollection_1_DigZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_DigZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_DigZone___VTable vtable;
};
struct ICollection_1_CollapsingPlatform___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_CollapsingPlatform___StaticFields {
};
struct ICollection_1_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_CollapsingPlatform___VTable vtable;
};
struct KeyValuePair_2_DigZone_CollapsingPlatform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields {
};
struct KeyValuePair_2_DigZone_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_DigZone_CollapsingPlatform___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___VTable vtable;
};
struct IEnumerable_1_CollapsingPlatform___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_CollapsingPlatform___StaticFields {
};
struct IEnumerable_1_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_CollapsingPlatform___VTable vtable;
};
struct Dictionary_2_DigZone_CollapsingPlatform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_DigZone_CollapsingPlatform___StaticFields {
};
struct Dictionary_2_DigZone_CollapsingPlatform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_DigZone_CollapsingPlatform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_DigZone_CollapsingPlatform___VTable vtable;
};
struct CollapsingPlatformVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CollapsingPlatformVisuals__StaticFields {
};
struct CollapsingPlatformVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollapsingPlatformVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollapsingPlatformVisuals__VTable vtable;
};
struct CollapsingPlatformAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};}