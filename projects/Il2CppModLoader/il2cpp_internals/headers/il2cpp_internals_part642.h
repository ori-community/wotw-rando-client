namespace app {
struct DontCrushPlayer__StaticFields {
};
struct DontCrushPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DontCrushPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DontCrushPlayer__VTable vtable;
};

struct CharacterGlow__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTransparencyAnimator * Animator;
  struct Renderer * Renderer;
  struct Transform * m_parent;
  struct Vector3 m_localPosition;
  struct Quaternion m_localRotation;
};
struct CharacterGlow {
  struct CharacterGlow__Class *klass;
  struct MonitorData *monitor;
  struct CharacterGlow__Fields fields;
};
struct CharacterGlow__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterGlow__StaticFields {
};
struct CharacterGlow__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterGlow__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterGlow__VTable vtable;
};

struct CharacterGravity_c {
  struct CharacterGravity_c__Class *klass;
  struct MonitorData *monitor;
};
struct CharacterGravity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterGravity_c__StaticFields {
  struct CharacterGravity_c * __9;
  struct Action_1_GravityPlatformMovementSettings_ * __9__18_0;
};
struct CharacterGravity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterGravity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterGravity_c__VTable vtable;
};

struct CharacterLeftRightMovement_c {
  struct CharacterLeftRightMovement_c__Class *klass;
  struct MonitorData *monitor;
};
struct CharacterLeftRightMovement_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterLeftRightMovement_c__StaticFields {
  struct CharacterLeftRightMovement_c * __9;
  struct CharacterLeftRightMovement_PreDashDelegateType * __9__44_0;
  struct Action * __9__44_1;
  struct Action_1_HorizontalPlatformMovementSettings_ * __9__44_2;
};
struct CharacterLeftRightMovement_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterLeftRightMovement_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterLeftRightMovement_c__VTable vtable;
};

struct CharacterState_c {
  struct CharacterState_c__Class *klass;
  struct MonitorData *monitor;
};
struct CharacterState_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterState_c__StaticFields {
  struct CharacterState_c * __9;
  struct SeinLogicCycle_IsAllowedDelegate * __9__50_0;
};
struct CharacterState_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterState_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterState_c__VTable vtable;
};

struct __declspec(align(8)) DeathInformation__Fields {
  struct Vector3 Position;
  int32_t TimeOfDeath;
  int32_t Progress;
  int32_t DeathNumber;
};
struct DeathInformation {
  struct DeathInformation__Class *klass;
  struct MonitorData *monitor;
  struct DeathInformation__Fields fields;
};
struct DeathInformation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeathInformation__StaticFields {
};
struct DeathInformation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeathInformation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeathInformation__VTable vtable;
};

struct DeathWisp__Fields {
  struct MonoBehaviour__Fields _;
  struct DeathInformation * DeathInfo;
  struct BaseAnimator * Disappear;
  float Radius;
  struct GameObject * CollectionEffect;
  struct Transform * m_transform;
  bool m_collected;
};
struct DeathWisp {
  struct DeathWisp__Class *klass;
  struct MonitorData *monitor;
  struct DeathWisp__Fields fields;
};
struct DeathWisp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeathWisp__StaticFields {
};
struct DeathWisp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeathWisp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeathWisp__VTable vtable;
};

