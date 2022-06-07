namespace app {
struct FfmpegStreamer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FfmpegStreamer__StaticFields {
    struct FfmpegStreamer *_Instance_k__BackingField;
};

struct FfmpegStreamer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FfmpegStreamer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FfmpegStreamer__VTable vtable;
};

struct __declspec(align(8)) AnalogueInputData__Fields {
    float HorizontalAnalogLeft;
    float VerticalAnalogLeft;
    float HorizontalAnalogRight;
    float VerticalAnalogRight;
};

struct AnalogueInputData {
    struct AnalogueInputData__Class *klass;
    MonitorData *monitor;
    struct AnalogueInputData__Fields fields;
};

struct AnalogueInputData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData FrameType;
};

struct AnalogueInputData__StaticFields {
};

struct AnalogueInputData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnalogueInputData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnalogueInputData__VTable vtable;
};

struct __declspec(align(8)) CursorInputData__Fields {
    struct Vector2 Position;
};

struct CursorInputData {
    struct CursorInputData__Class *klass;
    MonitorData *monitor;
    struct CursorInputData__Fields fields;
};

struct CursorInputData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData FrameType;
};

struct CursorInputData__StaticFields {
};

struct CursorInputData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CursorInputData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CursorInputData__VTable vtable;
};

struct __declspec(align(8)) InputData__Fields {
    struct Boolean__Array *Inputs;
    int32_t HorizontalDigiPad;
    int32_t VerticalDigiPad;
    bool SaveFileExists;
};

struct InputData {
    struct InputData__Class *klass;
    MonitorData *monitor;
    struct InputData__Fields fields;
};

struct InputData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData FrameType;
};

struct InputData__StaticFields {
};

struct InputData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InputData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InputData__VTable vtable;
};

struct Input_InputButtonProcessor___VTable {
};

struct Input_InputButtonProcessor___StaticFields {
};

struct Input_InputButtonProcessor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Input_InputButtonProcessor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Input_InputButtonProcessor___VTable vtable;
};

struct InputPlugin__Fields {
    struct MonoBehaviour__Fields _;
    struct InputData *m_inputData;
    struct AnalogueInputData *m_analogueInputData;
    struct CursorInputData *m_cursorInputData;
    bool m_cursorMoved;
};

struct InputPlugin {
    struct InputPlugin__Class *klass;
    MonitorData *monitor;
    struct InputPlugin__Fields fields;
};

struct InputPlugin__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData PlayCycle;
    VirtualInvokeData RecordCycle;
    VirtualInvokeData Exit;
};

struct InputPlugin__StaticFields {
};

struct InputPlugin__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InputPlugin__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InputPlugin__VTable vtable;
};

struct __declspec(align(8)) LogCallbackData__Fields {
    struct String *LogString;
    struct String *StackTrace;
    LogType__Enum LogType;
    
};

struct LogCallbackData {
    struct LogCallbackData__Class *klass;
    MonitorData *monitor;
    struct LogCallbackData__Fields fields;
};

struct LogCallbackData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData FrameType;
};

struct LogCallbackData__StaticFields {
};

struct LogCallbackData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogCallbackData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogCallbackData__VTable vtable;
};

struct __declspec(align(8)) AbilitiesData__Fields {
    struct String *TypeFullName;
    struct String *FieldName;
    struct Object *Value;
};

struct AbilitiesData {
    struct AbilitiesData__Class *klass;
    MonitorData *monitor;
    struct AbilitiesData__Fields fields;
};

struct AbilitiesData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData FrameType;
};

struct AbilitiesData__StaticFields {
};

struct AbilitiesData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AbilitiesData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AbilitiesData__VTable vtable;
};

struct AbilitiesPlugin__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_ *m_recordedData;
    struct Dictionary_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ *m_typeToFields;
};

