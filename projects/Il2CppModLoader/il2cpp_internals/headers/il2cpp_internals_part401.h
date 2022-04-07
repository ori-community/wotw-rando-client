namespace app {
struct ColorCorrectionCurves {
  struct ColorCorrectionCurves__Class *klass;
  struct MonitorData *monitor;
  struct ColorCorrectionCurves__Fields fields;
};
struct ColorCorrectionCurves__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct ColorCorrectionCurves__StaticFields {
};
struct ColorCorrectionCurves__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorCorrectionCurves__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorCorrectionCurves__VTable vtable;
};

struct ColorCorrectionLookup__Fields {
  struct PostEffectsBase__Fields _;
  struct Shader * shader;
  struct Material * material;
  struct Texture3D * converted3DLut;
  struct String * basedOnTempTex;
};
struct ColorCorrectionLookup {
  struct ColorCorrectionLookup__Class *klass;
  struct MonitorData *monitor;
  struct ColorCorrectionLookup__Fields fields;
};
struct ColorCorrectionLookup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct ColorCorrectionLookup__StaticFields {
};
struct ColorCorrectionLookup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorCorrectionLookup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorCorrectionLookup__VTable vtable;
};

struct ContrastEnhance__Fields {
  struct PostEffectsBase__Fields _;
  float intensity;
  float threshold;
  struct Material * separableBlurMaterial;
  struct Material * contrastCompositeMaterial;
  float blurSpread;
  struct Shader * separableBlurShader;
  struct Shader * contrastCompositeShader;
};
struct ContrastEnhance {
  struct ContrastEnhance__Class *klass;
  struct MonitorData *monitor;
  struct ContrastEnhance__Fields fields;
};
struct ContrastEnhance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct ContrastEnhance__StaticFields {
};
struct ContrastEnhance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContrastEnhance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContrastEnhance__VTable vtable;
};

struct CreaseShading__Fields {
  struct PostEffectsBase__Fields _;
  float intensity;
  int32_t softness;
  float spread;
  struct Shader * blurShader;
  struct Material * blurMaterial;
  struct Shader * depthFetchShader;
  struct Material * depthFetchMaterial;
  struct Shader * creaseApplyShader;
  struct Material * creaseApplyMaterial;
};
struct CreaseShading {
  struct CreaseShading__Class *klass;
  struct MonitorData *monitor;
  struct CreaseShading__Fields fields;
};
struct CreaseShading__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct CreaseShading__StaticFields {
};
struct CreaseShading__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreaseShading__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreaseShading__VTable vtable;
};

enum DepthOfField_BlurType__Enum : int32_t {
  DepthOfField_BlurType__Enum_DiscBlur = 0,
  DepthOfField_BlurType__Enum_DX11 = 1,
};
struct DepthOfField_BlurType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfField_BlurType__Enum value;
};
enum DepthOfField_BlurSampleCount__Enum : int32_t {
  DepthOfField_BlurSampleCount__Enum_Low = 0,
  DepthOfField_BlurSampleCount__Enum_Medium = 1,
  DepthOfField_BlurSampleCount__Enum_High = 2,
};
struct DepthOfField_BlurSampleCount__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfField_BlurSampleCount__Enum value;
};
struct DepthOfField__Fields {
  struct PostEffectsBase__Fields _;
  bool visualizeFocus;
  float focalLength;
  float focalSize;
  float aperture;
  struct Transform * focalTransform;
  float maxBlurSize;
  bool highResolution;
  enum DepthOfField_BlurType__Enum blurType;
  enum DepthOfField_BlurSampleCount__Enum blurSampleCount;
  bool nearBlur;
  float foregroundOverlap;
  struct Shader * dofHdrShader;
  struct Material * dofHdrMaterial;
  struct Shader * dx11BokehShader;
  struct Material * dx11bokehMaterial;
  float dx11BokehThreshold;
  float dx11SpawnHeuristic;
  struct Texture2D * dx11BokehTexture;
  float dx11BokehScale;
  float dx11BokehIntensity;
  float focalDistance01;
  struct ComputeBuffer * cbDrawArgs;
  struct ComputeBuffer * cbPoints;
  float internalBlurWidth;
  struct Camera * cachedCamera;
};
struct DepthOfField {
  struct DepthOfField__Class *klass;
  struct MonitorData *monitor;
  struct DepthOfField__Fields fields;
};
struct DepthOfField__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct DepthOfField__StaticFields {
};
struct DepthOfField__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthOfField__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthOfField__VTable vtable;
};

