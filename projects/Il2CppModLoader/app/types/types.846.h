namespace app {
struct MainThreadLoadingDebugger__Fields {
    struct MonoBehaviour__Fields _;
    bool m_imGuiRegistered;
    struct GUIStyle *m_labelStyle;
    struct String *m_renderString;
    float m_lastUpdate;
    struct List_1_MainThreadLoadingDebugger_NotifyEntry_ *m_entries;
};

struct MainThreadLoadingDebugger {
    struct MainThreadLoadingDebugger__Class *klass;
    MonitorData *monitor;
    struct MainThreadLoadingDebugger__Fields fields;
};

struct __declspec(align(8)) List_1_MainThreadLoadingDebugger_NotifyEntry___Fields {
    struct MainThreadLoadingDebugger_NotifyEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MainThreadLoadingDebugger_NotifyEntry_ {
    struct List_1_MainThreadLoadingDebugger_NotifyEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_MainThreadLoadingDebugger_NotifyEntry___Fields fields;
};

struct __declspec(align(8)) MainThreadLoadingDebugger_NotifyEntry__Fields {
    struct String *Text;
    float Time;
};

struct MainThreadLoadingDebugger_NotifyEntry {
    struct MainThreadLoadingDebugger_NotifyEntry__Class *klass;
    MonitorData *monitor;
    struct MainThreadLoadingDebugger_NotifyEntry__Fields fields;
};

struct MainThreadLoadingDebugger_NotifyEntry__Array {
    struct MainThreadLoadingDebugger_NotifyEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MainThreadLoadingDebugger_NotifyEntry *vector[32];
};

struct IEnumerator_1_MainThreadLoadingDebugger_NotifyEntry_ {
    struct IEnumerator_1_MainThreadLoadingDebugger_NotifyEntry___Class *klass;
    MonitorData *monitor;
};

struct MainThreadLoadingDebugger_NotifyEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MainThreadLoadingDebugger_NotifyEntry__StaticFields {
};

struct MainThreadLoadingDebugger_NotifyEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MainThreadLoadingDebugger_NotifyEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MainThreadLoadingDebugger_NotifyEntry__VTable vtable;
};

struct MainThreadLoadingDebugger_NotifyEntry__Array__VTable {
};

struct MainThreadLoadingDebugger_NotifyEntry__Array__StaticFields {
};

struct MainThreadLoadingDebugger_NotifyEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MainThreadLoadingDebugger_NotifyEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MainThreadLoadingDebugger_NotifyEntry__Array__VTable vtable;
};

struct IEnumerator_1_MainThreadLoadingDebugger_NotifyEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MainThreadLoadingDebugger_NotifyEntry___StaticFields {
};

struct IEnumerator_1_MainThreadLoadingDebugger_NotifyEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MainThreadLoadingDebugger_NotifyEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_MainThreadLoadingDebugger_NotifyEntry___VTable vtable;
};

struct List_1_MainThreadLoadingDebugger_NotifyEntry___VTable {
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

struct List_1_MainThreadLoadingDebugger_NotifyEntry___StaticFields {
    struct MainThreadLoadingDebugger_NotifyEntry__Array *_emptyArray;
};

struct List_1_MainThreadLoadingDebugger_NotifyEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MainThreadLoadingDebugger_NotifyEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_MainThreadLoadingDebugger_NotifyEntry___VTable vtable;
};

struct MainThreadLoadingDebugger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MainThreadLoadingDebugger__StaticFields {
    struct MainThreadLoadingDebugger *m_instance;
};

struct MainThreadLoadingDebugger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MainThreadLoadingDebugger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MainThreadLoadingDebugger__VTable vtable;
};

struct MainThreadLoadingDebugger_c {
    struct MainThreadLoadingDebugger_c__Class *klass;
    MonitorData *monitor;
};

struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry_ {
    struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___Fields fields;
};

struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___VTable {
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

struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___StaticFields {
};

struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry___VTable vtable;
};

