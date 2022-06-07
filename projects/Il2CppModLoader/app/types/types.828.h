namespace app {
struct CurrentCameraTransformProvider {
    struct CurrentCameraTransformProvider__Class *klass;
    MonitorData *monitor;
    struct CurrentCameraTransformProvider__Fields fields;
};

struct CurrentCameraTransformProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetResolverForType;
};

struct CurrentCameraTransformProvider__StaticFields {
};

struct CurrentCameraTransformProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CurrentCameraTransformProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CurrentCameraTransformProvider__VTable vtable;
};

struct MaintainAspectRatio__Fields {
    struct MonoBehaviour__Fields _;
    struct Camera *m_camera;
};

struct MaintainAspectRatio {
    struct MaintainAspectRatio__Class *klass;
    MonitorData *monitor;
    struct MaintainAspectRatio__Fields fields;
};

struct MaintainAspectRatio__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MaintainAspectRatio__StaticFields {
};

struct MaintainAspectRatio__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaintainAspectRatio__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaintainAspectRatio__VTable vtable;
};

struct RenderingSettingsPerScene___VTable {
};

struct RenderingSettingsPerScene___StaticFields {
};

struct RenderingSettingsPerScene___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RenderingSettingsPerScene___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RenderingSettingsPerScene___VTable vtable;
};

enum class SceneSettingsTransitionZone_Direction__Enum : int32_t {
    TransitionLeft = 0x00000000,
    TransitionRight = 0x00000001,
    TransitionUp = 0x00000002,
    TransitionDown = 0x00000003,
};

struct SceneSettingsTransitionZone_Direction__Enum__Boxed {
    struct SceneSettingsTransitionZone_Direction__Enum__Class *klass;
    MonitorData *monitor;
    SceneSettingsTransitionZone_Direction__Enum value;
    
};

struct SceneSettingsTransitionZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Rect m_boundingRect;
    struct SceneSettings *m_fromSettings;
    struct SceneSettings *m_toSettings;
    SceneSettingsTransitionZone_Direction__Enum m_direction;
    
};

struct SceneSettingsTransitionZone {
    struct SceneSettingsTransitionZone__Class *klass;
    MonitorData *monitor;
    struct SceneSettingsTransitionZone__Fields fields;
};

struct __declspec(align(8)) AllContainer_1_SceneSettingsTransitionZone___Fields {
    struct List_1_SceneSettingsTransitionZone_ *m_objects;
};

struct AllContainer_1_SceneSettingsTransitionZone_ {
    struct AllContainer_1_SceneSettingsTransitionZone___Class *klass;
    MonitorData *monitor;
    struct AllContainer_1_SceneSettingsTransitionZone___Fields fields;
};

struct __declspec(align(8)) List_1_SceneSettingsTransitionZone___Fields {
    struct SceneSettingsTransitionZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SceneSettingsTransitionZone_ {
    struct List_1_SceneSettingsTransitionZone___Class *klass;
    MonitorData *monitor;
    struct List_1_SceneSettingsTransitionZone___Fields fields;
};

struct SceneSettingsTransitionZone__Array {
    struct SceneSettingsTransitionZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneSettingsTransitionZone *vector[32];
};

struct IEnumerator_1_SceneSettingsTransitionZone_ {
    struct IEnumerator_1_SceneSettingsTransitionZone___Class *klass;
    MonitorData *monitor;
};

struct SceneSettingsTransitionZone__Array__VTable {
};

struct SceneSettingsTransitionZone__Array__StaticFields {
};

struct SceneSettingsTransitionZone__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneSettingsTransitionZone__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneSettingsTransitionZone__Array__VTable vtable;
};

struct IEnumerator_1_SceneSettingsTransitionZone___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SceneSettingsTransitionZone___StaticFields {
};

struct IEnumerator_1_SceneSettingsTransitionZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SceneSettingsTransitionZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SceneSettingsTransitionZone___VTable vtable;
};