struct AbilitiesPlugin {
    struct AbilitiesPlugin__Class *klass;
    MonitorData *monitor;
    struct AbilitiesPlugin__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Object_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_ {
    struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object_ {
    int32_t hashCode;
    int32_t next;
    struct Object *key;
    struct Dictionary_2_System_String_System_Object_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___Fields {
    struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___Fields {
    struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___Fields fields;
};

struct Dictionary_2_System_String_System_Object___Array {
    struct Dictionary_2_System_String_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_System_String_System_Object_ *vector[32];
};

struct IEnumerator_1_Dictionary_2_System_String_System_Object_ {
    struct IEnumerator_1_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Dictionary_2_System_String_System_Object_ {
    struct ICollection_1_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object_ {
    struct Object *key;
    struct Dictionary_2_System_String_System_Object_ *value;
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Boxed {
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object_ fields;
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Array {
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object_ {
    struct IEnumerator_1_KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Dictionary_2_System_String_System_Object_ {
    struct IEnumerable_1_Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ {
    struct Dictionary_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct AbilitiesPlugin_FieldInfoCollection *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection_ fields;
};

struct __declspec(align(8)) AbilitiesPlugin_FieldInfoCollection__Fields {
    struct FieldInfo_1__Array *PublicFields;
    struct FieldInfo_1__Array *PrivateFields;
    struct Boolean__Array *ShowInPlaybackInspectorAttributePublic;
    struct Boolean__Array *ShowInPlaybackInspectorAttributePrivate;
};

struct AbilitiesPlugin_FieldInfoCollection {
    struct AbilitiesPlugin_FieldInfoCollection__Class *klass;
    MonitorData *monitor;
    struct AbilitiesPlugin_FieldInfoCollection__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Fields {
    struct Dictionary_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Fields {
    struct Dictionary_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Fields fields;
};

struct AbilitiesPlugin_FieldInfoCollection__Array {
    struct AbilitiesPlugin_FieldInfoCollection__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AbilitiesPlugin_FieldInfoCollection *vector[32];
};

struct IEnumerator_1_AbilitiesPlugin_FieldInfoCollection_ {
    struct IEnumerator_1_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_AbilitiesPlugin_FieldInfoCollection_ {
    struct ICollection_1_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ {
    struct Type *key;
    struct AbilitiesPlugin_FieldInfoCollection *value;
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Boxed {
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ fields;
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Array {
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_AbilitiesPlugin_FieldInfoCollection_ {
    struct IEnumerable_1_AbilitiesPlugin_FieldInfoCollection___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Object_Dictionary_2_System_String_System_Object___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_System_String_System_Object___Array__VTable {
};

struct Dictionary_2_System_String_System_Object___Array__StaticFields {
};

struct Dictionary_2_System_String_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_System_Object___Array__VTable vtable;
};

struct IEnumerator_1_Dictionary_2_System_String_System_Object___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Dictionary_2_System_String_System_Object___StaticFields {
};

struct IEnumerator_1_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct ICollection_1_Dictionary_2_System_String_System_Object___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Dictionary_2_System_String_System_Object___StaticFields {
};

struct ICollection_1_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_System_String_System_Object__1__VTable {
};

struct Dictionary_2_System_String_System_Object__1__StaticFields {
};

struct Dictionary_2_System_String_System_Object__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_System_Object__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_System_Object__1__VTable vtable;
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___StaticFields {
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Array__VTable {
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Array__StaticFields {
};

struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Object_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct IEnumerable_1_Dictionary_2_System_String_System_Object___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Dictionary_2_System_String_System_Object___StaticFields {
};

struct IEnumerable_1_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___VTable {
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

struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___StaticFields {
};

struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Object_Dictionary_2_System_String_System_Object___VTable vtable;
};

struct AbilitiesPlugin_FieldInfoCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AbilitiesPlugin_FieldInfoCollection__StaticFields {
};

struct AbilitiesPlugin_FieldInfoCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AbilitiesPlugin_FieldInfoCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AbilitiesPlugin_FieldInfoCollection__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable vtable;
};

struct AbilitiesPlugin_FieldInfoCollection__Array__VTable {
};

struct AbilitiesPlugin_FieldInfoCollection__Array__StaticFields {
};

struct AbilitiesPlugin_FieldInfoCollection__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AbilitiesPlugin_FieldInfoCollection__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AbilitiesPlugin_FieldInfoCollection__Array__VTable vtable;
};

struct IEnumerator_1_AbilitiesPlugin_FieldInfoCollection___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_AbilitiesPlugin_FieldInfoCollection___StaticFields {
};

struct IEnumerator_1_AbilitiesPlugin_FieldInfoCollection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_AbilitiesPlugin_FieldInfoCollection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_AbilitiesPlugin_FieldInfoCollection___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable vtable;
};

struct ICollection_1_AbilitiesPlugin_FieldInfoCollection___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_AbilitiesPlugin_FieldInfoCollection___StaticFields {
};

struct ICollection_1_AbilitiesPlugin_FieldInfoCollection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_AbilitiesPlugin_FieldInfoCollection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_AbilitiesPlugin_FieldInfoCollection___VTable vtable;
};

struct AbilitiesPlugin_FieldInfoCollection___VTable {
};

struct AbilitiesPlugin_FieldInfoCollection___StaticFields {
};

struct AbilitiesPlugin_FieldInfoCollection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AbilitiesPlugin_FieldInfoCollection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AbilitiesPlugin_FieldInfoCollection___VTable vtable;
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields {
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___VTable vtable;
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__VTable {
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__StaticFields {
};

struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_AbilitiesPlugin_FieldInfoCollection___Array__VTable vtable;
};

}
