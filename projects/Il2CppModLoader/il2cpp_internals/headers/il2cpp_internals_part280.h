namespace app {
struct Levels {
  struct Levels__Class *klass;
  struct MonitorData *monitor;
  struct Levels__Fields fields;
};
struct Levels__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Levels__StaticFields {
};
struct Levels__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Levels__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Levels__VTable vtable;
};

struct LookupFilter3D__Fields {
  struct MonoBehaviour__Fields _;
  struct Texture2D * LookupTexture;
  float Amount;
  bool ForceCompatibility;
  struct Texture3D * m_Lut3D;
  struct String * m_BaseTextureName;
  bool m_Use2DLut;
  struct Shader * Shader2D;
  struct Shader * Shader3D;
  struct Material * m_Material2D;
  struct Material * m_Material3D;
};
struct LookupFilter3D {
  struct LookupFilter3D__Class *klass;
  struct MonitorData *monitor;
  struct LookupFilter3D__Fields fields;
};
enum LoFiPalette_Preset__Enum : int32_t {
  LoFiPalette_Preset__Enum_None = 0,
  LoFiPalette_Preset__Enum_AmstradCPC = 2,
  LoFiPalette_Preset__Enum_CGA = 3,
  LoFiPalette_Preset__Enum_Commodore64 = 4,
  LoFiPalette_Preset__Enum_CommodorePlus = 5,
  LoFiPalette_Preset__Enum_EGA = 6,
  LoFiPalette_Preset__Enum_GameBoy = 7,
  LoFiPalette_Preset__Enum_MacOS16 = 8,
  LoFiPalette_Preset__Enum_MacOS256 = 9,
  LoFiPalette_Preset__Enum_MasterSystem = 10,
  LoFiPalette_Preset__Enum_RiscOS16 = 11,
  LoFiPalette_Preset__Enum_Teletex = 12,
  LoFiPalette_Preset__Enum_Windows16 = 13,
  LoFiPalette_Preset__Enum_Windows256 = 14,
  LoFiPalette_Preset__Enum_ZXSpectrum = 15,
  LoFiPalette_Preset__Enum_Andrae = 17,
  LoFiPalette_Preset__Enum_Anodomani = 18,
  LoFiPalette_Preset__Enum_Crayolo = 19,
  LoFiPalette_Preset__Enum_DB16 = 20,
  LoFiPalette_Preset__Enum_DB32 = 21,
  LoFiPalette_Preset__Enum_DJinn = 22,
  LoFiPalette_Preset__Enum_DrazileA = 23,
  LoFiPalette_Preset__Enum_DrazileB = 24,
  LoFiPalette_Preset__Enum_DrazileC = 25,
  LoFiPalette_Preset__Enum_Eggy = 26,
  LoFiPalette_Preset__Enum_FinlalA = 27,
  LoFiPalette_Preset__Enum_FinlalB = 28,
  LoFiPalette_Preset__Enum_Hapiel = 29,
  LoFiPalette_Preset__Enum_PavanzA = 30,
  LoFiPalette_Preset__Enum_PavanzB = 31,
  LoFiPalette_Preset__Enum_Peyton = 32,
  LoFiPalette_Preset__Enum_SpeedyCube = 33,
};
struct LoFiPalette_Preset__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoFiPalette_Preset__Enum value;
};
struct LoFiPalette__Fields {
  struct LookupFilter3D__Fields _;
  enum LoFiPalette_Preset__Enum Palette;
  bool Pixelize;
  float PixelSize;
  enum LoFiPalette_Preset__Enum m_CurrentPreset;
};
struct LoFiPalette {
  struct LoFiPalette__Class *klass;
  struct MonitorData *monitor;
  struct LoFiPalette__Fields fields;
};
struct LookupFilter3D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Reset;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData RenderLut2D;
  VirtualInvokeData RenderLut3D;
};
struct LookupFilter3D__StaticFields {
};
struct LookupFilter3D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LookupFilter3D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LookupFilter3D__VTable vtable;
};
struct LoFiPalette__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Reset;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData RenderLut2D;
  VirtualInvokeData RenderLut3D;
};
struct LoFiPalette__StaticFields {
};
struct LoFiPalette__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoFiPalette__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoFiPalette__VTable vtable;
};

