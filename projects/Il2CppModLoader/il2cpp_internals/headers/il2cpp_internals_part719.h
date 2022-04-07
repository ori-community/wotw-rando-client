namespace app {
struct HueShiftModifier__StaticFields {
};
struct HueShiftModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HueShiftModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HueShiftModifier__VTable vtable;
};

struct LightDirectionMapModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct LightDirectionMapProperty * LightDirectionMap;
  struct UberShaderVector * LightDirectionMapSettings;
};
struct LightDirectionMapModifier {
  struct LightDirectionMapModifier__Class *klass;
  struct MonitorData *monitor;
  struct LightDirectionMapModifier__Fields fields;
};
struct LightDirectionMapProperty__Fields {
  struct UberShaderProperty__Fields _;
  struct CompressedLightDirectionMap * m_compressedMap;
};
struct LightDirectionMapProperty {
  struct LightDirectionMapProperty__Class *klass;
  struct MonitorData *monitor;
  struct LightDirectionMapProperty__Fields fields;
};
struct __declspec(align(8)) CompressedLightDirectionMap__Fields {
  struct TextureGuid * Left;
  struct TextureGuid * Right;
  struct TextureGuid * Top;
  struct TextureGuid * Bottom;
  struct TextureGuid * Front;
  struct TextureGuid * Rim;
  struct Texture2D * m_runtimeCompressedTexture;
};
struct CompressedLightDirectionMap {
  struct CompressedLightDirectionMap__Class *klass;
  struct MonitorData *monitor;
  struct CompressedLightDirectionMap__Fields fields;
};
struct ShaderProperty {
  struct String * m_name;
  int32_t m_id;
};
struct ShaderProperty__Boxed {
  struct ShaderProperty__Class *klass;
  struct MonitorData *monitor;
  struct ShaderProperty fields;
};
struct __declspec(align(8)) LightDirectionMapCompressor__Fields {
  struct Material * m_material;
  struct Material * m_compressionErrorMaterial;
  struct ShaderProperty m_leftTexShaderProperty;
  struct ShaderProperty m_rightTexShaderProperty;
  struct ShaderProperty m_topTexShaderProperty;
  struct ShaderProperty m_bottomTexShaderProperty;
  struct ShaderProperty m_frontTexShaderProperty;
  struct ShaderProperty m_rimTexShaderProperty;
};
struct LightDirectionMapCompressor {
  struct LightDirectionMapCompressor__Class *klass;
  struct MonitorData *monitor;
  struct LightDirectionMapCompressor__Fields fields;
};
struct __declspec(align(8)) TextureGuid__Fields {
  struct String * m_guid;
};
struct TextureGuid {
  struct TextureGuid__Class *klass;
  struct MonitorData *monitor;
  struct TextureGuid__Fields fields;
};
struct ShaderProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderProperty__StaticFields {
};
struct ShaderProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderProperty__VTable vtable;
};
struct LightDirectionMapCompressor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightDirectionMapCompressor__StaticFields {
};
struct LightDirectionMapCompressor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightDirectionMapCompressor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightDirectionMapCompressor__VTable vtable;
};
struct TextureGuid__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextureGuid__StaticFields {
};
struct TextureGuid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextureGuid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextureGuid__VTable vtable;
};
struct CompressedLightDirectionMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CompressedLightDirectionMap__StaticFields {
  struct LightDirectionMapCompressor * s_compressor;
};
struct CompressedLightDirectionMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompressedLightDirectionMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompressedLightDirectionMap__VTable vtable;
};
struct LightDirectionMapProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData BindProperties;
  VirtualInvokeData Set;
};
struct LightDirectionMapProperty__StaticFields {
  int32_t sAtlasUvShaderPropertyId;
  int32_t sAtlasMinMaxShaderPropertyId;
  int32_t sAtlasFlippedShaderPropertyId;
};
struct LightDirectionMapProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightDirectionMapProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightDirectionMapProperty__VTable vtable;
};
struct LightDirectionMapModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData DoStrip;
  VirtualInvokeData SetProperties;
  VirtualInvokeData Awake;
  VirtualInvokeData get_IsProcedural;
  VirtualInvokeData Randomize;
  VirtualInvokeData GetRandomizeOptions;
  VirtualInvokeData UberShaderEditorUpdate;
  VirtualInvokeData ApplyMultipliers;
  VirtualInvokeData OnPresetCreation;
  VirtualInvokeData GetQuadExpandSize;
  VirtualInvokeData NeedsMipMap;
  VirtualInvokeData DoStrip_1;
  VirtualInvokeData ImplementsAlphaMasking;
  VirtualInvokeData GetKeywordsForShader;
  VirtualInvokeData GetBaseVertexTextureNames;
  VirtualInvokeData GetBaseShaderProperties;
  VirtualInvokeData RequiresNormals;
  VirtualInvokeData RequiresTangent;
  VirtualInvokeData RequiresVertexColor;
  VirtualInvokeData RequiresUv2;
  VirtualInvokeData RequiresUv3;
  VirtualInvokeData RequiresUv4;
  VirtualInvokeData RequiresUv5;
  VirtualInvokeData RequiresUv6;
  VirtualInvokeData DoesChangeShape;
};
struct LightDirectionMapModifier__StaticFields {
};
struct LightDirectionMapModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightDirectionMapModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightDirectionMapModifier__VTable vtable;
};

