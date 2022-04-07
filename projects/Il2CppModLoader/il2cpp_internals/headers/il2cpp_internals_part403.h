namespace app {
struct LensAberrations_VignetteSettings__StaticFields {
};
struct LensAberrations_VignetteSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LensAberrations_VignetteSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LensAberrations_VignetteSettings__VTable vtable;
};
struct LensAberrations_ChromaticAberrationSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LensAberrations_ChromaticAberrationSettings__StaticFields {
};
struct LensAberrations_ChromaticAberrationSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LensAberrations_ChromaticAberrationSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LensAberrations_ChromaticAberrationSettings__VTable vtable;
};
struct LensAberrations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LensAberrations__StaticFields {
};
struct LensAberrations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LensAberrations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LensAberrations__VTable vtable;
};

struct LensAberrations_SettingsGroup {
  struct LensAberrations_SettingsGroup__Class *klass;
  struct MonitorData *monitor;
};
struct LensAberrations_SettingsGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct LensAberrations_SettingsGroup__StaticFields {
};
struct LensAberrations_SettingsGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LensAberrations_SettingsGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LensAberrations_SettingsGroup__VTable vtable;
};

struct LensAberrations_AdvancedSetting {
  struct LensAberrations_AdvancedSetting__Class *klass;
  struct MonitorData *monitor;
};
struct LensAberrations_AdvancedSetting__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct LensAberrations_AdvancedSetting__StaticFields {
};
struct LensAberrations_AdvancedSetting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LensAberrations_AdvancedSetting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LensAberrations_AdvancedSetting__VTable vtable;
};

enum ScreenSpaceReflection_SSRReflectionBlendType__Enum : int32_t {
  ScreenSpaceReflection_SSRReflectionBlendType__Enum_PhysicallyBased = 0,
  ScreenSpaceReflection_SSRReflectionBlendType__Enum_Additive = 1,
};
struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScreenSpaceReflection_SSRReflectionBlendType__Enum value;
};
enum ScreenSpaceReflection_SSRResolution__Enum : int32_t {
  ScreenSpaceReflection_SSRResolution__Enum_High = 0,
  ScreenSpaceReflection_SSRResolution__Enum_Low = 2,
};
struct ScreenSpaceReflection_SSRResolution__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScreenSpaceReflection_SSRResolution__Enum value;
};
struct ScreenSpaceReflection_ReflectionSettings {
  enum ScreenSpaceReflection_SSRReflectionBlendType__Enum blendType;
  enum ScreenSpaceReflection_SSRResolution__Enum reflectionQuality;
  float maxDistance;
  int32_t iterationCount;
  int32_t stepSize;
  float widthModifier;
  float reflectionBlur;
  bool reflectBackfaces;
};
struct ScreenSpaceReflection_ReflectionSettings__Boxed {
  struct ScreenSpaceReflection_ReflectionSettings__Class *klass;
  struct MonitorData *monitor;
  struct ScreenSpaceReflection_ReflectionSettings fields;
};
struct ScreenSpaceReflection_IntensitySettings {
  float reflectionMultiplier;
  float fadeDistance;
  float fresnelFade;
  float fresnelFadePower;
};
struct ScreenSpaceReflection_IntensitySettings__Boxed {
  struct ScreenSpaceReflection_IntensitySettings__Class *klass;
  struct MonitorData *monitor;
  struct ScreenSpaceReflection_IntensitySettings fields;
};
struct ScreenSpaceReflection_ScreenEdgeMask {
  float intensity;
};
struct ScreenSpaceReflection_ScreenEdgeMask__Boxed {
  struct ScreenSpaceReflection_ScreenEdgeMask__Class *klass;
  struct MonitorData *monitor;
  struct ScreenSpaceReflection_ScreenEdgeMask fields;
};
struct ScreenSpaceReflection_SSRSettings {
  struct ScreenSpaceReflection_ReflectionSettings reflectionSettings;
  struct ScreenSpaceReflection_IntensitySettings intensitySettings;
  struct ScreenSpaceReflection_ScreenEdgeMask screenEdgeMask;
};
struct ScreenSpaceReflection_SSRSettings__Boxed {
  struct ScreenSpaceReflection_SSRSettings__Class *klass;
  struct MonitorData *monitor;
  struct ScreenSpaceReflection_SSRSettings fields;
};
struct ScreenSpaceReflection__Fields {
  struct MonoBehaviour__Fields _;
  struct ScreenSpaceReflection_SSRSettings settings;
  bool highlightSuppression;
  bool traceBehindObjects;
  bool treatBackfaceHitAsMiss;
  bool bilateralUpsample;
  struct Shader * m_Shader;
  struct Material * m_Material;
  struct Camera * m_Camera;
  struct CommandBuffer * m_CommandBuffer;
};
struct ScreenSpaceReflection {
  struct ScreenSpaceReflection__Class *klass;
  struct MonitorData *monitor;
  struct ScreenSpaceReflection__Fields fields;
};
struct ScreenSpaceReflection_ReflectionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScreenSpaceReflection_ReflectionSettings__StaticFields {
};
struct ScreenSpaceReflection_ReflectionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceReflection_ReflectionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceReflection_ReflectionSettings__VTable vtable;
};
struct ScreenSpaceReflection_IntensitySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScreenSpaceReflection_IntensitySettings__StaticFields {
};
struct ScreenSpaceReflection_IntensitySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceReflection_IntensitySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceReflection_IntensitySettings__VTable vtable;
};
struct ScreenSpaceReflection_ScreenEdgeMask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScreenSpaceReflection_ScreenEdgeMask__StaticFields {
};
struct ScreenSpaceReflection_ScreenEdgeMask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceReflection_ScreenEdgeMask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceReflection_ScreenEdgeMask__VTable vtable;
};
struct ScreenSpaceReflection_SSRSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScreenSpaceReflection_SSRSettings__StaticFields {
  struct ScreenSpaceReflection_SSRSettings s_Default;
};
struct ScreenSpaceReflection_SSRSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceReflection_SSRSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceReflection_SSRSettings__VTable vtable;
};
struct ScreenSpaceReflection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScreenSpaceReflection__StaticFields {
  int32_t kNormalAndRoughnessTexture;
  int32_t kHitPointTexture;
  struct Int32__Array * kReflectionTextures;
  int32_t kFilteredReflections;
  int32_t kBlurTexture;
  int32_t kFinalReflectionTexture;
  int32_t kTempTexture;
};
struct ScreenSpaceReflection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceReflection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceReflection__VTable vtable;
};

