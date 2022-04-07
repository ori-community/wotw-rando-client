namespace app {

struct ContrastGain__Fields {
  struct BaseEffect__Fields _;
  float Gain;
};
struct ContrastGain {
  struct ContrastGain__Class *klass;
  struct MonitorData *monitor;
  struct ContrastGain__Fields fields;
};
struct ContrastGain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct ContrastGain__StaticFields {
};
struct ContrastGain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContrastGain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContrastGain__VTable vtable;
};

struct ContrastVignette__Fields {
  struct BaseEffect__Fields _;
  struct Vector2 Center;
  float Sharpness;
  float Darkness;
  float Contrast;
  struct Vector3 ContrastCoeff;
  float EdgeBlending;
};
struct ContrastVignette {
  struct ContrastVignette__Class *klass;
  struct MonitorData *monitor;
  struct ContrastVignette__Fields fields;
};
struct ContrastVignette__VTable {
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
struct ContrastVignette__StaticFields {
};
struct ContrastVignette__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContrastVignette__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContrastVignette__VTable vtable;
};

struct Convolution3x3__Fields {
  struct BaseEffect__Fields _;
  struct Vector3 KernelTop;
  struct Vector3 KernelMiddle;
  struct Vector3 KernelBottom;
  float Divisor;
  float Amount;
};
struct Convolution3x3 {
  struct Convolution3x3__Class *klass;
  struct MonitorData *monitor;
  struct Convolution3x3__Fields fields;
};
struct Convolution3x3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Convolution3x3__StaticFields {
};
struct Convolution3x3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Convolution3x3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Convolution3x3__VTable vtable;
};

struct CrossStitch__Fields {
  struct BaseEffect__Fields _;
  int32_t Size;
  float Brightness;
  bool Invert;
  bool Pixelize;
};
struct CrossStitch {
  struct CrossStitch__Class *klass;
  struct MonitorData *monitor;
  struct CrossStitch__Fields fields;
};
struct CrossStitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct CrossStitch__StaticFields {
};
struct CrossStitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossStitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossStitch__VTable vtable;
};

enum DirectionalBlur_QualityPreset__Enum : int32_t {
  DirectionalBlur_QualityPreset__Enum_Low = 2,
  DirectionalBlur_QualityPreset__Enum_Medium = 4,
  DirectionalBlur_QualityPreset__Enum_High = 6,
  DirectionalBlur_QualityPreset__Enum_Custom = 7,
};
struct DirectionalBlur_QualityPreset__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DirectionalBlur_QualityPreset__Enum value;
};
struct DirectionalBlur__Fields {
  struct BaseEffect__Fields _;
  enum DirectionalBlur_QualityPreset__Enum Quality;
  int32_t Samples;
  float Strength;
  float Angle;
};
struct DirectionalBlur {
  struct DirectionalBlur__Class *klass;
  struct MonitorData *monitor;
  struct DirectionalBlur__Fields fields;
};
struct DirectionalBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct DirectionalBlur__StaticFields {
};
struct DirectionalBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DirectionalBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DirectionalBlur__VTable vtable;
};

struct Dithering__Fields {
  struct BaseEffect__Fields _;
  bool ShowOriginal;
  bool ConvertToGrayscale;
  float RedLuminance;
  float GreenLuminance;
  float BlueLuminance;
  float Amount;
  struct Texture2D * m_DitherPattern;
};
struct Dithering {
  struct Dithering__Class *klass;
  struct MonitorData *monitor;
  struct Dithering__Fields fields;
};
struct Dithering__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Dithering__StaticFields {
};
struct Dithering__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dithering__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dithering__VTable vtable;
};

struct DoubleVision__Fields {
  struct BaseEffect__Fields _;
  struct Vector2 Displace;
  float Amount;
};
struct DoubleVision {
  struct DoubleVision__Class *klass;
  struct MonitorData *monitor;
  struct DoubleVision__Fields fields;
};
struct DoubleVision__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct DoubleVision__StaticFields {
};
struct DoubleVision__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoubleVision__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoubleVision__VTable vtable;
};

struct DynamicLookup__Fields {
  struct BaseEffect__Fields _;
  struct Color White;
  struct Color Black;
  struct Color Red;
  struct Color Green;
  struct Color Blue;
  struct Color Yellow;
  struct Color Magenta;
  struct Color Cyan;
  float Amount;
};
struct DynamicLookup {
  struct DynamicLookup__Class *klass;
  struct MonitorData *monitor;
  struct DynamicLookup__Fields fields;
};
struct DynamicLookup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct DynamicLookup__StaticFields {
};
struct DynamicLookup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicLookup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicLookup__VTable vtable;
};

