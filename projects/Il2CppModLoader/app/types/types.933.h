namespace app {
struct UberAtlasExclusions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberAtlasExclusions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberAtlasExclusions__VTable vtable;
};

struct AtlassingSetting {
    int32_t ScreenResolutionX;
    int32_t ScreenResolutionY;
    float ZBias;
    float SizeFactor;
    bool DoMipmapping;
    struct String *BuildPath;
    float AnimRes;
    int32_t MaxAtlasSize;
    float SiceDownsampleFactor;
    float LightMaskDownsampleFactor;
    float LightCanvasFarFromCenterDownsampleFactor;
    bool UseSingleAtlasSetForGameplay;
    FilterMode__Enum FilterMode;
    
    float ContourMeshDetailMultiplier;
    bool HasOwnContourMeshFolder;
    bool PackAtlasesByScreenMode;
    bool UseASTC;
    bool UseScreening;
    bool SeparateLightCanvasesPerScene;
    bool UseHeroAssetAtlases;
    float ExtraZoom;
    int32_t RoundSizeToMultiplesOf;
    int32_t RoundSizeToMultiplesOfCanvas;
    int32_t ClampedSize;
    int32_t ClampedSizeCanvases;
    int32_t ClampedSizeLightMask;
    float VertexMergeDistance;
};

struct AtlassingSetting__Boxed {
    struct AtlassingSetting__Class *klass;
    MonitorData *monitor;
    struct AtlassingSetting fields;
};

struct AtlassingSetting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AtlassingSetting__StaticFields {
};

struct AtlassingSetting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AtlassingSetting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AtlassingSetting__VTable vtable;
};

enum class UberShaderAtlasTextureDataType__Enum : int32_t {
    Default = 0x00000000,
    LightMask = 0x00000001,
    LightCanvas = 0x00000002,
    Animation = 0x00000003,
    Border = 0x00000004,
};

struct UberShaderAtlasTextureDataType__Enum__Boxed {
    struct UberShaderAtlasTextureDataType__Enum__Class *klass;
    MonitorData *monitor;
    UberShaderAtlasTextureDataType__Enum value;
    
};

struct __declspec(align(8)) UberShaderAtlasTextureData__Fields {
    bool Flipped;
    struct Vector4 AtlasUv;
    struct Vector4 AtlasMinMax;
    struct Vector2 DOFStrength;
    struct Vector2 MaxScreenSize;
    struct Texture2D *OriginalTexture;
    struct String *OriginalTextureGUID;
    struct String *AtlasTextureGUID;
    int32_t AtlasIndex;
    UberScreenMode__Enum UberScreenMode;
    
    float UberScreenTweak;
    float MipBias;
    UberShaderAtlasTextureDataType__Enum AtlasTextureType;
    
};

struct UberShaderAtlasTextureData {
    struct UberShaderAtlasTextureData__Class *klass;
    MonitorData *monitor;
    struct UberShaderAtlasTextureData__Fields fields;
};

struct UberShaderAtlasTextureDataType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct UberShaderAtlasTextureDataType__Enum__StaticFields {
};

struct UberShaderAtlasTextureDataType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAtlasTextureDataType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAtlasTextureDataType__Enum__VTable vtable;
};

struct UberShaderAtlasTextureData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberShaderAtlasTextureData__StaticFields {
};

struct UberShaderAtlasTextureData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAtlasTextureData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAtlasTextureData__VTable vtable;
};