struct ScreenSpaceReflection_SSRSettings_LayoutAttribute {
  struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__StaticFields {
};
struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__VTable vtable;
};

struct CCFont__Fields {
  struct ScriptableObject__Fields _;
  struct CCFont_Char__Array * asciiChars;
  struct CCFont_Char__Array * otherChars;
  int32_t pixelLineHeight;
  float pixelScale;
  float baseline;
  float spaceAdvance;
  bool supportsKerning;
  float leftMargin;
  float rightMargin;
  float topMargin;
  float bottomMargin;
  struct CCFont_Char * missing;
};
struct CCFont {
  struct CCFont__Class *klass;
  struct MonitorData *monitor;
  struct CCFont__Fields fields;
};
struct __declspec(align(8)) CCFont_Char__Fields {
  int32_t id;
  float uMin;
  float uMax;
  float vMin;
  float vMax;
  float xOffset;
  float yOffset;
  float width;
  float height;
  float advance;
  struct Int32__Array * kerningIds;
  struct Single__Array * kernings;
};
struct CCFont_Char {
  struct CCFont_Char__Class *klass;
  struct MonitorData *monitor;
  struct CCFont_Char__Fields fields;
};
struct CCFont_Char__Array {
  struct CCFont_Char__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CCFont_Char * vector[32];
};
struct CCFont_Char__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CCFont_Char__StaticFields {
};
struct CCFont_Char__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCFont_Char__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCFont_Char__VTable vtable;
};
struct CCFont__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CCFont__StaticFields {
};
struct CCFont__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCFont__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCFont__VTable vtable;
};

enum CCGradient_InterpolationMode__Enum : int32_t {
  CCGradient_InterpolationMode__Enum_Linear = 0,
  CCGradient_InterpolationMode__Enum_Smooth = 1,
};
struct CCGradient_InterpolationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCGradient_InterpolationMode__Enum value;
};
enum CCGradient_WrapMode__Enum : int32_t {
  CCGradient_WrapMode__Enum_Clamp = 0,
  CCGradient_WrapMode__Enum_Repeat = 1,
  CCGradient_WrapMode__Enum_Flip = 2,
};
struct CCGradient_WrapMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCGradient_WrapMode__Enum value;
};
struct CCGradient__Fields {
  struct ScriptableObject__Fields _;
  enum CCGradient_InterpolationMode__Enum interpolation;
  enum CCGradient_WrapMode__Enum wrap;
  struct Color__Array * colors;
  struct Single__Array * positions;
};
struct CCGradient {
  struct CCGradient__Class *klass;
  struct MonitorData *monitor;
  struct CCGradient__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCGradient__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCGradient__VTable vtable;
};

