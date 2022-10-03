namespace app {
    struct ScreenSpaceAmbientObscurance__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceAmbientObscurance__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenSpaceAmbientObscurance__VTable vtable;
    };

    enum class SunShafts_SunShaftsResolution__Enum : int32_t {
        Low = 0x00000000,
        Normal = 0x00000001,
        High = 0x00000002,
    };

    struct SunShafts_SunShaftsResolution__Enum__Boxed {
        struct SunShafts_SunShaftsResolution__Enum__Class* klass;
        MonitorData* monitor;
        SunShafts_SunShaftsResolution__Enum value;
    };

    enum class SunShafts_ShaftsScreenBlendMode__Enum : int32_t {
        Screen = 0x00000000,
        Add = 0x00000001,
    };

    struct SunShafts_ShaftsScreenBlendMode__Enum__Boxed {
        struct SunShafts_ShaftsScreenBlendMode__Enum__Class* klass;
        MonitorData* monitor;
        SunShafts_ShaftsScreenBlendMode__Enum value;
    };

    struct SunShafts__Fields {
        struct PostEffectsBase__Fields _;
        SunShafts_SunShaftsResolution__Enum resolution;

        SunShafts_ShaftsScreenBlendMode__Enum screenBlendMode;

        struct Transform* sunTransform;
        int32_t radialBlurIterations;
        struct Color sunColor;
        struct Color sunThreshold;
        float sunShaftBlurRadius;
        float sunShaftIntensity;
        float maxRadius;
        bool useDepthTexture;
        struct Shader* sunShaftsShader;
        struct Material* sunShaftsMaterial;
        struct Shader* simpleClearShader;
        struct Material* simpleClearMaterial;
    };

    struct SunShafts {
        struct SunShafts__Class* klass;
        MonitorData* monitor;
        struct SunShafts__Fields fields;
    };

    struct SunShafts_SunShaftsResolution__Enum__VTable {
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

    struct SunShafts_SunShaftsResolution__Enum__StaticFields {
    };

    struct SunShafts_SunShaftsResolution__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SunShafts_SunShaftsResolution__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SunShafts_SunShaftsResolution__Enum__VTable vtable;
    };

    struct SunShafts_ShaftsScreenBlendMode__Enum__VTable {
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

    struct SunShafts_ShaftsScreenBlendMode__Enum__StaticFields {
    };

    struct SunShafts_ShaftsScreenBlendMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SunShafts_ShaftsScreenBlendMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SunShafts_ShaftsScreenBlendMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SunShafts__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SunShafts__VTable vtable;
    };

    enum class TiltShift_TiltShiftMode__Enum : int32_t {
        TiltShiftMode = 0x00000000,
        IrisMode = 0x00000001,
    };

    struct TiltShift_TiltShiftMode__Enum__Boxed {
        struct TiltShift_TiltShiftMode__Enum__Class* klass;
        MonitorData* monitor;
        TiltShift_TiltShiftMode__Enum value;
    };

    enum class TiltShift_TiltShiftQuality__Enum : int32_t {
        Preview = 0x00000000,
        Normal = 0x00000001,
        High = 0x00000002,
    };

    struct TiltShift_TiltShiftQuality__Enum__Boxed {
        struct TiltShift_TiltShiftQuality__Enum__Class* klass;
        MonitorData* monitor;
        TiltShift_TiltShiftQuality__Enum value;
    };

    struct TiltShift__Fields {
        struct PostEffectsBase__Fields _;
        TiltShift_TiltShiftMode__Enum mode;

        TiltShift_TiltShiftQuality__Enum quality;

        float blurArea;
        float maxBlurSize;
        int32_t downsample;
        struct Shader* tiltShiftShader;
        struct Material* tiltShiftMaterial;
    };

    struct TiltShift {
        struct TiltShift__Class* klass;
        MonitorData* monitor;
        struct TiltShift__Fields fields;
    };

    struct TiltShift_TiltShiftMode__Enum__VTable {
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

    struct TiltShift_TiltShiftMode__Enum__StaticFields {
    };

    struct TiltShift_TiltShiftMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TiltShift_TiltShiftMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TiltShift_TiltShiftMode__Enum__VTable vtable;
    };

    struct TiltShift_TiltShiftQuality__Enum__VTable {
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

    struct TiltShift_TiltShiftQuality__Enum__StaticFields {
    };

    struct TiltShift_TiltShiftQuality__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TiltShift_TiltShiftQuality__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TiltShift_TiltShiftQuality__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TiltShift__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TiltShift__VTable vtable;
    };

    enum class Tonemapping_TonemapperType__Enum : int32_t {
        SimpleReinhard = 0x00000000,
        UserCurve = 0x00000001,
        Hable = 0x00000002,
        Photographic = 0x00000003,
        OptimizedHejiDawson = 0x00000004,
        AdaptiveReinhard = 0x00000005,
        AdaptiveReinhardAutoWhite = 0x00000006,
    };

    struct Tonemapping_TonemapperType__Enum__Boxed {
        struct Tonemapping_TonemapperType__Enum__Class* klass;
        MonitorData* monitor;
        Tonemapping_TonemapperType__Enum value;
    };

    enum class Tonemapping_AdaptiveTexSize__Enum : int32_t {
        Square16 = 0x00000010,
        Square32 = 0x00000020,
        Square64 = 0x00000040,
        Square128 = 0x00000080,
        Square256 = 0x00000100,
        Square512 = 0x00000200,
        Square1024 = 0x00000400,
    };

    struct Tonemapping_AdaptiveTexSize__Enum__Boxed {
        struct Tonemapping_AdaptiveTexSize__Enum__Class* klass;
        MonitorData* monitor;
        Tonemapping_AdaptiveTexSize__Enum value;
    };

    struct Tonemapping__Fields {
        struct PostEffectsBase__Fields _;
        Tonemapping_TonemapperType__Enum type;

        Tonemapping_AdaptiveTexSize__Enum adaptiveTextureSize;

        struct AnimationCurve* remapCurve;
        struct Texture2D* curveTex;
        float exposureAdjustment;
        float middleGrey;
        float white;
        float adaptionSpeed;
        struct Shader* tonemapper;
        bool validRenderTextureFormat;
        struct Material* tonemapMaterial;
        struct RenderTexture* rt;
        RenderTextureFormat__Enum rtFormat;
    };

    struct Tonemapping {
        struct Tonemapping__Class* klass;
        MonitorData* monitor;
        struct Tonemapping__Fields fields;
    };

    struct Tonemapping_TonemapperType__Enum__VTable {
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

    struct Tonemapping_TonemapperType__Enum__StaticFields {
    };

    struct Tonemapping_TonemapperType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tonemapping_TonemapperType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tonemapping_TonemapperType__Enum__VTable vtable;
    };

    struct Tonemapping_AdaptiveTexSize__Enum__VTable {
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

    struct Tonemapping_AdaptiveTexSize__Enum__StaticFields {
    };

    struct Tonemapping_AdaptiveTexSize__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tonemapping_AdaptiveTexSize__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tonemapping_AdaptiveTexSize__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tonemapping__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tonemapping__VTable vtable;
    };

    struct Triangles {
        struct Triangles__Class* klass;
        MonitorData* monitor;
    };

    struct Triangles__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Triangles__StaticFields {
        struct Mesh__Array* meshes;
        int32_t currentTris;
    };

    struct Triangles__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Triangles__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Triangles__VTable vtable;
    };

    enum class VignetteAndChromaticAberration_AberrationMode__Enum : int32_t {
        Simple = 0x00000000,
        Advanced = 0x00000001,
    };

    struct VignetteAndChromaticAberration_AberrationMode__Enum__Boxed {
        struct VignetteAndChromaticAberration_AberrationMode__Enum__Class* klass;
        MonitorData* monitor;
        VignetteAndChromaticAberration_AberrationMode__Enum value;
    };

    struct VignetteAndChromaticAberration__Fields {
        struct PostEffectsBase__Fields _;
        VignetteAndChromaticAberration_AberrationMode__Enum mode;

        float intensity;
        float chromaticAberration;
        float axialAberration;
        float blur;
        float blurSpread;
        float luminanceDependency;
        float blurDistance;
        struct Shader* vignetteShader;
        struct Shader* separableBlurShader;
        struct Shader* chromAberrationShader;
        struct Material* m_VignetteMaterial;
        struct Material* m_SeparableBlurMaterial;
        struct Material* m_ChromAberrationMaterial;
    };

    struct VignetteAndChromaticAberration {
        struct VignetteAndChromaticAberration__Class* klass;
        MonitorData* monitor;
        struct VignetteAndChromaticAberration__Fields fields;
    };

    struct VignetteAndChromaticAberration_AberrationMode__Enum__VTable {
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

    struct VignetteAndChromaticAberration_AberrationMode__Enum__StaticFields {
    };

    struct VignetteAndChromaticAberration_AberrationMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VignetteAndChromaticAberration_AberrationMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VignetteAndChromaticAberration_AberrationMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VignetteAndChromaticAberration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VignetteAndChromaticAberration__VTable vtable;
    };

    struct SepiaTone__Fields {
        struct ImageEffectBase__Fields _;
    };

    struct SepiaTone {
        struct SepiaTone__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SepiaTone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SepiaTone__VTable vtable;
    };

    enum class ScreenSpaceAmbientOcclusion_SSAOSamples__Enum : int32_t {
        Low = 0x00000000,
        Medium = 0x00000001,
        High = 0x00000002,
    };

    struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Boxed {
        struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class* klass;
        MonitorData* monitor;
        ScreenSpaceAmbientOcclusion_SSAOSamples__Enum value;
    };

    struct ScreenSpaceAmbientOcclusion__Fields {
        struct MonoBehaviour__Fields _;
        float m_Radius;
        ScreenSpaceAmbientOcclusion_SSAOSamples__Enum m_SampleCount;

        float m_OcclusionIntensity;
        int32_t m_Blur;
        int32_t m_Downsampling;
        float m_OcclusionAttenuation;
        float m_MinZ;
        struct Shader* m_SSAOShader;
        struct Material* m_SSAOMaterial;
        struct Texture2D* m_RandomTexture;
        bool m_Supported;
    };

    struct ScreenSpaceAmbientOcclusion {
        struct ScreenSpaceAmbientOcclusion__Class* klass;
        MonitorData* monitor;
        struct ScreenSpaceAmbientOcclusion__Fields fields;
    };

    struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__VTable {
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

    struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__StaticFields {
    };

    struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenSpaceAmbientOcclusion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenSpaceAmbientOcclusion__VTable vtable;
    };

    struct Twirl__Fields {
        struct ImageEffectBase__Fields _;
        struct Vector2 radius;
        float angle;
        struct Vector2 center;
    };

    struct Twirl {
        struct Twirl__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Twirl__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Twirl__VTable vtable;
    };

    struct Vortex__Fields {
        struct ImageEffectBase__Fields _;
        struct Vector2 radius;
        float angle;
        struct Vector2 center;
    };

    struct Vortex {
        struct Vortex__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Vortex__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Vortex__VTable vtable;
    };

    enum class AmbientOcclusion_OcclusionSource__Enum : int32_t {
        DepthTexture = 0x00000000,
        DepthNormalsTexture = 0x00000001,
        GBuffer = 0x00000002,
    };

    struct AmbientOcclusion_OcclusionSource__Enum__Boxed {
        struct AmbientOcclusion_OcclusionSource__Enum__Class* klass;
        MonitorData* monitor;
        AmbientOcclusion_OcclusionSource__Enum value;
    };

    struct AmbientOcclusion_PropertyObserver {
        bool _downsampling;
        AmbientOcclusion_OcclusionSource__Enum _occlusionSource;

        bool _ambientOnly;
        bool _debug;
        int32_t _pixelWidth;
        int32_t _pixelHeight;
    };

    struct AmbientOcclusion_PropertyObserver__Boxed {
        struct AmbientOcclusion_PropertyObserver__Class* klass;
        MonitorData* monitor;
        struct AmbientOcclusion_PropertyObserver fields;
    };

    struct AmbientOcclusion__Fields {
        struct MonoBehaviour__Fields _;
        struct AmbientOcclusion_Settings* settings;
        struct Shader* _aoShader;
        struct Material* _aoMaterial;
        struct CommandBuffer* _aoCommands;
        struct AmbientOcclusion_PropertyObserver _propertyObserver_k__BackingField;
        struct Mesh* _quadMesh;
    };

    struct AmbientOcclusion {
        struct AmbientOcclusion__Class* klass;
        MonitorData* monitor;
        struct AmbientOcclusion__Fields fields;
    };

    enum class AmbientOcclusion_SampleCount__Enum : int32_t {
        Lowest = 0x00000000,
        Low = 0x00000001,
        Medium = 0x00000002,
        High = 0x00000003,
        Variable = 0x00000004,
    };

    struct AmbientOcclusion_SampleCount__Enum__Boxed {
        struct AmbientOcclusion_SampleCount__Enum__Class* klass;
        MonitorData* monitor;
        AmbientOcclusion_SampleCount__Enum value;
    };

    struct __declspec(align(8)) AmbientOcclusion_Settings__Fields {
        float intensity;
        float radius;
        AmbientOcclusion_SampleCount__Enum sampleCount;

        int32_t sampleCountValue;
        bool downsampling;
        bool ambientOnly;
        AmbientOcclusion_OcclusionSource__Enum occlusionSource;

        bool debug;
    };

    struct AmbientOcclusion_Settings {
        struct AmbientOcclusion_Settings__Class* klass;
        MonitorData* monitor;
        struct AmbientOcclusion_Settings__Fields fields;
    };

    struct AmbientOcclusion_SampleCount__Enum__VTable {
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

    struct AmbientOcclusion_SampleCount__Enum__StaticFields {
    };

    struct AmbientOcclusion_SampleCount__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbientOcclusion_SampleCount__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbientOcclusion_SampleCount__Enum__VTable vtable;
    };

    struct AmbientOcclusion_OcclusionSource__Enum__VTable {
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

    struct AmbientOcclusion_OcclusionSource__Enum__StaticFields {
    };

    struct AmbientOcclusion_OcclusionSource__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbientOcclusion_OcclusionSource__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbientOcclusion_OcclusionSource__Enum__VTable vtable;
    };

    struct AmbientOcclusion_Settings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AmbientOcclusion_Settings__StaticFields {
    };

    struct AmbientOcclusion_Settings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbientOcclusion_Settings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbientOcclusion_Settings__VTable vtable;
    };

    struct AmbientOcclusion_PropertyObserver__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AmbientOcclusion_PropertyObserver__StaticFields {
    };

    struct AmbientOcclusion_PropertyObserver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbientOcclusion_PropertyObserver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbientOcclusion_PropertyObserver__VTable vtable;
    };

    struct AmbientOcclusion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AmbientOcclusion__StaticFields {
    };

    struct AmbientOcclusion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbientOcclusion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbientOcclusion__VTable vtable;
    };

    struct AntiAliasing__Fields {
        struct MonoBehaviour__Fields _;
        struct SMAA* m_SMAA;
        struct FXAA* m_FXAA;
        int32_t m_Method;
        struct Camera* m_Camera;
    };

    struct AntiAliasing {
        struct AntiAliasing__Class* klass;
        MonitorData* monitor;
        struct AntiAliasing__Fields fields;
    };

    enum class SMAA_DebugPass__Enum : int32_t {
        Off = 0x00000000,
        Edges = 0x00000001,
        Weights = 0x00000002,
        Accumulation = 0x00000003,
    };

    struct SMAA_DebugPass__Enum__Boxed {
        struct SMAA_DebugPass__Enum__Class* klass;
        MonitorData* monitor;
        SMAA_DebugPass__Enum value;
    };

} // namespace app
