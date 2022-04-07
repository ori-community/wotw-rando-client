namespace app {
struct RegionIterator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegionIterator_c__StaticFields {
  struct RegionIterator_c * __9;
  struct Func_2_TriangleNet_Topology_SubSegment_Boolean_ * __9__3_0;
};
struct RegionIterator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegionIterator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegionIterator_c__VTable vtable;
};

struct __declspec(align(8)) VertexCirculator__Fields {
  struct List_1_TriangleNet_Topology_Otri_ * cache;
};
struct VertexCirculator {
  struct VertexCirculator__Class *klass;
  struct MonitorData *monitor;
  struct VertexCirculator__Fields fields;
};
struct VertexCirculator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VertexCirculator__StaticFields {
};
struct VertexCirculator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VertexCirculator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VertexCirculator__VTable vtable;
};

struct IEnumerable_1_TriangleNet_Geometry_ITriangle_ {
  struct IEnumerable_1_TriangleNet_Geometry_ITriangle___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_TriangleNet_Geometry_ITriangle___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_TriangleNet_Geometry_ITriangle___StaticFields {
};
struct IEnumerable_1_TriangleNet_Geometry_ITriangle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_TriangleNet_Geometry_ITriangle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_TriangleNet_Geometry_ITriangle___VTable vtable;
};

struct List_1_T_Enumerator_TriangleNet_Topology_Otri_ {
  struct List_1_TriangleNet_Topology_Otri_ * list;
  int32_t index;
  int32_t version;
  struct Otri current;
};
struct List_1_T_Enumerator_TriangleNet_Topology_Otri___Boxed {
  struct List_1_T_Enumerator_TriangleNet_Topology_Otri___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_TriangleNet_Topology_Otri_ fields;
};
struct __declspec(align(8)) VertexCirculator_EnumerateVertices_d_2__Fields {
  int32_t __1__state;
  struct Vertex * __2__current;
  int32_t __l__initialThreadId;
  struct VertexCirculator * __4__this;
  struct Vertex * vertex;
  struct Vertex * __3__vertex;
  struct List_1_T_Enumerator_TriangleNet_Topology_Otri_ __7__wrap1;
};
struct VertexCirculator_EnumerateVertices_d_2 {
  struct VertexCirculator_EnumerateVertices_d_2__Class *klass;
  struct MonitorData *monitor;
  struct VertexCirculator_EnumerateVertices_d_2__Fields fields;
};
struct List_1_T_Enumerator_TriangleNet_Topology_Otri___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_TriangleNet_Topology_Otri___StaticFields {
};
struct List_1_T_Enumerator_TriangleNet_Topology_Otri___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_TriangleNet_Topology_Otri___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_TriangleNet_Topology_Otri___VTable vtable;
};
struct VertexCirculator_EnumerateVertices_d_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TriangleNet_Geometry_Vertex__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_TriangleNet_Geometry_Vertex__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct VertexCirculator_EnumerateVertices_d_2__StaticFields {
};
struct VertexCirculator_EnumerateVertices_d_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VertexCirculator_EnumerateVertices_d_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VertexCirculator_EnumerateVertices_d_2__VTable vtable;
};

struct __declspec(align(8)) VertexCirculator_EnumerateTriangles_d_3__Fields {
  int32_t __1__state;
  struct ITriangle * __2__current;
  int32_t __l__initialThreadId;
  struct VertexCirculator * __4__this;
  struct Vertex * vertex;
  struct Vertex * __3__vertex;
  struct List_1_T_Enumerator_TriangleNet_Topology_Otri_ __7__wrap1;
};
struct VertexCirculator_EnumerateTriangles_d_3 {
  struct VertexCirculator_EnumerateTriangles_d_3__Class *klass;
  struct MonitorData *monitor;
  struct VertexCirculator_EnumerateTriangles_d_3__Fields fields;
};
struct IEnumerator_1_TriangleNet_Geometry_ITriangle_ {
  struct IEnumerator_1_TriangleNet_Geometry_ITriangle___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_TriangleNet_Geometry_ITriangle___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Geometry_ITriangle___StaticFields {
};
struct IEnumerator_1_TriangleNet_Geometry_ITriangle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Geometry_ITriangle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Geometry_ITriangle___VTable vtable;
};
struct VertexCirculator_EnumerateTriangles_d_3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TriangleNet_Geometry_ITriangle__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_TriangleNet_Geometry_ITriangle__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct VertexCirculator_EnumerateTriangles_d_3__StaticFields {
};
struct VertexCirculator_EnumerateTriangles_d_3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VertexCirculator_EnumerateTriangles_d_3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VertexCirculator_EnumerateTriangles_d_3__VTable vtable;
};

