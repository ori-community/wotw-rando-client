namespace app {

struct Terrain_1__Array {
  struct Terrain_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Terrain_1 * vector[32];
};

enum TerrainData_BoundaryValueType__Enum : int32_t {
  TerrainData_BoundaryValueType__Enum_MaxHeightmapRes = 0,
  TerrainData_BoundaryValueType__Enum_MinDetailResPerPatch = 1,
  TerrainData_BoundaryValueType__Enum_MaxDetailResPerPatch = 2,
  TerrainData_BoundaryValueType__Enum_MaxDetailPatchCount = 3,
  TerrainData_BoundaryValueType__Enum_MinAlphamapRes = 4,
  TerrainData_BoundaryValueType__Enum_MaxAlphamapRes = 5,
  TerrainData_BoundaryValueType__Enum_MinBaseMapRes = 6,
  TerrainData_BoundaryValueType__Enum_MaxBaseMapRes = 7,
};
struct TerrainData_BoundaryValueType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TerrainData_BoundaryValueType__Enum value;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields fields;
};
struct TerrainUtility_TerrainGroups__Fields {
  struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields _;
};
struct TerrainUtility_TerrainGroups {
  struct TerrainUtility_TerrainGroups__Class *klass;
  struct MonitorData *monitor;
  struct TerrainUtility_TerrainGroups__Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct TerrainUtility_TerrainMap * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ vector[32];
};
enum TerrainUtility_TerrainMap_ErrorCode__Enum : int32_t {
  TerrainUtility_TerrainMap_ErrorCode__Enum_OK = 0,
  TerrainUtility_TerrainMap_ErrorCode__Enum_Overlapping = 1,
  TerrainUtility_TerrainMap_ErrorCode__Enum_SizeMismatch = 4,
  TerrainUtility_TerrainMap_ErrorCode__Enum_EdgeAlignmentMismatch = 8,
};
struct TerrainUtility_TerrainMap_ErrorCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TerrainUtility_TerrainMap_ErrorCode__Enum value;
};
struct __declspec(align(8)) TerrainUtility_TerrainMap__Fields {
  struct Vector3 m_patchSize;
  enum TerrainUtility_TerrainMap_ErrorCode__Enum m_errorCode;
  struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ * m_terrainTiles;
};
struct TerrainUtility_TerrainMap {
  struct TerrainUtility_TerrainMap__Class *klass;
  struct MonitorData *monitor;
  struct TerrainUtility_TerrainMap__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ {
  struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Fields fields;
};
struct TerrainUtility_TerrainMap_TileCoord {
  int32_t tileX;
  int32_t tileZ;
};
struct TerrainUtility_TerrainMap_TileCoord__Boxed {
  struct TerrainUtility_TerrainMap_TileCoord__Class *klass;
  struct MonitorData *monitor;
  struct TerrainUtility_TerrainMap_TileCoord fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ {
  int32_t hashCode;
  int32_t next;
  struct TerrainUtility_TerrainMap_TileCoord key;
  struct Terrain_1 * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_ {
  struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Fields {
  struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Fields fields;
};
struct TerrainUtility_TerrainMap_TileCoord__Array {
  struct TerrainUtility_TerrainMap_TileCoord__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TerrainUtility_TerrainMap_TileCoord vector[32];
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_ {
  struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Fields {
  struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Fields fields;
};
struct IEnumerator_1_UnityEngine_Terrain_ {
  struct IEnumerator_1_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_ {
  struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_Terrain_ {
  struct ICollection_1_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ {
  struct TerrainUtility_TerrainMap_TileCoord key;
  struct Terrain_1 * value;
};
struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Boxed {
  struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ fields;
};
struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Array {
  struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_ {
  struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Terrain_ {
  struct IEnumerable_1_UnityEngine_Terrain___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields fields;
};
struct TerrainUtility_TerrainMap__Array {
  struct TerrainUtility_TerrainMap__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TerrainUtility_TerrainMap * vector[32];
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  int32_t key;
  struct TerrainUtility_TerrainMap * value;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Boxed {
  struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ fields;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array {
  struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
  struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class *klass;
  struct MonitorData *monitor;
};
struct TerrainUtility_TerrainMap_TileCoord__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TerrainUtility_TerrainMap_TileCoord__StaticFields {
};
struct TerrainUtility_TerrainMap_TileCoord__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainUtility_TerrainMap_TileCoord__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainUtility_TerrainMap_TileCoord__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable vtable;
};
struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields {
};
struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable vtable;
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields {
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable vtable;
};
struct IEnumerator_1_UnityEngine_Terrain___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Terrain___StaticFields {
};
struct IEnumerator_1_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Terrain___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable vtable;
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields {
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable vtable;
};
struct ICollection_1_UnityEngine_Terrain___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_Terrain___StaticFields {
};
struct ICollection_1_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_Terrain___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields {
};
struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable vtable;
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields {
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord___VTable vtable;
};
struct IEnumerable_1_UnityEngine_Terrain___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_Terrain___StaticFields {
};
struct IEnumerable_1_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_Terrain___VTable vtable;
};
struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable {
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
struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields {
};
struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain___VTable vtable;
};
struct TerrainUtility_TerrainMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TerrainUtility_TerrainMap__StaticFields {
};
struct TerrainUtility_TerrainMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainUtility_TerrainMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainUtility_TerrainMap__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable {
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
struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields {
};
struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___VTable vtable;
};
struct TerrainUtility_TerrainGroups__VTable {
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
struct TerrainUtility_TerrainGroups__StaticFields {
};
struct TerrainUtility_TerrainGroups__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainUtility_TerrainGroups__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainUtility_TerrainGroups__VTable vtable;
};

struct TerrainUtility_TerrainMap_TerrainFilter__Fields {
  struct MulticastDelegate__Fields _;
};
struct TerrainUtility_TerrainMap_TerrainFilter {
  struct TerrainUtility_TerrainMap_TerrainFilter__Class *klass;
  struct MonitorData *monitor;
  struct TerrainUtility_TerrainMap_TerrainFilter__Fields fields;
};
struct TerrainUtility_TerrainMap_TerrainFilter__VTable {
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
struct TerrainUtility_TerrainMap_TerrainFilter__StaticFields {
};
struct TerrainUtility_TerrainMap_TerrainFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainUtility_TerrainMap_TerrainFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainUtility_TerrainMap_TerrainFilter__VTable vtable;
};

struct __declspec(align(8)) TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__Fields {
  int32_t groupID;
};
struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0 {
  struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__Class *klass;
  struct MonitorData *monitor;
  struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__Fields fields;
};
struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__StaticFields {
};
struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__VTable vtable;
};

struct __declspec(align(8)) TerrainUtility_CollectTerrains_c_AnonStorey1__Fields {
  bool onlyAutoConnectedTerrains;
};
struct TerrainUtility_CollectTerrains_c_AnonStorey1 {
  struct TerrainUtility_CollectTerrains_c_AnonStorey1__Class *klass;
  struct MonitorData *monitor;
  struct TerrainUtility_CollectTerrains_c_AnonStorey1__Fields fields;
};
struct TerrainUtility_CollectTerrains_c_AnonStorey1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TerrainUtility_CollectTerrains_c_AnonStorey1__StaticFields {
};
struct TerrainUtility_CollectTerrains_c_AnonStorey1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainUtility_CollectTerrains_c_AnonStorey1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainUtility_CollectTerrains_c_AnonStorey1__VTable vtable;
};

struct __declspec(align(8)) TerrainUtility_CollectTerrains_c_AnonStorey0__Fields {
  struct Terrain_1 * t;
  struct TerrainUtility_CollectTerrains_c_AnonStorey1 * __f__ref_1;
};
struct TerrainUtility_CollectTerrains_c_AnonStorey0 {
  struct TerrainUtility_CollectTerrains_c_AnonStorey0__Class *klass;
  struct MonitorData *monitor;
  struct TerrainUtility_CollectTerrains_c_AnonStorey0__Fields fields;
};
struct TerrainUtility_CollectTerrains_c_AnonStorey0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TerrainUtility_CollectTerrains_c_AnonStorey0__StaticFields {
};
struct TerrainUtility_CollectTerrains_c_AnonStorey0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainUtility_CollectTerrains_c_AnonStorey0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainUtility_CollectTerrains_c_AnonStorey0__VTable vtable;
};

struct __declspec(align(8)) ITilemap__Fields {
  struct Tilemap * m_Tilemap;
};
struct ITilemap {
  struct ITilemap__Class *klass;
  struct MonitorData *monitor;
  struct ITilemap__Fields fields;
};
struct Tilemap__Fields {
  struct GridLayout__Fields _;
};
struct Tilemap {
  struct Tilemap__Class *klass;
  struct MonitorData *monitor;
  struct Tilemap__Fields fields;
};
struct Tilemap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Tilemap__StaticFields {
};
struct Tilemap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tilemap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tilemap__VTable vtable;
};
struct ITilemap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ITilemap__StaticFields {
  struct ITilemap * s_Instance;
};
struct ITilemap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITilemap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITilemap__VTable vtable;
};

struct TileBase__Fields {
  struct ScriptableObject__Fields _;
};
struct TileBase {
  struct TileBase__Class *klass;
  struct MonitorData *monitor;
  struct TileBase__Fields fields;
};
enum TileFlags__Enum : int32_t {
  TileFlags__Enum_None = 0,
  TileFlags__Enum_LockColor = 1,
  TileFlags__Enum_LockTransform = 2,
  TileFlags__Enum_InstantiateGameObjectRuntimeOnly = 4,
  TileFlags__Enum_LockAll = 3,
};}