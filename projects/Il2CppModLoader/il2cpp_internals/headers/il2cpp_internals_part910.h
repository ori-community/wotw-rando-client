namespace app {
struct ListViewItem_1_System_Object___StaticFields {
};
struct ListViewItem_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListViewItem_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListViewItem_1_System_Object___VTable vtable;
};

struct ISerializedUberStateWrapper_1_System_Object_ {
  struct ISerializedUberStateWrapper_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ISerializedUberStateWrapper_1_System_Object___VTable {
  VirtualInvokeData GetValue;
  VirtualInvokeData SetValue;
};
struct ISerializedUberStateWrapper_1_System_Object___StaticFields {
};
struct ISerializedUberStateWrapper_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISerializedUberStateWrapper_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISerializedUberStateWrapper_1_System_Object___VTable vtable;
};

struct ICompatibleDataEvent_1_System_Object_ {
  struct ICompatibleDataEvent_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ICompatibleDataEvent_1_System_Object___VTable {
  VirtualInvokeData GetCompatibleEvent;
};
struct ICompatibleDataEvent_1_System_Object___StaticFields {
};
struct ICompatibleDataEvent_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICompatibleDataEvent_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICompatibleDataEvent_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) Request_1_System_Object___Fields {
  struct Action_1_Object_ * m_callback;
  enum Method__Enum m_method;
  struct String * m_path;
  struct IDataReader * m_dataReader;
  struct IServerCommunicator * m_communicator;
  struct Dictionary_2_System_String_System_String_ * m_headers;
};
struct Request_1_System_Object_ {
  struct Request_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Request_1_System_Object___Fields fields;
};
struct SwaggerRequest_1_System_Object___Fields {
  struct Request_1_System_Object___Fields _;
};
struct SwaggerRequest_1_System_Object_ {
  struct SwaggerRequest_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct SwaggerRequest_1_System_Object___Fields fields;
};
struct Request_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Method;
  VirtualInvokeData get_DataReader;
  VirtualInvokeData get_Headers;
  VirtualInvokeData CreateRequestCallbackObject;
  VirtualInvokeData Finish;
};
struct Request_1_System_Object___StaticFields {
};
struct Request_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Request_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Request_1_System_Object___VTable vtable;
};
struct SwaggerRequest_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Method;
  VirtualInvokeData get_DataReader;
  VirtualInvokeData get_Headers;
  VirtualInvokeData CreateRequestCallbackObject;
  VirtualInvokeData Finish;
};
struct SwaggerRequest_1_System_Object___StaticFields {
};
struct SwaggerRequest_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwaggerRequest_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwaggerRequest_1_System_Object___VTable vtable;
};

struct MoonTelemetryRequest_1_System_Object___Fields {
  struct Request_1_System_Object___Fields _;
};
struct MoonTelemetryRequest_1_System_Object_ {
  struct MoonTelemetryRequest_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryRequest_1_System_Object___Fields fields;
};
struct MoonTelemetryRequest_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Method;
  VirtualInvokeData get_DataReader;
  VirtualInvokeData get_Headers;
  VirtualInvokeData CreateRequestCallbackObject;
  VirtualInvokeData Finish;
};
struct MoonTelemetryRequest_1_System_Object___StaticFields {
};
struct MoonTelemetryRequest_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryRequest_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryRequest_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) ThreadedWebRequest_1_System_Object___Fields {
  struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ * m_callback;
  struct IRequest * m_request;
  struct Thread * m_thread;
  struct String * m_url;
  bool m_isResponseDispatched;
  struct Timer_1 * timer;
};
struct ThreadedWebRequest_1_System_Object_ {
  struct ThreadedWebRequest_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ThreadedWebRequest_1_System_Object___Fields fields;
};
struct ThreadedWebRequest_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadedWebRequest_1_System_Object___StaticFields {
};
struct ThreadedWebRequest_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadedWebRequest_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadedWebRequest_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___Fields {
  struct ThreadedWebRequest_1_System_Object_ * __4__this;
  struct IRequestCallback * result;
};
struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object_ {
  struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___Fields fields;
};
struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___StaticFields {
};
struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadedWebRequest_1_T_c_DisplayClass10_0_System_Object___VTable vtable;
};

struct Request_1_T_c_System_Object_ {
  struct Request_1_T_c_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct Request_1_T_c_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Request_1_T_c_System_Object___StaticFields {
  struct Request_1_T_c_System_Object_ * __9;
  struct Action_1_Object_ * __9__25_0;
};
struct Request_1_T_c_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Request_1_T_c_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Request_1_T_c_System_Object___VTable vtable;
};

