namespace app {
enum class HorizontalWrapMode__Enum : int32_t {
    Wrap = 0x00000000,
    Overflow = 0x00000001,
};

struct HorizontalWrapMode__Enum__Boxed {
    struct HorizontalWrapMode__Enum__Class *klass;
    MonitorData *monitor;
    HorizontalWrapMode__Enum value;
    
};

struct TextGenerationSettings {
    struct Font *font;
    struct Color color;
    int32_t fontSize;
    float lineSpacing;
    bool richText;
    float scaleFactor;
    FontStyle__Enum fontStyle;
    
    TextAnchor__Enum textAnchor;
    
    bool alignByGeometry;
    bool resizeTextForBestFit;
    int32_t resizeTextMinSize;
    int32_t resizeTextMaxSize;
    bool updateBounds;
    VerticalWrapMode__Enum verticalOverflow;
    
    HorizontalWrapMode__Enum horizontalOverflow;
    
    struct Vector2 generationExtents;
    struct Vector2 pivot;
    bool generateOutOfBounds;
};

struct TextGenerationSettings__Boxed {
    struct TextGenerationSettings__Class *klass;
    MonitorData *monitor;
    struct TextGenerationSettings fields;
};

struct Font__Fields {
    struct Object_1__Fields _;
    struct Font_FontTextureRebuildCallback *m_FontTextureRebuildCallback;
};

struct Font {
    struct Font__Class *klass;
    MonitorData *monitor;
    struct Font__Fields fields;
};

struct Action_1_UnityEngine_Font___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UnityEngine_Font_ {
    struct Action_1_UnityEngine_Font___Class *klass;
    MonitorData *monitor;
    struct Action_1_UnityEngine_Font___Fields fields;
};

struct Font_FontTextureRebuildCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct Font_FontTextureRebuildCallback {
    struct Font_FontTextureRebuildCallback__Class *klass;
    MonitorData *monitor;
    struct Font_FontTextureRebuildCallback__Fields fields;
};

struct Action_1_UnityEngine_Font___VTable {
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

struct Action_1_UnityEngine_Font___StaticFields {
};

struct Action_1_UnityEngine_Font___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_UnityEngine_Font___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_UnityEngine_Font___VTable vtable;
};

struct Font_FontTextureRebuildCallback__VTable {
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

struct Font_FontTextureRebuildCallback__StaticFields {
};

struct Font_FontTextureRebuildCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Font_FontTextureRebuildCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Font_FontTextureRebuildCallback__VTable vtable;
};

struct Font__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Font__StaticFields {
    struct Action_1_UnityEngine_Font_ *textureRebuilt;
};

struct Font__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Font__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Font__VTable vtable;
};

struct FontStyle__Enum__VTable {
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

struct FontStyle__Enum__StaticFields {
};

struct FontStyle__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FontStyle__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FontStyle__Enum__VTable vtable;
};

struct TextAnchor__Enum__VTable {
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

struct TextAnchor__Enum__StaticFields {
};

struct TextAnchor__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextAnchor__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextAnchor__Enum__VTable vtable;
};

struct VerticalWrapMode__Enum__VTable {
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

struct VerticalWrapMode__Enum__StaticFields {
};

struct VerticalWrapMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalWrapMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalWrapMode__Enum__VTable vtable;
};

struct HorizontalWrapMode__Enum__VTable {
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

struct HorizontalWrapMode__Enum__StaticFields {
};

struct HorizontalWrapMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HorizontalWrapMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HorizontalWrapMode__Enum__VTable vtable;
};

struct TextGenerationSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TextGenerationSettings__StaticFields {
};

struct TextGenerationSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextGenerationSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextGenerationSettings__VTable vtable;
};

enum class TextGenerationError__Enum : int32_t {
    None = 0x00000000,
    CustomSizeOnNonDynamicFont = 0x00000001,
    CustomStyleOnNonDynamicFont = 0x00000002,
    NoFont = 0x00000004,
};

struct TextGenerationError__Enum__Boxed {
    struct TextGenerationError__Enum__Class *klass;
    MonitorData *monitor;
    TextGenerationError__Enum value;
    
};

