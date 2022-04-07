namespace app {
struct Enemy__StaticFields {
};
struct Enemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Enemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Enemy__VTable vtable;
};

struct CartBashPush__Fields {
  struct MonoBehaviour__Fields _;
  struct Cart * Cart;
};
struct CartBashPush {
  struct CartBashPush__Class *klass;
  struct MonitorData *monitor;
  struct CartBashPush__Fields fields;
};
struct CartBashPush__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_BashPriority;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnBashHighlight;
  VirtualInvokeData OnBashDehighlight;
};
struct CartBashPush__StaticFields {
};
struct CartBashPush__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartBashPush__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartBashPush__VTable vtable;
};

struct CartController_c {
  struct CartController_c__Class *klass;
  struct MonitorData *monitor;
};
struct CartController_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CartController_c__StaticFields {
  struct CartController_c * __9;
  struct Action * __9__66_0;
};
struct CartController_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartController_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartController_c__VTable vtable;
};

struct CartDashValueProvider__Fields {
  struct FloatValueProvider__Fields _;
  struct CartBoost * CartBoost;
};
struct CartDashValueProvider {
  struct CartDashValueProvider__Class *klass;
  struct MonitorData *monitor;
  struct CartDashValueProvider__Fields fields;
};
struct CartDashValueProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFloatValue;
};
struct CartDashValueProvider__StaticFields {
};
struct CartDashValueProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartDashValueProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartDashValueProvider__VTable vtable;
};

struct CartEnter__Fields {
  struct MonoBehaviour__Fields _;
  struct Cart * Cart;
  struct MoonTimeline * EnterCarrySequence;
};
struct CartEnter {
  struct CartEnter__Class *klass;
  struct MonitorData *monitor;
  struct CartEnter__Fields fields;
};
struct CartEnter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CartEnter__StaticFields {
};
struct CartEnter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartEnter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartEnter__VTable vtable;
};