struct __declspec(align(8)) PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___Fields {
  struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_ * resultCallback;
};
struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object_ {
  struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___Fields fields;
};
struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___StaticFields {
};
struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabClientAPI_c_DisplayClass19_0_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___Fields {
  struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_ * resultCallback;
};
struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object_ {
  struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___Fields fields;
};
struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___StaticFields {
};
struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___Fields {
  struct Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_ * resultCallback;
};
struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object_ {
  struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___Fields fields;
};
struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___StaticFields {
};
struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabServerAPI_c_DisplayClass18_0_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___Fields {
  struct Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_ * resultCallback;
};
struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object_ {
  struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___Fields fields;
};
struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___StaticFields {
};
struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabServerInstanceAPI_c_DisplayClass25_0_1_System_Object___VTable vtable;
};

struct IPipelineStage_2_System_Object_System_Object_ {
  struct IPipelineStage_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IPipelineStage_2_System_Object_System_Object___VTable {
  VirtualInvokeData RunStage;
};
struct IPipelineStage_2_System_Object_System_Object___StaticFields {
};
struct IPipelineStage_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPipelineStage_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPipelineStage_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) PipelineStageBase_2_System_Object_System_Object___Fields {
  struct CancellationTokenSource * cts;
  struct BlockingCollection_1_System_Object_ * input;
  struct BlockingCollection_1_System_Object_ * output;
};
struct PipelineStageBase_2_System_Object_System_Object_ {
  struct PipelineStageBase_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PipelineStageBase_2_System_Object_System_Object___Fields fields;
};
struct PipelineStageBase_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RunStage;
  VirtualInvokeData InitStage;
  VirtualInvokeData RunStage_1;
  VirtualInvokeData GetInputConsumingEnumerable;
  VirtualInvokeData StoreOutput;
  VirtualInvokeData __unknown;
};
struct PipelineStageBase_2_System_Object_System_Object___StaticFields {
};
struct PipelineStageBase_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PipelineStageBase_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PipelineStageBase_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) PlayFabResult_1_System_Object___Fields {
  struct Object * Result;
  struct Object * CustomData;
  struct PlayFabError * Error;
};
struct PlayFabResult_1_System_Object_ {
  struct PlayFabResult_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabResult_1_System_Object___Fields fields;
};
struct PlayFabResult_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabResult_1_System_Object___StaticFields {
};
struct PlayFabResult_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabResult_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabResult_1_System_Object___VTable vtable;
};

struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_ {
  struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___Fields fields;
};
struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___VTable {
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
struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___StaticFields {
};
struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___Fields {
  struct Object * _lock;
  struct ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_ * _valueFactory;
  struct Dictionary_2_System_Object_System_Object_ * _dictionary;
};
struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ {
  struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___Fields fields;
};
struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___VTable {
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
struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___StaticFields {
};
struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object___VTable vtable;
};

enum AuthType__Enum : int32_t {
  AuthType__Enum_None = 0,
  AuthType__Enum_PreLoginSession = 1,
  AuthType__Enum_LoginSession = 2,
  AuthType__Enum_DevSecretKey = 3,
  AuthType__Enum_EntityToken = 4,
};
struct AuthType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AuthType__Enum value;
};

struct PlayFabHttp_ApiProcessingEvent_1_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct PlayFabHttp_ApiProcessingEvent_1_System_Object_ {
  struct PlayFabHttp_ApiProcessingEvent_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabHttp_ApiProcessingEvent_1_System_Object___Fields fields;
};
struct PlayFabHttp_ApiProcessingEvent_1_System_Object___VTable {
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
struct PlayFabHttp_ApiProcessingEvent_1_System_Object___StaticFields {
};
struct PlayFabHttp_ApiProcessingEvent_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabHttp_ApiProcessingEvent_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabHttp_ApiProcessingEvent_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) PlayFabHttp_c_DisplayClass25_0_1_System_Object___Fields {
  struct CallRequestContainer * reqContainer;
  struct ISerializerPlugin * serializer;
  struct Action_1_Object_ * resultCallback;
};
struct PlayFabHttp_c_DisplayClass25_0_1_System_Object_ {
  struct PlayFabHttp_c_DisplayClass25_0_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabHttp_c_DisplayClass25_0_1_System_Object___Fields fields;
};
struct PlayFabHttp_c_DisplayClass25_0_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabHttp_c_DisplayClass25_0_1_System_Object___StaticFields {
};
struct PlayFabHttp_c_DisplayClass25_0_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabHttp_c_DisplayClass25_0_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabHttp_c_DisplayClass25_0_1_System_Object___VTable vtable;
};