struct LookupFilter__Fields {
  struct BaseEffect__Fields _;
  struct Texture * LookupTexture;
  float Amount;
};
struct LookupFilter {
  struct LookupFilter__Class *klass;
  struct MonitorData *monitor;
  struct LookupFilter__Fields fields;
};
struct LookupFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct LookupFilter__StaticFields {
};
struct LookupFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LookupFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LookupFilter__VTable vtable;
};

struct Negative__Fields {
  struct BaseEffect__Fields _;
  float Amount;
};
struct Negative {
  struct Negative__Class *klass;
  struct MonitorData *monitor;
  struct Negative__Fields fields;
};
struct Negative__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Negative__StaticFields {
};
struct Negative__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Negative__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Negative__VTable vtable;
};

enum Noise_ColorMode__Enum : int32_t {
  Noise_ColorMode__Enum_Monochrome = 0,
  Noise_ColorMode__Enum_RGB = 1,
};
struct Noise_ColorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Noise_ColorMode__Enum value;
};
struct Noise__Fields {
  struct BaseEffect__Fields _;
  enum Noise_ColorMode__Enum Mode;
  bool Animate;
  float Seed;
  float Strength;
  float LumContribution;
};
struct Noise {
  struct Noise__Class *klass;
  struct MonitorData *monitor;
  struct Noise__Fields fields;
};
struct Noise__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData Update;
};
struct Noise__StaticFields {
};
struct Noise__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Noise__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Noise__VTable vtable;
};

struct PhotoFilter__Fields {
  struct BaseEffect__Fields _;
  struct Color Color;
  float Density;
};
struct PhotoFilter {
  struct PhotoFilter__Class *klass;
  struct MonitorData *monitor;
  struct PhotoFilter__Fields fields;
};
struct PhotoFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct PhotoFilter__StaticFields {
};
struct PhotoFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhotoFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhotoFilter__VTable vtable;
};

enum Pixelate_SizeMode__Enum : int32_t {
  Pixelate_SizeMode__Enum_ResolutionIndependent = 0,
  Pixelate_SizeMode__Enum_PixelPerfect = 1,
};
struct Pixelate_SizeMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Pixelate_SizeMode__Enum value;
};
struct Pixelate__Fields {
  struct BaseEffect__Fields _;
  float Scale;
  bool AutomaticRatio;
  float Ratio;
  enum Pixelate_SizeMode__Enum Mode;
};
struct Pixelate {
  struct Pixelate__Class *klass;
  struct MonitorData *monitor;
  struct Pixelate__Fields fields;
};
struct Pixelate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Pixelate__StaticFields {
};
struct Pixelate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Pixelate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Pixelate__VTable vtable;
};

struct PixelMatrix__Fields {
  struct BaseEffect__Fields _;
  int32_t Size;
  float Brightness;
  bool BlackBorder;
};
struct PixelMatrix {
  struct PixelMatrix__Class *klass;
  struct MonitorData *monitor;
  struct PixelMatrix__Fields fields;
};
struct PixelMatrix__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct PixelMatrix__StaticFields {
};
struct PixelMatrix__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PixelMatrix__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PixelMatrix__VTable vtable;
};

struct Posterize__Fields {
  struct BaseEffect__Fields _;
  int32_t Levels;
  float Amount;
  bool LuminosityOnly;
};
struct Posterize {
  struct Posterize__Class *klass;
  struct MonitorData *monitor;
  struct Posterize__Fields fields;
};
struct Posterize__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Posterize__StaticFields {
};
struct Posterize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Posterize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Posterize__VTable vtable;
};

