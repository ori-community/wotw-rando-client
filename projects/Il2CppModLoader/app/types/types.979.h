namespace app {
struct List_1_UberShaderComponent___StaticFields {
    struct UberShaderComponent__Array *_emptyArray;
};

struct List_1_UberShaderComponent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberShaderComponent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberShaderComponent___VTable vtable;
};

struct LightCanvas__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsSelectable;
    VirtualInvokeData GetCustomBounds;
    VirtualInvokeData get_Category;
    VirtualInvokeData DrawSceneWarning;
};

struct LightCanvas__StaticFields {
    struct Mesh *CanvasMesh;
    struct Material *CanvasHandlesMaterial;
    bool DoTimelineslicedSetPos;
};

struct LightCanvas__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightCanvas__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightCanvas__VTable vtable;
};

struct LightCanvas__Array__VTable {
};

struct LightCanvas__Array__StaticFields {
};

struct LightCanvas__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightCanvas__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightCanvas__Array__VTable vtable;
};

struct LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__VTable {
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

struct LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__StaticFields {
};

struct LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__VTable vtable;
};

struct IMoonShadingZoneTarget__VTable {
    VirtualInvokeData get_PointForLightCanvasShadingZone;
    VirtualInvokeData get_RendererForMoonShadingZone;
};

struct IMoonShadingZoneTarget__StaticFields {
};

struct IMoonShadingZoneTarget__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonShadingZoneTarget__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonShadingZoneTarget__VTable vtable;
};

struct LightCanvasShadingZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnTargetEnter;
    VirtualInvokeData OnTargetStay;
    VirtualInvokeData OnTargetExit;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData get_ShadingZoneId;
    VirtualInvokeData get_IsDirtyEditor;
    VirtualInvokeData set_IsDirtyEditor;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnEditorUpdate;
};

struct LightCanvasShadingZone__StaticFields {
    int32_t s_selectedId;
    bool s_isSelected;
};

struct LightCanvasShadingZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightCanvasShadingZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightCanvasShadingZone__VTable vtable;
};

struct LightCanvasShadingZoneHierarchyTarget__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_ShadingZoneRendererTarget_ *m_renderersForLightCanvasShadingZone;
    int32_t m_childCount;
};

struct LightCanvasShadingZoneHierarchyTarget {
    struct LightCanvasShadingZoneHierarchyTarget__Class *klass;
    MonitorData *monitor;
    struct LightCanvasShadingZoneHierarchyTarget__Fields fields;
};

struct __declspec(align(8)) List_1_ShadingZoneRendererTarget___Fields {
    struct ShadingZoneRendererTarget__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ShadingZoneRendererTarget_ {
    struct List_1_ShadingZoneRendererTarget___Class *klass;
    MonitorData *monitor;
    struct List_1_ShadingZoneRendererTarget___Fields fields;
};

struct __declspec(align(8)) ShadingZoneRendererTarget__Fields {
    struct Renderer *m_renderer;
    struct Vector3 m_localCenter;
    struct Transform *m_targetTransform;
};

struct ShadingZoneRendererTarget {
    struct ShadingZoneRendererTarget__Class *klass;
    MonitorData *monitor;
    struct ShadingZoneRendererTarget__Fields fields;
};

struct ShadingZoneRendererTarget__Array {
    struct ShadingZoneRendererTarget__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ShadingZoneRendererTarget *vector[32];
};

struct IEnumerator_1_ShadingZoneRendererTarget_ {
    struct IEnumerator_1_ShadingZoneRendererTarget___Class *klass;
    MonitorData *monitor;
};

struct ShadingZoneRendererTarget__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_PointForLightCanvasShadingZone;
    VirtualInvokeData get_RendererForMoonShadingZone;
};

struct ShadingZoneRendererTarget__StaticFields {
};

struct ShadingZoneRendererTarget__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShadingZoneRendererTarget__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShadingZoneRendererTarget__VTable vtable;
};

struct ShadingZoneRendererTarget__Array__VTable {
};

struct ShadingZoneRendererTarget__Array__StaticFields {
};

