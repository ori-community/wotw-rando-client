namespace app {
struct Levels__StaticFields {
};

struct Levels__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Levels__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Levels__VTable vtable;
};

struct LookupFilter3D__Fields {
    struct MonoBehaviour__Fields _;
    struct Texture2D *LookupTexture;
    float Amount;
    bool ForceCompatibility;
    struct Texture3D *m_Lut3D;
    struct String *m_BaseTextureName;
    bool m_Use2DLut;
    struct Shader *Shader2D;
    struct Shader *Shader3D;
    struct Material *m_Material2D;
    struct Material *m_Material3D;
};

struct LookupFilter3D {
    struct LookupFilter3D__Class *klass;
    MonitorData *monitor;
    struct LookupFilter3D__Fields fields;
};

enum class LoFiPalette_Preset__Enum : int32_t {
    None = 0x00000000,
    AmstradCPC = 0x00000002,
    CGA = 0x00000003,
    Commodore64 = 0x00000004,
    CommodorePlus = 0x00000005,
    EGA = 0x00000006,
    GameBoy = 0x00000007,
    MacOS16 = 0x00000008,
    MacOS256 = 0x00000009,
    MasterSystem = 0x0000000a,
    RiscOS16 = 0x0000000b,
    Teletex = 0x0000000c,
    Windows16 = 0x0000000d,
    Windows256 = 0x0000000e,
    ZXSpectrum = 0x0000000f,
    Andrae = 0x00000011,
    Anodomani = 0x00000012,
    Crayolo = 0x00000013,
    DB16 = 0x00000014,
    DB32 = 0x00000015,
    DJinn = 0x00000016,
    DrazileA = 0x00000017,
    DrazileB = 0x00000018,
    DrazileC = 0x00000019,
    Eggy = 0x0000001a,
    FinlalA = 0x0000001b,
    FinlalB = 0x0000001c,
    Hapiel = 0x0000001d,
    PavanzA = 0x0000001e,
    PavanzB = 0x0000001f,
    Peyton = 0x00000020,
    SpeedyCube = 0x00000021,
};

struct LoFiPalette_Preset__Enum__Boxed {
    struct LoFiPalette_Preset__Enum__Class *klass;
    MonitorData *monitor;
    LoFiPalette_Preset__Enum value;
    
};

struct LoFiPalette__Fields {
    struct LookupFilter3D__Fields _;
    LoFiPalette_Preset__Enum Palette;
    
    bool Pixelize;
    float PixelSize;
    LoFiPalette_Preset__Enum m_CurrentPreset;
    
};

struct LoFiPalette {
    struct LoFiPalette__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LookupFilter3D__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LookupFilter3D__VTable vtable;
};

struct LoFiPalette_Preset__Enum__VTable {
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

struct LoFiPalette_Preset__Enum__StaticFields {
};

struct LoFiPalette_Preset__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoFiPalette_Preset__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoFiPalette_Preset__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoFiPalette__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoFiPalette__VTable vtable;
};

struct LookupFilter__Fields {
    struct BaseEffect__Fields _;
    struct Texture *LookupTexture;
    float Amount;
};

struct LookupFilter {
    struct LookupFilter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LookupFilter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LookupFilter__VTable vtable;
};

struct Negative__Fields {
    struct BaseEffect__Fields _;
    float Amount;
};

struct Negative {
    struct Negative__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Negative__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Negative__VTable vtable;
};

enum class Noise_ColorMode__Enum : int32_t {
    Monochrome = 0x00000000,
    RGB = 0x00000001,
};

struct Noise_ColorMode__Enum__Boxed {
    struct Noise_ColorMode__Enum__Class *klass;
    MonitorData *monitor;
    Noise_ColorMode__Enum value;
    
};

struct Noise__Fields {
    struct BaseEffect__Fields _;
    Noise_ColorMode__Enum Mode;
    
    bool Animate;
    float Seed;
    float Strength;
    float LumContribution;
};

struct Noise {
    struct Noise__Class *klass;
    MonitorData *monitor;
    struct Noise__Fields fields;
};

struct Noise_ColorMode__Enum__VTable {
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

struct Noise_ColorMode__Enum__StaticFields {
};

struct Noise_ColorMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Noise_ColorMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Noise_ColorMode__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Noise__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Noise__VTable vtable;
};

struct PhotoFilter__Fields {
    struct BaseEffect__Fields _;
    struct Color Color;
    float Density;
};

struct PhotoFilter {
    struct PhotoFilter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhotoFilter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhotoFilter__VTable vtable;
};

enum class Pixelate_SizeMode__Enum : int32_t {
    ResolutionIndependent = 0x00000000,
    PixelPerfect = 0x00000001,
};

struct Pixelate_SizeMode__Enum__Boxed {
    struct Pixelate_SizeMode__Enum__Class *klass;
    MonitorData *monitor;
    Pixelate_SizeMode__Enum value;
    
};

struct Pixelate__Fields {
    struct BaseEffect__Fields _;
    float Scale;
    bool AutomaticRatio;
    float Ratio;
    Pixelate_SizeMode__Enum Mode;
    
};

struct Pixelate {
    struct Pixelate__Class *klass;
    MonitorData *monitor;
    struct Pixelate__Fields fields;
};