enum RadialBlur_QualityPreset__Enum : int32_t {
  RadialBlur_QualityPreset__Enum_Low = 4,
  RadialBlur_QualityPreset__Enum_Medium = 8,
  RadialBlur_QualityPreset__Enum_High = 12,
  RadialBlur_QualityPreset__Enum_Custom = 13,
};
struct RadialBlur_QualityPreset__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RadialBlur_QualityPreset__Enum value;
};
struct RadialBlur__Fields {
  struct BaseEffect__Fields _;
  float Strength;
  int32_t Samples;
  struct Vector2 Center;
  enum RadialBlur_QualityPreset__Enum Quality;
  float Sharpness;
  float Darkness;
  bool EnableVignette;
};
struct RadialBlur {
  struct RadialBlur__Class *klass;
  struct MonitorData *monitor;
  struct RadialBlur__Fields fields;
};
struct RadialBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct RadialBlur__StaticFields {
};
struct RadialBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RadialBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RadialBlur__VTable vtable;
};

struct RGBSplit__Fields {
  struct BaseEffect__Fields _;
  float Amount;
  float Angle;
};
struct RGBSplit {
  struct RGBSplit__Class *klass;
  struct MonitorData *monitor;
  struct RGBSplit__Fields fields;
};
struct RGBSplit__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct RGBSplit__StaticFields {
};
struct RGBSplit__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RGBSplit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RGBSplit__VTable vtable;
};

struct SCurveContrast__Fields {
  struct BaseEffect__Fields _;
  float RedSteepness;
  float RedGamma;
  float GreenSteepness;
  float GreenGamma;
  float BlueSteepness;
  float BlueGamma;
  bool e_ShowCurves;
};
struct SCurveContrast {
  struct SCurveContrast__Class *klass;
  struct MonitorData *monitor;
  struct SCurveContrast__Fields fields;
};
struct SCurveContrast__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct SCurveContrast__StaticFields {
};
struct SCurveContrast__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SCurveContrast__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SCurveContrast__VTable vtable;
};

enum ShadowsMidtonesHighlights_ColorMode__Enum : int32_t {
  ShadowsMidtonesHighlights_ColorMode__Enum_LiftGammaGain = 0,
  ShadowsMidtonesHighlights_ColorMode__Enum_OffsetGammaSlope = 1,
};
struct ShadowsMidtonesHighlights_ColorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShadowsMidtonesHighlights_ColorMode__Enum value;
};
struct ShadowsMidtonesHighlights__Fields {
  struct BaseEffect__Fields _;
  enum ShadowsMidtonesHighlights_ColorMode__Enum Mode;
  struct Color Shadows;
  struct Color Midtones;
  struct Color Highlights;
  float Amount;
};
struct ShadowsMidtonesHighlights {
  struct ShadowsMidtonesHighlights__Class *klass;
  struct MonitorData *monitor;
  struct ShadowsMidtonesHighlights__Fields fields;
};
struct ShadowsMidtonesHighlights__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct ShadowsMidtonesHighlights__StaticFields {
};
struct ShadowsMidtonesHighlights__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShadowsMidtonesHighlights__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShadowsMidtonesHighlights__VTable vtable;
};

enum Sharpen_Algorithm__Enum : int32_t {
  Sharpen_Algorithm__Enum_TypeA = 0,
  Sharpen_Algorithm__Enum_TypeB = 1,
};
struct Sharpen_Algorithm__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Sharpen_Algorithm__Enum value;
};
struct Sharpen_Settings {
  bool Enabled;
  enum Sharpen_Algorithm__Enum Mode;
  float Strength;
  float Clamp;
};
struct Sharpen_Settings__Boxed {
  struct Sharpen_Settings__Class *klass;
  struct MonitorData *monitor;
  struct Sharpen_Settings fields;
};
struct Sharpen__Fields {
  struct BaseEffect__Fields _;
  struct Sharpen_Settings Sharpness;
};
struct Sharpen {
  struct Sharpen__Class *klass;
  struct MonitorData *monitor;
  struct Sharpen__Fields fields;
};
struct Sharpen_Settings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Sharpen_Settings__StaticFields {
};
struct Sharpen_Settings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Sharpen_Settings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Sharpen_Settings__VTable vtable;
};
struct Sharpen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData IRenderPostprocessor_get_enabled;
  VirtualInvokeData IRenderPostprocessor_OnRenderImage;
};
struct Sharpen__StaticFields {
};
struct Sharpen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Sharpen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Sharpen__VTable vtable;
};