struct __declspec(align(8)) Dwyer__Fields {
  struct IPredicates * predicates;
  bool UseDwyer;
  struct Vertex__Array * sortarray;
  struct Mesh_1 * mesh;
};
struct Dwyer {
  struct Dwyer__Class *klass;
  struct MonitorData *monitor;
  struct Dwyer__Fields fields;
};
struct Dwyer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Triangulate;
};
struct Dwyer__StaticFields {
};
struct Dwyer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dwyer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dwyer__VTable vtable;
};

struct __declspec(align(8)) Incremental__Fields {
  struct Mesh_1 * mesh;
};
struct Incremental {
  struct Incremental__Class *klass;
  struct MonitorData *monitor;
  struct Incremental__Fields fields;
};
struct Incremental__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Triangulate;
};
struct Incremental__StaticFields {
};
struct Incremental__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Incremental__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Incremental__VTable vtable;
};

struct __declspec(align(8)) SweepLine__Fields {
  struct IPredicates * predicates;
  struct Mesh_1 * mesh;
  double xminextreme;
  struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode_ * splaynodes;
};
struct SweepLine {
  struct SweepLine__Class *klass;
  struct MonitorData *monitor;
  struct SweepLine__Fields fields;
};
struct __declspec(align(8)) List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___Fields {
  struct SweepLine_SplayNode__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode_ {
  struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___Fields fields;
};
struct __declspec(align(8)) SweepLine_SplayNode__Fields {
  struct Otri keyedge;
  struct Vertex * keydest;
  struct SweepLine_SplayNode * lchild;
  struct SweepLine_SplayNode * rchild;
};
struct SweepLine_SplayNode {
  struct SweepLine_SplayNode__Class *klass;
  struct MonitorData *monitor;
  struct SweepLine_SplayNode__Fields fields;
};
struct SweepLine_SplayNode__Array {
  struct SweepLine_SplayNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SweepLine_SplayNode * vector[32];
};
struct IEnumerator_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode_ {
  struct IEnumerator_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___Class *klass;
  struct MonitorData *monitor;
};
struct SweepLine_SplayNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SweepLine_SplayNode__StaticFields {
};
struct SweepLine_SplayNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SweepLine_SplayNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SweepLine_SplayNode__VTable vtable;
};
struct IEnumerator_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___StaticFields {
};
struct IEnumerator_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___VTable vtable;
};
struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___VTable {
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
struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___StaticFields {
  struct SweepLine_SplayNode__Array * _emptyArray;
};
struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode___VTable vtable;
};
struct SweepLine__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Triangulate;
};
struct SweepLine__StaticFields {
  int32_t randomseed;
  int32_t SAMPLERATE;
};
struct SweepLine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SweepLine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SweepLine__VTable vtable;
};

struct __declspec(align(8)) SweepLine_SweepEvent__Fields {
  double xkey;
  double ykey;
  struct Vertex * vertexEvent;
  struct Otri otriEvent;
  int32_t heapposition;
};
struct SweepLine_SweepEvent {
  struct SweepLine_SweepEvent__Class *klass;
  struct MonitorData *monitor;
  struct SweepLine_SweepEvent__Fields fields;
};
struct SweepLine_SweepEvent__Array {
  struct SweepLine_SweepEvent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SweepLine_SweepEvent * vector[32];
};
struct SweepLine_SweepEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SweepLine_SweepEvent__StaticFields {
};
struct SweepLine_SweepEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SweepLine_SweepEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SweepLine_SweepEvent__VTable vtable;
};

struct SweepLine_SweepEventVertex__Fields {
  struct Vertex__Fields _;
  struct SweepLine_SweepEvent * evt;
};
struct SweepLine_SweepEventVertex {
  struct SweepLine_SweepEventVertex__Class *klass;
  struct MonitorData *monitor;
  struct SweepLine_SweepEventVertex__Fields fields;
};
struct SweepLine_SweepEventVertex__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CompareTo;
  VirtualInvokeData Equals_1;
};
struct SweepLine_SweepEventVertex__StaticFields {
};
struct SweepLine_SweepEventVertex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SweepLine_SweepEventVertex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SweepLine_SweepEventVertex__VTable vtable;
};

