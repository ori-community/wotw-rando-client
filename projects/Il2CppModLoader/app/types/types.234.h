namespace app {
struct SceneWarningManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SceneWarningManager__StaticFields {
    struct List_1_ISceneWarningSource_ *s_allWarningSources;
};

struct SceneWarningManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneWarningManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneWarningManager__VTable vtable;
};

struct SelectionUtility {
    struct SelectionUtility__Class *klass;
    MonitorData *monitor;
};

struct SelectionUtility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SelectionUtility__StaticFields {
    struct List_1_System_Action_ *SelectionChangeClients;
};

struct SelectionUtility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SelectionUtility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SelectionUtility__VTable vtable;
};

struct SmartGUIText {
    struct SmartGUIText__Class *klass;
    MonitorData *monitor;
};

struct SmartGUIText__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SmartGUIText__StaticFields {
    struct Dictionary_2_System_Int32_System_String_ *m_cache;
    bool m_initialized;
    int32_t m_cacheMaxDigitSize;
    struct GUIStyle *m_tempStyle;
    struct GUIContent *m_tempContent;
};

struct SmartGUIText__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SmartGUIText__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SmartGUIText__VTable vtable;
};

struct NintendoSaveFileSystem {
    struct NintendoSaveFileSystem__Class *klass;
    MonitorData *monitor;
};

struct NintendoSaveFileSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoSaveFileSystem__StaticFields {
    struct Dictionary_2_System_String_System_Boolean_ *ExistsCache;
    bool Initialized;
    bool ShouldUse800000Size;
    bool ShouldLimitFileAccess;
};

struct NintendoSaveFileSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSaveFileSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSaveFileSystem__VTable vtable;
};

struct NintendoSaveFileSystemBinaryReader {
    struct NintendoSaveFileSystemBinaryReader__Class *klass;
    MonitorData *monitor;
};

struct NintendoSaveFileSystemBinaryReader__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct NintendoSaveFileSystemBinaryReader__StaticFields {
};

struct NintendoSaveFileSystemBinaryReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSaveFileSystemBinaryReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSaveFileSystemBinaryReader__VTable vtable;
};

struct NintendoSaveFileSystemBinaryWriter {
    struct NintendoSaveFileSystemBinaryWriter__Class *klass;
    MonitorData *monitor;
};

struct NintendoSaveFileSystemBinaryWriter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct NintendoSaveFileSystemBinaryWriter__StaticFields {
};

struct NintendoSaveFileSystemBinaryWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSaveFileSystemBinaryWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSaveFileSystemBinaryWriter__VTable vtable;
};

struct __declspec(align(8)) NSAsyncQueueInfo__Fields {
    struct String *Type;
    struct String *Path;
    struct Byte__Array *Data;
    int32_t FileSizeInBytes;
    bool Overwrite;
    struct String *ExtraString;
    bool IsFromCopyRequest;
};

struct NSAsyncQueueInfo {
    struct NSAsyncQueueInfo__Class *klass;
    MonitorData *monitor;
    struct NSAsyncQueueInfo__Fields fields;
};

struct NSAsyncQueueInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NSAsyncQueueInfo__StaticFields {
};

struct NSAsyncQueueInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NSAsyncQueueInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NSAsyncQueueInfo__VTable vtable;
};

struct NintendoSaveFileSystemAsync {
    struct NintendoSaveFileSystemAsync__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Queue_1_NSAsyncQueueInfo___Fields {
    struct NSAsyncQueueInfo__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_NSAsyncQueueInfo_ {
    struct Queue_1_NSAsyncQueueInfo___Class *klass;
    MonitorData *monitor;
    struct Queue_1_NSAsyncQueueInfo___Fields fields;
};

struct NSAsyncQueueInfo__Array {
    struct NSAsyncQueueInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NSAsyncQueueInfo *vector[32];
};

struct IEnumerator_1_NSAsyncQueueInfo_ {
    struct IEnumerator_1_NSAsyncQueueInfo___Class *klass;
    MonitorData *monitor;
};

struct NSAsyncQueueInfo__Array__VTable {
};

struct NSAsyncQueueInfo__Array__StaticFields {
};

struct NSAsyncQueueInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NSAsyncQueueInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NSAsyncQueueInfo__Array__VTable vtable;
};

struct IEnumerator_1_NSAsyncQueueInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_NSAsyncQueueInfo___StaticFields {
};

struct IEnumerator_1_NSAsyncQueueInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_NSAsyncQueueInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_NSAsyncQueueInfo___VTable vtable;
};