struct MainThreadLoadingDebugger_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MainThreadLoadingDebugger_c__StaticFields {
    struct MainThreadLoadingDebugger_c *__9;
    struct Predicate_1_MainThreadLoadingDebugger_NotifyEntry_ *__9__19_0;
};

struct MainThreadLoadingDebugger_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MainThreadLoadingDebugger_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MainThreadLoadingDebugger_c__VTable vtable;
};

struct BinaryProfilerLogMaker__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_index;
};

struct BinaryProfilerLogMaker {
    struct BinaryProfilerLogMaker__Class *klass;
    MonitorData *monitor;
    struct BinaryProfilerLogMaker__Fields fields;
};

struct BinaryProfilerLogMaker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BinaryProfilerLogMaker__StaticFields {
    struct BinaryProfilerLogMaker *m_instance;
    int32_t m_fileIndex;
};

struct BinaryProfilerLogMaker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BinaryProfilerLogMaker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BinaryProfilerLogMaker__VTable vtable;
};

struct BugReportMenuItem__Fields {
    struct MonoBehaviour__Fields _;
    struct String *_Text_k__BackingField;
    struct Func_1_String_ *_DynamicText_k__BackingField;
};

struct BugReportMenuItem {
    struct BugReportMenuItem__Class *klass;
    MonitorData *monitor;
    struct BugReportMenuItem__Fields fields;
};

struct BugReportMenuItem__VTable {
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
    VirtualInvokeData get_Name;
    VirtualInvokeData get_Path_1;
    VirtualInvokeData get_Column;
};

struct BugReportMenuItem__StaticFields {
};

struct BugReportMenuItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BugReportMenuItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BugReportMenuItem__VTable vtable;
};

struct CameraOffsetMenuItem__Fields {
    struct Vector2DebugMenuItem__Fields _;
    bool m_selected;
};

struct CameraOffsetMenuItem {
    struct CameraOffsetMenuItem__Class *klass;
    MonitorData *monitor;
    struct CameraOffsetMenuItem__Fields fields;
};

struct CameraOffsetMenuItem__VTable {
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
};

struct CameraOffsetMenuItem__StaticFields {
};

struct CameraOffsetMenuItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraOffsetMenuItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraOffsetMenuItem__VTable vtable;
};

struct CleanupDebugger__Fields {
    struct MonoBehaviour__Fields _;
    float m_lastRenderStringUpdate;
    struct String *m_renderString;
    bool m_imGuiRegistered;
    struct GUIStyle *m_labelStyle;
    bool m_forceTextUpdate;
    struct List_1_System_Tuple_2__1 *m_list;
};

struct CleanupDebugger {
    struct CleanupDebugger__Class *klass;
    MonitorData *monitor;
    struct CleanupDebugger__Fields fields;
};

struct __declspec(align(8)) List_1_System_Tuple_2__1__Fields {
    struct Tuple_2_String_Single___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Tuple_2__1 {
    struct List_1_System_Tuple_2__1__Class *klass;
    MonitorData *monitor;
    struct List_1_System_Tuple_2__1__Fields fields;
};

struct __declspec(align(8)) Tuple_2_String_Single___Fields {
    struct String *m_Item1;
    float m_Item2;
};

struct Tuple_2_String_Single_ {
    struct Tuple_2_String_Single___Class *klass;
    MonitorData *monitor;
    struct Tuple_2_String_Single___Fields fields;
};

struct Tuple_2_String_Single___Array {
    struct Tuple_2_String_Single___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Tuple_2_String_Single_ *vector[32];
};

struct IEnumerator_1_System_Tuple_2__2 {
    struct IEnumerator_1_System_Tuple_2__2__Class *klass;
    MonitorData *monitor;
};

struct Tuple_2_String_Single___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
    VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
    VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
    VirtualInvokeData System_IComparable_CompareTo;
    VirtualInvokeData System_ITupleInternal_ToString;
};

struct Tuple_2_String_Single___StaticFields {
};

struct Tuple_2_String_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Tuple_2_String_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Tuple_2_String_Single___VTable vtable;
};

struct Tuple_2_String_Single___Array__VTable {
};

