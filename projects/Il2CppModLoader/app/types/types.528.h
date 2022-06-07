namespace app {
struct CCGradient_WrapMode__Enum__VTable {
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

struct CCGradient_WrapMode__Enum__StaticFields {
};

struct CCGradient_WrapMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCGradient_WrapMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCGradient_WrapMode__Enum__VTable vtable;
};

struct CCGradient__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CCGradient__StaticFields {
};

struct CCGradient__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCGradient__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCGradient__VTable vtable;
};

enum class CCText_AlignmentMode__Enum : int32_t {
    Left = 0x00000000,
    Center = 0x00000001,
    Right = 0x00000002,
    Justify = 0x00000003,
};

struct CCText_AlignmentMode__Enum__Boxed {
    struct CCText_AlignmentMode__Enum__Class *klass;
    MonitorData *monitor;
    CCText_AlignmentMode__Enum value;
    
};

enum class CCText_BoundingMode__Enum : int32_t {
    Caret = 0x00000000,
    Margin = 0x00000001,
};

struct CCText_BoundingMode__Enum__Boxed {
    struct CCText_BoundingMode__Enum__Class *klass;
    MonitorData *monitor;
    CCText_BoundingMode__Enum value;
    
};

enum class CCText_HorizontalAnchorMode__Enum : int32_t {
    Left = 0x00000000,
    Center = 0x00000001,
    Right = 0x00000002,
};

struct CCText_HorizontalAnchorMode__Enum__Boxed {
    struct CCText_HorizontalAnchorMode__Enum__Class *klass;
    MonitorData *monitor;
    CCText_HorizontalAnchorMode__Enum value;
    
};

enum class CCText_VerticalAnchorMode__Enum : int32_t {
    Top = 0x00000000,
    Middle = 0x00000001,
    Bottom = 0x00000002,
    Baseline = 0x00000003,
};

struct CCText_VerticalAnchorMode__Enum__Boxed {
    struct CCText_VerticalAnchorMode__Enum__Class *klass;
    MonitorData *monitor;
    CCText_VerticalAnchorMode__Enum value;
    
};

struct CCText__Fields {
    struct MonoBehaviour__Fields _;
    CCText_AlignmentMode__Enum alignment;
    
    CCText_BoundingMode__Enum bounding;
    
    CCText_HorizontalAnchorMode__Enum horizontalAnchor;
    
    CCText_VerticalAnchorMode__Enum verticalAnchor;
    
    int32_t chunkSize;
    struct Color color;
    struct CCFont *font;
    int32_t lineCount;
    float lineHeight;
    float lineWidth;
    struct CCTextModifier *modifier;
    struct Vector3 offset;
    int32_t spriteCount;
    int32_t usedSpriteCount;
    struct String *text;
    float tabSize;
    float width;
    struct Vector3 minBounds;
    struct Vector3 maxBounds;
    struct Mesh *mesh;
    struct Vector3__Array *vertices;
    struct Color__Array *colors;
    struct Vector2__Array *uv;
    struct Int32__Array *triangles;
    struct MeshCollider *meshCollider;
    struct Vector3 caretStart;
};

struct CCText {
    struct CCText__Class *klass;
    MonitorData *monitor;
    struct CCText__Fields fields;
};

struct CCTextModifier__Fields {
    struct MonoBehaviour__Fields _;
};

struct CCTextModifier {
    struct CCTextModifier__Class *klass;
    MonitorData *monitor;
    struct CCTextModifier__Fields fields;
};

struct CCMoonTextColorer__Fields {
    struct CCTextModifier__Fields _;
    struct Color__Array *_Colors_k__BackingField;
    float _Count_k__BackingField;
    struct AnimationCurve *OpacityCurve;
    struct AnimationCurve *ScaleCurve;
};

struct CCMoonTextColorer {
    struct CCMoonTextColorer__Class *klass;
    MonitorData *monitor;
    struct CCMoonTextColorer__Fields fields;
};

struct CCText_AlignmentMode__Enum__VTable {
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

struct CCText_AlignmentMode__Enum__StaticFields {
};

struct CCText_AlignmentMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCText_AlignmentMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCText_AlignmentMode__Enum__VTable vtable;
};

