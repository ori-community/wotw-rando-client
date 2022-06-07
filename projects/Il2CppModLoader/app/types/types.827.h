namespace app {
struct __declspec(align(8)) Blend_1_UnityEngine_Vector3___Fields {
    struct Vector3 End;
    struct Vector3 Start;
    float Time;
    struct Func_2_Single_Single_ *m_ease;
    struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3_ *m_lerp;
};

struct Blend_1_UnityEngine_Vector3_ {
    struct Blend_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Blend_1_UnityEngine_Vector3___Fields fields;
};

struct BlendVector3__Fields {
    struct Blend_1_UnityEngine_Vector3___Fields _;
};

struct BlendVector3 {
    struct BlendVector3__Class *klass;
    MonitorData *monitor;
    struct BlendVector3__Fields fields;
};

struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3_ {
    struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___Fields fields;
};

struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___VTable {
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

struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___StaticFields {
};

struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3___VTable vtable;
};

struct Blend_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Blend_1_UnityEngine_Vector3___StaticFields {
};

struct Blend_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Blend_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Blend_1_UnityEngine_Vector3___VTable vtable;
};

struct BlendVector3__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BlendVector3__StaticFields {
};

struct BlendVector3__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BlendVector3__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BlendVector3__VTable vtable;
};

struct CameraController_UpdatePlaneFunc__Fields {
    struct MulticastDelegate__Fields _;
};

struct CameraController_UpdatePlaneFunc {
    struct CameraController_UpdatePlaneFunc__Class *klass;
    MonitorData *monitor;
    struct CameraController_UpdatePlaneFunc__Fields fields;
};

struct CameraController_UpdatePlaneFunc__VTable {
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

struct CameraController_UpdatePlaneFunc__StaticFields {
};

struct CameraController_UpdatePlaneFunc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraController_UpdatePlaneFunc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraController_UpdatePlaneFunc__VTable vtable;
};

struct CameraCrossFadeManager__Fields {
    struct MonoBehaviour__Fields _;
    bool m_isCrossFading;
    struct CameraController_1 *CameraControllerEnd;
    struct CameraController_1 *CameraControllerStart;
    float m_crossFadeTime;
    float m_crossFadeDuration;
    struct AnimationCurve *TweenCurve;
    struct UberPostProcessingCrossFade *UberPostProcessingCrossFade;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct CameraCrossFadeManager {
    struct CameraCrossFadeManager__Class *klass;
    MonitorData *monitor;
    struct CameraCrossFadeManager__Fields fields;
};

struct UberPostProcessingCrossFade__Fields {
    struct MonoBehaviour__Fields _;
    struct UberPostProcessingCrossFade_CameraInformation *FromInfo;
    struct UberPostProcessingCrossFade_CameraInformation *ToInfo;
    float TweenTime;
    struct Material *m_mat;
    struct RenderTexture *m_buf;
    bool m_bufferBeenUsed;
    int32_t m_frameCounter;
    int32_t m_currentFrame;
    float m_lastTweenTime;
    int32_t m_nextFrame;
    bool m_toggle;
    struct UberPostProcess *m_post;
    struct Shader *CrossFadeBlend;
};

struct UberPostProcessingCrossFade {
    struct UberPostProcessingCrossFade__Class *klass;
    MonitorData *monitor;
    struct UberPostProcessingCrossFade__Fields fields;
};

struct __declspec(align(8)) UberPostProcessingCrossFade_CameraInformation__Fields {
    struct Vector3 Position;
    struct Quaternion Rotation;
    struct CameraSettings *Settings;
    struct CameraAdditiveSettings *AdditiveSettings;
    struct Color__Array *FogGradient;
    struct Color__Array *MultiplyFogGradient;
    struct Vector3 Speed;
    float FieldOfView;
};

struct UberPostProcessingCrossFade_CameraInformation {
    struct UberPostProcessingCrossFade_CameraInformation__Class *klass;
    MonitorData *monitor;
    struct UberPostProcessingCrossFade_CameraInformation__Fields fields;
};

struct UberPostProcessingCrossFade_CameraInformation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberPostProcessingCrossFade_CameraInformation__StaticFields {
};

struct UberPostProcessingCrossFade_CameraInformation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberPostProcessingCrossFade_CameraInformation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberPostProcessingCrossFade_CameraInformation__VTable vtable;
};

struct UberPostProcessingCrossFade__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberPostProcessingCrossFade__StaticFields {
};

struct UberPostProcessingCrossFade__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberPostProcessingCrossFade__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberPostProcessingCrossFade__VTable vtable;
};

struct CameraCrossFadeManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct CameraCrossFadeManager__StaticFields {
    struct MoonGuid *CrossFadeMenuHack;
};

struct CameraCrossFadeManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraCrossFadeManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraCrossFadeManager__VTable vtable;
};

struct CameraInfluencePositionZone__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve *DistanceInfluenceCurve;
};

