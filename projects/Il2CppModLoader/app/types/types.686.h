namespace app {
struct VelocityBezierSpline_VelocityBezierSplinePoint__Array {
    struct VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VelocityBezierSpline_VelocityBezierSplinePoint *vector[32];
};

struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint_ {
    struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) VelocityBezierSpline_VelocityBezierSplineSegment__Fields {
    struct Vector3 m_startpos;
    struct Vector3 m_endpos;
    struct Vector3 m_startctrl;
    struct Vector3 m_endctrl;
    float m_startlen;
    float m_endlen;
    float m_length;
    BaseSpline_SplineSegmentType__Enum m_type;
    
    struct Single__Array *m_params;
    struct Single__Array *m_precomps;
    struct Vector3 start_speed;
    struct Vector3 end_speed;
    struct Vector3 start_vc;
    struct Vector3 end_vc;
};

struct VelocityBezierSpline_VelocityBezierSplineSegment {
    struct VelocityBezierSpline_VelocityBezierSplineSegment__Class *klass;
    MonitorData *monitor;
    struct VelocityBezierSpline_VelocityBezierSplineSegment__Fields fields;
};

struct VelocityBezierSpline_VelocityBezierSplineSegment__Array {
    struct VelocityBezierSpline_VelocityBezierSplineSegment__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VelocityBezierSpline_VelocityBezierSplineSegment *vector[32];
};

struct __declspec(align(8)) BaseSpline_SplineIterator__Fields {
    struct Transform *m_transform;
    struct BaseSpline *m_spline;
    int32_t m_segidx;
    int32_t m_startidx;
    int32_t m_endidx;
    bool m_reverse;
    bool m_back;
    bool m_onceout;
    float m_segpos;
    int32_t loops;
    int32_t old_seg;
    struct Matrix4x4 matrix;
};

struct BaseSpline_SplineIterator {
    struct BaseSpline_SplineIterator__Class *klass;
    MonitorData *monitor;
    struct BaseSpline_SplineIterator__Fields fields;
};

struct SplineEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct SplineEventHandler {
    struct SplineEventHandler__Class *klass;
    MonitorData *monitor;
    struct SplineEventHandler__Fields fields;
};

struct IMoonType_1_WaterCurrentZone___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_WaterCurrentZone___StaticFields {
};

struct IMoonType_1_WaterCurrentZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_WaterCurrentZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_WaterCurrentZone___VTable vtable;
};

struct EnemyNoGoZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_ShouldUpdateWhileDisabled;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData OnEnableRuntime;
    VirtualInvokeData OnDisableRuntime;
    VirtualInvokeData OnZoneUpdate;
    VirtualInvokeData get_Category_1;
    VirtualInvokeData get_ShouldSerialize;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
    VirtualInvokeData AwakeInternal;
    VirtualInvokeData DestroyInternal;
    VirtualInvokeData OnEnableEditor;
    VirtualInvokeData OnDisableEditor;
    VirtualInvokeData EditorUpdate;
    VirtualInvokeData ShouldTriggerZoneChange;
    VirtualInvokeData OnZoneChange;
    VirtualInvokeData get_EditorBounds;
    VirtualInvokeData set_EditorBounds;
    VirtualInvokeData RefreshBounds;
};

struct EnemyNoGoZone__StaticFields {
    struct Color RectangleFillColor;
    struct Color RectangleOutlineColor;
    struct Color RectangleSelectedFillColor;
    struct Color RectangleSelectedOutlineColor;
};

struct EnemyNoGoZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnemyNoGoZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnemyNoGoZone__VTable vtable;
};

struct BaseZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_ShouldUpdateWhileDisabled;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData get_Category_1;
    VirtualInvokeData get_ShouldSerialize;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
    VirtualInvokeData AwakeInternal;
    VirtualInvokeData DestroyInternal;
    VirtualInvokeData OnEnableEditor;
    VirtualInvokeData OnDisableEditor;
    VirtualInvokeData EditorUpdate;
    VirtualInvokeData ShouldTriggerZoneChange;
    VirtualInvokeData OnZoneChange;
};

struct BaseZone__StaticFields {
};

struct BaseZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseZone__VTable vtable;
};

struct RectangleGameplayZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_ShouldUpdateWhileDisabled;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_Category_1;
    VirtualInvokeData get_ShouldSerialize;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
    VirtualInvokeData AwakeInternal;
    VirtualInvokeData DestroyInternal;
    VirtualInvokeData OnEnableEditor;
    VirtualInvokeData OnDisableEditor;
    VirtualInvokeData EditorUpdate;
    VirtualInvokeData ShouldTriggerZoneChange;
    VirtualInvokeData OnZoneChange;
    VirtualInvokeData get_EditorBounds;
    VirtualInvokeData set_EditorBounds;
    VirtualInvokeData RefreshBounds;
};

struct RectangleGameplayZone__StaticFields {
};

struct RectangleGameplayZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RectangleGameplayZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RectangleGameplayZone__VTable vtable;
};