struct DeathWispsManager__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Wisp;
  struct MessageProvider * WispMessage;
  struct GameObject * WispIcon;
  struct Dictionary_2_DeathInformation_DeathWisp_ * m_wisps;
  struct Bounds m_lastCameraBounds;
  struct HashSet_1_DeathWisp_ * m_leftOvers;
  struct ActionMethod * CollectWispAction;
  struct DeathInformation * Collected;
};
struct DeathWispsManager {
  struct DeathWispsManager__Class *klass;
  struct MonitorData *monitor;
  struct DeathWispsManager__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_DeathInformation_DeathWisp___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_DeathInformation_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_DeathInformation_DeathWisp_ {
  struct Dictionary_2_DeathInformation_DeathWisp___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_DeathInformation_DeathWisp___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp_ {
  int32_t hashCode;
  int32_t next;
  struct DeathInformation * key;
  struct DeathWisp * value;
};
struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___Array {
  struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp_ vector[32];
};
struct IEqualityComparer_1_DeathInformation_ {
  struct IEqualityComparer_1_DeathInformation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___Fields {
  struct Dictionary_2_DeathInformation_DeathWisp_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___Fields fields;
};
struct DeathInformation__Array {
  struct DeathInformation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DeathInformation * vector[32];
};
struct IEnumerator_1_DeathInformation_ {
  struct IEnumerator_1_DeathInformation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___Fields {
  struct Dictionary_2_DeathInformation_DeathWisp_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___Fields fields;
};
struct DeathWisp__Array {
  struct DeathWisp__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DeathWisp * vector[32];
};
struct IEnumerator_1_DeathWisp_ {
  struct IEnumerator_1_DeathWisp___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_DeathInformation_ {
  struct ICollection_1_DeathInformation___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_DeathWisp_ {
  struct ICollection_1_DeathWisp___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_DeathInformation_DeathWisp_ {
  struct DeathInformation * key;
  struct DeathWisp * value;
};
struct KeyValuePair_2_DeathInformation_DeathWisp___Boxed {
  struct KeyValuePair_2_DeathInformation_DeathWisp___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_DeathInformation_DeathWisp_ fields;
};
struct KeyValuePair_2_DeathInformation_DeathWisp___Array {
  struct KeyValuePair_2_DeathInformation_DeathWisp___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_DeathInformation_DeathWisp_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_DeathInformation_DeathWisp_ {
  struct IEnumerator_1_KeyValuePair_2_DeathInformation_DeathWisp___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_DeathInformation_ {
  struct IEnumerable_1_DeathInformation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_DeathWisp_ {
  struct IEnumerable_1_DeathWisp___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_DeathWisp___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_DeathWisp___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_DeathWisp_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_DeathWisp_ {
  struct HashSet_1_DeathWisp___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_DeathWisp___Fields fields;
};
struct HashSet_1_T_Slot_DeathWisp_ {
  int32_t hashCode;
  int32_t next;
  struct DeathWisp * value;
};
struct HashSet_1_T_Slot_DeathWisp___Boxed {
  struct HashSet_1_T_Slot_DeathWisp___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_DeathWisp_ fields;
};
struct HashSet_1_T_Slot_DeathWisp___Array {
  struct HashSet_1_T_Slot_DeathWisp___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_DeathWisp_ vector[32];
};
struct IEqualityComparer_1_DeathWisp_ {
  struct IEqualityComparer_1_DeathWisp___Class *klass;
  struct MonitorData *monitor;
};
struct SeinDeathsManager__Fields {
  struct SaveSerialize__Fields _;
  struct List_1_DeathInformation_ * Deaths;
};
struct SeinDeathsManager {
  struct SeinDeathsManager__Class *klass;
  struct MonitorData *monitor;
  struct SeinDeathsManager__Fields fields;
};
struct __declspec(align(8)) List_1_DeathInformation___Fields {
  struct DeathInformation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DeathInformation_ {
  struct List_1_DeathInformation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DeathInformation___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_DeathInformation_DeathWisp___VTable vtable;
};
struct IEqualityComparer_1_DeathInformation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_DeathInformation___StaticFields {
};
struct IEqualityComparer_1_DeathInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_DeathInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_DeathInformation___VTable vtable;
};
struct IEnumerator_1_DeathInformation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DeathInformation___StaticFields {
};
struct IEnumerator_1_DeathInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DeathInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DeathInformation___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_DeathInformation_DeathWisp___VTable vtable;
};
struct IEnumerator_1_DeathWisp___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DeathWisp___StaticFields {
};
struct IEnumerator_1_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DeathWisp___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp___VTable vtable;
};
struct ICollection_1_DeathInformation___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_DeathInformation___StaticFields {
};
struct ICollection_1_DeathInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_DeathInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_DeathInformation___VTable vtable;
};
struct ICollection_1_DeathWisp___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_DeathWisp___StaticFields {
};
struct ICollection_1_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_DeathWisp___VTable vtable;
};
struct KeyValuePair_2_DeathInformation_DeathWisp___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_DeathInformation_DeathWisp___StaticFields {
};
struct KeyValuePair_2_DeathInformation_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_DeathInformation_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_DeathInformation_DeathWisp___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_DeathInformation_DeathWisp___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_DeathInformation_DeathWisp___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_DeathInformation_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_DeathInformation_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_DeathInformation_DeathWisp___VTable vtable;
};
struct IEnumerable_1_DeathInformation___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_DeathInformation___StaticFields {
};
struct IEnumerable_1_DeathInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_DeathInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_DeathInformation___VTable vtable;
};
struct IEnumerable_1_DeathWisp___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_DeathWisp___StaticFields {
};
struct IEnumerable_1_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_DeathWisp___VTable vtable;
};
struct Dictionary_2_DeathInformation_DeathWisp___VTable {
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
struct Dictionary_2_DeathInformation_DeathWisp___StaticFields {
};
struct Dictionary_2_DeathInformation_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_DeathInformation_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_DeathInformation_DeathWisp___VTable vtable;
};
struct HashSet_1_T_Slot_DeathWisp___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_DeathWisp___StaticFields {
};
struct HashSet_1_T_Slot_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_DeathWisp___VTable vtable;
};
struct IEqualityComparer_1_DeathWisp___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_DeathWisp___StaticFields {
};
struct IEqualityComparer_1_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_DeathWisp___VTable vtable;
};
struct HashSet_1_DeathWisp___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_DeathWisp___StaticFields {
};
struct HashSet_1_DeathWisp___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_DeathWisp___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_DeathWisp___VTable vtable;
};
struct DeathWispsManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeathWispsManager__StaticFields {
  struct DeathWispsManager * Instance;
};
struct DeathWispsManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeathWispsManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeathWispsManager__VTable vtable;
};
struct List_1_DeathInformation___VTable {
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
struct List_1_DeathInformation___StaticFields {
  struct DeathInformation__Array * _emptyArray;
};
struct List_1_DeathInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DeathInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DeathInformation___VTable vtable;
};
struct SeinDeathsManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct SeinDeathsManager__StaticFields {
  struct SeinDeathsManager * Instance;
};
struct SeinDeathsManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinDeathsManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinDeathsManager__VTable vtable;
};