struct __declspec(align(8)) DebugWriter__Fields {
  int32_t iteration;
  struct String * session;
  struct StreamWriter * stream;
  struct String * tmpFile;
  struct Int32__Array * vertices;
  int32_t triangles;
};
struct DebugWriter {
  struct DebugWriter__Class *klass;
  struct MonitorData *monitor;
  struct DebugWriter__Fields fields;
};
struct DebugWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DebugWriter__StaticFields {
  struct NumberFormatInfo * nfi;
  struct DebugWriter * instance;
};
struct DebugWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugWriter__VTable vtable;
};

struct IFileFormat {
  struct IFileFormat__Class *klass;
  struct MonitorData *monitor;
};
struct IFileFormat__VTable {
  VirtualInvokeData IsSupported;
};
struct IFileFormat__StaticFields {
};
struct IFileFormat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IFileFormat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IFileFormat__VTable vtable;
};

struct __declspec(align(8)) InputTriangle__Fields {
  struct Int32__Array * vertices;
  int32_t label;
  double area;
};
struct InputTriangle {
  struct InputTriangle__Class *klass;
  struct MonitorData *monitor;
  struct InputTriangle__Fields fields;
};
struct InputTriangle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ID;
  VirtualInvokeData set_ID;
  VirtualInvokeData get_Label;
  VirtualInvokeData set_Label;
  VirtualInvokeData get_Area;
  VirtualInvokeData set_Area;
  VirtualInvokeData GetVertex;
  VirtualInvokeData GetVertexID;
  VirtualInvokeData GetNeighbor;
  VirtualInvokeData GetNeighborID;
  VirtualInvokeData GetSegment;
};
struct InputTriangle__StaticFields {
};
struct InputTriangle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputTriangle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputTriangle__VTable vtable;
};

struct TriangleFormat {
  struct TriangleFormat__Class *klass;
  struct MonitorData *monitor;
};
struct TriangleFormat__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Read;
  VirtualInvokeData Write;
  VirtualInvokeData Write_1;
  VirtualInvokeData IsSupported;
  VirtualInvokeData Import;
  VirtualInvokeData Write_2;
  VirtualInvokeData Write_3;
};
struct TriangleFormat__StaticFields {
};
struct TriangleFormat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriangleFormat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriangleFormat__VTable vtable;
};

struct __declspec(align(8)) TriangleReader__Fields {
  int32_t startIndex;
};
struct TriangleReader {
  struct TriangleReader__Class *klass;
  struct MonitorData *monitor;
  struct TriangleReader__Fields fields;
};
struct TriangleReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriangleReader__StaticFields {
  struct NumberFormatInfo * nfi;
};
struct TriangleReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriangleReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriangleReader__VTable vtable;
};

struct __declspec(align(8)) List_1_TriangleNet_Geometry_ITriangle___Fields {
  struct ITriangle__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Geometry_ITriangle_ {
  struct List_1_TriangleNet_Geometry_ITriangle___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Geometry_ITriangle___Fields fields;
};
struct List_1_TriangleNet_Geometry_ITriangle___VTable {
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
struct List_1_TriangleNet_Geometry_ITriangle___StaticFields {
  struct ITriangle__Array * _emptyArray;
};
struct List_1_TriangleNet_Geometry_ITriangle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Geometry_ITriangle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Geometry_ITriangle___VTable vtable;
};

struct __declspec(align(8)) List_1_TriangleNet_Geometry_Edge___Fields {
  struct Edge__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Geometry_Edge_ {
  struct List_1_TriangleNet_Geometry_Edge___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Geometry_Edge___Fields fields;
};
struct Edge__Array {
  struct Edge__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Edge * vector[32];
};
struct List_1_TriangleNet_Geometry_Edge___VTable {
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
struct List_1_TriangleNet_Geometry_Edge___StaticFields {
  struct Edge__Array * _emptyArray;
};
struct List_1_TriangleNet_Geometry_Edge___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Geometry_Edge___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Geometry_Edge___VTable vtable;
};

struct TriangleWriter {
  struct TriangleWriter__Class *klass;
  struct MonitorData *monitor;
};
struct TriangleWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriangleWriter__StaticFields {
  struct NumberFormatInfo * nfi;
};
struct TriangleWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriangleWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriangleWriter__VTable vtable;
};

struct __declspec(align(8)) Segment__Fields {
  struct Vertex * v0;
  struct Vertex * v1;
  int32_t label;
};
struct Segment {
  struct Segment__Class *klass;
  struct MonitorData *monitor;
  struct Segment__Fields fields;
};
struct Segment__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetVertex;
  VirtualInvokeData GetTriangle;
  VirtualInvokeData get_P0;
  VirtualInvokeData get_P1;
  VirtualInvokeData get_Label;
};
struct Segment__StaticFields {
};
struct Segment__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Segment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Segment__VTable vtable;
};

