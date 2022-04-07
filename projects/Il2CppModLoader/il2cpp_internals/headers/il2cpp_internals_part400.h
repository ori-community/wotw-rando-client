namespace app {
struct PlayFabEvents__StaticFields {
  struct PlayFabEvents * _instance;
};
struct PlayFabEvents__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabEvents__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabEvents__VTable vtable;
};

struct GlowEffect__Fields {
  struct MonoBehaviour__Fields _;
  float glowIntensity;
  int32_t blurIterations;
  float blurSpread;
  struct Color glowTint;
  struct Shader * compositeShader;
  struct Material * m_CompositeMaterial;
  struct Shader * blurShader;
  struct Material * m_BlurMaterial;
  struct Shader * downsampleShader;
  struct Material * m_DownsampleMaterial;
};
struct GlowEffect {
  struct GlowEffect__Class *klass;
  struct MonitorData *monitor;
  struct GlowEffect__Fields fields;
};
struct GlowEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GlowEffect__StaticFields {
};
struct GlowEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GlowEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GlowEffect__VTable vtable;
};

enum Water_WaterMode__Enum : int32_t {
  Water_WaterMode__Enum_Simple = 0,
  Water_WaterMode__Enum_Reflective = 1,
  Water_WaterMode__Enum_Refractive = 2,
};
struct Water_WaterMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Water_WaterMode__Enum value;
};
struct Water__Fields {
  struct MonoBehaviour__Fields _;
  enum Water_WaterMode__Enum m_WaterMode;
  bool m_DisablePixelLights;
  int32_t m_TextureSize;
  float m_ClipPlaneOffset;
  struct LayerMask m_ReflectLayers;
  struct LayerMask m_RefractLayers;
  struct Hashtable * m_ReflectionCameras;
  struct Hashtable * m_RefractionCameras;
  struct RenderTexture * m_ReflectionTexture;
  struct RenderTexture * m_RefractionTexture;
  enum Water_WaterMode__Enum m_HardwareWaterSupport;
  int32_t m_OldReflectionTextureSize;
  int32_t m_OldRefractionTextureSize;
};
struct Water {
  struct Water__Class *klass;
  struct MonitorData *monitor;
  struct Water__Fields fields;
};
struct Water__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Water__StaticFields {
  bool s_InsideWater;
};
struct Water__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Water__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Water__VTable vtable;
};

enum Water3_WaterMode__Enum : int32_t {
  Water3_WaterMode__Enum_Indie = 0,
  Water3_WaterMode__Enum_FastAndNoRefraction = 1,
  Water3_WaterMode__Enum_Optimized = 2,
  Water3_WaterMode__Enum_Everything = 3,
};
struct Water3_WaterMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Water3_WaterMode__Enum value;
};
struct Water3__Fields {
  struct MonoBehaviour__Fields _;
  enum Water3_WaterMode__Enum m_WaterMode;
  struct Water3Manager * m_WaterManager;
  bool m_DisablePixelLights;
  int32_t m_TextureSize;
  float m_ClipPlaneOffset;
  struct LayerMask m_ReflectLayers;
  struct Hashtable * m_ReflectionCameras;
  struct RenderTexture * m_ReflectionTexture;
  enum Water3_WaterMode__Enum m_HardwareWaterSupport;
  int32_t m_OldReflectionTextureSize;
  bool realtime2DReflection;
  bool autoEdgeBlend;
  bool waterDisplacement;
  bool refractionMask;
  float m_Shininess;
  float m_WaveScale;
  struct Transform * lightTransform;
  struct Vector3 m_FoamWaveParams;
  struct Vector2 m_WaveSpeedBumpA;
  struct Vector2 m_WaveSpeedBumpB;
  struct Vector3 m_DistortParams;
  float m_FadeExp;
  float m_InvFade;
  float m_InvFadeFoam;
  float m_InvFadeDepthFade;
  struct Vector2 m_ShoreTilingBumpA;
  struct Vector2 m_ShoreTilingBumpB;
  float m_UnderwaterCheckOffset;
  struct Material * m_Water3Material;
  bool m_IsDirty;
  bool m_DepthTexturesSupported;
};
struct Water3 {
  struct Water3__Class *klass;
  struct MonitorData *monitor;
  struct Water3__Fields fields;
};
enum Water3Manager_CpuDisplacementModel__Enum : int32_t {
  Water3Manager_CpuDisplacementModel__Enum_None = 0,
  Water3Manager_CpuDisplacementModel__Enum_NoiseBump = 1,
  Water3Manager_CpuDisplacementModel__Enum_FFT = 2,
};
struct Water3Manager_CpuDisplacementModel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Water3Manager_CpuDisplacementModel__Enum value;
};
struct Water3Manager__Fields {
  struct MonoBehaviour__Fields _;
  enum Water3Manager_CpuDisplacementModel__Enum m_CpuDisplacementModel;
  float m_DisplacementTiling;
  float m_NormalsDisplacement;
  float m_HeightDisplacement;
  float m_SmallWavesSpeed;
  struct Texture2D * m_DisplacementHeightMap;
  struct Texture2D * m_2ndDisplacementHeightMap;
  struct Material * m_SharedWaterMaterial;
  float m_Timer;
};
struct Water3Manager {
  struct Water3Manager__Class *klass;
  struct MonitorData *monitor;
  struct Water3Manager__Fields fields;
};
struct Water3Manager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Water3Manager__StaticFields {
  struct Water3Manager * s_Instance;
};
struct Water3Manager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Water3Manager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Water3Manager__VTable vtable;
};
struct Water3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Water3__StaticFields {
  bool s_InsideWater;
};
struct Water3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Water3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Water3__VTable vtable;
};