struct List_1_SceneSettingsTransitionZone___VTable {
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

struct List_1_SceneSettingsTransitionZone___StaticFields {
    struct SceneSettingsTransitionZone__Array *_emptyArray;
};

struct List_1_SceneSettingsTransitionZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SceneSettingsTransitionZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SceneSettingsTransitionZone___VTable vtable;
};

struct AllContainer_1_SceneSettingsTransitionZone___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AllContainer_1_SceneSettingsTransitionZone___StaticFields {
};

struct AllContainer_1_SceneSettingsTransitionZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AllContainer_1_SceneSettingsTransitionZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AllContainer_1_SceneSettingsTransitionZone___VTable vtable;
};

struct SceneSettingsTransitionZone_Direction__Enum__VTable {
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

struct SceneSettingsTransitionZone_Direction__Enum__StaticFields {
};

struct SceneSettingsTransitionZone_Direction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneSettingsTransitionZone_Direction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneSettingsTransitionZone_Direction__Enum__VTable vtable;
};

struct SceneSettingsTransitionZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Category;
};

struct SceneSettingsTransitionZone__StaticFields {
    struct AllContainer_1_SceneSettingsTransitionZone_ *All;
};

struct SceneSettingsTransitionZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneSettingsTransitionZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneSettingsTransitionZone__VTable vtable;
};

struct SetCameraSettingsAction__Fields {
    struct ActionMethod__Fields _;
    struct CameraSettingsAsset *Settings;
    struct Gradient *FogGradient;
    struct Gradient *MultiplyFogGradient;
    int32_t Range;
};

struct SetCameraSettingsAction {
    struct SetCameraSettingsAction__Class *klass;
    MonitorData *monitor;
    struct SetCameraSettingsAction__Fields fields;
};

struct SetCameraSettingsAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct SetCameraSettingsAction__StaticFields {
};

struct SetCameraSettingsAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetCameraSettingsAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetCameraSettingsAction__VTable vtable;
};

struct CameraSettings___VTable {
};

struct CameraSettings___StaticFields {
};

struct CameraSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSettings___VTable vtable;
};

struct VignettingSettings___VTable {
};

struct VignettingSettings___StaticFields {
};

struct VignettingSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VignettingSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VignettingSettings___VTable vtable;
};

struct NoiseSettings___VTable {
};

struct NoiseSettings___StaticFields {
};

struct NoiseSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NoiseSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NoiseSettings___VTable vtable;
};

struct ContrastSettings___VTable {
};

struct ContrastSettings___StaticFields {
};

struct ContrastSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ContrastSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ContrastSettings___VTable vtable;
};

struct DesaturationSettings___VTable {
};

struct DesaturationSettings___StaticFields {
};

struct DesaturationSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesaturationSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesaturationSettings___VTable vtable;
};

struct ColorCorrectionSettings___VTable {
};

struct ColorCorrectionSettings___StaticFields {
};

struct ColorCorrectionSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ColorCorrectionSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ColorCorrectionSettings___VTable vtable;
};

struct AnimationCurve___VTable {
};

struct AnimationCurve___StaticFields {
};

struct AnimationCurve___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationCurve___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationCurve___VTable vtable;
};

struct BloomSettings___VTable {
};

struct BloomSettings___StaticFields {
};

struct BloomSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BloomSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BloomSettings___VTable vtable;
};

struct EmissiveSettings___VTable {
};

struct EmissiveSettings___StaticFields {
};

struct EmissiveSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EmissiveSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EmissiveSettings___VTable vtable;
};

enum class VerticalCameraSettingsZone_Mode__Enum : int32_t {
    Vertical = 0x00000000,
    Horizontal = 0x00000001,
    Radial = 0x00000002,
};

struct VerticalCameraSettingsZone_Mode__Enum__Boxed {
    struct VerticalCameraSettingsZone_Mode__Enum__Class *klass;
    MonitorData *monitor;
    VerticalCameraSettingsZone_Mode__Enum value;
    
};

struct VerticalCameraSettingsZone__Fields {
    struct MonoBehaviour__Fields _;
    VerticalCameraSettingsZone_Mode__Enum mode;
    