enum CCText_AlignmentMode__Enum : int32_t {
  CCText_AlignmentMode__Enum_Left = 0,
  CCText_AlignmentMode__Enum_Center = 1,
  CCText_AlignmentMode__Enum_Right = 2,
  CCText_AlignmentMode__Enum_Justify = 3,
};
struct CCText_AlignmentMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCText_AlignmentMode__Enum value;
};
enum CCText_BoundingMode__Enum : int32_t {
  CCText_BoundingMode__Enum_Caret = 0,
  CCText_BoundingMode__Enum_Margin = 1,
};
struct CCText_BoundingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCText_BoundingMode__Enum value;
};
enum CCText_HorizontalAnchorMode__Enum : int32_t {
  CCText_HorizontalAnchorMode__Enum_Left = 0,
  CCText_HorizontalAnchorMode__Enum_Center = 1,
  CCText_HorizontalAnchorMode__Enum_Right = 2,
};
struct CCText_HorizontalAnchorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCText_HorizontalAnchorMode__Enum value;
};
enum CCText_VerticalAnchorMode__Enum : int32_t {
  CCText_VerticalAnchorMode__Enum_Top = 0,
  CCText_VerticalAnchorMode__Enum_Middle = 1,
  CCText_VerticalAnchorMode__Enum_Bottom = 2,
  CCText_VerticalAnchorMode__Enum_Baseline = 3,
};
struct CCText_VerticalAnchorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCText_VerticalAnchorMode__Enum value;
};
struct CCText__Fields {
  struct MonoBehaviour__Fields _;
  enum CCText_AlignmentMode__Enum alignment;
  enum CCText_BoundingMode__Enum bounding;
  enum CCText_HorizontalAnchorMode__Enum horizontalAnchor;
  enum CCText_VerticalAnchorMode__Enum verticalAnchor;
  int32_t chunkSize;
  struct Color color;
  struct CCFont * font;
  int32_t lineCount;
  float lineHeight;
  float lineWidth;
  struct CCTextModifier * modifier;
  struct Vector3 offset;
  int32_t spriteCount;
  int32_t usedSpriteCount;
  struct String * text;
  float tabSize;
  float width;
  struct Vector3 minBounds;
  struct Vector3 maxBounds;
  struct Mesh * mesh;
  struct Vector3__Array * vertices;
  struct Color__Array * colors;
  struct Vector2__Array * uv;
  struct Int32__Array * triangles;
  struct MeshCollider * meshCollider;
  struct Vector3 caretStart;
};
struct CCText {
  struct CCText__Class *klass;
  struct MonitorData *monitor;
  struct CCText__Fields fields;
};
struct CCTextModifier__Fields {
  struct MonoBehaviour__Fields _;
};
struct CCTextModifier {
  struct CCTextModifier__Class *klass;
  struct MonitorData *monitor;
  struct CCTextModifier__Fields fields;
};
struct CCMoonTextColorer__Fields {
  struct CCTextModifier__Fields _;
  struct Color__Array * _Colors_k__BackingField;
  float _Count_k__BackingField;
  struct AnimationCurve * OpacityCurve;
  struct AnimationCurve * ScaleCurve;
};
struct CCMoonTextColorer {
  struct CCMoonTextColorer__Class *klass;
  struct MonitorData *monitor;
  struct CCMoonTextColorer__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCMoonTextColorer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCTextModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCText__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCText__VTable vtable;
};

struct GUIController__Fields {
  struct MonoBehaviour__Fields _;
  struct CCText * text;
  struct GUIController_FontPackage__Array * fontPackages;
  struct CCTextModifier__Array * modifiers;
  struct Shader__Array * shaders;
  struct CCGradient__Array * gradients;
  int32_t selectedContent;
  int32_t selectedAlignment;
  int32_t selectedFont;
  int32_t selectedShader;
  int32_t selectedGradient;
  int32_t selectedModifier;
  bool useDistanceMap;
  float scale;
  float width;
  struct String__Array * fontOptions;
  struct Texture2D__Array * gradientMaps;
  struct Material * textMaterial;
  struct Transform * textTransform;
  struct Vector3 rotation;
  struct StringBuilder * stringBuilder;
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
  struct MonitorData *monitor;
  struct GUIController__Fields fields;
};
struct __declspec(align(8)) GUIController_FontPackage__Fields {
  struct CCFont * font;
  struct Texture2D * atlas;
  struct Texture2D * distanceMap;
};
struct GUIController_FontPackage {
  struct GUIController_FontPackage__Class *klass;
  struct MonitorData *monitor;
  struct GUIController_FontPackage__Fields fields;
};
struct GUIController_FontPackage__Array {
  struct GUIController_FontPackage__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GUIController_FontPackage * vector[32];
};
struct CCTextModifier__Array {
  struct CCTextModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CCTextModifier * vector[32];
};
struct Shader__Array {
  struct Shader__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Shader * vector[32];
};
struct CCGradient__Array {
  struct CCGradient__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CCGradient * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIController_FontPackage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIController_FontPackage__VTable vtable;
};
struct GUIController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUIController__StaticFields {
  struct String__Array * contentOptions;
  struct String__Array * alignmentOptions;
  struct String__Array * modifierOptions;
  struct String__Array * shaderOptions;
};
struct GUIController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIController__VTable vtable;
};

