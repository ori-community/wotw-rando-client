namespace app {
struct SurfaceToWwiseSwitchData {
  struct SurfaceToWwiseSwitchData__Class *klass;
  struct MonitorData *monitor;
  struct SurfaceToWwiseSwitchData__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_PhysicMaterial_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ {
  struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType_ {
  int32_t hashCode;
  int32_t next;
  struct PhysicMaterial * key;
  enum SurfaceMaterialType__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_PhysicMaterial_ {
  struct IEqualityComparer_1_UnityEngine_PhysicMaterial___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Fields {
  struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Fields fields;
};
struct PhysicMaterial__Array {
  struct PhysicMaterial__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PhysicMaterial * vector[32];
};
struct IEnumerator_1_UnityEngine_PhysicMaterial_ {
  struct IEnumerator_1_UnityEngine_PhysicMaterial___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Fields {
  struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Fields fields;
};
struct ICollection_1_UnityEngine_PhysicMaterial_ {
  struct ICollection_1_UnityEngine_PhysicMaterial___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ {
  struct PhysicMaterial * key;
  enum SurfaceMaterialType__Enum value;
};
struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Boxed {
  struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ fields;
};
struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Array {
  struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_PhysicMaterial_ {
  struct IEnumerable_1_UnityEngine_PhysicMaterial___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_UnityEngine_PhysicMaterial___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_PhysicMaterial_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_PhysicMaterial_ {
  struct HashSet_1_UnityEngine_PhysicMaterial___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_PhysicMaterial___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial_ {
  int32_t hashCode;
  int32_t next;
  struct PhysicMaterial * value;
};
struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___Array {
  struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial_ vector[32];
};
struct SurfaceToWwiseSwitchData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SurfaceToWwiseSwitchData__StaticFields {
};
struct SurfaceToWwiseSwitchData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceToWwiseSwitchData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurfaceToWwiseSwitchData__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable vtable;
};
struct IEqualityComparer_1_UnityEngine_PhysicMaterial___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UnityEngine_PhysicMaterial___StaticFields {
};
struct IEqualityComparer_1_UnityEngine_PhysicMaterial___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UnityEngine_PhysicMaterial___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UnityEngine_PhysicMaterial___VTable vtable;
};
struct IEnumerator_1_UnityEngine_PhysicMaterial___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_PhysicMaterial___StaticFields {
};
struct IEnumerator_1_UnityEngine_PhysicMaterial___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_PhysicMaterial___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_PhysicMaterial___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable vtable;
};
struct ICollection_1_UnityEngine_PhysicMaterial___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_PhysicMaterial___StaticFields {
};
struct ICollection_1_UnityEngine_PhysicMaterial___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_PhysicMaterial___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_PhysicMaterial___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields {
};
struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable vtable;
};
struct IEnumerable_1_UnityEngine_PhysicMaterial___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_PhysicMaterial___StaticFields {
};
struct IEnumerable_1_UnityEngine_PhysicMaterial___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_PhysicMaterial___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_PhysicMaterial___VTable vtable;
};
struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable {
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
struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields {
};
struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType___VTable vtable;
};
struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___StaticFields {
};
struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_UnityEngine_PhysicMaterial___VTable vtable;
};
struct HashSet_1_UnityEngine_PhysicMaterial___VTable {
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
struct HashSet_1_UnityEngine_PhysicMaterial___StaticFields {
};
struct HashSet_1_UnityEngine_PhysicMaterial___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_UnityEngine_PhysicMaterial___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_UnityEngine_PhysicMaterial___VTable vtable;
};
struct PhysicsMaterialManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PhysicsMaterialManager__StaticFields {
  struct PhysicsMaterialManager * Instance;
};
struct PhysicsMaterialManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicsMaterialManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicsMaterialManager__VTable vtable;
};

struct SoundProvider_c {
  struct SoundProvider_c__Class *klass;
  struct MonitorData *monitor;
};
struct SoundProvider_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundProvider_c__StaticFields {
  struct SoundProvider_c * __9;
};
struct SoundProvider_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundProvider_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundProvider_c__VTable vtable;
};

struct SoundSourcePlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundSource * SoundSource;
};
struct SoundSourcePlaceholder {
  struct SoundSourcePlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SoundSourcePlaceholder__Fields fields;
};
struct SoundSourcePlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundSourcePlaceholder__StaticFields {
};
struct SoundSourcePlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundSourcePlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundSourcePlaceholder__VTable vtable;
};