struct UberShaderAtlasUtilities {
    struct UberShaderAtlasUtilities__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo_ {
    struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___Fields fields;
};

struct UberShaderAtlasUtilities_TextureInfo {
    bool IsBlurry;
    bool ExcludeFromAtlas;
    bool IsShared;
    bool IsHero;
    bool IsUnique;
    bool IsScarce;
    bool IsZone;
    bool ExcludeFromScreen;
};

struct UberShaderAtlasUtilities_TextureInfo__Boxed {
    struct UberShaderAtlasUtilities_TextureInfo__Class *klass;
    MonitorData *monitor;
    struct UberShaderAtlasUtilities_TextureInfo fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct UberShaderAtlasUtilities_TextureInfo value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Fields {
    struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Fields {
    struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Fields fields;
};

struct UberShaderAtlasUtilities_TextureInfo__Array {
    struct UberShaderAtlasUtilities_TextureInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderAtlasUtilities_TextureInfo vector[32];
};

struct IEnumerator_1_UberShaderAtlasUtilities_TextureInfo_ {
    struct IEnumerator_1_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_UberShaderAtlasUtilities_TextureInfo_ {
    struct ICollection_1_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo_ {
    struct String *key;
    struct UberShaderAtlasUtilities_TextureInfo value;
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Boxed {
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo_ fields;
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Array {
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UberShaderAtlasUtilities_TextureInfo_ {
    struct IEnumerable_1_UberShaderAtlasUtilities_TextureInfo___Class *klass;
    MonitorData *monitor;
};

struct UberShaderAtlasUtilities_TextureInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberShaderAtlasUtilities_TextureInfo__StaticFields {
};

struct UberShaderAtlasUtilities_TextureInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAtlasUtilities_TextureInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAtlasUtilities_TextureInfo__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_UberShaderAtlasUtilities_TextureInfo___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct UberShaderAtlasUtilities_TextureInfo__Array__VTable {
};

struct UberShaderAtlasUtilities_TextureInfo__Array__StaticFields {
};

struct UberShaderAtlasUtilities_TextureInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAtlasUtilities_TextureInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAtlasUtilities_TextureInfo__Array__VTable vtable;
};

struct IEnumerator_1_UberShaderAtlasUtilities_TextureInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct IEnumerator_1_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct ICollection_1_UberShaderAtlasUtilities_TextureInfo___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct ICollection_1_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct UberShaderAtlasUtilities_TextureInfo___VTable {
};

struct UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Array__VTable {
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Array__StaticFields {
};

struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct IEnumerable_1_UberShaderAtlasUtilities_TextureInfo___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct IEnumerable_1_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___VTable {
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

struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields {
};

struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo___VTable vtable;
};

struct UberShaderAtlasUtilities__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberShaderAtlasUtilities__StaticFields {
    bool _DisableAtlas_k__BackingField;
    struct Dictionary_2_System_String_UberShaderAtlasUtilities_TextureInfo_ *s_texInfo;
};

struct UberShaderAtlasUtilities__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAtlasUtilities__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAtlasUtilities__VTable vtable;
};

struct UberShaderDynamicTexture__Fields {
    struct MonoBehaviour__Fields _;
};

struct UberShaderDynamicTexture {
    struct UberShaderDynamicTexture__Class *klass;
    MonitorData *monitor;
    struct UberShaderDynamicTexture__Fields fields;
};

struct UberShaderDynamicTexture__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberShaderDynamicTexture__StaticFields {
};

struct UberShaderDynamicTexture__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderDynamicTexture__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderDynamicTexture__VTable vtable;
};

struct __declspec(align(8)) PathTracerOutput__Fields {
    struct Vector2__Array__Array *Paths;
    struct Vector2__Array__Array *Holes;
    struct Vector2__Array *HoleLocations;
};

struct PathTracerOutput {
    struct PathTracerOutput__Class *klass;
    MonitorData *monitor;
    struct PathTracerOutput__Fields fields;
};

struct Vector2__Array__Array {
    struct Vector2__Array__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Vector2__Array *vector[32];
};

struct Vector2__Array__Array__VTable {
};

struct Vector2__Array__Array__StaticFields {
};

struct Vector2__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Vector2__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Vector2__Array__Array__VTable vtable;
};

struct PathTracerOutput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PathTracerOutput__StaticFields {
};

struct PathTracerOutput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PathTracerOutput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PathTracerOutput__VTable vtable;
};

enum class UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum : int32_t {
    Fader = 0x00000000,
    FaderB_Default = 0x00000001,
    FaderB_NoCleanup = 0x00000002,
    FaderB_Cleanup = 0x00000003,
    FaderB_FinalInCutscene = 0x00000004,
    GameMapUI = 0x00000005,
    InventoryScreen2 = 0x00000006,
    DebugTool = 0x00000007,
    SpiritShardsScreen = 0x00000008,
    WatchCutscenes = 0x00000009,
    GameControllerInitialize = 0x0000000a,
    RestartGame = 0x0000000b,
    LoadSaveGame = 0x0000000c,
    Teleporter = 0x0000000d,
    CinematicFader_NoCleanup = 0x0000000e,
    CinematicFader_ForceCleanup = 0x0000000f,
    Default = 0x00000010,
    Door = 0x00000011,
    RestoreCheckpoint = 0x00000012,
    PrologueEnd = 0x00000013,
    KuFlightStart = 0x00000014,
    MokiLowerRope = 0x00000015,
    LeverAtDoubleJump = 0x00000016,
    LumaPoolsAfterKwolokMeeting = 0x00000017,
    SilentWoodsBurningVillage = 0x00000018,
    MouldwoodDepthsLightRays = 0x00000019,
    MidnightBurrowsEntrance = 0x0000001a,
    LumaPoolsSaveRoom = 0x0000001b,
    BaursReachAfterAvalanche = 0x0000001c,
    Count = 0x0000001d,
};

struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Boxed {
    struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class *klass;
    MonitorData *monitor;
    UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum value;
    
};

struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__StaticFields {
};

struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__VTable vtable;
};

enum class UberGCLogic_CleanupTrigger__Enum : int32_t {
    Fader = 0x00000000,
    IdleGameplay = 0x00000001,
    ActiveGameplay = 0x00000002,
    Teleporter = 0x00000003,
    Count = 0x00000004,
};

struct UberGCLogic_CleanupTrigger__Enum__Boxed {
    struct UberGCLogic_CleanupTrigger__Enum__Class *klass;
    MonitorData *monitor;
    UberGCLogic_CleanupTrigger__Enum value;
    
};

struct UberGCLogic_CleanupTrigger__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct UberGCLogic_CleanupTrigger__Enum__StaticFields {
};

struct UberGCLogic_CleanupTrigger__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberGCLogic_CleanupTrigger__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberGCLogic_CleanupTrigger__Enum__VTable vtable;
};

struct OnProjectStartup {
    struct OnProjectStartup__Class *klass;
    MonitorData *monitor;
};

struct OnProjectStartup__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct OnProjectStartup__StaticFields {
};

struct OnProjectStartup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OnProjectStartup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OnProjectStartup__VTable vtable;
};

struct UberEnvirionmentParticle__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 Offset;
    struct Rect Bounds;
};

