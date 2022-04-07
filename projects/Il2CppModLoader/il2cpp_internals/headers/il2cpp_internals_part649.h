namespace app {

struct MoonPhysics_AscendingDistanceComparer {
  struct MoonPhysics_AscendingDistanceComparer__Class *klass;
  struct MonitorData *monitor;
};
struct MoonPhysics_AscendingDistanceComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct MoonPhysics_AscendingDistanceComparer__StaticFields {
};
struct MoonPhysics_AscendingDistanceComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonPhysics_AscendingDistanceComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonPhysics_AscendingDistanceComparer__VTable vtable;
};

struct MovePivotAlert__Fields {
  struct MonoBehaviour__Fields _;
};
struct MovePivotAlert {
  struct MovePivotAlert__Class *klass;
  struct MonitorData *monitor;
  struct MovePivotAlert__Fields fields;
};
struct MovePivotAlert__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MovePivotAlert__StaticFields {
};
struct MovePivotAlert__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovePivotAlert__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovePivotAlert__VTable vtable;
};

struct WorldRotation__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 Rotation;
};
struct WorldRotation {
  struct WorldRotation__Class *klass;
  struct MonitorData *monitor;
  struct WorldRotation__Fields fields;
};
struct WorldRotation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WorldRotation__StaticFields {
};
struct WorldRotation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WorldRotation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WorldRotation__VTable vtable;
};

struct BuilderInfo_c {
  struct BuilderInfo_c__Class *klass;
  struct MonitorData *monitor;
};
struct BuilderInfo_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuilderInfo_c__StaticFields {
  struct BuilderInfo_c * __9;
  struct Action * __9__9_0;
};
struct BuilderInfo_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderInfo_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderInfo_c__VTable vtable;
};

struct __declspec(align(8)) CurvedFloatRange__Fields {
  float Min;
  float Max;
  struct AnimationCurve * Curve;
};
struct CurvedFloatRange {
  struct CurvedFloatRange__Class *klass;
  struct MonitorData *monitor;
  struct CurvedFloatRange__Fields fields;
};
struct CurvedFloatRange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CurvedFloatRange__StaticFields {
};
struct CurvedFloatRange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CurvedFloatRange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CurvedFloatRange__VTable vtable;
};

