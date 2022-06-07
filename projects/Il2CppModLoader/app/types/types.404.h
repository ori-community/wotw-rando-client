namespace app {
struct GuiEnable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiEnable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiEnable__VTable vtable;
};

struct __declspec(align(8)) ExceptionEntry__Fields {
    struct List_1_System_String_ *m_entries;
    int32_t _Id_k__BackingField;
    struct String *_StackTrace_k__BackingField;
    struct String *_Message_k__BackingField;
};

struct ExceptionEntry {
    struct ExceptionEntry__Class *klass;
    MonitorData *monitor;
    struct ExceptionEntry__Fields fields;
};

struct ExceptionEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExceptionEntry__StaticFields {
};

struct ExceptionEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionEntry__VTable vtable;
};

struct ExceptionListener__Fields {
    struct MonoBehaviour__Fields _;
    struct ExceptionProcessor *_Processor_k__BackingField;
};

struct ExceptionListener {
    struct ExceptionListener__Class *klass;
    MonitorData *monitor;
    struct ExceptionListener__Fields fields;
};

struct __declspec(align(8)) ExceptionProcessor__Fields {
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ *m_exceptions;
    struct StringBuilder *m_builder;
    struct String *m_logPath;
    struct Action_1_Moon_ExceptionProcessing_ExceptionEntry_ *OnNewException;
};

struct ExceptionProcessor {
    struct ExceptionProcessor__Class *klass;
    MonitorData *monitor;
    struct ExceptionProcessor__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct ExceptionEntry *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Fields {
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Fields {
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Fields fields;
};

struct ExceptionEntry__Array {
    struct ExceptionEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExceptionEntry *vector[32];
};

struct IEnumerator_1_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct IEnumerator_1_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct ICollection_1_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ {
    int32_t key;
    struct ExceptionEntry *value;
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Boxed {
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ fields;
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array {
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct IEnumerable_1_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
};

struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Moon_ExceptionProcessing_ExceptionEntry_ {
    struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___Class *klass;
    MonitorData *monitor;
    struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct ExceptionEntry__Array__VTable {
};

struct ExceptionEntry__Array__StaticFields {
};

struct ExceptionEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionEntry__Array__VTable vtable;
};

struct IEnumerator_1_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct IEnumerator_1_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct ICollection_1_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct ICollection_1_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct ExceptionEntry___VTable {
};

struct ExceptionEntry___StaticFields {
};

struct ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionEntry___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__VTable {
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct IEnumerable_1_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct IEnumerable_1_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___VTable {
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

struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields {
};

struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_Moon_ExceptionProcessing_ExceptionEntry___VTable vtable;
};

struct ExceptionProcessor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExceptionProcessor__StaticFields {
    struct Regex *s_exRegex;
    struct Regex *s_stackTraceRegex;
};

struct ExceptionProcessor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionProcessor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionProcessor__VTable vtable;
};

struct ExceptionListener__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExceptionListener__StaticFields {
};

struct ExceptionListener__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionListener__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionListener__VTable vtable;
};

struct ExceptionProcessor_c {
    struct ExceptionProcessor_c__Class *klass;
    MonitorData *monitor;
};

struct ExceptionProcessor_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExceptionProcessor_c__StaticFields {
    struct ExceptionProcessor_c *__9;
    struct Action_1_Moon_ExceptionProcessing_ExceptionEntry_ *__9__13_0;
};

struct ExceptionProcessor_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionProcessor_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionProcessor_c__VTable vtable;
};

struct __declspec(align(8)) LogCallbackHandler__Fields {
    struct List_1_LogCallbackHandler_LogEntry_ *LogEntries;
    struct List_1_LogCallbackHandler_LogEntry_ *m_tempLogEntries;
    bool m_showWindow;
    bool m_autoScroll;
    struct Vector2 m_scrollPosition;
    bool m_showInfo;
    bool m_showWarnings;
    bool m_showErrors;
    float m_logEntryHeight;
    int32_t m_logCount;
    int32_t m_warningCount;
    int32_t m_errorCount;
    int32_t m_exceptionCount;
    int32_t m_assertCount;
};

struct LogCallbackHandler {
    struct LogCallbackHandler__Class *klass;
    MonitorData *monitor;
    struct LogCallbackHandler__Fields fields;
};

struct __declspec(align(8)) List_1_LogCallbackHandler_LogEntry___Fields {
    struct LogCallbackHandler_LogEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LogCallbackHandler_LogEntry_ {
    struct List_1_LogCallbackHandler_LogEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_LogCallbackHandler_LogEntry___Fields fields;
};

struct __declspec(align(8)) LogCallbackHandler_LogEntry__Fields {
    struct String *m_condition;
    struct String *m_stackTrace;
    LogType__Enum m_logType;
    
};

struct LogCallbackHandler_LogEntry {
    struct LogCallbackHandler_LogEntry__Class *klass;
    MonitorData *monitor;
    struct LogCallbackHandler_LogEntry__Fields fields;
};

struct LogCallbackHandler_LogEntry__Array {
    struct LogCallbackHandler_LogEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LogCallbackHandler_LogEntry *vector[32];
};

struct IEnumerator_1_LogCallbackHandler_LogEntry_ {
    struct IEnumerator_1_LogCallbackHandler_LogEntry___Class *klass;
    MonitorData *monitor;
};

struct LogCallbackHandler_LogEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LogCallbackHandler_LogEntry__StaticFields {
};

struct LogCallbackHandler_LogEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogCallbackHandler_LogEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogCallbackHandler_LogEntry__VTable vtable;
};

struct LogCallbackHandler_LogEntry__Array__VTable {
};

struct LogCallbackHandler_LogEntry__Array__StaticFields {
};

struct LogCallbackHandler_LogEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogCallbackHandler_LogEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogCallbackHandler_LogEntry__Array__VTable vtable;
};

struct IEnumerator_1_LogCallbackHandler_LogEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LogCallbackHandler_LogEntry___StaticFields {
};

struct IEnumerator_1_LogCallbackHandler_LogEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LogCallbackHandler_LogEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LogCallbackHandler_LogEntry___VTable vtable;
};

