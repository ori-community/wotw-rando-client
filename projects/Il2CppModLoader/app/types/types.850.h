namespace app {
struct __declspec(align(8)) RuntimeSliceRenderSettings__Fields {
    struct SceneDefaultSettingsHelper *m_defaultSettingsHelper;
    struct SliceRenderSettings *m_currentSRS;
    struct LayeredRenderSettings *m_currentLRS;
    bool m_isDirty;
    float m_deltaTime;
    struct Vector3 m_cameraPos;
    RuntimeSliceRenderSettings_DofCurveMode__Enum dofCurveMode;
    
};

struct RuntimeSliceRenderSettings {
    struct RuntimeSliceRenderSettings__Class *klass;
    MonitorData *monitor;
    struct RuntimeSliceRenderSettings__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_Rendering_ILayeredRenderInfluencer___Fields {
    struct ILayeredRenderInfluencer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Rendering_ILayeredRenderInfluencer_ {
    struct List_1_Moon_Rendering_ILayeredRenderInfluencer___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Rendering_ILayeredRenderInfluencer___Fields fields;
};

struct ILayeredRenderInfluencer {
    struct ILayeredRenderInfluencer__Class *klass;
    MonitorData *monitor;
};

struct ILayeredRenderInfluencer__Array {
    struct ILayeredRenderInfluencer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ILayeredRenderInfluencer *vector[32];
};

struct IEnumerator_1_Moon_Rendering_ILayeredRenderInfluencer_ {
    struct IEnumerator_1_Moon_Rendering_ILayeredRenderInfluencer___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Fields {
    struct ISliceRenderSettingsInfluencer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Rendering_ISliceRenderSettingsInfluencer_ {
    struct List_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Fields fields;
};

struct ISliceRenderSettingsInfluencer {
    struct ISliceRenderSettingsInfluencer__Class *klass;
    MonitorData *monitor;
};

struct ISliceRenderSettingsInfluencer__Array {
    struct ISliceRenderSettingsInfluencer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ISliceRenderSettingsInfluencer *vector[32];
};

struct IEnumerator_1_Moon_Rendering_ISliceRenderSettingsInfluencer_ {
    struct IEnumerator_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) LightCullingSystem__Fields {
    bool Enabled;
    struct LightCullingSystem_LightCullingGroup__Array *Groups;
};

struct LightCullingSystem {
    struct LightCullingSystem__Class *klass;
    MonitorData *monitor;
    struct LightCullingSystem__Fields fields;
};

struct LightCullingSystem_LightCullingGroup__Array {
    struct LightCullingSystem_LightCullingGroup__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LightCullingSystem_LightCullingGroup *vector[32];
};

struct __declspec(align(8)) MoonRenderPipelineView_GodRaySrcRT__Fields {
    struct RenderTarget *rt;
    int32_t id;
    int32_t blurRTIndex;
};

struct MoonRenderPipelineView_GodRaySrcRT {
    struct MoonRenderPipelineView_GodRaySrcRT__Class *klass;
    MonitorData *monitor;
    struct MoonRenderPipelineView_GodRaySrcRT__Fields fields;
};

struct MoonRenderPipelineView_GodRaySrcRT__Array {
    struct MoonRenderPipelineView_GodRaySrcRT__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonRenderPipelineView_GodRaySrcRT *vector[32];
};

struct __declspec(align(8)) MoonRenderPipelineView_GodRayBlurRT__Fields {
    struct RenderTarget *rt;
    int32_t id;
    int32_t frameIndex;
    bool forceClear;
};

struct MoonRenderPipelineView_GodRayBlurRT {
    struct MoonRenderPipelineView_GodRayBlurRT__Class *klass;
    MonitorData *monitor;
    struct MoonRenderPipelineView_GodRayBlurRT__Fields fields;
};

struct MoonRenderPipelineView_GodRayBlurRT__Array {
    struct MoonRenderPipelineView_GodRayBlurRT__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonRenderPipelineView_GodRayBlurRT *vector[32];
};

struct ICullingCategoryManager {
    struct ICullingCategoryManager__Class *klass;
    MonitorData *monitor;
};

struct ICullingCategoryManager__Array {
    struct ICullingCategoryManager__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ICullingCategoryManager *vector[32];
};

struct LightDarkeningErasingComparer {
    struct LightDarkeningErasingComparer__Class *klass;
    MonitorData *monitor;
};

struct LightCullingComparer {
    struct LightCullingComparer__Class *klass;
    MonitorData *monitor;
};

struct MoonRenderPipelineView_FilterBounds {
    struct Bounds bounds;
    float zNear;
    float zFar;
};

struct MoonRenderPipelineView_FilterBounds__Boxed {
    struct MoonRenderPipelineView_FilterBounds__Class *klass;
    MonitorData *monitor;
    struct MoonRenderPipelineView_FilterBounds fields;
};

struct Viewport {
    struct Rect rect;
};

struct Viewport__Boxed {
    struct Viewport__Class *klass;
    MonitorData *monitor;
    struct Viewport fields;
};

struct MoonRenderPipelineView_FinalSliceCompositionInfo {
    int32_t sliceRTIdx;
    float zNear;
    float zFar;
    struct Vector4 slicingParams;
    struct MoonRenderPipelineView_FilterBounds cullBounds;
    struct Vector2 sliceScale;
    struct Viewport sliceViewport;
    struct Vector4 sliceUVScale;
    struct Vector4 uvMaxRegion;
    float sampling;
    bool doDepthPrecull;
};

struct MoonRenderPipelineView_FinalSliceCompositionInfo__Boxed {
    struct MoonRenderPipelineView_FinalSliceCompositionInfo__Class *klass;
    MonitorData *monitor;
    struct MoonRenderPipelineView_FinalSliceCompositionInfo fields;
};

struct MoonRenderPipelineView_FinalSliceCompositionInfo__Array {
    struct MoonRenderPipelineView_FinalSliceCompositionInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonRenderPipelineView_FinalSliceCompositionInfo vector[32];
};

struct __declspec(align(8)) InterleavedRenderingSettings__Fields {
    struct InterleavedRenderingSettings_PerSlice__Array *slices;
    struct InterleavedRenderingSettings_SliceLoop *bgLoop;
    struct InterleavedRenderingSettings_SliceLoop *fgLoop;
};

struct InterleavedRenderingSettings {
    struct InterleavedRenderingSettings__Class *klass;
    MonitorData *monitor;
    struct InterleavedRenderingSettings__Fields fields;
};

struct __declspec(align(8)) InterleavedRenderingSettings_PerSlice__Fields {
    int32_t index;
    struct Vector2 prevDrsScale;
    struct Int2 sliceSize;
    float xMovementScale;
    bool overwrite;
    bool enabled;
};

struct InterleavedRenderingSettings_PerSlice {
    struct InterleavedRenderingSettings_PerSlice__Class *klass;
    MonitorData *monitor;
    struct InterleavedRenderingSettings_PerSlice__Fields fields;
};

struct InterleavedRenderingSettings_PerSlice__Array {
    struct InterleavedRenderingSettings_PerSlice__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct InterleavedRenderingSettings_PerSlice *vector[32];
};

struct __declspec(align(8)) InterleavedRenderingSettings_SliceLoop__Fields {
    struct InterleavedRenderingSettings_PerSlice__Array *slices;
    int32_t sliceBase;
    int32_t sliceCount;
    int32_t readWriteIndex;
    int32_t sliceIndexToStore;
    int32_t sliceIndexToReuse;
};

struct InterleavedRenderingSettings_SliceLoop {
    struct InterleavedRenderingSettings_SliceLoop__Class *klass;
    MonitorData *monitor;
    struct InterleavedRenderingSettings_SliceLoop__Fields fields;
};

struct __declspec(align(8)) DiskBlurSRP__Fields {
    int32_t _sampleCount;
    struct Vector4 motionBlurParams;
    float MotionBlurVignettePower;
    float MotionBlurVignetteSize;
    float MotionBlurVignetteStrength;
    float VectorMotionBlurRadius;
    float VectorMotionBlurScale;
    float MotionBlurFPSScale;
    bool debugShowInterest;
    bool debugShowMotionVectors;
    struct Material__Array *materials;
    struct Material__Array *materialsMB;
    struct Vector4__Array *m_interestZonePos;
};

struct DiskBlurSRP {
    struct DiskBlurSRP__Class *klass;
    MonitorData *monitor;
    struct DiskBlurSRP__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_String_Moon_Rendering_SrpSampler___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_Moon_Rendering_SrpSampler_ {
    struct Dictionary_2_System_String_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_Moon_Rendering_SrpSampler___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct SrpSampler value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler___Fields {
    struct Dictionary_2_System_String_Moon_Rendering_SrpSampler_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler___Fields {
    struct Dictionary_2_System_String_Moon_Rendering_SrpSampler_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler___Fields fields;
};

struct SrpSampler__Array {
    struct SrpSampler__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SrpSampler vector[32];
};

struct IEnumerator_1_Moon_Rendering_SrpSampler_ {
    struct IEnumerator_1_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Rendering_SrpSampler_ {
    struct ICollection_1_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ {
    struct String *key;
    struct SrpSampler value;
};

struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Boxed {
    struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ fields;
};

struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Array {
    struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Rendering_SrpSampler_ {
    struct IEnumerable_1_Moon_Rendering_SrpSampler___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_PointLightMaskModifier___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_PointLightMaskModifier_ {
    struct Dictionary_2_System_Int32_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_PointLightMaskModifier___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct PointLightMaskModifier *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier___Fields {
    struct Dictionary_2_System_Int32_PointLightMaskModifier_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier___Fields {
    struct Dictionary_2_System_Int32_PointLightMaskModifier_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier___Fields fields;
};

struct IEnumerator_1_PointLightMaskModifier_ {
    struct IEnumerator_1_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_PointLightMaskModifier_ {
    struct ICollection_1_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_PointLightMaskModifier_ {
    int32_t key;
    struct PointLightMaskModifier *value;
};

struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Boxed {
    struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_PointLightMaskModifier_ fields;
};

struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Array {
    struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_PointLightMaskModifier_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_PointLightMaskModifier_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_PointLightMaskModifier_ {
    struct IEnumerable_1_PointLightMaskModifier___Class *klass;
    MonitorData *monitor;
};

struct PointLightMaskModifier__Array {
    struct PointLightMaskModifier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PointLightMaskModifier *vector[32];
};

struct HashSet_1_T_Slot_LightPriority_Layer___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HashSet_1_T_Slot_LightPriority_Layer___StaticFields {
};

struct HashSet_1_T_Slot_LightPriority_Layer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_LightPriority_Layer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_LightPriority_Layer___VTable vtable;
};

struct HashSet_1_T_Slot_LightPriority_Layer___Array__VTable {
};

struct HashSet_1_T_Slot_LightPriority_Layer___Array__StaticFields {
};

struct HashSet_1_T_Slot_LightPriority_Layer___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_LightPriority_Layer___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_LightPriority_Layer___Array__VTable vtable;
};

struct HashSet_1_LightPriority_Layer___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
    VirtualInvokeData Add;
    VirtualInvokeData UnionWith;
};

struct HashSet_1_LightPriority_Layer___StaticFields {
};

struct HashSet_1_LightPriority_Layer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_LightPriority_Layer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_LightPriority_Layer___VTable vtable;
};

struct LightCullingSystem_LightCullingGroupId__Enum__VTable {
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

struct LightCullingSystem_LightCullingGroupId__Enum__StaticFields {
};

struct LightCullingSystem_LightCullingGroupId__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightCullingSystem_LightCullingGroupId__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightCullingSystem_LightCullingGroupId__Enum__VTable vtable;
};

struct LightCullingSystem_LightCullingConfigPerType__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LightCullingSystem_LightCullingConfigPerType__StaticFields {
};

struct LightCullingSystem_LightCullingConfigPerType__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightCullingSystem_LightCullingConfigPerType__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightCullingSystem_LightCullingConfigPerType__VTable vtable;
};

struct MoonRenderPipelineViewType__Enum__VTable {
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

struct MoonRenderPipelineViewType__Enum__StaticFields {
};

struct MoonRenderPipelineViewType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineViewType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineViewType__Enum__VTable vtable;
};

struct MoonRenderPipelineSettings_Slice__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonRenderPipelineSettings_Slice__StaticFields {
};

struct MoonRenderPipelineSettings_Slice__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineSettings_Slice__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineSettings_Slice__VTable vtable;
};

struct MoonRenderPipelineSettings_Slice__Array__VTable {
};

struct MoonRenderPipelineSettings_Slice__Array__StaticFields {
};

struct MoonRenderPipelineSettings_Slice__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineSettings_Slice__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineSettings_Slice__Array__VTable vtable;
};

struct MoonRenderPipelineSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonRenderPipelineSettings__StaticFields {
};

struct MoonRenderPipelineSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineSettings__VTable vtable;
};

struct MoonRenderPipelineDebug_Slice__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonRenderPipelineDebug_Slice__StaticFields {
};

struct MoonRenderPipelineDebug_Slice__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineDebug_Slice__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineDebug_Slice__VTable vtable;
};

struct MoonRenderPipelineDebug_Slice__Array__VTable {
};

struct MoonRenderPipelineDebug_Slice__Array__StaticFields {
};

struct MoonRenderPipelineDebug_Slice__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineDebug_Slice__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineDebug_Slice__Array__VTable vtable;
};

struct MoonRenderPipelineDebug_ReflectionStats__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonRenderPipelineDebug_ReflectionStats__StaticFields {
};

struct MoonRenderPipelineDebug_ReflectionStats__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineDebug_ReflectionStats__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineDebug_ReflectionStats__VTable vtable;
};

struct MoonRenderPipelineDebug__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonRenderPipelineDebug__StaticFields {
};

struct MoonRenderPipelineDebug__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineDebug__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineDebug__VTable vtable;
};

struct IEnumerator_1_UnityEngine_Rendering_CommandBuffer___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_Rendering_CommandBuffer___StaticFields {
};

struct IEnumerator_1_UnityEngine_Rendering_CommandBuffer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_Rendering_CommandBuffer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UnityEngine_Rendering_CommandBuffer___VTable vtable;
};

struct Stack_1_UnityEngine_Rendering_CommandBuffer___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_1;
};

struct Stack_1_UnityEngine_Rendering_CommandBuffer___StaticFields {
};

struct Stack_1_UnityEngine_Rendering_CommandBuffer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Stack_1_UnityEngine_Rendering_CommandBuffer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Stack_1_UnityEngine_Rendering_CommandBuffer___VTable vtable;
};

struct MoonRenderContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct MoonRenderContext__StaticFields {
};

struct MoonRenderContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderContext__VTable vtable;
};

struct CommandBuffer__Array__Array__VTable {
};

struct CommandBuffer__Array__Array__StaticFields {
};

struct CommandBuffer__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CommandBuffer__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CommandBuffer__Array__Array__VTable vtable;
};