struct CustomizeMaterial__Fields {
  struct MonoBehaviour__Fields _;
  struct Material * OriginalMaterial;
  int32_t MaterialIndex;
  struct Material * InstancedMaterial;
  bool IsInstancedMaterialPersistent;
  float m_intrinsicOffset;
  struct OverridableShaderProperty * Shader;
  struct List_1_OverridableTextureProperty_ * TexturePropertiesList;
  struct List_1_OverridableFloatProperty_ * FloatPropertiesList;
  struct List_1_OverridableColorProperty_ * ColorPropertiesList;
  bool SpecifyRenderQueue;
  int32_t RenderQueue;
  float OffsetPositionZ;
  struct Vector2 BlurScale;
  bool m_needsRefreshing;
  float m_oldZ;
  struct Vector3 m_oldScale;
  struct Transform * m_transform;
  struct Texture * _LastMainTexture_k__BackingField;
  int32_t m_lastLayer;
  int32_t m_forceUpdate;
  struct GameObject * m_gameObject;
};
struct CustomizeMaterial {
  struct CustomizeMaterial__Class *klass;
  struct MonitorData *monitor;
  struct CustomizeMaterial__Fields fields;
};
struct __declspec(align(8)) OverridableShaderProperty__Fields {
  bool Override;
  struct Shader * Shader;
};
struct OverridableShaderProperty {
  struct OverridableShaderProperty__Class *klass;
  struct MonitorData *monitor;
  struct OverridableShaderProperty__Fields fields;
};
struct __declspec(align(8)) List_1_OverridableTextureProperty___Fields {
  struct OverridableTextureProperty__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_OverridableTextureProperty_ {
  struct List_1_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
  struct List_1_OverridableTextureProperty___Fields fields;
};
struct __declspec(align(8)) OverridableTextureProperty__Fields {
  bool Override;
  struct String * Name;
  int32_t _ID;
  struct Texture * Texture;
  struct Vector2 Offset;
  struct Vector2 Scale;
};
struct OverridableTextureProperty {
  struct OverridableTextureProperty__Class *klass;
  struct MonitorData *monitor;
  struct OverridableTextureProperty__Fields fields;
};
struct OverridableTextureProperty__Array {
  struct OverridableTextureProperty__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OverridableTextureProperty * vector[32];
};
struct IEnumerator_1_OverridableTextureProperty_ {
  struct IEnumerator_1_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_OverridableFloatProperty___Fields {
  struct OverridableFloatProperty__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_OverridableFloatProperty_ {
  struct List_1_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
  struct List_1_OverridableFloatProperty___Fields fields;
};
struct __declspec(align(8)) OverridableFloatProperty__Fields {
  bool Override;
  struct String * Name;
  int32_t _ID;
  float Value;
};
struct OverridableFloatProperty {
  struct OverridableFloatProperty__Class *klass;
  struct MonitorData *monitor;
  struct OverridableFloatProperty__Fields fields;
};
struct OverridableFloatProperty__Array {
  struct OverridableFloatProperty__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OverridableFloatProperty * vector[32];
};
struct IEnumerator_1_OverridableFloatProperty_ {
  struct IEnumerator_1_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_OverridableColorProperty___Fields {
  struct OverridableColorProperty__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_OverridableColorProperty_ {
  struct List_1_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
  struct List_1_OverridableColorProperty___Fields fields;
};
struct __declspec(align(8)) OverridableColorProperty__Fields {
  bool Override;
  struct String * Name;
  int32_t _ID;
  struct Color Color;
};
struct OverridableColorProperty {
  struct OverridableColorProperty__Class *klass;
  struct MonitorData *monitor;
  struct OverridableColorProperty__Fields fields;
};
struct OverridableColorProperty__Array {
  struct OverridableColorProperty__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OverridableColorProperty * vector[32];
};
struct IEnumerator_1_OverridableColorProperty_ {
  struct IEnumerator_1_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
};
struct OverridableShaderProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OverridableShaderProperty__StaticFields {
};
struct OverridableShaderProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OverridableShaderProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OverridableShaderProperty__VTable vtable;
};
struct OverridableTextureProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OverridableTextureProperty__StaticFields {
};
struct OverridableTextureProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OverridableTextureProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OverridableTextureProperty__VTable vtable;
};
struct IEnumerator_1_OverridableTextureProperty___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_OverridableTextureProperty___StaticFields {
};
struct IEnumerator_1_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_OverridableTextureProperty___VTable vtable;
};
struct List_1_OverridableTextureProperty___VTable {
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
struct List_1_OverridableTextureProperty___StaticFields {
  struct OverridableTextureProperty__Array * _emptyArray;
};
struct List_1_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_OverridableTextureProperty___VTable vtable;
};
struct OverridableFloatProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OverridableFloatProperty__StaticFields {
};
struct OverridableFloatProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OverridableFloatProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OverridableFloatProperty__VTable vtable;
};
struct IEnumerator_1_OverridableFloatProperty___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_OverridableFloatProperty___StaticFields {
};
struct IEnumerator_1_OverridableFloatProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_OverridableFloatProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_OverridableFloatProperty___VTable vtable;
};
struct List_1_OverridableFloatProperty___VTable {
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
struct List_1_OverridableFloatProperty___StaticFields {
  struct OverridableFloatProperty__Array * _emptyArray;
};
struct List_1_OverridableFloatProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_OverridableFloatProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_OverridableFloatProperty___VTable vtable;
};
struct OverridableColorProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OverridableColorProperty__StaticFields {
};
struct OverridableColorProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OverridableColorProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OverridableColorProperty__VTable vtable;
};
struct IEnumerator_1_OverridableColorProperty___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_OverridableColorProperty___StaticFields {
};
struct IEnumerator_1_OverridableColorProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_OverridableColorProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_OverridableColorProperty___VTable vtable;
};
struct List_1_OverridableColorProperty___VTable {
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
struct List_1_OverridableColorProperty___StaticFields {
  struct OverridableColorProperty__Array * _emptyArray;
};
struct List_1_OverridableColorProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_OverridableColorProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_OverridableColorProperty___VTable vtable;
};
struct CustomizeMaterial__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData DoStrip;
};
struct CustomizeMaterial__StaticFields {
};
struct CustomizeMaterial__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomizeMaterial__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomizeMaterial__VTable vtable;
};