enum DepthOfFieldDeprecated_Dof34QualitySetting__Enum : int32_t {
  DepthOfFieldDeprecated_Dof34QualitySetting__Enum_OnlyBackground = 1,
  DepthOfFieldDeprecated_Dof34QualitySetting__Enum_BackgroundAndForeground = 2,
};
struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfFieldDeprecated_Dof34QualitySetting__Enum value;
};
enum DepthOfFieldDeprecated_DofResolution__Enum : int32_t {
  DepthOfFieldDeprecated_DofResolution__Enum_High = 2,
  DepthOfFieldDeprecated_DofResolution__Enum_Medium = 3,
  DepthOfFieldDeprecated_DofResolution__Enum_Low = 4,
};
struct DepthOfFieldDeprecated_DofResolution__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfFieldDeprecated_DofResolution__Enum value;
};
enum DepthOfFieldDeprecated_DofBlurriness__Enum : int32_t {
  DepthOfFieldDeprecated_DofBlurriness__Enum_Low = 1,
  DepthOfFieldDeprecated_DofBlurriness__Enum_High = 2,
  DepthOfFieldDeprecated_DofBlurriness__Enum_VeryHigh = 4,
};
struct DepthOfFieldDeprecated_DofBlurriness__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfFieldDeprecated_DofBlurriness__Enum value;
};
enum DepthOfFieldDeprecated_BokehDestination__Enum : int32_t {
  DepthOfFieldDeprecated_BokehDestination__Enum_Background = 1,
  DepthOfFieldDeprecated_BokehDestination__Enum_Foreground = 2,
  DepthOfFieldDeprecated_BokehDestination__Enum_BackgroundAndForeground = 3,
};
struct DepthOfFieldDeprecated_BokehDestination__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfFieldDeprecated_BokehDestination__Enum value;
};
struct DepthOfFieldDeprecated__Fields {
  struct PostEffectsBase__Fields _;
  enum DepthOfFieldDeprecated_Dof34QualitySetting__Enum quality;
  enum DepthOfFieldDeprecated_DofResolution__Enum resolution;
  bool simpleTweakMode;
  float focalPoint;
  float smoothness;
  float focalZDistance;
  float focalZStartCurve;
  float focalZEndCurve;
  float focalStartCurve;
  float focalEndCurve;
  float focalDistance01;
  struct Transform * objectFocus;
  float focalSize;
  enum DepthOfFieldDeprecated_DofBlurriness__Enum bluriness;
  float maxBlurSpread;
  float foregroundBlurExtrude;
  struct Shader * dofBlurShader;
  struct Material * dofBlurMaterial;
  struct Shader * dofShader;
  struct Material * dofMaterial;
  bool visualize;
  enum DepthOfFieldDeprecated_BokehDestination__Enum bokehDestination;
  float widthOverHeight;
  float oneOverBaseSize;
  bool bokeh;
  bool bokehSupport;
  struct Shader * bokehShader;
  struct Texture2D * bokehTexture;
  float bokehScale;
  float bokehIntensity;
  float bokehThresholdContrast;
  float bokehThresholdLuminance;
  int32_t bokehDownsample;
  struct Material * bokehMaterial;
  struct Camera * _camera;
  struct RenderTexture * foregroundTexture;
  struct RenderTexture * mediumRezWorkTexture;
  struct RenderTexture * finalDefocus;
  struct RenderTexture * lowRezWorkTexture;
  struct RenderTexture * bokehSource;
  struct RenderTexture * bokehSource2;
};
struct DepthOfFieldDeprecated {
  struct DepthOfFieldDeprecated__Class *klass;
  struct MonitorData *monitor;
  struct DepthOfFieldDeprecated__Fields fields;
};
struct DepthOfFieldDeprecated__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct DepthOfFieldDeprecated__StaticFields {
  int32_t SMOOTH_DOWNSAMPLE_PASS;
  float BOKEH_EXTRA_BLUR;
};
struct DepthOfFieldDeprecated__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthOfFieldDeprecated__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthOfFieldDeprecated__VTable vtable;
};