struct Queue_1_NSAsyncQueueInfo___VTable {
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

struct Queue_1_NSAsyncQueueInfo___StaticFields {
};

struct Queue_1_NSAsyncQueueInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_NSAsyncQueueInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_NSAsyncQueueInfo___VTable vtable;
};

struct NintendoSaveFileSystemAsync__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoSaveFileSystemAsync__StaticFields {
    struct Queue_1_NSAsyncQueueInfo_ *m_queue;
    bool ShouldUseAsyncQueue;
    bool ShouldUseAsyncQueueForCopy;
    struct Object *WritingLock;
    int32_t preferredCore;
    int32_t coreMask;
    int32_t s_lastPreferredCore;
    int32_t s_lastCoreMask;
    bool ShouldPrintLockDebugMessages;
};

struct NintendoSaveFileSystemAsync__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSaveFileSystemAsync__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSaveFileSystemAsync__VTable vtable;
};

struct __declspec(align(8)) NintendoSwitch__Fields {
    bool IsDoneInitializing;
    bool IsDoneHostInitializing;
};

struct NintendoSwitch {
    struct NintendoSwitch__Class *klass;
    MonitorData *monitor;
    struct NintendoSwitch__Fields fields;
};

struct NintendoSwitch__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoSwitch__StaticFields {
    struct NintendoSwitch *_Instance_k__BackingField;
    bool _InvalidMountSetup_k__BackingField;
};

struct NintendoSwitch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSwitch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSwitch__VTable vtable;
};

struct NintendoSwitchFile {
    struct NintendoSwitchFile__Class *klass;
    MonitorData *monitor;
};

struct NintendoSwitchFile__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoSwitchFile__StaticFields {
};

struct NintendoSwitchFile__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSwitchFile__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSwitchFile__VTable vtable;
};

struct NintendoSwitchDirectory {
    struct NintendoSwitchDirectory__Class *klass;
    MonitorData *monitor;
};

struct NintendoSwitchDirectory__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoSwitchDirectory__StaticFields {
};

struct NintendoSwitchDirectory__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSwitchDirectory__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSwitchDirectory__VTable vtable;
};

struct __declspec(align(8)) CatmullSpline__Fields {
    int32_t Subdivisions;
    struct List_1_UnityEngine_Vector3_ *m_catmullPoints;
};

struct CatmullSpline {
    struct CatmullSpline__Class *klass;
    MonitorData *monitor;
    struct CatmullSpline__Fields fields;
};

struct CatmullSpline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CatmullSpline__StaticFields {
};

struct CatmullSpline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CatmullSpline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CatmullSpline__VTable vtable;
};

struct MoonTrailStressTester__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *StressTestTrailPrefabTarget;
    int32_t AmountTarget;
    float Speed;
    struct GameObject *StressTestTrailPrefabSpline;
    int32_t AmountSpline;
    float Radius;
    struct Transform *m_transform;
};

struct MoonTrailStressTester {
    struct MoonTrailStressTester__Class *klass;
    MonitorData *monitor;
    struct MoonTrailStressTester__Fields fields;
};

struct MoonTrailStressTester__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonTrailStressTester__StaticFields {
};

struct MoonTrailStressTester__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTrailStressTester__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTrailStressTester__VTable vtable;
};

struct TransformProvider__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *Transform;
};

struct TransformProvider {
    struct TransformProvider__Class *klass;
    MonitorData *monitor;
    struct TransformProvider__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_UnityEngine_Transform___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_UnityEngine_Transform_ *m_cachedProxyType;
    struct Transform *m_volatileValue;
};

