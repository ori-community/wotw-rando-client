namespace app {
    enum class SMAA_QualityPreset__Enum : int32_t {
        Low = 0x00000000,
        Medium = 0x00000001,
        High = 0x00000002,
        Ultra = 0x00000003,
        Custom = 0x00000004,
    };

    struct SMAA_QualityPreset__Enum__Boxed {
        struct SMAA_QualityPreset__Enum__Class* klass;
        MonitorData* monitor;
        SMAA_QualityPreset__Enum value;
    };

    enum class SMAA_EdgeDetectionMethod__Enum : int32_t {
        Luma = 0x00000001,
        Color = 0x00000002,
        Depth = 0x00000003,
    };

    struct SMAA_EdgeDetectionMethod__Enum__Boxed {
        struct SMAA_EdgeDetectionMethod__Enum__Class* klass;
        MonitorData* monitor;
        SMAA_EdgeDetectionMethod__Enum value;
    };

    struct SMAA_GlobalSettings {
        SMAA_DebugPass__Enum debugPass;

        SMAA_QualityPreset__Enum quality;

        SMAA_EdgeDetectionMethod__Enum edgeDetectionMethod;
    };

    struct SMAA_GlobalSettings__Boxed {
        struct SMAA_GlobalSettings__Class* klass;
        MonitorData* monitor;
        struct SMAA_GlobalSettings fields;
    };

    struct SMAA_QualitySettings {
        bool diagonalDetection;
        bool cornerDetection;
        float threshold;
        float depthThreshold;
        int32_t maxSearchSteps;
        int32_t maxDiagonalSearchSteps;
        int32_t cornerRounding;
        float localContrastAdaptationFactor;
    };

    struct SMAA_QualitySettings__Boxed {
        struct SMAA_QualitySettings__Class* klass;
        MonitorData* monitor;
        struct SMAA_QualitySettings fields;
    };

    struct SMAA_PredicationSettings {
        bool enabled;
        float threshold;
        float scale;
        float strength;
    };

    struct SMAA_PredicationSettings__Boxed {
        struct SMAA_PredicationSettings__Class* klass;
        MonitorData* monitor;
        struct SMAA_PredicationSettings fields;
    };

    struct SMAA_TemporalSettings {
        bool enabled;
        float fuzzSize;
    };

    struct SMAA_TemporalSettings__Boxed {
        struct SMAA_TemporalSettings__Class* klass;
        MonitorData* monitor;
        struct SMAA_TemporalSettings fields;
    };

    struct __declspec(align(8)) SMAA__Fields {
        struct SMAA_GlobalSettings settings;
        struct SMAA_QualitySettings quality;
        struct SMAA_PredicationSettings predication;
        struct SMAA_TemporalSettings temporal;
        struct Matrix4x4 m_ProjectionMatrix;
        struct Matrix4x4 m_PreviousViewProjectionMatrix;
        float m_FlipFlop;
        struct RenderTexture* m_Accumulation;
        struct Shader* m_Shader;
        struct Texture2D* m_AreaTexture;
        struct Texture2D* m_SearchTexture;
        struct Material* m_Material;
    };

    struct SMAA {
        struct SMAA__Class* klass;
        MonitorData* monitor;
        struct SMAA__Fields fields;
    };

    struct SMAA_QualitySettings__Array {
        struct SMAA_QualitySettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SMAA_QualitySettings vector[32];
    };

    struct FXAA_ConsoleSettings {
        float subpixelSpreadAmount;
        float edgeSharpnessAmount;
        float edgeDetectionThreshold;
        float minimumRequiredLuminance;
    };

    struct FXAA_ConsoleSettings__Boxed {
        struct FXAA_ConsoleSettings__Class* klass;
        MonitorData* monitor;
        struct FXAA_ConsoleSettings fields;
    };

    struct FXAA_Preset {
        struct FXAA_QualitySettings qualitySettings;
        struct FXAA_ConsoleSettings consoleSettings;
    };

    struct FXAA_Preset__Boxed {
        struct FXAA_Preset__Class* klass;
        MonitorData* monitor;
        struct FXAA_Preset fields;
    };

    struct __declspec(align(8)) FXAA__Fields {
        bool m_useSeparateAlpha;
        struct Shader* m_Shader;
        struct Material* m_Material;
        struct FXAA_Preset preset;
        bool _validSourceFormat_k__BackingField;
    };

    struct FXAA {
        struct FXAA__Class* klass;
        MonitorData* monitor;
        struct FXAA__Fields fields;
    };

    struct FXAA_Preset__Array {
        struct FXAA_Preset__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FXAA_Preset vector[32];
    };

    struct SMAA_DebugPass__Enum__VTable {
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

    struct SMAA_DebugPass__Enum__StaticFields {
    };

    struct SMAA_DebugPass__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_DebugPass__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_DebugPass__Enum__VTable vtable;
    };

    struct SMAA_QualityPreset__Enum__VTable {
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

    struct SMAA_QualityPreset__Enum__StaticFields {
    };

    struct SMAA_QualityPreset__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_QualityPreset__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_QualityPreset__Enum__VTable vtable;
    };

    struct SMAA_EdgeDetectionMethod__Enum__VTable {
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

    struct SMAA_EdgeDetectionMethod__Enum__StaticFields {
    };

    struct SMAA_EdgeDetectionMethod__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_EdgeDetectionMethod__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_EdgeDetectionMethod__Enum__VTable vtable;
    };

    struct SMAA_GlobalSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SMAA_GlobalSettings__StaticFields {
    };

    struct SMAA_GlobalSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_GlobalSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_GlobalSettings__VTable vtable;
    };

    struct SMAA_QualitySettings__Array__VTable {
    };

    struct SMAA_QualitySettings__Array__StaticFields {
    };

    struct SMAA_QualitySettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_QualitySettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_QualitySettings__Array__VTable vtable;
    };

    struct SMAA_QualitySettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SMAA_QualitySettings__StaticFields {
        struct SMAA_QualitySettings__Array* presetQualitySettings;
    };

    struct SMAA_QualitySettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_QualitySettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_QualitySettings__VTable vtable;
    };

    struct SMAA_PredicationSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SMAA_PredicationSettings__StaticFields {
    };

    struct SMAA_PredicationSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_PredicationSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_PredicationSettings__VTable vtable;
    };

    struct SMAA_TemporalSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SMAA_TemporalSettings__StaticFields {
    };

    struct SMAA_TemporalSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_TemporalSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_TemporalSettings__VTable vtable;
    };

    struct SMAA__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnPreCull;
        VirtualInvokeData OnPostRender;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData OnRenderImage_1;
    };

    struct SMAA__StaticFields {
    };

    struct SMAA__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA__VTable vtable;
    };

    struct FXAA_ConsoleSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FXAA_ConsoleSettings__StaticFields {
    };

    struct FXAA_ConsoleSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FXAA_ConsoleSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FXAA_ConsoleSettings__VTable vtable;
    };

    struct FXAA_Preset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FXAA_Preset__StaticFields {
        struct FXAA_Preset s_ExtremePerformance;
        struct FXAA_Preset s_Performance;
        struct FXAA_Preset s_Default;
        struct FXAA_Preset s_Quality;
        struct FXAA_Preset s_ExtremeQuality;
    };

    struct FXAA_Preset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FXAA_Preset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FXAA_Preset__VTable vtable;
    };

    struct FXAA_Preset__Array__VTable {
    };

    struct FXAA_Preset__Array__StaticFields {
    };

    struct FXAA_Preset__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FXAA_Preset__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FXAA_Preset__Array__VTable vtable;
    };

    struct FXAA__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnPreCull;
        VirtualInvokeData OnPostRender;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData OnRenderImage_1;
    };

    struct FXAA__StaticFields {
        struct FXAA_Preset__Array* availablePresets;
    };

    struct FXAA__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FXAA__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FXAA__VTable vtable;
    };

    struct AntiAliasing__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IRenderPostprocessor_get_enabled;
        VirtualInvokeData IRenderPostprocessor_OnRenderImage;
    };

    struct AntiAliasing__StaticFields {
    };

    struct AntiAliasing__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AntiAliasing__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AntiAliasing__VTable vtable;
    };

    struct IAntiAliasing {
        struct IAntiAliasing__Class* klass;
        MonitorData* monitor;
    };

    struct IAntiAliasing__VTable {
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnPreCull;
        VirtualInvokeData OnPostRender;
        VirtualInvokeData OnRenderImage;
        VirtualInvokeData OnRenderImage_1;
    };

    struct IAntiAliasing__StaticFields {
    };

    struct IAntiAliasing__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IAntiAliasing__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IAntiAliasing__VTable vtable;
    };

    struct FXAA_Preset_LayoutAttribute {
        struct FXAA_Preset_LayoutAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct FXAA_Preset_LayoutAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct FXAA_Preset_LayoutAttribute__StaticFields {
    };

    struct FXAA_Preset_LayoutAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FXAA_Preset_LayoutAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FXAA_Preset_LayoutAttribute__VTable vtable;
    };

    struct SMAA_SettingsGroup {
        struct SMAA_SettingsGroup__Class* klass;
        MonitorData* monitor;
    };

    struct SMAA_SettingsGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct SMAA_SettingsGroup__StaticFields {
    };

    struct SMAA_SettingsGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_SettingsGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_SettingsGroup__VTable vtable;
    };

    struct SMAA_TopLevelSettings {
        struct SMAA_TopLevelSettings__Class* klass;
        MonitorData* monitor;
    };

    struct SMAA_TopLevelSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct SMAA_TopLevelSettings__StaticFields {
    };

    struct SMAA_TopLevelSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_TopLevelSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_TopLevelSettings__VTable vtable;
    };

    struct SMAA_ExperimentalGroup {
        struct SMAA_ExperimentalGroup__Class* klass;
        MonitorData* monitor;
    };

    struct SMAA_ExperimentalGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct SMAA_ExperimentalGroup__StaticFields {
    };

    struct SMAA_ExperimentalGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SMAA_ExperimentalGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SMAA_ExperimentalGroup__VTable vtable;
    };

    enum class Bloom_BloomBlendMode__Enum : int32_t {
        None = 0x00000000,
        Additive = 0x00000001,
        ScreenBlend = 0x00000002,
        Multiply = 0x00000003,
        Overlay = 0x00000004,
        PinLight = 0x00000005,
    };

    struct Bloom_BloomBlendMode__Enum__Boxed {
        struct Bloom_BloomBlendMode__Enum__Class* klass;
        MonitorData* monitor;
        Bloom_BloomBlendMode__Enum value;
    };

    struct Bloom_Settings {
        bool enabled;
        Bloom_BloomBlendMode__Enum blendMode;

        float threshold;
        float softKnee;
        float radius;
        float intensity;
        bool highQuality;
        bool antiFlicker;
    };

    struct Bloom_Settings__Boxed {
        struct Bloom_Settings__Class* klass;
        MonitorData* monitor;
        struct Bloom_Settings fields;
    };

    struct Bloom_1__Fields {
        struct MonoBehaviour__Fields _;
        struct Bloom_Settings CinematicBloom;
        float AdditiveIntensity;
        float AdditiveThreshhold;
        struct Shader* m_Shader;
        struct Material* m_Material;
        struct RenderTexture__Array* m_blurBuffer1;
        struct RenderTexture__Array* m_blurBuffer2;
    };

    struct Bloom_1 {
        struct Bloom_1__Class* klass;
        MonitorData* monitor;
        struct Bloom_1__Fields fields;
    };

    struct Bloom_BloomBlendMode__Enum__VTable {
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

    struct Bloom_BloomBlendMode__Enum__StaticFields {
    };

    struct Bloom_BloomBlendMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Bloom_BloomBlendMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Bloom_BloomBlendMode__Enum__VTable vtable;
    };

    struct Bloom_Settings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Bloom_Settings__StaticFields {
    };

    struct Bloom_Settings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Bloom_Settings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Bloom_Settings__VTable vtable;
    };

    struct Bloom_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Bloom_1__StaticFields {
    };

    struct Bloom_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Bloom_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Bloom_1__VTable vtable;
    };

    struct __declspec(align(8)) MinAttribute_1__Fields {
        float min;
    };

    struct MinAttribute_1 {
        struct MinAttribute_1__Class* klass;
        MonitorData* monitor;
        struct MinAttribute_1__Fields fields;
    };

    struct MinAttribute_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct MinAttribute_1__StaticFields {
    };

    struct MinAttribute_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MinAttribute_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MinAttribute_1__VTable vtable;
    };

    struct __declspec(align(8)) RenderTextureUtility__Fields {
        struct List_1_UnityEngine_RenderTexture_* m_TemporaryRTs;
    };

    struct RenderTextureUtility {
        struct RenderTextureUtility__Class* klass;
        MonitorData* monitor;
        struct RenderTextureUtility__Fields fields;
    };

    struct __declspec(align(8)) List_1_UnityEngine_RenderTexture___Fields {
        struct RenderTexture__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_RenderTexture_ {
        struct List_1_UnityEngine_RenderTexture___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_RenderTexture___Fields fields;
    };

    struct IEnumerator_1_UnityEngine_RenderTexture_ {
        struct IEnumerator_1_UnityEngine_RenderTexture___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_UnityEngine_RenderTexture___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UnityEngine_RenderTexture___StaticFields {
    };

    struct IEnumerator_1_UnityEngine_RenderTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UnityEngine_RenderTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UnityEngine_RenderTexture___VTable vtable;
    };

    struct List_1_UnityEngine_RenderTexture___VTable {
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

    struct List_1_UnityEngine_RenderTexture___StaticFields {
        struct RenderTexture__Array* _emptyArray;
    };

    struct List_1_UnityEngine_RenderTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UnityEngine_RenderTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UnityEngine_RenderTexture___VTable vtable;
    };

    struct RenderTextureUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RenderTextureUtility__StaticFields {
    };

    struct RenderTextureUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureUtility__VTable vtable;
    };

    enum class DepthOfField_TweakMode__Enum : int32_t {
        Range = 0x00000000,
        Explicit = 0x00000001,
    };

    struct DepthOfField_TweakMode__Enum__Boxed {
        struct DepthOfField_TweakMode__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfField_TweakMode__Enum value;
    };

    enum class DepthOfField_QualityPreset__Enum : int32_t {
        Low = 0x00000000,
        Medium = 0x00000001,
        High = 0x00000002,
    };

    struct DepthOfField_QualityPreset__Enum__Boxed {
        struct DepthOfField_QualityPreset__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfField_QualityPreset__Enum value;
    };

    enum class DepthOfField_ApertureShape__Enum : int32_t {
        Circular = 0x00000000,
        Hexagonal = 0x00000001,
        Octogonal = 0x00000002,
    };

    struct DepthOfField_ApertureShape__Enum__Boxed {
        struct DepthOfField_ApertureShape__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfField_ApertureShape__Enum value;
    };

    struct DepthOfField_GlobalSettings {
        bool visualizeFocus;
        DepthOfField_TweakMode__Enum tweakMode;

        DepthOfField_QualityPreset__Enum filteringQuality;

        DepthOfField_ApertureShape__Enum apertureShape;

        float apertureOrientation;
    };

    struct DepthOfField_GlobalSettings__Boxed {
        struct DepthOfField_GlobalSettings__Class* klass;
        MonitorData* monitor;
        struct DepthOfField_GlobalSettings fields;
    };

    struct DepthOfField_FocusSettings {
        struct Transform* transform;
        float focusPlane;
        float range;
        float nearPlane;
        float nearFalloff;
        float farPlane;
        float farFalloff;
        float nearBlurRadius;
        float farBlurRadius;
    };

    struct DepthOfField_FocusSettings__Boxed {
        struct DepthOfField_FocusSettings__Class* klass;
        MonitorData* monitor;
        struct DepthOfField_FocusSettings fields;
    };

    struct DepthOfField_BokehTextureSettings {
        struct Texture2D* texture;
        float scale;
        float intensity;
        float threshold;
        float spawnHeuristic;
    };

    struct DepthOfField_BokehTextureSettings__Boxed {
        struct DepthOfField_BokehTextureSettings__Class* klass;
        MonitorData* monitor;
        struct DepthOfField_BokehTextureSettings fields;
    };

    enum class DepthOfField_FilterQuality__Enum : int32_t {
        None = 0x00000000,
        Normal = 0x00000001,
        High = 0x00000002,
    };

    struct DepthOfField_FilterQuality__Enum__Boxed {
        struct DepthOfField_FilterQuality__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfField_FilterQuality__Enum value;
    };

} // namespace app