struct LightDirectionNormalsModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderVector * NormalMaskParams;
  struct UberShaderTexture * LightDirectionNormalsMask;
};
struct LightDirectionNormalsModifier {
  struct LightDirectionNormalsModifier__Class *klass;
  struct MonitorData *monitor;
  struct LightDirectionNormalsModifier__Fields fields;
};
struct LightDirectionNormalsModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData DoStrip;
  VirtualInvokeData SetProperties;
  VirtualInvokeData Awake;
  VirtualInvokeData get_IsProcedural;
  VirtualInvokeData Randomize;
  VirtualInvokeData GetRandomizeOptions;
  VirtualInvokeData UberShaderEditorUpdate;
  VirtualInvokeData ApplyMultipliers;
  VirtualInvokeData OnPresetCreation;
  VirtualInvokeData GetQuadExpandSize;
  VirtualInvokeData NeedsMipMap;
  VirtualInvokeData DoStrip_1;
  VirtualInvokeData ImplementsAlphaMasking;
  VirtualInvokeData GetKeywordsForShader;
  VirtualInvokeData GetBaseVertexTextureNames;
  VirtualInvokeData GetBaseShaderProperties;
  VirtualInvokeData RequiresNormals;
  VirtualInvokeData RequiresTangent;
  VirtualInvokeData RequiresVertexColor;
  VirtualInvokeData RequiresUv2;
  VirtualInvokeData RequiresUv3;
  VirtualInvokeData RequiresUv4;
  VirtualInvokeData RequiresUv5;
  VirtualInvokeData RequiresUv6;
  VirtualInvokeData DoesChangeShape;
};
struct LightDirectionNormalsModifier__StaticFields {
};
struct LightDirectionNormalsModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightDirectionNormalsModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightDirectionNormalsModifier__VTable vtable;
};

struct LightInfluenceSystem {
  struct LightInfluenceSystem__Class *klass;
  struct MonitorData *monitor;
};
struct LightInfluenceSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightInfluenceSystem__StaticFields {
};
struct LightInfluenceSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightInfluenceSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightInfluenceSystem__VTable vtable;
};