struct MoonReference_1_UnityEngine_Transform_ {
    struct MoonReference_1_UnityEngine_Transform___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_UnityEngine_Transform___Fields fields;
};

struct IMoonType_1_UnityEngine_Transform_ {
    struct IMoonType_1_UnityEngine_Transform___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_UnityEngine_Transform___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_UnityEngine_Transform___StaticFields {
};

struct IMoonType_1_UnityEngine_Transform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_UnityEngine_Transform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_UnityEngine_Transform___VTable vtable;
};

struct Transform___VTable {
};

struct Transform___StaticFields {
};

struct Transform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Transform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Transform___VTable vtable;
};

struct MoonReference_1_UnityEngine_Transform___VTable {
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

struct MoonReference_1_UnityEngine_Transform___StaticFields {
};

struct MoonReference_1_UnityEngine_Transform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_UnityEngine_Transform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_UnityEngine_Transform___VTable vtable;
};

struct TransformProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformProvider__StaticFields {
};

struct TransformProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformProvider__VTable vtable;
};

enum class CompareMethod__Enum : int32_t {
    EqualTo = 0x00000000,
    GreaterThan = 0x00000001,
    LessThan = 0x00000002,
    GreaterOrEqualTo = 0x00000003,
    LessOrEqualTo = 0x00000004,
};

struct CompareMethod__Enum__Boxed {
    struct CompareMethod__Enum__Class *klass;
    MonitorData *monitor;
    CompareMethod__Enum value;
    
};

struct CompareMethod__Enum__VTable {
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

struct CompareMethod__Enum__StaticFields {
};

struct CompareMethod__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompareMethod__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompareMethod__Enum__VTable vtable;
};

enum class OperationMethod__Enum : int32_t {
    Set = 0x00000000,
    Add = 0x00000001,
    Subtract = 0x00000002,
    Multiply = 0x00000003,
    Divide = 0x00000004,
};

struct OperationMethod__Enum__Boxed {
    struct OperationMethod__Enum__Class *klass;
    MonitorData *monitor;
    OperationMethod__Enum value;
    
};

struct OperationMethod__Enum__VTable {
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

struct OperationMethod__Enum__StaticFields {
};

struct OperationMethod__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OperationMethod__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OperationMethod__Enum__VTable vtable;
};

struct __declspec(align(8)) GameTimeExtensions_ExecuteAfterAsync_d_1__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    float time;
    struct Action *action;
};

struct GameTimeExtensions_ExecuteAfterAsync_d_1 {
    struct GameTimeExtensions_ExecuteAfterAsync_d_1__Class *klass;
    MonitorData *monitor;
    struct GameTimeExtensions_ExecuteAfterAsync_d_1__Fields fields;
};

struct GameTimeExtensions_ExecuteAfterAsync_d_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct GameTimeExtensions_ExecuteAfterAsync_d_1__StaticFields {
};

struct GameTimeExtensions_ExecuteAfterAsync_d_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameTimeExtensions_ExecuteAfterAsync_d_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameTimeExtensions_ExecuteAfterAsync_d_1__VTable vtable;
};

struct __declspec(align(8)) GUIContext__Fields {
    struct Color m_backgroundColor;
    struct Color m_color;
    struct Color m_contentColor;
    int32_t m_depth;
    struct Matrix4x4 m_matrix;
    struct GUISkin *m_skin;
    struct String *m_tooltip;
    bool m_enabled;
};

struct GUIContext {
    struct GUIContext__Class *klass;
    MonitorData *monitor;
    struct GUIContext__Fields fields;
};

struct GUIContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GUIContext__StaticFields {
};

struct GUIContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIContext__VTable vtable;
};

struct GUIClipContext {
};

struct GUIClipContext__Boxed {
    struct GUIClipContext__Class *klass;
    MonitorData *monitor;
    struct GUIClipContext fields;
};

struct GUIClipContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GUIClipContext__StaticFields {
};