struct RespawningPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  bool RespawnOnTimeout;
  bool RespawnOnScreen;
  float RespawnTime;
  float MinDistanceFromPlayer;
  bool DestroyCurrentOnDeath;
  bool m_isKilled;
  float m_respawnTime;
  bool m_needsToRespawn;
  struct Transform * m_transform;
  struct MoonGuid * m_sceneRootGUID;
  struct Action_1_Damage_ * OnCurrentInstanceDeath;
  bool WasTimedRespawn;
  float m_enableTime;
  struct LegacyEntity * m_currentEntity;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct RespawningPlaceholder {
  struct RespawningPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct RespawningPlaceholder__Fields fields;
};
struct CartPlaceholder__Fields {
  struct RespawningPlaceholder__Fields _;
  struct CartPlaceholder_CartPlaceholderSettings * Settings;
  struct GameObject * CartObject;
  struct GameObject * SpawnEffect;
  struct LayerMask CartLayer;
  bool startEmpty;
  struct Renderer * m_renderer;
  struct Collider__Array * m_colliderCheck;
  struct Cart * m_activeCart;
  struct CartSet * m_mySet;
};
struct CartPlaceholder {
  struct CartPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct CartPlaceholder__Fields fields;
};
struct __declspec(align(8)) List_1_RespawningPlaceholder___Fields {
  struct RespawningPlaceholder__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RespawningPlaceholder_ {
  struct List_1_RespawningPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RespawningPlaceholder___Fields fields;
};
struct RespawningPlaceholder__Array {
  struct RespawningPlaceholder__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RespawningPlaceholder * vector[32];
};
struct IEnumerator_1_RespawningPlaceholder_ {
  struct IEnumerator_1_RespawningPlaceholder___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CartPlaceholder_CartPlaceholderSettings__Fields {
  float MaxEnterDistance;
  float FlipDistance;
  float MaxSpeed;
  float Acceleration;
  float Decceleration;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * SlopeDownMaxMultiplier;
  float SlopeDownMaxAngle;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * SlopeUpMaxMultiplier;
  float SlopeUpMaxAngle;
};
struct CartPlaceholder_CartPlaceholderSettings {
  struct CartPlaceholder_CartPlaceholderSettings__Class *klass;
  struct MonitorData *monitor;
  struct CartPlaceholder_CartPlaceholderSettings__Fields fields;
};
struct CartSet__Fields {
  struct MonoBehaviour__Fields _;
  struct CartPlaceholder__Array * m_cartPlaceholders;
  bool _IsSpawningLocked_k__BackingField;
};
struct CartSet {
  struct CartSet__Class *klass;
  struct MonitorData *monitor;
  struct CartSet__Fields fields;
};
struct CartPlaceholder__Array {
  struct CartPlaceholder__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CartPlaceholder * vector[32];
};
struct IEnumerator_1_RespawningPlaceholder___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_RespawningPlaceholder___StaticFields {
};
struct IEnumerator_1_RespawningPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_RespawningPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_RespawningPlaceholder___VTable vtable;
};
struct List_1_RespawningPlaceholder___VTable {
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
struct List_1_RespawningPlaceholder___StaticFields {
  struct RespawningPlaceholder__Array * _emptyArray;
};
struct List_1_RespawningPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_RespawningPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_RespawningPlaceholder___VTable vtable;
};
struct RespawningPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CheckForOverlap;
  VirtualInvokeData get_CanSpawn;
  VirtualInvokeData get_NeedsToRespawn;
  VirtualInvokeData UpdateSpawnState;
  VirtualInvokeData __unknown;
};
struct RespawningPlaceholder__StaticFields {
  struct List_1_RespawningPlaceholder_ * All;
};
struct RespawningPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RespawningPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RespawningPlaceholder__VTable vtable;
};
struct CartPlaceholder_CartPlaceholderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CartPlaceholder_CartPlaceholderSettings__StaticFields {
};
struct CartPlaceholder_CartPlaceholderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartPlaceholder_CartPlaceholderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartPlaceholder_CartPlaceholderSettings__VTable vtable;
};
struct CartSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CartSet__StaticFields {
};
struct CartSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartSet__VTable vtable;
};
struct CartPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CheckForOverlap;
  VirtualInvokeData get_CanSpawn;
  VirtualInvokeData get_NeedsToRespawn;
  VirtualInvokeData UpdateSpawnState;
  VirtualInvokeData Instantiate;
};
struct CartPlaceholder__StaticFields {
};
struct CartPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartPlaceholder__VTable vtable;
};

struct CartSparkEffect__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UnityEngine_GameObject_ * Lights;
  struct ParticleSystem * Sparks;
  struct AnimationCurve * Noise;
  float MaxSampleSpeed;
  float AccelerationForceToSparks;
  float MinSparkInterval;
  struct GameObject * EletricityFX;
  struct Transform * EletricityAnchor;
  float TrailDeactivationDelay;
  struct GameObject * m_eletricityFxInstance;
  struct MoonTrail__Array * m_trails;
  struct CartPlatformMovement * m_cartMov;
  struct Cart * m_cart;
  float m_sampleTimer;
  float noise;
  bool m_wasOn;
  bool m_forceSparks;
  float m_oldSpeed;
  float m_cartAcceleration;
  float m_emisionTimer;
  bool m_trailsActive;
  float m_offRailTime;
};
struct CartSparkEffect {
  struct CartSparkEffect__Class *klass;
  struct MonitorData *monitor;
  struct CartSparkEffect__Fields fields;
};
struct CartSparkEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CartSparkEffect__StaticFields {
};
struct CartSparkEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartSparkEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartSparkEffect__VTable vtable;
};

struct LaunchCartFromStopperAction__Fields {
  struct ActionMethod__Fields _;
  struct CartStopper * CartStopper;
};
struct LaunchCartFromStopperAction {
  struct LaunchCartFromStopperAction__Class *klass;
  struct MonitorData *monitor;
  struct LaunchCartFromStopperAction__Fields fields;
};
struct LaunchCartFromStopperAction__VTable {
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
struct LaunchCartFromStopperAction__StaticFields {
};
struct LaunchCartFromStopperAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaunchCartFromStopperAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaunchCartFromStopperAction__VTable vtable;
};

