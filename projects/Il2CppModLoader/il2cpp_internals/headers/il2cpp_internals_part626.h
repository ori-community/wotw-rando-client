namespace app {
struct __declspec(align(8)) List_1_LegacyEntity___Fields {
  struct LegacyEntity__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyEntity_ {
  struct List_1_LegacyEntity___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyEntity___Fields fields;
};
struct LegacyEntity__Array {
  struct LegacyEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyEntity * vector[32];
};
struct IEnumerator_1_LegacyEntity_ {
  struct IEnumerator_1_LegacyEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_LegacyEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LegacyEntity___StaticFields {
};
struct IEnumerator_1_LegacyEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LegacyEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LegacyEntity___VTable vtable;
};
struct List_1_LegacyEntity___VTable {
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
struct List_1_LegacyEntity___StaticFields {
  struct LegacyEntity__Array * _emptyArray;
};
struct List_1_LegacyEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LegacyEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LegacyEntity___VTable vtable;
};
struct AllEnemiesKilledTrigger__VTable {
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
  VirtualInvokeData get_VirtualTimelineTarget;
  VirtualInvokeData get_VirtualTimelineGroup;
  VirtualInvokeData get_NameDisplayedOnClip;
};
struct AllEnemiesKilledTrigger__StaticFields {
};
struct AllEnemiesKilledTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllEnemiesKilledTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllEnemiesKilledTrigger__VTable vtable;
};
struct AllEnemiesKilledCondition__VTable {
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
struct AllEnemiesKilledCondition__StaticFields {
};
struct AllEnemiesKilledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllEnemiesKilledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllEnemiesKilledCondition__VTable vtable;
};

enum AutoDamageCollider_AutoDamageValueMode__Enum : int32_t {
  AutoDamageCollider_AutoDamageValueMode__Enum_DamageBasedOnArea = 10,
  AutoDamageCollider_AutoDamageValueMode__Enum_InstantKill = 20,
  AutoDamageCollider_AutoDamageValueMode__Enum_DamageBasedOnManuallySetArea = 30,
};
struct AutoDamageCollider_AutoDamageValueMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AutoDamageCollider_AutoDamageValueMode__Enum value;
};
enum AutoDamageCollider_AutoDamageTypeMode__Enum : int32_t {
  AutoDamageCollider_AutoDamageTypeMode__Enum_Auto = 0,
  AutoDamageCollider_AutoDamageTypeMode__Enum_Override = 10,
};
struct AutoDamageCollider_AutoDamageTypeMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AutoDamageCollider_AutoDamageTypeMode__Enum value;
};
struct AutoDamageCollider__Fields {
  struct MonoBehaviour__Fields _;
  struct DamageType__Enum__Array * m_damageTypeFilter;
  struct HashSet_1_UnityEngine_GameObject_ * Children;
  enum AutoDamageCollider_AutoDamageValueMode__Enum DamageMode;
  enum GameWorldAreaID__Enum ManuallySetArea;
  bool PlayerOnly;
  enum AutoDamageCollider_AutoDamageTypeMode__Enum TypeMode;
  enum DamageType__Enum DamageType;
  struct List_1_AutoDamageCollider_AutoDamageColliderEntry_ * m_damageDealers;
  int32_t m_childrenCount;
};
struct AutoDamageCollider {
  struct AutoDamageCollider__Class *klass;
  struct MonitorData *monitor;
  struct AutoDamageCollider__Fields fields;
};
struct __declspec(align(8)) List_1_AutoDamageCollider_AutoDamageColliderEntry___Fields {
  struct AutoDamageCollider_AutoDamageColliderEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AutoDamageCollider_AutoDamageColliderEntry_ {
  struct List_1_AutoDamageCollider_AutoDamageColliderEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AutoDamageCollider_AutoDamageColliderEntry___Fields fields;
};
struct __declspec(align(8)) AutoDamageCollider_AutoDamageColliderEntry__Fields {
  struct DamageDealer * DamageDealer;
  struct Polygon_1 * Polygon;
};
struct AutoDamageCollider_AutoDamageColliderEntry {
  struct AutoDamageCollider_AutoDamageColliderEntry__Class *klass;
  struct MonitorData *monitor;
  struct AutoDamageCollider_AutoDamageColliderEntry__Fields fields;
};
struct AutoDamageCollider_AutoDamageColliderEntry__Array {
  struct AutoDamageCollider_AutoDamageColliderEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AutoDamageCollider_AutoDamageColliderEntry * vector[32];
};
struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry_ {
  struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___Class *klass;
  struct MonitorData *monitor;
};
struct AutoDamageCollider_AutoDamageColliderEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AutoDamageCollider_AutoDamageColliderEntry__StaticFields {
};
struct AutoDamageCollider_AutoDamageColliderEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoDamageCollider_AutoDamageColliderEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoDamageCollider_AutoDamageColliderEntry__VTable vtable;
};
struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields {
};
struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___VTable vtable;
};
struct List_1_AutoDamageCollider_AutoDamageColliderEntry___VTable {
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
struct List_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields {
  struct AutoDamageCollider_AutoDamageColliderEntry__Array * _emptyArray;
};
struct List_1_AutoDamageCollider_AutoDamageColliderEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AutoDamageCollider_AutoDamageColliderEntry___VTable vtable;
};
struct AutoDamageCollider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeStrip;
  VirtualInvokeData DoStrip;
};
struct AutoDamageCollider__StaticFields {
};
struct AutoDamageCollider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoDamageCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoDamageCollider__VTable vtable;
};

