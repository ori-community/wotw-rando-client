namespace app {
struct JsonArray__Fields {
    struct List_1_System_Object___Fields _;
};

struct JsonArray {
    struct JsonArray__Class *klass;
    MonitorData *monitor;
    struct JsonArray__Fields fields;
};

struct JsonArray__VTable {
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

struct JsonArray__StaticFields {
};

struct JsonArray__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonArray__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonArray__VTable vtable;
};

struct __declspec(align(8)) JsonObject__Fields {
    struct Dictionary_2_System_String_System_Object_ *_members;
};

struct JsonObject {
    struct JsonObject__Class *klass;
    MonitorData *monitor;
    struct JsonObject__Fields fields;
};

struct JsonObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add_1;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove_1;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};

struct JsonObject__StaticFields {
};

struct JsonObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonObject__VTable vtable;
};

struct IJsonSerializerStrategy {
    struct IJsonSerializerStrategy__Class *klass;
    MonitorData *monitor;
};

struct IJsonSerializerStrategy__VTable {
    VirtualInvokeData TrySerializeNonPrimitiveObject;
    VirtualInvokeData DeserializeObject;
};

struct IJsonSerializerStrategy__StaticFields {
};

struct IJsonSerializerStrategy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IJsonSerializerStrategy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IJsonSerializerStrategy__VTable vtable;
};

enum class PlayFabSimpleJson_TokenType__Enum : uint8_t {
    NONE = 0x00,
    CURLY_OPEN = 0x01,
    CURLY_CLOSE = 0x02,
    SQUARED_OPEN = 0x03,
    SQUARED_CLOSE = 0x04,
    COLON = 0x05,
    COMMA = 0x06,
    STRING = 0x07,
    NUMBER = 0x08,
    TRUE = 0x09,
    FALSE = 0x0a,
    NULL_1 = 0x0b,
};

struct PlayFabSimpleJson_TokenType__Enum__Boxed {
    struct PlayFabSimpleJson_TokenType__Enum__Class *klass;
    MonitorData *monitor;
    PlayFabSimpleJson_TokenType__Enum value;
    
};

struct PlayFabSimpleJson_TokenType__Enum__VTable {
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

struct PlayFabSimpleJson_TokenType__Enum__StaticFields {
};

struct PlayFabSimpleJson_TokenType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabSimpleJson_TokenType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabSimpleJson_TokenType__Enum__VTable vtable;
};

struct IEnumerable_1_System_Reflection_ConstructorInfo_ {
    struct IEnumerable_1_System_Reflection_ConstructorInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_ConstructorInfo___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Reflection_ConstructorInfo___StaticFields {
};

struct IEnumerable_1_System_Reflection_ConstructorInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Reflection_ConstructorInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Reflection_ConstructorInfo___VTable vtable;
};

struct ReflectionUtils_GetDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionUtils_GetDelegate {
    struct ReflectionUtils_GetDelegate__Class *klass;
    MonitorData *monitor;
    struct ReflectionUtils_GetDelegate__Fields fields;
};

struct ReflectionUtils_GetDelegate__VTable {
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

struct ReflectionUtils_GetDelegate__StaticFields {
};

struct ReflectionUtils_GetDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_GetDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_GetDelegate__VTable vtable;
};

struct ReflectionUtils_SetDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionUtils_SetDelegate {
    struct ReflectionUtils_SetDelegate__Class *klass;
    MonitorData *monitor;
    struct ReflectionUtils_SetDelegate__Fields fields;
};

struct ReflectionUtils_SetDelegate__VTable {
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

struct ReflectionUtils_SetDelegate__StaticFields {
};

struct ReflectionUtils_SetDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_SetDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_SetDelegate__VTable vtable;
};

struct ReflectionUtils_1 {
    struct ReflectionUtils_1__Class *klass;
    MonitorData *monitor;
};

struct ReflectionUtils_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionUtils_1__StaticFields {
    struct Object__Array *EmptyObjects;
    struct Object__Array *_1ObjArray;
};

struct ReflectionUtils_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_1__VTable vtable;
};

struct __declspec(align(8)) ReflectionUtils_c_DisplayClass26_0__Fields {
    struct ConstructorInfo *constructorInfo;
};

struct ReflectionUtils_c_DisplayClass26_0 {
    struct ReflectionUtils_c_DisplayClass26_0__Class *klass;
    MonitorData *monitor;
    struct ReflectionUtils_c_DisplayClass26_0__Fields fields;
};