struct Water3Float__Fields {
  struct MonoBehaviour__Fields _;
  struct Water3 * m_Water;
};
struct Water3Float {
  struct Water3Float__Class *klass;
  struct MonitorData *monitor;
  struct Water3Float__Fields fields;
};
struct Water3Float__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Water3Float__StaticFields {
};
struct Water3Float__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Water3Float__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Water3Float__VTable vtable;
};

struct Water3UnderwaterEffect__Fields {
  struct MonoBehaviour__Fields _;
  float m_UnderwaterColorFade;
  struct Shader * m_UnderwaterShader;
  struct Water3 * m_Water;
  struct Color m_BlendColor;
  struct Material * m_UnderwaterMaterial;
};
struct Water3UnderwaterEffect {
  struct Water3UnderwaterEffect__Class *klass;
  struct MonitorData *monitor;
  struct Water3UnderwaterEffect__Fields fields;
};
struct Water3UnderwaterEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Water3UnderwaterEffect__StaticFields {
};
struct Water3UnderwaterEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Water3UnderwaterEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Water3UnderwaterEffect__VTable vtable;
};

struct Blur__Fields {
  struct MonoBehaviour__Fields _;
  int32_t iterations;
  float blurSpread;
  struct Shader * blurShader;
};
struct Blur {
  struct Blur__Class *klass;
  struct MonitorData *monitor;
  struct Blur__Fields fields;
};
struct Blur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Blur__StaticFields {
  struct Material * m_Material;
};
struct Blur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Blur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Blur__VTable vtable;
};

struct ImageEffectBase__Fields {
  struct MonoBehaviour__Fields _;
  struct Shader * shader;
  struct Material * m_Material;
};
struct ImageEffectBase {
  struct ImageEffectBase__Class *klass;
  struct MonitorData *monitor;
  struct ImageEffectBase__Fields fields;
};
struct ColorCorrectionRamp__Fields {
  struct ImageEffectBase__Fields _;
  struct Texture * textureRamp;
};
struct ColorCorrectionRamp {
  struct ColorCorrectionRamp__Class *klass;
  struct MonitorData *monitor;
  struct ColorCorrectionRamp__Fields fields;
};
struct ImageEffectBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct ImageEffectBase__StaticFields {
};
struct ImageEffectBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImageEffectBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImageEffectBase__VTable vtable;
};
struct ColorCorrectionRamp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct ColorCorrectionRamp__StaticFields {
};
struct ColorCorrectionRamp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorCorrectionRamp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorCorrectionRamp__VTable vtable;
};