enum FastVignette_ColorMode__Enum : int32_t {
  FastVignette_ColorMode__Enum_Classic = 0,
  FastVignette_ColorMode__Enum_Desaturate = 1,
  FastVignette_ColorMode__Enum_Colored = 2,
};
struct FastVignette_ColorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FastVignette_ColorMode__Enum value;
};
struct FastVignette__Fields {
  struct BaseEffect__Fields _;
  enum FastVignette_ColorMode__Enum Mode;
  struct Color Color;
  struct Vector2 Center;
  float Sharpness;
  float Darkness;
};
struct FastVignette {
  struct FastVignette__Class *klass;
  struct MonitorData *monitor;
  struct FastVignette__Fields fields;
};
struct FastVignette__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct FastVignette__StaticFields {
};
struct FastVignette__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FastVignette__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FastVignette__VTable vtable;
};

struct Frost__Fields {
  struct BaseEffect__Fields _;
  float Scale;
  float Sharpness;
  float Darkness;
  bool EnableVignette;
};
struct Frost {
  struct Frost__Class *klass;
  struct MonitorData *monitor;
  struct Frost__Fields fields;
};
struct Frost__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Frost__StaticFields {
};
struct Frost__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Frost__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Frost__VTable vtable;
};

struct GaussianBlur__Fields {
  struct BaseEffect__Fields _;
  int32_t Passes;
  float Downscaling;
  float Amount;
};
struct GaussianBlur {
  struct GaussianBlur__Class *klass;
  struct MonitorData *monitor;
  struct GaussianBlur__Fields fields;
};
struct GaussianBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData OnePassBlur;
  VirtualInvokeData MultiPassBlur;
};
struct GaussianBlur__StaticFields {
};
struct GaussianBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GaussianBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GaussianBlur__VTable vtable;
};

enum Glitch_GlitchingMode__Enum : int32_t {
  Glitch_GlitchingMode__Enum_Interferences = 0,
  Glitch_GlitchingMode__Enum_Tearing = 1,
  Glitch_GlitchingMode__Enum_Complete = 2,
};
struct Glitch_GlitchingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Glitch_GlitchingMode__Enum value;
};
struct Glitch__Fields {
  struct BaseEffect__Fields _;
  bool RandomActivation;
  struct Vector2 RandomEvery;
  struct Vector2 RandomDuration;
  enum Glitch_GlitchingMode__Enum Mode;
  struct Glitch_InterferenceSettings * SettingsInterferences;
  struct Glitch_TearingSettings * SettingsTearing;
  bool m_Activated;
  float m_EveryTimer;
  float m_EveryTimerEnd;
  float m_DurationTimer;
  float m_DurationTimerEnd;
};
struct Glitch {
  struct Glitch__Class *klass;
  struct MonitorData *monitor;
  struct Glitch__Fields fields;
};
struct __declspec(align(8)) Glitch_InterferenceSettings__Fields {
  float Speed;
  float Density;
  float MaxDisplacement;
};
struct Glitch_InterferenceSettings {
  struct Glitch_InterferenceSettings__Class *klass;
  struct MonitorData *monitor;
  struct Glitch_InterferenceSettings__Fields fields;
};
struct __declspec(align(8)) Glitch_TearingSettings__Fields {
  float Speed;
  float Intensity;
  float MaxDisplacement;
  bool AllowFlipping;
  bool YuvColorBleeding;
  float YuvOffset;
};
struct Glitch_TearingSettings {
  struct Glitch_TearingSettings__Class *klass;
  struct MonitorData *monitor;
  struct Glitch_TearingSettings__Fields fields;
};
struct Glitch_InterferenceSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Glitch_InterferenceSettings__StaticFields {
};
struct Glitch_InterferenceSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Glitch_InterferenceSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Glitch_InterferenceSettings__VTable vtable;
};
struct Glitch_TearingSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Glitch_TearingSettings__StaticFields {
};
struct Glitch_TearingSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Glitch_TearingSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Glitch_TearingSettings__VTable vtable;
};
struct Glitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData Update;
  VirtualInvokeData DoInterferences;
  VirtualInvokeData DoTearing;
};
struct Glitch__StaticFields {
};
struct Glitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Glitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Glitch__VTable vtable;
};