    float Time;
    float Duration;
    struct CameraSettings *m_currentSettings;
    struct Rect m_bounds;
    float _Weight_k__BackingField;
    bool m_jobsQueued;
    struct List_1_VerticalCameraSettingsZone_CameraPostMetaData_ *Items;
};

struct VerticalCameraSettingsZone {
    struct VerticalCameraSettingsZone__Class *klass;
    MonitorData *monitor;
    struct VerticalCameraSettingsZone__Fields fields;
};

struct __declspec(align(8)) List_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields {
    struct VerticalCameraSettingsZone_CameraPostMetaData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_VerticalCameraSettingsZone_CameraPostMetaData_ {
    struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___Class *klass;
    MonitorData *monitor;
    struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields fields;
};

struct __declspec(align(8)) VerticalCameraSettingsZone_CameraPostMetaData__Fields {
    struct CameraSettings *CameraSettings;
    struct CameraSettingsAsset *CameraSettingsAsset;
    struct Gradient *Fog;
    struct Gradient *MultiplyFog;
    float FogRange;
    float Time;
};

struct VerticalCameraSettingsZone_CameraPostMetaData {
    struct VerticalCameraSettingsZone_CameraPostMetaData__Class *klass;
    MonitorData *monitor;
    struct VerticalCameraSettingsZone_CameraPostMetaData__Fields fields;
};

struct VerticalCameraSettingsZone_CameraPostMetaData__Array {
    struct VerticalCameraSettingsZone_CameraPostMetaData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerticalCameraSettingsZone_CameraPostMetaData *vector[32];
};

struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData_ {
    struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___Class *klass;
    MonitorData *monitor;
};

enum class PostProcessInfluencerOrder__Enum : int32_t {
    PostStateController = -1,
    CameraSettingsZones = 0x00000000,
    PostAnimator = 0x00000001,
};

struct PostProcessInfluencerOrder__Enum__Boxed {
    struct PostProcessInfluencerOrder__Enum__Class *klass;
    MonitorData *monitor;
    PostProcessInfluencerOrder__Enum value;
    
};

struct VerticalCameraSettingsZone_Mode__Enum__VTable {
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

struct VerticalCameraSettingsZone_Mode__Enum__StaticFields {
};

struct VerticalCameraSettingsZone_Mode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalCameraSettingsZone_Mode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalCameraSettingsZone_Mode__Enum__VTable vtable;
};

struct VerticalCameraSettingsZone_CameraPostMetaData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerticalCameraSettingsZone_CameraPostMetaData__StaticFields {
};

struct VerticalCameraSettingsZone_CameraPostMetaData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalCameraSettingsZone_CameraPostMetaData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalCameraSettingsZone_CameraPostMetaData__VTable vtable;
};

struct VerticalCameraSettingsZone_CameraPostMetaData__Array__VTable {
};

struct VerticalCameraSettingsZone_CameraPostMetaData__Array__StaticFields {
};

struct VerticalCameraSettingsZone_CameraPostMetaData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalCameraSettingsZone_CameraPostMetaData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalCameraSettingsZone_CameraPostMetaData__Array__VTable vtable;
};

struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields {
};

struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable vtable;
};

struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable {
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

struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields {
    struct VerticalCameraSettingsZone_CameraPostMetaData__Array *_emptyArray;
};

struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable vtable;
};

struct PostProcessInfluencerOrder__Enum__VTable {
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

struct PostProcessInfluencerOrder__Enum__StaticFields {
};

struct PostProcessInfluencerOrder__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PostProcessInfluencerOrder__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PostProcessInfluencerOrder__Enum__VTable vtable;
};

struct VerticalCameraSettingsZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Settings;
    VirtualInvokeData get_Weight;
    VirtualInvokeData get_PostInfluenceApplyOrder;
    VirtualInvokeData get_SettingsAssetForDebug;
    VirtualInvokeData UpdatePostInfluence;
    VirtualInvokeData PostUpdatePostInfluence;
};