struct ContrastStretch__Fields {
  struct MonoBehaviour__Fields _;
  float adaptationSpeed;
  float limitMinimum;
  float limitMaximum;
  struct RenderTexture__Array * adaptRenderTex;
  int32_t curAdaptIndex;
  struct Shader * shaderLum;
  struct Material * m_materialLum;
  struct Shader * shaderReduce;
  struct Material * m_materialReduce;
  struct Shader * shaderAdapt;
  struct Material * m_materialAdapt;
  struct Shader * shaderApply;
  struct Material * m_materialApply;
};
struct ContrastStretch {
  struct ContrastStretch__Class *klass;
  struct MonitorData *monitor;
  struct ContrastStretch__Fields fields;
};
struct RenderTexture__Array {
  struct RenderTexture__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RenderTexture * vector[32];
};
struct ContrastStretch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ContrastStretch__StaticFields {
};
struct ContrastStretch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContrastStretch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContrastStretch__VTable vtable;
};

struct Grayscale_1__Fields {
  struct ImageEffectBase__Fields _;
  struct Texture * textureRamp;
  float rampOffset;
};
struct Grayscale_1 {
  struct Grayscale_1__Class *klass;
  struct MonitorData *monitor;
  struct Grayscale_1__Fields fields;
};
struct Grayscale_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct Grayscale_1__StaticFields {
};
struct Grayscale_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Grayscale_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Grayscale_1__VTable vtable;
};

struct ImageEffects {
  struct ImageEffects__Class *klass;
  struct MonitorData *monitor;
};
struct ImageEffects__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ImageEffects__StaticFields {
};
struct ImageEffects__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImageEffects__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImageEffects__VTable vtable;
};

struct MotionBlur__Fields {
  struct ImageEffectBase__Fields _;
  float blurAmount;
  bool extraBlur;
  struct RenderTexture * accumTexture;
};
struct MotionBlur {
  struct MotionBlur__Class *klass;
  struct MonitorData *monitor;
  struct MotionBlur__Fields fields;
};
struct MotionBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct MotionBlur__StaticFields {
};
struct MotionBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MotionBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MotionBlur__VTable vtable;
};

struct NoiseAndScratches__Fields {
  struct MonoBehaviour__Fields _;
  bool monochrome;
  bool rgbFallback;
  float grainIntensityMin;
  float grainIntensityMax;
  float grainSize;
  float scratchIntensityMin;
  float scratchIntensityMax;
  float scratchFPS;
  float scratchJitter;
  struct Texture * grainTexture;
  struct Texture * scratchTexture;
  struct Shader * shaderRGB;
  struct Shader * shaderYUV;
  struct Material * m_MaterialRGB;
  struct Material * m_MaterialYUV;
  float scratchTimeLeft;
  float scratchX;
  float scratchY;
};
struct NoiseAndScratches {
  struct NoiseAndScratches__Class *klass;
  struct MonitorData *monitor;
  struct NoiseAndScratches__Fields fields;
};
struct NoiseAndScratches__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NoiseAndScratches__StaticFields {
};
struct NoiseAndScratches__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NoiseAndScratches__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NoiseAndScratches__VTable vtable;
};

struct PostEffectsBase__Fields {
  struct MonoBehaviour__Fields _;
  bool supportHDRTextures;
  bool supportDX11;
  bool isSupported;
};
struct PostEffectsBase {
  struct PostEffectsBase__Class *klass;
  struct MonitorData *monitor;
  struct PostEffectsBase__Fields fields;
};
enum AAMode__Enum : int32_t {
  AAMode__Enum_FXAA2 = 0,
  AAMode__Enum_FXAA3Console = 1,
  AAMode__Enum_FXAA1PresetA = 2,
  AAMode__Enum_FXAA1PresetB = 3,
  AAMode__Enum_NFAA = 4,
  AAMode__Enum_SSAA = 5,
  AAMode__Enum_DLAA = 6,
};
struct AAMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AAMode__Enum value;
};
struct Antialiasing__Fields {
  struct PostEffectsBase__Fields _;
  enum AAMode__Enum mode;
  bool showGeneratedNormals;
  float offsetScale;
  float blurRadius;
  float edgeThresholdMin;
  float edgeThreshold;
  float edgeSharpness;
  bool dlaaSharp;
  struct Shader * ssaaShader;
  struct Material * ssaa;
  struct Shader * dlaaShader;
  struct Material * dlaa;
  struct Shader * nfaaShader;
  struct Material * nfaa;
  struct Shader * shaderFXAAPreset2;
  struct Material * materialFXAAPreset2;
  struct Shader * shaderFXAAPreset3;
  struct Material * materialFXAAPreset3;
  struct Shader * shaderFXAAII;
  struct Material * materialFXAAII;
  struct Shader * shaderFXAAIII;
  struct Material * materialFXAAIII;
};
struct Antialiasing {
  struct Antialiasing__Class *klass;
  struct MonitorData *monitor;
  struct Antialiasing__Fields fields;
};
struct PostEffectsBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct PostEffectsBase__StaticFields {
};
struct PostEffectsBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PostEffectsBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PostEffectsBase__VTable vtable;
};
struct Antialiasing__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct Antialiasing__StaticFields {
};
struct Antialiasing__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Antialiasing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Antialiasing__VTable vtable;
};