struct ReflectionUtils_c_DisplayClass26_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionUtils_c_DisplayClass26_0__StaticFields {
};

struct ReflectionUtils_c_DisplayClass26_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_c_DisplayClass26_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_c_DisplayClass26_0__VTable vtable;
};

struct __declspec(align(8)) ReflectionUtils_c_DisplayClass30_0__Fields {
    struct MethodInfo_1 *methodInfo;
};

struct ReflectionUtils_c_DisplayClass30_0 {
    struct ReflectionUtils_c_DisplayClass30_0__Class *klass;
    MonitorData *monitor;
    struct ReflectionUtils_c_DisplayClass30_0__Fields fields;
};

struct ReflectionUtils_c_DisplayClass30_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionUtils_c_DisplayClass30_0__StaticFields {
};

struct ReflectionUtils_c_DisplayClass30_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_c_DisplayClass30_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_c_DisplayClass30_0__VTable vtable;
};

struct __declspec(align(8)) ReflectionUtils_c_DisplayClass31_0_1__Fields {
    struct FieldInfo_1 *fieldInfo;
};

struct ReflectionUtils_c_DisplayClass31_0_1 {
    struct ReflectionUtils_c_DisplayClass31_0_1__Class *klass;
    MonitorData *monitor;
    struct ReflectionUtils_c_DisplayClass31_0_1__Fields fields;
};

struct ReflectionUtils_c_DisplayClass31_0_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionUtils_c_DisplayClass31_0_1__StaticFields {
};

struct ReflectionUtils_c_DisplayClass31_0_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_c_DisplayClass31_0_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_c_DisplayClass31_0_1__VTable vtable;
};

struct __declspec(align(8)) ReflectionUtils_c_DisplayClass34_0__Fields {
    struct MethodInfo_1 *methodInfo;
};

struct ReflectionUtils_c_DisplayClass34_0 {
    struct ReflectionUtils_c_DisplayClass34_0__Class *klass;
    MonitorData *monitor;
    struct ReflectionUtils_c_DisplayClass34_0__Fields fields;
};

struct ReflectionUtils_c_DisplayClass34_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionUtils_c_DisplayClass34_0__StaticFields {
};

struct ReflectionUtils_c_DisplayClass34_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_c_DisplayClass34_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_c_DisplayClass34_0__VTable vtable;
};

struct __declspec(align(8)) ReflectionUtils_c_DisplayClass35_0__Fields {
    struct FieldInfo_1 *fieldInfo;
};

struct ReflectionUtils_c_DisplayClass35_0 {
    struct ReflectionUtils_c_DisplayClass35_0__Class *klass;
    MonitorData *monitor;
    struct ReflectionUtils_c_DisplayClass35_0__Fields fields;
};

struct ReflectionUtils_c_DisplayClass35_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionUtils_c_DisplayClass35_0__StaticFields {
};

struct ReflectionUtils_c_DisplayClass35_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils_c_DisplayClass35_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils_c_DisplayClass35_0__VTable vtable;
};

struct __declspec(align(8)) ScreenTimeTracker__Fields {
    struct Guid focusId;
    struct Guid gameSessionID;
    bool initialFocus;
    bool isSending;
    struct DateTime focusOffDateTime;
    struct DateTime focusOnDateTime;
    struct Queue_1_PlayFab_EventsModels_EventContents_ *eventsRequests;
    struct EntityKey_4 *entityKey;
};

struct ScreenTimeTracker {
    struct ScreenTimeTracker__Class *klass;
    MonitorData *monitor;
    struct ScreenTimeTracker__Fields fields;
};

struct __declspec(align(8)) Queue_1_PlayFab_EventsModels_EventContents___Fields {
    struct EventContents__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_PlayFab_EventsModels_EventContents_ {
    struct Queue_1_PlayFab_EventsModels_EventContents___Class *klass;
    MonitorData *monitor;
    struct Queue_1_PlayFab_EventsModels_EventContents___Fields fields;
};

struct Queue_1_PlayFab_EventsModels_EventContents___VTable {
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

struct Queue_1_PlayFab_EventsModels_EventContents___StaticFields {
};

struct Queue_1_PlayFab_EventsModels_EventContents___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_PlayFab_EventsModels_EventContents___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_PlayFab_EventsModels_EventContents___VTable vtable;
};

struct ScreenTimeTracker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnApplicationQuit;
    VirtualInvokeData OnApplicationFocus;
    VirtualInvokeData ClientSessionStart;
    VirtualInvokeData Send;
};

