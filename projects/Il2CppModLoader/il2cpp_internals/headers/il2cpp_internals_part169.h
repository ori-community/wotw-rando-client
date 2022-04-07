namespace app {
struct QualityMeasure_AlphaMeasure__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QualityMeasure_AlphaMeasure__StaticFields {
};
struct QualityMeasure_AlphaMeasure__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QualityMeasure_AlphaMeasure__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QualityMeasure_AlphaMeasure__VTable vtable;
};
struct QualityMeasure_Q_Measure__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QualityMeasure_Q_Measure__StaticFields {
};
struct QualityMeasure_Q_Measure__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QualityMeasure_Q_Measure__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QualityMeasure_Q_Measure__VTable vtable;
};
struct QualityMeasure__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QualityMeasure__StaticFields {
};
struct QualityMeasure__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QualityMeasure__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QualityMeasure__VTable vtable;
};

struct __declspec(align(8)) Statistic__Fields {
  double minEdge;
  double maxEdge;
  double minAspect;
  double maxAspect;
  double minArea;
  double maxArea;
  double minAngle;
  double maxAngle;
  struct Int32__Array * angleTable;
  struct Int32__Array * minAngles;
  struct Int32__Array * maxAngles;
};
struct Statistic {
  struct Statistic__Class *klass;
  struct MonitorData *monitor;
  struct Statistic__Fields fields;
};
struct Statistic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Statistic__StaticFields {
  int64_t InCircleCount;
  int64_t InCircleAdaptCount;
  int64_t CounterClockwiseCount;
  int64_t CounterClockwiseAdaptCount;
  int64_t Orient3dCount;
  int64_t HyperbolaCount;
  int64_t CircumcenterCount;
  int64_t CircleTopCount;
  int64_t RelocationCount;
  struct Int32__Array * plus1Mod3;
  struct Int32__Array * minus1Mod3;
};
struct Statistic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Statistic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Statistic__VTable vtable;
};

struct __declspec(align(8)) TriangleQuadTree__Fields {
  struct TriangleQuadTree_QuadNode * root;
  struct ITriangle__Array * triangles;
  int32_t sizeBound;
  int32_t maxDepth;
};
struct TriangleQuadTree {
  struct TriangleQuadTree__Class *klass;
  struct MonitorData *monitor;
  struct TriangleQuadTree__Fields fields;
};
struct __declspec(align(8)) TriangleQuadTree_QuadNode__Fields {
  struct Rectangle * bounds;
  struct Point * pivot;
  struct TriangleQuadTree * tree;
  struct TriangleQuadTree_QuadNode__Array * regions;
  struct List_1_System_Int32_ * triangles;
  uint8_t bitRegions;
};
struct TriangleQuadTree_QuadNode {
  struct TriangleQuadTree_QuadNode__Class *klass;
  struct MonitorData *monitor;
  struct TriangleQuadTree_QuadNode__Fields fields;
};
struct TriangleQuadTree_QuadNode__Array {
  struct TriangleQuadTree_QuadNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TriangleQuadTree_QuadNode * vector[32];
};
struct ITriangle__Array {
  struct ITriangle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ITriangle * vector[32];
};
struct TriangleQuadTree_QuadNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriangleQuadTree_QuadNode__StaticFields {
  struct Byte__Array * BITVECTOR;
};
struct TriangleQuadTree_QuadNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriangleQuadTree_QuadNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriangleQuadTree_QuadNode__VTable vtable;
};
struct TriangleQuadTree__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriangleQuadTree__StaticFields {
};
struct TriangleQuadTree__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriangleQuadTree__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriangleQuadTree__VTable vtable;
};

struct __declspec(align(8)) VertexSorter__Fields {
  struct Random * rand;
  struct Vertex__Array * points;
};
struct VertexSorter {
  struct VertexSorter__Class *klass;
  struct MonitorData *monitor;
  struct VertexSorter__Fields fields;
};
struct VertexSorter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VertexSorter__StaticFields {
};
struct VertexSorter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VertexSorter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VertexSorter__VTable vtable;
};