enum Bloom_TweakMode__Enum : int32_t {
  Bloom_TweakMode__Enum_Basic = 0,
  Bloom_TweakMode__Enum_Complex = 1,
};
struct Bloom_TweakMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Bloom_TweakMode__Enum value;
};
enum Bloom_BloomScreenBlendMode__Enum : int32_t {
  Bloom_BloomScreenBlendMode__Enum_Screen = 0,
  Bloom_BloomScreenBlendMode__Enum_Add = 1,
};
struct Bloom_BloomScreenBlendMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Bloom_BloomScreenBlendMode__Enum value;
};
enum Bloom_HDRBloomMode__Enum : int32_t {
  Bloom_HDRBloomMode__Enum_Auto = 0,
  Bloom_HDRBloomMode__Enum_On = 1,
  Bloom_HDRBloomMode__Enum_Off = 2,
};
struct Bloom_HDRBloomMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Bloom_HDRBloomMode__Enum value;
};
enum Bloom_BloomQuality__Enum : int32_t {
  Bloom_BloomQuality__Enum_Cheap = 0,
  Bloom_BloomQuality__Enum_High = 1,
};
struct Bloom_BloomQuality__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Bloom_BloomQuality__Enum value;
};
enum Bloom_LensFlareStyle__Enum : int32_t {
  Bloom_LensFlareStyle__Enum_Ghosting = 0,
  Bloom_LensFlareStyle__Enum_Anamorphic = 1,
  Bloom_LensFlareStyle__Enum_Combined = 2,
};
struct Bloom_LensFlareStyle__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Bloom_LensFlareStyle__Enum value;
};
struct Bloom__Fields {
  struct PostEffectsBase__Fields _;
  enum Bloom_TweakMode__Enum tweakMode;
  enum Bloom_BloomScreenBlendMode__Enum screenBlendMode;
  enum Bloom_HDRBloomMode__Enum hdr;
  bool doHdr;
  float sepBlurSpread;
  enum Bloom_BloomQuality__Enum quality;
  float bloomIntensity;
  float bloomThreshold;
  struct Color bloomThresholdColor;
  int32_t bloomBlurIterations;
  int32_t hollywoodFlareBlurIterations;
  float flareRotation;
  enum Bloom_LensFlareStyle__Enum lensflareMode;
  float hollyStretchWidth;
  float lensflareIntensity;
  float lensflareThreshold;
  float lensFlareSaturation;
  struct Color flareColorA;
  struct Color flareColorB;
  struct Color flareColorC;
  struct Color flareColorD;
  struct Texture2D * lensFlareVignetteMask;
  struct Shader * lensFlareShader;
  struct Material * lensFlareMaterial;
  struct Shader * screenBlendShader;
  struct Material * screenBlend;
  struct Shader * blurAndFlaresShader;
  struct Material * blurAndFlaresMaterial;
  struct Shader * brightPassFilterShader;
  struct Material * brightPassFilterMaterial;
};
struct Bloom {
  struct Bloom__Class *klass;
  struct MonitorData *monitor;
  struct Bloom__Fields fields;
};
struct Bloom__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct Bloom__StaticFields {
};
struct Bloom__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Bloom__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Bloom__VTable vtable;
};