enum EdgeDetection_EdgeDetectMode__Enum : int32_t {
  EdgeDetection_EdgeDetectMode__Enum_TriangleDepthNormals = 0,
  EdgeDetection_EdgeDetectMode__Enum_RobertsCrossDepthNormals = 1,
  EdgeDetection_EdgeDetectMode__Enum_SobelDepth = 2,
  EdgeDetection_EdgeDetectMode__Enum_SobelDepthThin = 3,
  EdgeDetection_EdgeDetectMode__Enum_TriangleLuminance = 4,
};
struct EdgeDetection_EdgeDetectMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EdgeDetection_EdgeDetectMode__Enum value;
};
struct EdgeDetection__Fields {
  struct PostEffectsBase__Fields _;
  enum EdgeDetection_EdgeDetectMode__Enum mode;
  float sensitivityDepth;
  float sensitivityNormals;
  float lumThreshold;
  float edgeExp;
  float sampleDist;
  float edgesOnly;
  struct Color edgesOnlyBgColor;
  struct Shader * edgeDetectShader;
  struct Material * edgeDetectMaterial;
  enum EdgeDetection_EdgeDetectMode__Enum oldMode;
};
struct EdgeDetection {
  struct EdgeDetection__Class *klass;
  struct MonitorData *monitor;
  struct EdgeDetection__Fields fields;
};
struct EdgeDetection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct EdgeDetection__StaticFields {
};
struct EdgeDetection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EdgeDetection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EdgeDetection__VTable vtable;
};

struct Fisheye__Fields {
  struct PostEffectsBase__Fields _;
  float strengthX;
  float strengthY;
  struct Shader * fishEyeShader;
  struct Material * fisheyeMaterial;
};
struct Fisheye {
  struct Fisheye__Class *klass;
  struct MonitorData *monitor;
  struct Fisheye__Fields fields;
};
struct Fisheye__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct Fisheye__StaticFields {
};
struct Fisheye__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Fisheye__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Fisheye__VTable vtable;
};

struct GlobalFog__Fields {
  struct PostEffectsBase__Fields _;
  bool distanceFog;
  bool excludeFarPixels;
  bool useRadialDistance;
  bool heightFog;
  float height;
  float heightDensity;
  float startDistance;
  struct Shader * fogShader;
  struct Material * fogMaterial;
};
struct GlobalFog {
  struct GlobalFog__Class *klass;
  struct MonitorData *monitor;
  struct GlobalFog__Fields fields;
};
struct GlobalFog__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct GlobalFog__StaticFields {
};
struct GlobalFog__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GlobalFog__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GlobalFog__VTable vtable;
};

struct NoiseAndGrain__Fields {
  struct PostEffectsBase__Fields _;
  float intensityMultiplier;
  float generalIntensity;
  float blackIntensity;
  float whiteIntensity;
  float midGrey;
  bool dx11Grain;
  float softness;
  bool monochrome;
  struct Vector3 intensities;
  struct Vector3 tiling;
  float monochromeTiling;
  enum FilterMode__Enum filterMode;
  struct Texture2D * noiseTexture;
  struct Shader * noiseShader;
  struct Material * noiseMaterial;
  struct Shader * dx11NoiseShader;
  struct Material * dx11NoiseMaterial;
};
struct NoiseAndGrain {
  struct NoiseAndGrain__Class *klass;
  struct MonitorData *monitor;
  struct NoiseAndGrain__Fields fields;
};
struct NoiseAndGrain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct NoiseAndGrain__StaticFields {
  float TILE_AMOUNT;
};
struct NoiseAndGrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NoiseAndGrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NoiseAndGrain__VTable vtable;
};

struct PostEffectsHelper__Fields {
  struct MonoBehaviour__Fields _;
};
struct PostEffectsHelper {
  struct PostEffectsHelper__Class *klass;
  struct MonitorData *monitor;
  struct PostEffectsHelper__Fields fields;
};
struct PostEffectsHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PostEffectsHelper__StaticFields {
};
struct PostEffectsHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PostEffectsHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PostEffectsHelper__VTable vtable;
};

struct Quads {
  struct Quads__Class *klass;
  struct MonitorData *monitor;
};
struct Quads__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Quads__StaticFields {
  struct Mesh__Array * meshes;
  int32_t currentQuads;
};
struct Quads__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Quads__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Quads__VTable vtable;
};

