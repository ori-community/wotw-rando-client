namespace app {
struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg_ {
  struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) BadTriQueue__Fields {
  struct BadTriangle__Array * queuefront;
  struct BadTriangle__Array * queuetail;
  struct Int32__Array * nextnonemptyq;
  int32_t firstnonemptyq;
  int32_t count;
};
struct BadTriQueue {
  struct BadTriQueue__Class *klass;
  struct MonitorData *monitor;
  struct BadTriQueue__Fields fields;
};
struct __declspec(align(8)) BadTriangle__Fields {
  struct Otri poortri;
  double key;
  struct Vertex * org;
  struct Vertex * dest;
  struct Vertex * apex;
  struct BadTriangle * next;
};
struct BadTriangle {
  struct BadTriangle__Class *klass;
  struct MonitorData *monitor;
  struct BadTriangle__Fields fields;
};
struct BadTriangle__Array {
  struct BadTriangle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BadTriangle * vector[32];
};
struct __declspec(align(8)) NewLocation__Fields {
  struct IPredicates * predicates;
  struct Mesh_1 * mesh;
  struct Behavior * behavior;
  struct Double__Array * petalx;
  struct Double__Array * petaly;
  struct Double__Array * petalr;
  struct Double__Array * wedges;
  struct Double__Array * initialConvexPoly;
  struct Double__Array * points_p;
  struct Double__Array * points_q;
  struct Double__Array * points_r;
  struct Double__Array * poly1;
  struct Double__Array * poly2;
  struct Double__Array__Array * polys;
};
struct NewLocation {
  struct NewLocation__Class *klass;
  struct MonitorData *monitor;
  struct NewLocation__Fields fields;
};
struct Double__Array__Array {
  struct Double__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Double__Array * vector[32];
};
struct __declspec(align(8)) Stack_1_TriangleNet_Topology_Otri___Fields {
  struct Otri__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_TriangleNet_Topology_Otri_ {
  struct Stack_1_TriangleNet_Topology_Otri___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_TriangleNet_Topology_Otri___Fields fields;
};
struct IEnumerator_1_TriangleNet_Topology_Otri_ {
  struct IEnumerator_1_TriangleNet_Topology_Otri___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ {
  struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct SubSegment * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields fields;
};
struct SubSegment__Array {
  struct SubSegment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SubSegment * vector[32];
};
struct IEnumerator_1_TriangleNet_Topology_SubSegment_ {
  struct IEnumerator_1_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_TriangleNet_Topology_SubSegment_ {
  struct ICollection_1_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ {
  int32_t key;
  struct SubSegment * value;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Boxed {
  struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ fields;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Array {
  struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_TriangleNet_Topology_SubSegment_ {
  struct IEnumerable_1_TriangleNet_Topology_SubSegment___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_ {
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Vertex * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields {
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields fields;
};
struct IEnumerator_1_TriangleNet_Geometry_Vertex_ {
  struct IEnumerator_1_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_TriangleNet_Geometry_Vertex_ {
  struct ICollection_1_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ {
  int32_t key;
  struct Vertex * value;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Boxed {
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ fields;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Array {
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_TriangleNet_Geometry_Vertex_ {
  struct IEnumerable_1_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_TriangleNet_Geometry_Point___Fields {
  struct Point__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Geometry_Point_ {
  struct List_1_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Geometry_Point___Fields fields;
};
struct Point__Array {
  struct Point__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Point * vector[32];
};
struct IEnumerator_1_TriangleNet_Geometry_Point_ {
  struct IEnumerator_1_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_TriangleNet_Geometry_RegionPointer___Fields {
  struct RegionPointer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Geometry_RegionPointer_ {
  struct List_1_TriangleNet_Geometry_RegionPointer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Geometry_RegionPointer___Fields fields;
};
struct __declspec(align(8)) RegionPointer__Fields {
  struct Point * point;
  int32_t id;
  double area;
};
struct RegionPointer {
  struct RegionPointer__Class *klass;
  struct MonitorData *monitor;
  struct RegionPointer__Fields fields;
};
struct RegionPointer__Array {
  struct RegionPointer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RegionPointer * vector[32];
};
struct IEnumerator_1_TriangleNet_Geometry_RegionPointer_ {
  struct IEnumerator_1_TriangleNet_Geometry_RegionPointer___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Rectangle__Fields {
  double xmin;
  double ymin;
  double xmax;
  double ymax;
};
struct Rectangle {
  struct Rectangle__Class *klass;
  struct MonitorData *monitor;
  struct Rectangle__Fields fields;
};
struct __declspec(align(8)) TriangleLocator__Fields {
  struct TriangleSampler * sampler;
  struct Mesh_1 * mesh;
  struct IPredicates * predicates;
  struct Otri recenttri;
};
struct TriangleLocator {
  struct TriangleLocator__Class *klass;
  struct MonitorData *monitor;
  struct TriangleLocator__Fields fields;
};
struct __declspec(align(8)) TriangleSampler__Fields {
  struct Random * random;
  struct Mesh_1 * mesh;
  int32_t samples;
  int32_t triangleCount;
};
struct TriangleSampler {
  struct TriangleSampler__Class *klass;
  struct MonitorData *monitor;
  struct TriangleSampler__Fields fields;
};
struct IEnumerable_1_TriangleNet_Geometry_Edge_ {
  struct IEnumerable_1_TriangleNet_Geometry_Edge___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_TriangleNet_Topology_Triangle_ {
  struct ICollection_1_TriangleNet_Topology_Triangle___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_TriangleNet_Geometry_Point_ {
  struct IList_1_TriangleNet_Geometry_Point___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) QualityOptions__Fields {
  double _MaximumAngle_k__BackingField;
  double _MinimumAngle_k__BackingField;
  double _MaximumArea_k__BackingField;
  struct Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_ * _UserTest_k__BackingField;
  bool _VariableArea_k__BackingField;
  int32_t _SteinerPoints_k__BackingField;
};
struct QualityOptions {
  struct QualityOptions__Class *klass;
  struct MonitorData *monitor;
  struct QualityOptions__Fields fields;
};
struct BadSubseg__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BadSubseg__StaticFields {
};
struct BadSubseg__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BadSubseg__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BadSubseg__VTable vtable;
};
struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___StaticFields {
};
struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___VTable vtable;
};
struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___StaticFields {
};
struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___VTable vtable;
};
struct BadTriangle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BadTriangle__StaticFields {
};
struct BadTriangle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BadTriangle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BadTriangle__VTable vtable;
};
struct BadTriQueue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BadTriQueue__StaticFields {
};
struct BadTriQueue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BadTriQueue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BadTriQueue__VTable vtable;
};
struct NewLocation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NewLocation__StaticFields {
};
struct NewLocation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NewLocation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NewLocation__VTable vtable;
};
struct QualityMesher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QualityMesher__StaticFields {
};
struct QualityMesher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QualityMesher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QualityMesher__VTable vtable;
};
struct IEnumerator_1_TriangleNet_Topology_Otri___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Topology_Otri___StaticFields {
};
struct IEnumerator_1_TriangleNet_Topology_Otri___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Topology_Otri___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Topology_Otri___VTable vtable;
};
struct Stack_1_TriangleNet_Topology_Otri___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Stack_1_TriangleNet_Topology_Otri___StaticFields {
};
struct Stack_1_TriangleNet_Topology_Otri___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_TriangleNet_Topology_Otri___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_TriangleNet_Topology_Otri___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct IEnumerator_1_TriangleNet_Topology_SubSegment___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Topology_SubSegment___StaticFields {
};
struct IEnumerator_1_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct ICollection_1_TriangleNet_Topology_SubSegment___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_TriangleNet_Topology_SubSegment___StaticFields {
};
struct ICollection_1_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___StaticFields {
};
struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct IEnumerable_1_TriangleNet_Topology_SubSegment___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_TriangleNet_Topology_SubSegment___StaticFields {
};
struct IEnumerable_1_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___VTable {
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
struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___StaticFields {
};
struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct IEnumerator_1_TriangleNet_Geometry_Vertex___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Geometry_Vertex___StaticFields {
};
struct IEnumerator_1_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct ICollection_1_TriangleNet_Geometry_Vertex___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_TriangleNet_Geometry_Vertex___StaticFields {
};
struct ICollection_1_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___StaticFields {
};
struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct IEnumerable_1_TriangleNet_Geometry_Vertex___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_TriangleNet_Geometry_Vertex___StaticFields {
};
struct IEnumerable_1_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___VTable {
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
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___StaticFields {
};
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct IEnumerator_1_TriangleNet_Geometry_Point___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Geometry_Point___StaticFields {
};
struct IEnumerator_1_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Geometry_Point___VTable vtable;
};
struct List_1_TriangleNet_Geometry_Point___VTable {
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
struct List_1_TriangleNet_Geometry_Point___StaticFields {
  struct Point__Array * _emptyArray;
};
struct List_1_TriangleNet_Geometry_Point___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Geometry_Point___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Geometry_Point___VTable vtable;
};
struct RegionPointer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegionPointer__StaticFields {
};}