struct Pixelate_SizeMode__Enum__VTable {
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

struct Pixelate_SizeMode__Enum__StaticFields {
};

struct Pixelate_SizeMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Pixelate_SizeMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Pixelate_SizeMode__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Pixelate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PixelMatrix__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Posterize__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Posterize__VTable vtable;
};

enum class RadialBlur_QualityPreset__Enum : int32_t {
    Low = 0x00000004,
    Medium = 0x00000008,
    High = 0x0000000c,
    Custom = 0x0000000d,
};

struct RadialBlur_QualityPreset__Enum__Boxed {
    struct RadialBlur_QualityPreset__Enum__Class *klass;
    MonitorData *monitor;
    RadialBlur_QualityPreset__Enum value;
    
};

struct RadialBlur__Fields {
    struct BaseEffect__Fields _;
    float Strength;
    int32_t Samples;
    struct Vector2 Center;
    RadialBlur_QualityPreset__Enum Quality;
    
    float Sharpness;
    float Darkness;
    bool EnableVignette;
};

struct RadialBlur {
    struct RadialBlur__Class *klass;
    MonitorData *monitor;
    struct RadialBlur__Fields fields;
};

struct RadialBlur_QualityPreset__Enum__VTable {
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

struct RadialBlur_QualityPreset__Enum__StaticFields {
};

struct RadialBlur_QualityPreset__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RadialBlur_QualityPreset__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RadialBlur_QualityPreset__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RadialBlur__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RadialBlur__VTable vtable;
};

struct RGBSplit__Fields {
    struct BaseEffect__Fields _;
    float Amount;
    float Angle;
};

struct RGBSplit {
    struct RGBSplit__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RGBSplit__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SCurveContrast__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SCurveContrast__VTable vtable;
};

enum class ShadowsMidtonesHighlights_ColorMode__Enum : int32_t {
    LiftGammaGain = 0x00000000,
    OffsetGammaSlope = 0x00000001,
};

struct ShadowsMidtonesHighlights_ColorMode__Enum__Boxed {
    struct ShadowsMidtonesHighlights_ColorMode__Enum__Class *klass;
    MonitorData *monitor;
    ShadowsMidtonesHighlights_ColorMode__Enum value;
    
};

struct ShadowsMidtonesHighlights__Fields {
    struct BaseEffect__Fields _;
    ShadowsMidtonesHighlights_ColorMode__Enum Mode;
    
    struct Color Shadows;
    struct Color Midtones;
    struct Color Highlights;
    float Amount;
};

struct ShadowsMidtonesHighlights {
    struct ShadowsMidtonesHighlights__Class *klass;
    MonitorData *monitor;
    struct ShadowsMidtonesHighlights__Fields fields;
};

struct ShadowsMidtonesHighlights_ColorMode__Enum__VTable {
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

struct ShadowsMidtonesHighlights_ColorMode__Enum__StaticFields {
};

struct ShadowsMidtonesHighlights_ColorMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShadowsMidtonesHighlights_ColorMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShadowsMidtonesHighlights_ColorMode__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShadowsMidtonesHighlights__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShadowsMidtonesHighlights__VTable vtable;
};

enum class Sharpen_Algorithm__Enum : int32_t {
    TypeA = 0x00000000,
    TypeB = 0x00000001,
};

struct Sharpen_Algorithm__Enum__Boxed {
    struct Sharpen_Algorithm__Enum__Class *klass;
    MonitorData *monitor;
    Sharpen_Algorithm__Enum value;
    
};

struct Sharpen_Settings {
    bool Enabled;
    Sharpen_Algorithm__Enum Mode;
    
    float Strength;
    float Clamp;
};

struct Sharpen_Settings__Boxed {
    struct Sharpen_Settings__Class *klass;
    MonitorData *monitor;
    struct Sharpen_Settings fields;
};

struct Sharpen__Fields {
    struct BaseEffect__Fields _;
    struct Sharpen_Settings Sharpness;
};

struct Sharpen {
    struct Sharpen__Class *klass;
    MonitorData *monitor;
    struct Sharpen__Fields fields;
};

struct Sharpen_Algorithm__Enum__VTable {
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

struct Sharpen_Algorithm__Enum__StaticFields {
};

struct Sharpen_Algorithm__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Sharpen_Algorithm__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Sharpen_Algorithm__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Sharpen_Settings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Sharpen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Sharpen__VTable vtable;
};

struct SmartSaturation__Fields {
    struct BaseEffect__Fields _;
    float Boost;
    struct AnimationCurve *Curve;
    struct Texture2D *_CurveTexture;
};

struct SmartSaturation {
    struct SmartSaturation__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SmartSaturation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SmartSaturation__VTable vtable;
};

enum class Strokes_ColorMode__Enum : int32_t {
    BlackAndWhite = 0x00000000,
    WhiteAndBlack = 0x00000001,
    ColorAndWhite = 0x00000002,
    ColorAndBlack = 0x00000003,
    WhiteAndColor = 0x00000004,
    BlackAndColor = 0x00000005,
};

struct Strokes_ColorMode__Enum__Boxed {
    struct Strokes_ColorMode__Enum__Class *klass;
    MonitorData *monitor;
    Strokes_ColorMode__Enum value;
    
};

struct Strokes__Fields {
    struct BaseEffect__Fields _;
    Strokes_ColorMode__Enum Mode;
    
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
    MonitorData *monitor;
    struct Strokes__Fields fields;
};

struct Strokes_ColorMode__Enum__VTable {
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

}
