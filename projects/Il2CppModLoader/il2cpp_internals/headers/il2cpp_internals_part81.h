namespace app {

struct __declspec(align(8)) WebClient_c_DisplayClass241_0__Fields {
  struct WebClient * __4__this;
  struct TaskCompletionSource_1_System_Byte_ * tcs;
  struct UploadFileCompletedEventHandler * handler;
};
struct WebClient_c_DisplayClass241_0 {
  struct WebClient_c_DisplayClass241_0__Class *klass;
  struct MonitorData *monitor;
  struct WebClient_c_DisplayClass241_0__Fields fields;
};
struct WebClient_c_DisplayClass241_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebClient_c_DisplayClass241_0__StaticFields {
};
struct WebClient_c_DisplayClass241_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient_c_DisplayClass241_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient_c_DisplayClass241_0__VTable vtable;
};

struct __declspec(align(8)) WebClient_c_DisplayClass245_0__Fields {
  struct WebClient * __4__this;
  struct TaskCompletionSource_1_System_Byte_ * tcs;
  struct UploadValuesCompletedEventHandler * handler;
};
struct WebClient_c_DisplayClass245_0 {
  struct WebClient_c_DisplayClass245_0__Class *klass;
  struct MonitorData *monitor;
  struct WebClient_c_DisplayClass245_0__Fields fields;
};
struct WebClient_c_DisplayClass245_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebClient_c_DisplayClass245_0__StaticFields {
};
struct WebClient_c_DisplayClass245_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient_c_DisplayClass245_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient_c_DisplayClass245_0__VTable vtable;
};

struct TraceSource {
  struct TraceSource__Class *klass;
  struct MonitorData *monitor;
};
struct TraceSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TraceSource__StaticFields {
};
struct TraceSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceSource__VTable vtable;
};

struct __declspec(align(8)) ServerCertValidationCallback_CallbackContext__Fields {
  struct Object * request;
  struct X509Certificate_1 * certificate;
  struct X509Chain * chain;
  enum SslPolicyErrors__Enum sslPolicyErrors;
  bool result;
};
struct ServerCertValidationCallback_CallbackContext {
  struct ServerCertValidationCallback_CallbackContext__Class *klass;
  struct MonitorData *monitor;
  struct ServerCertValidationCallback_CallbackContext__Fields fields;
};
struct ServerCertValidationCallback_CallbackContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerCertValidationCallback_CallbackContext__StaticFields {
};
struct ServerCertValidationCallback_CallbackContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerCertValidationCallback_CallbackContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerCertValidationCallback_CallbackContext__VTable vtable;
};

struct AuthenticationManager {
  struct AuthenticationManager__Class *klass;
  struct MonitorData *monitor;
};
struct ICredentialPolicy {
  struct ICredentialPolicy__Class *klass;
  struct MonitorData *monitor;
};
struct ICredentialPolicy__VTable {
  VirtualInvokeData ShouldSendCredential;
};
struct ICredentialPolicy__StaticFields {
};
struct ICredentialPolicy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICredentialPolicy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICredentialPolicy__VTable vtable;
};
struct AuthenticationManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AuthenticationManager__StaticFields {
  struct ArrayList * modules;
  struct Object * locker;
  struct ICredentialPolicy * credential_policy;
};
struct AuthenticationManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AuthenticationManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AuthenticationManager__VTable vtable;
};

struct IAuthenticationModule {
  struct IAuthenticationModule__Class *klass;
  struct MonitorData *monitor;
};
struct IAuthenticationModule__VTable {
  VirtualInvokeData Authenticate;
  VirtualInvokeData PreAuthenticate;
  VirtualInvokeData get_CanPreAuthenticate;
  VirtualInvokeData get_AuthenticationType;
};
struct IAuthenticationModule__StaticFields {
};
struct IAuthenticationModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IAuthenticationModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IAuthenticationModule__VTable vtable;
};

struct BasicClient {
  struct BasicClient__Class *klass;
  struct MonitorData *monitor;
};
struct BasicClient__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Authenticate;
  VirtualInvokeData PreAuthenticate;
  VirtualInvokeData get_CanPreAuthenticate;
  VirtualInvokeData get_AuthenticationType;
};
struct BasicClient__StaticFields {
};
struct BasicClient__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BasicClient__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BasicClient__VTable vtable;
};

