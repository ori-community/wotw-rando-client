namespace app {
    struct BaseEffect {
        struct BaseEffect__Class* klass;
        MonitorData* monitor;
        struct BaseEffect__Fields fields;
    };

    struct BaseEffect__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct BaseEffect__StaticFields {
    };

    struct BaseEffect__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaseEffect__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaseEffect__VTable vtable;
    };

    struct AnalogTV__Fields {
        struct BaseEffect__Fields _;
        bool AutomaticPhase;
        float Phase;
        bool ConvertToGrayscale;
        float NoiseIntensity;
        float ScanlinesIntensity;
        int32_t ScanlinesCount;
        float ScanlinesOffset;
        bool VerticalScanlines;
        float Distortion;
        float CubicDistortion;
        float Scale;
    };

    struct AnalogTV {
        struct AnalogTV__Class* klass;
        MonitorData* monitor;
        struct AnalogTV__Fields fields;
    };

    struct AnalogTV__VTable {
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

    struct AnalogTV__StaticFields {
    };

    struct AnalogTV__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnalogTV__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnalogTV__VTable vtable;
    };

    struct BilateralGaussianBlur__Fields {
        struct BaseEffect__Fields _;
        int32_t Passes;
        float Threshold;
        float Amount;
    };

    struct BilateralGaussianBlur {
        struct BilateralGaussianBlur__Class* klass;
        MonitorData* monitor;
        struct BilateralGaussianBlur__Fields fields;
    };

    struct BilateralGaussianBlur__VTable {
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

    struct BilateralGaussianBlur__StaticFields {
    };

    struct BilateralGaussianBlur__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BilateralGaussianBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BilateralGaussianBlur__VTable vtable;
    };

    struct BleachBypass__Fields {
        struct BaseEffect__Fields _;
        float Amount;
    };

    struct BleachBypass {
        struct BleachBypass__Class* klass;
        MonitorData* monitor;
        struct BleachBypass__Fields fields;
    };

    struct BleachBypass__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct BleachBypass__StaticFields {
    };

    struct BleachBypass__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BleachBypass__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BleachBypass__VTable vtable;
    };

    enum class Blend_BlendingMode__Enum : int32_t {
        Darken = 0x00000000,
        Multiply = 0x00000001,
        ColorBurn = 0x00000002,
        LinearBurn = 0x00000003,
        DarkerColor = 0x00000004,
        Lighten = 0x00000006,
        Screen = 0x00000007,
        ColorDodge = 0x00000008,
        LinearDodge = 0x00000009,
        LighterColor = 0x0000000a,
        Overlay = 0x0000000c,
        SoftLight = 0x0000000d,
        HardLight = 0x0000000e,
        VividLight = 0x0000000f,
        LinearLight = 0x00000010,
        PinLight = 0x00000011,
        HardMix = 0x00000012,
        Difference = 0x00000014,
        Exclusion = 0x00000015,
        Subtract = 0x00000016,
        Divide = 0x00000017,
    };

    struct Blend_BlendingMode__Enum__Boxed {
        struct Blend_BlendingMode__Enum__Class* klass;
        MonitorData* monitor;
        Blend_BlendingMode__Enum value;
    };

    struct Blend__Fields {
        struct BaseEffect__Fields _;
        struct Texture* Texture;
        float Amount;
        Blend_BlendingMode__Enum Mode;
    };

    struct Blend {
        struct Blend__Class* klass;
        MonitorData* monitor;
        struct Blend__Fields fields;
    };

    struct Blend_BlendingMode__Enum__VTable {
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

    struct Blend_BlendingMode__Enum__StaticFields {
    };

    struct Blend_BlendingMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Blend_BlendingMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Blend_BlendingMode__Enum__VTable vtable;
    };

    struct Blend__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct Blend__StaticFields {
    };

    struct Blend__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Blend__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Blend__VTable vtable;
    };

    struct BrightnessContrastGamma__Fields {
        struct BaseEffect__Fields _;
        float Brightness;
        float Contrast;
        struct Vector3 ContrastCoeff;
        float Gamma;
    };

    struct BrightnessContrastGamma {
        struct BrightnessContrastGamma__Class* klass;
        MonitorData* monitor;
        struct BrightnessContrastGamma__Fields fields;
    };

    struct BrightnessContrastGamma__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct BrightnessContrastGamma__StaticFields {
    };

    struct BrightnessContrastGamma__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrightnessContrastGamma__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrightnessContrastGamma__VTable vtable;
    };

    struct ChannelClamper__Fields {
        struct BaseEffect__Fields _;
        struct Vector2 Red;
        struct Vector2 Green;
        struct Vector2 Blue;
    };

    struct ChannelClamper {
        struct ChannelClamper__Class* klass;
        MonitorData* monitor;
        struct ChannelClamper__Fields fields;
    };

    struct ChannelClamper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct ChannelClamper__StaticFields {
    };

    struct ChannelClamper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChannelClamper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChannelClamper__VTable vtable;
    };

    struct ChannelMixer__Fields {
        struct BaseEffect__Fields _;
        struct Vector3 Red;
        struct Vector3 Green;
        struct Vector3 Blue;
        struct Vector3 Constant;
        int32_t e_CurrentChannel;
    };

    struct ChannelMixer {
        struct ChannelMixer__Class* klass;
        MonitorData* monitor;
        struct ChannelMixer__Fields fields;
    };

    struct ChannelMixer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct ChannelMixer__StaticFields {
    };

    struct ChannelMixer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChannelMixer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChannelMixer__VTable vtable;
    };

    enum class ChannelSwapper_Channel__Enum : int32_t {
        Red = 0x00000000,
        Green = 0x00000001,
        Blue = 0x00000002,
    };

    struct ChannelSwapper_Channel__Enum__Boxed {
        struct ChannelSwapper_Channel__Enum__Class* klass;
        MonitorData* monitor;
        ChannelSwapper_Channel__Enum value;
    };

    struct ChannelSwapper__Fields {
        struct BaseEffect__Fields _;
        ChannelSwapper_Channel__Enum RedSource;

        ChannelSwapper_Channel__Enum GreenSource;

        ChannelSwapper_Channel__Enum BlueSource;
    };

    struct ChannelSwapper {
        struct ChannelSwapper__Class* klass;
        MonitorData* monitor;
        struct ChannelSwapper__Fields fields;
    };

    struct ChannelSwapper_Channel__Enum__VTable {
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

    struct ChannelSwapper_Channel__Enum__StaticFields {
    };

    struct ChannelSwapper_Channel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChannelSwapper_Channel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChannelSwapper_Channel__Enum__VTable vtable;
    };

    struct ChannelSwapper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct ChannelSwapper__StaticFields {
        struct Vector4__Array* m_Channels;
    };

    struct ChannelSwapper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChannelSwapper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChannelSwapper__VTable vtable;
    };

    struct ChromaticAberration__Fields {
        struct BaseEffect__Fields _;
        float RedRefraction;
        float GreenRefraction;
        float BlueRefraction;
        bool PreserveAlpha;
    };

    struct ChromaticAberration {
        struct ChromaticAberration__Class* klass;
        MonitorData* monitor;
        struct ChromaticAberration__Fields fields;
    };

    struct ChromaticAberration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct ChromaticAberration__StaticFields {
    };

    struct ChromaticAberration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChromaticAberration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChromaticAberration__VTable vtable;
    };

    struct ComicBook__Fields {
        struct BaseEffect__Fields _;
        float StripAngle;
        float StripDensity;
        float StripThickness;
        struct Vector2 StripLimits;
        struct Color StripInnerColor;
        struct Color StripOuterColor;
        struct Color FillColor;
        struct Color BackgroundColor;
        bool EdgeDetection;
        float EdgeThreshold;
        struct Color EdgeColor;
        float Amount;
    };

    struct ComicBook {
        struct ComicBook__Class* klass;
        MonitorData* monitor;
        struct ComicBook__Fields fields;
    };

    struct ComicBook__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData GetShaderName;
    };

    struct ComicBook__StaticFields {
    };

    struct ComicBook__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ComicBook__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ComicBook__VTable vtable;
    };

    struct ContrastGain__Fields {
        struct BaseEffect__Fields _;
        float Gain;
    };

    struct ContrastGain {
        struct ContrastGain__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContrastGain__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct ContrastVignette__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContrastVignette__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Convolution3x3__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Convolution3x3__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct CrossStitch__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrossStitch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrossStitch__VTable vtable;
    };

    enum class DirectionalBlur_QualityPreset__Enum : int32_t {
        Low = 0x00000002,
        Medium = 0x00000004,
        High = 0x00000006,
        Custom = 0x00000007,
    };

    struct DirectionalBlur_QualityPreset__Enum__Boxed {
        struct DirectionalBlur_QualityPreset__Enum__Class* klass;
        MonitorData* monitor;
        DirectionalBlur_QualityPreset__Enum value;
    };

    struct DirectionalBlur__Fields {
        struct BaseEffect__Fields _;
        DirectionalBlur_QualityPreset__Enum Quality;

        int32_t Samples;
        float Strength;
        float Angle;
    };

    struct DirectionalBlur {
        struct DirectionalBlur__Class* klass;
        MonitorData* monitor;
        struct DirectionalBlur__Fields fields;
    };

    struct DirectionalBlur_QualityPreset__Enum__VTable {
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

    struct DirectionalBlur_QualityPreset__Enum__StaticFields {
    };

    struct DirectionalBlur_QualityPreset__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DirectionalBlur_QualityPreset__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DirectionalBlur_QualityPreset__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DirectionalBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Texture2D* m_DitherPattern;
    };

    struct Dithering {
        struct Dithering__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dithering__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dithering__VTable vtable;
    };

    struct DoubleVision__Fields {
        struct BaseEffect__Fields _;
        struct Vector2 Displace;
        float Amount;
    };

    struct DoubleVision {
        struct DoubleVision__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DoubleVision__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct DynamicLookup__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicLookup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicLookup__VTable vtable;
    };

    enum class FastVignette_ColorMode__Enum : int32_t {
        Classic = 0x00000000,
        Desaturate = 0x00000001,
        Colored = 0x00000002,
    };

    struct FastVignette_ColorMode__Enum__Boxed {
        struct FastVignette_ColorMode__Enum__Class* klass;
        MonitorData* monitor;
        FastVignette_ColorMode__Enum value;
    };

    struct FastVignette__Fields {
        struct BaseEffect__Fields _;
        FastVignette_ColorMode__Enum Mode;

        struct Color Color;
        struct Vector2 Center;
        float Sharpness;
        float Darkness;
    };

    struct FastVignette {
        struct FastVignette__Class* klass;
        MonitorData* monitor;
        struct FastVignette__Fields fields;
    };

    struct FastVignette_ColorMode__Enum__VTable {
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

    struct FastVignette_ColorMode__Enum__StaticFields {
    };

    struct FastVignette_ColorMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastVignette_ColorMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastVignette_ColorMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastVignette__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Frost__Class* klass;
        MonitorData* monitor;
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

} // namespace app