struct CameraInfluencePositionZone {
    struct CameraInfluencePositionZone__Class *klass;
    MonitorData *monitor;
    struct CameraInfluencePositionZone__Fields fields;
};

struct CameraInfluencePositionZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraInfluencePositionZone__StaticFields {
};

struct CameraInfluencePositionZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraInfluencePositionZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraInfluencePositionZone__VTable vtable;
};

struct CameraManager__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_CameraController_ *Cameras;
};

struct CameraManager {
    struct CameraManager__Class *klass;
    MonitorData *monitor;
    struct CameraManager__Fields fields;
};

struct __declspec(align(8)) List_1_CameraController___Fields {
    struct CameraController_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CameraController_ {
    struct List_1_CameraController___Class *klass;
    MonitorData *monitor;
    struct List_1_CameraController___Fields fields;
};

struct CameraController_1__Array {
    struct CameraController_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraController_1 *vector[32];
};

struct IEnumerator_1_CameraController_ {
    struct IEnumerator_1_CameraController___Class *klass;
    MonitorData *monitor;
};

struct CameraController_1__Array__VTable {
};

struct CameraController_1__Array__StaticFields {
};

struct CameraController_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraController_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraController_1__Array__VTable vtable;
};

struct IEnumerator_1_CameraController___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_CameraController___StaticFields {
};

struct IEnumerator_1_CameraController___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_CameraController___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_CameraController___VTable vtable;
};

struct List_1_CameraController___VTable {
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

struct List_1_CameraController___StaticFields {
    struct CameraController_1__Array *_emptyArray;
};

struct List_1_CameraController___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_CameraController___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_CameraController___VTable vtable;
};

struct CameraManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraManager__StaticFields {
};

struct CameraManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraManager__VTable vtable;
};

struct CameraOffsetController_c {
    struct CameraOffsetController_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_CameraOffsetController_OffsetLayer___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_CameraOffsetController_OffsetLayer_ {
    struct Comparison_1_CameraOffsetController_OffsetLayer___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_CameraOffsetController_OffsetLayer___Fields fields;
};

struct Comparison_1_CameraOffsetController_OffsetLayer___VTable {
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

struct Comparison_1_CameraOffsetController_OffsetLayer___StaticFields {
};

struct Comparison_1_CameraOffsetController_OffsetLayer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_CameraOffsetController_OffsetLayer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_CameraOffsetController_OffsetLayer___VTable vtable;
};

struct CameraOffsetController_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraOffsetController_c__StaticFields {
    struct CameraOffsetController_c *__9;
    struct Comparison_1_CameraOffsetController_OffsetLayer_ *__9__45_0;
};

struct CameraOffsetController_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraOffsetController_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraOffsetController_c__VTable vtable;
};

struct CameraScrollLock___VTable {
};

struct CameraScrollLock___StaticFields {
};

struct CameraScrollLock___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraScrollLock___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraScrollLock___VTable vtable;
};

enum class CameraSettingsZone_ZoneMode__Enum : int32_t {
    Single = 0x00000000,
    Gradient = 0x00000001,
};

struct CameraSettingsZone_ZoneMode__Enum__Boxed {
    struct CameraSettingsZone_ZoneMode__Enum__Class *klass;
    MonitorData *monitor;
    CameraSettingsZone_ZoneMode__Enum value;
    
};

enum class CameraSettingsZone_Direction__Enum : int32_t {
    Horizontal = 0x00000000,
    Vertical = 0x00000001,
};

struct CameraSettingsZone_Direction__Enum__Boxed {
    struct CameraSettingsZone_Direction__Enum__Class *klass;
    MonitorData *monitor;
    CameraSettingsZone_Direction__Enum value;
    
};

struct CameraSettingsZone__Fields {
    struct MonoBehaviour__Fields _;
    CameraSettingsZone_ZoneMode__Enum Mode;
    
    CameraSettingsZone_Direction__Enum GradientDirection;
    
    struct Condition_1 *Condition;
    struct CameraSettingsAsset *Settings;
    struct Gradient *FogGradient;
    struct Gradient *MultiplyFogGradient;
    float FogRange;
    struct CameraSettingsAsset *Settings2;
    struct Gradient *FogGradient2;
    struct Gradient *MultiplyFogGradient2;
    float FogRange2;
    float LeftPadding;
    float RightPadding;
    float TopPadding;
    float BottomPadding;
    float Duration;
    float AnimatedStrength;
    int32_t Priority;
    struct CameraSettings *m_settings;
    struct Rect m_area;
    float m_strength;
    bool m_isActive;
};

struct CameraSettingsZone {
    struct CameraSettingsZone__Class *klass;
    MonitorData *monitor;
    struct CameraSettingsZone__Fields fields;
};