struct ShadingZoneRendererTarget__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShadingZoneRendererTarget__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShadingZoneRendererTarget__Array__VTable vtable;
};

struct IEnumerator_1_ShadingZoneRendererTarget___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ShadingZoneRendererTarget___StaticFields {
};

struct IEnumerator_1_ShadingZoneRendererTarget___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ShadingZoneRendererTarget___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ShadingZoneRendererTarget___VTable vtable;
};

struct List_1_ShadingZoneRendererTarget___VTable {
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

struct List_1_ShadingZoneRendererTarget___StaticFields {
    struct ShadingZoneRendererTarget__Array *_emptyArray;
};

struct List_1_ShadingZoneRendererTarget___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ShadingZoneRendererTarget___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ShadingZoneRendererTarget___VTable vtable;
};

struct LightCanvasShadingZoneHierarchyTarget__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LightCanvasShadingZoneHierarchyTarget__StaticFields {
};

struct LightCanvasShadingZoneHierarchyTarget__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightCanvasShadingZoneHierarchyTarget__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightCanvasShadingZoneHierarchyTarget__VTable vtable;
};

struct __declspec(align(8)) MoonShadingZoneController__Fields {
    struct List_1_MoonShadingZoneController_TargetData_ *m_allTargets;
    struct HashSet_1_UnityEngine_Renderer_ *m_allAffectedRenderers;
    int32_t m_insideTargetsIndex;
};

struct MoonShadingZoneController {
    struct MoonShadingZoneController__Class *klass;
    MonitorData *monitor;
    struct MoonShadingZoneController__Fields fields;
};

struct __declspec(align(8)) List_1_MoonShadingZoneController_TargetData___Fields {
    struct MoonShadingZoneController_TargetData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MoonShadingZoneController_TargetData_ {
    struct List_1_MoonShadingZoneController_TargetData___Class *klass;
    MonitorData *monitor;
    struct List_1_MoonShadingZoneController_TargetData___Fields fields;
};

struct __declspec(align(8)) MoonShadingZoneController_TargetData__Fields {
    struct IMoonShadingZoneTarget *Target;
    struct IMoonShadingZone *Zone;
    float FadeTimer;
    bool WasInside;
};

struct MoonShadingZoneController_TargetData {
    struct MoonShadingZoneController_TargetData__Class *klass;
    MonitorData *monitor;
    struct MoonShadingZoneController_TargetData__Fields fields;
};

struct IMoonShadingZone {
    struct IMoonShadingZone__Class *klass;
    MonitorData *monitor;
};

struct MoonShadingZoneController_TargetData__Array {
    struct MoonShadingZoneController_TargetData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonShadingZoneController_TargetData *vector[32];
};

struct IEnumerator_1_MoonShadingZoneController_TargetData_ {
    struct IEnumerator_1_MoonShadingZoneController_TargetData___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_IMoonShadingZone___Fields {
    struct IMoonShadingZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IMoonShadingZone_ {
    struct List_1_IMoonShadingZone___Class *klass;
    MonitorData *monitor;
    struct List_1_IMoonShadingZone___Fields fields;
};

struct IMoonShadingZone__Array {
    struct IMoonShadingZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IMoonShadingZone *vector[32];
};

struct IEnumerator_1_IMoonShadingZone_ {
    struct IEnumerator_1_IMoonShadingZone___Class *klass;
    MonitorData *monitor;
};

struct IMoonShadingZone__VTable {
    VirtualInvokeData OnTargetEnter;
    VirtualInvokeData OnTargetStay;
    VirtualInvokeData OnTargetExit;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData get_ShadingZoneId;
    VirtualInvokeData get_IsDirtyEditor;
    VirtualInvokeData set_IsDirtyEditor;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnEditorUpdate;
};

struct IMoonShadingZone__StaticFields {
};

struct IMoonShadingZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonShadingZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonShadingZone__VTable vtable;
};

struct MoonShadingZoneController_TargetData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonShadingZoneController_TargetData__StaticFields {
};

struct MoonShadingZoneController_TargetData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonShadingZoneController_TargetData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonShadingZoneController_TargetData__VTable vtable;
};

struct MoonShadingZoneController_TargetData__Array__VTable {
};

struct MoonShadingZoneController_TargetData__Array__StaticFields {
};

struct MoonShadingZoneController_TargetData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonShadingZoneController_TargetData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonShadingZoneController_TargetData__Array__VTable vtable;
};