struct __declspec(align(8)) TextGenerator__Fields {
    void *m_Ptr;
    struct String *m_LastString;
    struct TextGenerationSettings m_LastSettings;
    bool m_HasGenerated;
    TextGenerationError__Enum m_LastValid;
    
    struct List_1_UnityEngine_UIVertex_ *m_Verts;
    struct List_1_UnityEngine_UICharInfo_ *m_Characters;
    struct List_1_UnityEngine_UILineInfo_ *m_Lines;
    bool m_CachedVerts;
    bool m_CachedCharacters;
    bool m_CachedLines;
};

struct TextGenerator {
    struct TextGenerator__Class *klass;
    MonitorData *monitor;
    struct TextGenerator__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_UIVertex___Fields {
    struct UIVertex__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_UIVertex_ {
    struct List_1_UnityEngine_UIVertex___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_UIVertex___Fields fields;
};

struct UIVertex {
    struct Vector3 position;
    struct Vector3 normal;
    struct Vector4 tangent;
    struct Color32 color;
    struct Vector2 uv0;
    struct Vector2 uv1;
    struct Vector2 uv2;
    struct Vector2 uv3;
};

struct UIVertex__Boxed {
    struct UIVertex__Class *klass;
    MonitorData *monitor;
    struct UIVertex fields;
};

struct UIVertex__Array {
    struct UIVertex__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UIVertex vector[32];
};

struct IEnumerator_1_UnityEngine_UIVertex_ {
    struct IEnumerator_1_UnityEngine_UIVertex___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_UnityEngine_UICharInfo___Fields {
    struct UICharInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_UICharInfo_ {
    struct List_1_UnityEngine_UICharInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_UICharInfo___Fields fields;
};

struct UICharInfo {
    struct Vector2 cursorPos;
    float charWidth;
};

struct UICharInfo__Boxed {
    struct UICharInfo__Class *klass;
    MonitorData *monitor;
    struct UICharInfo fields;
};

struct UICharInfo__Array {
    struct UICharInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UICharInfo vector[32];
};

struct IEnumerator_1_UnityEngine_UICharInfo_ {
    struct IEnumerator_1_UnityEngine_UICharInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_UnityEngine_UILineInfo___Fields {
    struct UILineInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_UILineInfo_ {
    struct List_1_UnityEngine_UILineInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_UILineInfo___Fields fields;
};

struct UILineInfo {
    int32_t startCharIdx;
    int32_t height;
    float topY;
    float leading;
};

struct UILineInfo__Boxed {
    struct UILineInfo__Class *klass;
    MonitorData *monitor;
    struct UILineInfo fields;
};

struct UILineInfo__Array {
    struct UILineInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UILineInfo vector[32];
};

struct IEnumerator_1_UnityEngine_UILineInfo_ {
    struct IEnumerator_1_UnityEngine_UILineInfo___Class *klass;
    MonitorData *monitor;
};

struct TextGenerationError__Enum__VTable {
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

struct TextGenerationError__Enum__StaticFields {
};

struct TextGenerationError__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextGenerationError__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextGenerationError__Enum__VTable vtable;
};

struct UIVertex__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UIVertex__StaticFields {
    struct Color32 s_DefaultColor;
    struct Vector4 s_DefaultTangent;
    struct UIVertex simpleVert;
};

struct UIVertex__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UIVertex__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UIVertex__VTable vtable;
};

struct UIVertex__Array__VTable {
};

struct UIVertex__Array__StaticFields {
};

struct UIVertex__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UIVertex__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UIVertex__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_UIVertex___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_UIVertex___StaticFields {
};

struct IEnumerator_1_UnityEngine_UIVertex___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_UIVertex___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UnityEngine_UIVertex___VTable vtable;
};

struct List_1_UnityEngine_UIVertex___VTable {
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

struct List_1_UnityEngine_UIVertex___StaticFields {
    struct UIVertex__Array *_emptyArray;
};

struct List_1_UnityEngine_UIVertex___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_UIVertex___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_UIVertex___VTable vtable;
};

struct UICharInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UICharInfo__StaticFields {
};

struct UICharInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UICharInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UICharInfo__VTable vtable;
};

struct UICharInfo__Array__VTable {
};

struct UICharInfo__Array__StaticFields {
};

struct UICharInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UICharInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UICharInfo__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_UICharInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_UICharInfo___StaticFields {
};

struct IEnumerator_1_UnityEngine_UICharInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_UICharInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UnityEngine_UICharInfo___VTable vtable;
};

struct List_1_UnityEngine_UICharInfo___VTable {
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

struct List_1_UnityEngine_UICharInfo___StaticFields {
    struct UICharInfo__Array *_emptyArray;
};

struct List_1_UnityEngine_UICharInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_UICharInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_UICharInfo___VTable vtable;
};

struct UILineInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UILineInfo__StaticFields {
};

struct UILineInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UILineInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UILineInfo__VTable vtable;
};

struct UILineInfo__Array__VTable {
};

struct UILineInfo__Array__StaticFields {
};

struct UILineInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UILineInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UILineInfo__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_UILineInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_UILineInfo___StaticFields {
};

struct IEnumerator_1_UnityEngine_UILineInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_UILineInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UnityEngine_UILineInfo___VTable vtable;
};

