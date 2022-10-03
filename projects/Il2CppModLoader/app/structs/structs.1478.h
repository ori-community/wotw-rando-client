namespace app {
    struct IMaskable {
        struct IMaskable__Class* klass;
        MonitorData* monitor;
    };

    struct IMaskable__VTable {
        VirtualInvokeData RecalculateMasking;
    };

    struct IMaskable__StaticFields {
    };

    struct IMaskable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMaskable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMaskable__VTable vtable;
    };

    struct StencilMaterial {
        struct StencilMaterial__Class* klass;
        MonitorData* monitor;
    };

    struct StencilMaterial__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StencilMaterial__StaticFields {
        struct List_1_UnityEngine_UI_StencilMaterial_MatEntry_* m_List;
    };

    struct StencilMaterial__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StencilMaterial__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StencilMaterial__VTable vtable;
    };

    struct MathfInternal {
    };

    struct MathfInternal__Boxed {
        struct MathfInternal__Class* klass;
        MonitorData* monitor;
        struct MathfInternal fields;
    };

    struct MathfInternal__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MathfInternal__StaticFields {
        float FloatMinNormal;
        float FloatMinDenormal;
        bool IsFlushToZeroEnabled;
    };

    struct MathfInternal__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MathfInternal__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MathfInternal__VTable vtable;
    };

    struct IHammerAttackable {
        struct IHammerAttackable__Class* klass;
        MonitorData* monitor;
    };

    struct IHammerAttackable__VTable {
        VirtualInvokeData get_HammerPriority;
        VirtualInvokeData get_HammerEnableAutoTarget;
    };

    struct IHammerAttackable__StaticFields {
    };

    struct IHammerAttackable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IHammerAttackable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IHammerAttackable__VTable vtable;
    };

    struct ITorchAttackable {
        struct ITorchAttackable__Class* klass;
        MonitorData* monitor;
    };

    struct ITorchAttackable__VTable {
    };

    struct ITorchAttackable__StaticFields {
    };

    struct ITorchAttackable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ITorchAttackable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ITorchAttackable__VTable vtable;
    };

    struct LocalAppContextSwitches {
        struct LocalAppContextSwitches__Class* klass;
        MonitorData* monitor;
    };

    struct LocalAppContextSwitches__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LocalAppContextSwitches__StaticFields {
        bool MemberDescriptorEqualsReturnsFalseIfEquivalent;
    };

    struct LocalAppContextSwitches__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocalAppContextSwitches__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocalAppContextSwitches__VTable vtable;
    };

    struct _MemberInfo {
        struct _MemberInfo__Class* klass;
        MonitorData* monitor;
    };

    struct _MemberInfo__VTable {
    };

    struct _MemberInfo__StaticFields {
    };

    struct _MemberInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct _MemberInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct _MemberInfo__VTable vtable;
    };

    enum class MemoryCaptureAgent_MemoryHeader__Enum : int32_t {
        MemoryAvailable = 0x00000000,
        UnusedReservedMemory = 0x00000001,
        TextureMemory = 0x00000002,
        UsedMemory = 0x00000003,
        GcHeapSize = 0x00000004,
        GcUsedSize = 0x00000005,
        GcDesiredSize = 0x00000006,
        MissingMemSize = 0x00000007,
        AllocatableMemory = 0x00000008,
    };

    struct MemoryCaptureAgent_MemoryHeader__Enum__Boxed {
        struct MemoryCaptureAgent_MemoryHeader__Enum__Class* klass;
        MonitorData* monitor;
        MemoryCaptureAgent_MemoryHeader__Enum value;
    };

    struct MemoryCaptureAgent_MemoryHeader__Enum__VTable {
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

    struct MemoryCaptureAgent_MemoryHeader__Enum__StaticFields {
    };

    struct MemoryCaptureAgent_MemoryHeader__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MemoryCaptureAgent_MemoryHeader__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MemoryCaptureAgent_MemoryHeader__Enum__VTable vtable;
    };

    struct MemoryProfiler {
        struct MemoryProfiler__Class* klass;
        MonitorData* monitor;
    };

    struct MemoryProfiler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MemoryProfiler__StaticFields {
        struct Action_2_String_Boolean_* snapshotFinished;
        struct Action_1_UnityEngine_Profiling_Memory_Experimental_MetaData_* createMetaData;
    };

    struct MemoryProfiler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MemoryProfiler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MemoryProfiler__VTable vtable;
    };

    struct MeshValidator {
        struct MeshValidator__Class* klass;
        MonitorData* monitor;
    };

    struct MeshValidator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MeshValidator__StaticFields {
        struct RobustPredicates* predicates;
    };

    struct MeshValidator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeshValidator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeshValidator__VTable vtable;
    };

    struct IInternalMessage {
        struct IInternalMessage__Class* klass;
        MonitorData* monitor;
    };

    struct IInternalMessage__VTable {
        VirtualInvokeData get_TargetIdentity;
        VirtualInvokeData set_TargetIdentity;
        VirtualInvokeData get_Uri;
        VirtualInvokeData set_Uri;
    };

    struct IInternalMessage__StaticFields {
    };

    struct IInternalMessage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IInternalMessage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IInternalMessage__VTable vtable;
    };

    struct MessageParserUtility {
        struct MessageParserUtility__Class* klass;
        MonitorData* monitor;
    };

    struct MessageParserUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MessageParserUtility__StaticFields {
        struct String* s_currentString;
        struct StringBuilder* s_currentBuilder;
    };

    struct MessageParserUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageParserUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageParserUtility__VTable vtable;
    };

    struct MetaballDefs {
        struct MetaballDefs__Class* klass;
        MonitorData* monitor;
    };

    struct MetaballDefs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MetaballDefs__StaticFields {
        struct Vector3__Array__Array* PointLookupTable;
        struct Int32__Array__Array* TriangleLookupTable;
    };

    struct MetaballDefs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MetaballDefs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MetaballDefs__VTable vtable;
    };

    struct _MethodBase {
        struct _MethodBase__Class* klass;
        MonitorData* monitor;
    };

    struct _MethodBase__VTable {
    };

    struct _MethodBase__StaticFields {
    };

    struct _MethodBase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct _MethodBase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct _MethodBase__VTable vtable;
    };

    struct _MethodInfo {
        struct _MethodInfo__Class* klass;
        MonitorData* monitor;
    };

    struct _MethodInfo__VTable {
    };

    struct _MethodInfo__StaticFields {
    };

    struct _MethodInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct _MethodInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct _MethodInfo__VTable vtable;
    };

    struct _Module {
        struct _Module__Class* klass;
        MonitorData* monitor;
    };

    struct _Module__VTable {
    };

    struct _Module__StaticFields {
    };

    struct _Module__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct _Module__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct _Module__VTable vtable;
    };

    struct DecimalConstantAttribute__Array {
        struct DecimalConstantAttribute__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DecimalConstantAttribute* vector[32];
    };

    struct DecimalConstantAttribute__Array__VTable {
    };

    struct DecimalConstantAttribute__Array__StaticFields {
    };

    struct DecimalConstantAttribute__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecimalConstantAttribute__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecimalConstantAttribute__Array__VTable vtable;
    };

    struct DateTimeConstantAttribute__Array {
        struct DateTimeConstantAttribute__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DateTimeConstantAttribute* vector[32];
    };

    struct DateTimeConstantAttribute__Array__VTable {
    };

    struct DateTimeConstantAttribute__Array__StaticFields {
    };

    struct DateTimeConstantAttribute__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DateTimeConstantAttribute__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DateTimeConstantAttribute__Array__VTable vtable;
    };

    struct _ParameterInfo {
        struct _ParameterInfo__Class* klass;
        MonitorData* monitor;
    };

    struct _ParameterInfo__VTable {
    };

    struct _ParameterInfo__StaticFields {
    };

    struct _ParameterInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct _ParameterInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct _ParameterInfo__VTable vtable;
    };

    struct EmptyArray_1_System_Reflection_ParameterInfo_ {
        struct EmptyArray_1_System_Reflection_ParameterInfo___Class* klass;
        MonitorData* monitor;
    };

    struct EmptyArray_1_System_Reflection_ParameterInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EmptyArray_1_System_Reflection_ParameterInfo___StaticFields {
        struct ParameterInfo_1__Array* Value;
    };

    struct EmptyArray_1_System_Reflection_ParameterInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EmptyArray_1_System_Reflection_ParameterInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EmptyArray_1_System_Reflection_ParameterInfo___VTable vtable;
    };

    struct MoonProfilerManager {
        struct MoonProfilerManager__Class* klass;
        MonitorData* monitor;
    };

    struct MoonProfilerManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonProfilerManager__StaticFields {
        struct MoonProfilerFrame lastFrame;
        struct FrameTiming__Array* frameTimings;
    };

    struct MoonProfilerManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonProfilerManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonProfilerManager__VTable vtable;
    };

    struct MoonReferenceValidator {
        struct MoonReferenceValidator__Class* klass;
        MonitorData* monitor;
    };

    struct MoonReferenceValidator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonReferenceValidator__StaticFields {
        struct List_1_System_Type_* TypesChecked;
    };

    struct MoonReferenceValidator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReferenceValidator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReferenceValidator__VTable vtable;
    };

    struct ProfilerExt {
        struct ProfilerExt__Class* klass;
        MonitorData* monitor;
    };

    struct ProfilerExt__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ProfilerExt__StaticFields {
        int32_t s_deepProfiling;
    };

    struct ProfilerExt__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProfilerExt__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProfilerExt__VTable vtable;
    };

    struct MoonRenderPipelineView_Samplers {
        struct MoonRenderPipelineView_Samplers__Class* klass;
        MonitorData* monitor;
    };

    struct MoonRenderPipelineView_Samplers__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineView_Samplers__StaticFields {
        struct SrpSampler__Array* m_roots;
        struct SrpSampler prepare;
        struct SrpSampler prepareRender;
        struct SrpSampler prepareScene;
        struct SrpSampler postsAndUI;
        struct SrpSampler scenePosts;
        struct SrpSampler uiPosts;
        struct SrpSampler ui;
        struct Dictionary_2_System_Type_Moon_Rendering_SrpSampler_* m_posts;
        struct SrpSampler releaseSceneRTs;
        struct Dictionary_2_System_String_System_String_* m_releaseRTs;
        struct SrpSampler__Array* slices;
        struct Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler___Array* slicesBySize;
        struct SrpSampler update;
        struct SrpSampler prepareSlices;
        struct SrpSampler drawSlices;
        struct SrpSampler acquireSharedSliceRTs;
        struct SrpSampler clearSlice;
        struct SrpSampler startSlice;
        struct SrpSampler depthPrecull;
        struct SrpSampler acquireMRT;
        struct SrpSampler clearMRT;
        struct SrpSampler earlyZ;
        struct SrpSampler objects;
        struct SrpSampler water;
        struct SrpSampler opaque3DObjects;
        struct SrpSampler otherObjects;
        struct SrpSampler maskErasingObjects;
        struct SrpSampler maskedObjects;
        struct SrpSampler reflectionRefraction;
        struct SrpSampler lights;
        struct SrpSampler emissivity;
        struct SrpSampler emissivityPost;
        struct SrpSampler darkeningPost;
        struct SrpSampler motionVectors;
        struct SrpSampler cameraMotion;
        struct SrpSampler taa;
        struct SrpSampler fxaa;
        struct SrpSampler motionBlur;
        struct SrpSampler blurSlice;
        struct SrpSampler composeToScene;
        struct SrpSampler frontToBackBgColor;
        struct SrpSampler releaseSharedSliceRTs;
        struct SrpSampler trails;
        struct SrpSampler godrays;
        struct SrpSampler godraysBlurAndPost;
    };

    struct MoonRenderPipelineView_Samplers__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineView_Samplers__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineView_Samplers__VTable vtable;
    };

    struct MoonRenderContext_Samplers {
        struct MoonRenderContext_Samplers__Class* klass;
        MonitorData* monitor;
    };

    struct MoonRenderContext_Samplers__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderContext_Samplers__StaticFields {
        struct CustomSampler* flush;
        struct CustomSampler* submit;
        struct CustomSampler* cull;
        struct Recorder* cullRecorder;
    };

    struct MoonRenderContext_Samplers__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderContext_Samplers__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderContext_Samplers__VTable vtable;
    };

    struct RenderTarget_Samplers {
        struct RenderTarget_Samplers__Class* klass;
        MonitorData* monitor;
    };

    struct RenderTarget_Samplers__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RenderTarget_Samplers__StaticFields {
        struct SrpSampler acquire;
        struct SrpSampler acquireInternal;
        struct SrpSampler release;
        struct SrpSampler releaseInternal;
    };

    struct RenderTarget_Samplers__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTarget_Samplers__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTarget_Samplers__VTable vtable;
    };

    struct UberWaterControl_Simulation {
        struct UberWaterControl_Simulation__Class* klass;
        MonitorData* monitor;
    };

    struct UberWaterControl_Simulation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberWaterControl_Simulation__StaticFields {
        struct CommandBuffer* globalCommandBuffer;
    };

    struct UberWaterControl_Simulation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberWaterControl_Simulation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberWaterControl_Simulation__VTable vtable;
    };

    struct UberShaderProperties {
        struct UberShaderProperties__Class* klass;
        MonitorData* monitor;
    };

    struct UberShaderProperties__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderProperties__StaticFields {
        struct Int32__Array* TextureBindings;
        struct Int32__Array* Texture_US_ST_Bindings;
        struct Int32__Array* Texture_US_ATLAS_Bindings;
        struct Int32__Array* Texture_US_ATLAS_ST_Bindings;
        struct Int32__Array* TextureParralaxBindings;
        struct Int32__Array* TexturePolarBindings;
        struct Int32__Array* ColorBindings;
        struct Int32__Array* VectorBindings;
        struct Int32__Array* FloatBindings;
    };

    struct UberShaderProperties__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderProperties__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderProperties__VTable vtable;
    };

    struct UberSwarmPOIManager {
        struct UberSwarmPOIManager__Class* klass;
        MonitorData* monitor;
    };

    struct UberSwarmPOIManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberSwarmPOIManager__StaticFields {
        struct HashSet_1_UberSwarmPOI_* s_pois;
    };

    struct UberSwarmPOIManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberSwarmPOIManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberSwarmPOIManager__VTable vtable;
    };

    struct MoonTelemetryLogger {
        struct MoonTelemetryLogger__Class* klass;
        MonitorData* monitor;
    };

    struct MoonTelemetryLogger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTelemetryLogger__StaticFields {
        struct String* s_message;
        struct Timer_1* s_threadStatusTimer;
        struct Thread* s_currentThread;
    };

    struct MoonTelemetryLogger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTelemetryLogger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTelemetryLogger__VTable vtable;
    };

    struct PlayFabSendingProxy {
        struct PlayFabSendingProxy__Class* klass;
        MonitorData* monitor;
    };

    struct PlayFabSendingProxy__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabSendingProxy__StaticFields {
        struct Action_1_MoonTelemetryEvent_* m_proxy;
        bool NewPostImpl;
    };

    struct PlayFabSendingProxy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabSendingProxy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabSendingProxy__VTable vtable;
    };

    struct ITimelineItem {
        struct ITimelineItem__Class* klass;
        MonitorData* monitor;
    };

    struct ITimelineItem__VTable {
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
    };

    struct ITimelineItem__StaticFields {
    };

    struct ITimelineItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ITimelineItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ITimelineItem__VTable vtable;
    };

    struct ShaderID_MotionBlur {
        struct ShaderID_MotionBlur__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_MotionBlur__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_MotionBlur__StaticFields {
        int32_t _MainTex;
        int32_t _AccumOrig;
    };

    struct ShaderID_MotionBlur__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_MotionBlur__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_MotionBlur__VTable vtable;
    };

    struct INpcInteractionNode {
        struct INpcInteractionNode__Class* klass;
        MonitorData* monitor;
    };

    struct INpcInteractionNode__VTable {
        VirtualInvokeData get_CurrentLine;
    };

    struct INpcInteractionNode__StaticFields {
    };

    struct INpcInteractionNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct INpcInteractionNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct INpcInteractionNode__VTable vtable;
    };

    struct NativeInputSystem {
        struct NativeInputSystem__Class* klass;
        MonitorData* monitor;
    };

    struct NativeInputSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NativeInputSystem__StaticFields {
        struct NativeUpdateCallback* onUpdate;
        struct Action_1_UnityEngineInternal_Input_NativeInputUpdateType_* onBeforeUpdate;
        struct Action_2_Int32_String_* s_OnDeviceDiscoveredCallback;
    };

    struct NativeInputSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NativeInputSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NativeInputSystem__VTable vtable;
    };

    struct NavMesh {
        struct NavMesh__Class* klass;
        MonitorData* monitor;
    };

    struct NavMesh__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NavMesh__StaticFields {
        struct NavMesh_OnNavMeshPreUpdate* onPreUpdate;
    };

    struct NavMesh__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NavMesh__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NavMesh__VTable vtable;
    };

    struct NavigationSettings {
        struct NavigationSettings__Class* klass;
        MonitorData* monitor;
    };

    struct NavigationSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NavigationSettings__StaticFields {
        int32_t NavigationCollisionMask;
    };

    struct NavigationSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NavigationSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NavigationSettings__VTable vtable;
    };

    struct NclConstants {
        struct NclConstants__Class* klass;
        MonitorData* monitor;
    };

    struct NclConstants__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NclConstants__StaticFields {
        struct Object* Sentinel;
        struct Object__Array* EmptyObjectArray;
        struct Uri__Array* EmptyUriArray;
        struct Byte__Array* CRLF;
        struct Byte__Array* ChunkTerminator;
    };

} // namespace app
