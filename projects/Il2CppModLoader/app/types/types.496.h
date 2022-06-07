namespace app {
struct __declspec(align(8)) OneDsWebRequestPlugin_c_DisplayClass0_1__Fields {
    struct HttpWebResponse *response;
};

struct OneDsWebRequestPlugin_c_DisplayClass0_1 {
    struct OneDsWebRequestPlugin_c_DisplayClass0_1__Class *klass;
    MonitorData *monitor;
    struct OneDsWebRequestPlugin_c_DisplayClass0_1__Fields fields;
};

struct OneDsWebRequestPlugin_c_DisplayClass0_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OneDsWebRequestPlugin_c_DisplayClass0_1__StaticFields {
};

struct OneDsWebRequestPlugin_c_DisplayClass0_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDsWebRequestPlugin_c_DisplayClass0_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDsWebRequestPlugin_c_DisplayClass0_1__VTable vtable;
};

struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_ {
    struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___Class *klass;
    MonitorData *monitor;
    struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___Fields fields;
};

enum class ApiProcessingEventType__Enum : int32_t {
    Pre = 0x00000000,
    Post = 0x00000001,
};

struct ApiProcessingEventType__Enum__Boxed {
    struct ApiProcessingEventType__Enum__Class *klass;
    MonitorData *monitor;
    ApiProcessingEventType__Enum value;
    
};

struct __declspec(align(8)) ApiProcessingEventArgs__Fields {
    struct String *ApiEndpoint;
    ApiProcessingEventType__Enum EventType;
    
    struct PlayFabRequestCommon *Request;
    struct PlayFabResultCommon *Result;
};

struct ApiProcessingEventArgs {
    struct ApiProcessingEventArgs__Class *klass;
    MonitorData *monitor;
    struct ApiProcessingEventArgs__Fields fields;
};

struct ApiProcessingEventType__Enum__VTable {
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

struct ApiProcessingEventType__Enum__StaticFields {
};

struct ApiProcessingEventType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ApiProcessingEventType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ApiProcessingEventType__Enum__VTable vtable;
};

struct ApiProcessingEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ApiProcessingEventArgs__StaticFields {
};

struct ApiProcessingEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ApiProcessingEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ApiProcessingEventArgs__VTable vtable;
};

struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___VTable {
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

struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___StaticFields {
};

struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs___VTable vtable;
};

struct PlayFabHttp_ApiProcessErrorEvent__Fields {
    struct MulticastDelegate__Fields _;
};

struct PlayFabHttp_ApiProcessErrorEvent {
    struct PlayFabHttp_ApiProcessErrorEvent__Class *klass;
    MonitorData *monitor;
    struct PlayFabHttp_ApiProcessErrorEvent__Fields fields;
};

struct PlayFabHttp_ApiProcessErrorEvent__VTable {
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

struct PlayFabHttp_ApiProcessErrorEvent__StaticFields {
};

struct PlayFabHttp_ApiProcessErrorEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabHttp_ApiProcessErrorEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabHttp_ApiProcessErrorEvent__VTable vtable;
};

struct IPlayFabLogger {
    struct IPlayFabLogger__Class *klass;
    MonitorData *monitor;
};

struct IPlayFabLogger__VTable {
    VirtualInvokeData get_ip;
    VirtualInvokeData set_ip;
    VirtualInvokeData get_port;
    VirtualInvokeData set_port;
    VirtualInvokeData get_url;
    VirtualInvokeData set_url;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
};

struct IPlayFabLogger__StaticFields {
};

struct IPlayFabLogger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPlayFabLogger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPlayFabLogger__VTable vtable;
};

struct Action_1_Byte___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Byte_ {
    struct Action_1_Byte___Class *klass;
    MonitorData *monitor;
    struct Action_1_Byte___Fields fields;
};

struct Action_1_String___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_String_ {
    struct Action_1_String___Class *klass;
    MonitorData *monitor;
    struct Action_1_String___Fields fields;
};

struct Action_1_Byte___VTable {
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

struct Action_1_Byte___StaticFields {
};

struct Action_1_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_Byte___VTable vtable;
};

struct Action_1_String___VTable {
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

struct Action_1_String___StaticFields {
};

struct Action_1_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_String___VTable vtable;
};

struct SingletonMonoBehaviour_1_PlayFabHttp___Fields {
    struct MonoBehaviour__Fields _;
    bool initialized;
};

struct SingletonMonoBehaviour_1_PlayFabHttp_ {
    struct SingletonMonoBehaviour_1_PlayFabHttp___Class *klass;
    MonitorData *monitor;
    struct SingletonMonoBehaviour_1_PlayFabHttp___Fields fields;
};

struct PlayFabHttp__Fields {
    struct SingletonMonoBehaviour_1_PlayFabHttp___Fields _;
    struct Queue_1_System_Collections_IEnumerator_ *_injectedCoroutines;
    struct Queue_1_System_Action_ *_injectedAction;
};

struct PlayFabHttp {
    struct PlayFabHttp__Class *klass;
    MonitorData *monitor;
    struct PlayFabHttp__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_Internal_CallRequestContainer___Fields {
    struct CallRequestContainer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_Internal_CallRequestContainer_ {
    struct List_1_PlayFab_Internal_CallRequestContainer___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_Internal_CallRequestContainer___Fields fields;
};

struct CallRequestContainer__Array {
    struct CallRequestContainer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CallRequestContainer *vector[32];
};

struct IEnumerator_1_PlayFab_Internal_CallRequestContainer_ {
    struct IEnumerator_1_PlayFab_Internal_CallRequestContainer___Class *klass;
    MonitorData *monitor;
};

struct IScreenTimeTracker {
    struct IScreenTimeTracker__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Queue_1_System_Collections_IEnumerator___Fields {
    struct IEnumerator__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_System_Collections_IEnumerator_ {
    struct Queue_1_System_Collections_IEnumerator___Class *klass;
    MonitorData *monitor;
    struct Queue_1_System_Collections_IEnumerator___Fields fields;
};

struct SingletonMonoBehaviour_1_PlayFabHttp___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Awake;
    VirtualInvokeData Initialize;
};

struct SingletonMonoBehaviour_1_PlayFabHttp___StaticFields {
    struct PlayFabHttp *_instance;
};

struct SingletonMonoBehaviour_1_PlayFabHttp___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SingletonMonoBehaviour_1_PlayFabHttp___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SingletonMonoBehaviour_1_PlayFabHttp___VTable vtable;
};

struct CallRequestContainer__Array__VTable {
};

struct CallRequestContainer__Array__StaticFields {
};

struct CallRequestContainer__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallRequestContainer__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallRequestContainer__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_Internal_CallRequestContainer___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_Internal_CallRequestContainer___StaticFields {
};

struct IEnumerator_1_PlayFab_Internal_CallRequestContainer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_Internal_CallRequestContainer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_Internal_CallRequestContainer___VTable vtable;
};

struct List_1_PlayFab_Internal_CallRequestContainer___VTable {
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

struct List_1_PlayFab_Internal_CallRequestContainer___StaticFields {
    struct CallRequestContainer__Array *_emptyArray;
};

struct List_1_PlayFab_Internal_CallRequestContainer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_Internal_CallRequestContainer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_Internal_CallRequestContainer___VTable vtable;
};

struct IScreenTimeTracker__VTable {
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnApplicationQuit;
    VirtualInvokeData OnApplicationFocus;
    VirtualInvokeData ClientSessionStart;
    VirtualInvokeData Send;
};

struct IScreenTimeTracker__StaticFields {
};

struct IScreenTimeTracker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IScreenTimeTracker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IScreenTimeTracker__VTable vtable;
};

struct Queue_1_System_Collections_IEnumerator___VTable {
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

struct Queue_1_System_Collections_IEnumerator___StaticFields {
};

struct Queue_1_System_Collections_IEnumerator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_System_Collections_IEnumerator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_System_Collections_IEnumerator___VTable vtable;
};

struct PlayFabHttp__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Awake;
    VirtualInvokeData Initialize;
};

struct PlayFabHttp__StaticFields {
    struct List_1_PlayFab_Internal_CallRequestContainer_ *_apiCallQueue;
    struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_ *ApiProcessingEventHandler;
    struct PlayFabHttp_ApiProcessErrorEvent *ApiProcessingErrorEventHandler;
    struct Dictionary_2_System_String_System_String_ *GlobalHeaderInjection;
    struct IPlayFabLogger *_logger;
    struct IScreenTimeTracker *screenTimeTracker;
};