struct ScreenTimeTracker__StaticFields {
};

struct ScreenTimeTracker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScreenTimeTracker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScreenTimeTracker__VTable vtable;
};

struct __declspec(align(8)) PlayFabLoggerBase__Fields {
    struct Queue_1_System_String_ *LogMessageQueue;
    struct Thread *_writeLogThread;
    struct Object *_threadLock;
    struct DateTime _threadKillTime;
    bool _isApplicationPlaying;
    int32_t _pendingLogsCount;
    struct IPAddress *_ip_k__BackingField;
    int32_t _port_k__BackingField;
    struct String *_url_k__BackingField;
};

struct PlayFabLoggerBase {
    struct PlayFabLoggerBase__Class *klass;
    MonitorData *monitor;
    struct PlayFabLoggerBase__Fields fields;
};

struct __declspec(align(8)) Queue_1_System_String___Fields {
    struct String__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_System_String_ {
    struct Queue_1_System_String___Class *klass;
    MonitorData *monitor;
    struct Queue_1_System_String___Fields fields;
};

struct PlayFabLogger__Fields {
    struct PlayFabLoggerBase__Fields _;
};

struct PlayFabLogger {
    struct PlayFabLogger__Class *klass;
    MonitorData *monitor;
    struct PlayFabLogger__Fields fields;
};

struct Queue_1_System_String___VTable {
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

struct Queue_1_System_String___StaticFields {
};

struct Queue_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_System_String___VTable vtable;
};

struct PlayFabLogger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ip;
    VirtualInvokeData set_ip;
    VirtualInvokeData get_port;
    VirtualInvokeData set_port;
    VirtualInvokeData get_url;
    VirtualInvokeData set_url;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnEnable_1;
    VirtualInvokeData OnDisable_1;
    VirtualInvokeData OnDestroy_1;
    VirtualInvokeData BeginUploadLog;
    VirtualInvokeData UploadLog;
    VirtualInvokeData EndUploadLog;
};

struct PlayFabLogger__StaticFields {
};

struct PlayFabLogger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabLogger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabLogger__VTable vtable;
};

struct PlayFabLoggerBase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ip;
    VirtualInvokeData set_ip;
    VirtualInvokeData get_port;
    VirtualInvokeData set_port;
    VirtualInvokeData get_url;
    VirtualInvokeData set_url;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnEnable_1;
    VirtualInvokeData OnDisable_1;
    VirtualInvokeData OnDestroy_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
};

struct PlayFabLoggerBase__StaticFields {
    struct StringBuilder *Sb;
    struct TimeSpan _threadKillTimeout;
};

struct PlayFabLoggerBase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabLoggerBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabLoggerBase__VTable vtable;
};

struct __declspec(align(8)) PlayFabLoggerBase_RegisterLogger_d_23__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct PlayFabLoggerBase *__4__this;
};

struct PlayFabLoggerBase_RegisterLogger_d_23 {
    struct PlayFabLoggerBase_RegisterLogger_d_23__Class *klass;
    MonitorData *monitor;
    struct PlayFabLoggerBase_RegisterLogger_d_23__Fields fields;
};

struct PlayFabLoggerBase_RegisterLogger_d_23__VTable {
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

struct PlayFabLoggerBase_RegisterLogger_d_23__StaticFields {
};

struct PlayFabLoggerBase_RegisterLogger_d_23__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabLoggerBase_RegisterLogger_d_23__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabLoggerBase_RegisterLogger_d_23__VTable vtable;
};

struct Func_1_String___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_String_ {
    struct Func_1_String___Class *klass;
    MonitorData *monitor;
    struct Func_1_String___Fields fields;
};

struct Func_1_String___VTable {
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

struct Func_1_String___StaticFields {
};

struct Func_1_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_1_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_1_String___VTable vtable;
};

enum class HttpRequestState__Enum : int32_t {
    Sent = 0x00000000,
    Received = 0x00000001,
    Idle = 0x00000002,
    Error = 0x00000003,
};

struct HttpRequestState__Enum__Boxed {
    struct HttpRequestState__Enum__Class *klass;
    MonitorData *monitor;
    HttpRequestState__Enum value;
    
};

struct __declspec(align(8)) CallRequestContainer__Fields {
    HttpRequestState__Enum HttpState;
    