struct CCText_BoundingMode__Enum__VTable {
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

struct CCText_BoundingMode__Enum__StaticFields {
};

struct CCText_BoundingMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCText_BoundingMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCText_BoundingMode__Enum__VTable vtable;
};

struct CCText_HorizontalAnchorMode__Enum__VTable {
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

struct CCText_HorizontalAnchorMode__Enum__StaticFields {
};

struct CCText_HorizontalAnchorMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCText_HorizontalAnchorMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCText_HorizontalAnchorMode__Enum__VTable vtable;
};

struct CCText_VerticalAnchorMode__Enum__VTable {
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

struct CCText_VerticalAnchorMode__Enum__StaticFields {
};

struct CCText_VerticalAnchorMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCText_VerticalAnchorMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCText_VerticalAnchorMode__Enum__VTable vtable;
};

struct CCMoonTextColorer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Modify;
};

struct CCMoonTextColorer__StaticFields {
};

struct CCMoonTextColorer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCMoonTextColorer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCMoonTextColorer__VTable vtable;
};

struct CCTextModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct CCTextModifier__StaticFields {
};

struct CCTextModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextModifier__VTable vtable;
};

struct CCText__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CCText__StaticFields {
    struct Vector3 zeroVector3;
};

struct CCText__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCText__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCText__VTable vtable;
};

struct GUIController__Fields {
    struct MonoBehaviour__Fields _;
    struct CCText *text;
    struct GUIController_FontPackage__Array *fontPackages;
    struct CCTextModifier__Array *modifiers;
    struct Shader__Array *shaders;
    struct CCGradient__Array *gradients;
    int32_t selectedContent;
    int32_t selectedAlignment;
    int32_t selectedFont;
    int32_t selectedShader;
    int32_t selectedGradient;
    int32_t selectedModifier;
    bool useDistanceMap;
    float scale;
    float width;
    struct String__Array *fontOptions;
    struct Texture2D__Array *gradientMaps;
    struct Material *textMaterial;
    struct Transform *textTransform;
    struct Vector3 rotation;
    struct StringBuilder *stringBuilder;
    float alphaBoundary;
    float edgeMin;
    float edgeMax;
    float outlineMin;
    float outlineMax;
    float shadowMin;
    float shadowMax;
    float shadowOffsetU;
    float shadowOffsetV;
    float fadeDistance;
    float fadeStrength;
};

struct GUIController {
    struct GUIController__Class *klass;
    MonitorData *monitor;
    struct GUIController__Fields fields;
};

struct __declspec(align(8)) GUIController_FontPackage__Fields {
    struct CCFont *font;
    struct Texture2D *atlas;
    struct Texture2D *distanceMap;
};

struct GUIController_FontPackage {
    struct GUIController_FontPackage__Class *klass;
    MonitorData *monitor;
    struct GUIController_FontPackage__Fields fields;
};

struct GUIController_FontPackage__Array {
    struct GUIController_FontPackage__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GUIController_FontPackage *vector[32];
};

struct CCTextModifier__Array {
    struct CCTextModifier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CCTextModifier *vector[32];
};

struct Shader__Array {
    struct Shader__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Shader *vector[32];
};

struct CCGradient__Array {
    struct CCGradient__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CCGradient *vector[32];
};

struct GUIController_FontPackage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GUIController_FontPackage__StaticFields {
};

struct GUIController_FontPackage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIController_FontPackage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIController_FontPackage__VTable vtable;
};

struct GUIController_FontPackage__Array__VTable {
};

struct GUIController_FontPackage__Array__StaticFields {
};

struct GUIController_FontPackage__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIController_FontPackage__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIController_FontPackage__Array__VTable vtable;
};

struct CCTextModifier__Array__VTable {
};

struct CCTextModifier__Array__StaticFields {
};

struct CCTextModifier__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextModifier__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextModifier__Array__VTable vtable;
};

struct Shader__Array__VTable {
};

struct Shader__Array__StaticFields {
};

struct Shader__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Shader__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Shader__Array__VTable vtable;
};