struct PlayFabHttp__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabHttp__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabHttp__VTable vtable;
};

struct __declspec(align(8)) PlayFabHttp_SendScreenTimeEvents_d_19__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    float secondsBetweenBatches;
    struct WaitForSeconds *_delay_5__2;
};

struct PlayFabHttp_SendScreenTimeEvents_d_19 {
    struct PlayFabHttp_SendScreenTimeEvents_d_19__Class *klass;
    MonitorData *monitor;
    struct PlayFabHttp_SendScreenTimeEvents_d_19__Fields fields;
};

struct PlayFabHttp_SendScreenTimeEvents_d_19__VTable {
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

struct PlayFabHttp_SendScreenTimeEvents_d_19__StaticFields {
};

struct PlayFabHttp_SendScreenTimeEvents_d_19__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabHttp_SendScreenTimeEvents_d_19__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabHttp_SendScreenTimeEvents_d_19__VTable vtable;
};

struct __declspec(align(8)) PlayFabUnityHttp__Fields {
    bool _isInitialized;
    int32_t _pendingWwwMessages;
    struct String *_AuthKey_k__BackingField;
    struct String *_EntityToken_k__BackingField;
};

struct PlayFabUnityHttp {
    struct PlayFabUnityHttp__Class *klass;
    MonitorData *monitor;
    struct PlayFabUnityHttp__Fields fields;
};

struct PlayFabUnityHttp__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AuthKey;
    VirtualInvokeData set_AuthKey;
    VirtualInvokeData get_EntityToken;
    VirtualInvokeData set_EntityToken;
    VirtualInvokeData get_IsInitialized;
    VirtualInvokeData Initialize;
    VirtualInvokeData Update;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SimpleGetCall;
    VirtualInvokeData SimplePutCall;
    VirtualInvokeData SimplePostCall;
    VirtualInvokeData MakeApiCall;
    VirtualInvokeData GetPendingMessages;
};

struct PlayFabUnityHttp__StaticFields {
};

struct PlayFabUnityHttp__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabUnityHttp__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabUnityHttp__VTable vtable;
};

struct __declspec(align(8)) PlayFabUnityHttp_SimpleCallCoroutine_d_18__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct Byte__Array *payload;
    struct String *fullUrl;
    struct Action_1_String_ *errorCallback;
    struct Action_1_Byte_ *successCallback;
    struct String *method;
    struct UnityWebRequest *_www_5__2;
};

struct PlayFabUnityHttp_SimpleCallCoroutine_d_18 {
    struct PlayFabUnityHttp_SimpleCallCoroutine_d_18__Class *klass;
    MonitorData *monitor;
    struct PlayFabUnityHttp_SimpleCallCoroutine_d_18__Fields fields;
};

struct PlayFabUnityHttp_SimpleCallCoroutine_d_18__VTable {
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

struct PlayFabUnityHttp_SimpleCallCoroutine_d_18__StaticFields {
};

struct PlayFabUnityHttp_SimpleCallCoroutine_d_18__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabUnityHttp_SimpleCallCoroutine_d_18__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabUnityHttp_SimpleCallCoroutine_d_18__VTable vtable;
};

struct __declspec(align(8)) PlayFabUnityHttp_Post_d_20__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct CallRequestContainer *reqContainer;
    struct PlayFabUnityHttp *__4__this;
    struct UnityWebRequest *_www_5__2;
};

struct PlayFabUnityHttp_Post_d_20 {
    struct PlayFabUnityHttp_Post_d_20__Class *klass;
    MonitorData *monitor;
    struct PlayFabUnityHttp_Post_d_20__Fields fields;
};

struct PlayFabUnityHttp_Post_d_20__VTable {
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

struct PlayFabUnityHttp_Post_d_20__StaticFields {
};

struct PlayFabUnityHttp_Post_d_20__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabUnityHttp_Post_d_20__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabUnityHttp_Post_d_20__VTable vtable;
};

struct __declspec(align(8)) PlayFabWebRequest__Fields {
    bool _isInitialized;
    struct String *_AuthKey_k__BackingField;
    struct String *_EntityToken_k__BackingField;
};

struct PlayFabWebRequest {
    struct PlayFabWebRequest__Class *klass;
    MonitorData *monitor;
    struct PlayFabWebRequest__Fields fields;
};

struct PlayFabWebRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AuthKey;
    VirtualInvokeData set_AuthKey;
    VirtualInvokeData get_EntityToken;
    VirtualInvokeData set_EntityToken;
    VirtualInvokeData get_IsInitialized;
    VirtualInvokeData Initialize;
    VirtualInvokeData Update;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SimpleGetCall;
    VirtualInvokeData SimplePutCall;
    VirtualInvokeData SimplePostCall;
    VirtualInvokeData MakeApiCall;
    VirtualInvokeData GetPendingMessages;
};

struct PlayFabWebRequest__StaticFields {
    struct Queue_1_System_Action_ *ResultQueueTransferThread;
    struct Queue_1_System_Action_ *ResultQueueMainThread;
    struct List_1_PlayFab_Internal_CallRequestContainer_ *ActiveRequests;
    bool certValidationSet;
    struct Thread *_requestQueueThread;
    struct Object *_ThreadLock;
    struct TimeSpan ThreadKillTimeout;
    struct DateTime _threadKillTime;
    bool _isApplicationPlaying;
    int32_t _activeCallCount;
    struct String *_unityVersion;
};

struct PlayFabWebRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabWebRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabWebRequest__VTable vtable;
};

struct __declspec(align(8)) PlayFabWebRequest_c_DisplayClass29_0__Fields {
    struct PlayFabWebRequest *__4__this;
    struct String *fullUrl;
    struct Action_1_Byte_ *successCallback;
    struct Action_1_String_ *errorCallback;
};

struct PlayFabWebRequest_c_DisplayClass29_0 {
    struct PlayFabWebRequest_c_DisplayClass29_0__Class *klass;
    MonitorData *monitor;
    struct PlayFabWebRequest_c_DisplayClass29_0__Fields fields;
};

struct PlayFabWebRequest_c_DisplayClass29_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabWebRequest_c_DisplayClass29_0__StaticFields {
};

struct PlayFabWebRequest_c_DisplayClass29_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabWebRequest_c_DisplayClass29_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabWebRequest_c_DisplayClass29_0__VTable vtable;
};

struct __declspec(align(8)) PlayFabWebRequest_c_DisplayClass30_0__Fields {
    struct PlayFabWebRequest *__4__this;
    struct String *fullUrl;
    struct Byte__Array *payload;
    struct Action_1_Byte_ *successCallback;
    struct Action_1_String_ *errorCallback;
};

struct PlayFabWebRequest_c_DisplayClass30_0 {
    struct PlayFabWebRequest_c_DisplayClass30_0__Class *klass;
    MonitorData *monitor;
    struct PlayFabWebRequest_c_DisplayClass30_0__Fields fields;
};

struct PlayFabWebRequest_c_DisplayClass30_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabWebRequest_c_DisplayClass30_0__StaticFields {
};

struct PlayFabWebRequest_c_DisplayClass30_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabWebRequest_c_DisplayClass30_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabWebRequest_c_DisplayClass30_0__VTable vtable;
};

struct __declspec(align(8)) PlayFabWebRequest_c_DisplayClass31_0__Fields {
    struct PlayFabWebRequest *__4__this;
    struct String *fullUrl;
    struct Byte__Array *payload;
    struct Action_1_Byte_ *successCallback;
    struct Action_1_String_ *errorCallback;
};

struct PlayFabWebRequest_c_DisplayClass31_0 {
    struct PlayFabWebRequest_c_DisplayClass31_0__Class *klass;
    MonitorData *monitor;
    struct PlayFabWebRequest_c_DisplayClass31_0__Fields fields;
};

struct PlayFabWebRequest_c_DisplayClass31_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabWebRequest_c_DisplayClass31_0__StaticFields {
};

struct PlayFabWebRequest_c_DisplayClass31_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabWebRequest_c_DisplayClass31_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabWebRequest_c_DisplayClass31_0__VTable vtable;
};