struct SmartSaturation__Fields {
  struct BaseEffect__Fields _;
  float Boost;
  struct AnimationCurve * Curve;
  struct Texture2D * _CurveTexture;
};
struct SmartSaturation {
  struct SmartSaturation__Class *klass;
  struct MonitorData *monitor;
  struct SmartSaturation__Fields fields;
};
struct SmartSaturation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData Reset;
  VirtualInvokeData OnEnable;
  VirtualInvokeData UpdateCurve;
};
struct SmartSaturation__StaticFields {
};
struct SmartSaturation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SmartSaturation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SmartSaturation__VTable vtable;
};

enum Strokes_ColorMode__Enum : int32_t {
  Strokes_ColorMode__Enum_BlackAndWhite = 0,
  Strokes_ColorMode__Enum_WhiteAndBlack = 1,
  Strokes_ColorMode__Enum_ColorAndWhite = 2,
  Strokes_ColorMode__Enum_ColorAndBlack = 3,
  Strokes_ColorMode__Enum_WhiteAndColor = 4,
  Strokes_ColorMode__Enum_BlackAndColor = 5,
};
struct Strokes_ColorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Strokes_ColorMode__Enum value;
};
struct Strokes__Fields {
  struct BaseEffect__Fields _;
  enum Strokes_ColorMode__Enum Mode;
  float Amplitude;
  float Frequency;
  float Scaling;
  float MaxThickness;
  float Threshold;
  float Harshness;
  float RedLuminance;
  float GreenLuminance;
  float BlueLuminance;
};
struct Strokes {
  struct Strokes__Class *klass;
  struct MonitorData *monitor;
  struct Strokes__Fields fields;
};
struct Strokes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Strokes__StaticFields {
};
struct Strokes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Strokes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Strokes__VTable vtable;
};

struct Technicolor__Fields {
  struct BaseEffect__Fields _;
  float Exposure;
  struct Vector3 Balance;
  float Amount;
};
struct Technicolor {
  struct Technicolor__Class *klass;
  struct MonitorData *monitor;
  struct Technicolor__Fields fields;
};
struct Technicolor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Technicolor__StaticFields {
};
struct Technicolor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Technicolor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Technicolor__VTable vtable;
};

struct Threshold__Fields {
  struct BaseEffect__Fields _;
  float Value;
  float NoiseRange;
  bool UseNoise;
};
struct Threshold {
  struct Threshold__Class *klass;
  struct MonitorData *monitor;
  struct Threshold__Fields fields;
};
struct Threshold__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Threshold__StaticFields {
};
struct Threshold__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Threshold__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Threshold__VTable vtable;
};

struct TVVignette__Fields {
  struct BaseEffect__Fields _;
  float Size;
  float Offset;
};
struct TVVignette {
  struct TVVignette__Class *klass;
  struct MonitorData *monitor;
  struct TVVignette__Fields fields;
};
struct TVVignette__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct TVVignette__StaticFields {
};
struct TVVignette__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TVVignette__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TVVignette__VTable vtable;
};

struct Vibrance__Fields {
  struct BaseEffect__Fields _;
  float Amount;
  float RedChannel;
  float GreenChannel;
  float BlueChannel;
  bool AdvancedMode;
};
struct Vibrance {
  struct Vibrance__Class *klass;
  struct MonitorData *monitor;
  struct Vibrance__Fields fields;
};
struct Vibrance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Vibrance__StaticFields {
};
struct Vibrance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vibrance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vibrance__VTable vtable;
};