struct AutoDamageCollider_c {
  struct AutoDamageCollider_c__Class *klass;
  struct MonitorData *monitor;
};
struct AutoDamageCollider_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AutoDamageCollider_c__StaticFields {
  struct AutoDamageCollider_c * __9;
  struct Predicate_1_UnityEngine_GameObject_ * __9__25_0;
};
struct AutoDamageCollider_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoDamageCollider_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoDamageCollider_c__VTable vtable;
};

struct AutoDamageColliderResolver__Fields {
  struct MonoBehaviour__Fields _;
  struct DamageSurfacesMap * DamageMap;
};
struct AutoDamageColliderResolver {
  struct AutoDamageColliderResolver__Class *klass;
  struct MonitorData *monitor;
  struct AutoDamageColliderResolver__Fields fields;
};
struct DamageSurfacesMap__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry_ * Etries;
};
struct DamageSurfacesMap {
  struct DamageSurfacesMap__Class *klass;
  struct MonitorData *monitor;
  struct DamageSurfacesMap__Fields fields;
};
struct __declspec(align(8)) List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Fields {
  struct DamageSurfacesMap_DamageSurfaceMapEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry_ {
  struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Fields fields;
};
struct __declspec(align(8)) DamageSurfacesMap_DamageSurfaceMapEntry__Fields {
  int32_t AreaId;
  float Damage;
};
struct DamageSurfacesMap_DamageSurfaceMapEntry {
  struct DamageSurfacesMap_DamageSurfaceMapEntry__Class *klass;
  struct MonitorData *monitor;
  struct DamageSurfacesMap_DamageSurfaceMapEntry__Fields fields;
};
struct DamageSurfacesMap_DamageSurfaceMapEntry__Array {
  struct DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DamageSurfacesMap_DamageSurfaceMapEntry * vector[32];
};
struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry_ {
  struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class *klass;
  struct MonitorData *monitor;
};
struct DamageSurfacesMap_DamageSurfaceMapEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DamageSurfacesMap_DamageSurfaceMapEntry__StaticFields {
};
struct DamageSurfacesMap_DamageSurfaceMapEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageSurfacesMap_DamageSurfaceMapEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageSurfacesMap_DamageSurfaceMapEntry__VTable vtable;
};
struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields {
};
struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable vtable;
};
struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable {
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
struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields {
  struct DamageSurfacesMap_DamageSurfaceMapEntry__Array * _emptyArray;
};
struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable vtable;
};
struct DamageSurfacesMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DamageSurfacesMap__StaticFields {
};
struct DamageSurfacesMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageSurfacesMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageSurfacesMap__VTable vtable;
};
struct AutoDamageColliderResolver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnInstantiate;
};
struct AutoDamageColliderResolver__StaticFields {
  struct AutoDamageColliderResolver * Instance;
};
struct AutoDamageColliderResolver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoDamageColliderResolver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoDamageColliderResolver__VTable vtable;
};

struct CompareVelocityCondition__Fields {
  struct Condition_1__Fields _;
  float Speed;
  struct Rigidbody * m_rigidBody;
};
struct CompareVelocityCondition {
  struct CompareVelocityCondition__Class *klass;
  struct MonitorData *monitor;
  struct CompareVelocityCondition__Fields fields;
};
struct CompareVelocityCondition__VTable {
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
struct CompareVelocityCondition__StaticFields {
};
struct CompareVelocityCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompareVelocityCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompareVelocityCondition__VTable vtable;
};

struct DamageResultContext {
  struct DamageResult DamageResult;
};
struct DamageResultContext__Boxed {
  struct DamageResultContext__Class *klass;
  struct MonitorData *monitor;
  struct DamageResultContext fields;
};
struct DamageResultContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DamageResultContext__StaticFields {
};
struct DamageResultContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageResultContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageResultContext__VTable vtable;
};