struct Tuple_2_String_Single___Array__StaticFields {
};

struct Tuple_2_String_Single___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Tuple_2_String_Single___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Tuple_2_String_Single___Array__VTable vtable;
};

struct IEnumerator_1_System_Tuple_2__2__VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Tuple_2__2__StaticFields {
};

struct IEnumerator_1_System_Tuple_2__2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Tuple_2__2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Tuple_2__2__VTable vtable;
};

struct List_1_System_Tuple_2__1__VTable {
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

struct List_1_System_Tuple_2__1__StaticFields {
    struct Tuple_2_String_Single___Array *_emptyArray;
};

struct List_1_System_Tuple_2__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Tuple_2__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Tuple_2__1__VTable vtable;
};

struct CleanupDebugger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CleanupDebugger__StaticFields {
    struct CleanupDebugger *m_instance;
};

struct CleanupDebugger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CleanupDebugger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CleanupDebugger__VTable vtable;
};

struct CleanupDebugger_c {
    struct CleanupDebugger_c__Class *klass;
    MonitorData *monitor;
};

struct Func_2_Tuple_2_String_Single_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_Tuple_2_String_Single_Single_ {
    struct Func_2_Tuple_2_String_Single_Single___Class *klass;
    MonitorData *monitor;
    struct Func_2_Tuple_2_String_Single_Single___Fields fields;
};

struct Predicate_1_Tuple_2_String_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_Tuple_2_String_Single_ {
    struct Predicate_1_Tuple_2_String_Single___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_Tuple_2_String_Single___Fields fields;
};

struct Func_2_Tuple_2_String_Single_Single___VTable {
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

struct Func_2_Tuple_2_String_Single_Single___StaticFields {
};

struct Func_2_Tuple_2_String_Single_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_Tuple_2_String_Single_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_Tuple_2_String_Single_Single___VTable vtable;
};

struct Predicate_1_Tuple_2_String_Single___VTable {
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

struct Predicate_1_Tuple_2_String_Single___StaticFields {
};

struct Predicate_1_Tuple_2_String_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Predicate_1_Tuple_2_String_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Predicate_1_Tuple_2_String_Single___VTable vtable;
};

struct CleanupDebugger_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CleanupDebugger_c__StaticFields {
    struct CleanupDebugger_c *__9;
    struct Func_2_Tuple_2_String_Single_Single_ *__9__27_1;
    struct Predicate_1_Tuple_2_String_Single_ *__9__27_0;
};

struct CleanupDebugger_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CleanupDebugger_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CleanupDebugger_c__VTable vtable;
};

struct DebugMenuWorldEventActionMenuItem__Fields {
    struct ActionDebugMenuItem__Fields _;
    struct WorldEvents *m_worldEvent;
};

struct DebugMenuWorldEventActionMenuItem {
    struct DebugMenuWorldEventActionMenuItem__Class *klass;
    MonitorData *monitor;
    struct DebugMenuWorldEventActionMenuItem__Fields fields;
};

struct DebugMenuWorldEventActionMenuItem__VTable {
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
};

struct DebugMenuWorldEventActionMenuItem__StaticFields {
};

struct DebugMenuWorldEventActionMenuItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DebugMenuWorldEventActionMenuItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DebugMenuWorldEventActionMenuItem__VTable vtable;
};

struct DebugTeleportSettings__Fields {
    struct ScriptableObject__Fields _;
    struct String *Description;
    struct DesiredUberStateComposite *State;
    struct SceneMetaData *Scene;
    struct List_1_DebugTeleportSettings_ *AdditionalState;
    struct SceneMetaData_SeinAbilitiesWotW *Abilities;
    struct SceneMetaData_SeinEquipmentWotW__Array *Equipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultBButtonEquipment;
    bool ShouldOverridePosition;
    struct Vector2 OverridePosition;
};

struct DebugTeleportSettings {
    struct DebugTeleportSettings__Class *klass;
    MonitorData *monitor;
    struct DebugTeleportSettings__Fields fields;
};