enum ScreenOverlay_OverlayBlendMode__Enum : int32_t {
  ScreenOverlay_OverlayBlendMode__Enum_Additive = 0,
  ScreenOverlay_OverlayBlendMode__Enum_ScreenBlend = 1,
  ScreenOverlay_OverlayBlendMode__Enum_Multiply = 2,
  ScreenOverlay_OverlayBlendMode__Enum_Overlay = 3,
  ScreenOverlay_OverlayBlendMode__Enum_AlphaBlend = 4,
};
struct ScreenOverlay_OverlayBlendMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScreenOverlay_OverlayBlendMode__Enum value;
};
struct ScreenOverlay__Fields {
  struct PostEffectsBase__Fields _;
  enum ScreenOverlay_OverlayBlendMode__Enum blendMode;
  float intensity;
  struct Texture2D * texture;
  struct Shader * overlayShader;
  struct Material * overlayMaterial;
};
struct ScreenOverlay {
  struct ScreenOverlay__Class *klass;
  struct MonitorData *monitor;
  struct ScreenOverlay__Fields fields;
};
struct ScreenOverlay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct ScreenOverlay__StaticFields {
};
struct ScreenOverlay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenOverlay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenOverlay__VTable vtable;
};

struct ScreenSpaceAmbientObscurance__Fields {
  struct PostEffectsBase__Fields _;
  float intensity;
  float radius;
  int32_t blurIterations;
  float blurFilterDistance;
  int32_t downsample;
  struct Texture2D * rand;
  struct Shader * aoShader;
  struct Material * aoMaterial;
};
struct ScreenSpaceAmbientObscurance {
  struct ScreenSpaceAmbientObscurance__Class *klass;
  struct MonitorData *monitor;
  struct ScreenSpaceAmbientObscurance__Fields fields;
};
struct ScreenSpaceAmbientObscurance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct ScreenSpaceAmbientObscurance__StaticFields {
};
struct ScreenSpaceAmbientObscurance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceAmbientObscurance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceAmbientObscurance__VTable vtable;
};

enum SunShafts_SunShaftsResolution__Enum : int32_t {
  SunShafts_SunShaftsResolution__Enum_Low = 0,
  SunShafts_SunShaftsResolution__Enum_Normal = 1,
  SunShafts_SunShaftsResolution__Enum_High = 2,
};
struct SunShafts_SunShaftsResolution__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SunShafts_SunShaftsResolution__Enum value;
};
enum SunShafts_ShaftsScreenBlendMode__Enum : int32_t {
  SunShafts_ShaftsScreenBlendMode__Enum_Screen = 0,
  SunShafts_ShaftsScreenBlendMode__Enum_Add = 1,
};
struct SunShafts_ShaftsScreenBlendMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SunShafts_ShaftsScreenBlendMode__Enum value;
};
struct SunShafts__Fields {
  struct PostEffectsBase__Fields _;
  enum SunShafts_SunShaftsResolution__Enum resolution;
  enum SunShafts_ShaftsScreenBlendMode__Enum screenBlendMode;
  struct Transform * sunTransform;
  int32_t radialBlurIterations;
  struct Color sunColor;
  struct Color sunThreshold;
  float sunShaftBlurRadius;
  float sunShaftIntensity;
  float maxRadius;
  bool useDepthTexture;
  struct Shader * sunShaftsShader;
  struct Material * sunShaftsMaterial;
  struct Shader * simpleClearShader;
  struct Material * simpleClearMaterial;
};
struct SunShafts {
  struct SunShafts__Class *klass;
  struct MonitorData *monitor;
  struct SunShafts__Fields fields;
};
struct SunShafts__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct SunShafts__StaticFields {
};
struct SunShafts__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SunShafts__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SunShafts__VTable vtable;
};

enum TiltShift_TiltShiftMode__Enum : int32_t {
  TiltShift_TiltShiftMode__Enum_TiltShiftMode = 0,
  TiltShift_TiltShiftMode__Enum_IrisMode = 1,
};
struct TiltShift_TiltShiftMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TiltShift_TiltShiftMode__Enum value;
};
enum TiltShift_TiltShiftQuality__Enum : int32_t {
  TiltShift_TiltShiftQuality__Enum_Preview = 0,
  TiltShift_TiltShiftQuality__Enum_Normal = 1,
  TiltShift_TiltShiftQuality__Enum_High = 2,
};
struct TiltShift_TiltShiftQuality__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TiltShift_TiltShiftQuality__Enum value;
};
struct TiltShift__Fields {
  struct PostEffectsBase__Fields _;
  enum TiltShift_TiltShiftMode__Enum mode;
  enum TiltShift_TiltShiftQuality__Enum quality;
  float blurArea;
  float maxBlurSize;
  int32_t downsample;
  struct Shader * tiltShiftShader;
  struct Material * tiltShiftMaterial;
};
struct TiltShift {
  struct TiltShift__Class *klass;
  struct MonitorData *monitor;
  struct TiltShift__Fields fields;
};
struct TiltShift__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct TiltShift__StaticFields {
};
struct TiltShift__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TiltShift__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TiltShift__VTable vtable;
};