struct SingletonMonoBehaviour_1_System_Object___Fields {
  struct MonoBehaviour__Fields _;
  bool initialized;
};
struct SingletonMonoBehaviour_1_System_Object_ {
  struct SingletonMonoBehaviour_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct SingletonMonoBehaviour_1_System_Object___Fields fields;
};
struct SingletonMonoBehaviour_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData Initialize;
};
struct SingletonMonoBehaviour_1_System_Object___StaticFields {
  struct Object * _instance;
};
struct SingletonMonoBehaviour_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SingletonMonoBehaviour_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SingletonMonoBehaviour_1_System_Object___VTable vtable;
};

struct PlayFabEvents_PlayFabResultEvent_1_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct PlayFabEvents_PlayFabResultEvent_1_System_Object_ {
  struct PlayFabEvents_PlayFabResultEvent_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabEvents_PlayFabResultEvent_1_System_Object___Fields fields;
};
struct PlayFabEvents_PlayFabResultEvent_1_System_Object___VTable {
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
struct PlayFabEvents_PlayFabResultEvent_1_System_Object___StaticFields {
};
struct PlayFabEvents_PlayFabResultEvent_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabEvents_PlayFabResultEvent_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabEvents_PlayFabResultEvent_1_System_Object___VTable vtable;
};

struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct PlayFabEvents_PlayFabRequestEvent_1_System_Object_ {
  struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___Fields fields;
};
struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___VTable {
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
struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___StaticFields {
};
struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabEvents_PlayFabRequestEvent_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) AkBaseArray_1_System_Object___Fields {
  int32_t _Capacity_k__BackingField;
  void * m_Buffer;
};
struct AkBaseArray_1_System_Object_ {
  struct AkBaseArray_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct AkBaseArray_1_System_Object___Fields fields;
};
struct AkBaseArray_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Count;
  VirtualInvokeData __unknown;
  VirtualInvokeData DefaultConstructAtIntPtr;
  VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct AkBaseArray_1_System_Object___StaticFields {
};
struct AkBaseArray_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkBaseArray_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkBaseArray_1_System_Object___VTable vtable;
};

struct WaapiJsonClassBase_1_System_Object_ {
  struct WaapiJsonClassBase_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct WaapiJsonClassBase_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaapiJsonClassBase_1_System_Object___StaticFields {
};
struct WaapiJsonClassBase_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaapiJsonClassBase_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaapiJsonClassBase_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) DelayedAction_1_System_Object___Fields {
  int32_t FrameDelay;
  float m_remainingDelay;
  bool m_isCounting;
  struct Component_1 * m_owner;
  struct Action_1_Object_ * m_actionToPerform;
  struct Func_1_Boolean_ * m_condition;
  struct Object * m_param;
};
struct DelayedAction_1_System_Object_ {
  struct DelayedAction_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct DelayedAction_1_System_Object___Fields fields;
};
struct DelayedAction_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DelayedAction_1_System_Object___StaticFields {
};
struct DelayedAction_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DelayedAction_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DelayedAction_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) KwolokBossEntity_OverrideTicket_1_System_Object___Fields {
  struct Object * Value;
};
struct KwolokBossEntity_OverrideTicket_1_System_Object_ {
  struct KwolokBossEntity_OverrideTicket_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossEntity_OverrideTicket_1_System_Object___Fields fields;
};
struct KwolokBossEntity_OverrideTicket_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KwolokBossEntity_OverrideTicket_1_System_Object___StaticFields {
};
struct KwolokBossEntity_OverrideTicket_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossEntity_OverrideTicket_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossEntity_OverrideTicket_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields {
  struct Object * m_effectMap;
  struct Func_2_Object_UnityEngine_GameObject_ * m_getEffectsPrefab;
  struct Transform * m_vfxHodler;
  struct String * m_stateName;
  struct ParticleSystem * m_currentlyPlayingEffect;
  enum SurfaceMaterialType__Enum m_currentlyPlayingEffectSurface;
  struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * m_effects;
  struct HashSet_1_SurfaceMaterialType_ * m_customSurfaces;
};
struct SurfaceTypeVFXHandler_2_System_Object_System_Object_ {
  struct SurfaceTypeVFXHandler_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields fields;
};
struct Func_2_Object_UnityEngine_GameObject___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Object_UnityEngine_GameObject_ {
  struct Func_2_Object_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Object_UnityEngine_GameObject___Fields fields;
};
struct Func_2_Object_UnityEngine_GameObject___VTable {
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
struct Func_2_Object_UnityEngine_GameObject___StaticFields {
};
struct Func_2_Object_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Object_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Object_UnityEngine_GameObject___VTable vtable;
};
struct SurfaceTypeVFXHandler_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SurfaceTypeVFXHandler_2_System_Object_System_Object___StaticFields {
};
struct SurfaceTypeVFXHandler_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceTypeVFXHandler_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurfaceTypeVFXHandler_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___Fields {
  struct Object * m_behaviour;
  struct StateMachine_2 * m_stateMachine;
  struct Object * m_states;
  struct PetrifiedOwlBossEntity * m_entity;
};
struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object_ {
  struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___Fields fields;
};
struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___StaticFields {
};
struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_System_Object_System_Object___VTable vtable;
};