struct List_1_LogCallbackHandler_LogEntry___VTable {
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

struct List_1_LogCallbackHandler_LogEntry___StaticFields {
    struct LogCallbackHandler_LogEntry__Array *_emptyArray;
};

struct List_1_LogCallbackHandler_LogEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LogCallbackHandler_LogEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LogCallbackHandler_LogEntry___VTable vtable;
};

struct LogCallbackHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LogCallbackHandler__StaticFields {
    struct LogCallbackHandler *Instance;
};

struct LogCallbackHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogCallbackHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogCallbackHandler__VTable vtable;
};

struct MarkAsDontDestroyOnLoadOnAwake__Fields {
    struct MonoBehaviour__Fields _;
};

struct MarkAsDontDestroyOnLoadOnAwake {
    struct MarkAsDontDestroyOnLoadOnAwake__Class *klass;
    MonitorData *monitor;
    struct MarkAsDontDestroyOnLoadOnAwake__Fields fields;
};

struct MarkAsDontDestroyOnLoadOnAwake__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MarkAsDontDestroyOnLoadOnAwake__StaticFields {
};

struct MarkAsDontDestroyOnLoadOnAwake__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MarkAsDontDestroyOnLoadOnAwake__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MarkAsDontDestroyOnLoadOnAwake__VTable vtable;
};

struct PrewarmParticles__Fields {
    struct MonoBehaviour__Fields _;
    struct PrewarmParticles_PrewarmParticleSystemParticle__Array *m_particleSystemParticles;
};