enum Tonemapping_TonemapperType__Enum : int32_t {
  Tonemapping_TonemapperType__Enum_SimpleReinhard = 0,
  Tonemapping_TonemapperType__Enum_UserCurve = 1,
  Tonemapping_TonemapperType__Enum_Hable = 2,
  Tonemapping_TonemapperType__Enum_Photographic = 3,
  Tonemapping_TonemapperType__Enum_OptimizedHejiDawson = 4,
  Tonemapping_TonemapperType__Enum_AdaptiveReinhard = 5,
  Tonemapping_TonemapperType__Enum_AdaptiveReinhardAutoWhite = 6,
};
struct Tonemapping_TonemapperType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Tonemapping_TonemapperType__Enum value;
};
enum Tonemapping_AdaptiveTexSize__Enum : int32_t {
  Tonemapping_AdaptiveTexSize__Enum_Square16 = 16,
  Tonemapping_AdaptiveTexSize__Enum_Square32 = 32,
  Tonemapping_AdaptiveTexSize__Enum_Square64 = 64,
  Tonemapping_AdaptiveTexSize__Enum_Square128 = 128,
  Tonemapping_AdaptiveTexSize__Enum_Square256 = 256,
  Tonemapping_AdaptiveTexSize__Enum_Square512 = 512,
  Tonemapping_AdaptiveTexSize__Enum_Square1024 = 1024,
};
struct Tonemapping_AdaptiveTexSize__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Tonemapping_AdaptiveTexSize__Enum value;
};
struct Tonemapping__Fields {
  struct PostEffectsBase__Fields _;
  enum Tonemapping_TonemapperType__Enum type;
  enum Tonemapping_AdaptiveTexSize__Enum adaptiveTextureSize;
  struct AnimationCurve * remapCurve;
  struct Texture2D * curveTex;
  float exposureAdjustment;
  float middleGrey;
  float white;
  float adaptionSpeed;
  struct Shader * tonemapper;
  bool validRenderTextureFormat;
  struct Material * tonemapMaterial;
  struct RenderTexture * rt;
  enum RenderTextureFormat__Enum rtFormat;
};
struct Tonemapping {
  struct Tonemapping__Class *klass;
  struct MonitorData *monitor;
  struct Tonemapping__Fields fields;
};
struct Tonemapping__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct Tonemapping__StaticFields {
};
struct Tonemapping__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tonemapping__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tonemapping__VTable vtable;
};

struct Triangles {
  struct Triangles__Class *klass;
  struct MonitorData *monitor;
};
struct Triangles__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Triangles__StaticFields {
  struct Mesh__Array * meshes;
  int32_t currentTris;
};
struct Triangles__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Triangles__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Triangles__VTable vtable;
};

enum VignetteAndChromaticAberration_AberrationMode__Enum : int32_t {
  VignetteAndChromaticAberration_AberrationMode__Enum_Simple = 0,
  VignetteAndChromaticAberration_AberrationMode__Enum_Advanced = 1,
};
struct VignetteAndChromaticAberration_AberrationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VignetteAndChromaticAberration_AberrationMode__Enum value;
};
struct VignetteAndChromaticAberration__Fields {
  struct PostEffectsBase__Fields _;
  enum VignetteAndChromaticAberration_AberrationMode__Enum mode;
  float intensity;
  float chromaticAberration;
  float axialAberration;
  float blur;
  float blurSpread;
  float luminanceDependency;
  float blurDistance;
  struct Shader * vignetteShader;
  struct Shader * separableBlurShader;
  struct Shader * chromAberrationShader;
  struct Material * m_VignetteMaterial;
  struct Material * m_SeparableBlurMaterial;
  struct Material * m_ChromAberrationMaterial;
};
struct VignetteAndChromaticAberration {
  struct VignetteAndChromaticAberration__Class *klass;
  struct MonitorData *monitor;
  struct VignetteAndChromaticAberration__Fields fields;
};
struct VignetteAndChromaticAberration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct VignetteAndChromaticAberration__StaticFields {
};
struct VignetteAndChromaticAberration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VignetteAndChromaticAberration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VignetteAndChromaticAberration__VTable vtable;
};