struct __declspec(align(8)) List_1_DebugTeleportSettings___Fields {
    struct DebugTeleportSettings__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DebugTeleportSettings_ {
    struct List_1_DebugTeleportSettings___Class *klass;
    MonitorData *monitor;
    struct List_1_DebugTeleportSettings___Fields fields;
};

struct DebugTeleportSettings__Array {
    struct DebugTeleportSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DebugTeleportSettings *vector[32];
};

struct IEnumerator_1_DebugTeleportSettings_ {
    struct IEnumerator_1_DebugTeleportSettings___Class *klass;
    MonitorData *monitor;
};

struct DebugTeleportSettings__Array__VTable {
};

struct DebugTeleportSettings__Array__StaticFields {
};

struct DebugTeleportSettings__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DebugTeleportSettings__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DebugTeleportSettings__Array__VTable vtable;
};

struct IEnumerator_1_DebugTeleportSettings___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_DebugTeleportSettings___StaticFields {
};

struct IEnumerator_1_DebugTeleportSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_DebugTeleportSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_DebugTeleportSettings___VTable vtable;
};

struct List_1_DebugTeleportSettings___VTable {
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

struct List_1_DebugTeleportSettings___StaticFields {
    struct DebugTeleportSettings__Array *_emptyArray;
};

struct List_1_DebugTeleportSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DebugTeleportSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DebugTeleportSettings___VTable vtable;
};

struct DebugTeleportSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DebugTeleportSettings__StaticFields {
};

struct DebugTeleportSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DebugTeleportSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DebugTeleportSettings__VTable vtable;
};

enum class DemoTimeoutTimeMenuItem_TimeoutType__Enum : int32_t {
    InGameIdle = 0x00000000,
    InGamePlayTime = 0x00000001,
};

struct DemoTimeoutTimeMenuItem_TimeoutType__Enum__Boxed {
    struct DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class *klass;
    MonitorData *monitor;
    DemoTimeoutTimeMenuItem_TimeoutType__Enum value;
    
};

struct DemoTimeoutTimeMenuItem__Fields {
    struct FloatDebugMenuItem__Fields _;
    DemoTimeoutTimeMenuItem_TimeoutType__Enum m_type;
    
};

struct DemoTimeoutTimeMenuItem {
    struct DemoTimeoutTimeMenuItem__Class *klass;
    MonitorData *monitor;
    struct DemoTimeoutTimeMenuItem__Fields fields;
};

struct DemoTimeoutTimeMenuItem_TimeoutType__Enum__VTable {
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

struct DemoTimeoutTimeMenuItem_TimeoutType__Enum__StaticFields {
};

struct DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DemoTimeoutTimeMenuItem_TimeoutType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DemoTimeoutTimeMenuItem_TimeoutType__Enum__VTable vtable;
};

struct DemoTimeoutTimeMenuItem__VTable {
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

struct DemoTimeoutTimeMenuItem__StaticFields {
};

struct DemoTimeoutTimeMenuItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DemoTimeoutTimeMenuItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DemoTimeoutTimeMenuItem__VTable vtable;
};

struct DifficultyToggler__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_currentOption;
};

struct DifficultyToggler {
    struct DifficultyToggler__Class *klass;
    MonitorData *monitor;
    struct DifficultyToggler__Fields fields;
};

struct DifficultyToggler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_HelpText;
    VirtualInvokeData get_ToggleOptions;
    VirtualInvokeData get_CurrentToggleOptionId;
    VirtualInvokeData set_CurrentToggleOptionId;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_Path;
    VirtualInvokeData get_Column;
};

struct DifficultyToggler__StaticFields {
};

struct DifficultyToggler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DifficultyToggler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DifficultyToggler__VTable vtable;
};

struct EnergyDebugMenuItem__Fields {
    struct FloatDebugMenuItem__Fields _;
};

struct EnergyDebugMenuItem {
    struct EnergyDebugMenuItem__Class *klass;
    MonitorData *monitor;
    struct EnergyDebugMenuItem__Fields fields;
};

struct EnergyDebugMenuItem__VTable {
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

struct EnergyDebugMenuItem__StaticFields {
};

}