struct __declspec(align(8)) SimpleSmoother__Fields {
  struct TrianglePool * pool;
  struct Configuration_1 * config;
  struct IVoronoiFactory * factory;
  struct ConstraintOptions * options;
};
struct SimpleSmoother {
  struct SimpleSmoother__Class *klass;
  struct MonitorData *monitor;
  struct SimpleSmoother__Fields fields;
};
struct __declspec(align(8)) ConstraintOptions__Fields {
  bool _UseRegions_k__BackingField;
  bool _ConformingDelaunay_k__BackingField;
  bool _Convex_k__BackingField;
  int32_t _SegmentSplitting_k__BackingField;
};
struct ConstraintOptions {
  struct ConstraintOptions__Class *klass;
  struct MonitorData *monitor;
  struct ConstraintOptions__Fields fields;
};
struct IMesh {
  struct IMesh__Class *klass;
  struct MonitorData *monitor;
};
struct ConstraintOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConstraintOptions__StaticFields {
};
struct ConstraintOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstraintOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstraintOptions__VTable vtable;
};
struct IMesh__VTable {
  VirtualInvokeData get_Vertices;
  VirtualInvokeData get_Edges;
  VirtualInvokeData get_Segments;
  VirtualInvokeData get_Triangles;
  VirtualInvokeData get_Holes;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData Renumber;
  VirtualInvokeData Refine;
};
struct IMesh__StaticFields {
};
struct IMesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMesh__VTable vtable;
};
struct SimpleSmoother__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Smooth;
  VirtualInvokeData Smooth_1;
};
struct SimpleSmoother__StaticFields {
};
struct SimpleSmoother__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleSmoother__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleSmoother__VTable vtable;
};

struct __declspec(align(8)) Polygon__Fields {
  struct List_1_TriangleNet_Geometry_Vertex_ * points;
  struct List_1_TriangleNet_Geometry_Point_ * holes;
  struct List_1_TriangleNet_Geometry_RegionPointer_ * regions;
  struct List_1_TriangleNet_Geometry_ISegment_ * segments;
  bool _HasPointMarkers_k__BackingField;
  bool _HasSegmentMarkers_k__BackingField;
};
struct Polygon {
  struct Polygon__Class *klass;
  struct MonitorData *monitor;
  struct Polygon__Fields fields;
};
struct __declspec(align(8)) List_1_TriangleNet_Geometry_Vertex___Fields {
  struct Vertex__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Geometry_Vertex_ {
  struct List_1_TriangleNet_Geometry_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Geometry_Vertex___Fields fields;
};
struct __declspec(align(8)) List_1_TriangleNet_Geometry_ISegment___Fields {
  struct ISegment__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Geometry_ISegment_ {
  struct List_1_TriangleNet_Geometry_ISegment___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Geometry_ISegment___Fields fields;
};
struct ISegment__Array {
  struct ISegment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISegment * vector[32];
};
struct IEnumerator_1_TriangleNet_Geometry_ISegment_ {
  struct IEnumerator_1_TriangleNet_Geometry_ISegment___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Contour__Fields {
  int32_t marker;
  bool convex;
  struct List_1_TriangleNet_Geometry_Vertex_ * _Points_k__BackingField;
};
struct Contour {
  struct Contour__Class *klass;
  struct MonitorData *monitor;
  struct Contour__Fields fields;
};
struct List_1_TriangleNet_Geometry_Vertex___VTable {
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
struct List_1_TriangleNet_Geometry_Vertex___StaticFields {
  struct Vertex__Array * _emptyArray;
};
struct List_1_TriangleNet_Geometry_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Geometry_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Geometry_Vertex___VTable vtable;
};
struct IEnumerator_1_TriangleNet_Geometry_ISegment___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TriangleNet_Geometry_ISegment___StaticFields {
};
struct IEnumerator_1_TriangleNet_Geometry_ISegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TriangleNet_Geometry_ISegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TriangleNet_Geometry_ISegment___VTable vtable;
};
struct List_1_TriangleNet_Geometry_ISegment___VTable {
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
struct List_1_TriangleNet_Geometry_ISegment___StaticFields {
  struct ISegment__Array * _emptyArray;
};
struct List_1_TriangleNet_Geometry_ISegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Geometry_ISegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Geometry_ISegment___VTable vtable;
};
struct Contour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Contour__StaticFields {
};
struct Contour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Contour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Contour__VTable vtable;
};
struct Polygon__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
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
struct Polygon__StaticFields {
};
struct Polygon__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Polygon__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Polygon__VTable vtable;
};