enum TweakMode34__Enum : int32_t {
  TweakMode34__Enum_Basic = 0,
  TweakMode34__Enum_Complex = 1,
};
struct TweakMode34__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TweakMode34__Enum value;
};
enum BloomScreenBlendMode__Enum : int32_t {
  BloomScreenBlendMode__Enum_Screen = 0,
  BloomScreenBlendMode__Enum_Add = 1,
};
struct BloomScreenBlendMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BloomScreenBlendMode__Enum value;
};
enum HDRBloomMode__Enum : int32_t {
  HDRBloomMode__Enum_Auto = 0,
  HDRBloomMode__Enum_On = 1,
  HDRBloomMode__Enum_Off = 2,
};
struct HDRBloomMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HDRBloomMode__Enum value;
};
enum LensflareStyle34__Enum : int32_t {
  LensflareStyle34__Enum_Ghosting = 0,
  LensflareStyle34__Enum_Anamorphic = 1,
  LensflareStyle34__Enum_Combined = 2,
};
struct LensflareStyle34__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LensflareStyle34__Enum value;
};
struct BloomAndFlares__Fields {
  struct PostEffectsBase__Fields _;
  enum TweakMode34__Enum tweakMode;
  enum BloomScreenBlendMode__Enum screenBlendMode;
  enum HDRBloomMode__Enum hdr;
  bool doHdr;
  float sepBlurSpread;
  float useSrcAlphaAsMask;
  float bloomIntensity;
  float bloomThreshold;
  int32_t bloomBlurIterations;
  bool lensflares;
  int32_t hollywoodFlareBlurIterations;
  enum LensflareStyle34__Enum lensflareMode;
  float hollyStretchWidth;
  float lensflareIntensity;
  float lensflareThreshold;
  struct Color flareColorA;
  struct Color flareColorB;
  struct Color flareColorC;
  struct Color flareColorD;
  struct Texture2D * lensFlareVignetteMask;
  struct Shader * lensFlareShader;
  struct Material * lensFlareMaterial;
  struct Shader * vignetteShader;
  struct Material * vignetteMaterial;
  struct Shader * separableBlurShader;
  struct Material * separableBlurMaterial;
  struct Shader * addBrightStuffOneOneShader;
  struct Material * addBrightStuffBlendOneOneMaterial;
  struct Shader * screenBlendShader;
  struct Material * screenBlend;
  struct Shader * hollywoodFlaresShader;
  struct Material * hollywoodFlaresMaterial;
  struct Shader * brightPassFilterShader;
  struct Material * brightPassFilterMaterial;
};
struct BloomAndFlares {
  struct BloomAndFlares__Class *klass;
  struct MonitorData *monitor;
  struct BloomAndFlares__Fields fields;
};
struct BloomAndFlares__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct BloomAndFlares__StaticFields {
};
struct BloomAndFlares__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BloomAndFlares__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BloomAndFlares__VTable vtable;
};

enum BloomOptimized_Resolution__Enum : int32_t {
  BloomOptimized_Resolution__Enum_Low = 0,
  BloomOptimized_Resolution__Enum_High = 1,
};
struct BloomOptimized_Resolution__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BloomOptimized_Resolution__Enum value;
};
enum BloomOptimized_BlurType__Enum : int32_t {
  BloomOptimized_BlurType__Enum_Standard = 0,
  BloomOptimized_BlurType__Enum_Sgx = 1,
};
struct BloomOptimized_BlurType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BloomOptimized_BlurType__Enum value;
};
struct BloomOptimized__Fields {
  struct PostEffectsBase__Fields _;
  float threshold;
  float intensity;
  float blurSize;
  enum BloomOptimized_Resolution__Enum resolution;
  int32_t blurIterations;
  enum BloomOptimized_BlurType__Enum blurType;
  struct Shader * fastBloomShader;
  struct Material * fastBloomMaterial;
};
struct BloomOptimized {
  struct BloomOptimized__Class *klass;
  struct MonitorData *monitor;
  struct BloomOptimized__Fields fields;
};
struct BloomOptimized__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct BloomOptimized__StaticFields {
};
struct BloomOptimized__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BloomOptimized__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BloomOptimized__VTable vtable;
};