struct VerticalCameraSettingsZone__StaticFields {
};

struct VerticalCameraSettingsZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalCameraSettingsZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalCameraSettingsZone__VTable vtable;
};

struct VerticalCameraSettingsZone_c {
    struct VerticalCameraSettingsZone_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData_ {
    struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields fields;
};

struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable {
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

struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields {
};

struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable vtable;
};

struct VerticalCameraSettingsZone_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerticalCameraSettingsZone_c__StaticFields {
    struct VerticalCameraSettingsZone_c *__9;
    struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData_ *__9__24_0;
};

struct VerticalCameraSettingsZone_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalCameraSettingsZone_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalCameraSettingsZone_c__VTable vtable;
};

enum class ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum : int32_t {
    MovePlayerToWave = 0x00000000,
    MovePlayerToEnd = 0x00000001,
    StartWave = 0x00000002,
    EndWave = 0x00000003,
    CollectedReward = 0x00000004,
};

struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Boxed {
    struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class *klass;
    MonitorData *monitor;
    ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum value;
    
};

struct ChallengeShrineAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum TriggerType;
    
};

struct ChallengeShrineAnimatorEntity {
    struct ChallengeShrineAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct ChallengeShrineAnimatorEntity__Fields fields;
};

struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__VTable {
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

struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__StaticFields {
};

struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__VTable vtable;
};

struct ChallengeShrineAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
};

struct ChallengeShrineAnimatorEntity__StaticFields {
};

struct ChallengeShrineAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChallengeShrineAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChallengeShrineAnimatorEntity__VTable vtable;
};

struct ChallengeShrineManager__Fields {
    struct MonoBehaviour__Fields _;
    struct ChallengeShrineManager_ChallengeWave__Array *ChallengeWaves;
    struct ChallengeShrineManager_AddTimeTrigger__Array *AdditionalTimeEnemyKillTriggers;
    struct MoonReference_1_ColosseumTimer_ *ColosseumTimer;
    struct MoonReference_1_UnityEngine_GameObject_ *InitialRewardObject;
    struct MoonReference_1_UnityEngine_GameObject_ *AlreadyCompletedRewardObject;
    struct MoonReference_1_UnityEngine_GameObject_ *ShrineUI;
    struct MoonReference_1_UnityEngine_Transform_ *RewardRoomPosition;
    struct MoonReference_1_UnityEngine_Transform_ *MainRoomPosition;
    struct DesiredUberStateBool *CollectedShrineRewardUberState;
    struct MoonTimeline *ChallengeFailedTimeline;
    struct MoonTimeline *NextWaveTimeline;
    struct MoonTimeline *ChallengeCompletedTimeline;
    struct MoonTimeline *TimeAddedTimeline;
    struct MoonTimeline *RewardCollectedTimeline;
    struct MessageProvider *WaveCompletedMessage;
    float m_challengeTimer;
    int32_t m_currentWave;
    bool m_challengeOngoing;
    bool m_timerPaused;
    struct List_1_ChallengeShrineTrigger_ *m_triggeredTriggers;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct ChallengeShrineManager {
    struct ChallengeShrineManager__Class *klass;
    MonitorData *monitor;
    struct ChallengeShrineManager__Fields fields;
};

struct ChallengeShrineManager_ChallengeWave {
    struct MoonReference_1_UnityEngine_Transform_ *StartPosition;
    float TimeToComplete;
    struct MessageProvider *WaveStartMessage;
    struct MoonReference_1_LegacyTrigger_ *OptionalEndWaveTrigger;
};

struct ChallengeShrineManager_ChallengeWave__Boxed {
    struct ChallengeShrineManager_ChallengeWave__Class *klass;
    MonitorData *monitor;
    struct ChallengeShrineManager_ChallengeWave fields;
};

struct __declspec(align(8)) MoonReference_1_LegacyTrigger___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_LegacyTrigger_ *m_cachedProxyType;
    struct LegacyTrigger *m_volatileValue;
};

}