struct CCGradient__Array__VTable {
};

struct CCGradient__Array__StaticFields {
};

struct CCGradient__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCGradient__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCGradient__Array__VTable vtable;
};

struct GUIController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GUIController__StaticFields {
    struct String__Array *contentOptions;
    struct String__Array *alignmentOptions;
    struct String__Array *modifierOptions;
    struct String__Array *shaderOptions;
};

struct GUIController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIController__VTable vtable;
};

enum class CCTextCylinderWrapper_WrapMode__Enum : int32_t {
    X = 0x00000000,
    Y = 0x00000001,
};

struct CCTextCylinderWrapper_WrapMode__Enum__Boxed {
    struct CCTextCylinderWrapper_WrapMode__Enum__Class *klass;
    MonitorData *monitor;
    CCTextCylinderWrapper_WrapMode__Enum value;
    
};

struct CCTextCylinderWrapper__Fields {
    struct CCTextModifier__Fields _;
    CCTextCylinderWrapper_WrapMode__Enum wrapMode;
    
    float radius;
};

struct CCTextCylinderWrapper {
    struct CCTextCylinderWrapper__Class *klass;
    MonitorData *monitor;
    struct CCTextCylinderWrapper__Fields fields;
};

struct CCTextCylinderWrapper_WrapMode__Enum__VTable {
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

struct CCTextCylinderWrapper_WrapMode__Enum__StaticFields {
};

struct CCTextCylinderWrapper_WrapMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextCylinderWrapper_WrapMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextCylinderWrapper_WrapMode__Enum__VTable vtable;
};

struct CCTextCylinderWrapper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Modify;
};

struct CCTextCylinderWrapper__StaticFields {
    struct Vector3 notMinimum;
    struct Vector3 notMaximum;
};

struct CCTextCylinderWrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextCylinderWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextCylinderWrapper__VTable vtable;
};

struct CCTextMarkedColorer__Fields {
    struct CCTextModifier__Fields _;
    struct String *beginSymbol;
    struct String *endSymbol;
    struct Color color;
};

struct CCTextMarkedColorer {
    struct CCTextMarkedColorer__Class *klass;
    MonitorData *monitor;
    struct CCTextMarkedColorer__Fields fields;
};

struct CCTextMarkedColorer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Modify;
};

struct CCTextMarkedColorer__StaticFields {
};

struct CCTextMarkedColorer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextMarkedColorer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextMarkedColorer__VTable vtable;
};

struct CCTextRangeColorer__Fields {
    struct CCTextModifier__Fields _;
    struct String *rangeBeginSymbol;
    struct String *rangeEndSymbol;
    struct Color color;
};

struct CCTextRangeColorer {
    struct CCTextRangeColorer__Class *klass;
    MonitorData *monitor;
    struct CCTextRangeColorer__Fields fields;
};

struct CCTextRangeColorer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Modify;
};

struct CCTextRangeColorer__StaticFields {
};

struct CCTextRangeColorer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextRangeColorer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextRangeColorer__VTable vtable;
};

enum class CCTextTorusWrapper_RevolveMode__Enum : int32_t {
    X = 0x00000000,
    Y = 0x00000001,
};

struct CCTextTorusWrapper_RevolveMode__Enum__Boxed {
    struct CCTextTorusWrapper_RevolveMode__Enum__Class *klass;
    MonitorData *monitor;
    CCTextTorusWrapper_RevolveMode__Enum value;
    
};

struct CCTextTorusWrapper__Fields {
    struct CCTextModifier__Fields _;
    CCTextTorusWrapper_RevolveMode__Enum revolveMode;
    
    float minorRadius;
    float majorRadius;
};

struct CCTextTorusWrapper {
    struct CCTextTorusWrapper__Class *klass;
    MonitorData *monitor;
    struct CCTextTorusWrapper__Fields fields;
};

struct CCTextTorusWrapper_RevolveMode__Enum__VTable {
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

struct CCTextTorusWrapper_RevolveMode__Enum__StaticFields {
};

struct CCTextTorusWrapper_RevolveMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextTorusWrapper_RevolveMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextTorusWrapper_RevolveMode__Enum__VTable vtable;
};