struct SepiaTone__Fields {
  struct ImageEffectBase__Fields _;
};
struct SepiaTone {
  struct SepiaTone__Class *klass;
  struct MonitorData *monitor;
  struct SepiaTone__Fields fields;
};
struct SepiaTone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct SepiaTone__StaticFields {
};
struct SepiaTone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SepiaTone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SepiaTone__VTable vtable;
};

enum ScreenSpaceAmbientOcclusion_SSAOSamples__Enum : int32_t {
  ScreenSpaceAmbientOcclusion_SSAOSamples__Enum_Low = 0,
  ScreenSpaceAmbientOcclusion_SSAOSamples__Enum_Medium = 1,
  ScreenSpaceAmbientOcclusion_SSAOSamples__Enum_High = 2,
};
struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScreenSpaceAmbientOcclusion_SSAOSamples__Enum value;
};
struct ScreenSpaceAmbientOcclusion__Fields {
  struct MonoBehaviour__Fields _;
  float m_Radius;
  enum ScreenSpaceAmbientOcclusion_SSAOSamples__Enum m_SampleCount;
  float m_OcclusionIntensity;
  int32_t m_Blur;
  int32_t m_Downsampling;
  float m_OcclusionAttenuation;
  float m_MinZ;
  struct Shader * m_SSAOShader;
  struct Material * m_SSAOMaterial;
  struct Texture2D * m_RandomTexture;
  bool m_Supported;
};
struct ScreenSpaceAmbientOcclusion {
  struct ScreenSpaceAmbientOcclusion__Class *klass;
  struct MonitorData *monitor;
  struct ScreenSpaceAmbientOcclusion__Fields fields;
};
struct ScreenSpaceAmbientOcclusion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScreenSpaceAmbientOcclusion__StaticFields {
};
struct ScreenSpaceAmbientOcclusion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenSpaceAmbientOcclusion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenSpaceAmbientOcclusion__VTable vtable;
};

struct Twirl__Fields {
  struct ImageEffectBase__Fields _;
  struct Vector2 radius;
  float angle;
  struct Vector2 center;
};
struct Twirl {
  struct Twirl__Class *klass;
  struct MonitorData *monitor;
  struct Twirl__Fields fields;
};
struct Twirl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct Twirl__StaticFields {
};
struct Twirl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Twirl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Twirl__VTable vtable;
};

struct Vortex__Fields {
  struct ImageEffectBase__Fields _;
  struct Vector2 radius;
  float angle;
  struct Vector2 center;
};
struct Vortex {
  struct Vortex__Class *klass;
  struct MonitorData *monitor;
  struct Vortex__Fields fields;
};
struct Vortex__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct Vortex__StaticFields {
};
struct Vortex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vortex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vortex__VTable vtable;
};

enum AmbientOcclusion_OcclusionSource__Enum : int32_t {
  AmbientOcclusion_OcclusionSource__Enum_DepthTexture = 0,
  AmbientOcclusion_OcclusionSource__Enum_DepthNormalsTexture = 1,
  AmbientOcclusion_OcclusionSource__Enum_GBuffer = 2,
};
struct AmbientOcclusion_OcclusionSource__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AmbientOcclusion_OcclusionSource__Enum value;
};
struct AmbientOcclusion_PropertyObserver {
  bool _downsampling;
  enum AmbientOcclusion_OcclusionSource__Enum _occlusionSource;
  bool _ambientOnly;
  bool _debug;
  int32_t _pixelWidth;
  int32_t _pixelHeight;
};
struct AmbientOcclusion_PropertyObserver__Boxed {
  struct AmbientOcclusion_PropertyObserver__Class *klass;
  struct MonitorData *monitor;
  struct AmbientOcclusion_PropertyObserver fields;
};
struct AmbientOcclusion__Fields {
  struct MonoBehaviour__Fields _;
  struct AmbientOcclusion_Settings * settings;
  struct Shader * _aoShader;
  struct Material * _aoMaterial;
  struct CommandBuffer * _aoCommands;
  struct AmbientOcclusion_PropertyObserver _propertyObserver_k__BackingField;
  struct Mesh * _quadMesh;
};
struct AmbientOcclusion {
  struct AmbientOcclusion__Class *klass;
  struct MonitorData *monitor;
  struct AmbientOcclusion__Fields fields;
};}