struct UberEnvirionmentParticle {
    struct UberEnvirionmentParticle__Class *klass;
    MonitorData *monitor;
    struct UberEnvirionmentParticle__Fields fields;
};

struct UberEnvirionmentParticle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberEnvirionmentParticle__StaticFields {
};

struct UberEnvirionmentParticle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberEnvirionmentParticle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberEnvirionmentParticle__VTable vtable;
};

struct UberShaderAllowAtlassingOnSkinnedMesh__Fields {
    struct MonoBehaviour__Fields _;
};

struct UberShaderAllowAtlassingOnSkinnedMesh {
    struct UberShaderAllowAtlassingOnSkinnedMesh__Class *klass;
    MonitorData *monitor;
    struct UberShaderAllowAtlassingOnSkinnedMesh__Fields fields;
};

struct UberShaderAllowAtlassingOnSkinnedMesh__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DoStrip;
};

struct UberShaderAllowAtlassingOnSkinnedMesh__StaticFields {
};

struct UberShaderAllowAtlassingOnSkinnedMesh__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAllowAtlassingOnSkinnedMesh__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAllowAtlassingOnSkinnedMesh__VTable vtable;
};

struct UberShaderBuildUpdate__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UberShaderBuildUpdate_WorldProjectionUpdateEntry_ *m_wordProjectionEntries;
};

struct UberShaderBuildUpdate {
    struct UberShaderBuildUpdate__Class *klass;
    MonitorData *monitor;
    struct UberShaderBuildUpdate__Fields fields;
};

struct __declspec(align(8)) List_1_UberShaderBuildUpdate_WorldProjectionUpdateEntry___Fields {
    struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberShaderBuildUpdate_WorldProjectionUpdateEntry_ {
    struct List_1_UberShaderBuildUpdate_WorldProjectionUpdateEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_UberShaderBuildUpdate_WorldProjectionUpdateEntry___Fields fields;
};

struct __declspec(align(8)) UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields {
    struct String *BindName;
    struct Renderer *Renderer;
    ProjectionAxis__Enum ProjectionAxis;
    
    struct Transform *Anchor;
    struct Transform *LookAtTarget;
    struct Vector2 AnchorOffset;
    float RotationOffset;
    bool LockToAnchorRotation;
};

struct UberShaderBuildUpdate_WorldProjectionUpdateEntry {
    struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class *klass;
    MonitorData *monitor;
    struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields fields;
};

struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array {
    struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderBuildUpdate_WorldProjectionUpdateEntry *vector[32];
};

struct IEnumerator_1_UberShaderBuildUpdate_WorldProjectionUpdateEntry_ {
    struct IEnumerator_1_UberShaderBuildUpdate_WorldProjectionUpdateEntry___Class *klass;
    MonitorData *monitor;
};

struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__StaticFields {
};

struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderBuildUpdate_WorldProjectionUpdateEntry__VTable vtable;
};

}
