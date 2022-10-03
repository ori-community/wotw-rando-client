namespace app {
    struct ShaderID_ReconstructionFilter {
        struct ShaderID_ReconstructionFilter__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_ReconstructionFilter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_ReconstructionFilter__StaticFields {
        int32_t _VelocityScale;
        int32_t _MaxBlurRadius;
        int32_t _RcpMaxBlurRadius;
        int32_t _TileMaxOffs;
        int32_t _TileMaxLoop;
        int32_t _LoopCount;
        int32_t _NeighborMaxTex;
        int32_t _VelocityTex;
    };

    struct ShaderID_ReconstructionFilter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_ReconstructionFilter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_ReconstructionFilter__VTable vtable;
    };

    struct IFrameData {
        struct IFrameData__Class* klass;
        MonitorData* monitor;
    };

    struct IFrameData__VTable {
        VirtualInvokeData Save;
        VirtualInvokeData Load;
        VirtualInvokeData FrameType;
    };

    struct IFrameData__StaticFields {
    };

    struct IFrameData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IFrameData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IFrameData__VTable vtable;
    };

    struct MoonProfilerManager_Recorders {
        struct MoonProfilerManager_Recorders__Class* klass;
        MonitorData* monitor;
    };

    struct MoonProfilerManager_Recorders__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonProfilerManager_Recorders__StaticFields {
        struct Recorder* fixedUpdate;
        struct Recorder* update;
        struct Recorder* lateUpdate;
        struct Recorder* coroutines;
        struct Recorder* physicsFixedUpdate;
    };

    struct MoonProfilerManager_Recorders__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonProfilerManager_Recorders__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonProfilerManager_Recorders__VTable vtable;
    };

    struct IReferenceService {
        struct IReferenceService__Class* klass;
        MonitorData* monitor;
    };

    struct IReferenceService__VTable {
        VirtualInvokeData GetReference;
        VirtualInvokeData GetName;
        VirtualInvokeData GetReferences;
    };

    struct IReferenceService__StaticFields {
    };

    struct IReferenceService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IReferenceService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IReferenceService__VTable vtable;
    };

    struct IMoonType {
        struct IMoonType__Class* klass;
        MonitorData* monitor;
    };

    struct IMoonType__VTable {
        VirtualInvokeData get_IsStaticValue;
        VirtualInvokeData GetTypeData;
        VirtualInvokeData CanResolve;
        VirtualInvokeData get_IsCrossSceneReference;
    };

    struct IMoonType__StaticFields {
    };

    struct IMoonType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType__VTable vtable;
    };

    struct IComponentChangeService {
        struct IComponentChangeService__Class* klass;
        MonitorData* monitor;
    };

    struct IComponentChangeService__VTable {
        VirtualInvokeData OnComponentChanged;
        VirtualInvokeData OnComponentChanging;
    };

    struct IComponentChangeService__StaticFields {
    };

    struct IComponentChangeService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IComponentChangeService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IComponentChangeService__VTable vtable;
    };

    struct IDictionaryService {
        struct IDictionaryService__Class* klass;
        MonitorData* monitor;
    };

    struct IDictionaryService__VTable {
        VirtualInvokeData GetValue;
        VirtualInvokeData SetValue;
    };

    struct IDictionaryService__StaticFields {
    };

    struct IDictionaryService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDictionaryService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDictionaryService__VTable vtable;
    };

    struct Attribute__Array__Array {
        struct Attribute__Array__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Attribute__Array* vector[32];
    };

    struct Attribute__Array__Array__VTable {
    };

    struct Attribute__Array__Array__StaticFields {
    };

    struct Attribute__Array__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Attribute__Array__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Attribute__Array__Array__VTable vtable;
    };

    struct IExtenderListService {
        struct IExtenderListService__Class* klass;
        MonitorData* monitor;
    };

    struct IExtenderListService__VTable {
        VirtualInvokeData GetExtenderProviders;
    };

    struct IExtenderListService__StaticFields {
    };

    struct IExtenderListService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IExtenderListService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IExtenderListService__VTable vtable;
    };

    struct ReflectPropertyDescriptor__Array {
        struct ReflectPropertyDescriptor__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ReflectPropertyDescriptor* vector[32];
    };

    struct ReflectPropertyDescriptor__Array__VTable {
    };

    struct ReflectPropertyDescriptor__Array__StaticFields {
    };

    struct ReflectPropertyDescriptor__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReflectPropertyDescriptor__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReflectPropertyDescriptor__Array__VTable vtable;
    };

    struct TypeTranslator {
        struct TypeTranslator__Class* klass;
        MonitorData* monitor;
    };

    struct TypeTranslator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeTranslator__StaticFields {
        struct Hashtable* nameCache;
        struct Hashtable* primitiveTypes;
        struct Hashtable* primitiveArrayTypes;
        struct Hashtable* nullableTypes;
    };

    struct TypeTranslator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeTranslator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeTranslator__VTable vtable;
    };

    struct Physics {
        struct Physics__Class* klass;
        MonitorData* monitor;
    };

    struct Physics__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Physics__StaticFields {
    };

    struct Physics__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Physics__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Physics__VTable vtable;
    };

    struct ICollection_1_System_Reflection_PropertyInfo_ {
        struct ICollection_1_System_Reflection_PropertyInfo___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Reflection_PropertyInfo___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_System_Reflection_PropertyInfo___StaticFields {
    };

    struct ICollection_1_System_Reflection_PropertyInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_Reflection_PropertyInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_Reflection_PropertyInfo___VTable vtable;
    };

    struct IEnumerator_1_System_Linq_IGrouping_2__3 {
        struct IEnumerator_1_System_Linq_IGrouping_2__3__Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_System_Linq_IGrouping_2__3__VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Linq_IGrouping_2__3__StaticFields {
    };

    struct IEnumerator_1_System_Linq_IGrouping_2__3__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Linq_IGrouping_2__3__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Linq_IGrouping_2__3__VTable vtable;
    };

    struct Timeout {
        struct Timeout__Class* klass;
        MonitorData* monitor;
    };

    struct Timeout__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Timeout__StaticFields {
        struct TimeSpan InfiniteTimeSpan;
    };

    struct Timeout__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Timeout__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Timeout__VTable vtable;
    };

    struct Registry {
        struct Registry__Class* klass;
        MonitorData* monitor;
    };

    struct Registry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Registry__StaticFields {
        struct RegistryKey* ClassesRoot;
        struct RegistryKey* CurrentConfig;
        struct RegistryKey* CurrentUser;
        struct RegistryKey* DynData;
        struct RegistryKey* LocalMachine;
        struct RegistryKey* PerformanceData;
        struct RegistryKey* Users;
    };

    struct Registry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Registry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Registry__VTable vtable;
    };

    struct RemoteSettings {
        struct RemoteSettings__Class* klass;
        MonitorData* monitor;
    };

    struct RemoteSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RemoteSettings__StaticFields {
        struct RemoteSettings_UpdatedEventHandler* Updated;
        struct Action* BeforeFetchFromServer;
        struct Action_3_Boolean_Boolean_Int32_* Completed;
    };

    struct RemoteSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RemoteSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RemoteSettings__VTable vtable;
    };

    struct OneWayAttribute {
        struct OneWayAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct OneWayAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct OneWayAttribute__StaticFields {
    };

    struct OneWayAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OneWayAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OneWayAttribute__VTable vtable;
    };

    struct TrackingServices {
        struct TrackingServices__Class* klass;
        MonitorData* monitor;
    };

    struct TrackingServices__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TrackingServices__StaticFields {
        struct ArrayList* _handlers;
    };

    struct TrackingServices__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TrackingServices__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TrackingServices__VTable vtable;
    };

    struct RenderPipelineManager {
        struct RenderPipelineManager__Class* klass;
        MonitorData* monitor;
    };

    struct RenderPipelineManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RenderPipelineManager__StaticFields {
        struct IRenderPipelineAsset* s_CurrentPipelineAsset;
        struct IRenderPipeline* _currentPipeline_k__BackingField;
    };

    struct RenderPipelineManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderPipelineManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderPipelineManager__VTable vtable;
    };

    struct RenderTextureFormatSafe {
        struct RenderTextureFormatSafe__Class* klass;
        MonitorData* monitor;
    };

    struct RenderTextureFormatSafe__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RenderTextureFormatSafe__StaticFields {
        RenderTextureFormat__Enum RGB565;

        RenderTextureFormat__Enum ARGB1555;

        RenderTextureFormat__Enum ARGB4444;

        RenderTextureFormat__Enum RGB111110Float;
    };

    struct RenderTextureFormatSafe__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureFormatSafe__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureFormatSafe__VTable vtable;
    };

    struct ServerObjectSerializer {
        struct ServerObjectSerializer__Class* klass;
        MonitorData* monitor;
    };

    struct ServerObjectSerializer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ServerObjectSerializer__StaticFields {
        struct Dictionary_2_System_Type_System_Type_* m_supportTypes;
        struct fsSerializer* m_serializer;
        struct HashSet_1_System_String_* m_whiteListHash;
    };

    struct ServerObjectSerializer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServerObjectSerializer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServerObjectSerializer__VTable vtable;
    };

    struct RequestCacheManager {
        struct RequestCacheManager__Class* klass;
        MonitorData* monitor;
    };

    struct RequestCacheManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RequestCacheManager__StaticFields {
        struct RequestCachingSectionInternal* s_CacheConfigSettings;
        struct RequestCacheBinding* s_BypassCacheBinding;
        struct RequestCacheBinding* s_DefaultGlobalBinding;
        struct RequestCacheBinding* s_DefaultHttpBinding;
        struct RequestCacheBinding* s_DefaultFtpBinding;
    };

    struct RequestCacheManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RequestCacheManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RequestCacheManager__VTable vtable;
    };

    struct ISliceRenderSettingsInfluencerAsset {
        struct ISliceRenderSettingsInfluencerAsset__Class* klass;
        MonitorData* monitor;
    };

    struct ISliceRenderSettingsInfluencerAsset__VTable {
        VirtualInvokeData get_SliceRenderInfluenceSettings;
    };

    struct ISliceRenderSettingsInfluencerAsset__StaticFields {
    };

    struct ISliceRenderSettingsInfluencerAsset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISliceRenderSettingsInfluencerAsset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISliceRenderSettingsInfluencerAsset__VTable vtable;
    };

    struct ISliceRenderSettingsInfluencerOffset {
        struct ISliceRenderSettingsInfluencerOffset__Class* klass;
        MonitorData* monitor;
    };

    struct ISliceRenderSettingsInfluencerOffset__VTable {
        VirtualInvokeData GetBlurOffsetForLayer;
        VirtualInvokeData GetDownsamplingOffsetForLayer;
    };

    struct ISliceRenderSettingsInfluencerOffset__StaticFields {
    };

    struct ISliceRenderSettingsInfluencerOffset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISliceRenderSettingsInfluencerOffset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISliceRenderSettingsInfluencerOffset__VTable vtable;
    };

    struct RuntimeArgumentHandle {
        void* args;
    };

    struct RuntimeArgumentHandle__Boxed {
        struct RuntimeArgumentHandle__Class* klass;
        MonitorData* monitor;
        struct RuntimeArgumentHandle fields;
    };

    struct RuntimeArgumentHandle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RuntimeArgumentHandle__StaticFields {
    };

    struct RuntimeArgumentHandle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeArgumentHandle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeArgumentHandle__VTable vtable;
    };

    struct EmptyArray_1_Type_ {
        struct EmptyArray_1_Type___Class* klass;
        MonitorData* monitor;
    };

    struct EmptyArray_1_Type___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EmptyArray_1_Type___StaticFields {
        struct Type__Array* Value;
    };

    struct EmptyArray_1_Type___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EmptyArray_1_Type___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EmptyArray_1_Type___VTable vtable;
    };

    struct ShaderID_SCurveContrast {
        struct ShaderID_SCurveContrast__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_SCurveContrast__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_SCurveContrast__StaticFields {
        int32_t _Red;
        int32_t _Green;
        int32_t _Blue;
    };

    struct ShaderID_SCurveContrast__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_SCurveContrast__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_SCurveContrast__VTable vtable;
    };

    struct SDK {
        struct SDK__Class* klass;
        MonitorData* monitor;
    };

    struct SDK__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SDK__StaticFields {
        struct XTaskQueue* defaultQueue;
        bool isInitialized;
    };

    struct SDK__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SDK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SDK__VTable vtable;
    };

    struct ShaderID_SMAA {
        struct ShaderID_SMAA__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_SMAA__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_SMAA__StaticFields {
        int32_t _AreaTex;
        int32_t _SearchTex;
        int32_t _Metrics;
        int32_t _Params1;
        int32_t _Params2;
        int32_t _ReprojectionMatrix;
        int32_t _SubsampleIndices;
        int32_t _Params3;
        int32_t _BlendTex;
        int32_t _AccumulationTex;
    };

    struct ShaderID_SMAA__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_SMAA__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_SMAA__VTable vtable;
    };

    struct ShaderKeyword_SMAA {
        struct ShaderKeyword_SMAA__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderKeyword_SMAA__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderKeyword_SMAA__StaticFields {
        int32_t USE_PREDICATION;
        int32_t USE_DIAG_SEARCH;
        int32_t USE_CORNER_DETECTION;
        int32_t USE_UV_BASED_REPROJECTION;
    };

    struct ShaderKeyword_SMAA__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderKeyword_SMAA__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderKeyword_SMAA__VTable vtable;
    };

    struct ISafeSerializationData {
        struct ISafeSerializationData__Class* klass;
        MonitorData* monitor;
    };

    struct ISafeSerializationData__VTable {
        VirtualInvokeData CompleteDeserialization;
    };

    struct ISafeSerializationData__StaticFields {
    };

    struct ISafeSerializationData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISafeSerializationData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISafeSerializationData__VTable vtable;
    };

    struct __declspec(align(8)) List_1_System_Runtime_Serialization_IDeserializationCallback___Fields {
        struct IDeserializationCallback__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Runtime_Serialization_IDeserializationCallback_ {
        struct List_1_System_Runtime_Serialization_IDeserializationCallback___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Runtime_Serialization_IDeserializationCallback___Fields fields;
    };

    struct IDeserializationCallback__Array {
        struct IDeserializationCallback__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IDeserializationCallback* vector[32];
    };

    struct IEnumerator_1_System_Runtime_Serialization_IDeserializationCallback_ {
        struct IEnumerator_1_System_Runtime_Serialization_IDeserializationCallback___Class* klass;
        MonitorData* monitor;
    };

    struct IDeserializationCallback__Array__VTable {
    };

    struct IDeserializationCallback__Array__StaticFields {
    };

    struct IDeserializationCallback__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDeserializationCallback__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDeserializationCallback__Array__VTable vtable;
    };

    struct IEnumerator_1_System_Runtime_Serialization_IDeserializationCallback___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Runtime_Serialization_IDeserializationCallback___StaticFields {
    };

    struct IEnumerator_1_System_Runtime_Serialization_IDeserializationCallback___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Runtime_Serialization_IDeserializationCallback___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Runtime_Serialization_IDeserializationCallback___VTable vtable;
    };

    struct List_1_System_Runtime_Serialization_IDeserializationCallback___VTable {
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

    struct List_1_System_Runtime_Serialization_IDeserializationCallback___StaticFields {
        struct IDeserializationCallback__Array* _emptyArray;
    };

    struct List_1_System_Runtime_Serialization_IDeserializationCallback___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Runtime_Serialization_IDeserializationCallback___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_Runtime_Serialization_IDeserializationCallback___VTable vtable;
    };

    struct ShaderID_SampleComparer {
        struct ShaderID_SampleComparer__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_SampleComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_SampleComparer__StaticFields {
        int32_t DataBufferWidth;
        int32_t dataBuffer;
        int32_t MasterTex;
        int32_t SampleTex;
    };

    struct ShaderID_SampleComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_SampleComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_SampleComparer__VTable vtable;
    };

    struct UberWaterReflectionView_Samplers {
        struct UberWaterReflectionView_Samplers__Class* klass;
        MonitorData* monitor;
    };

    struct UberWaterReflectionView_Samplers__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberWaterReflectionView_Samplers__StaticFields {
        struct CustomSampler* onPostCull;
        struct SrpSampler renderAll;
        struct SrpSampler renderSingle;
    };

    struct UberWaterReflectionView_Samplers__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberWaterReflectionView_Samplers__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberWaterReflectionView_Samplers__VTable vtable;
    };

    enum class SceneDataCaptureAgent_SceneLoadingStates__Enum : int32_t {
        LoadedScenes = 0x00000000,
        DisabledScenes = 0x00000001,
        DisablingScenes = 0x00000002,
        LoadingScenes = 0x00000003,
        LoadingCancelledScenes = 0x00000004,
        EnablingScenes = 0x00000005,
    };

    struct SceneDataCaptureAgent_SceneLoadingStates__Enum__Boxed {
        struct SceneDataCaptureAgent_SceneLoadingStates__Enum__Class* klass;
        MonitorData* monitor;
        SceneDataCaptureAgent_SceneLoadingStates__Enum value;
    };

} // namespace app