struct ChunkedInputStream__Fields {
  struct RequestStream__Fields _;
  bool disposed;
  struct MonoChunkStream * decoder;
  struct HttpListenerContext * context;
  bool no_more_data;
};
struct ChunkedInputStream {
  struct ChunkedInputStream__Class *klass;
  struct MonitorData *monitor;
  struct ChunkedInputStream__Fields fields;
};
struct ChunkedInputStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRead;
  VirtualInvokeData get_CanSeek;
  VirtualInvokeData get_CanTimeout;
  VirtualInvokeData get_CanWrite;
  VirtualInvokeData get_Length;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData FlushAsync;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData ReadAsync;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData WriteAsync;
  VirtualInvokeData Seek;
  VirtualInvokeData SetLength;
  VirtualInvokeData Read;
  VirtualInvokeData ReadByte;
  VirtualInvokeData Write;
  VirtualInvokeData WriteByte;
};
struct ChunkedInputStream__StaticFields {
};
struct ChunkedInputStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChunkedInputStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChunkedInputStream__VTable vtable;
};

struct __declspec(align(8)) ChunkedInputStream_ReadBufferState__Fields {
  struct Byte__Array * Buffer;
  int32_t Offset;
  int32_t Count;
  int32_t InitialCount;
  struct HttpStreamAsyncResult * Ares;
};
struct ChunkedInputStream_ReadBufferState {
  struct ChunkedInputStream_ReadBufferState__Class *klass;
  struct MonitorData *monitor;
  struct ChunkedInputStream_ReadBufferState__Fields fields;
};
struct __declspec(align(8)) HttpStreamAsyncResult__Fields {
  struct Object * locker;
  struct ManualResetEvent * handle;
  bool completed;
  struct Byte__Array * Buffer;
  int32_t Offset;
  int32_t Count;
  struct AsyncCallback * Callback;
  struct Object * State;
  int32_t SynchRead;
  struct Exception * Error;
};
struct HttpStreamAsyncResult {
  struct HttpStreamAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct HttpStreamAsyncResult__Fields fields;
};
struct HttpStreamAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
};
struct HttpStreamAsyncResult__StaticFields {
};
struct HttpStreamAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpStreamAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpStreamAsyncResult__VTable vtable;
};
struct ChunkedInputStream_ReadBufferState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChunkedInputStream_ReadBufferState__StaticFields {
};
struct ChunkedInputStream_ReadBufferState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChunkedInputStream_ReadBufferState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChunkedInputStream_ReadBufferState__VTable vtable;
};

struct DefaultCertificatePolicy {
  struct DefaultCertificatePolicy__Class *klass;
  struct MonitorData *monitor;
};
struct DefaultCertificatePolicy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CheckValidationResult;
};
struct DefaultCertificatePolicy__StaticFields {
};
struct DefaultCertificatePolicy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultCertificatePolicy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultCertificatePolicy__VTable vtable;
};

struct __declspec(align(8)) DigestHeaderParser__Fields {
  struct String * header;
  int32_t length;
  int32_t pos;
  struct String__Array * values;
};
struct DigestHeaderParser {
  struct DigestHeaderParser__Class *klass;
  struct MonitorData *monitor;
  struct DigestHeaderParser__Fields fields;
};
struct DigestHeaderParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DigestHeaderParser__StaticFields {
  struct String__Array * keywords;
};
struct DigestHeaderParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DigestHeaderParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DigestHeaderParser__VTable vtable;
};

struct __declspec(align(8)) DigestSession__Fields {
  struct DateTime lastUse;
  int32_t _nc;
  struct HashAlgorithm * hash;
  struct DigestHeaderParser * parser;
  struct String * _cnonce;
};
struct DigestSession {
  struct DigestSession__Class *klass;
  struct MonitorData *monitor;
  struct DigestSession__Fields fields;
};
struct DigestSession__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DigestSession__StaticFields {
  struct RandomNumberGenerator * rng;
};
struct DigestSession__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DigestSession__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DigestSession__VTable vtable;
};

struct DigestClient {
  struct DigestClient__Class *klass;
  struct MonitorData *monitor;
};
struct DigestClient__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Authenticate;
  VirtualInvokeData PreAuthenticate;
  VirtualInvokeData get_CanPreAuthenticate;
  VirtualInvokeData get_AuthenticationType;
};
struct DigestClient__StaticFields {
  struct Hashtable * cache;
};
struct DigestClient__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DigestClient__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DigestClient__VTable vtable;
};

struct Task_1_System_Net_IPAddress___Fields {
  struct Task__Fields _;
  struct IPAddress__Array * m_result;
};
struct Task_1_System_Net_IPAddress_ {
  struct Task_1_System_Net_IPAddress___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_Net_IPAddress___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_Net_IPAddress___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_Net_IPAddress_ {
  struct TaskFactory_1_System_Net_IPAddress___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_Net_IPAddress___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Fields fields;
};
struct TaskFactory_1_System_Net_IPAddress___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_System_Net_IPAddress___StaticFields {
};
struct TaskFactory_1_System_Net_IPAddress___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_System_Net_IPAddress___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_System_Net_IPAddress___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__VTable vtable;
};
struct Task_1_System_Net_IPAddress___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct Task_1_System_Net_IPAddress___StaticFields {
  struct TaskFactory_1_System_Net_IPAddress_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11 * TaskWhenAnyCast;
};
struct Task_1_System_Net_IPAddress___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_System_Net_IPAddress___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_System_Net_IPAddress___VTable vtable;
};