struct __declspec(align(8)) AudioExtensionDefinition__Fields {
  struct String * assemblyName;
  struct String * extensionNamespace;
  struct String * extensionTypeName;
  struct Type * extensionType;
};
struct AudioExtensionDefinition {
  struct AudioExtensionDefinition__Class *klass;
  struct MonitorData *monitor;
  struct AudioExtensionDefinition__Fields fields;
};
struct AudioExtensionDefinition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AudioExtensionDefinition__StaticFields {
};
struct AudioExtensionDefinition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioExtensionDefinition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioExtensionDefinition__VTable vtable;
};

struct AudioListenerExtension__Fields {
  struct ScriptableObject__Fields _;
  struct AudioListener * m_audioListener;
};
struct AudioListenerExtension {
  struct AudioListenerExtension__Class *klass;
  struct MonitorData *monitor;
  struct AudioListenerExtension__Fields fields;
};
struct AudioBehaviour__Fields {
  struct Behaviour__Fields _;
};
struct AudioBehaviour {
  struct AudioBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct AudioBehaviour__Fields fields;
};
struct AudioListener__Fields {
  struct AudioBehaviour__Fields _;
  struct AudioListenerExtension * spatializerExtension;
};
struct AudioListener {
  struct AudioListener__Class *klass;
  struct MonitorData *monitor;
  struct AudioListener__Fields fields;
};
struct AudioBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AudioBehaviour__StaticFields {
};
struct AudioBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioBehaviour__VTable vtable;
};
struct AudioListener__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AudioListener__StaticFields {
};
struct AudioListener__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioListener__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioListener__VTable vtable;
};
struct AudioListenerExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ReadExtensionProperty;
  VirtualInvokeData WriteExtensionProperty;
  VirtualInvokeData ExtensionUpdate;
};
struct AudioListenerExtension__StaticFields {
};
struct AudioListenerExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioListenerExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioListenerExtension__VTable vtable;
};

struct AudioSourceExtension__Fields {
  struct ScriptableObject__Fields _;
  struct AudioSource * m_audioSource;
  int32_t m_ExtensionManagerUpdateIndex;
};
struct AudioSourceExtension {
  struct AudioSourceExtension__Class *klass;
  struct MonitorData *monitor;
  struct AudioSourceExtension__Fields fields;
};
struct AudioSource__Fields {
  struct AudioBehaviour__Fields _;
  struct AudioSourceExtension * spatializerExtension;
  struct AudioSourceExtension * ambisonicExtension;
};
struct AudioSource {
  struct AudioSource__Class *klass;
  struct MonitorData *monitor;
  struct AudioSource__Fields fields;
};
struct AudioSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AudioSource__StaticFields {
};
struct AudioSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioSource__VTable vtable;
};
struct AudioSourceExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ReadExtensionProperty;
  VirtualInvokeData WriteExtensionProperty;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData ExtensionUpdate;
};
struct AudioSourceExtension__StaticFields {
};
struct AudioSourceExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioSourceExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioSourceExtension__VTable vtable;
};

struct AudioPlayableOutput {
  struct PlayableOutputHandle m_Handle;
};
struct AudioPlayableOutput__Boxed {
  struct AudioPlayableOutput__Class *klass;
  struct MonitorData *monitor;
  struct AudioPlayableOutput fields;
};
struct AudioPlayableOutput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetHandle;
};
struct AudioPlayableOutput__StaticFields {
};
struct AudioPlayableOutput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioPlayableOutput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioPlayableOutput__VTable vtable;
};

struct AudioClipPlayable {
  struct PlayableHandle m_Handle;
};
struct AudioClipPlayable__Boxed {
  struct AudioClipPlayable__Class *klass;
  struct MonitorData *monitor;
  struct AudioClipPlayable fields;
};
struct AudioClipPlayable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetHandle;
  VirtualInvokeData Equals_1;
};
struct AudioClipPlayable__StaticFields {
};
struct AudioClipPlayable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioClipPlayable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioClipPlayable__VTable vtable;
};

struct AudioMixerPlayable {
  struct PlayableHandle m_Handle;
};
struct AudioMixerPlayable__Boxed {
  struct AudioMixerPlayable__Class *klass;
  struct MonitorData *monitor;
  struct AudioMixerPlayable fields;
};
struct AudioMixerPlayable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetHandle;
  VirtualInvokeData Equals_1;
};}