struct OriDamage__Fields {
  struct Damage__Fields _;
};
struct OriDamage {
  struct OriDamage__Class *klass;
  struct MonitorData *monitor;
  struct OriDamage__Fields fields;
};
struct OriDamage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OriDamage__StaticFields {
};
struct OriDamage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriDamage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriDamage__VTable vtable;
};

struct Damage_c {
  struct Damage_c__Class *klass;
  struct MonitorData *monitor;
};
struct Damage_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Damage_c__StaticFields {
  struct Damage_c * __9;
  struct Action_1_DamageResult_ * __9__7_0;
};
struct Damage_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Damage_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Damage_c__VTable vtable;
};

struct DamageDealer_c {
  struct DamageDealer_c__Class *klass;
  struct MonitorData *monitor;
};
struct DamageDealer_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DamageDealer_c__StaticFields {
  struct DamageDealer_c * __9;
  struct Action_2_DamageDealer_DamageResult_ * __9__112_0;
};
struct DamageDealer_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageDealer_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageDealer_c__VTable vtable;
};

struct DamageText__Fields {
  struct Suspendable__Fields _;
  struct Color Red;
  struct Color Zero;
  struct AnimationCurve * SizeByDamageAmount;
  struct Vector3 m_speed;
  float m_time;
  bool _IsSuspended_k__BackingField;
};
struct DamageText {
  struct DamageText__Class *klass;
  struct MonitorData *monitor;
  struct DamageText__Fields fields;
};
struct DamageText__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct DamageText__StaticFields {
};
struct DamageText__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageText__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageText__VTable vtable;
};

struct EnemyArenaController__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_ICondition_ * StartCondition;
  struct SerializedBooleanUberState * CompletedState;
  bool IsReplayable;
  struct IntUberState * OptionalWaveState;
  struct List_1_EnemyArenaController_EnemyWave_ * m_waves;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * OnArenaEndTimeline;
  bool CreateCheckpointOnArenaCompleted;
  struct CheckpointFunctionality Checkpoint;
  int32_t m_noStateWaveIndex;
  struct MoonTimeline * m_onArenaEndTimeline;
  struct ICondition * m_startConditionResolved;
  struct List_1_Moon_Entity_ * m_entitiesAlive;
  struct IUberState__Array * m_states;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
  bool _InvalidateParentTimelineCache_k__BackingField;
  struct Dictionary_2_System_Int32_System_String_ * m_conditionNameMap;
};
struct EnemyArenaController {
  struct EnemyArenaController__Class *klass;
  struct MonitorData *monitor;
  struct EnemyArenaController__Fields fields;
};
struct __declspec(align(8)) List_1_EnemyArenaController_EnemyWave___Fields {
  struct EnemyArenaController_EnemyWave__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_EnemyArenaController_EnemyWave_ {
  struct List_1_EnemyArenaController_EnemyWave___Class *klass;
  struct MonitorData *monitor;
  struct List_1_EnemyArenaController_EnemyWave___Fields fields;
};
enum EnemyArenaController_WaveStatus__Enum : int32_t {
  EnemyArenaController_WaveStatus__Enum_ReadyToStart = 0,
  EnemyArenaController_WaveStatus__Enum_Running = 1,
  EnemyArenaController_WaveStatus__Enum_Finished = 2,
  EnemyArenaController_WaveStatus__Enum_Disabled = 3,
};
struct EnemyArenaController_WaveStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EnemyArenaController_WaveStatus__Enum value;
};
struct __declspec(align(8)) EnemyArenaController_EnemyWave__Fields {
  int32_t m_deathCount;
  struct List_1_EntityPlaceholder_ * Placeholders;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * OnStartTimeline;
  struct MoonReference_1_ICondition_ * ExtraCondition;
  enum EnemyArenaController_WaveStatus__Enum Status;
  struct MoonTimeline * m_onStartTimeline;
  struct ICondition * m_resolvedExtraCondition;
};
struct EnemyArenaController_EnemyWave {
  struct EnemyArenaController_EnemyWave__Class *klass;
  struct MonitorData *monitor;
  struct EnemyArenaController_EnemyWave__Fields fields;
};
struct EnemyArenaController_EnemyWave__Array {
  struct EnemyArenaController_EnemyWave__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EnemyArenaController_EnemyWave * vector[32];
};
struct IEnumerator_1_EnemyArenaController_EnemyWave_ {
  struct IEnumerator_1_EnemyArenaController_EnemyWave___Class *klass;
  struct MonitorData *monitor;
};
struct EnemyArenaController_EnemyWave__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnemyArenaController_EnemyWave__StaticFields {
};
struct EnemyArenaController_EnemyWave__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyArenaController_EnemyWave__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyArenaController_EnemyWave__VTable vtable;
};
struct IEnumerator_1_EnemyArenaController_EnemyWave___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_EnemyArenaController_EnemyWave___StaticFields {
};
struct IEnumerator_1_EnemyArenaController_EnemyWave___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_EnemyArenaController_EnemyWave___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_EnemyArenaController_EnemyWave___VTable vtable;
};
struct List_1_EnemyArenaController_EnemyWave___VTable {
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
struct List_1_EnemyArenaController_EnemyWave___StaticFields {
  struct EnemyArenaController_EnemyWave__Array * _emptyArray;
};
struct List_1_EnemyArenaController_EnemyWave___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_EnemyArenaController_EnemyWave___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_EnemyArenaController_EnemyWave___VTable vtable;
};
struct EnemyArenaController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData CreateTimelineParentEntity;
  VirtualInvokeData get_AddChildren;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData GetAllConditionNames;
  VirtualInvokeData GetAllConditionGuids;
  VirtualInvokeData GetConditionNameFromGuid;
  VirtualInvokeData IsConditionGuidValid;
  VirtualInvokeData Validate;
};
struct EnemyArenaController__StaticFields {
};
struct EnemyArenaController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyArenaController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyArenaController__VTable vtable;
};