struct LightCullingSystem_LightCullingSettings {
  struct LightCullingSystem_LightCullingConfigPerType__Array * ConfigPerType;
};
struct LightCullingSystem_LightCullingSettings__Boxed {
  struct LightCullingSystem_LightCullingSettings__Class *klass;
  struct MonitorData *monitor;
  struct LightCullingSystem_LightCullingSettings fields;
};
struct LightCullingSystem_LightCullingConfigPerType__Array {
  struct LightCullingSystem_LightCullingConfigPerType__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LightCullingSystem_LightCullingConfigPerType vector[32];
};
struct LightCullingSystem_LightCullingSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightCullingSystem_LightCullingSettings__StaticFields {
};
struct LightCullingSystem_LightCullingSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightCullingSystem_LightCullingSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightCullingSystem_LightCullingSettings__VTable vtable;
};

struct __declspec(align(8)) Dictionary_2_LightPriority_Layer_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_LightPriority_Layer_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_LightPriority_Layer_System_Int32_ {
  struct Dictionary_2_LightPriority_Layer_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_LightPriority_Layer_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  enum LightPriority_Layer__Enum key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___Fields {
  struct Dictionary_2_LightPriority_Layer_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___Fields {
  struct Dictionary_2_LightPriority_Layer_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___Fields fields;
};
struct KeyValuePair_2_LightPriority_Layer_System_Int32_ {
  enum LightPriority_Layer__Enum key;
  int32_t value;
};
struct KeyValuePair_2_LightPriority_Layer_System_Int32___Boxed {
  struct KeyValuePair_2_LightPriority_Layer_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_LightPriority_Layer_System_Int32_ fields;
};
struct KeyValuePair_2_LightPriority_Layer_System_Int32___Array {
  struct KeyValuePair_2_LightPriority_Layer_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_LightPriority_Layer_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_System_Int32___VTable vtable;
};
struct KeyValuePair_2_LightPriority_Layer_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_LightPriority_Layer_System_Int32___StaticFields {
};
struct KeyValuePair_2_LightPriority_Layer_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_LightPriority_Layer_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_LightPriority_Layer_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_System_Int32___VTable vtable;
};
struct Dictionary_2_LightPriority_Layer_System_Int32___VTable {
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
struct Dictionary_2_LightPriority_Layer_System_Int32___StaticFields {
};
struct Dictionary_2_LightPriority_Layer_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_LightPriority_Layer_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_LightPriority_Layer_System_Int32___VTable vtable;
};

struct LightPriority {
  struct LightPriority__Class *klass;
  struct MonitorData *monitor;
};
struct LightPriority__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightPriority__StaticFields {
  struct Dictionary_2_LightPriority_Layer_System_Int32_ * s_darkeningErasingPriorityMap;
  struct Dictionary_2_LightPriority_Layer_System_Int32_ * s_cullingPriorityMap;
};
struct LightPriority__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightPriority__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightPriority__VTable vtable;
};