struct IEnumerator_1_MoonShadingZoneController_TargetData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MoonShadingZoneController_TargetData___StaticFields {
};

struct IEnumerator_1_MoonShadingZoneController_TargetData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MoonShadingZoneController_TargetData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_MoonShadingZoneController_TargetData___VTable vtable;
};

struct List_1_MoonShadingZoneController_TargetData___VTable {
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

struct List_1_MoonShadingZoneController_TargetData___StaticFields {
    struct MoonShadingZoneController_TargetData__Array *_emptyArray;
};

struct List_1_MoonShadingZoneController_TargetData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MoonShadingZoneController_TargetData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_MoonShadingZoneController_TargetData___VTable vtable;
};

struct IMoonShadingZone__Array__VTable {
};

struct IMoonShadingZone__Array__StaticFields {
};

struct IMoonShadingZone__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonShadingZone__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonShadingZone__Array__VTable vtable;
};

struct IEnumerator_1_IMoonShadingZone___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_IMoonShadingZone___StaticFields {
};

struct IEnumerator_1_IMoonShadingZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_IMoonShadingZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_IMoonShadingZone___VTable vtable;
};

struct List_1_IMoonShadingZone___VTable {
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

struct List_1_IMoonShadingZone___StaticFields {
    struct IMoonShadingZone__Array *_emptyArray;
};

struct List_1_IMoonShadingZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_IMoonShadingZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_IMoonShadingZone___VTable vtable;
};

struct MoonShadingZoneController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
};

struct MoonShadingZoneController__StaticFields {
    struct HashSet_1_System_Int32_ *ForceReenterRenderers;
    bool s_registered;
    bool s_registeredEditor;
    struct MoonShadingZoneController *s_instance;
    struct List_1_IMoonShadingZone_ *All;
};

struct MoonShadingZoneController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonShadingZoneController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonShadingZoneController__VTable vtable;
};

struct MirrorData__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_MirroringData_ *mirrorData;
};

struct MirrorData {
    struct MirrorData__Class *klass;
    MonitorData *monitor;
    struct MirrorData__Fields fields;
};

struct __declspec(align(8)) List_1_MirroringData___Fields {
    struct MirroringData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MirroringData_ {
    struct List_1_MirroringData___Class *klass;
    MonitorData *monitor;
    struct List_1_MirroringData___Fields fields;
};

enum class MirroringData_Axis__Enum : int32_t {
    none = 0x00000000,
    mirror = 0x00000001,
    X = 0x00000002,
    Y = 0x00000003,
    Z = 0x00000004,
    swapType1 = 0x00000005,
    swapType2 = 0x00000006,
    swapType3 = 0x00000007,
};

struct MirroringData_Axis__Enum__Boxed {
    struct MirroringData_Axis__Enum__Class *klass;
    MonitorData *monitor;
    MirroringData_Axis__Enum value;
    
};

struct __declspec(align(8)) MirroringData__Fields {
    struct String *jointName;
    struct String *mirrorName;
    struct String *path;
    struct String *mirrorPath;
    struct AnimationCurve *curve;
    struct AnimationCurve *mirrorCurve;
    MirroringData_Axis__Enum axis;
    
};

struct MirroringData {
    struct MirroringData__Class *klass;
    MonitorData *monitor;
    struct MirroringData__Fields fields;
};

struct MirroringData__Array {
    struct MirroringData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MirroringData *vector[32];
};

struct IEnumerator_1_MirroringData_ {
    struct IEnumerator_1_MirroringData___Class *klass;
    MonitorData *monitor;
};

struct MirroringData_Axis__Enum__VTable {
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

struct MirroringData_Axis__Enum__StaticFields {
};

struct MirroringData_Axis__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MirroringData_Axis__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MirroringData_Axis__Enum__VTable vtable;
};

struct MirroringData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MirroringData__StaticFields {
};

struct MirroringData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MirroringData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MirroringData__VTable vtable;
};