struct __declspec(align(8)) PlayFabWebRequest_c_DisplayClass38_0__Fields {
    struct CallRequestContainer *reqContainer;
};

struct PlayFabWebRequest_c_DisplayClass38_0 {
    struct PlayFabWebRequest_c_DisplayClass38_0__Class *klass;
    MonitorData *monitor;
    struct PlayFabWebRequest_c_DisplayClass38_0__Fields fields;
};

struct PlayFabWebRequest_c_DisplayClass38_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabWebRequest_c_DisplayClass38_0__StaticFields {
};

struct PlayFabWebRequest_c_DisplayClass38_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabWebRequest_c_DisplayClass38_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabWebRequest_c_DisplayClass38_0__VTable vtable;
};

struct __declspec(align(8)) PlayFabWebRequest_c_DisplayClass39_0__Fields {
    struct CallRequestContainer *reqContainer;
};

struct PlayFabWebRequest_c_DisplayClass39_0 {
    struct PlayFabWebRequest_c_DisplayClass39_0__Class *klass;
    MonitorData *monitor;
    struct PlayFabWebRequest_c_DisplayClass39_0__Fields fields;
};

struct PlayFabWebRequest_c_DisplayClass39_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabWebRequest_c_DisplayClass39_0__StaticFields {
};

struct PlayFabWebRequest_c_DisplayClass39_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabWebRequest_c_DisplayClass39_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabWebRequest_c_DisplayClass39_0__VTable vtable;
};