struct SeinRidePuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct FloatAnimationParameter * FallSpeed;
};
struct SeinRidePuppet {
  struct SeinRidePuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinRidePuppet__Fields fields;
};
struct SeinRidePuppet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_UniqueRecordingId;
  VirtualInvokeData get_IsRecording;
  VirtualInvokeData OnInitializeGhostRecorder;
  VirtualInvokeData OnFinishedRecording;
  VirtualInvokeData OnFinishedPlayback;
  VirtualInvokeData OnPerform;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnInitializeLivePuppetMaster;
  VirtualInvokeData OnInitializeGhostPuppetMaster;
};
struct SeinRidePuppet__StaticFields {
};
struct SeinRidePuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinRidePuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinRidePuppet__VTable vtable;
};

struct __declspec(align(8)) List_1_EquipmentType___Fields {
  struct EquipmentType__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_EquipmentType_ {
  struct List_1_EquipmentType___Class *klass;
  struct MonitorData *monitor;
  struct List_1_EquipmentType___Fields fields;
};
struct List_1_EquipmentType___VTable {
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
struct List_1_EquipmentType___StaticFields {
  struct EquipmentType__Enum__Array * _emptyArray;
};
struct List_1_EquipmentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_EquipmentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_EquipmentType___VTable vtable;
};

struct __declspec(align(8)) SeinRide_KuRidingState_c_DisplayClass23_0__Fields {
  struct Func_1_Boolean_ * sourceContinueCondition;
};
struct SeinRide_KuRidingState_c_DisplayClass23_0 {
  struct SeinRide_KuRidingState_c_DisplayClass23_0__Class *klass;
  struct MonitorData *monitor;
  struct SeinRide_KuRidingState_c_DisplayClass23_0__Fields fields;
};
struct SeinRide_KuRidingState_c_DisplayClass23_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinRide_KuRidingState_c_DisplayClass23_0__StaticFields {
};
struct SeinRide_KuRidingState_c_DisplayClass23_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinRide_KuRidingState_c_DisplayClass23_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinRide_KuRidingState_c_DisplayClass23_0__VTable vtable;
};

enum ChakramProjectileEffect_ChakramProjectileTriggerType__Enum : int32_t {
  ChakramProjectileEffect_ChakramProjectileTriggerType__Enum_OnDestroy = 0,
  ChakramProjectileEffect_ChakramProjectileTriggerType__Enum_OnSpinStop = 1,
};
struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ChakramProjectileEffect_ChakramProjectileTriggerType__Enum value;
};
struct ChakramProjectileEffect__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * m_timeline;
  float m_destroyDelay;
  enum ChakramProjectileEffect_ChakramProjectileTriggerType__Enum m_triggerType;
  struct ChakramProjectile * m_chakramProjectile;
  bool m_triggered;
  float m_timer;
};
struct ChakramProjectileEffect {
  struct ChakramProjectileEffect__Class *klass;
  struct MonitorData *monitor;
  struct ChakramProjectileEffect__Fields fields;
};
struct ChakramProjectileEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChakramProjectileEffect__StaticFields {
};
struct ChakramProjectileEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChakramProjectileEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChakramProjectileEffect__VTable vtable;
};

struct ColorVariation__Fields {
  struct MonoBehaviour__Fields _;
  struct Renderer__Array * m_renderers;
  struct Color__Array * m_cachedColors;
  struct Vector4__Array * m_cachedPositions;
  struct Vector3__Array * m_cachedLossyScales;
  struct Vector4__Array * m_cachedSlicesRanges;
  float m_time;
  float m_speed;
  int32_t m_triesToGetRenderers;
  struct MoonGuid * MetaDataGUID;
};
struct ColorVariation {
  struct ColorVariation__Class *klass;
  struct MonitorData *monitor;
  struct ColorVariation__Fields fields;
};
struct ColorVariation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnBeforeStrip;
  VirtualInvokeData DoStrip;
};
struct ColorVariation__StaticFields {
};
struct ColorVariation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorVariation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorVariation__VTable vtable;
};

