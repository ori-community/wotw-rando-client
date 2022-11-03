namespace app {
    struct ColorCorrectionCurves {
        struct ColorCorrectionCurves__Class* klass;
        MonitorData* monitor;
        struct ColorCorrectionCurves__Fields fields;
    };

    struct ColorCorrectionCurves_ColorCorrectionMode__Enum__VTable {
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

    struct ColorCorrectionCurves_ColorCorrectionMode__Enum__StaticFields {
    };

    struct ColorCorrectionCurves_ColorCorrectionMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorCorrectionCurves_ColorCorrectionMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorCorrectionCurves_ColorCorrectionMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorCorrectionCurves__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorCorrectionCurves__VTable vtable;
    };

    struct ColorCorrectionLookup__Fields {
        struct PostEffectsBase__Fields _;
        struct Shader* shader;
        struct Material* material;
        struct Texture3D* converted3DLut;
        struct String* basedOnTempTex;
    };

    struct ColorCorrectionLookup {
        struct ColorCorrectionLookup__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorCorrectionLookup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorCorrectionLookup__VTable vtable;
    };

    struct ContrastEnhance__Fields {
        struct PostEffectsBase__Fields _;
        float intensity;
        float threshold;
        struct Material* separableBlurMaterial;
        struct Material* contrastCompositeMaterial;
        float blurSpread;
        struct Shader* separableBlurShader;
        struct Shader* contrastCompositeShader;
    };

    struct ContrastEnhance {
        struct ContrastEnhance__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContrastEnhance__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContrastEnhance__VTable vtable;
    };

    struct CreaseShading__Fields {
        struct PostEffectsBase__Fields _;
        float intensity;
        int32_t softness;
        float spread;
        struct Shader* blurShader;
        struct Material* blurMaterial;
        struct Shader* depthFetchShader;
        struct Material* depthFetchMaterial;
        struct Shader* creaseApplyShader;
        struct Material* creaseApplyMaterial;
    };

    struct CreaseShading {
        struct CreaseShading__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CreaseShading__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CreaseShading__VTable vtable;
    };

    enum class DepthOfField_BlurType__Enum : int32_t {
        DiscBlur = 0x00000000,
        DX11 = 0x00000001,
    };

    struct DepthOfField_BlurType__Enum__Boxed {
        struct DepthOfField_BlurType__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfField_BlurType__Enum value;
    };

    enum class DepthOfField_BlurSampleCount__Enum : int32_t {
        Low = 0x00000000,
        Medium = 0x00000001,
        High = 0x00000002,
    };

    struct DepthOfField_BlurSampleCount__Enum__Boxed {
        struct DepthOfField_BlurSampleCount__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfField_BlurSampleCount__Enum value;
    };

    struct DepthOfField__Fields {
        struct PostEffectsBase__Fields _;
        bool visualizeFocus;
        float focalLength;
        float focalSize;
        float aperture;
        struct Transform* focalTransform;
        float maxBlurSize;
        bool highResolution;
        DepthOfField_BlurType__Enum blurType;

        DepthOfField_BlurSampleCount__Enum blurSampleCount;

        bool nearBlur;
        float foregroundOverlap;
        struct Shader* dofHdrShader;
        struct Material* dofHdrMaterial;
        struct Shader* dx11BokehShader;
        struct Material* dx11bokehMaterial;
        float dx11BokehThreshold;
        float dx11SpawnHeuristic;
        struct Texture2D* dx11BokehTexture;
        float dx11BokehScale;
        float dx11BokehIntensity;
        float focalDistance01;
        struct ComputeBuffer* cbDrawArgs;
        struct ComputeBuffer* cbPoints;
        float internalBlurWidth;
        struct Camera* cachedCamera;
    };

    struct DepthOfField {
        struct DepthOfField__Class* klass;
        MonitorData* monitor;
        struct DepthOfField__Fields fields;
    };

    struct DepthOfField_BlurType__Enum__VTable {
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

    struct DepthOfField_BlurType__Enum__StaticFields {
    };

    struct DepthOfField_BlurType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_BlurType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_BlurType__Enum__VTable vtable;
    };

    struct DepthOfField_BlurSampleCount__Enum__VTable {
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

    struct DepthOfField_BlurSampleCount__Enum__StaticFields {
    };

    struct DepthOfField_BlurSampleCount__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField_BlurSampleCount__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField_BlurSampleCount__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfField__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfField__VTable vtable;
    };

    enum class DepthOfFieldDeprecated_Dof34QualitySetting__Enum : int32_t {
        OnlyBackground = 0x00000001,
        BackgroundAndForeground = 0x00000002,
    };

    struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Boxed {
        struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfFieldDeprecated_Dof34QualitySetting__Enum value;
    };

    enum class DepthOfFieldDeprecated_DofResolution__Enum : int32_t {
        High = 0x00000002,
        Medium = 0x00000003,
        Low = 0x00000004,
    };

    struct DepthOfFieldDeprecated_DofResolution__Enum__Boxed {
        struct DepthOfFieldDeprecated_DofResolution__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfFieldDeprecated_DofResolution__Enum value;
    };

    enum class DepthOfFieldDeprecated_DofBlurriness__Enum : int32_t {
        Low = 0x00000001,
        High = 0x00000002,
        VeryHigh = 0x00000004,
    };

    struct DepthOfFieldDeprecated_DofBlurriness__Enum__Boxed {
        struct DepthOfFieldDeprecated_DofBlurriness__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfFieldDeprecated_DofBlurriness__Enum value;
    };

    enum class DepthOfFieldDeprecated_BokehDestination__Enum : int32_t {
        Background = 0x00000001,
        Foreground = 0x00000002,
        BackgroundAndForeground = 0x00000003,
    };

    struct DepthOfFieldDeprecated_BokehDestination__Enum__Boxed {
        struct DepthOfFieldDeprecated_BokehDestination__Enum__Class* klass;
        MonitorData* monitor;
        DepthOfFieldDeprecated_BokehDestination__Enum value;
    };

    struct DepthOfFieldDeprecated__Fields {
        struct PostEffectsBase__Fields _;
        DepthOfFieldDeprecated_Dof34QualitySetting__Enum quality;

        DepthOfFieldDeprecated_DofResolution__Enum resolution;

        bool simpleTweakMode;
        float focalPoint;
        float smoothness;
        float focalZDistance;
        float focalZStartCurve;
        float focalZEndCurve;
        float focalStartCurve;
        float focalEndCurve;
        float focalDistance01;
        struct Transform* objectFocus;
        float focalSize;
        DepthOfFieldDeprecated_DofBlurriness__Enum bluriness;

        float maxBlurSpread;
        float foregroundBlurExtrude;
        struct Shader* dofBlurShader;
        struct Material* dofBlurMaterial;
        struct Shader* dofShader;
        struct Material* dofMaterial;
        bool visualize;
        DepthOfFieldDeprecated_BokehDestination__Enum bokehDestination;

        float widthOverHeight;
        float oneOverBaseSize;
        bool bokeh;
        bool bokehSupport;
        struct Shader* bokehShader;
        struct Texture2D* bokehTexture;
        float bokehScale;
        float bokehIntensity;
        float bokehThresholdContrast;
        float bokehThresholdLuminance;
        int32_t bokehDownsample;
        struct Material* bokehMaterial;
        struct Camera* _camera;
        struct RenderTexture* foregroundTexture;
        struct RenderTexture* mediumRezWorkTexture;
        struct RenderTexture* finalDefocus;
        struct RenderTexture* lowRezWorkTexture;
        struct RenderTexture* bokehSource;
        struct RenderTexture* bokehSource2;
    };

    struct DepthOfFieldDeprecated {
        struct DepthOfFieldDeprecated__Class* klass;
        MonitorData* monitor;
        struct DepthOfFieldDeprecated__Fields fields;
    };

    struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__VTable {
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

    struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__StaticFields {
    };

    struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfFieldDeprecated_Dof34QualitySetting__Enum__VTable vtable;
    };

    struct DepthOfFieldDeprecated_DofResolution__Enum__VTable {
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

    struct DepthOfFieldDeprecated_DofResolution__Enum__StaticFields {
    };

    struct DepthOfFieldDeprecated_DofResolution__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfFieldDeprecated_DofResolution__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfFieldDeprecated_DofResolution__Enum__VTable vtable;
    };

    struct DepthOfFieldDeprecated_DofBlurriness__Enum__VTable {
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

    struct DepthOfFieldDeprecated_DofBlurriness__Enum__StaticFields {
    };

    struct DepthOfFieldDeprecated_DofBlurriness__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfFieldDeprecated_DofBlurriness__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfFieldDeprecated_DofBlurriness__Enum__VTable vtable;
    };

    struct DepthOfFieldDeprecated_BokehDestination__Enum__VTable {
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

    struct DepthOfFieldDeprecated_BokehDestination__Enum__StaticFields {
    };

    struct DepthOfFieldDeprecated_BokehDestination__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfFieldDeprecated_BokehDestination__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfFieldDeprecated_BokehDestination__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DepthOfFieldDeprecated__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DepthOfFieldDeprecated__VTable vtable;
    };

    enum class EdgeDetection_EdgeDetectMode__Enum : int32_t {
        TriangleDepthNormals = 0x00000000,
        RobertsCrossDepthNormals = 0x00000001,
        SobelDepth = 0x00000002,
        SobelDepthThin = 0x00000003,
        TriangleLuminance = 0x00000004,
    };

    struct EdgeDetection_EdgeDetectMode__Enum__Boxed {
        struct EdgeDetection_EdgeDetectMode__Enum__Class* klass;
        MonitorData* monitor;
        EdgeDetection_EdgeDetectMode__Enum value;
    };

    struct EdgeDetection__Fields {
        struct PostEffectsBase__Fields _;
        EdgeDetection_EdgeDetectMode__Enum mode;

        float sensitivityDepth;
        float sensitivityNormals;
        float lumThreshold;
        float edgeExp;
        float sampleDist;
        float edgesOnly;
        struct Color edgesOnlyBgColor;
        struct Shader* edgeDetectShader;
        struct Material* edgeDetectMaterial;
        EdgeDetection_EdgeDetectMode__Enum oldMode;
    };

    struct EdgeDetection {
        struct EdgeDetection__Class* klass;
        MonitorData* monitor;
        struct EdgeDetection__Fields fields;
    };

    struct EdgeDetection_EdgeDetectMode__Enum__VTable {
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

    struct EdgeDetection_EdgeDetectMode__Enum__StaticFields {
    };

    struct EdgeDetection_EdgeDetectMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EdgeDetection_EdgeDetectMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EdgeDetection_EdgeDetectMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EdgeDetection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EdgeDetection__VTable vtable;
    };

    struct Fisheye__Fields {
        struct PostEffectsBase__Fields _;
        float strengthX;
        float strengthY;
        struct Shader* fishEyeShader;
        struct Material* fisheyeMaterial;
    };

    struct Fisheye {
        struct Fisheye__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Fisheye__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Shader* fogShader;
        struct Material* fogMaterial;
    };

    struct GlobalFog {
        struct GlobalFog__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlobalFog__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        FilterMode__Enum filterMode;

        struct Texture2D* noiseTexture;
        struct Shader* noiseShader;
        struct Material* noiseMaterial;
        struct Shader* dx11NoiseShader;
        struct Material* dx11NoiseMaterial;
    };

    struct NoiseAndGrain {
        struct NoiseAndGrain__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NoiseAndGrain__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NoiseAndGrain__VTable vtable;
    };

    struct PostEffectsHelper__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct PostEffectsHelper {
        struct PostEffectsHelper__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PostEffectsHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PostEffectsHelper__VTable vtable;
    };

    struct Quads {
        struct Quads__Class* klass;
        MonitorData* monitor;
    };

    struct Quads__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Quads__StaticFields {
        struct Mesh__Array* meshes;
        int32_t currentQuads;
    };

    struct Quads__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Quads__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Quads__VTable vtable;
    };

    enum class ScreenOverlay_OverlayBlendMode__Enum : int32_t {
        Additive = 0x00000000,
        ScreenBlend = 0x00000001,
        Multiply = 0x00000002,
        Overlay = 0x00000003,
        AlphaBlend = 0x00000004,
    };

    struct ScreenOverlay_OverlayBlendMode__Enum__Boxed {
        struct ScreenOverlay_OverlayBlendMode__Enum__Class* klass;
        MonitorData* monitor;
        ScreenOverlay_OverlayBlendMode__Enum value;
    };

    struct ScreenOverlay__Fields {
        struct PostEffectsBase__Fields _;
        ScreenOverlay_OverlayBlendMode__Enum blendMode;

        float intensity;
        struct Texture2D* texture;
        struct Shader* overlayShader;
        struct Material* overlayMaterial;
    };

    struct ScreenOverlay {
        struct ScreenOverlay__Class* klass;
        MonitorData* monitor;
        struct ScreenOverlay__Fields fields;
    };

    struct ScreenOverlay_OverlayBlendMode__Enum__VTable {
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

    struct ScreenOverlay_OverlayBlendMode__Enum__StaticFields {
    };

    struct ScreenOverlay_OverlayBlendMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenOverlay_OverlayBlendMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenOverlay_OverlayBlendMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenOverlay__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenOverlay__VTable vtable;
    };

    struct ScreenSpaceAmbientObscurance__Fields {
        struct PostEffectsBase__Fields _;
        float intensity;
        float radius;
        int32_t blurIterations;
        float blurFilterDistance;
        int32_t downsample;
        struct Texture2D* rand;
        struct Shader* aoShader;
        struct Material* aoMaterial;
    };

    struct ScreenSpaceAmbientObscurance {
        struct ScreenSpaceAmbientObscurance__Class* klass;
        MonitorData* monitor;
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

} // namespace app