struct GUIClipContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIClipContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIClipContext__VTable vtable;
};

struct GUIGroup {
};

struct GUIGroup__Boxed {
    struct GUIGroup__Class *klass;
    MonitorData *monitor;
    struct GUIGroup fields;
};

struct GUIGroup__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GUIGroup__StaticFields {
};

struct GUIGroup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIGroup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIGroup__VTable vtable;
};

struct GUIContextNonAlloc {
    struct Color m_backgroundColor;
    struct Color m_color;
    struct Color m_contentColor;
    int32_t m_depth;
    struct Matrix4x4 m_matrix;
    struct GUISkin *m_skin;
    struct String *m_tooltip;
    bool m_enabled;
};

struct GUIContextNonAlloc__Boxed {
    struct GUIContextNonAlloc__Class *klass;
    MonitorData *monitor;
    struct GUIContextNonAlloc fields;
};

struct GUIContextNonAlloc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GUIContextNonAlloc__StaticFields {
};

struct GUIContextNonAlloc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIContextNonAlloc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIContextNonAlloc__VTable vtable;
};

struct __declspec(align(8)) RectExtensions_c_DisplayClass75_0__Fields {
    float x;
    float y;
};

struct RectExtensions_c_DisplayClass75_0 {
    struct RectExtensions_c_DisplayClass75_0__Class *klass;
    MonitorData *monitor;
    struct RectExtensions_c_DisplayClass75_0__Fields fields;
};

struct RectExtensions_c_DisplayClass75_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RectExtensions_c_DisplayClass75_0__StaticFields {
};

struct RectExtensions_c_DisplayClass75_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RectExtensions_c_DisplayClass75_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RectExtensions_c_DisplayClass75_0__VTable vtable;
};

struct RectExtensions_c {
    struct RectExtensions_c__Class *klass;
    MonitorData *monitor;
};

struct Func_2_UnityEngine_Rect_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_UnityEngine_Rect_Single_ {
    struct Func_2_UnityEngine_Rect_Single___Class *klass;
    MonitorData *monitor;
    struct Func_2_UnityEngine_Rect_Single___Fields fields;
};

struct Func_2_UnityEngine_Rect_Single___VTable {
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

struct Func_2_UnityEngine_Rect_Single___StaticFields {
};

struct Func_2_UnityEngine_Rect_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_UnityEngine_Rect_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_UnityEngine_Rect_Single___VTable vtable;
};

struct RectExtensions_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RectExtensions_c__StaticFields {
    struct RectExtensions_c *__9;
    struct Func_2_UnityEngine_Rect_Single_ *__9__75_0;
    struct Func_2_UnityEngine_Rect_Single_ *__9__75_1;
};

struct RectExtensions_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RectExtensions_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RectExtensions_c__VTable vtable;
};

struct __declspec(align(8)) BitMaskAttribute__Fields {
    struct Type *propType;
};

struct BitMaskAttribute {
    struct BitMaskAttribute__Class *klass;
    MonitorData *monitor;
    struct BitMaskAttribute__Fields fields;
};

struct BitMaskAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct BitMaskAttribute__StaticFields {
};

struct BitMaskAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BitMaskAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BitMaskAttribute__VTable vtable;
};

struct __declspec(align(8)) LehmerRng__Fields {
    uint32_t m_x;
};

struct LehmerRng {
    struct LehmerRng__Class *klass;
    MonitorData *monitor;
    struct LehmerRng__Fields fields;
};

struct LehmerRng__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetNext;
    VirtualInvokeData GetNextFloat;
    VirtualInvokeData GetInRange;
    VirtualInvokeData GetFloatInRange;
};

struct LehmerRng__StaticFields {
};

struct LehmerRng__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LehmerRng__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LehmerRng__VTable vtable;
};

struct __declspec(align(8)) FilteredRandomRange__Fields {
    uint32_t m_min;
    uint32_t m_max;
    uint32_t m_repeatingRunLength;
    struct IRng *m_rng;
    struct UInt32__Array *m_history;
};

}
