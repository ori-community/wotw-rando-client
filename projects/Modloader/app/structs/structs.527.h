namespace app {
    struct DepthOfField_QualitySettings {
        bool prefilterBlur;
        DepthOfField_FilterQuality__Enum medianFilter;

        bool dilateNearBlur;
    };

    struct DepthOfField_QualitySettings__Boxed {
        struct DepthOfField_QualitySettings__Class* klass;
        MonitorData* monitor;
        struct DepthOfField_QualitySettings fields;
    };

    struct DepthOfField_1__Fields {
        struct MonoBehaviour__Fields _;
        struct DepthOfField_GlobalSettings settings;
        struct DepthOfField_FocusSettings focus;
        struct DepthOfField_BokehTextureSettings bokehTexture;
        struct Shader* m_FilmicDepthOfFieldShader;
        struct Shader* m_MedianFilterShader;
        struct Shader* m_TextureBokehShader;
        struct RenderTextureUtility* m_RTU;
        struct Material* m_FilmicDepthOfFieldMaterial;
        struct Material* m_MedianFilterMaterial;
        struct Material* m_TextureBokehMaterial;
        struct ComputeBuffer* m_ComputeBufferDrawArgs;
        struct ComputeBuffer* m_ComputeBufferPoints;
        struct DepthOfField_QualitySettings m_CurrentQualitySettings;
        float m_LastApertureOrientation;
        struct Vector4 m_OctogonalBokehDirection1;
        struct Vector4 m_OctogonalBokehDirection2;
        struct Vector4 m_OctogonalBokehDirection3;
        struct Vector4 m_OctogonalBokehDirection4;
        struct Vector4 m_HexagonalBokehDirection1;
        struct Vector4 m_HexagonalBokehDirection2;
        struct Vector4 m_HexagonalBokehDirection3;
    };

    struct DepthOfField_1 {
        struct DepthOfField_1__Class* klass;
        MonitorData* monitor;
        struct DepthOfField_1__Fields fields;
    };

    struct DepthOfField_QualitySettings__Array {
        struct DepthOfField_QualitySettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DepthOfField_QualitySettings vector[32];
    };

    struct DepthOfField_TweakMode__Enum__VTable {
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

    struct DepthOfField_TweakMode__Enum__StaticFields {
    };

    struct DepthOfField_TweakMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_TweakMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_TweakMode__Enum__VTable vtable;
    };

    struct DepthOfField_QualityPreset__Enum__VTable {
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

    struct DepthOfField_QualityPreset__Enum__StaticFields {
    };

    struct DepthOfField_QualityPreset__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_QualityPreset__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_QualityPreset__Enum__VTable vtable;
    };

    struct DepthOfField_ApertureShape__Enum__VTable {
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

    struct DepthOfField_ApertureShape__Enum__StaticFields {
    };

    struct DepthOfField_ApertureShape__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_ApertureShape__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_ApertureShape__Enum__VTable vtable;
    };

    struct DepthOfField_GlobalSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DepthOfField_GlobalSettings__StaticFields {
    };

    struct DepthOfField_GlobalSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_GlobalSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_GlobalSettings__VTable vtable;
    };

    struct DepthOfField_FocusSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DepthOfField_FocusSettings__StaticFields {
    };

    struct DepthOfField_FocusSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_FocusSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_FocusSettings__VTable vtable;
    };

    struct DepthOfField_BokehTextureSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DepthOfField_BokehTextureSettings__StaticFields {
    };

    struct DepthOfField_BokehTextureSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_BokehTextureSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_BokehTextureSettings__VTable vtable;
    };

    struct DepthOfField_FilterQuality__Enum__VTable {
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

    struct DepthOfField_FilterQuality__Enum__StaticFields {
    };

    struct DepthOfField_FilterQuality__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_FilterQuality__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_FilterQuality__Enum__VTable vtable;
    };

    struct DepthOfField_QualitySettings__Array__VTable {
    };

    struct DepthOfField_QualitySettings__Array__StaticFields {
    };

    struct DepthOfField_QualitySettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_QualitySettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_QualitySettings__Array__VTable vtable;
    };

    struct DepthOfField_QualitySettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DepthOfField_QualitySettings__StaticFields {
        struct DepthOfField_QualitySettings__Array* presetQualitySettings;
    };

    struct DepthOfField_QualitySettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_QualitySettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_QualitySettings__VTable vtable;
    };

    struct DepthOfField_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DepthOfField_1__StaticFields {
    };

    struct DepthOfField_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_1__VTable vtable;
    };

    struct RenderTexture___VTable {
    };

    struct RenderTexture___StaticFields {
    };

    struct RenderTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTexture___VTable vtable;
    };

    struct LensAberrations_DistortionSettings {
        bool enabled;
        float amount;
        float centerX;
        float centerY;
        float amountX;
        float amountY;
        float scale;
    };

    struct LensAberrations_DistortionSettings__Boxed {
        struct LensAberrations_DistortionSettings__Class* klass;
        MonitorData* monitor;
        struct LensAberrations_DistortionSettings fields;
    };

    struct LensAberrations_VignetteSettings {
        bool enabled;
        struct Color color;
        struct Vector2 center;
        float intensity;
        float smoothness;
        float roundness;
        float blur;
        float desaturate;
    };

    struct LensAberrations_VignetteSettings__Boxed {
        struct LensAberrations_VignetteSettings__Class* klass;
        MonitorData* monitor;
        struct LensAberrations_VignetteSettings fields;
    };

    struct LensAberrations_ChromaticAberrationSettings {
        bool enabled;
        struct Color color;
        float amount;
    };

    struct LensAberrations_ChromaticAberrationSettings__Boxed {
        struct LensAberrations_ChromaticAberrationSettings__Class* klass;
        MonitorData* monitor;
        struct LensAberrations_ChromaticAberrationSettings fields;
    };

    struct LensAberrations__Fields {
        struct MonoBehaviour__Fields _;
        struct LensAberrations_DistortionSettings distortion;
        struct LensAberrations_VignetteSettings vignette;
        struct LensAberrations_ChromaticAberrationSettings chromaticAberration;
        struct Shader* m_Shader;
        struct Material* m_Material;
        struct RenderTextureUtility* m_RTU;
    };

    struct LensAberrations {
        struct LensAberrations__Class* klass;
        MonitorData* monitor;
        struct LensAberrations__Fields fields;
    };

    struct LensAberrations_DistortionSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LensAberrations_DistortionSettings__StaticFields {
    };

    struct LensAberrations_DistortionSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensAberrations_DistortionSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LensAberrations_DistortionSettings__VTable vtable;
    };

    struct LensAberrations_VignetteSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LensAberrations_VignetteSettings__StaticFields {
    };

    struct LensAberrations_VignetteSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensAberrations_VignetteSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensAberrations_ChromaticAberrationSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensAberrations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LensAberrations__VTable vtable;
    };

    struct LensAberrations_SettingsGroup {
        struct LensAberrations_SettingsGroup__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensAberrations_SettingsGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LensAberrations_SettingsGroup__VTable vtable;
    };

    struct LensAberrations_AdvancedSetting {
        struct LensAberrations_AdvancedSetting__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LensAberrations_AdvancedSetting__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LensAberrations_AdvancedSetting__VTable vtable;
    };

    enum class ScreenSpaceReflection_SSRReflectionBlendType__Enum : int32_t {
        PhysicallyBased = 0x00000000,
        Additive = 0x00000001,
    };

    struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__Boxed {
        struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__Class* klass;
        MonitorData* monitor;
        ScreenSpaceReflection_SSRReflectionBlendType__Enum value;
    };

    enum class ScreenSpaceReflection_SSRResolution__Enum : int32_t {
        High = 0x00000000,
        Low = 0x00000002,
    };

    struct ScreenSpaceReflection_SSRResolution__Enum__Boxed {
        struct ScreenSpaceReflection_SSRResolution__Enum__Class* klass;
        MonitorData* monitor;
        ScreenSpaceReflection_SSRResolution__Enum value;
    };

    struct ScreenSpaceReflection_ReflectionSettings {
        ScreenSpaceReflection_SSRReflectionBlendType__Enum blendType;

        ScreenSpaceReflection_SSRResolution__Enum reflectionQuality;

        float maxDistance;
        int32_t iterationCount;
        int32_t stepSize;
        float widthModifier;
        float reflectionBlur;
        bool reflectBackfaces;
    };

    struct ScreenSpaceReflection_ReflectionSettings__Boxed {
        struct ScreenSpaceReflection_ReflectionSettings__Class* klass;
        MonitorData* monitor;
        struct ScreenSpaceReflection_ReflectionSettings fields;
    };

    struct ScreenSpaceReflection_IntensitySettings {
        float reflectionMultiplier;
        float fadeDistance;
        float fresnelFade;
        float fresnelFadePower;
    };

    struct ScreenSpaceReflection_IntensitySettings__Boxed {
        struct ScreenSpaceReflection_IntensitySettings__Class* klass;
        MonitorData* monitor;
        struct ScreenSpaceReflection_IntensitySettings fields;
    };

    struct ScreenSpaceReflection_ScreenEdgeMask {
        float intensity;
    };

    struct ScreenSpaceReflection_ScreenEdgeMask__Boxed {
        struct ScreenSpaceReflection_ScreenEdgeMask__Class* klass;
        MonitorData* monitor;
        struct ScreenSpaceReflection_ScreenEdgeMask fields;
    };

    struct ScreenSpaceReflection_SSRSettings {
        struct ScreenSpaceReflection_ReflectionSettings reflectionSettings;
        struct ScreenSpaceReflection_IntensitySettings intensitySettings;
        struct ScreenSpaceReflection_ScreenEdgeMask screenEdgeMask;
    };

    struct ScreenSpaceReflection_SSRSettings__Boxed {
        struct ScreenSpaceReflection_SSRSettings__Class* klass;
        MonitorData* monitor;
        struct ScreenSpaceReflection_SSRSettings fields;
    };

    struct ScreenSpaceReflection__Fields {
        struct MonoBehaviour__Fields _;
        struct ScreenSpaceReflection_SSRSettings settings;
        bool highlightSuppression;
        bool traceBehindObjects;
        bool treatBackfaceHitAsMiss;
        bool bilateralUpsample;
        struct Shader* m_Shader;
        struct Material* m_Material;
        struct Camera* m_Camera;
        struct CommandBuffer* m_CommandBuffer;
    };

    struct ScreenSpaceReflection {
        struct ScreenSpaceReflection__Class* klass;
        MonitorData* monitor;
        struct ScreenSpaceReflection__Fields fields;
    };

    struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__VTable {
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

    struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__StaticFields {
    };

    struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenSpaceReflection_SSRReflectionBlendType__Enum__VTable vtable;
    };

    struct ScreenSpaceReflection_SSRResolution__Enum__VTable {
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

    struct ScreenSpaceReflection_SSRResolution__Enum__StaticFields {
    };

    struct ScreenSpaceReflection_SSRResolution__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection_SSRResolution__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenSpaceReflection_SSRResolution__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection_ReflectionSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection_IntensitySettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection_ScreenEdgeMask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection_SSRSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Int32__Array* kReflectionTextures;
        int32_t kFilteredReflections;
        int32_t kBlurTexture;
        int32_t kFinalReflectionTexture;
        int32_t kTempTexture;
    };

    struct ScreenSpaceReflection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenSpaceReflection__VTable vtable;
    };

    struct ScreenSpaceReflection_SSRSettings_LayoutAttribute {
        struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenSpaceReflection_SSRSettings_LayoutAttribute__VTable vtable;
    };

    struct CCFont__Fields {
        struct ScriptableObject__Fields _;
        struct CCFont_Char__Array* asciiChars;
        struct CCFont_Char__Array* otherChars;
        int32_t pixelLineHeight;
        float pixelScale;
        float baseline;
        float spaceAdvance;
        bool supportsKerning;
        float leftMargin;
        float rightMargin;
        float topMargin;
        float bottomMargin;
        struct CCFont_Char* missing;
    };

    struct CCFont {
        struct CCFont__Class* klass;
        MonitorData* monitor;
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
        struct Int32__Array* kerningIds;
        struct Single__Array* kernings;
    };

    struct CCFont_Char {
        struct CCFont_Char__Class* klass;
        MonitorData* monitor;
        struct CCFont_Char__Fields fields;
    };

    struct CCFont_Char__Array {
        struct CCFont_Char__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CCFont_Char* vector[32];
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCFont_Char__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCFont_Char__VTable vtable;
    };

    struct CCFont_Char__Array__VTable {
    };

    struct CCFont_Char__Array__StaticFields {
    };

    struct CCFont_Char__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCFont_Char__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCFont_Char__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCFont__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCFont__VTable vtable;
    };

    enum class CCGradient_InterpolationMode__Enum : int32_t {
        Linear = 0x00000000,
        Smooth = 0x00000001,
    };

    struct CCGradient_InterpolationMode__Enum__Boxed {
        struct CCGradient_InterpolationMode__Enum__Class* klass;
        MonitorData* monitor;
        CCGradient_InterpolationMode__Enum value;
    };

    enum class CCGradient_WrapMode__Enum : int32_t {
        Clamp = 0x00000000,
        Repeat = 0x00000001,
        Flip = 0x00000002,
    };

    struct CCGradient_WrapMode__Enum__Boxed {
        struct CCGradient_WrapMode__Enum__Class* klass;
        MonitorData* monitor;
        CCGradient_WrapMode__Enum value;
    };

    struct CCGradient__Fields {
        struct ScriptableObject__Fields _;
        CCGradient_InterpolationMode__Enum interpolation;

        CCGradient_WrapMode__Enum wrap;

        struct Color__Array* colors;
        struct Single__Array* positions;
    };

    struct CCGradient {
        struct CCGradient__Class* klass;
        MonitorData* monitor;
        struct CCGradient__Fields fields;
    };

    struct CCGradient_InterpolationMode__Enum__VTable {
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

    struct CCGradient_InterpolationMode__Enum__StaticFields {
    };

    struct CCGradient_InterpolationMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCGradient_InterpolationMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCGradient_InterpolationMode__Enum__VTable vtable;
    };

} // namespace app