struct MeshTrailModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct MeshTrail * MeshTrail;
  struct MeshRenderer * MeshRenderer;
  enum SuspendableMask__Enum _Mask_k__BackingField;
};
struct MeshTrailModifier {
  struct MeshTrailModifier__Class *klass;
  struct MonitorData *monitor;
  struct MeshTrailModifier__Fields fields;
};
struct CullingCategoryManager_1_MeshTrailModifier___Fields {
  struct CullingCategoryManager__Fields _;
  struct Dictionary_2_System_Int32_MeshTrailModifier_ * registeredItems;
};
struct CullingCategoryManager_1_MeshTrailModifier_ {
  struct CullingCategoryManager_1_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct CullingCategoryManager_1_MeshTrailModifier___Fields fields;
};
struct CullingCategoryManagerWithList_1_MeshTrailModifier___Fields {
  struct CullingCategoryManager_1_MeshTrailModifier___Fields _;
  struct List_1_MeshTrailModifier_ * Items;
};
struct CullingCategoryManagerWithList_1_MeshTrailModifier_ {
  struct CullingCategoryManagerWithList_1_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct CullingCategoryManagerWithList_1_MeshTrailModifier___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_MeshTrailModifier___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_MeshTrailModifier_ {
  struct Dictionary_2_System_Int32_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_MeshTrailModifier___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct MeshTrailModifier * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___Fields {
  struct Dictionary_2_System_Int32_MeshTrailModifier_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___Fields {
  struct Dictionary_2_System_Int32_MeshTrailModifier_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___Fields fields;
};
struct MeshTrailModifier__Array {
  struct MeshTrailModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeshTrailModifier * vector[32];
};
struct IEnumerator_1_MeshTrailModifier_ {
  struct IEnumerator_1_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_MeshTrailModifier_ {
  struct ICollection_1_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_MeshTrailModifier_ {
  int32_t key;
  struct MeshTrailModifier * value;
};
struct KeyValuePair_2_System_Int32_MeshTrailModifier___Boxed {
  struct KeyValuePair_2_System_Int32_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_MeshTrailModifier_ fields;
};
struct KeyValuePair_2_System_Int32_MeshTrailModifier___Array {
  struct KeyValuePair_2_System_Int32_MeshTrailModifier___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_MeshTrailModifier_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_MeshTrailModifier_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MeshTrailModifier_ {
  struct IEnumerable_1_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_MeshTrailModifier___Fields {
  struct MeshTrailModifier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MeshTrailModifier_ {
  struct List_1_MeshTrailModifier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MeshTrailModifier___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_MeshTrailModifier___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_MeshTrailModifier___VTable vtable;
};
struct IEnumerator_1_MeshTrailModifier___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MeshTrailModifier___StaticFields {
};
struct IEnumerator_1_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MeshTrailModifier___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MeshTrailModifier___VTable vtable;
};
struct ICollection_1_MeshTrailModifier___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_MeshTrailModifier___StaticFields {
};
struct ICollection_1_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_MeshTrailModifier___VTable vtable;
};
struct KeyValuePair_2_System_Int32_MeshTrailModifier___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_MeshTrailModifier___StaticFields {
};
struct KeyValuePair_2_System_Int32_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_MeshTrailModifier___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_MeshTrailModifier___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_MeshTrailModifier___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_MeshTrailModifier___VTable vtable;
};
struct IEnumerable_1_MeshTrailModifier___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_MeshTrailModifier___StaticFields {
};
struct IEnumerable_1_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_MeshTrailModifier___VTable vtable;
};
struct Dictionary_2_System_Int32_MeshTrailModifier___VTable {
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
struct Dictionary_2_System_Int32_MeshTrailModifier___StaticFields {
};
struct Dictionary_2_System_Int32_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_MeshTrailModifier___VTable vtable;
};
struct CullingCategoryManager_1_MeshTrailModifier___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_get_Parameters;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_OnPreCull;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_OnResultsReady;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_OnPostCull;
  VirtualInvokeData OnPreCull;
  VirtualInvokeData OnResultsReady;
  VirtualInvokeData OnPostCull;
};
struct CullingCategoryManager_1_MeshTrailModifier___StaticFields {
};
struct CullingCategoryManager_1_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CullingCategoryManager_1_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CullingCategoryManager_1_MeshTrailModifier___VTable vtable;
};
struct List_1_MeshTrailModifier___VTable {
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
struct List_1_MeshTrailModifier___StaticFields {
  struct MeshTrailModifier__Array * _emptyArray;
};
struct List_1_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MeshTrailModifier___VTable vtable;
};
struct CullingCategoryManagerWithList_1_MeshTrailModifier___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_get_Parameters;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_OnPreCull;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_OnResultsReady;
  VirtualInvokeData Moon_Rendering_ICullingCategoryManager_OnPostCull;
  VirtualInvokeData OnPreCull;
  VirtualInvokeData OnResultsReady;
  VirtualInvokeData OnPostCull;
};
struct CullingCategoryManagerWithList_1_MeshTrailModifier___StaticFields {
};
struct CullingCategoryManagerWithList_1_MeshTrailModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CullingCategoryManagerWithList_1_MeshTrailModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CullingCategoryManagerWithList_1_MeshTrailModifier___VTable vtable;
};}