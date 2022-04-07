namespace app {
struct SkinnedMeshLod_c_DisplayClass11_0 {
  struct SkinnedMeshLod_c_DisplayClass11_0__Class *klass;
  struct MonitorData *monitor;
  struct SkinnedMeshLod_c_DisplayClass11_0__Fields fields;
};
struct SkinnedMeshLod_c_DisplayClass11_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SkinnedMeshLod_c_DisplayClass11_0__StaticFields {
};
struct SkinnedMeshLod_c_DisplayClass11_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkinnedMeshLod_c_DisplayClass11_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkinnedMeshLod_c_DisplayClass11_0__VTable vtable;
};

struct __declspec(align(8)) SkinnedMeshLod_c_DisplayClass11_1__Fields {
  int32_t boneOrder;
  struct SkinnedMeshLod_c_DisplayClass11_0 * CS___8__locals1;
};
struct SkinnedMeshLod_c_DisplayClass11_1 {
  struct SkinnedMeshLod_c_DisplayClass11_1__Class *klass;
  struct MonitorData *monitor;
  struct SkinnedMeshLod_c_DisplayClass11_1__Fields fields;
};
struct SkinnedMeshLod_c_DisplayClass11_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SkinnedMeshLod_c_DisplayClass11_1__StaticFields {
};
struct SkinnedMeshLod_c_DisplayClass11_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkinnedMeshLod_c_DisplayClass11_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkinnedMeshLod_c_DisplayClass11_1__VTable vtable;
};

struct MoonInput {
  struct MoonInput__Class *klass;
  struct MonitorData *monitor;
};
struct MoonInput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonInput__StaticFields {
};
struct MoonInput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonInput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonInput__VTable vtable;
};