struct GradientRamp__Fields {
  struct BaseEffect__Fields _;
  struct Texture * RampTexture;
  float Amount;
};
struct GradientRamp {
  struct GradientRamp__Class *klass;
  struct MonitorData *monitor;
  struct GradientRamp__Fields fields;
};
struct GradientRamp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct GradientRamp__StaticFields {
};
struct GradientRamp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GradientRamp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GradientRamp__VTable vtable;
};

struct GradientRampDynamic__Fields {
  struct BaseEffect__Fields _;
  struct Gradient * Ramp;
  float Amount;
  struct Texture2D * m_RampTexture;
};
struct GradientRampDynamic {
  struct GradientRampDynamic__Class *klass;
  struct MonitorData *monitor;
  struct GradientRampDynamic__Fields fields;
};
struct GradientRampDynamic__VTable {
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
struct GradientRampDynamic__StaticFields {
};
struct GradientRampDynamic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GradientRampDynamic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GradientRampDynamic__VTable vtable;
};

struct GrainyBlur__Fields {
  struct BaseEffect__Fields _;
  float Radius;
  int32_t Samples;
};
struct GrainyBlur {
  struct GrainyBlur__Class *klass;
  struct MonitorData *monitor;
  struct GrainyBlur__Fields fields;
};
struct GrainyBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct GrainyBlur__StaticFields {
};
struct GrainyBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrainyBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrainyBlur__VTable vtable;
};

struct Grayscale__Fields {
  struct BaseEffect__Fields _;
  float RedLuminance;
  float GreenLuminance;
  float BlueLuminance;
  float Amount;
};
struct Grayscale {
  struct Grayscale__Class *klass;
  struct MonitorData *monitor;
  struct Grayscale__Fields fields;
};
struct Grayscale__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Grayscale__StaticFields {
};
struct Grayscale__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Grayscale__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Grayscale__VTable vtable;
};

struct Halftone__Fields {
  struct BaseEffect__Fields _;
  float Scale;
  float DotSize;
  float Angle;
  float Smoothness;
  struct Vector2 Center;
  bool Desaturate;
};
struct Halftone {
  struct Halftone__Class *klass;
  struct MonitorData *monitor;
  struct Halftone__Fields fields;
};
struct Halftone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Halftone__StaticFields {
};
struct Halftone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Halftone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Halftone__VTable vtable;
};

enum Histogram_Channel__Enum : int32_t {
  Histogram_Channel__Enum_Luminance = 0,
  Histogram_Channel__Enum_RGB = 1,
  Histogram_Channel__Enum_Red = 2,
  Histogram_Channel__Enum_Green = 3,
  Histogram_Channel__Enum_Blue = 4,
};
struct Histogram_Channel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Histogram_Channel__Enum value;
};
struct Histogram__Fields {
  struct MonoBehaviour__Fields _;
  enum Histogram_Channel__Enum e_CurrentChannel;
  bool e_Logarithmic;
  bool e_AutoRefresh;
  struct Action_1_UnityEngine_RenderTexture_ * e_OnFrameEnd;
  bool e_ForceRefresh;
};
struct Histogram {
  struct Histogram__Class *klass;
  struct MonitorData *monitor;
  struct Histogram__Fields fields;
};
struct Action_1_UnityEngine_RenderTexture___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_RenderTexture_ {
  struct Action_1_UnityEngine_RenderTexture___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_RenderTexture___Fields fields;
};
struct Action_1_UnityEngine_RenderTexture___VTable {
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
struct Action_1_UnityEngine_RenderTexture___StaticFields {
};
struct Action_1_UnityEngine_RenderTexture___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_RenderTexture___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_RenderTexture___VTable vtable;
};
struct Histogram__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Histogram__StaticFields {
};
struct Histogram__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Histogram__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Histogram__VTable vtable;
};

struct HueFocus__Fields {
  struct BaseEffect__Fields _;
  float Hue;
  float Range;
  float Boost;
  float Amount;
};
struct HueFocus {
  struct HueFocus__Class *klass;
  struct MonitorData *monitor;
  struct HueFocus__Fields fields;
};
struct HueFocus__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct HueFocus__StaticFields {
};
struct HueFocus__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HueFocus__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HueFocus__VTable vtable;
};