struct __declspec(align(8)) SurfaceMaterialSoundPair__Fields {
  struct Switch_1 * Switch;
  enum SurfaceMaterialType__Enum SurfaceMaterialType;
};
struct SurfaceMaterialSoundPair {
  struct SurfaceMaterialSoundPair__Class *klass;
  struct MonitorData *monitor;
  struct SurfaceMaterialSoundPair__Fields fields;
};
struct SurfaceMaterialSoundPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SurfaceMaterialSoundPair__StaticFields {
};
struct SurfaceMaterialSoundPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceMaterialSoundPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurfaceMaterialSoundPair__VTable vtable;
};

struct SurfaceToSoundProviderMap_CallbackFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct SurfaceToSoundProviderMap_CallbackFunction {
  struct SurfaceToSoundProviderMap_CallbackFunction__Class *klass;
  struct MonitorData *monitor;
  struct SurfaceToSoundProviderMap_CallbackFunction__Fields fields;
};
struct SurfaceToSoundProviderMap_CallbackFunction__VTable {
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
struct SurfaceToSoundProviderMap_CallbackFunction__StaticFields {
};
struct SurfaceToSoundProviderMap_CallbackFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceToSoundProviderMap_CallbackFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurfaceToSoundProviderMap_CallbackFunction__VTable vtable;
};

struct VaryingAmbientSoundProvider__Fields {
  struct SoundProvider__Fields _;
  struct Byte__Array * valueGuid;
  uint32_t hash;
  bool hashed;
  struct List_1_UnityEngine_AudioClip_ * AudioClips;
  int32_t m_index;
  float ProviderVolume;
  enum MixerGroupType__Enum MixerGroup;
};
struct VaryingAmbientSoundProvider {
  struct VaryingAmbientSoundProvider__Class *klass;
  struct MonitorData *monitor;
  struct VaryingAmbientSoundProvider__Fields fields;
};
struct VaryingAmbientSoundProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSound;
};
struct VaryingAmbientSoundProvider__StaticFields {
  struct Int32__Array__Array * Indicies;
};
struct VaryingAmbientSoundProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VaryingAmbientSoundProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VaryingAmbientSoundProvider__VTable vtable;
};