struct WaterCurrentZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_ShouldUpdateWhileDisabled;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData OnEnableRuntime;
    VirtualInvokeData OnDisableRuntime;
    VirtualInvokeData OnZoneUpdate;
    VirtualInvokeData get_Category_1;
    VirtualInvokeData get_ShouldSerialize;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
    VirtualInvokeData AwakeInternal;
    VirtualInvokeData DestroyInternal;
    VirtualInvokeData OnEnableEditor;
    VirtualInvokeData OnDisableEditor;
    VirtualInvokeData EditorUpdate;
    VirtualInvokeData ShouldTriggerZoneChange;
    VirtualInvokeData OnZoneChange;
    VirtualInvokeData get_EditorBounds;
    VirtualInvokeData set_EditorBounds;
    VirtualInvokeData RefreshBounds;
    VirtualInvokeData GetRtpcValue;
};

struct WaterCurrentZone__StaticFields {
};

struct WaterCurrentZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaterCurrentZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaterCurrentZone__VTable vtable;
};

struct WaterCurrentZone___VTable {
};

struct WaterCurrentZone___StaticFields {
};

struct WaterCurrentZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaterCurrentZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaterCurrentZone___VTable vtable;
};

struct MoonReference_1_WaterCurrentZone___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_WaterCurrentZone___StaticFields {
};

struct MoonReference_1_WaterCurrentZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_WaterCurrentZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_WaterCurrentZone___VTable vtable;
};

struct IMoonType_1_VelocityBezierSplineComponent___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_VelocityBezierSplineComponent___StaticFields {
};

struct IMoonType_1_VelocityBezierSplineComponent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_VelocityBezierSplineComponent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_VelocityBezierSplineComponent___VTable vtable;
};

struct BaseSpline_SplineWrapMode__Enum__VTable {
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

struct BaseSpline_SplineWrapMode__Enum__StaticFields {
};

struct BaseSpline_SplineWrapMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseSpline_SplineWrapMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseSpline_SplineWrapMode__Enum__VTable vtable;
};

struct BaseSpline_SplineReparamType__Enum__VTable {
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

struct BaseSpline_SplineReparamType__Enum__StaticFields {
};

struct BaseSpline_SplineReparamType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseSpline_SplineReparamType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseSpline_SplineReparamType__Enum__VTable vtable;
};

struct BaseSpline_SplinePointType__Enum__VTable {
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

struct BaseSpline_SplinePointType__Enum__StaticFields {
};

struct BaseSpline_SplinePointType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseSpline_SplinePointType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseSpline_SplinePointType__Enum__VTable vtable;
};

struct BezierSpline_BezierSplinePoint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BezierSpline_BezierSplinePoint__StaticFields {
};

struct BezierSpline_BezierSplinePoint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BezierSpline_BezierSplinePoint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BezierSpline_BezierSplinePoint__VTable vtable;
};

struct BezierSpline_BezierSplinePoint__Array__VTable {
};

struct BezierSpline_BezierSplinePoint__Array__StaticFields {
};

struct BezierSpline_BezierSplinePoint__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BezierSpline_BezierSplinePoint__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BezierSpline_BezierSplinePoint__Array__VTable vtable;
};

struct IEnumerator_1_BezierSpline_BezierSplinePoint___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_BezierSpline_BezierSplinePoint___StaticFields {
};

struct IEnumerator_1_BezierSpline_BezierSplinePoint___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_BezierSpline_BezierSplinePoint___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_BezierSpline_BezierSplinePoint___VTable vtable;
};

struct List_1_BezierSpline_BezierSplinePoint___VTable {
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

struct List_1_BezierSpline_BezierSplinePoint___StaticFields {
    struct BezierSpline_BezierSplinePoint__Array *_emptyArray;
};

struct List_1_BezierSpline_BezierSplinePoint___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_BezierSpline_BezierSplinePoint___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_BezierSpline_BezierSplinePoint___VTable vtable;
};

struct BaseSpline_SplineSegmentType__Enum__VTable {
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

struct BaseSpline_SplineSegmentType__Enum__StaticFields {
};

struct BaseSpline_SplineSegmentType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseSpline_SplineSegmentType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseSpline_SplineSegmentType__Enum__VTable vtable;
};

struct BezierSpline_BezierSplineSegment__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BezierSpline_BezierSplineSegment__StaticFields {
};

struct BezierSpline_BezierSplineSegment__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BezierSpline_BezierSplineSegment__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BezierSpline_BezierSplineSegment__VTable vtable;
};

struct BezierSpline_BezierSplineSegment__Array__VTable {
};

struct BezierSpline_BezierSplineSegment__Array__StaticFields {
};

struct BezierSpline_BezierSplineSegment__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BezierSpline_BezierSplineSegment__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BezierSpline_BezierSplineSegment__Array__VTable vtable;
};