struct Task_1_System_Net_IPHostEntry___Fields {
  struct Task__Fields _;
  struct IPHostEntry * m_result;
};
struct Task_1_System_Net_IPHostEntry_ {
  struct Task_1_System_Net_IPHostEntry___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_Net_IPHostEntry___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_Net_IPHostEntry___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_Net_IPHostEntry_ {
  struct TaskFactory_1_System_Net_IPHostEntry___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_Net_IPHostEntry___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Fields fields;
};
struct TaskFactory_1_System_Net_IPHostEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_System_Net_IPHostEntry___StaticFields {
};
struct TaskFactory_1_System_Net_IPHostEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_System_Net_IPHostEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_System_Net_IPHostEntry___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__VTable vtable;
};
struct Task_1_System_Net_IPHostEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct Task_1_System_Net_IPHostEntry___StaticFields {
  struct TaskFactory_1_System_Net_IPHostEntry_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12 * TaskWhenAnyCast;
};
struct Task_1_System_Net_IPHostEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_System_Net_IPHostEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_System_Net_IPHostEntry___VTable vtable;
};

struct Dns_GetHostByNameCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Dns_GetHostByNameCallback {
  struct Dns_GetHostByNameCallback__Class *klass;
  struct MonitorData *monitor;
  struct Dns_GetHostByNameCallback__Fields fields;
};
struct Dns_GetHostByNameCallback__VTable {
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
struct Dns_GetHostByNameCallback__StaticFields {
};
struct Dns_GetHostByNameCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dns_GetHostByNameCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dns_GetHostByNameCallback__VTable vtable;
};

struct Dns_ResolveCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Dns_ResolveCallback {
  struct Dns_ResolveCallback__Class *klass;
  struct MonitorData *monitor;
  struct Dns_ResolveCallback__Fields fields;
};
struct Dns_ResolveCallback__VTable {
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
struct Dns_ResolveCallback__StaticFields {
};
struct Dns_ResolveCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dns_ResolveCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dns_ResolveCallback__VTable vtable;
};

struct Dns_GetHostEntryNameCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Dns_GetHostEntryNameCallback {
  struct Dns_GetHostEntryNameCallback__Class *klass;
  struct MonitorData *monitor;
  struct Dns_GetHostEntryNameCallback__Fields fields;
};
struct Dns_GetHostEntryNameCallback__VTable {
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
struct Dns_GetHostEntryNameCallback__StaticFields {
};
struct Dns_GetHostEntryNameCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dns_GetHostEntryNameCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dns_GetHostEntryNameCallback__VTable vtable;
};

struct Dns_GetHostEntryIPCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Dns_GetHostEntryIPCallback {
  struct Dns_GetHostEntryIPCallback__Class *klass;
  struct MonitorData *monitor;
  struct Dns_GetHostEntryIPCallback__Fields fields;
};
struct Dns_GetHostEntryIPCallback__VTable {
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
struct Dns_GetHostEntryIPCallback__StaticFields {
};
struct Dns_GetHostEntryIPCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dns_GetHostEntryIPCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dns_GetHostEntryIPCallback__VTable vtable;
};

struct Dns_GetHostAddressesCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Dns_GetHostAddressesCallback {
  struct Dns_GetHostAddressesCallback__Class *klass;
  struct MonitorData *monitor;
  struct Dns_GetHostAddressesCallback__Fields fields;
};
struct Dns_GetHostAddressesCallback__VTable {
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
struct Dns_GetHostAddressesCallback__StaticFields {
};
struct Dns_GetHostAddressesCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dns_GetHostAddressesCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dns_GetHostAddressesCallback__VTable vtable;
};