struct GameplaySoundManager__Fields {
  struct MonoBehaviour__Fields _;
  struct GameplaySoundParameterMap * ParameterMap;
  struct Event_1 * MusicLoopStartEvent;
  struct Event_1 * MusicPausedEvent;
  struct Event_1 * SFXPausedEvent;
  struct Event_1 * GamePausedEvent;
  struct Event_1 * GameUnpausedEvent;
  struct Event_1 * GameSoftPausedEvent;
  struct Event_1 * GameSoftUnpausedEvent;
  struct Event_1 * OriBashingEvent;
  struct Event_1 * OriNotBashingEvent;
  struct State * CinematicScopeState;
  struct State * GameplayScopeState;
  struct State * EfficientAudioQualityState;
  struct State * BalancedAudioQualityState;
  struct State * MaximumAudioQualityState;
  bool m_wasGamePausedLastFrame;
  bool m_wasGameSoftPausedLastFrame;
  bool m_wasBashingLastFrame;
  struct WwiseEventSystem_SoundHandle m_musicLoopSoundHandle;
  bool m_currentlyPlayingSyncedMusic;
  bool m_cinematicScopeSetThisFrame;
  uint32_t m_cinematicScopeStateGroupID;
  uint32_t m_cinematicScopeStateID;
  uint32_t m_gameplayScopeStateID;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct GameplaySoundManager {
  struct GameplaySoundManager__Class *klass;
  struct MonitorData *monitor;
  struct GameplaySoundManager__Fields fields;
};
struct GameplaySoundParameterMap__Fields {
  struct ScriptableObject__Fields _;
  struct RTPC * OriDamageDealtRtpc;
  struct Switch_1 * OriBasicDamage;
  struct Switch_1 * OriBlockedDamage;
  struct Switch_1 * OriCriticalDamage;
  struct Switch_1 * OriDeathDamage;
  struct Switch_1 * OriSurfaceDamage;
  struct Switch_1 * OriDestructibleSurfaceDamage;
  struct List_1_WeaponParameterMap_ * WeaponParameterMaps;
  struct RTPC * EnemyDamagePercentTakenRtpc;
  struct Switch_1 * EnemyBasicDamage;
  struct Switch_1 * EnemyBlockedDamage;
  struct Switch_1 * EnemyCriticalDamage;
  struct Switch_1 * EnemyDeathDamage;
  struct Switch_1 * EnemyBashDamage;
  struct Switch_1 * EnemyBurnDamage;
};
struct GameplaySoundParameterMap {
  struct GameplaySoundParameterMap__Class *klass;
  struct MonitorData *monitor;
  struct GameplaySoundParameterMap__Fields fields;
};
struct __declspec(align(8)) List_1_WeaponParameterMap___Fields {
  struct WeaponParameterMap__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_WeaponParameterMap_ {
  struct List_1_WeaponParameterMap___Class *klass;
  struct MonitorData *monitor;
  struct List_1_WeaponParameterMap___Fields fields;
};
struct __declspec(align(8)) WeaponParameterMap__Fields {
  enum AbilityType__Enum AbilityType;
  struct Event_1 * WeaponHitEvent;
};
struct WeaponParameterMap {
  struct WeaponParameterMap__Class *klass;
  struct MonitorData *monitor;
  struct WeaponParameterMap__Fields fields;
};
struct WeaponParameterMap__Array {
  struct WeaponParameterMap__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WeaponParameterMap * vector[32];
};
struct IEnumerator_1_WeaponParameterMap_ {
  struct IEnumerator_1_WeaponParameterMap___Class *klass;
  struct MonitorData *monitor;
};
struct WeaponParameterMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WeaponParameterMap__StaticFields {
};
struct WeaponParameterMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponParameterMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponParameterMap__VTable vtable;
};
struct IEnumerator_1_WeaponParameterMap___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_WeaponParameterMap___StaticFields {
};
struct IEnumerator_1_WeaponParameterMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_WeaponParameterMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_WeaponParameterMap___VTable vtable;
};
struct List_1_WeaponParameterMap___VTable {
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
struct List_1_WeaponParameterMap___StaticFields {
  struct WeaponParameterMap__Array * _emptyArray;
};
struct List_1_WeaponParameterMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_WeaponParameterMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_WeaponParameterMap___VTable vtable;
};
struct GameplaySoundParameterMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameplaySoundParameterMap__StaticFields {
};
struct GameplaySoundParameterMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameplaySoundParameterMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameplaySoundParameterMap__VTable vtable;
};
struct GameplaySoundManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct GameplaySoundManager__StaticFields {
  struct GameplaySoundManager * Instance;
  bool UseMusicSyncCallbacks;
  bool m_showCinematicDebug;
};
struct GameplaySoundManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameplaySoundManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameplaySoundManager__VTable vtable;
};

struct SoundLog__Fields {
  struct MonoBehaviour__Fields _;
};
struct SoundLog {
  struct SoundLog__Class *klass;
  struct MonitorData *monitor;
  struct SoundLog__Fields fields;
};
struct SoundLog__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundLog__StaticFields {
  struct Queue_1_System_String_ * recentSoundCalls;
  struct List_1_System_String_ * m_filters;
  struct String * m_currentText;
};
struct SoundLog__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundLog__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundLog__VTable vtable;
};