struct BezierSpline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetPointCount;
    VirtualInvokeData GetSegmentCount;
    VirtualInvokeData GetPoint;
    VirtualInvokeData GetSegmentLength;
    VirtualInvokeData GetSegmentStartLength;
    VirtualInvokeData GetSegmentEndLength;
    VirtualInvokeData FindSegment;
    VirtualInvokeData GetDrawPosition;
    VirtualInvokeData GetPosition;
    VirtualInvokeData GetTangent;
    VirtualInvokeData GetNormal;
    VirtualInvokeData GetSpeed;
    VirtualInvokeData GetVelocity;
    VirtualInvokeData Rebuild;
    VirtualInvokeData GetColor;
    VirtualInvokeData GetHighlight;
    VirtualInvokeData GetAction;
    VirtualInvokeData PopAction;
};

struct BezierSpline__StaticFields {
};

struct BezierSpline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BezierSpline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BezierSpline__VTable vtable;
};

struct BaseSpline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData __unknown_12;
    VirtualInvokeData Rebuild;
    VirtualInvokeData GetColor;
    VirtualInvokeData GetHighlight;
    VirtualInvokeData GetAction;
    VirtualInvokeData PopAction;
};

struct BaseSpline__StaticFields {
};

struct BaseSpline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseSpline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseSpline__VTable vtable;
};

struct VelocityBezierSpline_VelocityBezierSplinePoint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VelocityBezierSpline_VelocityBezierSplinePoint__StaticFields {
};

struct VelocityBezierSpline_VelocityBezierSplinePoint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityBezierSpline_VelocityBezierSplinePoint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityBezierSpline_VelocityBezierSplinePoint__VTable vtable;
};

struct VelocityBezierSpline_VelocityBezierSplinePoint__Array__VTable {
};

struct VelocityBezierSpline_VelocityBezierSplinePoint__Array__StaticFields {
};

struct VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityBezierSpline_VelocityBezierSplinePoint__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityBezierSpline_VelocityBezierSplinePoint__Array__VTable vtable;
};

struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields {
};

struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable vtable;
};

struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable {
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

struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields {
    struct VelocityBezierSpline_VelocityBezierSplinePoint__Array *_emptyArray;
};

struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint___VTable vtable;
};

struct VelocityBezierSpline_VelocityBezierSplineSegment__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VelocityBezierSpline_VelocityBezierSplineSegment__StaticFields {
};

struct VelocityBezierSpline_VelocityBezierSplineSegment__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityBezierSpline_VelocityBezierSplineSegment__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityBezierSpline_VelocityBezierSplineSegment__VTable vtable;
};

struct VelocityBezierSpline_VelocityBezierSplineSegment__Array__VTable {
};

struct VelocityBezierSpline_VelocityBezierSplineSegment__Array__StaticFields {
};

struct VelocityBezierSpline_VelocityBezierSplineSegment__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityBezierSpline_VelocityBezierSplineSegment__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityBezierSpline_VelocityBezierSplineSegment__Array__VTable vtable;
};

struct VelocityBezierSpline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetPointCount;
    VirtualInvokeData GetSegmentCount;
    VirtualInvokeData GetPoint;
    VirtualInvokeData GetSegmentLength;
    VirtualInvokeData GetSegmentStartLength;
    VirtualInvokeData GetSegmentEndLength;
    VirtualInvokeData FindSegment;
    VirtualInvokeData GetDrawPosition;
    VirtualInvokeData GetPosition;
    VirtualInvokeData GetTangent;
    VirtualInvokeData GetNormal;
    VirtualInvokeData GetSpeed;
    VirtualInvokeData GetVelocity;
    VirtualInvokeData Rebuild;
    VirtualInvokeData GetColor;
    VirtualInvokeData GetHighlight;
    VirtualInvokeData GetAction;
    VirtualInvokeData PopAction;
};

struct VelocityBezierSpline__StaticFields {
};

struct VelocityBezierSpline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityBezierSpline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityBezierSpline__VTable vtable;
};

struct BaseSpline_SplineIterator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BaseSpline_SplineIterator__StaticFields {
};

struct BaseSpline_SplineIterator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseSpline_SplineIterator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseSpline_SplineIterator__VTable vtable;
};

struct SplineEventHandler__VTable {
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

struct SplineEventHandler__StaticFields {
};

struct SplineEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SplineEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SplineEventHandler__VTable vtable;
};

struct VelocityBezierSplineComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData InsertPoint;
    VirtualInvokeData RemovePoint;
};

struct VelocityBezierSplineComponent__StaticFields {
};

struct VelocityBezierSplineComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityBezierSplineComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityBezierSplineComponent__VTable vtable;
};

struct VelocityBezierSplineComponent___VTable {
};

struct VelocityBezierSplineComponent___StaticFields {
};

struct VelocityBezierSplineComponent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityBezierSplineComponent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityBezierSplineComponent___VTable vtable;
};

struct MoonReference_1_VelocityBezierSplineComponent___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_VelocityBezierSplineComponent___StaticFields {
};

struct MoonReference_1_VelocityBezierSplineComponent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_VelocityBezierSplineComponent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_VelocityBezierSplineComponent___VTable vtable;
};

struct KwolokBossUnderwaterPullBehaviour_State__Enum__VTable {
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

}