struct EntityFreezeController__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyEntity * Entity;
  bool UnfreezeOnDamage;
  struct HashSet_1_Moon_ISuspendable_ * m_suspendables;
  float m_remainingTime;
  bool m_isFrozen;
  struct Renderer * m_renderer;
  struct Color m_freezeColor;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct EntityFreezeController {
  struct EntityFreezeController__Class *klass;
  struct MonitorData *monitor;
  struct EntityFreezeController__Fields fields;
};
struct EntityFreezeController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct EntityFreezeController__StaticFields {
};
struct EntityFreezeController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityFreezeController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityFreezeController__VTable vtable;
};

struct ForceGrabReleaseZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Rect m_bounds;
};
struct ForceGrabReleaseZone {
  struct ForceGrabReleaseZone__Class *klass;
  struct MonitorData *monitor;
  struct ForceGrabReleaseZone__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_ForceGrabReleaseZone___Fields {
  struct List_1_ForceGrabReleaseZone_ * m_objects;
};
struct AllContainer_1_ForceGrabReleaseZone_ {
  struct AllContainer_1_ForceGrabReleaseZone___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_ForceGrabReleaseZone___Fields fields;
};
struct __declspec(align(8)) List_1_ForceGrabReleaseZone___Fields {
  struct ForceGrabReleaseZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ForceGrabReleaseZone_ {
  struct List_1_ForceGrabReleaseZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ForceGrabReleaseZone___Fields fields;
};
struct ForceGrabReleaseZone__Array {
  struct ForceGrabReleaseZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ForceGrabReleaseZone * vector[32];
};
struct IEnumerator_1_ForceGrabReleaseZone_ {
  struct IEnumerator_1_ForceGrabReleaseZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ForceGrabReleaseZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ForceGrabReleaseZone___StaticFields {
};
struct IEnumerator_1_ForceGrabReleaseZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ForceGrabReleaseZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ForceGrabReleaseZone___VTable vtable;
};
struct List_1_ForceGrabReleaseZone___VTable {
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
struct List_1_ForceGrabReleaseZone___StaticFields {
  struct ForceGrabReleaseZone__Array * _emptyArray;
};
struct List_1_ForceGrabReleaseZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ForceGrabReleaseZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ForceGrabReleaseZone___VTable vtable;
};
struct AllContainer_1_ForceGrabReleaseZone___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_ForceGrabReleaseZone___StaticFields {
};
struct AllContainer_1_ForceGrabReleaseZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_ForceGrabReleaseZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_ForceGrabReleaseZone___VTable vtable;
};
struct ForceGrabReleaseZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct ForceGrabReleaseZone__StaticFields {
  struct AllContainer_1_ForceGrabReleaseZone_ * m_all;
};
struct ForceGrabReleaseZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ForceGrabReleaseZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ForceGrabReleaseZone__VTable vtable;
};

struct GoldenSeinOnTimelineEvent__Fields {
  struct MonoBehaviour__Fields _;
  struct EventTriggerAnimator * Trigger;
};
struct GoldenSeinOnTimelineEvent {
  struct GoldenSeinOnTimelineEvent__Class *klass;
  struct MonitorData *monitor;
  struct GoldenSeinOnTimelineEvent__Fields fields;
};
struct GoldenSeinOnTimelineEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GoldenSeinOnTimelineEvent__StaticFields {
};
struct GoldenSeinOnTimelineEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GoldenSeinOnTimelineEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GoldenSeinOnTimelineEvent__VTable vtable;
};

struct PlayerAbilities_c {
  struct PlayerAbilities_c__Class *klass;
  struct MonitorData *monitor;
};
struct PlayerAbilities_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAbilities_c__StaticFields {
  struct PlayerAbilities_c * __9;
  struct Action * __9__140_0;
  struct Action * __9__140_1;
};
struct PlayerAbilities_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAbilities_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAbilities_c__VTable vtable;
};

struct CommandEnumComparer {
};
struct CommandEnumComparer__Boxed {
  struct CommandEnumComparer__Class *klass;
  struct MonitorData *monitor;
  struct CommandEnumComparer fields;
};}