struct MirroringData__Array__VTable {
};

struct MirroringData__Array__StaticFields {
};

struct MirroringData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MirroringData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MirroringData__Array__VTable vtable;
};

struct IEnumerator_1_MirroringData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MirroringData___StaticFields {
};

struct IEnumerator_1_MirroringData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MirroringData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_MirroringData___VTable vtable;
};

struct List_1_MirroringData___VTable {
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

struct List_1_MirroringData___StaticFields {
    struct MirroringData__Array *_emptyArray;
};

struct List_1_MirroringData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MirroringData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_MirroringData___VTable vtable;
};

struct MirrorData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MirrorData__StaticFields {
};

struct MirrorData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MirrorData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MirrorData__VTable vtable;
};

struct __declspec(align(8)) List_1_NegativeScaleFixer_TransformAndWorldMatrix___Fields {
    struct NegativeScaleFixer_TransformAndWorldMatrix__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_NegativeScaleFixer_TransformAndWorldMatrix_ {
    struct List_1_NegativeScaleFixer_TransformAndWorldMatrix___Class *klass;
    MonitorData *monitor;
    struct List_1_NegativeScaleFixer_TransformAndWorldMatrix___Fields fields;
};

struct __declspec(align(8)) NegativeScaleFixer_TransformAndWorldMatrix__Fields {
    struct Transform *_Transform_k__BackingField;
    struct Vector3 worldPos;
    struct Quaternion worldRot;
};

struct NegativeScaleFixer_TransformAndWorldMatrix {
    struct NegativeScaleFixer_TransformAndWorldMatrix__Class *klass;
    MonitorData *monitor;
    struct NegativeScaleFixer_TransformAndWorldMatrix__Fields fields;
};

struct NegativeScaleFixer_TransformAndWorldMatrix__Array {
    struct NegativeScaleFixer_TransformAndWorldMatrix__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NegativeScaleFixer_TransformAndWorldMatrix *vector[32];
};

struct IEnumerator_1_NegativeScaleFixer_TransformAndWorldMatrix_ {
    struct IEnumerator_1_NegativeScaleFixer_TransformAndWorldMatrix___Class *klass;
    MonitorData *monitor;
};

struct NegativeScaleFixer_TransformAndWorldMatrix__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NegativeScaleFixer_TransformAndWorldMatrix__StaticFields {
};

struct NegativeScaleFixer_TransformAndWorldMatrix__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NegativeScaleFixer_TransformAndWorldMatrix__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NegativeScaleFixer_TransformAndWorldMatrix__VTable vtable;
};

struct NegativeScaleFixer_TransformAndWorldMatrix__Array__VTable {
};

struct NegativeScaleFixer_TransformAndWorldMatrix__Array__StaticFields {
};

struct NegativeScaleFixer_TransformAndWorldMatrix__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NegativeScaleFixer_TransformAndWorldMatrix__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NegativeScaleFixer_TransformAndWorldMatrix__Array__VTable vtable;
};

struct IEnumerator_1_NegativeScaleFixer_TransformAndWorldMatrix___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_NegativeScaleFixer_TransformAndWorldMatrix___StaticFields {
};

struct IEnumerator_1_NegativeScaleFixer_TransformAndWorldMatrix___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_NegativeScaleFixer_TransformAndWorldMatrix___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_NegativeScaleFixer_TransformAndWorldMatrix___VTable vtable;
};

struct List_1_NegativeScaleFixer_TransformAndWorldMatrix___VTable {
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

struct List_1_NegativeScaleFixer_TransformAndWorldMatrix___StaticFields {
    struct NegativeScaleFixer_TransformAndWorldMatrix__Array *_emptyArray;
};

struct List_1_NegativeScaleFixer_TransformAndWorldMatrix___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_NegativeScaleFixer_TransformAndWorldMatrix___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_NegativeScaleFixer_TransformAndWorldMatrix___VTable vtable;
};

struct NegativeScaleFixer_c {
    struct NegativeScaleFixer_c__Class *klass;
    MonitorData *monitor;
};

struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___Fields {
    struct MulticastDelegate__Fields _;
};

}