    struct HttpWebRequest *HttpRequest;
    struct String *ApiEndpoint;
    struct String *FullUrl;
    struct Byte__Array *Payload;
    struct String *JsonResponse;
    struct PlayFabRequestCommon *ApiRequest;
    struct Dictionary_2_System_String_System_String_ *RequestHeaders;
    struct PlayFabResultCommon *ApiResult;
    struct PlayFabError *Error;
    struct Action *DeserializeResultJson;
    struct Action *InvokeSuccessCallback;
    struct Action_1_PlayFab_PlayFabError_ *ErrorCallback;
    struct Object *CustomData;
    bool UseMainThreadDispatcher;
    struct HttpRequestMessage *_HttpRequestMessage_k__BackingField;
};

struct CallRequestContainer {
    struct CallRequestContainer__Class *klass;
    MonitorData *monitor;
    struct CallRequestContainer__Fields fields;
};

struct HttpRequestState__Enum__VTable {
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

struct HttpRequestState__Enum__StaticFields {
};

struct HttpRequestState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpRequestState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpRequestState__Enum__VTable vtable;
};

struct CallRequestContainer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CallRequestContainer__StaticFields {
};

struct CallRequestContainer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallRequestContainer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallRequestContainer__VTable vtable;
};

struct OneDsUnityHttpPlugin {
    struct OneDsUnityHttpPlugin__Class *klass;
    MonitorData *monitor;
};

struct OneDsUnityHttpPlugin__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DoPost;
};

struct OneDsUnityHttpPlugin__StaticFields {
};

struct OneDsUnityHttpPlugin__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDsUnityHttpPlugin__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDsUnityHttpPlugin__VTable vtable;
};

struct __declspec(align(8)) OneDsUnityHttpPlugin_c_DisplayClass1_0__Fields {
    struct UnityWebRequest *webRequest;
};

struct OneDsUnityHttpPlugin_c_DisplayClass1_0 {
    struct OneDsUnityHttpPlugin_c_DisplayClass1_0__Class *klass;
    MonitorData *monitor;
    struct OneDsUnityHttpPlugin_c_DisplayClass1_0__Fields fields;
};

struct OneDsUnityHttpPlugin_c_DisplayClass1_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OneDsUnityHttpPlugin_c_DisplayClass1_0__StaticFields {
};

struct OneDsUnityHttpPlugin_c_DisplayClass1_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDsUnityHttpPlugin_c_DisplayClass1_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDsUnityHttpPlugin_c_DisplayClass1_0__VTable vtable;
};

struct __declspec(align(8)) OneDsUnityHttpPlugin_Post_d_1__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct Object *request;
    struct Dictionary_2_System_String_System_String_ *extraHeaders;
    struct OneDsUnityHttpPlugin_c_DisplayClass1_0 *__8__1;
    struct Action_1_Object_ *callback;
};

struct OneDsUnityHttpPlugin_Post_d_1 {
    struct OneDsUnityHttpPlugin_Post_d_1__Class *klass;
    MonitorData *monitor;
    struct OneDsUnityHttpPlugin_Post_d_1__Fields fields;
};

struct OneDsUnityHttpPlugin_Post_d_1__VTable {
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

struct OneDsUnityHttpPlugin_Post_d_1__StaticFields {
};

struct OneDsUnityHttpPlugin_Post_d_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDsUnityHttpPlugin_Post_d_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDsUnityHttpPlugin_Post_d_1__VTable vtable;
};

struct OneDsWebRequestPlugin {
    struct OneDsWebRequestPlugin__Class *klass;
    MonitorData *monitor;
};

struct OneDsWebRequestPlugin__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DoPost;
};

struct OneDsWebRequestPlugin__StaticFields {
};

struct OneDsWebRequestPlugin__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDsWebRequestPlugin__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDsWebRequestPlugin__VTable vtable;
};

struct __declspec(align(8)) OneDsWebRequestPlugin_c_DisplayClass0_0__Fields {
    struct Dictionary_2_System_String_System_String_ *extraHeaders;
    struct Object *request;
    struct Action_1_Object_ *callback;
};

struct OneDsWebRequestPlugin_c_DisplayClass0_0 {
    struct OneDsWebRequestPlugin_c_DisplayClass0_0__Class *klass;
    MonitorData *monitor;
    struct OneDsWebRequestPlugin_c_DisplayClass0_0__Fields fields;
};

struct OneDsWebRequestPlugin_c_DisplayClass0_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OneDsWebRequestPlugin_c_DisplayClass0_0__StaticFields {
};

struct OneDsWebRequestPlugin_c_DisplayClass0_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDsWebRequestPlugin_c_DisplayClass0_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDsWebRequestPlugin_c_DisplayClass0_0__VTable vtable;
};

}