struct SimpleSmoother_c {
  struct SimpleSmoother_c__Class *klass;
  struct MonitorData *monitor;
};
struct SimpleSmoother_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SimpleSmoother_c__StaticFields {
  struct SimpleSmoother_c * __9;
  struct Func_1_TriangleNet_IPredicates_ * __9__5_0;
};
struct SimpleSmoother_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleSmoother_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleSmoother_c__VTable vtable;
};

struct __declspec(align(8)) VoronoiFactory__Fields {
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ * vertices;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ * edges;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ * faces;
};
struct VoronoiFactory {
  struct VoronoiFactory__Class *klass;
  struct MonitorData *monitor;
  struct VoronoiFactory__Fields fields;
};
struct __declspec(align(8)) VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___Fields {
  int32_t index;
  int32_t count;
  struct Vertex_1__Array * pool;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex_ {
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___Fields fields;
};
struct __declspec(align(8)) VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___Fields {
  int32_t index;
  int32_t count;
  struct HalfEdge__Array * pool;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge_ {
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___Class *klass;
  struct MonitorData *monitor;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___Fields fields;
};
struct __declspec(align(8)) VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___Fields {
  int32_t index;
  int32_t count;
  struct Face__Array * pool;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face_ {
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___Class *klass;
  struct MonitorData *monitor;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___Fields fields;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___StaticFields {
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Vertex___VTable vtable;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___StaticFields {
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_HalfEdge___VTable vtable;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___StaticFields {
};
struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VoronoiFactory_ObjectPool_1_TriangleNet_Topology_DCEL_Face___VTable vtable;
};
struct VoronoiFactory__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Initialize;
  VirtualInvokeData Reset;
  VirtualInvokeData CreateVertex;
  VirtualInvokeData CreateHalfEdge;
  VirtualInvokeData CreateFace;
};
struct VoronoiFactory__StaticFields {
};
struct VoronoiFactory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VoronoiFactory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VoronoiFactory__VTable vtable;
};

struct __declspec(align(8)) ConstraintMesher__Fields {
  struct IPredicates * predicates;
  struct Mesh_1 * mesh;
  struct Behavior * behavior;
  struct TriangleLocator * locator;
  struct List_1_TriangleNet_Topology_Triangle_ * viri;
  struct ILog_1_LogItem_ * logger;
};
struct ConstraintMesher {
  struct ConstraintMesher__Class *klass;
  struct MonitorData *monitor;
  struct ConstraintMesher__Fields fields;
};
struct __declspec(align(8)) List_1_TriangleNet_Topology_Triangle___Fields {
  struct Triangle__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Topology_Triangle_ {
  struct List_1_TriangleNet_Topology_Triangle___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Topology_Triangle___Fields fields;
};
struct List_1_TriangleNet_Topology_Triangle___VTable {
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
struct List_1_TriangleNet_Topology_Triangle___StaticFields {
  struct Triangle__Array * _emptyArray;
};
struct List_1_TriangleNet_Topology_Triangle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Topology_Triangle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Topology_Triangle___VTable vtable;
};
struct ConstraintMesher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConstraintMesher__StaticFields {
};
struct ConstraintMesher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstraintMesher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstraintMesher__VTable vtable;
};

enum FindDirectionResult__Enum : int32_t {
  FindDirectionResult__Enum_Within = 0,
  FindDirectionResult__Enum_Leftcollinear = 1,
  FindDirectionResult__Enum_Rightcollinear = 2,
};
struct FindDirectionResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FindDirectionResult__Enum value;
};

struct IList_1_TriangleNet_Geometry_ITriangle_ {
  struct IList_1_TriangleNet_Geometry_ITriangle___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_TriangleNet_Geometry_ITriangle___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_TriangleNet_Geometry_ITriangle___StaticFields {
};
struct IList_1_TriangleNet_Geometry_ITriangle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_TriangleNet_Geometry_ITriangle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_TriangleNet_Geometry_ITriangle___VTable vtable;
};

struct __declspec(align(8)) List_1_TriangleNet_Topology_Otri___Fields {
  struct Otri__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TriangleNet_Topology_Otri_ {
  struct List_1_TriangleNet_Topology_Otri___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TriangleNet_Topology_Otri___Fields fields;
};
struct List_1_TriangleNet_Topology_Otri___Array {
  struct List_1_TriangleNet_Topology_Otri___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_TriangleNet_Topology_Otri_ * vector[32];
};
struct List_1_TriangleNet_Topology_Otri___VTable {
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
struct List_1_TriangleNet_Topology_Otri___StaticFields {
  struct Otri__Array * _emptyArray;
};
struct List_1_TriangleNet_Topology_Otri___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TriangleNet_Topology_Otri___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TriangleNet_Topology_Otri___VTable vtable;
};

struct __declspec(align(8)) GenericMesher__Fields {
  struct Configuration_1 * config;
  struct ITriangulator * triangulator;
};
struct GenericMesher {
  struct GenericMesher__Class *klass;
  struct MonitorData *monitor;
  struct GenericMesher__Fields fields;
};
struct ITriangulator {
  struct ITriangulator__Class *klass;
  struct MonitorData *monitor;
};
struct ITriangulator__VTable {
  VirtualInvokeData Triangulate;
};
struct ITriangulator__StaticFields {
};
struct ITriangulator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITriangulator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITriangulator__VTable vtable;
};
struct GenericMesher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GenericMesher__StaticFields {
};
struct GenericMesher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericMesher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericMesher__VTable vtable;
};

struct __declspec(align(8)) RegionIterator__Fields {
  struct List_1_TriangleNet_Topology_Triangle_ * region;
};
struct RegionIterator {
  struct RegionIterator__Class *klass;
  struct MonitorData *monitor;
  struct RegionIterator__Fields fields;
};
struct RegionIterator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegionIterator__StaticFields {
};
struct RegionIterator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegionIterator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegionIterator__VTable vtable;
};