struct CCTextTorusWrapper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Modify;
};

struct CCTextTorusWrapper__StaticFields {
    struct Vector3 notMinimum;
    struct Vector3 notMaximum;
};

struct CCTextTorusWrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextTorusWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextTorusWrapper__VTable vtable;
};

struct CCTextVerticalColorer__Fields {
    struct CCTextModifier__Fields _;
    struct Color topColor;
    struct Color bottomColor;
};

struct CCTextVerticalColorer {
    struct CCTextVerticalColorer__Class *klass;
    MonitorData *monitor;
    struct CCTextVerticalColorer__Fields fields;
};

struct CCTextVerticalColorer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Modify;
};

struct CCTextVerticalColorer__StaticFields {
};

struct CCTextVerticalColorer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CCTextVerticalColorer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CCTextVerticalColorer__VTable vtable;
};

struct __declspec(align(8)) _ArrayPoolDefault__Fields {
    void *swigCPtr;
    bool swigCMemOwn;
};

struct _ArrayPoolDefault {
    struct _ArrayPoolDefault__Class *klass;
    MonitorData *monitor;
    struct _ArrayPoolDefault__Fields fields;
};

struct _ArrayPoolDefault__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData setCPtr;
    VirtualInvokeData Dispose_1;
};

struct _ArrayPoolDefault__StaticFields {
};

struct _ArrayPoolDefault__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct _ArrayPoolDefault__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct _ArrayPoolDefault__VTable vtable;
};

struct __declspec(align(8)) _ArrayPoolLEngineDefault__Fields {
    void *swigCPtr;
    bool swigCMemOwn;
};

struct _ArrayPoolLEngineDefault {
    struct _ArrayPoolLEngineDefault__Class *klass;
    MonitorData *monitor;
    struct _ArrayPoolLEngineDefault__Fields fields;
};

struct _ArrayPoolLEngineDefault__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData setCPtr;
    VirtualInvokeData Dispose_1;
};

struct _ArrayPoolLEngineDefault__StaticFields {
};

struct _ArrayPoolLEngineDefault__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct _ArrayPoolLEngineDefault__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct _ArrayPoolLEngineDefault__VTable vtable;
};

struct __declspec(align(8)) _ArrayPoolSpatialAudio__Fields {
    void *swigCPtr;
    bool swigCMemOwn;
};

struct _ArrayPoolSpatialAudio {
    struct _ArrayPoolSpatialAudio__Class *klass;
    MonitorData *monitor;
    struct _ArrayPoolSpatialAudio__Fields fields;
};

struct _ArrayPoolSpatialAudio__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData setCPtr;
    VirtualInvokeData Dispose_1;
};

struct _ArrayPoolSpatialAudio__StaticFields {
};

struct _ArrayPoolSpatialAudio__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct _ArrayPoolSpatialAudio__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct _ArrayPoolSpatialAudio__VTable vtable;
};

struct __declspec(align(8)) AkAcousticSurface__Fields {
    void *swigCPtr;
    bool swigCMemOwn;
};

struct AkAcousticSurface {
    struct AkAcousticSurface__Class *klass;
    MonitorData *monitor;
    struct AkAcousticSurface__Fields fields;
};

struct AkAcousticSurface__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData setCPtr;
    VirtualInvokeData Dispose_1;
};

struct AkAcousticSurface__StaticFields {
};

struct AkAcousticSurface__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkAcousticSurface__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkAcousticSurface__VTable vtable;
};

struct __declspec(align(8)) AkAudioFormat__Fields {
    void *swigCPtr;
    bool swigCMemOwn;
};

struct AkAudioFormat {
    struct AkAudioFormat__Class *klass;
    MonitorData *monitor;
    struct AkAudioFormat__Fields fields;
};

struct AkAudioFormat__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData setCPtr;
    VirtualInvokeData Dispose_1;
};

struct AkAudioFormat__StaticFields {
};

struct AkAudioFormat__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkAudioFormat__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkAudioFormat__VTable vtable;
};

}