struct ColorVariation_c {
  struct ColorVariation_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_UnityEngine_Transform___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_UnityEngine_Transform_ {
  struct Comparison_1_UnityEngine_Transform___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_UnityEngine_Transform___Fields fields;
};
struct Comparison_1_UnityEngine_Transform___VTable {
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
struct Comparison_1_UnityEngine_Transform___StaticFields {
};
struct Comparison_1_UnityEngine_Transform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_UnityEngine_Transform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_UnityEngine_Transform___VTable vtable;
};
struct ColorVariation_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColorVariation_c__StaticFields {
  struct ColorVariation_c * __9;
  struct Comparison_1_UnityEngine_Transform_ * __9__13_0;
};
struct ColorVariation_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorVariation_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorVariation_c__VTable vtable;
};

struct __declspec(align(8)) ColorVariationManager__Fields {
  struct Vector4 m_colorVariationExtraSettings;
  struct Vector4 m_enabledTimeBrightnessDarkLight;
  struct Vector4 m_mainTexScaleScroll;
  struct Vector4 m_distortionScaleScroll;
  int32_t m_colorVariationExtraSettings_Id;
  int32_t m_enabledTimeBrightnessDarkLight_Id;
  int32_t m_colorVariationGlobalParams_Id;
  int32_t m_mainTexScaleScroll_Id;
  int32_t m_distortionScaleScroll_Id;
  float m_timer;
};
struct ColorVariationManager {
  struct ColorVariationManager__Class *klass;
  struct MonitorData *monitor;
  struct ColorVariationManager__Fields fields;
};
struct __declspec(align(8)) List_1_ColorVariationManager_IColorVariationInfluencer___Fields {
  struct ColorVariationManager_IColorVariationInfluencer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ColorVariationManager_IColorVariationInfluencer_ {
  struct List_1_ColorVariationManager_IColorVariationInfluencer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ColorVariationManager_IColorVariationInfluencer___Fields fields;
};
struct ColorVariationManager_IColorVariationInfluencer {
  struct ColorVariationManager_IColorVariationInfluencer__Class *klass;
  struct MonitorData *monitor;
};
struct ColorVariationManager_IColorVariationInfluencer__Array {
  struct ColorVariationManager_IColorVariationInfluencer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ColorVariationManager_IColorVariationInfluencer * vector[32];
};
struct IEnumerator_1_ColorVariationManager_IColorVariationInfluencer_ {
  struct IEnumerator_1_ColorVariationManager_IColorVariationInfluencer___Class *klass;
  struct MonitorData *monitor;
};
struct ColorVariationManager_IColorVariationInfluencer__VTable {
  VirtualInvokeData get_ColorVariationWeight;
  VirtualInvokeData get_ColorVariationInfluencerOrder;
  VirtualInvokeData get_ColorVariationSettings;
};
struct ColorVariationManager_IColorVariationInfluencer__StaticFields {
};
struct ColorVariationManager_IColorVariationInfluencer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorVariationManager_IColorVariationInfluencer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorVariationManager_IColorVariationInfluencer__VTable vtable;
};
struct IEnumerator_1_ColorVariationManager_IColorVariationInfluencer___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ColorVariationManager_IColorVariationInfluencer___StaticFields {
};
struct IEnumerator_1_ColorVariationManager_IColorVariationInfluencer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ColorVariationManager_IColorVariationInfluencer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ColorVariationManager_IColorVariationInfluencer___VTable vtable;
};
struct List_1_ColorVariationManager_IColorVariationInfluencer___VTable {
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
struct List_1_ColorVariationManager_IColorVariationInfluencer___StaticFields {
  struct ColorVariationManager_IColorVariationInfluencer__Array * _emptyArray;
};
struct List_1_ColorVariationManager_IColorVariationInfluencer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ColorVariationManager_IColorVariationInfluencer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ColorVariationManager_IColorVariationInfluencer___VTable vtable;
};
struct ColorVariationManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColorVariationManager__StaticFields {
  struct List_1_ColorVariationManager_IColorVariationInfluencer_ * s_influencers;
  struct ColorVariationSettings * s_settingsToApply;
  bool _ColorVariationDebugEnabled_k__BackingField;
  bool FreezeColorVariation;
};
struct ColorVariationManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorVariationManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorVariationManager__VTable vtable;
};