struct SoundManager__Fields {
  struct MonoBehaviour__Fields _;
  bool m_wwiseEnabled;
};
struct SoundManager {
  struct SoundManager__Class *klass;
  struct MonitorData *monitor;
  struct SoundManager__Fields fields;
};
struct SoundManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundManager__StaticFields {
};
struct SoundManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundManager__VTable vtable;
};

struct SoundPlayerRef {
  struct SoundPlayer * m_soundPlayer;
};
struct SoundPlayerRef__Boxed {
  struct SoundPlayerRef__Class *klass;
  struct MonitorData *monitor;
  struct SoundPlayerRef fields;
};
struct SoundPlayerRef__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundPlayerRef__StaticFields {
};
struct SoundPlayerRef__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundPlayerRef__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundPlayerRef__VTable vtable;
};

struct EnumDictionary_2_AbilityType_UnityEngine_Texture2D___Fields {
  struct MonoBehaviour__Fields _;
  struct Texture2D * Missing;
  bool ThrowMissingError;
  struct List_1_AbilityType_ * m_keys;
  struct List_1_UnityEngine_Texture2D_ * m_values;
  struct Dictionary_2_AbilityType_UnityEngine_Texture2D_ * m_dictionary;
};
struct EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ {
  struct EnumDictionary_2_AbilityType_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct EnumDictionary_2_AbilityType_UnityEngine_Texture2D___Fields fields;
};
struct AbilityIconCollection__Fields {
  struct EnumDictionary_2_AbilityType_UnityEngine_Texture2D___Fields _;
};
struct AbilityIconCollection {
  struct AbilityIconCollection__Class *klass;
  struct MonitorData *monitor;
  struct AbilityIconCollection__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Texture2D___Fields {
  struct Texture2D__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Texture2D_ {
  struct List_1_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Texture2D___Fields fields;
};
struct IEnumerator_1_UnityEngine_Texture2D_ {
  struct IEnumerator_1_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_AbilityType_UnityEngine_Texture2D___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_AbilityType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UnityEngine_Texture2D_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UnityEngine_Texture2D_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_AbilityType_UnityEngine_Texture2D_ {
  struct Dictionary_2_AbilityType_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_AbilityType_UnityEngine_Texture2D___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D_ {
  int32_t hashCode;
  int32_t next;
  enum AbilityType__Enum key;
  struct Texture2D * value;
};
struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D___Array {
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_UnityEngine_Texture2D_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UnityEngine_Texture2D___Fields {
  struct Dictionary_2_AbilityType_UnityEngine_Texture2D_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UnityEngine_Texture2D_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UnityEngine_Texture2D___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UnityEngine_Texture2D___Fields {
  struct Dictionary_2_AbilityType_UnityEngine_Texture2D_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UnityEngine_Texture2D_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UnityEngine_Texture2D___Fields fields;
};
struct ICollection_1_UnityEngine_Texture2D_ {
  struct ICollection_1_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_AbilityType_UnityEngine_Texture2D_ {
  enum AbilityType__Enum key;
  struct Texture2D * value;
};
struct KeyValuePair_2_AbilityType_UnityEngine_Texture2D___Boxed {
  struct KeyValuePair_2_AbilityType_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_AbilityType_UnityEngine_Texture2D_ fields;
};
struct KeyValuePair_2_AbilityType_UnityEngine_Texture2D___Array {
  struct KeyValuePair_2_AbilityType_UnityEngine_Texture2D___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_AbilityType_UnityEngine_Texture2D_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_AbilityType_UnityEngine_Texture2D_ {
  struct IEnumerator_1_KeyValuePair_2_AbilityType_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Texture2D_ {
  struct IEnumerable_1_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Texture2D___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Texture2D___StaticFields {
};
struct IEnumerator_1_UnityEngine_Texture2D___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Texture2D___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Texture2D___VTable vtable;
};
struct List_1_UnityEngine_Texture2D___VTable {
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