struct EntityReactionBehaviour_1_System_Object___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_System_Object_ {
  struct EntityReactionBehaviour_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_System_Object___Fields fields;
};
struct EntityHitReactionBehaviour_1_System_Object___Fields {
  struct EntityReactionBehaviour_1_System_Object___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_System_Object_ {
  struct EntityHitReactionBehaviour_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_System_Object___Fields fields;
};
struct EntityReactionBehaviour_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_TaskStatus;
  VirtualInvokeData set_TaskStatus;
  VirtualInvokeData get_ForceReturnTaskStatus;
  VirtualInvokeData set_ForceReturnTaskStatus;
  VirtualInvokeData OnExecuteTask;
  VirtualInvokeData OnInitializeTask;
  VirtualInvokeData OnEnterTask;
  VirtualInvokeData OnExitTask;
  VirtualInvokeData OnResetTask;
  VirtualInvokeData get_Entity;
  VirtualInvokeData __unknown;
  VirtualInvokeData OnInitializeTask_1;
  VirtualInvokeData OnEnterTask_1;
  VirtualInvokeData OnExitTask_1;
  VirtualInvokeData OnResetTask_1;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData get_RunInParallel;
  VirtualInvokeData get_CanInterruptSelf;
  VirtualInvokeData OnCacheSerializedComponents;
  VirtualInvokeData CanInterrupt;
  VirtualInvokeData HandleReasonToNotInterrupt;
};
struct EntityReactionBehaviour_1_System_Object___StaticFields {
};
struct EntityReactionBehaviour_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_System_Object___VTable vtable;
};
struct EntityHitReactionBehaviour_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_TaskStatus;
  VirtualInvokeData set_TaskStatus;
  VirtualInvokeData get_ForceReturnTaskStatus;
  VirtualInvokeData set_ForceReturnTaskStatus;
  VirtualInvokeData OnExecuteTask;
  VirtualInvokeData OnInitializeTask;
  VirtualInvokeData OnEnterTask;
  VirtualInvokeData OnExitTask;
  VirtualInvokeData OnResetTask;
  VirtualInvokeData get_Entity;
  VirtualInvokeData OnExecuteTask_1;
  VirtualInvokeData OnInitializeTask_1;
  VirtualInvokeData OnEnterTask_1;
  VirtualInvokeData OnExitTask_1;
  VirtualInvokeData OnResetTask_1;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData get_RunInParallel;
  VirtualInvokeData get_CanInterruptSelf;
  VirtualInvokeData OnCacheSerializedComponents;
  VirtualInvokeData CanInterrupt;
  VirtualInvokeData HandleReasonToNotInterrupt;
  VirtualInvokeData IsDamageTypePreventingInterruption;
  VirtualInvokeData IsInterruptingDamageWeight;
};
struct EntityHitReactionBehaviour_1_System_Object___StaticFields {
};
struct EntityHitReactionBehaviour_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_System_Object___VTable vtable;
};

struct CageMetaData_1_System_Object___Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_System_Int32_ * IDs;
  struct List_1_System_Object_ * Data;
  struct Object * DefaultValue;
  struct CageStructureTool * CageStructureTool;
  bool ShouldSerialize;
};
struct CageMetaData_1_System_Object_ {
  struct CageMetaData_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct CageMetaData_1_System_Object___Fields fields;
};
struct CageFaceMetaData_1_System_Object___Fields {
  struct CageMetaData_1_System_Object___Fields _;
};
struct CageFaceMetaData_1_System_Object_ {
  struct CageFaceMetaData_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct CageFaceMetaData_1_System_Object___Fields fields;
};
struct SpiderBehaviourZoneCageMetaData_1_System_Object___Fields {
  struct CageFaceMetaData_1_System_Object___Fields _;
};}