struct AddColosseumTimeAction__Fields {
  struct ActionMethod__Fields _;
  struct ColosseumTimer * Timer;
  float Seconds;
};
struct AddColosseumTimeAction {
  struct AddColosseumTimeAction__Class *klass;
  struct MonitorData *monitor;
  struct AddColosseumTimeAction__Fields fields;
};
struct ColosseumTimer__Fields {
  struct MonoBehaviour__Fields _;
  bool m_running;
  struct ColosseumDisplay * display;
  float _TimeRemaining_k__BackingField;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ColosseumTimer {
  struct ColosseumTimer__Class *klass;
  struct MonitorData *monitor;
  struct ColosseumTimer__Fields fields;
};
struct ColosseumDisplay__Fields {
  struct MonoBehaviour__Fields _;
  struct Text * RemainingTime;
};
struct ColosseumDisplay {
  struct ColosseumDisplay__Class *klass;
  struct MonitorData *monitor;
  struct ColosseumDisplay__Fields fields;
};
struct ColosseumDisplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColosseumDisplay__StaticFields {
};
struct ColosseumDisplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColosseumDisplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColosseumDisplay__VTable vtable;
};
struct ColosseumTimer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct ColosseumTimer__StaticFields {
};
struct ColosseumTimer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColosseumTimer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColosseumTimer__VTable vtable;
};
struct AddColosseumTimeAction__VTable {
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
struct AddColosseumTimeAction__StaticFields {
};
struct AddColosseumTimeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddColosseumTimeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddColosseumTimeAction__VTable vtable;
};

struct ColosseumBase__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionSequence * BaseDestroyedAction;
  struct LegacyEntity * Entity;
  float StartHealth;
  float TouchDamage;
};
struct ColosseumBase {
  struct ColosseumBase__Class *klass;
  struct MonitorData *monitor;
  struct ColosseumBase__Fields fields;
};
struct ColosseumBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColosseumBase__StaticFields {
};
struct ColosseumBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColosseumBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColosseumBase__VTable vtable;
};

struct Enemy2D__Fields {
  struct Enemy__Fields _;
  struct CharacterAnimationSystem * Animation;
  struct GameObject * PuppetPrefab;
  struct RecordableObjectPuppet * m_recordableObjectPuppet;
};
struct Enemy2D {
  struct Enemy2D__Class *klass;
  struct MonitorData *monitor;
  struct Enemy2D__Fields fields;
};
struct GroundEnemy__Fields {
  struct Enemy2D__Fields _;
  struct PlatformMovement * PlatformMovement;
  struct PlatformMovementListOfColliders * PlatformMovementListOfColliders;
  struct Transform * FeetTransform;
};
struct GroundEnemy {
  struct GroundEnemy__Class *klass;
  struct MonitorData *monitor;
  struct GroundEnemy__Fields fields;
};
struct SpitterEnemy__Fields {
  struct GroundEnemy__Fields _;
  struct PrefabSpawner * SpitEffect;
  struct PrefabSpawner * ProjectileSpawner;
  struct ChargingSootEnemyAnimations * Animations;
  struct ChargingSootEnemySettings * Settings;
  struct SoundSource * IdleSound;
  struct SoundSource * WalkSound;
  struct SoundSource * RunAwaySound;
  struct SoundSource * AttackSound;
  struct SoundSource * LandSound;
  struct ActionMethod * EnterZoneAction;
  struct Transform__Array * ActionZones;
  bool m_hasEnteredZone;
  struct SpitterEnemy_States * State;
  struct Vector2 _ThrownDirection_k__BackingField;
  float FallingDisabledTimeLeft;
  float StunTimeLeft;
};}