struct Action_1_TriangleNet_Topology_Triangle___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_TriangleNet_Topology_Triangle_ {
  struct Action_1_TriangleNet_Topology_Triangle___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_TriangleNet_Topology_Triangle___Fields fields;
};
struct Action_1_TriangleNet_Topology_Triangle___VTable {
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
struct Action_1_TriangleNet_Topology_Triangle___StaticFields {
};
struct Action_1_TriangleNet_Topology_Triangle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_TriangleNet_Topology_Triangle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_TriangleNet_Topology_Triangle___VTable vtable;
};

struct Func_2_TriangleNet_Topology_SubSegment_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_TriangleNet_Topology_SubSegment_Boolean_ {
  struct Func_2_TriangleNet_Topology_SubSegment_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_TriangleNet_Topology_SubSegment_Boolean___Fields fields;
};
struct Func_2_TriangleNet_Topology_SubSegment_Boolean___VTable {
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
struct Func_2_TriangleNet_Topology_SubSegment_Boolean___StaticFields {
};
struct Func_2_TriangleNet_Topology_SubSegment_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_TriangleNet_Topology_SubSegment_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_TriangleNet_Topology_SubSegment_Boolean___VTable vtable;
};

struct __declspec(align(8)) RegionIterator_c_DisplayClass2_0__Fields {
  struct Triangle * triangle;
};
struct RegionIterator_c_DisplayClass2_0 {
  struct RegionIterator_c_DisplayClass2_0__Class *klass;
  struct MonitorData *monitor;
  struct RegionIterator_c_DisplayClass2_0__Fields fields;
};
struct RegionIterator_c_DisplayClass2_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegionIterator_c_DisplayClass2_0__StaticFields {
};
struct RegionIterator_c_DisplayClass2_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegionIterator_c_DisplayClass2_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegionIterator_c_DisplayClass2_0__VTable vtable;
};

struct __declspec(align(8)) RegionIterator_c_DisplayClass3_0__Fields {
  int32_t boundary;
};
struct RegionIterator_c_DisplayClass3_0 {
  struct RegionIterator_c_DisplayClass3_0__Class *klass;
  struct MonitorData *monitor;
  struct RegionIterator_c_DisplayClass3_0__Fields fields;
};
struct RegionIterator_c_DisplayClass3_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegionIterator_c_DisplayClass3_0__StaticFields {
};
struct RegionIterator_c_DisplayClass3_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegionIterator_c_DisplayClass3_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegionIterator_c_DisplayClass3_0__VTable vtable;
};

struct RegionIterator_c {
  struct RegionIterator_c__Class *klass;
  struct MonitorData *monitor;
};}