enum SocketAsyncOperation__Enum : int32_t {
  SocketAsyncOperation__Enum_None = 0,
  SocketAsyncOperation__Enum_Accept = 1,
  SocketAsyncOperation__Enum_Connect = 2,
  SocketAsyncOperation__Enum_Disconnect = 3,
  SocketAsyncOperation__Enum_Receive = 4,
  SocketAsyncOperation__Enum_ReceiveFrom = 5,
  SocketAsyncOperation__Enum_ReceiveMessageFrom = 6,
  SocketAsyncOperation__Enum_Send = 7,
  SocketAsyncOperation__Enum_SendPackets = 8,
  SocketAsyncOperation__Enum_SendTo = 9,
};
struct SocketAsyncOperation__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SocketAsyncOperation__Enum value;
};
enum SocketError__Enum : int32_t {
  SocketError__Enum_Success = 0,
  SocketError__Enum_SocketError = -1,
  SocketError__Enum_Interrupted = 10004,
  SocketError__Enum_AccessDenied = 10013,
  SocketError__Enum_Fault = 10014,
  SocketError__Enum_InvalidArgument = 10022,
  SocketError__Enum_TooManyOpenSockets = 10024,
  SocketError__Enum_WouldBlock = 10035,
  SocketError__Enum_InProgress = 10036,
  SocketError__Enum_AlreadyInProgress = 10037,
  SocketError__Enum_NotSocket = 10038,
  SocketError__Enum_DestinationAddressRequired = 10039,
  SocketError__Enum_MessageSize = 10040,
  SocketError__Enum_ProtocolType = 10041,
  SocketError__Enum_ProtocolOption = 10042,
  SocketError__Enum_ProtocolNotSupported = 10043,
  SocketError__Enum_SocketNotSupported = 10044,
  SocketError__Enum_OperationNotSupported = 10045,
  SocketError__Enum_ProtocolFamilyNotSupported = 10046,
  SocketError__Enum_AddressFamilyNotSupported = 10047,
  SocketError__Enum_AddressAlreadyInUse = 10048,
  SocketError__Enum_AddressNotAvailable = 10049,
  SocketError__Enum_NetworkDown = 10050,
  SocketError__Enum_NetworkUnreachable = 10051,
  SocketError__Enum_NetworkReset = 10052,
  SocketError__Enum_ConnectionAborted = 10053,
  SocketError__Enum_ConnectionReset = 10054,
  SocketError__Enum_NoBufferSpaceAvailable = 10055,
  SocketError__Enum_IsConnected = 10056,
  SocketError__Enum_NotConnected = 10057,
  SocketError__Enum_Shutdown = 10058,
  SocketError__Enum_TimedOut = 10060,
  SocketError__Enum_ConnectionRefused = 10061,
  SocketError__Enum_HostDown = 10064,
  SocketError__Enum_HostUnreachable = 10065,
  SocketError__Enum_ProcessLimit = 10067,
  SocketError__Enum_SystemNotReady = 10091,
  SocketError__Enum_VersionNotSupported = 10092,
  SocketError__Enum_NotInitialized = 10093,
  SocketError__Enum_Disconnecting = 10101,
  SocketError__Enum_TypeNotFound = 10109,
  SocketError__Enum_HostNotFound = 11001,
  SocketError__Enum_TryAgain = 11002,
  SocketError__Enum_NoRecovery = 11003,
  SocketError__Enum_NoData = 11004,
  SocketError__Enum_IOPending = 997,
  SocketError__Enum_OperationAborted = 995,
};
struct SocketError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SocketError__Enum value;
};
struct __declspec(align(8)) SocketAsyncEventArgs__Fields {
  bool disposed;
  int32_t in_progress;
  struct EndPoint * remote_ep;
  struct Socket * current_socket;
  struct SocketAsyncResult * socket_async_result;
  struct Socket * _AcceptSocket_k__BackingField;
  struct IList_1_System_ArraySegment_1_ * m_BufferList;
  int32_t _BytesTransferred_k__BackingField;
  int32_t _Count_k__BackingField;
  enum SocketAsyncOperation__Enum _LastOperation_k__BackingField;
  int32_t _SendPacketsSendSize_k__BackingField;
  enum SocketError__Enum _SocketError_k__BackingField;
  struct Object * _UserToken_k__BackingField;
  struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_ * Completed;
};
struct SocketAsyncEventArgs {
  struct SocketAsyncEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct SocketAsyncEventArgs__Fields fields;
};
struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_ {
  struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Fields fields;
};
struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___VTable {
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
struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___StaticFields {
};
struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___VTable vtable;
};
struct SocketAsyncEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData OnCompleted;
};
struct SocketAsyncEventArgs__StaticFields {
};
struct SocketAsyncEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SocketAsyncEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SocketAsyncEventArgs__VTable vtable;
};

struct EndPointManager {
  struct EndPointManager__Class *klass;
  struct MonitorData *monitor;
};
struct EndPointManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EndPointManager__StaticFields {
  struct Hashtable * ip_to_endpoints;
};
struct EndPointManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EndPointManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EndPointManager__VTable vtable;
};

enum TransportType__Enum : int32_t {
  TransportType__Enum_Udp = 1,
  TransportType__Enum_Connectionless = 1,
  TransportType__Enum_Tcp = 2,
  TransportType__Enum_ConnectionOriented = 2,
  TransportType__Enum_All = 3,
};
struct TransportType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TransportType__Enum value;
};
struct __declspec(align(8)) EndpointPermission__Fields {
  struct String * hostname;
  int32_t port;
  enum TransportType__Enum transport;
  bool resolved;
  bool hasWildcard;
  struct IPAddress__Array * addresses;
};}