namespace app {
    struct VolumetricConfig_BufferPrecision__Enum__VTable {
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

    struct VolumetricConfig_BufferPrecision__Enum__StaticFields {
    };

    struct VolumetricConfig_BufferPrecision__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VolumetricConfig_BufferPrecision__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VolumetricConfig_BufferPrecision__Enum__VTable vtable;
    };

    struct VolumetricConfig__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VolumetricConfig__StaticFields {
    };

    struct VolumetricConfig__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VolumetricConfig__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VolumetricConfig__VTable vtable;
    };

    struct Volumetric__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Volumetric__StaticFields {
        struct List_1_Moon_Rendering_VolumetricPointLight_* s_lights;
        struct List_1_Moon_Rendering_VolumetricAreaLight_* s_areaLights;
        struct VolumetricConfig* s_config;
    };

    struct Volumetric__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Volumetric__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Volumetric__VTable vtable;
    };

    enum class CullingCategory__Enum : uint32_t {
        Light = 0x00000001,
        DepthPrecull = 0x00000002,
        MeshTrail = 0x00000004,
        GodRay = 0x00000008,
        MotionVectors = 0x00000010,
        WaterTop = 0x00000020,
        WaterEdge = 0x00000040,
        WaterCross = 0x00000080,
        Emissive = 0x00000100,
        Opaque3D = 0x00000200,
        Masked = 0x00000400,
        Refraction = 0x00000800,
        Darkening = 0x00001000,
        MaskErasing = 0x00002000,
        All = 0xffffffff,
    };

    struct CullingCategory__Enum__Boxed {
        struct CullingCategory__Enum__Class* klass;
        MonitorData* monitor;
        CullingCategory__Enum value;
    };

    struct CullingCategory__Enum__VTable {
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

    struct CullingCategory__Enum__StaticFields {
    };

    struct CullingCategory__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CullingCategory__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CullingCategory__Enum__VTable vtable;
    };

    struct DummyRenderPostprocessor__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct DummyRenderPostprocessor {
        struct DummyRenderPostprocessor__Class* klass;
        MonitorData* monitor;
        struct DummyRenderPostprocessor__Fields fields;
    };

    struct DummyRenderPostprocessor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IRenderPostprocessor_get_enabled;
        VirtualInvokeData IRenderPostprocessor_OnRenderImage;
    };

    struct DummyRenderPostprocessor__StaticFields {
    };

    struct DummyRenderPostprocessor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DummyRenderPostprocessor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DummyRenderPostprocessor__VTable vtable;
    };

    struct EarlyZChildDebugger__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform__Array* includedObjects;
    };

    struct EarlyZChildDebugger {
        struct EarlyZChildDebugger__Class* klass;
        MonitorData* monitor;
        struct EarlyZChildDebugger__Fields fields;
    };

    struct EarlyZChildDebugger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EarlyZChildDebugger__StaticFields {
    };

    struct EarlyZChildDebugger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EarlyZChildDebugger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EarlyZChildDebugger__VTable vtable;
    };

    struct EarlyZDelayDebugMenuItem__Fields {
        struct IntDebugMenuItem__Fields _;
    };

    struct EarlyZDelayDebugMenuItem {
        struct EarlyZDelayDebugMenuItem__Class* klass;
        MonitorData* monitor;
        struct EarlyZDelayDebugMenuItem__Fields fields;
    };

    struct EarlyZDelayDebugMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
        VirtualInvokeData OnSelectedUpdate_1;
        VirtualInvokeData OnSelectedFixedUpdate_1;
        VirtualInvokeData IncrementValue;
    };

    struct EarlyZDelayDebugMenuItem__StaticFields {
    };

    struct EarlyZDelayDebugMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EarlyZDelayDebugMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EarlyZDelayDebugMenuItem__VTable vtable;
    };

    struct EarlyZDelayedUnhide__Fields {
        struct MonoBehaviour__Fields _;
        struct MeshRenderer* m_cachedRenderer;
        bool m_hasCached;
    };

    struct EarlyZDelayedUnhide {
        struct EarlyZDelayedUnhide__Class* klass;
        MonitorData* monitor;
        struct EarlyZDelayedUnhide__Fields fields;
    };

    struct EarlyZDelayedUnhide__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EarlyZDelayedUnhide__StaticFields {
        bool DelayUnhideEarlyZ;
        bool HideOnDisplay;
        int32_t kFrameDelay;
    };

    struct EarlyZDelayedUnhide__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EarlyZDelayedUnhide__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EarlyZDelayedUnhide__VTable vtable;
    };

    struct EarlyZGrid {
        struct Bounds bounds;
        struct Vector3 min;
        struct Vector3 size;
        struct Vector3 cellSize;
        struct Vector3Int count;
        int32_t cellCount;
    };

    struct EarlyZGrid__Boxed {
        struct EarlyZGrid__Class* klass;
        MonitorData* monitor;
        struct EarlyZGrid fields;
    };

    struct EarlyZGrid__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EarlyZGrid__StaticFields {
    };

    struct EarlyZGrid__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EarlyZGrid__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EarlyZGrid__VTable vtable;
    };

    struct EarlyZParentDebugger_GridOptions {
        bool draw;
        bool drawBounds;
        bool drawPlaneZero;
        bool drawFrontPlane;
        bool drawBackPlane;
        bool drawAllPlanes;
        bool drawDepthLines;
        bool drawCells;
        struct Color color;
    };

    struct EarlyZParentDebugger_GridOptions__Boxed {
        struct EarlyZParentDebugger_GridOptions__Class* klass;
        MonitorData* monitor;
        struct EarlyZParentDebugger_GridOptions fields;
    };

    struct EarlyZParentDebugger__Fields {
        struct MonoBehaviour__Fields _;
        struct EarlyZGrid grid;
        bool debug;
        struct EarlyZParentDebugger_GridOptions gridOptions;
        int32_t selectedCellX;
        int32_t selectedCellY;
    };

    struct EarlyZParentDebugger {
        struct EarlyZParentDebugger__Class* klass;
        MonitorData* monitor;
        struct EarlyZParentDebugger__Fields fields;
    };

    struct EarlyZParentDebugger_GridOptions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EarlyZParentDebugger_GridOptions__StaticFields {
    };

    struct EarlyZParentDebugger_GridOptions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EarlyZParentDebugger_GridOptions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EarlyZParentDebugger_GridOptions__VTable vtable;
    };

    struct EarlyZParentDebugger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EarlyZParentDebugger__StaticFields {
    };

    struct EarlyZParentDebugger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EarlyZParentDebugger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EarlyZParentDebugger__VTable vtable;
    };

    enum class FXAA_Mode__Enum : int32_t {
        DEFAULT_QUALITY = 0x00000000,
        DEFAULT_QUALITY_DEBUG = 0x00000001,
        EXTREME_QUALITY = 0x00000002,
        EXTREME_QUALITY_DEBUG = 0x00000003,
    };

    struct FXAA_Mode__Enum__Boxed {
        struct FXAA_Mode__Enum__Class* klass;
        MonitorData* monitor;
        FXAA_Mode__Enum value;
    };

    struct FXAA_1__Fields {
        struct MonoBehaviour__Fields _;
        FXAA_Mode__Enum RenderMode;

        float ContrastThreshold;
        float SubPixelRemoval;
        struct ComputeShader* Pass1;
        struct ComputeShader* Pass2Horizontal;
        struct ComputeShader* Pass2Vertical;
        struct ComputeShader* Resolve;
        struct RenderTarget* tempFinalOutput;
        struct RenderTarget* tempLuma;
        struct RenderTexture* m_finalOutputRenderTexture;
        struct RenderTexture* m_lumaRenderTexture;
        struct ComputeBuffer* m_HWorkComputeBuffer;
        struct ComputeBuffer* m_VWorkComputeBuffer;
        struct ComputeBuffer* m_indirectParamsComputeBuffer;
        struct Single__Array* m_reciprocalScreenSize;
        int32_t m_prevScreenWidth;
        int32_t m_prevScreenHeight;
        float m_prevContrastThreshold;
        float m_prevSubPixelRemoval;
    };

    struct FXAA_1 {
        struct FXAA_1__Class* klass;
        MonitorData* monitor;
        struct FXAA_1__Fields fields;
    };

    struct FXAA_Mode__Enum__VTable {
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

    struct FXAA_Mode__Enum__StaticFields {
    };

    struct FXAA_Mode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FXAA_Mode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FXAA_Mode__Enum__VTable vtable;
    };

    struct FXAA_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IRenderPostprocessor_get_enabled;
        VirtualInvokeData IRenderPostprocessor_OnRenderImage;
    };

    struct FXAA_1__StaticFields {
        int32_t _FXAATempFinalOutput;
        int32_t _FXAATempLuma;
        int32_t _FXAAColor;
        int32_t _FXAALuma;
        int32_t MaximumNumberOfAliasedPixelsPerDirection;
        RenderTextureFormat__Enum FinalOutputRenderTextureFormat;

        RenderTextureFormat__Enum LumaRenderTextureFormat;
    };

    struct FXAA_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FXAA_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FXAA_1__VTable vtable;
    };

    struct MoonRenderPipeline__Fields {
        struct RenderPipeline__Fields _;
        struct MoonRenderPipelineAsset* owner;
        struct MoonRenderPipelineView__Array* views;
        struct MoonRenderPipelineSettings* settings;
        struct MoonRenderPipelineView* _currentView_k__BackingField;
        struct FrameTiming__Array* m_frameTimings;
        double m_currentDRSScaleInternal;
        double m_currentDRSScale;
        double m_currentDRSScaleY;
        float m_badCPUPerfTotalTime;
        bool m_isrDRSEnabled;
        bool m_isrCPUEnabled;
        struct Stopwatch* m_drsStopwatch;
        bool isRendering;
    };

    struct MoonRenderPipeline {
        struct MoonRenderPipeline__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipeline__Fields fields;
    };

    struct MoonRenderPipelineView__Array {
        struct MoonRenderPipelineView__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonRenderPipelineView* vector[32];
    };

    struct MoonRenderPipelineView__Array__VTable {
    };

    struct MoonRenderPipelineView__Array__StaticFields {
    };

    struct MoonRenderPipelineView__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView__Array__VTable vtable;
    };

    struct MoonRenderPipeline__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_disposed;
        VirtualInvokeData Render;
        VirtualInvokeData Dispose;
        VirtualInvokeData Render_1;
        VirtualInvokeData Dispose_1;
    };

    struct MoonRenderPipeline__StaticFields {
        bool UseDeltaTimeForDRS;
        bool DisableSRPBatcher;
    };

    struct MoonRenderPipeline__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipeline__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipeline__VTable vtable;
    };

    enum class MoonRenderPipelineView_CachedCBType__Enum : int32_t {
        EmissivityPost = 0x00000000,
    };

    struct MoonRenderPipelineView_CachedCBType__Enum__Boxed {
        struct MoonRenderPipelineView_CachedCBType__Enum__Class* klass;
        MonitorData* monitor;
        MoonRenderPipelineView_CachedCBType__Enum value;
    };

    struct MoonRenderPipelineView_CachedCBType__Enum__VTable {
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

    struct MoonRenderPipelineView_CachedCBType__Enum__StaticFields {
    };

    struct MoonRenderPipelineView_CachedCBType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_CachedCBType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_CachedCBType__Enum__VTable vtable;
    };

    struct RenderTargetDescriptor___VTable {
    };

    struct RenderTargetDescriptor___StaticFields {
    };

    struct RenderTargetDescriptor___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTargetDescriptor___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTargetDescriptor___VTable vtable;
    };

    struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ {
        struct MoonRenderPipelineView_FilterBounds value;
        bool has_value;
    };

    struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed {
        struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ fields;
    };

    enum class RenderFlags__Enum : uint32_t {
        Default = 0x00000001,
        Masked = 0x00000002,
        Emissive = 0x00000004,
        ReflectedOnly = 0x00000008,
        MoonTrail = 0x00000010,
        MotionVectors = 0x00000020,
        GodRays = 0x00000040,
        MeshTrail = 0x00000080,
        Refraction = 0x00000100,
        DepthPrecull = 0x00000200,
        Reflected = 0x00000400,
        Darkening = 0x00000800,
        EmissiveMoonTrail = 0x00001000,
        EmissiveMeshTrail = 0x00002000,
        MaskedMoonTrail = 0x00004000,
        DarkeningMoonTrail = 0x00008000,
        DarkeningMeshTrail = 0x00010000,
        MaskErasing = 0x00020000,
        Opaque3D = 0x00040000,
        Everything = 0xffffffff,
    };

    struct RenderFlags__Enum__Boxed {
        struct RenderFlags__Enum__Class* klass;
        MonitorData* monitor;
        RenderFlags__Enum value;
    };

    struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ {
        struct RenderStateBlock value;
        bool has_value;
    };

    struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed {
        struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ fields;
    };

    struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___StaticFields {
    };

    struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___VTable vtable;
    };

    struct RenderFlags__Enum__VTable {
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

    struct RenderFlags__Enum__StaticFields {
    };

    struct RenderFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderFlags__Enum__VTable vtable;
    };

    struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___StaticFields {
    };

    struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___VTable vtable;
    };

    enum class MoonRenderPipelineView_ReleaseReason__Enum : int32_t {
        PassFinished = 0x00000000,
        FrameFinished = 0x00000001,
    };

    struct MoonRenderPipelineView_ReleaseReason__Enum__Boxed {
        struct MoonRenderPipelineView_ReleaseReason__Enum__Class* klass;
        MonitorData* monitor;
        MoonRenderPipelineView_ReleaseReason__Enum value;
    };

    struct MoonRenderPipelineView_ReleaseReason__Enum__VTable {
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

    struct MoonRenderPipelineView_ReleaseReason__Enum__StaticFields {
    };

    struct MoonRenderPipelineView_ReleaseReason__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_ReleaseReason__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_ReleaseReason__Enum__VTable vtable;
    };

    struct MoonRenderPipelineView_FilterBounds___VTable {
    };

    struct MoonRenderPipelineView_FilterBounds___StaticFields {
    };

    struct MoonRenderPipelineView_FilterBounds___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_FilterBounds___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_FilterBounds___VTable vtable;
    };

    struct MoonRenderPipelineView_SrpProfilerFrame___VTable {
    };

    struct MoonRenderPipelineView_SrpProfilerFrame___StaticFields {
    };

    struct MoonRenderPipelineView_SrpProfilerFrame___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_SrpProfilerFrame___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_SrpProfilerFrame___VTable vtable;
    };

    struct MoonRenderPipelineView_c {
        struct MoonRenderPipelineView_c__Class* klass;
        MonitorData* monitor;
    };

    struct MoonRenderPipelineView_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineView_c__StaticFields {
        struct MoonRenderPipelineView_c* __9;
    };

    struct MoonRenderPipelineView_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_c__VTable vtable;
    };

    struct DrawRendererSortSettingsRaw {
        struct DrawRendererSortSettings source;
        struct Matrix4x4 worldToCameraMatrix;
        struct Vector3 cameraPosition;
        SortFlags__Enum flags;

        int32_t _sortOrthographic;
        struct Matrix4x4 _previousVPMatrix;
        struct Matrix4x4 _nonJitteredVPMatrix;
    };

    struct DrawRendererSortSettingsRaw__Boxed {
        struct DrawRendererSortSettingsRaw__Class* klass;
        MonitorData* monitor;
        struct DrawRendererSortSettingsRaw fields;
    };

    struct DrawRendererSortSettingsRaw__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DrawRendererSortSettingsRaw__StaticFields {
    };

    struct DrawRendererSortSettingsRaw__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DrawRendererSortSettingsRaw__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DrawRendererSortSettingsRaw__VTable vtable;
    };

    enum class MoonRenderPipelineAsset_ConfigurableOn__Enum : int32_t {
        None = 0x00000000,
        Pc = 0x00000001,
        Xbox = 0x00000002,
        All = 0x00000003,
    };

    struct MoonRenderPipelineAsset_ConfigurableOn__Enum__Boxed {
        struct MoonRenderPipelineAsset_ConfigurableOn__Enum__Class* klass;
        MonitorData* monitor;
        MoonRenderPipelineAsset_ConfigurableOn__Enum value;
    };

    struct __declspec(align(8)) MoonRenderPipelineAsset_UserConfigurable__Fields {
        MoonRenderPipelineAsset_ConfigurableOn__Enum Platforms;
    };

    struct MoonRenderPipelineAsset_UserConfigurable {
        struct MoonRenderPipelineAsset_UserConfigurable__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineAsset_UserConfigurable__Fields fields;
    };

    struct MoonRenderPipelineAsset_ConfigurableOn__Enum__VTable {
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

    struct MoonRenderPipelineAsset_ConfigurableOn__Enum__StaticFields {
    };

    struct MoonRenderPipelineAsset_ConfigurableOn__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineAsset_ConfigurableOn__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineAsset_ConfigurableOn__Enum__VTable vtable;
    };

    struct MoonRenderPipelineAsset_UserConfigurable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct MoonRenderPipelineAsset_UserConfigurable__StaticFields {
    };

    struct MoonRenderPipelineAsset_UserConfigurable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineAsset_UserConfigurable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineAsset_UserConfigurable__VTable vtable;
    };

    enum class MoonRenderPipelineDebugUI_SliceRangeMode__Enum : int32_t {
        Off = 0x00000000,
        Index = 0x00000001,
        Range = 0x00000002,
    };

    struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Boxed {
        struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class* klass;
        MonitorData* monitor;
        MoonRenderPipelineDebugUI_SliceRangeMode__Enum value;
    };

    struct MoonRenderPipelineDebugUI_FpsCounter {
        float m_timePassed;
        float m_renderedFrames;
        float m_maxFrameTime;
        float averageFps;
        float minimumFps;
    };

} // namespace app