struct HueSaturationValue__Fields {
  struct BaseEffect__Fields _;
  float MasterHue;
  float MasterSaturation;
  float MasterValue;
  float RedsHue;
  float RedsSaturation;
  float RedsValue;
  float YellowsHue;
  float YellowsSaturation;
  float YellowsValue;
  float GreensHue;
  float GreensSaturation;
  float GreensValue;
  float CyansHue;
  float CyansSaturation;
  float CyansValue;
  float BluesHue;
  float BluesSaturation;
  float BluesValue;
  float MagentasHue;
  float MagentasSaturation;
  float MagentasValue;
  bool AdvancedMode;
  int32_t e_CurrentChannel;
};
struct HueSaturationValue {
  struct HueSaturationValue__Class *klass;
  struct MonitorData *monitor;
  struct HueSaturationValue__Fields fields;
};
struct HueSaturationValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct HueSaturationValue__StaticFields {
};
struct HueSaturationValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HueSaturationValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HueSaturationValue__VTable vtable;
};

struct Kuwahara__Fields {
  struct BaseEffect__Fields _;
  int32_t Radius;
};
struct Kuwahara {
  struct Kuwahara__Class *klass;
  struct MonitorData *monitor;
  struct Kuwahara__Fields fields;
};
struct Kuwahara__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Kuwahara__StaticFields {
};
struct Kuwahara__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Kuwahara__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Kuwahara__VTable vtable;
};

enum Led_SizeMode__Enum : int32_t {
  Led_SizeMode__Enum_ResolutionIndependent = 0,
  Led_SizeMode__Enum_PixelPerfect = 1,
};
struct Led_SizeMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Led_SizeMode__Enum value;
};
struct Led__Fields {
  struct BaseEffect__Fields _;
  float Scale;
  float Brightness;
  float Shape;
  bool AutomaticRatio;
  float Ratio;
  enum Led_SizeMode__Enum Mode;
};
struct Led {
  struct Led__Class *klass;
  struct MonitorData *monitor;
  struct Led__Fields fields;
};
struct Led__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Led__StaticFields {
};
struct Led__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Led__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Led__VTable vtable;
};

enum LensDistortionBlur_QualityPreset__Enum : int32_t {
  LensDistortionBlur_QualityPreset__Enum_Low = 4,
  LensDistortionBlur_QualityPreset__Enum_Medium = 8,
  LensDistortionBlur_QualityPreset__Enum_High = 12,
  LensDistortionBlur_QualityPreset__Enum_Custom = 13,
};
struct LensDistortionBlur_QualityPreset__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LensDistortionBlur_QualityPreset__Enum value;
};
struct LensDistortionBlur__Fields {
  struct BaseEffect__Fields _;
  enum LensDistortionBlur_QualityPreset__Enum Quality;
  int32_t Samples;
  float Distortion;
  float CubicDistortion;
  float Scale;
};
struct LensDistortionBlur {
  struct LensDistortionBlur__Class *klass;
  struct MonitorData *monitor;
  struct LensDistortionBlur__Fields fields;
};
struct LensDistortionBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct LensDistortionBlur__StaticFields {
};
struct LensDistortionBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LensDistortionBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LensDistortionBlur__VTable vtable;
};

struct Letterbox__Fields {
  struct BaseEffect__Fields _;
  float Aspect;
  struct Color FillColor;
};
struct Letterbox {
  struct Letterbox__Class *klass;
  struct MonitorData *monitor;
  struct Letterbox__Fields fields;
};
struct Letterbox__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Letterbox__StaticFields {
};
struct Letterbox__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Letterbox__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Letterbox__VTable vtable;
};

enum Levels_ColorMode__Enum : int32_t {
  Levels_ColorMode__Enum_Monochrome = 0,
  Levels_ColorMode__Enum_RGB = 1,
};
struct Levels_ColorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Levels_ColorMode__Enum value;
};
enum Levels_Channel__Enum : int32_t {
  Levels_Channel__Enum_Red = 0,
  Levels_Channel__Enum_Green = 1,
  Levels_Channel__Enum_Blue = 2,
};
struct Levels_Channel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Levels_Channel__Enum value;
};
struct Levels__Fields {
  struct BaseEffect__Fields _;
  enum Levels_ColorMode__Enum Mode;
  struct Vector3 InputL;
  struct Vector3 InputR;
  struct Vector3 InputG;
  struct Vector3 InputB;
  struct Vector2 OutputL;
  struct Vector2 OutputR;
  struct Vector2 OutputG;
  struct Vector2 OutputB;
  enum Levels_Channel__Enum e_CurrentChannel;
  bool e_Logarithmic;
  bool e_AutoRefresh;
  struct Action_1_UnityEngine_RenderTexture_ * e_OnFrameEnd;
  bool e_ForceRefresh;
};}