enum BlurOptimized_BlurType__Enum : int32_t {
  BlurOptimized_BlurType__Enum_StandardGauss = 0,
  BlurOptimized_BlurType__Enum_SgxGauss = 1,
};
struct BlurOptimized_BlurType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BlurOptimized_BlurType__Enum value;
};
struct BlurOptimized__Fields {
  struct PostEffectsBase__Fields _;
  int32_t downsample;
  float blurSize;
  int32_t blurIterations;
  enum BlurOptimized_BlurType__Enum blurType;
  struct Shader * blurShader;
  struct Material * blurMaterial;
};
struct BlurOptimized {
  struct BlurOptimized__Class *klass;
  struct MonitorData *monitor;
  struct BlurOptimized__Fields fields;
};
struct BlurOptimized__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct BlurOptimized__StaticFields {
};
struct BlurOptimized__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlurOptimized__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlurOptimized__VTable vtable;
};

enum CameraMotionBlur_MotionBlurFilter__Enum : int32_t {
  CameraMotionBlur_MotionBlurFilter__Enum_CameraMotion = 0,
  CameraMotionBlur_MotionBlurFilter__Enum_LocalBlur = 1,
  CameraMotionBlur_MotionBlurFilter__Enum_Reconstruction = 2,
  CameraMotionBlur_MotionBlurFilter__Enum_ReconstructionDX11 = 3,
  CameraMotionBlur_MotionBlurFilter__Enum_ReconstructionDisc = 4,
};
struct CameraMotionBlur_MotionBlurFilter__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CameraMotionBlur_MotionBlurFilter__Enum value;
};
struct CameraMotionBlur__Fields {
  struct PostEffectsBase__Fields _;
  enum CameraMotionBlur_MotionBlurFilter__Enum filterType;
  bool preview;
  struct Vector3 previewScale;
  float movementScale;
  float rotationScale;
  float maxVelocity;
  float minVelocity;
  float velocityScale;
  float softZDistance;
  int32_t velocityDownsample;
  struct LayerMask excludeLayers;
  struct GameObject * tmpCam;
  struct Shader * shader;
  struct Shader * dx11MotionBlurShader;
  struct Shader * replacementClear;
  struct Material * motionBlurMaterial;
  struct Material * dx11MotionBlurMaterial;
  struct Texture2D * noiseTexture;
  float jitter;
  bool showVelocity;
  float showVelocityScale;
  struct Matrix4x4 currentViewProjMat;
  struct Matrix4x4 prevViewProjMat;
  int32_t prevFrameCount;
  bool wasActive;
  struct Vector3 prevFrameForward;
  struct Vector3 prevFrameUp;
  struct Vector3 prevFramePos;
  struct Camera * _camera;
};
struct CameraMotionBlur {
  struct CameraMotionBlur__Class *klass;
  struct MonitorData *monitor;
  struct CameraMotionBlur__Fields fields;
};
struct CameraMotionBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckResources;
};
struct CameraMotionBlur__StaticFields {
  float MAX_RADIUS;
};
struct CameraMotionBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraMotionBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraMotionBlur__VTable vtable;
};

enum ColorCorrectionCurves_ColorCorrectionMode__Enum : int32_t {
  ColorCorrectionCurves_ColorCorrectionMode__Enum_Simple = 0,
  ColorCorrectionCurves_ColorCorrectionMode__Enum_Advanced = 1,
};
struct ColorCorrectionCurves_ColorCorrectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ColorCorrectionCurves_ColorCorrectionMode__Enum value;
};
struct ColorCorrectionCurves__Fields {
  struct PostEffectsBase__Fields _;
  struct AnimationCurve * redChannel;
  struct AnimationCurve * greenChannel;
  struct AnimationCurve * blueChannel;
  bool useDepthCorrection;
  struct AnimationCurve * zCurve;
  struct AnimationCurve * depthRedChannel;
  struct AnimationCurve * depthGreenChannel;
  struct AnimationCurve * depthBlueChannel;
  struct Material * ccMaterial;
  struct Material * ccDepthMaterial;
  struct Material * selectiveCcMaterial;
  struct Texture2D * rgbChannelTex;
  struct Texture2D * rgbDepthChannelTex;
  struct Texture2D * zCurveTex;
  float saturation;
  bool selectiveCc;
  struct Color selectiveFromColor;
  struct Color selectiveToColor;
  enum ColorCorrectionCurves_ColorCorrectionMode__Enum mode;
  bool updateTextures;
  struct Shader * colorCorrectionCurvesShader;
  struct Shader * simpleColorCorrectionCurvesShader;
  struct Shader * colorCorrectionSelectiveShader;
  bool updateTexturesOnStartup;
};}