struct RenderTarget__Array__VTable {
};

struct RenderTarget__Array__StaticFields {
};

struct RenderTarget__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RenderTarget__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RenderTarget__Array__VTable vtable;
};

struct RenderTargetIdentifier__Array__Array__VTable {
};

struct RenderTargetIdentifier__Array__Array__StaticFields {
};

struct RenderTargetIdentifier__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RenderTargetIdentifier__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RenderTargetIdentifier__Array__Array__VTable vtable;
};

struct IRenderPostprocessor__VTable {
    VirtualInvokeData get_enabled;
    VirtualInvokeData OnRenderImage;
};

struct IRenderPostprocessor__StaticFields {
};

struct IRenderPostprocessor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRenderPostprocessor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRenderPostprocessor__VTable vtable;
};

struct IRenderPostprocessor__Array__VTable {
};

struct IRenderPostprocessor__Array__StaticFields {
};

struct IRenderPostprocessor__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRenderPostprocessor__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRenderPostprocessor__Array__VTable vtable;
};

struct IEnumerator_1_IRenderPostprocessor___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_IRenderPostprocessor___StaticFields {
};

struct IEnumerator_1_IRenderPostprocessor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_IRenderPostprocessor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_IRenderPostprocessor___VTable vtable;
};

struct List_1_IRenderPostprocessor___VTable {
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

struct List_1_IRenderPostprocessor___StaticFields {
    struct IRenderPostprocessor__Array *_emptyArray;
};

struct List_1_IRenderPostprocessor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_IRenderPostprocessor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_IRenderPostprocessor___VTable vtable;
};

struct MoonRenderPipelineView_UpscalePost__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IRenderPostprocessor_get_enabled;
    VirtualInvokeData IRenderPostprocessor_OnRenderImage;
};

}
