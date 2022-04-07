namespace app {
struct DefaultVoronoiFactory__StaticFields {
};
struct DefaultVoronoiFactory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultVoronoiFactory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultVoronoiFactory__VTable vtable;
};

struct StandardVoronoi__Fields {
  struct VoronoiBase__Fields _;
};
struct StandardVoronoi {
  struct StandardVoronoi__Class *klass;
  struct MonitorData *monitor;
  struct StandardVoronoi__Fields fields;
};
struct StandardVoronoi__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsConsistent;
  VirtualInvokeData EnumerateEdges;
  VirtualInvokeData ConnectEdges;
};
struct StandardVoronoi__StaticFields {
};
struct StandardVoronoi__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StandardVoronoi__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StandardVoronoi__VTable vtable;
};

struct __declspec(align(8)) BoundedVoronoiLegacy__Fields {
  struct IPredicates * predicates;
  struct Mesh_1 * mesh;
  struct Point__Array * points;
  struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * regions;
  struct List_1_TriangleNet_Geometry_Point_ * segPoints;
  int32_t segIndex;
  struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * subsegMap;
  bool includeBoundary;
};
struct BoundedVoronoiLegacy {
  struct BoundedVoronoiLegacy__Class *klass;
  struct MonitorData *monitor;
  struct BoundedVoronoiLegacy__Fields fields;
};
struct __declspec(align(8)) List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields {
  struct VoronoiRegion__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields fields;
};
struct __declspec(align(8)) VoronoiRegion__Fields {
  int32_t id;
  struct Point * generator;
  struct List_1_TriangleNet_Geometry_Point_ * vertices;
  bool bounded;
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * neighbors;
};
struct VoronoiRegion {
  struct VoronoiRegion__Class *klass;
  struct MonitorData *monitor;
  struct VoronoiRegion__Fields fields;
};
struct VoronoiRegion__Array {
  struct VoronoiRegion__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VoronoiRegion * vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct VoronoiRegion * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Fields fields;
};
struct IEnumerator_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct IEnumerator_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  int32_t key;
  struct VoronoiRegion * value;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Boxed {
  struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ fields;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Array {
  struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
  struct IEnumerable_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct IEnumerator_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct IEnumerator_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct IEnumerable_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct IEnumerable_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
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
struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
};
struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct VoronoiRegion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VoronoiRegion__StaticFields {
};
struct VoronoiRegion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VoronoiRegion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VoronoiRegion__VTable vtable;
};
struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable {
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
struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields {
  struct VoronoiRegion__Array * _emptyArray;
};
struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Voronoi_Legacy_VoronoiRegion___VTable vtable;
};
struct BoundedVoronoiLegacy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Points;
  VirtualInvokeData get_Regions;
  VirtualInvokeData get_Edges;
};
struct BoundedVoronoiLegacy__StaticFields {
};
struct BoundedVoronoiLegacy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BoundedVoronoiLegacy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BoundedVoronoiLegacy__VTable vtable;
};

struct __declspec(align(8)) SimpleVoronoi__Fields {
  struct IPredicates * predicates;
  struct Mesh_1 * mesh;
  struct Point__Array * points;
  struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * regions;
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ * rayPoints;
  int32_t rayIndex;
  struct Rectangle * bounds;
};
struct SimpleVoronoi {
  struct SimpleVoronoi__Class *klass;
  struct MonitorData *monitor;
  struct SimpleVoronoi__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_TriangleNet_Geometry_Point___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ {
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Point * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___Fields fields;
};
struct ICollection_1_TriangleNet_Geometry_Point_ {
  struct ICollection_1_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point_ {
  int32_t key;
  struct Point * value;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___Boxed {
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point_ fields;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___Array {
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_TriangleNet_Geometry_Point_ {
  struct IEnumerable_1_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Point___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Point___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Point___VTable vtable;
};
struct ICollection_1_TriangleNet_Geometry_Point___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_TriangleNet_Geometry_Point___StaticFields {
};
struct ICollection_1_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_TriangleNet_Geometry_Point___VTable vtable;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___StaticFields {
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Point___VTable vtable;
};
struct IEnumerable_1_TriangleNet_Geometry_Point___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_TriangleNet_Geometry_Point___StaticFields {
};
struct IEnumerable_1_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_TriangleNet_Geometry_Point___VTable vtable;
};
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point___VTable {
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
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point___StaticFields {
};
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point___VTable vtable;
};
struct SimpleVoronoi__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Points;
  VirtualInvokeData get_Regions;
  VirtualInvokeData get_Edges;
};
struct SimpleVoronoi__StaticFields {
};
struct SimpleVoronoi__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleVoronoi__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleVoronoi__VTable vtable;
};

struct IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge_ {
  struct IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge___StaticFields {
};
struct IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge___VTable vtable;
};

struct __declspec(align(8)) Face_EnumerateEdges_d_18__Fields {
  int32_t __1__state;
  struct HalfEdge * __2__current;
  int32_t __l__initialThreadId;
  struct Face * __4__this;
  struct HalfEdge * _edge_5__2;
  int32_t _first_5__3;
};
struct Face_EnumerateEdges_d_18 {
  struct Face_EnumerateEdges_d_18__Class *klass;
  struct MonitorData *monitor;
  struct Face_EnumerateEdges_d_18__Fields fields;
};
struct Face_EnumerateEdges_d_18__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TriangleNet_Topology_DCEL_HalfEdge__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_TriangleNet_Topology_DCEL_HalfEdge__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct Face_EnumerateEdges_d_18__StaticFields {
};
struct Face_EnumerateEdges_d_18__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Face_EnumerateEdges_d_18__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Face_EnumerateEdges_d_18__VTable vtable;
};

struct __declspec(align(8)) Vertex_EnumerateEdges_d_6__Fields {
  int32_t __1__state;
  struct HalfEdge * __2__current;
  int32_t __l__initialThreadId;
  struct Vertex_1 * __4__this;
  struct HalfEdge * _edge_5__2;
  int32_t _first_5__3;
};
struct Vertex_EnumerateEdges_d_6 {
  struct Vertex_EnumerateEdges_d_6__Class *klass;
  struct MonitorData *monitor;
  struct Vertex_EnumerateEdges_d_6__Fields fields;
};
struct Vertex_EnumerateEdges_d_6__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TriangleNet_Topology_DCEL_HalfEdge__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_TriangleNet_Topology_DCEL_HalfEdge__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct Vertex_EnumerateEdges_d_6__StaticFields {
};
struct Vertex_EnumerateEdges_d_6__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vertex_EnumerateEdges_d_6__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vertex_EnumerateEdges_d_6__VTable vtable;
};