struct PrewarmParticles {
    struct PrewarmParticles__Class *klass;
    MonitorData *monitor;
    struct PrewarmParticles__Fields fields;
};

struct __declspec(align(8)) PrewarmParticles_PrewarmParticleSystemParticle__Fields {
    struct Vector3 Position;
    struct Vector3 Velocity;
    float Lifetime;
    float StartLifetime;
    float Size;
    struct Vector3 AxisOfRotation;
    float Rotation;
    float AngularVelocity;
    struct Color Color;
    uint32_t RandomSeed;
};

struct PrewarmParticles_PrewarmParticleSystemParticle {
    struct PrewarmParticles_PrewarmParticleSystemParticle__Class *klass;
    MonitorData *monitor;
    struct PrewarmParticles_PrewarmParticleSystemParticle__Fields fields;
};

struct PrewarmParticles_PrewarmParticleSystemParticle__Array {
    struct PrewarmParticles_PrewarmParticleSystemParticle__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PrewarmParticles_PrewarmParticleSystemParticle *vector[32];
};

struct PrewarmParticles_PrewarmParticleSystemParticle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PrewarmParticles_PrewarmParticleSystemParticle__StaticFields {
};

struct PrewarmParticles_PrewarmParticleSystemParticle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PrewarmParticles_PrewarmParticleSystemParticle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PrewarmParticles_PrewarmParticleSystemParticle__VTable vtable;
};

struct PrewarmParticles_PrewarmParticleSystemParticle__Array__VTable {
};

struct PrewarmParticles_PrewarmParticleSystemParticle__Array__StaticFields {
};

struct PrewarmParticles_PrewarmParticleSystemParticle__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PrewarmParticles_PrewarmParticleSystemParticle__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PrewarmParticles_PrewarmParticleSystemParticle__Array__VTable vtable;
};

struct PrewarmParticles__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PrewarmParticles__StaticFields {
};

struct PrewarmParticles__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PrewarmParticles__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PrewarmParticles__VTable vtable;
};

struct ProcessUtility {
    struct ProcessUtility__Class *klass;
    MonitorData *monitor;
};

struct ProcessUtility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ProcessUtility__StaticFields {
};

struct ProcessUtility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProcessUtility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProcessUtility__VTable vtable;
};

struct KeepOnBuild__Fields {
    struct MonoBehaviour__Fields _;
};

struct KeepOnBuild {
    struct KeepOnBuild__Class *klass;
    MonitorData *monitor;
    struct KeepOnBuild__Fields fields;
};

struct KeepOnBuild__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeepOnBuild__StaticFields {
};

struct KeepOnBuild__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeepOnBuild__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeepOnBuild__VTable vtable;
};

struct RemoveOnBuild__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject__Array *gameObjectsToRemove;
    struct Component_1__Array *componentsToRemove;
    struct String *comment;
};

struct RemoveOnBuild {
    struct RemoveOnBuild__Class *klass;
    MonitorData *monitor;
    struct RemoveOnBuild__Fields fields;
};

struct RemoveOnBuild__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemoveOnBuild__StaticFields {
};

struct RemoveOnBuild__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveOnBuild__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveOnBuild__VTable vtable;
};

struct ObjectDisabler__Fields {
    struct MonoBehaviour__Fields _;
};

struct ObjectDisabler {
    struct ObjectDisabler__Class *klass;
    MonitorData *monitor;
    struct ObjectDisabler__Fields fields;
};

struct ObjectDisabler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ObjectDisabler__StaticFields {
};

struct ObjectDisabler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectDisabler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectDisabler__VTable vtable;
};

struct RemoveOnNintendoSwitch__Fields {
    struct MonoBehaviour__Fields _;
};

struct RemoveOnNintendoSwitch {
    struct RemoveOnNintendoSwitch__Class *klass;
    MonitorData *monitor;
    struct RemoveOnNintendoSwitch__Fields fields;
};

struct RemoveOnNintendoSwitch__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