struct __declspec(align(8)) MaterialProperties__Fields {
  struct OverridableShaderProperty * Shader;
  struct Dictionary_2_System_String_OverridableTextureProperty_ * TextureProperties;
  struct Dictionary_2_System_String_OverridableFloatProperty_ * FloatProperties;
  struct Dictionary_2_System_String_OverridableColorProperty_ * ColorProperties;
};
struct MaterialProperties {
  struct MaterialProperties__Class *klass;
  struct MonitorData *monitor;
  struct MaterialProperties__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_OverridableTextureProperty___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_OverridableTextureProperty_ {
  struct Dictionary_2_System_String_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_OverridableTextureProperty___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct OverridableTextureProperty * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___Fields {
  struct Dictionary_2_System_String_OverridableTextureProperty_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___Fields {
  struct Dictionary_2_System_String_OverridableTextureProperty_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___Fields fields;
};
struct ICollection_1_OverridableTextureProperty_ {
  struct ICollection_1_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_OverridableTextureProperty_ {
  struct String * key;
  struct OverridableTextureProperty * value;
};
struct KeyValuePair_2_System_String_OverridableTextureProperty___Boxed {
  struct KeyValuePair_2_System_String_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_OverridableTextureProperty_ fields;
};
struct KeyValuePair_2_System_String_OverridableTextureProperty___Array {
  struct KeyValuePair_2_System_String_OverridableTextureProperty___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_OverridableTextureProperty_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_OverridableTextureProperty_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_OverridableTextureProperty_ {
  struct IEnumerable_1_OverridableTextureProperty___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_OverridableFloatProperty___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableFloatProperty_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableFloatProperty_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_OverridableFloatProperty_ {
  struct Dictionary_2_System_String_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_OverridableFloatProperty___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct OverridableFloatProperty * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableFloatProperty___Fields {
  struct Dictionary_2_System_String_OverridableFloatProperty_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableFloatProperty_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableFloatProperty___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableFloatProperty___Fields {
  struct Dictionary_2_System_String_OverridableFloatProperty_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableFloatProperty_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableFloatProperty___Fields fields;
};
struct ICollection_1_OverridableFloatProperty_ {
  struct ICollection_1_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_OverridableFloatProperty_ {
  struct String * key;
  struct OverridableFloatProperty * value;
};
struct KeyValuePair_2_System_String_OverridableFloatProperty___Boxed {
  struct KeyValuePair_2_System_String_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_OverridableFloatProperty_ fields;
};
struct KeyValuePair_2_System_String_OverridableFloatProperty___Array {
  struct KeyValuePair_2_System_String_OverridableFloatProperty___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_OverridableFloatProperty_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_OverridableFloatProperty_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_OverridableFloatProperty_ {
  struct IEnumerable_1_OverridableFloatProperty___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_OverridableColorProperty___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableColorProperty_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableColorProperty_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_OverridableColorProperty_ {
  struct Dictionary_2_System_String_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_OverridableColorProperty___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct OverridableColorProperty * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableColorProperty_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableColorProperty___Fields {
  struct Dictionary_2_System_String_OverridableColorProperty_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableColorProperty_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableColorProperty___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableColorProperty___Fields {
  struct Dictionary_2_System_String_OverridableColorProperty_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableColorProperty_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableColorProperty___Fields fields;
};
struct ICollection_1_OverridableColorProperty_ {
  struct ICollection_1_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_OverridableColorProperty_ {
  struct String * key;
  struct OverridableColorProperty * value;
};
struct KeyValuePair_2_System_String_OverridableColorProperty___Boxed {
  struct KeyValuePair_2_System_String_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_OverridableColorProperty_ fields;
};
struct KeyValuePair_2_System_String_OverridableColorProperty___Array {
  struct KeyValuePair_2_System_String_OverridableColorProperty___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_OverridableColorProperty_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_OverridableColorProperty_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_OverridableColorProperty_ {
  struct IEnumerable_1_OverridableColorProperty___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableTextureProperty___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableTextureProperty___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableTextureProperty___VTable vtable;
};
struct ICollection_1_OverridableTextureProperty___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_OverridableTextureProperty___StaticFields {
};
struct ICollection_1_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_OverridableTextureProperty___VTable vtable;
};
struct KeyValuePair_2_System_String_OverridableTextureProperty___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_OverridableTextureProperty___StaticFields {
};
struct KeyValuePair_2_System_String_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_OverridableTextureProperty___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_OverridableTextureProperty___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_OverridableTextureProperty___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_OverridableTextureProperty___VTable vtable;
};
struct IEnumerable_1_OverridableTextureProperty___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_OverridableTextureProperty___StaticFields {
};
struct IEnumerable_1_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_OverridableTextureProperty___VTable vtable;
};
struct Dictionary_2_System_String_OverridableTextureProperty___VTable {
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
struct Dictionary_2_System_String_OverridableTextureProperty___StaticFields {
};
struct Dictionary_2_System_String_OverridableTextureProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_OverridableTextureProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_OverridableTextureProperty___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_OverridableFloatProperty___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_OverridableFloatProperty___VTable {
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
};}