enum Vintage_InstragramFilter__Enum : int32_t {
  Vintage_InstragramFilter__Enum_None = 0,
  Vintage_InstragramFilter__Enum_F1977 = 1,
  Vintage_InstragramFilter__Enum_Aden = 2,
  Vintage_InstragramFilter__Enum_Amaro = 3,
  Vintage_InstragramFilter__Enum_Brannan = 4,
  Vintage_InstragramFilter__Enum_Crema = 5,
  Vintage_InstragramFilter__Enum_Earlybird = 6,
  Vintage_InstragramFilter__Enum_Hefe = 7,
  Vintage_InstragramFilter__Enum_Hudson = 8,
  Vintage_InstragramFilter__Enum_Inkwell = 9,
  Vintage_InstragramFilter__Enum_Juno = 10,
  Vintage_InstragramFilter__Enum_Kelvin = 11,
  Vintage_InstragramFilter__Enum_Lark = 12,
  Vintage_InstragramFilter__Enum_LoFi = 13,
  Vintage_InstragramFilter__Enum_Ludwig = 14,
  Vintage_InstragramFilter__Enum_Mayfair = 15,
  Vintage_InstragramFilter__Enum_Nashville = 16,
  Vintage_InstragramFilter__Enum_Perpetua = 17,
  Vintage_InstragramFilter__Enum_Reyes = 18,
  Vintage_InstragramFilter__Enum_Rise = 19,
  Vintage_InstragramFilter__Enum_Sierra = 20,
  Vintage_InstragramFilter__Enum_Slumber = 21,
  Vintage_InstragramFilter__Enum_Sutro = 22,
  Vintage_InstragramFilter__Enum_Toaster = 23,
  Vintage_InstragramFilter__Enum_Valencia = 24,
  Vintage_InstragramFilter__Enum_Walden = 25,
  Vintage_InstragramFilter__Enum_Willow = 26,
  Vintage_InstragramFilter__Enum_XProII = 27,
};
struct Vintage_InstragramFilter__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Vintage_InstragramFilter__Enum value;
};
struct Vintage__Fields {
  struct LookupFilter__Fields _;
  enum Vintage_InstragramFilter__Enum Filter;
  enum Vintage_InstragramFilter__Enum m_CurrentFilter;
};
struct Vintage {
  struct Vintage__Class *klass;
  struct MonitorData *monitor;
  struct Vintage__Fields fields;
};
struct Vintage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Vintage__StaticFields {
};
struct Vintage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vintage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vintage__VTable vtable;
};

struct VintageFast__Fields {
  struct LookupFilter3D__Fields _;
  enum Vintage_InstragramFilter__Enum Filter;
  enum Vintage_InstragramFilter__Enum m_CurrentFilter;
};
struct VintageFast {
  struct VintageFast__Class *klass;
  struct MonitorData *monitor;
  struct VintageFast__Fields fields;
};
struct VintageFast__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Reset;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData RenderLut2D;
  VirtualInvokeData RenderLut3D;
};
struct VintageFast__StaticFields {
};
struct VintageFast__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VintageFast__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VintageFast__VTable vtable;
};

struct WaveDistortion__Fields {
  struct BaseEffect__Fields _;
  float Amplitude;
  float Waves;
  float ColorGlitch;
  float Phase;
};
struct WaveDistortion {
  struct WaveDistortion__Class *klass;
  struct MonitorData *monitor;
  struct WaveDistortion__Fields fields;
};
struct WaveDistortion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct WaveDistortion__StaticFields {
};
struct WaveDistortion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaveDistortion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaveDistortion__VTable vtable;
};

enum WhiteBalance_BalanceMode__Enum : int32_t {
  WhiteBalance_BalanceMode__Enum_Simple = 0,
  WhiteBalance_BalanceMode__Enum_Complex = 1,
};
struct WhiteBalance_BalanceMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WhiteBalance_BalanceMode__Enum value;
};
struct WhiteBalance__Fields {
  struct BaseEffect__Fields _;
  struct Color White;
  enum WhiteBalance_BalanceMode__Enum Mode;
};
struct WhiteBalance {
  struct WhiteBalance__Class *klass;
  struct MonitorData *monitor;
  struct WhiteBalance__Fields fields;
};
struct WhiteBalance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData Reset;
};
struct WhiteBalance__StaticFields {
};
struct WhiteBalance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WhiteBalance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WhiteBalance__VTable vtable;
};

enum Wiggle_Algorithm__Enum : int32_t {
  Wiggle_Algorithm__Enum_Simple = 0,
  Wiggle_Algorithm__Enum_Complex = 1,
};}