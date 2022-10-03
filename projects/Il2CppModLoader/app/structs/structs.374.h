namespace app {
    struct Frost__StaticFields {
    };

    struct Frost__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Frost__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Frost__VTable vtable;
    };

    struct GaussianBlur__Fields {
        struct BaseEffect__Fields _;
        int32_t Passes;
        float Downscaling;
        float Amount;
    };

    struct GaussianBlur {
        struct GaussianBlur__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GaussianBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GaussianBlur__VTable vtable;
    };

    enum class Glitch_GlitchingMode__Enum : int32_t {
        Interferences = 0x00000000,
        Tearing = 0x00000001,
        Complete = 0x00000002,
    };

    struct Glitch_GlitchingMode__Enum__Boxed {
        struct Glitch_GlitchingMode__Enum__Class* klass;
        MonitorData* monitor;
        Glitch_GlitchingMode__Enum value;
    };

    struct Glitch__Fields {
        struct BaseEffect__Fields _;
        bool RandomActivation;
        struct Vector2 RandomEvery;
        struct Vector2 RandomDuration;
        Glitch_GlitchingMode__Enum Mode;

        struct Glitch_InterferenceSettings* SettingsInterferences;
        struct Glitch_TearingSettings* SettingsTearing;
        bool m_Activated;
        float m_EveryTimer;
        float m_EveryTimerEnd;
        float m_DurationTimer;
        float m_DurationTimerEnd;
    };

    struct Glitch {
        struct Glitch__Class* klass;
        MonitorData* monitor;
        struct Glitch__Fields fields;
    };

    struct __declspec(align(8)) Glitch_InterferenceSettings__Fields {
        float Speed;
        float Density;
        float MaxDisplacement;
    };

    struct Glitch_InterferenceSettings {
        struct Glitch_InterferenceSettings__Class* klass;
        MonitorData* monitor;
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
        struct Glitch_TearingSettings__Class* klass;
        MonitorData* monitor;
        struct Glitch_TearingSettings__Fields fields;
    };

    struct Glitch_GlitchingMode__Enum__VTable {
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

    struct Glitch_GlitchingMode__Enum__StaticFields {
    };

    struct Glitch_GlitchingMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Glitch_GlitchingMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Glitch_GlitchingMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Glitch_InterferenceSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Glitch_TearingSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Glitch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Glitch__VTable vtable;
    };

    struct GradientRamp__Fields {
        struct BaseEffect__Fields _;
        struct Texture* RampTexture;
        float Amount;
    };

    struct GradientRamp {
        struct GradientRamp__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GradientRamp__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GradientRamp__VTable vtable;
    };

    struct GradientRampDynamic__Fields {
        struct BaseEffect__Fields _;
        struct Gradient* Ramp;
        float Amount;
        struct Texture2D* m_RampTexture;
    };

    struct GradientRampDynamic {
        struct GradientRampDynamic__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GradientRampDynamic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GradientRampDynamic__VTable vtable;
    };

    struct GrainyBlur__Fields {
        struct BaseEffect__Fields _;
        float Radius;
        int32_t Samples;
    };

    struct GrainyBlur {
        struct GrainyBlur__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrainyBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Grayscale__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grayscale__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Halftone__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Halftone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Halftone__VTable vtable;
    };

    enum class Histogram_Channel__Enum : int32_t {
        Luminance = 0x00000000,
        RGB = 0x00000001,
        Red = 0x00000002,
        Green = 0x00000003,
        Blue = 0x00000004,
    };

    struct Histogram_Channel__Enum__Boxed {
        struct Histogram_Channel__Enum__Class* klass;
        MonitorData* monitor;
        Histogram_Channel__Enum value;
    };

    struct Histogram__Fields {
        struct MonoBehaviour__Fields _;
        Histogram_Channel__Enum e_CurrentChannel;

        bool e_Logarithmic;
        bool e_AutoRefresh;
        struct Action_1_UnityEngine_RenderTexture_* e_OnFrameEnd;
        bool e_ForceRefresh;
    };

    struct Histogram {
        struct Histogram__Class* klass;
        MonitorData* monitor;
        struct Histogram__Fields fields;
    };

    struct Action_1_UnityEngine_RenderTexture___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_UnityEngine_RenderTexture_ {
        struct Action_1_UnityEngine_RenderTexture___Class* klass;
        MonitorData* monitor;
        struct Action_1_UnityEngine_RenderTexture___Fields fields;
    };

    struct Histogram_Channel__Enum__VTable {
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

    struct Histogram_Channel__Enum__StaticFields {
    };

    struct Histogram_Channel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Histogram_Channel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Histogram_Channel__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_UnityEngine_RenderTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Histogram__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct HueFocus__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HueFocus__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct HueSaturationValue__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HueSaturationValue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HueSaturationValue__VTable vtable;
    };

    struct Kuwahara__Fields {
        struct BaseEffect__Fields _;
        int32_t Radius;
    };

    struct Kuwahara {
        struct Kuwahara__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Kuwahara__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Kuwahara__VTable vtable;
    };

    enum class Led_SizeMode__Enum : int32_t {
        ResolutionIndependent = 0x00000000,
        PixelPerfect = 0x00000001,
    };

    struct Led_SizeMode__Enum__Boxed {
        struct Led_SizeMode__Enum__Class* klass;
        MonitorData* monitor;
        Led_SizeMode__Enum value;
    };

    struct Led__Fields {
        struct BaseEffect__Fields _;
        float Scale;
        float Brightness;
        float Shape;
        bool AutomaticRatio;
        float Ratio;
        Led_SizeMode__Enum Mode;
    };

    struct Led {
        struct Led__Class* klass;
        MonitorData* monitor;
        struct Led__Fields fields;
    };

    struct Led_SizeMode__Enum__VTable {
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

    struct Led_SizeMode__Enum__StaticFields {
    };

    struct Led_SizeMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Led_SizeMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Led_SizeMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Led__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Led__VTable vtable;
    };

    enum class LensDistortionBlur_QualityPreset__Enum : int32_t {
        Low = 0x00000004,
        Medium = 0x00000008,
        High = 0x0000000c,
        Custom = 0x0000000d,
    };

    struct LensDistortionBlur_QualityPreset__Enum__Boxed {
        struct LensDistortionBlur_QualityPreset__Enum__Class* klass;
        MonitorData* monitor;
        LensDistortionBlur_QualityPreset__Enum value;
    };

    struct LensDistortionBlur__Fields {
        struct BaseEffect__Fields _;
        LensDistortionBlur_QualityPreset__Enum Quality;

        int32_t Samples;
        float Distortion;
        float CubicDistortion;
        float Scale;
    };

    struct LensDistortionBlur {
        struct LensDistortionBlur__Class* klass;
        MonitorData* monitor;
        struct LensDistortionBlur__Fields fields;
    };

    struct LensDistortionBlur_QualityPreset__Enum__VTable {
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

    struct LensDistortionBlur_QualityPreset__Enum__StaticFields {
    };

    struct LensDistortionBlur_QualityPreset__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensDistortionBlur_QualityPreset__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LensDistortionBlur_QualityPreset__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensDistortionBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LensDistortionBlur__VTable vtable;
    };

    struct Letterbox__Fields {
        struct BaseEffect__Fields _;
        float Aspect;
        struct Color FillColor;
    };

    struct Letterbox {
        struct Letterbox__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Letterbox__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Letterbox__VTable vtable;
    };

    enum class Levels_ColorMode__Enum : int32_t {
        Monochrome = 0x00000000,
        RGB = 0x00000001,
    };

    struct Levels_ColorMode__Enum__Boxed {
        struct Levels_ColorMode__Enum__Class* klass;
        MonitorData* monitor;
        Levels_ColorMode__Enum value;
    };

    enum class Levels_Channel__Enum : int32_t {
        Red = 0x00000000,
        Green = 0x00000001,
        Blue = 0x00000002,
    };

    struct Levels_Channel__Enum__Boxed {
        struct Levels_Channel__Enum__Class* klass;
        MonitorData* monitor;
        Levels_Channel__Enum value;
    };

    struct Levels__Fields {
        struct BaseEffect__Fields _;
        Levels_ColorMode__Enum Mode;

        struct Vector3 InputL;
        struct Vector3 InputR;
        struct Vector3 InputG;
        struct Vector3 InputB;
        struct Vector2 OutputL;
        struct Vector2 OutputR;
        struct Vector2 OutputG;
        struct Vector2 OutputB;
        Levels_Channel__Enum e_CurrentChannel;

        bool e_Logarithmic;
        bool e_AutoRefresh;
        struct Action_1_UnityEngine_RenderTexture_* e_OnFrameEnd;
        bool e_ForceRefresh;
    };

    struct Levels {
        struct Levels__Class* klass;
        MonitorData* monitor;
        struct Levels__Fields fields;
    };

    struct Levels_ColorMode__Enum__VTable {
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

    struct Levels_ColorMode__Enum__StaticFields {
    };

    struct Levels_ColorMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Levels_ColorMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Levels_ColorMode__Enum__VTable vtable;
    };

    struct Levels_Channel__Enum__VTable {
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

    struct Levels_Channel__Enum__StaticFields {
    };

    struct Levels_Channel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Levels_Channel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Levels_Channel__Enum__VTable vtable;
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

} // namespace app