struct EnemyArenaController_ConditionGuidType {
  struct EnemyArenaController_ConditionGuidType__Class *klass;
  struct MonitorData *monitor;
};
struct EnemyArenaController_ConditionGuidType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnemyArenaController_ConditionGuidType__StaticFields {
};
struct EnemyArenaController_ConditionGuidType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyArenaController_ConditionGuidType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyArenaController_ConditionGuidType__VTable vtable;
};

struct __declspec(align(8)) AttackAcceptInfo__Fields {
  bool CanAttack;
  int32_t DamageAmount;
};
struct AttackAcceptInfo {
  struct AttackAcceptInfo__Class *klass;
  struct MonitorData *monitor;
  struct AttackAcceptInfo__Fields fields;
};
struct AttackAcceptInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttackAcceptInfo__StaticFields {
};
struct AttackAcceptInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttackAcceptInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttackAcceptInfo__VTable vtable;
};

struct ProjectileDamageDealer__Fields {
  struct DamageDealer__Fields _;
  struct Projectile * m_projectile;
  float EnemyMultiplier;
};
struct ProjectileDamageDealer {
  struct ProjectileDamageDealer__Class *klass;
  struct MonitorData *monitor;
  struct ProjectileDamageDealer__Fields fields;
};
struct ProjectileDamageDealer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnterPhysicsTrigger;
  VirtualInvokeData get_VirtualTimelineTarget;
  VirtualInvokeData get_VirtualTimelineGroup;
  VirtualInvokeData get_NameDisplayedOnClip;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData Prewarm;
  VirtualInvokeData get_BypassPlayerInvincibility;
  VirtualInvokeData AmountOfDamage;
  VirtualInvokeData Awake;
  VirtualInvokeData ApplyDamageToCollider;
  VirtualInvokeData DealDamage;
};
struct ProjectileDamageDealer__StaticFields {
};
struct ProjectileDamageDealer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProjectileDamageDealer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProjectileDamageDealer__VTable vtable;
};

struct RigidbodyReactToDamage__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_DamageReactionSettings_ * DamageReactionSettings;
};
struct RigidbodyReactToDamage {
  struct RigidbodyReactToDamage__Class *klass;
  struct MonitorData *monitor;
  struct RigidbodyReactToDamage__Fields fields;
};
struct __declspec(align(8)) List_1_DamageReactionSettings___Fields {
  struct DamageReactionSettings__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DamageReactionSettings_ {
  struct List_1_DamageReactionSettings___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DamageReactionSettings___Fields fields;
};
struct __declspec(align(8)) DamageReactionSettings__Fields {
  enum DamageType__Enum DamageType;
  float ForceMultiplier;
};
struct DamageReactionSettings {
  struct DamageReactionSettings__Class *klass;
  struct MonitorData *monitor;
  struct DamageReactionSettings__Fields fields;
};
struct DamageReactionSettings__Array {
  struct DamageReactionSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DamageReactionSettings * vector[32];
};
struct IEnumerator_1_DamageReactionSettings_ {
  struct IEnumerator_1_DamageReactionSettings___Class *klass;
  struct MonitorData *monitor;
};
struct DamageReactionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DamageReactionSettings__StaticFields {
};
struct DamageReactionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageReactionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageReactionSettings__VTable vtable;
};
struct IEnumerator_1_DamageReactionSettings___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DamageReactionSettings___StaticFields {
};
struct IEnumerator_1_DamageReactionSettings___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DamageReactionSettings___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DamageReactionSettings___VTable vtable;
};
struct List_1_DamageReactionSettings___VTable {
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
};}