struct List_1_UnityEngine_UILineInfo___VTable {
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

struct List_1_UnityEngine_UILineInfo___StaticFields {
    struct UILineInfo__Array *_emptyArray;
};

struct List_1_UnityEngine_UILineInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_UILineInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_UILineInfo___VTable vtable;
};

struct TextGenerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IDisposable_Dispose;
};

struct TextGenerator__StaticFields {
};

struct TextGenerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextGenerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextGenerator__VTable vtable;
};

struct IList_1_UnityEngine_UIVertex_ {
    struct IList_1_UnityEngine_UIVertex___Class *klass;
    MonitorData *monitor;
};

struct IList_1_UnityEngine_UIVertex___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_UnityEngine_UIVertex___StaticFields {
};

struct IList_1_UnityEngine_UIVertex___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_UnityEngine_UIVertex___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_UnityEngine_UIVertex___VTable vtable;
};

struct IList_1_UnityEngine_UICharInfo_ {
    struct IList_1_UnityEngine_UICharInfo___Class *klass;
    MonitorData *monitor;
};

struct IList_1_UnityEngine_UICharInfo___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_UnityEngine_UICharInfo___StaticFields {
};

struct IList_1_UnityEngine_UICharInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_UnityEngine_UICharInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_UnityEngine_UICharInfo___VTable vtable;
};

struct IList_1_UnityEngine_UILineInfo_ {
    struct IList_1_UnityEngine_UILineInfo___Class *klass;
    MonitorData *monitor;
};

struct IList_1_UnityEngine_UILineInfo___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_UnityEngine_UILineInfo___StaticFields {
};

struct IList_1_UnityEngine_UILineInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_UnityEngine_UILineInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_UnityEngine_UILineInfo___VTable vtable;
};

struct TextGenerationError___VTable {
};

struct TextGenerationError___StaticFields {
};

struct TextGenerationError___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextGenerationError___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextGenerationError___VTable vtable;
};

struct GUIText__Fields {
    struct GUIElement__Fields _;
};

struct GUIText {
    struct GUIText__Class *klass;
    MonitorData *monitor;
    struct GUIText__Fields fields;
};

struct GUIText__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GUIText__StaticFields {
};

struct GUIText__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIText__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIText__VTable vtable;
};

struct TextMesh__Fields {
    struct Component_1__Fields _;
};

struct TextMesh {
    struct TextMesh__Class *klass;
    MonitorData *monitor;
    struct TextMesh__Fields fields;
};

struct TextMesh__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TextMesh__StaticFields {
};

struct TextMesh__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextMesh__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextMesh__VTable vtable;
};

enum class TextAlignment__Enum : int32_t {
    Left = 0x00000000,
    Center = 0x00000001,
    Right = 0x00000002,
};

struct TextAlignment__Enum__Boxed {
    struct TextAlignment__Enum__Class *klass;
    MonitorData *monitor;
    TextAlignment__Enum value;
    
};

}