struct __declspec(align(8)) AdjacencyMatrix__Fields {
  int32_t nnz;
  struct Int32__Array * pcol;
  struct Int32__Array * irow;
  int32_t N;
};
struct AdjacencyMatrix {
  struct AdjacencyMatrix__Class *klass;
  struct MonitorData *monitor;
  struct AdjacencyMatrix__Fields fields;
};
struct AdjacencyMatrix__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AdjacencyMatrix__StaticFields {
};
struct AdjacencyMatrix__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdjacencyMatrix__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdjacencyMatrix__VTable vtable;
};

struct __declspec(align(8)) CuthillMcKee__Fields {
  struct AdjacencyMatrix * matrix;
};
struct CuthillMcKee {
  struct CuthillMcKee__Class *klass;
  struct MonitorData *monitor;
  struct CuthillMcKee__Fields fields;
};
struct CuthillMcKee__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CuthillMcKee__StaticFields {
};
struct CuthillMcKee__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CuthillMcKee__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CuthillMcKee__VTable vtable;
};

struct IPolygon {
  struct IPolygon__Class *klass;
  struct MonitorData *monitor;
};
struct IPolygon__VTable {
  VirtualInvokeData get_Points;
  VirtualInvokeData get_Segments;
  VirtualInvokeData get_Holes;
  VirtualInvokeData get_Regions;
  VirtualInvokeData get_HasPointMarkers;
  VirtualInvokeData set_HasPointMarkers;
  VirtualInvokeData get_HasSegmentMarkers;
  VirtualInvokeData set_HasSegmentMarkers;
  VirtualInvokeData AddContour;
  VirtualInvokeData AddContour_1;
  VirtualInvokeData Bounds;
  VirtualInvokeData Add;
  VirtualInvokeData Add_1;
  VirtualInvokeData Add_2;
  VirtualInvokeData Add_3;
  VirtualInvokeData Add_4;
};
struct IPolygon__StaticFields {
};
struct IPolygon__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPolygon__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPolygon__VTable vtable;
};

struct __declspec(align(8)) QualityMeasure__Fields {
  struct QualityMeasure_AreaMeasure * areaMeasure;
  struct QualityMeasure_AlphaMeasure * alphaMeasure;
  struct QualityMeasure_Q_Measure * qMeasure;
  struct Mesh_1 * mesh;
};
struct QualityMeasure {
  struct QualityMeasure__Class *klass;
  struct MonitorData *monitor;
  struct QualityMeasure__Fields fields;
};
struct __declspec(align(8)) QualityMeasure_AreaMeasure__Fields {
  double area_min;
  double area_max;
  double area_total;
  int32_t area_zero;
};
struct QualityMeasure_AreaMeasure {
  struct QualityMeasure_AreaMeasure__Class *klass;
  struct MonitorData *monitor;
  struct QualityMeasure_AreaMeasure__Fields fields;
};
struct __declspec(align(8)) QualityMeasure_AlphaMeasure__Fields {
  double alpha_min;
  double alpha_max;
  double alpha_ave;
  double alpha_area;
};
struct QualityMeasure_AlphaMeasure {
  struct QualityMeasure_AlphaMeasure__Class *klass;
  struct MonitorData *monitor;
  struct QualityMeasure_AlphaMeasure__Fields fields;
};
struct __declspec(align(8)) QualityMeasure_Q_Measure__Fields {
  double q_min;
  double q_max;
  double q_ave;
  double q_area;
};
struct QualityMeasure_Q_Measure {
  struct QualityMeasure_Q_Measure__Class *klass;
  struct MonitorData *monitor;
  struct QualityMeasure_Q_Measure__Fields fields;
};
struct QualityMeasure_AreaMeasure__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QualityMeasure_AreaMeasure__StaticFields {
};
struct QualityMeasure_AreaMeasure__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QualityMeasure_AreaMeasure__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QualityMeasure_AreaMeasure__VTable vtable;
};}