struct __declspec(align(8)) PlayFabEvents__Fields {
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_AuthenticationModels_GetEntityTokenRequest_ *OnAuthenticationGetEntityTokenRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_ *OnAuthenticationGetEntityTokenResultEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LoginResult_ *OnLoginResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AcceptTradeRequest_ *OnAcceptTradeRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AcceptTradeResponse_ *OnAcceptTradeResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddFriendRequest_ *OnAddFriendRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddFriendResult_ *OnAddFriendResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddGenericIDRequest_ *OnAddGenericIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddGenericIDResult_ *OnAddGenericIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddOrUpdateContactEmailRequest_ *OnAddOrUpdateContactEmailRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult_ *OnAddOrUpdateContactEmailResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddSharedGroupMembersRequest_ *OnAddSharedGroupMembersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddSharedGroupMembersResult_ *OnAddSharedGroupMembersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddUsernamePasswordRequest_ *OnAddUsernamePasswordRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AddUsernamePasswordResult_ *OnAddUsernamePasswordResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AddUserVirtualCurrencyRequest_ *OnAddUserVirtualCurrencyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_ *OnAddUserVirtualCurrencyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationRequest_ *OnAndroidDevicePushNotificationRegistrationRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult_ *OnAndroidDevicePushNotificationRegistrationResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_AttributeInstallRequest_ *OnAttributeInstallRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_AttributeInstallResult_ *OnAttributeInstallResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CancelTradeRequest_ *OnCancelTradeRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_CancelTradeResponse_ *OnCancelTradeResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConfirmPurchaseRequest_ *OnConfirmPurchaseRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ConfirmPurchaseResult_ *OnConfirmPurchaseResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConsumeItemRequest_ *OnConsumeItemRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ConsumeItemResult_ *OnConsumeItemResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConsumePSNEntitlementsRequest_ *OnConsumePSNEntitlementsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult_ *OnConsumePSNEntitlementsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConsumeXboxEntitlementsRequest_ *OnConsumeXboxEntitlementsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult_ *OnConsumeXboxEntitlementsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CreateSharedGroupRequest_ *OnCreateSharedGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_CreateSharedGroupResult_ *OnCreateSharedGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ExecuteCloudScriptRequest_ *OnExecuteCloudScriptRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ExecuteCloudScriptResult_ *OnExecuteCloudScriptResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetAccountInfoRequest_ *OnGetAccountInfoRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetAccountInfoResult_ *OnGetAccountInfoResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ListUsersCharactersRequest_ *OnGetAllUsersCharactersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ListUsersCharactersResult_ *OnGetAllUsersCharactersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCatalogItemsRequest_ *OnGetCatalogItemsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCatalogItemsResult_ *OnGetCatalogItemsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterDataRequest_ *OnGetCharacterDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterDataResult_ *OnGetCharacterDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterInventoryRequest_ *OnGetCharacterInventoryRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterInventoryResult_ *OnGetCharacterInventoryResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterLeaderboardRequest_ *OnGetCharacterLeaderboardRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterLeaderboardResult_ *OnGetCharacterLeaderboardResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterDataRequest_ *OnGetCharacterReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterDataResult_ *OnGetCharacterReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterStatisticsRequest_ *OnGetCharacterStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetCharacterStatisticsResult_ *OnGetCharacterStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetContentDownloadUrlRequest_ *OnGetContentDownloadUrlRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetContentDownloadUrlResult_ *OnGetContentDownloadUrlResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CurrentGamesRequest_ *OnGetCurrentGamesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_CurrentGamesResult_ *OnGetCurrentGamesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetFriendLeaderboardRequest_ *OnGetFriendLeaderboardRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetLeaderboardResult_ *OnGetFriendLeaderboardResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerRequest_ *OnGetFriendLeaderboardAroundPlayerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_ *OnGetFriendLeaderboardAroundPlayerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetFriendsListRequest_ *OnGetFriendsListRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetFriendsListResult_ *OnGetFriendsListResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GameServerRegionsRequest_ *OnGetGameServerRegionsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GameServerRegionsResult_ *OnGetGameServerRegionsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetLeaderboardRequest_ *OnGetLeaderboardRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetLeaderboardResult_ *OnGetLeaderboardResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterRequest_ *OnGetLeaderboardAroundCharacterRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_ *OnGetLeaderboardAroundCharacterResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerRequest_ *OnGetLeaderboardAroundPlayerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_ *OnGetLeaderboardAroundPlayerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersRequest_ *OnGetLeaderboardForUserCharactersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_ *OnGetLeaderboardForUserCharactersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPaymentTokenRequest_ *OnGetPaymentTokenRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPaymentTokenResult_ *OnGetPaymentTokenResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenRequest_ *OnGetPhotonAuthenticationTokenRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult_ *OnGetPhotonAuthenticationTokenResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerCombinedInfoRequest_ *OnGetPlayerCombinedInfoRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult_ *OnGetPlayerCombinedInfoResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerProfileRequest_ *OnGetPlayerProfileRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerProfileResult_ *OnGetPlayerProfileResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerSegmentsRequest_ *OnGetPlayerSegmentsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerSegmentsResult_ *OnGetPlayerSegmentsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerStatisticsRequest_ *OnGetPlayerStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerStatisticsResult_ *OnGetPlayerStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerStatisticVersionsRequest_ *OnGetPlayerStatisticVersionsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult_ *OnGetPlayerStatisticVersionsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerTagsRequest_ *OnGetPlayerTagsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerTagsResult_ *OnGetPlayerTagsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerTradesRequest_ *OnGetPlayerTradesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayerTradesResponse_ *OnGetPlayerTradesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsRequest_ *OnGetPlayFabIDsFromFacebookIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_ *OnGetPlayFabIDsFromFacebookIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsRequest_ *OnGetPlayFabIDsFromFacebookInstantGamesIdsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_ *OnGetPlayFabIDsFromFacebookInstantGamesIdsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsRequest_ *OnGetPlayFabIDsFromGameCenterIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult_ *OnGetPlayFabIDsFromGameCenterIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsRequest_ *OnGetPlayFabIDsFromGenericIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult_ *OnGetPlayFabIDsFromGenericIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsRequest_ *OnGetPlayFabIDsFromGoogleIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult_ *OnGetPlayFabIDsFromGoogleIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsRequest_ *OnGetPlayFabIDsFromKongregateIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult_ *OnGetPlayFabIDsFromKongregateIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_ *OnGetPlayFabIDsFromNintendoSwitchDeviceIdsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_ *OnGetPlayFabIDsFromNintendoSwitchDeviceIdsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsRequest_ *OnGetPlayFabIDsFromPSNAccountIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_ *OnGetPlayFabIDsFromPSNAccountIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromSteamIDsRequest_ *OnGetPlayFabIDsFromSteamIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromSteamIDsResult_ *OnGetPlayFabIDsFromSteamIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromTwitchIDsRequest_ *OnGetPlayFabIDsFromTwitchIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromTwitchIDsResult_ *OnGetPlayFabIDsFromTwitchIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromXboxLiveIDsRequest_ *OnGetPlayFabIDsFromXboxLiveIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromXboxLiveIDsResult_ *OnGetPlayFabIDsFromXboxLiveIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPublisherDataRequest_ *OnGetPublisherDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPublisherDataResult_ *OnGetPublisherDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPurchaseRequest_ *OnGetPurchaseRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPurchaseResult_ *OnGetPurchaseResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetSharedGroupDataRequest_ *OnGetSharedGroupDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetSharedGroupDataResult_ *OnGetSharedGroupDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetStoreItemsRequest_ *OnGetStoreItemsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetStoreItemsResult_ *OnGetStoreItemsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetTimeRequest_ *OnGetTimeRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetTimeResult_ *OnGetTimeResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetTitleDataRequest_ *OnGetTitleDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetTitleDataResult_ *OnGetTitleDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetTitleNewsRequest_ *OnGetTitleNewsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetTitleNewsResult_ *OnGetTitleNewsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetTitlePublicKeyRequest_ *OnGetTitlePublicKeyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetTitlePublicKeyResult_ *OnGetTitlePublicKeyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetTradeStatusRequest_ *OnGetTradeStatusRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetTradeStatusResponse_ *OnGetTradeStatusResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetUserDataRequest_ *OnGetUserDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetUserDataResult_ *OnGetUserDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetUserInventoryRequest_ *OnGetUserInventoryRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetUserInventoryResult_ *OnGetUserInventoryResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetUserDataRequest_ *OnGetUserPublisherDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetUserDataResult_ *OnGetUserPublisherDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetUserDataRequest_ *OnGetUserPublisherReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetUserDataResult_ *OnGetUserPublisherReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetUserDataRequest_ *OnGetUserReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetUserDataResult_ *OnGetUserReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetWindowsHelloChallengeRequest_ *OnGetWindowsHelloChallengeRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse_ *OnGetWindowsHelloChallengeResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GrantCharacterToUserRequest_ *OnGrantCharacterToUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GrantCharacterToUserResult_ *OnGrantCharacterToUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkAndroidDeviceIDRequest_ *OnLinkAndroidDeviceIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult_ *OnLinkAndroidDeviceIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkCustomIDRequest_ *OnLinkCustomIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkCustomIDResult_ *OnLinkCustomIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkFacebookAccountRequest_ *OnLinkFacebookAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkFacebookAccountResult_ *OnLinkFacebookAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_ *OnLinkFacebookInstantGamesIdRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_ *OnLinkFacebookInstantGamesIdResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkGameCenterAccountRequest_ *OnLinkGameCenterAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkGameCenterAccountResult_ *OnLinkGameCenterAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkGoogleAccountRequest_ *OnLinkGoogleAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkGoogleAccountResult_ *OnLinkGoogleAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkIOSDeviceIDRequest_ *OnLinkIOSDeviceIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkIOSDeviceIDResult_ *OnLinkIOSDeviceIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkKongregateAccountRequest_ *OnLinkKongregateRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkKongregateAccountResult_ *OnLinkKongregateResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest_ *OnLinkNintendoSwitchDeviceIdRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_ *OnLinkNintendoSwitchDeviceIdResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkOpenIdConnectRequest_ *OnLinkOpenIdConnectRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_EmptyResult_ *OnLinkOpenIdConnectResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkPSNAccountRequest_ *OnLinkPSNAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkPSNAccountResult_ *OnLinkPSNAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkSteamAccountRequest_ *OnLinkSteamAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkSteamAccountResult_ *OnLinkSteamAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkTwitchAccountRequest_ *OnLinkTwitchRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkTwitchAccountResult_ *OnLinkTwitchResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkWindowsHelloAccountRequest_ *OnLinkWindowsHelloRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkWindowsHelloAccountResponse_ *OnLinkWindowsHelloResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LinkXboxAccountRequest_ *OnLinkXboxAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkXboxAccountResult_ *OnLinkXboxAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithAndroidDeviceIDRequest_ *OnLoginWithAndroidDeviceIDRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithCustomIDRequest_ *OnLoginWithCustomIDRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithEmailAddressRequest_ *OnLoginWithEmailAddressRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithFacebookRequest_ *OnLoginWithFacebookRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithFacebookInstantGamesIdRequest_ *OnLoginWithFacebookInstantGamesIdRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithGameCenterRequest_ *OnLoginWithGameCenterRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithGoogleAccountRequest_ *OnLoginWithGoogleAccountRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithIOSDeviceIDRequest_ *OnLoginWithIOSDeviceIDRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithKongregateRequest_ *OnLoginWithKongregateRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithNintendoSwitchDeviceIdRequest_ *OnLoginWithNintendoSwitchDeviceIdRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithOpenIdConnectRequest_ *OnLoginWithOpenIdConnectRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithPlayFabRequest_ *OnLoginWithPlayFabRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithPSNRequest_ *OnLoginWithPSNRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithSteamRequest_ *OnLoginWithSteamRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithTwitchRequest_ *OnLoginWithTwitchRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithWindowsHelloRequest_ *OnLoginWithWindowsHelloRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithXboxRequest_ *OnLoginWithXboxRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_MatchmakeRequest_ *OnMatchmakeRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_MatchmakeResult_ *OnMatchmakeResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_OpenTradeRequest_ *OnOpenTradeRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_OpenTradeResponse_ *OnOpenTradeResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_PayForPurchaseRequest_ *OnPayForPurchaseRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_PayForPurchaseResult_ *OnPayForPurchaseResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_PurchaseItemRequest_ *OnPurchaseItemRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_PurchaseItemResult_ *OnPurchaseItemResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RedeemCouponRequest_ *OnRedeemCouponRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RedeemCouponResult_ *OnRedeemCouponResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RefreshPSNAuthTokenRequest_ *OnRefreshPSNAuthTokenRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_EmptyResponse_ *OnRefreshPSNAuthTokenResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RegisterForIOSPushNotificationRequest_ *OnRegisterForIOSPushNotificationRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RegisterForIOSPushNotificationResult_ *OnRegisterForIOSPushNotificationResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RegisterPlayFabUserRequest_ *OnRegisterPlayFabUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RegisterPlayFabUserResult_ *OnRegisterPlayFabUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RegisterWithWindowsHelloRequest_ *OnRegisterWithWindowsHelloRequestEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RemoveContactEmailRequest_ *OnRemoveContactEmailRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RemoveContactEmailResult_ *OnRemoveContactEmailResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RemoveFriendRequest_ *OnRemoveFriendRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RemoveFriendResult_ *OnRemoveFriendResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RemoveGenericIDRequest_ *OnRemoveGenericIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RemoveGenericIDResult_ *OnRemoveGenericIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RemoveSharedGroupMembersRequest_ *OnRemoveSharedGroupMembersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RemoveSharedGroupMembersResult_ *OnRemoveSharedGroupMembersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_DeviceInfoRequest_ *OnReportDeviceInfoRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_EmptyResponse_ *OnReportDeviceInfoResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ReportPlayerClientRequest_ *OnReportPlayerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ReportPlayerClientResult_ *OnReportPlayerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_RestoreIOSPurchasesRequest_ *OnRestoreIOSPurchasesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_RestoreIOSPurchasesResult_ *OnRestoreIOSPurchasesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_SendAccountRecoveryEmailRequest_ *OnSendAccountRecoveryEmailRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_SendAccountRecoveryEmailResult_ *OnSendAccountRecoveryEmailResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_SetFriendTagsRequest_ *OnSetFriendTagsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_SetFriendTagsResult_ *OnSetFriendTagsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_SetPlayerSecretRequest_ *OnSetPlayerSecretRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_SetPlayerSecretResult_ *OnSetPlayerSecretResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_StartGameRequest_ *OnStartGameRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_StartGameResult_ *OnStartGameResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_StartPurchaseRequest_ *OnStartPurchaseRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_StartPurchaseResult_ *OnStartPurchaseResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_SubtractUserVirtualCurrencyRequest_ *OnSubtractUserVirtualCurrencyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_ *OnSubtractUserVirtualCurrencyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkAndroidDeviceIDRequest_ *OnUnlinkAndroidDeviceIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkAndroidDeviceIDResult_ *OnUnlinkAndroidDeviceIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkCustomIDRequest_ *OnUnlinkCustomIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkCustomIDResult_ *OnUnlinkCustomIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkFacebookAccountRequest_ *OnUnlinkFacebookAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkFacebookAccountResult_ *OnUnlinkFacebookAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdRequest_ *OnUnlinkFacebookInstantGamesIdRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdResult_ *OnUnlinkFacebookInstantGamesIdResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkGameCenterAccountRequest_ *OnUnlinkGameCenterAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkGameCenterAccountResult_ *OnUnlinkGameCenterAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkGoogleAccountRequest_ *OnUnlinkGoogleAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkGoogleAccountResult_ *OnUnlinkGoogleAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkIOSDeviceIDRequest_ *OnUnlinkIOSDeviceIDRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkIOSDeviceIDResult_ *OnUnlinkIOSDeviceIDResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkKongregateAccountRequest_ *OnUnlinkKongregateRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkKongregateAccountResult_ *OnUnlinkKongregateResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkNintendoSwitchDeviceIdRequest_ *OnUnlinkNintendoSwitchDeviceIdRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkNintendoSwitchDeviceIdResult_ *OnUnlinkNintendoSwitchDeviceIdResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UninkOpenIdConnectRequest_ *OnUnlinkOpenIdConnectRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_EmptyResponse_ *OnUnlinkOpenIdConnectResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkPSNAccountRequest_ *OnUnlinkPSNAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkPSNAccountResult_ *OnUnlinkPSNAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkSteamAccountRequest_ *OnUnlinkSteamAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkSteamAccountResult_ *OnUnlinkSteamAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkTwitchAccountRequest_ *OnUnlinkTwitchRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkTwitchAccountResult_ *OnUnlinkTwitchResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkWindowsHelloAccountRequest_ *OnUnlinkWindowsHelloRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkWindowsHelloAccountResponse_ *OnUnlinkWindowsHelloResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkXboxAccountRequest_ *OnUnlinkXboxAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlinkXboxAccountResult_ *OnUnlinkXboxAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlockContainerInstanceRequest_ *OnUnlockContainerInstanceRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlockContainerItemResult_ *OnUnlockContainerInstanceResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlockContainerItemRequest_ *OnUnlockContainerItemRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UnlockContainerItemResult_ *OnUnlockContainerItemResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateAvatarUrlRequest_ *OnUpdateAvatarUrlRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_EmptyResponse_ *OnUpdateAvatarUrlResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateCharacterDataRequest_ *OnUpdateCharacterDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UpdateCharacterDataResult_ *OnUpdateCharacterDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateCharacterStatisticsRequest_ *OnUpdateCharacterStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UpdateCharacterStatisticsResult_ *OnUpdateCharacterStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdatePlayerStatisticsRequest_ *OnUpdatePlayerStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UpdatePlayerStatisticsResult_ *OnUpdatePlayerStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateSharedGroupDataRequest_ *OnUpdateSharedGroupDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UpdateSharedGroupDataResult_ *OnUpdateSharedGroupDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateUserDataRequest_ *OnUpdateUserDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UpdateUserDataResult_ *OnUpdateUserDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateUserDataRequest_ *OnUpdateUserPublisherDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UpdateUserDataResult_ *OnUpdateUserPublisherDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_ *OnUpdateUserTitleDisplayNameRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_ *OnUpdateUserTitleDisplayNameResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ValidateAmazonReceiptRequest_ *OnValidateAmazonIAPReceiptRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ValidateAmazonReceiptResult_ *OnValidateAmazonIAPReceiptResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ValidateGooglePlayPurchaseRequest_ *OnValidateGooglePlayPurchaseRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ValidateGooglePlayPurchaseResult_ *OnValidateGooglePlayPurchaseResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ValidateIOSReceiptRequest_ *OnValidateIOSReceiptRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ValidateIOSReceiptResult_ *OnValidateIOSReceiptResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ValidateWindowsReceiptRequest_ *OnValidateWindowsStoreReceiptRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_ValidateWindowsReceiptResult_ *OnValidateWindowsStoreReceiptResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_WriteClientCharacterEventRequest_ *OnWriteCharacterEventRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_WriteEventResponse_ *OnWriteCharacterEventResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_WriteClientPlayerEventRequest_ *OnWritePlayerEventRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_WriteEventResponse_ *OnWritePlayerEventResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_WriteTitleEventRequest_ *OnWriteTitleEventRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_WriteEventResponse_ *OnWriteTitleEventResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_ *OnCloudScriptExecuteEntityCloudScriptRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_ *OnCloudScriptExecuteEntityCloudScriptResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_AbortFileUploadsRequest_ *OnDataAbortFileUploadsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_AbortFileUploadsResponse_ *OnDataAbortFileUploadsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_DeleteFilesRequest_ *OnDataDeleteFilesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_DeleteFilesResponse_ *OnDataDeleteFilesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_FinalizeFileUploadsRequest_ *OnDataFinalizeFileUploadsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_FinalizeFileUploadsResponse_ *OnDataFinalizeFileUploadsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_GetFilesRequest_ *OnDataGetFilesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_GetFilesResponse_ *OnDataGetFilesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_GetObjectsRequest_ *OnDataGetObjectsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_GetObjectsResponse_ *OnDataGetObjectsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_InitiateFileUploadsRequest_ *OnDataInitiateFileUploadsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_InitiateFileUploadsResponse_ *OnDataInitiateFileUploadsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_DataModels_SetObjectsRequest_ *OnDataSetObjectsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_DataModels_SetObjectsResponse_ *OnDataSetObjectsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_EventsModels_WriteEventsRequest_ *OnEventsWriteEventsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_EventsModels_WriteEventsResponse_ *OnEventsWriteEventsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_AcceptGroupApplicationRequest_ *OnGroupsAcceptGroupApplicationRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsAcceptGroupApplicationResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_AcceptGroupInvitationRequest_ *OnGroupsAcceptGroupInvitationRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsAcceptGroupInvitationResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_AddMembersRequest_ *OnGroupsAddMembersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsAddMembersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ApplyToGroupRequest_ *OnGroupsApplyToGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ApplyToGroupResponse_ *OnGroupsApplyToGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_BlockEntityRequest_ *OnGroupsBlockEntityRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsBlockEntityResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ChangeMemberRoleRequest_ *OnGroupsChangeMemberRoleRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsChangeMemberRoleResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_CreateGroupRequest_ *OnGroupsCreateGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_CreateGroupResponse_ *OnGroupsCreateGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_CreateGroupRoleRequest_ *OnGroupsCreateRoleRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_CreateGroupRoleResponse_ *OnGroupsCreateRoleResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_DeleteGroupRequest_ *OnGroupsDeleteGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsDeleteGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_DeleteRoleRequest_ *OnGroupsDeleteRoleRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsDeleteRoleResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_GetGroupRequest_ *OnGroupsGetGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_GetGroupResponse_ *OnGroupsGetGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_InviteToGroupRequest_ *OnGroupsInviteToGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_InviteToGroupResponse_ *OnGroupsInviteToGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_IsMemberRequest_ *OnGroupsIsMemberRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_IsMemberResponse_ *OnGroupsIsMemberResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ListGroupApplicationsRequest_ *OnGroupsListGroupApplicationsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_ *OnGroupsListGroupApplicationsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ListGroupBlocksRequest_ *OnGroupsListGroupBlocksRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListGroupBlocksResponse_ *OnGroupsListGroupBlocksResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ListGroupInvitationsRequest_ *OnGroupsListGroupInvitationsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_ *OnGroupsListGroupInvitationsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ListGroupMembersRequest_ *OnGroupsListGroupMembersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListGroupMembersResponse_ *OnGroupsListGroupMembersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ListMembershipRequest_ *OnGroupsListMembershipRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListMembershipResponse_ *OnGroupsListMembershipResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_ListMembershipOpportunitiesRequest_ *OnGroupsListMembershipOpportunitiesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_ *OnGroupsListMembershipOpportunitiesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_RemoveGroupApplicationRequest_ *OnGroupsRemoveGroupApplicationRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsRemoveGroupApplicationResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_RemoveGroupInvitationRequest_ *OnGroupsRemoveGroupInvitationRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsRemoveGroupInvitationResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_RemoveMembersRequest_ *OnGroupsRemoveMembersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsRemoveMembersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_UnblockEntityRequest_ *OnGroupsUnblockEntityRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_EmptyResponse_ *OnGroupsUnblockEntityResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_UpdateGroupRequest_ *OnGroupsUpdateGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_UpdateGroupResponse_ *OnGroupsUpdateGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_GroupsModels_UpdateGroupRoleRequest_ *OnGroupsUpdateRoleRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_ *OnGroupsUpdateRoleResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_LocalizationModels_GetLanguageListRequest_ *OnLocalizationGetLanguageListRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_LocalizationModels_GetLanguageListResponse_ *OnLocalizationGetLanguageListResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_AuthUserRequest_ *OnMatchmakerAuthUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_AuthUserResponse_ *OnMatchmakerAuthUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_PlayerJoinedRequest_ *OnMatchmakerPlayerJoinedRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_ *OnMatchmakerPlayerJoinedResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_PlayerLeftRequest_ *OnMatchmakerPlayerLeftRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_PlayerLeftResponse_ *OnMatchmakerPlayerLeftResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_StartGameRequest_ *OnMatchmakerStartGameRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_StartGameResponse_ *OnMatchmakerStartGameResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_UserInfoRequest_ *OnMatchmakerUserInfoRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_UserInfoResponse_ *OnMatchmakerUserInfoResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerRequest_ *OnMultiplayerCancelAllMatchmakingTicketsForPlayerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_ *OnMultiplayerCancelAllMatchmakingTicketsForPlayerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketRequest_ *OnMultiplayerCancelMatchmakingTicketRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_ *OnMultiplayerCancelMatchmakingTicketResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerRequest_ *OnMultiplayerCreateBuildWithCustomContainerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse_ *OnMultiplayerCreateBuildWithCustomContainerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerRequest_ *OnMultiplayerCreateBuildWithManagedContainerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerResponse_ *OnMultiplayerCreateBuildWithManagedContainerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketRequest_ *OnMultiplayerCreateMatchmakingTicketRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_ *OnMultiplayerCreateMatchmakingTicketResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateRemoteUserRequest_ *OnMultiplayerCreateRemoteUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CreateRemoteUserResponse_ *OnMultiplayerCreateRemoteUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateServerMatchmakingTicketRequest_ *OnMultiplayerCreateServerMatchmakingTicketRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_ *OnMultiplayerCreateServerMatchmakingTicketResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_DeleteAssetRequest_ *OnMultiplayerDeleteAssetRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EmptyResponse_ *OnMultiplayerDeleteAssetResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_DeleteBuildRequest_ *OnMultiplayerDeleteBuildRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EmptyResponse_ *OnMultiplayerDeleteBuildResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_DeleteCertificateRequest_ *OnMultiplayerDeleteCertificateRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EmptyResponse_ *OnMultiplayerDeleteCertificateResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_DeleteRemoteUserRequest_ *OnMultiplayerDeleteRemoteUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EmptyResponse_ *OnMultiplayerDeleteRemoteUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleRequest_ *OnMultiplayerEnableMultiplayerServersForTitleRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_ *OnMultiplayerEnableMultiplayerServersForTitleResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetAssetUploadUrlRequest_ *OnMultiplayerGetAssetUploadUrlRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse_ *OnMultiplayerGetAssetUploadUrlResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetBuildRequest_ *OnMultiplayerGetBuildRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetBuildResponse_ *OnMultiplayerGetBuildResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsRequest_ *OnMultiplayerGetContainerRegistryCredentialsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_ *OnMultiplayerGetContainerRegistryCredentialsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetMatchRequest_ *OnMultiplayerGetMatchRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetMatchResult_ *OnMultiplayerGetMatchResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetMatchmakingQueueRequest_ *OnMultiplayerGetMatchmakingQueueRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult_ *OnMultiplayerGetMatchmakingQueueResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_ *OnMultiplayerGetMatchmakingTicketRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult_ *OnMultiplayerGetMatchmakingTicketResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsRequest_ *OnMultiplayerGetMultiplayerServerDetailsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_ *OnMultiplayerGetMultiplayerServerDetailsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetQueueStatisticsRequest_ *OnMultiplayerGetQueueStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult_ *OnMultiplayerGetQueueStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointRequest_ *OnMultiplayerGetRemoteLoginEndpointRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_ *OnMultiplayerGetRemoteLoginEndpointResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusRequest_ *OnMultiplayerGetTitleEnabledForMultiplayerServersStatusRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_ *OnMultiplayerGetTitleEnabledForMultiplayerServersStatusResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketRequest_ *OnMultiplayerJoinMatchmakingTicketRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult_ *OnMultiplayerJoinMatchmakingTicketResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersRequest_ *OnMultiplayerListArchivedMultiplayerServersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_ *OnMultiplayerListArchivedMultiplayerServersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListAssetSummariesRequest_ *OnMultiplayerListAssetSummariesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_ *OnMultiplayerListAssetSummariesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListBuildSummariesRequest_ *OnMultiplayerListBuildSummariesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_ *OnMultiplayerListBuildSummariesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListCertificateSummariesRequest_ *OnMultiplayerListCertificateSummariesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse_ *OnMultiplayerListCertificateSummariesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListContainerImagesRequest_ *OnMultiplayerListContainerImagesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListContainerImagesResponse_ *OnMultiplayerListContainerImagesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListContainerImageTagsRequest_ *OnMultiplayerListContainerImageTagsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse_ *OnMultiplayerListContainerImageTagsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_ *OnMultiplayerListMatchmakingQueuesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_ *OnMultiplayerListMatchmakingQueuesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerRequest_ *OnMultiplayerListMatchmakingTicketsForPlayerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_ *OnMultiplayerListMatchmakingTicketsForPlayerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersRequest_ *OnMultiplayerListMultiplayerServersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_ *OnMultiplayerListMultiplayerServersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListQosServersRequest_ *OnMultiplayerListQosServersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListQosServersResponse_ *OnMultiplayerListQosServersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesRequest_ *OnMultiplayerListVirtualMachineSummariesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse_ *OnMultiplayerListVirtualMachineSummariesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueRequest_ *OnMultiplayerRemoveMatchmakingQueueRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_ *OnMultiplayerRemoveMatchmakingQueueResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_RequestMultiplayerServerRequest_ *OnMultiplayerRequestMultiplayerServerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_ *OnMultiplayerRequestMultiplayerServerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsRequest_ *OnMultiplayerRolloverContainerRegistryCredentialsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_ *OnMultiplayerRolloverContainerRegistryCredentialsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_SetMatchmakingQueueRequest_ *OnMultiplayerSetMatchmakingQueueRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_ *OnMultiplayerSetMatchmakingQueueResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ShutdownMultiplayerServerRequest_ *OnMultiplayerShutdownMultiplayerServerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EmptyResponse_ *OnMultiplayerShutdownMultiplayerServerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_ *OnMultiplayerUpdateBuildRegionsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EmptyResponse_ *OnMultiplayerUpdateBuildRegionsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_UploadCertificateRequest_ *OnMultiplayerUploadCertificateRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_EmptyResponse_ *OnMultiplayerUploadCertificateResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_GetGlobalPolicyRequest_ *OnProfilesGetGlobalPolicyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_ *OnProfilesGetGlobalPolicyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_GetEntityProfileRequest_ *OnProfilesGetProfileRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_GetEntityProfileResponse_ *OnProfilesGetProfileResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_GetEntityProfilesRequest_ *OnProfilesGetProfilesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_ *OnProfilesGetProfilesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_SetGlobalPolicyRequest_ *OnProfilesSetGlobalPolicyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_ *OnProfilesSetGlobalPolicyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_SetProfileLanguageRequest_ *OnProfilesSetProfileLanguageRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_ *OnProfilesSetProfileLanguageResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ProfilesModels_SetEntityProfilePolicyRequest_ *OnProfilesSetProfilePolicyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_ *OnProfilesSetProfilePolicyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddCharacterVirtualCurrencyRequest_ *OnServerAddCharacterVirtualCurrencyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_ *OnServerAddCharacterVirtualCurrencyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddFriendRequest_ *OnServerAddFriendRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_EmptyResponse_ *OnServerAddFriendResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddPlayerTagRequest_ *OnServerAddPlayerTagRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AddPlayerTagResult_ *OnServerAddPlayerTagResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddSharedGroupMembersRequest_ *OnServerAddSharedGroupMembersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AddSharedGroupMembersResult_ *OnServerAddSharedGroupMembersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AddUserVirtualCurrencyRequest_ *OnServerAddUserVirtualCurrencyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_ *OnServerAddUserVirtualCurrencyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketRequest_ *OnServerAuthenticateSessionTicketRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_ *OnServerAuthenticateSessionTicketResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_AwardSteamAchievementRequest_ *OnServerAwardSteamAchievementRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_AwardSteamAchievementResult_ *OnServerAwardSteamAchievementResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_BanUsersRequest_ *OnServerBanUsersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_BanUsersResult_ *OnServerBanUsersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ConsumeItemRequest_ *OnServerConsumeItemRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ConsumeItemResult_ *OnServerConsumeItemResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_CreateSharedGroupRequest_ *OnServerCreateSharedGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_CreateSharedGroupResult_ *OnServerCreateSharedGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_DeleteCharacterFromUserRequest_ *OnServerDeleteCharacterFromUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_ *OnServerDeleteCharacterFromUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_DeletePlayerRequest_ *OnServerDeletePlayerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeletePlayerResult_ *OnServerDeletePlayerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_DeleteSharedGroupRequest_ *OnServerDeleteSharedGroupRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_EmptyResponse_ *OnServerDeleteSharedGroupResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_DeregisterGameRequest_ *OnServerDeregisterGameRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_DeregisterGameResponse_ *OnServerDeregisterGameResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_EvaluateRandomResultTableRequest_ *OnServerEvaluateRandomResultTableRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_EvaluateRandomResultTableResult_ *OnServerEvaluateRandomResultTableResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ExecuteCloudScriptServerRequest_ *OnServerExecuteCloudScriptRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ExecuteCloudScriptResult_ *OnServerExecuteCloudScriptResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetAllSegmentsRequest_ *OnServerGetAllSegmentsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetAllSegmentsResult_ *OnServerGetAllSegmentsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ListUsersCharactersRequest_ *OnServerGetAllUsersCharactersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ListUsersCharactersResult_ *OnServerGetAllUsersCharactersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCatalogItemsRequest_ *OnServerGetCatalogItemsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCatalogItemsResult_ *OnServerGetCatalogItemsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterDataRequest_ *OnServerGetCharacterDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterDataResult_ *OnServerGetCharacterDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterDataRequest_ *OnServerGetCharacterInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterDataResult_ *OnServerGetCharacterInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterInventoryRequest_ *OnServerGetCharacterInventoryRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterInventoryResult_ *OnServerGetCharacterInventoryResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterLeaderboardRequest_ *OnServerGetCharacterLeaderboardRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_ *OnServerGetCharacterLeaderboardResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterDataRequest_ *OnServerGetCharacterReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterDataResult_ *OnServerGetCharacterReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterStatisticsRequest_ *OnServerGetCharacterStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterStatisticsResult_ *OnServerGetCharacterStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetContentDownloadUrlRequest_ *OnServerGetContentDownloadUrlRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetContentDownloadUrlResult_ *OnServerGetContentDownloadUrlResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetFriendLeaderboardRequest_ *OnServerGetFriendLeaderboardRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetLeaderboardResult_ *OnServerGetFriendLeaderboardResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetFriendsListRequest_ *OnServerGetFriendsListRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetFriendsListResult_ *OnServerGetFriendsListResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetLeaderboardRequest_ *OnServerGetLeaderboardRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetLeaderboardResult_ *OnServerGetLeaderboardResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterRequest_ *OnServerGetLeaderboardAroundCharacterRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_ *OnServerGetLeaderboardAroundCharacterResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetLeaderboardAroundUserRequest_ *OnServerGetLeaderboardAroundUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_ *OnServerGetLeaderboardAroundUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersRequest_ *OnServerGetLeaderboardForUserCharactersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_ *OnServerGetLeaderboardForUserCharactersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerCombinedInfoRequest_ *OnServerGetPlayerCombinedInfoRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_ *OnServerGetPlayerCombinedInfoResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerProfileRequest_ *OnServerGetPlayerProfileRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerProfileResult_ *OnServerGetPlayerProfileResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayersSegmentsRequest_ *OnServerGetPlayerSegmentsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerSegmentsResult_ *OnServerGetPlayerSegmentsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayersInSegmentRequest_ *OnServerGetPlayersInSegmentRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayersInSegmentResult_ *OnServerGetPlayersInSegmentResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerStatisticsRequest_ *OnServerGetPlayerStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerStatisticsResult_ *OnServerGetPlayerStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerStatisticVersionsRequest_ *OnServerGetPlayerStatisticVersionsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerStatisticVersionsResult_ *OnServerGetPlayerStatisticVersionsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerTagsRequest_ *OnServerGetPlayerTagsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerTagsResult_ *OnServerGetPlayerTagsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsRequest_ *OnServerGetPlayFabIDsFromFacebookIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsResult_ *OnServerGetPlayFabIDsFromFacebookIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsRequest_ *OnServerGetPlayFabIDsFromFacebookInstantGamesIdsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_ *OnServerGetPlayFabIDsFromFacebookInstantGamesIdsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_ *OnServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_ *OnServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsRequest_ *OnServerGetPlayFabIDsFromPSNAccountIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsResult_ *OnServerGetPlayFabIDsFromPSNAccountIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsRequest_ *OnServerGetPlayFabIDsFromSteamIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsResult_ *OnServerGetPlayFabIDsFromSteamIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsRequest_ *OnServerGetPlayFabIDsFromXboxLiveIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsResult_ *OnServerGetPlayFabIDsFromXboxLiveIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPublisherDataRequest_ *OnServerGetPublisherDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPublisherDataResult_ *OnServerGetPublisherDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetRandomResultTablesRequest_ *OnServerGetRandomResultTablesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetRandomResultTablesResult_ *OnServerGetRandomResultTablesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsRequest_ *OnServerGetServerCustomIDsFromPlayFabIDsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_ *OnServerGetServerCustomIDsFromPlayFabIDsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetSharedGroupDataRequest_ *OnServerGetSharedGroupDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetSharedGroupDataResult_ *OnServerGetSharedGroupDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetTimeRequest_ *OnServerGetTimeRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetTimeResult_ *OnServerGetTimeResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetTitleDataRequest_ *OnServerGetTitleDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetTitleDataResult_ *OnServerGetTitleDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetTitleDataRequest_ *OnServerGetTitleInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetTitleDataResult_ *OnServerGetTitleInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetTitleNewsRequest_ *OnServerGetTitleNewsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetTitleNewsResult_ *OnServerGetTitleNewsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserAccountInfoRequest_ *OnServerGetUserAccountInfoRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserAccountInfoResult_ *OnServerGetUserAccountInfoResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserBansRequest_ *OnServerGetUserBansRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserBansResult_ *OnServerGetUserBansResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserDataRequest_ *OnServerGetUserDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserDataResult_ *OnServerGetUserDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserDataRequest_ *OnServerGetUserInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserDataResult_ *OnServerGetUserInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserInventoryRequest_ *OnServerGetUserInventoryRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserInventoryResult_ *OnServerGetUserInventoryResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserDataRequest_ *OnServerGetUserPublisherDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserDataResult_ *OnServerGetUserPublisherDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserDataRequest_ *OnServerGetUserPublisherInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserDataResult_ *OnServerGetUserPublisherInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserDataRequest_ *OnServerGetUserPublisherReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserDataResult_ *OnServerGetUserPublisherReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetUserDataRequest_ *OnServerGetUserReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetUserDataResult_ *OnServerGetUserReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GrantCharacterToUserRequest_ *OnServerGrantCharacterToUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GrantCharacterToUserResult_ *OnServerGrantCharacterToUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GrantItemsToCharacterRequest_ *OnServerGrantItemsToCharacterRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GrantItemsToCharacterResult_ *OnServerGrantItemsToCharacterResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GrantItemsToUserRequest_ *OnServerGrantItemsToUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GrantItemsToUserResult_ *OnServerGrantItemsToUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GrantItemsToUsersRequest_ *OnServerGrantItemsToUsersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GrantItemsToUsersResult_ *OnServerGrantItemsToUsersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_LinkXboxAccountRequest_ *OnServerLinkXboxAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_LinkXboxAccountResult_ *OnServerLinkXboxAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_LoginWithServerCustomIdRequest_ *OnServerLoginWithServerCustomIdRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ServerLoginResult_ *OnServerLoginWithServerCustomIdResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_LoginWithXboxRequest_ *OnServerLoginWithXboxRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ServerLoginResult_ *OnServerLoginWithXboxResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ModifyItemUsesRequest_ *OnServerModifyItemUsesRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyItemUsesResult_ *OnServerModifyItemUsesResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterRequest_ *OnServerMoveItemToCharacterFromCharacterRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_ *OnServerMoveItemToCharacterFromCharacterResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_MoveItemToCharacterFromUserRequest_ *OnServerMoveItemToCharacterFromUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_MoveItemToCharacterFromUserResult_ *OnServerMoveItemToCharacterFromUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_MoveItemToUserFromCharacterRequest_ *OnServerMoveItemToUserFromCharacterRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_MoveItemToUserFromCharacterResult_ *OnServerMoveItemToUserFromCharacterResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftRequest_ *OnServerNotifyMatchmakerPlayerLeftRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftResult_ *OnServerNotifyMatchmakerPlayerLeftResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RedeemCouponRequest_ *OnServerRedeemCouponRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RedeemCouponResult_ *OnServerRedeemCouponResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RedeemMatchmakerTicketRequest_ *OnServerRedeemMatchmakerTicketRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_ *OnServerRedeemMatchmakerTicketResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatRequest_ *OnServerRefreshGameServerInstanceHeartbeatRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_ *OnServerRefreshGameServerInstanceHeartbeatResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RegisterGameRequest_ *OnServerRegisterGameRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RegisterGameResponse_ *OnServerRegisterGameResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RemoveFriendRequest_ *OnServerRemoveFriendRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_EmptyResponse_ *OnServerRemoveFriendResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RemovePlayerTagRequest_ *OnServerRemovePlayerTagRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RemovePlayerTagResult_ *OnServerRemovePlayerTagResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RemoveSharedGroupMembersRequest_ *OnServerRemoveSharedGroupMembersRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_ *OnServerRemoveSharedGroupMembersResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ReportPlayerServerRequest_ *OnServerReportPlayerRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ReportPlayerServerResult_ *OnServerReportPlayerResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RevokeAllBansForUserRequest_ *OnServerRevokeAllBansForUserRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RevokeAllBansForUserResult_ *OnServerRevokeAllBansForUserResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RevokeBansRequest_ *OnServerRevokeBansRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RevokeBansResult_ *OnServerRevokeBansResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RevokeInventoryItemRequest_ *OnServerRevokeInventoryItemRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RevokeInventoryResult_ *OnServerRevokeInventoryItemResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_RevokeInventoryItemsRequest_ *OnServerRevokeInventoryItemsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_RevokeInventoryItemsResult_ *OnServerRevokeInventoryItemsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailRequest_ *OnServerSendCustomAccountRecoveryEmailRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_ *OnServerSendCustomAccountRecoveryEmailResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SendEmailFromTemplateRequest_ *OnServerSendEmailFromTemplateRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SendEmailFromTemplateResult_ *OnServerSendEmailFromTemplateResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SendPushNotificationRequest_ *OnServerSendPushNotificationRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SendPushNotificationResult_ *OnServerSendPushNotificationResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetFriendTagsRequest_ *OnServerSetFriendTagsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_EmptyResponse_ *OnServerSetFriendTagsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetGameServerInstanceDataRequest_ *OnServerSetGameServerInstanceDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_ *OnServerSetGameServerInstanceDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetGameServerInstanceStateRequest_ *OnServerSetGameServerInstanceStateRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_ *OnServerSetGameServerInstanceStateResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetGameServerInstanceTagsRequest_ *OnServerSetGameServerInstanceTagsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_ *OnServerSetGameServerInstanceTagsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetPlayerSecretRequest_ *OnServerSetPlayerSecretRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetPlayerSecretResult_ *OnServerSetPlayerSecretResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetPublisherDataRequest_ *OnServerSetPublisherDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetPublisherDataResult_ *OnServerSetPublisherDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetTitleDataRequest_ *OnServerSetTitleDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetTitleDataResult_ *OnServerSetTitleDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SetTitleDataRequest_ *OnServerSetTitleInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_SetTitleDataResult_ *OnServerSetTitleInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SubtractCharacterVirtualCurrencyRequest_ *OnServerSubtractCharacterVirtualCurrencyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_ *OnServerSubtractCharacterVirtualCurrencyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_SubtractUserVirtualCurrencyRequest_ *OnServerSubtractUserVirtualCurrencyRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_ *OnServerSubtractUserVirtualCurrencyResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UnlinkXboxAccountRequest_ *OnServerUnlinkXboxAccountRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UnlinkXboxAccountResult_ *OnServerUnlinkXboxAccountResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UnlockContainerInstanceRequest_ *OnServerUnlockContainerInstanceRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UnlockContainerItemResult_ *OnServerUnlockContainerInstanceResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UnlockContainerItemRequest_ *OnServerUnlockContainerItemRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UnlockContainerItemResult_ *OnServerUnlockContainerItemResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateAvatarUrlRequest_ *OnServerUpdateAvatarUrlRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_EmptyResponse_ *OnServerUpdateAvatarUrlResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateBansRequest_ *OnServerUpdateBansRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateBansResult_ *OnServerUpdateBansResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateCharacterDataRequest_ *OnServerUpdateCharacterDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateCharacterDataResult_ *OnServerUpdateCharacterDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateCharacterDataRequest_ *OnServerUpdateCharacterInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateCharacterDataResult_ *OnServerUpdateCharacterInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateCharacterDataRequest_ *OnServerUpdateCharacterReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateCharacterDataResult_ *OnServerUpdateCharacterReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateCharacterStatisticsRequest_ *OnServerUpdateCharacterStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateCharacterStatisticsResult_ *OnServerUpdateCharacterStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdatePlayerStatisticsRequest_ *OnServerUpdatePlayerStatisticsRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_ *OnServerUpdatePlayerStatisticsResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateSharedGroupDataRequest_ *OnServerUpdateSharedGroupDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateSharedGroupDataResult_ *OnServerUpdateSharedGroupDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserDataRequest_ *OnServerUpdateUserDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateUserDataResult_ *OnServerUpdateUserDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserInternalDataRequest_ *OnServerUpdateUserInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateUserDataResult_ *OnServerUpdateUserInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserInventoryItemDataRequest_ *OnServerUpdateUserInventoryItemCustomDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_EmptyResponse_ *OnServerUpdateUserInventoryItemCustomDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserDataRequest_ *OnServerUpdateUserPublisherDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateUserDataResult_ *OnServerUpdateUserPublisherDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserInternalDataRequest_ *OnServerUpdateUserPublisherInternalDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateUserDataResult_ *OnServerUpdateUserPublisherInternalDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserDataRequest_ *OnServerUpdateUserPublisherReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateUserDataResult_ *OnServerUpdateUserPublisherReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_UpdateUserDataRequest_ *OnServerUpdateUserReadOnlyDataRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdateUserDataResult_ *OnServerUpdateUserReadOnlyDataResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_WriteServerCharacterEventRequest_ *OnServerWriteCharacterEventRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_WriteEventResponse_ *OnServerWriteCharacterEventResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_WriteServerPlayerEventRequest_ *OnServerWritePlayerEventRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_WriteEventResponse_ *OnServerWritePlayerEventResultEvent;
    struct PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_WriteTitleEventRequest_ *OnServerWriteTitleEventRequestEvent;
    struct PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_WriteEventResponse_ *OnServerWriteTitleEventResultEvent;
    struct PlayFabEvents_PlayFabErrorEvent *OnGlobalErrorEvent;
};

}