struct MixerManager__Fields {
  struct MonoBehaviour__Fields _;
  struct MixerSnapshot * DefaultSceneSnapshot;
  struct MixerSnapshot * UISnapshot;
  struct MixerSnapshot * ModulatingSnapshot;
  struct MixerGroupSettings m_currentMixerGroupSettings;
  bool m_wasInUI;
  struct List_1_MixerSnapshot_ * m_currentlyActiveSnapshots;
  struct MixerGroupSettings m_settings;
  struct List_1_MixerSnapshotZone_ * m_snapshotZones;
  struct MixerSnapshot * m_currentSceneMixerSnapshot;
};
struct MixerManager {
  struct MixerManager__Class *klass;
  struct MonitorData *monitor;
  struct MixerManager__Fields fields;
};
struct Predicate_1_MixerSnapshot___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_MixerSnapshot_ {
  struct Predicate_1_MixerSnapshot___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_MixerSnapshot___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_MixerGroupType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ {
  struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ {
  int32_t hashCode;
  int32_t next;
  enum MixerGroupType__Enum key;
  struct AudioMixerGroup * value;
};
struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array {
  struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ vector[32];
};
struct IEqualityComparer_1_MixerGroupType_ {
  struct IEqualityComparer_1_MixerGroupType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Fields {
  struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Fields fields;
};
struct MixerGroupType__Enum__Array {
  struct MixerGroupType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum MixerGroupType__Enum vector[32];
};
struct IEnumerator_1_MixerGroupType_ {
  struct IEnumerator_1_MixerGroupType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Fields {
  struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Fields fields;
};
struct IEnumerator_1_UnityEngine_Audio_AudioMixerGroup_ {
  struct IEnumerator_1_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_MixerGroupType_ {
  struct ICollection_1_MixerGroupType___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_Audio_AudioMixerGroup_ {
  struct ICollection_1_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ {
  enum MixerGroupType__Enum key;
  struct AudioMixerGroup * value;
};
struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Boxed {
  struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ fields;
};
struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array {
  struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ {
  struct IEnumerator_1_KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MixerGroupType_ {
  struct IEnumerable_1_MixerGroupType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Audio_AudioMixerGroup_ {
  struct IEnumerable_1_UnityEngine_Audio_AudioMixerGroup___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_MixerSnapshot___Fields {
  struct MixerSnapshot__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MixerSnapshot_ {
  struct List_1_MixerSnapshot___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MixerSnapshot___Fields fields;
};
struct MixerSnapshot__Array {
  struct MixerSnapshot__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MixerSnapshot * vector[32];
};
struct IEnumerator_1_MixerSnapshot_ {
  struct IEnumerator_1_MixerSnapshot___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_MixerSnapshotZone___Fields {
  struct MixerSnapshotZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MixerSnapshotZone_ {
  struct List_1_MixerSnapshotZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MixerSnapshotZone___Fields fields;
};
struct MixerSnapshotZone__Fields {
  struct MonoBehaviour__Fields _;
  struct MixerSnapshot * Snapshot;
  bool m_isCurrentlyActive;
};
struct MixerSnapshotZone {
  struct MixerSnapshotZone__Class *klass;
  struct MonitorData *monitor;
  struct MixerSnapshotZone__Fields fields;
};
struct MixerSnapshotZone__Array {
  struct MixerSnapshotZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MixerSnapshotZone * vector[32];
};
struct IEnumerator_1_MixerSnapshotZone_ {
  struct IEnumerator_1_MixerSnapshotZone___Class *klass;
  struct MonitorData *monitor;
};
struct Predicate_1_MixerSnapshot___VTable {
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
struct Predicate_1_MixerSnapshot___StaticFields {
};
struct Predicate_1_MixerSnapshot___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_MixerSnapshot___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_MixerSnapshot___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct IEqualityComparer_1_MixerGroupType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_MixerGroupType___StaticFields {
};
struct IEqualityComparer_1_MixerGroupType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_MixerGroupType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_MixerGroupType___VTable vtable;
};
struct IEnumerator_1_MixerGroupType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MixerGroupType___StaticFields {
};
struct IEnumerator_1_MixerGroupType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MixerGroupType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MixerGroupType___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct IEnumerator_1_UnityEngine_Audio_AudioMixerGroup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct IEnumerator_1_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct ICollection_1_MixerGroupType___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_MixerGroupType___StaticFields {
};
struct ICollection_1_MixerGroupType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_MixerGroupType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_MixerGroupType___VTable vtable;
};
struct ICollection_1_UnityEngine_Audio_AudioMixerGroup___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct ICollection_1_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct IEnumerable_1_MixerGroupType___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_MixerGroupType___StaticFields {
};
struct IEnumerable_1_MixerGroupType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_MixerGroupType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_MixerGroupType___VTable vtable;
};
struct IEnumerable_1_UnityEngine_Audio_AudioMixerGroup___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct IEnumerable_1_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable {
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
struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields {
};
struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___VTable vtable;
};
struct IEnumerator_1_MixerSnapshot___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MixerSnapshot___StaticFields {
};
struct IEnumerator_1_MixerSnapshot___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MixerSnapshot___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MixerSnapshot___VTable vtable;
};
struct List_1_MixerSnapshot___VTable {
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
struct List_1_MixerSnapshot___StaticFields {
  struct MixerSnapshot__Array * _emptyArray;
};
struct List_1_MixerSnapshot___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MixerSnapshot___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MixerSnapshot___VTable vtable;
};
struct MixerSnapshotZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MixerSnapshotZone__StaticFields {
};
struct MixerSnapshotZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MixerSnapshotZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MixerSnapshotZone__VTable vtable;
};
struct IEnumerator_1_MixerSnapshotZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MixerSnapshotZone___StaticFields {
};
struct IEnumerator_1_MixerSnapshotZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MixerSnapshotZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MixerSnapshotZone___VTable vtable;
};
struct List_1_MixerSnapshotZone___VTable {
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
struct List_1_MixerSnapshotZone___StaticFields {
  struct MixerSnapshotZone__Array * _emptyArray;
};
struct List_1_MixerSnapshotZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MixerSnapshotZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MixerSnapshotZone___VTable vtable;
};
struct MixerManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MixerManager__StaticFields {
  bool OptimizeMixerUpdate;
  struct Predicate_1_MixerSnapshot_ * CachedIsSnapshotInactivePredicate;
  struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ * s_typeToGroup;
  struct AudioMixer * s_cachedMasterMixer;
  struct MixerManager * s_manager;
};
struct MixerManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MixerManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MixerManager__VTable vtable;
};

struct MixerManager_c {
  struct MixerManager_c__Class *klass;
  struct MonitorData *monitor;
};
struct MixerManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MixerManager_c__StaticFields {
  struct MixerManager_c * __9;
};
struct MixerManager_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MixerManager_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MixerManager_c__VTable vtable;
};

struct ConditionBasedSoundProvider__Fields {
  struct SoundProvider__Fields _;
  struct SoundProvider * TrueSoundProvider;
  struct SoundProvider * FalseSoundProvider;
  struct Condition_1 * Condition;
};
struct ConditionBasedSoundProvider {
  struct ConditionBasedSoundProvider__Class *klass;
  struct MonitorData *monitor;
  struct ConditionBasedSoundProvider__Fields fields;
};
struct ConditionBasedSoundProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSound;
};
struct ConditionBasedSoundProvider__StaticFields {
};
struct ConditionBasedSoundProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConditionBasedSoundProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConditionBasedSoundProvider__VTable vtable;
};

struct DamageBasedSoundProvider_c {
  struct DamageBasedSoundProvider_c__Class *klass;
  struct MonitorData *monitor;
};
struct DamageBasedSoundProvider_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DamageBasedSoundProvider_c__StaticFields {
  struct DamageBasedSoundProvider_c * __9;
};
struct DamageBasedSoundProvider_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageBasedSoundProvider_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageBasedSoundProvider_c__VTable vtable;
};

enum EnvironmentType__Enum : int32_t {
  EnvironmentType__Enum_MyngolyForest = 0,
  EnvironmentType__Enum_MyngolyCaverns = 1,
};
struct EnvironmentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EnvironmentType__Enum value;
};
struct __declspec(align(8)) EnvironmentSoundPair__Fields {
  enum EnvironmentType__Enum EnvironmentType;
  struct SoundProvider * SoundProvider;
};
struct EnvironmentSoundPair {
  struct EnvironmentSoundPair__Class *klass;
  struct MonitorData *monitor;
  struct EnvironmentSoundPair__Fields fields;
};
struct EnvironmentSoundPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnvironmentSoundPair__StaticFields {
};
struct EnvironmentSoundPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnvironmentSoundPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnvironmentSoundPair__VTable vtable;
};

struct EnvrionmentBasedSoundProvider__Fields {
  struct SoundProvider__Fields _;
  struct List_1_EnvironmentSoundPair_ * Sounds;
};
struct EnvrionmentBasedSoundProvider {
  struct EnvrionmentBasedSoundProvider__Class *klass;
  struct MonitorData *monitor;
  struct EnvrionmentBasedSoundProvider__Fields fields;
};
struct __declspec(align(8)) List_1_EnvironmentSoundPair___Fields {
  struct EnvironmentSoundPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_EnvironmentSoundPair_ {
  struct List_1_EnvironmentSoundPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_EnvironmentSoundPair___Fields fields;
};
struct EnvironmentSoundPair__Array {
  struct EnvironmentSoundPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EnvironmentSoundPair * vector[32];
};
struct IEnumerator_1_EnvironmentSoundPair_ {
  struct IEnumerator_1_EnvironmentSoundPair___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_EnvironmentSoundPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_EnvironmentSoundPair___StaticFields {
};
struct IEnumerator_1_EnvironmentSoundPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_EnvironmentSoundPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_EnvironmentSoundPair___VTable vtable;
};
struct List_1_EnvironmentSoundPair___VTable {
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
struct List_1_EnvironmentSoundPair___StaticFields {
  struct EnvironmentSoundPair__Array * _emptyArray;
};
struct List_1_EnvironmentSoundPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_EnvironmentSoundPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_EnvironmentSoundPair___VTable vtable;
};
struct EnvrionmentBasedSoundProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSound;
};
struct EnvrionmentBasedSoundProvider__StaticFields {
};
struct EnvrionmentBasedSoundProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnvrionmentBasedSoundProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnvrionmentBasedSoundProvider__VTable vtable;
};

struct PhysicsMaterialManager__Fields {
  struct MonoBehaviour__Fields _;
  struct PhysicMaterial * Wood;
  struct PhysicMaterial * Grass;
  struct PhysicMaterial * Water;
  struct PhysicMaterial * Rock;
  struct PhysicMaterial * Ice;
  struct PhysicMaterial * RollingRock;
  struct PhysicMaterial * PushableBlockMoving;
  struct PhysicMaterial * Mushroom;
  struct PhysicMaterial * Sand;
  struct PhysicMaterial * LightDarkPlatform;
  struct PhysicMaterial * MovingLightDarkPlatform;
  struct PhysicMaterial * DiggableSand;
  struct PhysicMaterial * Ceramic;
  struct PhysicMaterial * Snow;
  struct PhysicMaterial * DiggableSnow;
  struct PhysicMaterial * RockSnow;
  struct PhysicMaterial * WoodSnow;
  struct PhysicMaterial * Insect;
  struct PhysicMaterial * LagoonMoss;
  struct PhysicMaterial * Bone;
  struct PhysicMaterial * SandPlatform;
  struct PhysicMaterial * Ash;
  struct PhysicMaterial * Metal;
  struct PhysicMaterial * FrogTongue;
  struct PhysicMaterial * Plank;
  struct PhysicMaterial * Moss;
  struct PhysicMaterial * RopeBridge;
  struct SurfaceToWwiseSwitchData * SurfaceToWwiseSwitchData;
  struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * m_physicsToMaterial;
  struct HashSet_1_UnityEngine_PhysicMaterial_ * m_unsetMaterialsLogged;
  struct Vector3 m_prevSoundHostPosition;
  int32_t m_distanceUpdateCooldownCounter;
};
struct PhysicsMaterialManager {
  struct PhysicsMaterialManager__Class *klass;
  struct MonitorData *monitor;
  struct PhysicsMaterialManager__Fields fields;
};
struct SurfaceToWwiseSwitchData__Fields {
  struct ScriptableObject__Fields _;
  struct RTPC * DistanceToWaterRtpc;
  float DistanceToWaterDivisor;
  struct RTPC * DistanceToSandRtpc;
  float DistanceToSandDivisor;
  struct RTPC * RainingStateRtpc;
  struct Switch_1 * None;
  struct Switch_1 * Wood;
  struct Switch_1 * Grass;
  struct Switch_1 * Water;
  struct Switch_1 * Rock;
  struct Switch_1 * Ice;
  struct Switch_1 * Mushroom;
  struct Switch_1 * Sand;
  struct Switch_1 * LightDarkPlatform;
  struct Switch_1 * MovingLightDarkPlatform;
  struct Switch_1 * Stone;
  struct Switch_1 * DiggableSand;
  struct Switch_1 * Ceramic;
  struct Switch_1 * Snow;
  struct Switch_1 * DiggableSnow;
  struct Switch_1 * RockSnow;
  struct Switch_1 * WoodSnow;
  struct Switch_1 * Insect;
  struct Switch_1 * LagoonMoss;
  struct Switch_1 * Bone;
  struct Switch_1 * SandPlatform;
  struct Switch_1 * Ash;
  struct Switch_1 * Metal;
  struct Switch_1 * Plank;
  struct Switch_1 * Moss;
  struct Switch_1 * RopeBridge;
};}