enum CCTextCylinderWrapper_WrapMode__Enum : int32_t {
  CCTextCylinderWrapper_WrapMode__Enum_X = 0,
  CCTextCylinderWrapper_WrapMode__Enum_Y = 1,
};
struct CCTextCylinderWrapper_WrapMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCTextCylinderWrapper_WrapMode__Enum value;
};
struct CCTextCylinderWrapper__Fields {
  struct CCTextModifier__Fields _;
  enum CCTextCylinderWrapper_WrapMode__Enum wrapMode;
  float radius;
};
struct CCTextCylinderWrapper {
  struct CCTextCylinderWrapper__Class *klass;
  struct MonitorData *monitor;
  struct CCTextCylinderWrapper__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCTextCylinderWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCTextCylinderWrapper__VTable vtable;
};

struct CCTextMarkedColorer__Fields {
  struct CCTextModifier__Fields _;
  struct String * beginSymbol;
  struct String * endSymbol;
  struct Color color;
};
struct CCTextMarkedColorer {
  struct CCTextMarkedColorer__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCTextMarkedColorer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCTextMarkedColorer__VTable vtable;
};

struct CCTextRangeColorer__Fields {
  struct CCTextModifier__Fields _;
  struct String * rangeBeginSymbol;
  struct String * rangeEndSymbol;
  struct Color color;
};
struct CCTextRangeColorer {
  struct CCTextRangeColorer__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCTextRangeColorer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCTextRangeColorer__VTable vtable;
};

enum CCTextTorusWrapper_RevolveMode__Enum : int32_t {
  CCTextTorusWrapper_RevolveMode__Enum_X = 0,
  CCTextTorusWrapper_RevolveMode__Enum_Y = 1,
};
struct CCTextTorusWrapper_RevolveMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CCTextTorusWrapper_RevolveMode__Enum value;
};
struct CCTextTorusWrapper__Fields {
  struct CCTextModifier__Fields _;
  enum CCTextTorusWrapper_RevolveMode__Enum revolveMode;
  float minorRadius;
  float majorRadius;
};
struct CCTextTorusWrapper {
  struct CCTextTorusWrapper__Class *klass;
  struct MonitorData *monitor;
  struct CCTextTorusWrapper__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCTextTorusWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCTextTorusWrapper__VTable vtable;
};

struct CCTextVerticalColorer__Fields {
  struct CCTextModifier__Fields _;
  struct Color topColor;
  struct Color bottomColor;
};
struct CCTextVerticalColorer {
  struct CCTextVerticalColorer__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCTextVerticalColorer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCTextVerticalColorer__VTable vtable;
};

struct __declspec(align(8)) _ArrayPoolDefault__Fields {
  void * swigCPtr;
  bool swigCMemOwn;
};
struct _ArrayPoolDefault {
  struct _ArrayPoolDefault__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct _ArrayPoolDefault__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct _ArrayPoolDefault__VTable vtable;
};

struct __declspec(align(8)) _ArrayPoolLEngineDefault__Fields {
  void * swigCPtr;
  bool swigCMemOwn;
};
struct _ArrayPoolLEngineDefault {
  struct _ArrayPoolLEngineDefault__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct _ArrayPoolLEngineDefault__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct _ArrayPoolLEngineDefault__VTable vtable;
};

struct __declspec(align(8)) _ArrayPoolSpatialAudio__Fields {
  void * swigCPtr;
  bool swigCMemOwn;
};
struct _ArrayPoolSpatialAudio {
  struct _ArrayPoolSpatialAudio__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct _ArrayPoolSpatialAudio__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct _ArrayPoolSpatialAudio__VTable vtable;
};

struct __declspec(align(8)) AkAcousticSurface__Fields {
  void * swigCPtr;
  bool swigCMemOwn;
};
struct AkAcousticSurface {
  struct AkAcousticSurface__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkAcousticSurface__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkAcousticSurface__VTable vtable;
};

struct __declspec(align(8)) AkAudioFormat__Fields {
  void * swigCPtr;
  bool swigCMemOwn;
};
struct AkAudioFormat {
  struct AkAudioFormat__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkAudioFormat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkAudioFormat__VTable vtable;
};

struct __declspec(align(8)) AkChannelConfig__Fields {
  void * swigCPtr;
  bool swigCMemOwn;
};
struct AkChannelConfig {
  struct AkChannelConfig__Class *klass;
  struct MonitorData *monitor;
  struct AkChannelConfig__Fields fields;
};
struct AkChannelConfig__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData setCPtr;
  VirtualInvokeData Dispose_1;
};
struct AkChannelConfig__StaticFields {
};}