struct __declspec(align(8)) List_1_CameraSettingsZone___Fields {
    struct CameraSettingsZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CameraSettingsZone_ {
    struct List_1_CameraSettingsZone___Class *klass;
    MonitorData *monitor;
    struct List_1_CameraSettingsZone___Fields fields;
};

struct CameraSettingsZone__Array {
    struct CameraSettingsZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraSettingsZone *vector[32];
};

struct IEnumerator_1_CameraSettingsZone_ {
    struct IEnumerator_1_CameraSettingsZone___Class *klass;
    MonitorData *monitor;
};

struct CameraSettingsZone__Array__VTable {
};

struct CameraSettingsZone__Array__StaticFields {
};

struct CameraSettingsZone__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSettingsZone__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSettingsZone__Array__VTable vtable;
};

struct IEnumerator_1_CameraSettingsZone___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_CameraSettingsZone___StaticFields {
};

struct IEnumerator_1_CameraSettingsZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_CameraSettingsZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_CameraSettingsZone___VTable vtable;
};

struct List_1_CameraSettingsZone___VTable {
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

struct List_1_CameraSettingsZone___StaticFields {
    struct CameraSettingsZone__Array *_emptyArray;
};

struct List_1_CameraSettingsZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_CameraSettingsZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_CameraSettingsZone___VTable vtable;
};

struct CameraSettingsZone_ZoneMode__Enum__VTable {
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

struct CameraSettingsZone_ZoneMode__Enum__StaticFields {
};

struct CameraSettingsZone_ZoneMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSettingsZone_ZoneMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSettingsZone_ZoneMode__Enum__VTable vtable;
};

struct CameraSettingsZone_Direction__Enum__VTable {
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

struct CameraSettingsZone_Direction__Enum__StaticFields {
};

struct CameraSettingsZone_Direction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSettingsZone_Direction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSettingsZone_Direction__Enum__VTable vtable;
};

struct CameraSettingsZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Category;
};

struct CameraSettingsZone__StaticFields {
    struct List_1_CameraSettingsZone_ *All;
};

struct CameraSettingsZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSettingsZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSettingsZone__VTable vtable;
};

struct CameraSettingsZoneAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve *AnimationCurve;
    struct CameraSettingsZone *CameraSettingsZone;
};

struct CameraSettingsZoneAnimator {
    struct CameraSettingsZoneAnimator__Class *klass;
    MonitorData *monitor;
    struct CameraSettingsZoneAnimator__Fields fields;
};

struct CameraSettingsZoneAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct CameraSettingsZoneAnimator__StaticFields {
};

struct CameraSettingsZoneAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSettingsZoneAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSettingsZoneAnimator__VTable vtable;
};

struct CameraSizeConstraint__Fields {
    struct MonoBehaviour__Fields _;
    float FixedWidth;
    struct Transform *CameraOffset;
    struct Camera *Camera;
};

struct CameraSizeConstraint {
    struct CameraSizeConstraint__Class *klass;
    MonitorData *monitor;
    struct CameraSizeConstraint__Fields fields;
};

struct CameraSizeConstraint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraSizeConstraint__StaticFields {
};

struct CameraSizeConstraint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSizeConstraint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSizeConstraint__VTable vtable;
};

struct CameraSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraCrossFadeManager *CrossFadeManager;
    struct UberPostProcessingCrossFade *UberPostProcessingCrossFade;
    struct GUICamera *GUICamera;
};

struct CameraSystem {
    struct CameraSystem__Class *klass;
    MonitorData *monitor;
    struct CameraSystem__Fields fields;
};

struct GUICamera__Fields {
    struct MonoBehaviour__Fields _;
    struct Camera *Camera;
};

struct GUICamera {
    struct GUICamera__Class *klass;
    MonitorData *monitor;
    struct GUICamera__Fields fields;
};

struct GUICamera__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GUICamera__StaticFields {
};

struct GUICamera__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUICamera__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUICamera__VTable vtable;
};

struct CameraSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraSystem__StaticFields {
};

struct CameraSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraSystem__VTable vtable;
};

struct CameraTarget_c {
    struct CameraTarget_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_CameraTarget_TargetLayer___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_CameraTarget_TargetLayer_ {
    struct Comparison_1_CameraTarget_TargetLayer___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_CameraTarget_TargetLayer___Fields fields;
};

struct Comparison_1_CameraTarget_TargetLayer___VTable {
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

struct Comparison_1_CameraTarget_TargetLayer___StaticFields {
};

struct Comparison_1_CameraTarget_TargetLayer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_CameraTarget_TargetLayer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_CameraTarget_TargetLayer___VTable vtable;
};

struct CameraTarget_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraTarget_c__StaticFields {
    struct CameraTarget_c *__9;
    struct Comparison_1_CameraTarget_TargetLayer_ *__9__10_0;
};

struct CameraTarget_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraTarget_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraTarget_c__VTable vtable;
};

struct CurrentCameraTransformProvider__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
};

}
