namespace app {
struct UploadDataCompletedEventArgs {
  struct UploadDataCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct UploadDataCompletedEventArgs__Fields fields;
};
struct UploadFileCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct UploadFileCompletedEventHandler {
  struct UploadFileCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct UploadFileCompletedEventHandler__Fields fields;
};
struct UploadFileCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct Byte__Array * m_Result;
};
struct UploadFileCompletedEventArgs {
  struct UploadFileCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct UploadFileCompletedEventArgs__Fields fields;
};
struct UploadValuesCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct UploadValuesCompletedEventHandler {
  struct UploadValuesCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct UploadValuesCompletedEventHandler__Fields fields;
};
struct UploadValuesCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct Byte__Array * m_Result;
};
struct UploadValuesCompletedEventArgs {
  struct UploadValuesCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct UploadValuesCompletedEventArgs__Fields fields;
};
struct DownloadProgressChangedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DownloadProgressChangedEventHandler {
  struct DownloadProgressChangedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DownloadProgressChangedEventHandler__Fields fields;
};
struct DownloadProgressChangedEventArgs__Fields {
  struct ProgressChangedEventArgs__Fields _;
  int64_t m_BytesReceived;
  int64_t m_TotalBytesToReceive;
};
struct DownloadProgressChangedEventArgs {
  struct DownloadProgressChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DownloadProgressChangedEventArgs__Fields fields;
};
struct UploadProgressChangedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct UploadProgressChangedEventHandler {
  struct UploadProgressChangedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct UploadProgressChangedEventHandler__Fields fields;
};
struct UploadProgressChangedEventArgs__Fields {
  struct ProgressChangedEventArgs__Fields _;
  int64_t m_BytesReceived;
  int64_t m_TotalBytesToReceive;
  int64_t m_BytesSent;
  int64_t m_TotalBytesToSend;
};
struct UploadProgressChangedEventArgs {
  struct UploadProgressChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct UploadProgressChangedEventArgs__Fields fields;
};
struct WebClient_ProgressData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebClient_ProgressData__StaticFields {
};
struct WebClient_ProgressData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient_ProgressData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient_ProgressData__VTable vtable;
};
struct OpenReadCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OpenReadCompletedEventArgs__StaticFields {
};
struct OpenReadCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenReadCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenReadCompletedEventArgs__VTable vtable;
};
struct OpenReadCompletedEventHandler__VTable {
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
struct OpenReadCompletedEventHandler__StaticFields {
};
struct OpenReadCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenReadCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenReadCompletedEventHandler__VTable vtable;
};
struct OpenWriteCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OpenWriteCompletedEventArgs__StaticFields {
};
struct OpenWriteCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenWriteCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenWriteCompletedEventArgs__VTable vtable;
};
struct OpenWriteCompletedEventHandler__VTable {
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
struct OpenWriteCompletedEventHandler__StaticFields {
};
struct OpenWriteCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenWriteCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenWriteCompletedEventHandler__VTable vtable;
};
struct DownloadStringCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DownloadStringCompletedEventArgs__StaticFields {
};
struct DownloadStringCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadStringCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadStringCompletedEventArgs__VTable vtable;
};
struct DownloadStringCompletedEventHandler__VTable {
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
struct DownloadStringCompletedEventHandler__StaticFields {
};
struct DownloadStringCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadStringCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadStringCompletedEventHandler__VTable vtable;
};
struct DownloadDataCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DownloadDataCompletedEventArgs__StaticFields {
};
struct DownloadDataCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadDataCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadDataCompletedEventArgs__VTable vtable;
};
struct DownloadDataCompletedEventHandler__VTable {
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
struct DownloadDataCompletedEventHandler__StaticFields {
};
struct DownloadDataCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadDataCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadDataCompletedEventHandler__VTable vtable;
};
struct UploadStringCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UploadStringCompletedEventArgs__StaticFields {
};
struct UploadStringCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadStringCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadStringCompletedEventArgs__VTable vtable;
};
struct UploadStringCompletedEventHandler__VTable {
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
struct UploadStringCompletedEventHandler__StaticFields {
};
struct UploadStringCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadStringCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadStringCompletedEventHandler__VTable vtable;
};
struct UploadDataCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UploadDataCompletedEventArgs__StaticFields {
};
struct UploadDataCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadDataCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadDataCompletedEventArgs__VTable vtable;
};
struct UploadDataCompletedEventHandler__VTable {
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
struct UploadDataCompletedEventHandler__StaticFields {
};
struct UploadDataCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadDataCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadDataCompletedEventHandler__VTable vtable;
};
struct UploadFileCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UploadFileCompletedEventArgs__StaticFields {
};
struct UploadFileCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadFileCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadFileCompletedEventArgs__VTable vtable;
};
struct UploadFileCompletedEventHandler__VTable {
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
struct UploadFileCompletedEventHandler__StaticFields {
};
struct UploadFileCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadFileCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadFileCompletedEventHandler__VTable vtable;
};
struct UploadValuesCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UploadValuesCompletedEventArgs__StaticFields {
};
struct UploadValuesCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadValuesCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadValuesCompletedEventArgs__VTable vtable;
};
struct UploadValuesCompletedEventHandler__VTable {
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
struct UploadValuesCompletedEventHandler__StaticFields {
};
struct UploadValuesCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadValuesCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadValuesCompletedEventHandler__VTable vtable;
};
struct DownloadProgressChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DownloadProgressChangedEventArgs__StaticFields {
};
struct DownloadProgressChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadProgressChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadProgressChangedEventArgs__VTable vtable;
};
struct DownloadProgressChangedEventHandler__VTable {
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
struct DownloadProgressChangedEventHandler__StaticFields {
};
struct DownloadProgressChangedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadProgressChangedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadProgressChangedEventHandler__VTable vtable;
};
struct UploadProgressChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UploadProgressChangedEventArgs__StaticFields {
};
struct UploadProgressChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadProgressChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadProgressChangedEventArgs__VTable vtable;
};
struct UploadProgressChangedEventHandler__VTable {
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
struct UploadProgressChangedEventHandler__StaticFields {
};
struct UploadProgressChangedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UploadProgressChangedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UploadProgressChangedEventHandler__VTable vtable;
};
struct WebClient__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData get_Site;
  VirtualInvokeData set_Site;
  VirtualInvokeData add_Disposed;
  VirtualInvokeData remove_Disposed;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRaiseEvents;
  VirtualInvokeData get_Site_1;
  VirtualInvokeData set_Site_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData GetService;
  VirtualInvokeData OnWriteStreamClosed;
  VirtualInvokeData GetWebRequest;
  VirtualInvokeData GetWebResponse;
  VirtualInvokeData GetWebResponse_1;
  VirtualInvokeData OnOpenReadCompleted;
  VirtualInvokeData OnOpenWriteCompleted;
  VirtualInvokeData OnDownloadStringCompleted;
  VirtualInvokeData OnDownloadDataCompleted;
  VirtualInvokeData OnDownloadFileCompleted;
  VirtualInvokeData OnUploadStringCompleted;
  VirtualInvokeData OnUploadDataCompleted;
  VirtualInvokeData OnUploadFileCompleted;
  VirtualInvokeData OnUploadValuesCompleted;
  VirtualInvokeData OnDownloadProgressChanged;
  VirtualInvokeData OnUploadProgressChanged;
};
struct WebClient__StaticFields {
};
struct WebClient__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient__VTable vtable;
};

struct __declspec(align(8)) WebClient_DownloadBitsState__Fields {
  struct WebClient * WebClient;
  struct Stream * WriteStream;
  struct Byte__Array * InnerBuffer;
  struct AsyncOperation * AsyncOp;
  struct WebRequest * Request;
  struct CompletionDelegate * CompletionDelegate;
  struct Stream * ReadStream;
  struct ScatterGatherBuffers * SgBuffers;
  int64_t ContentLength;
  int64_t Length;
  struct WebClient_ProgressData * Progress;
};
struct WebClient_DownloadBitsState {
  struct WebClient_DownloadBitsState__Class *klass;
  struct MonitorData *monitor;
  struct WebClient_DownloadBitsState__Fields fields;
};
struct CompletionDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct CompletionDelegate {
  struct CompletionDelegate__Class *klass;
  struct MonitorData *monitor;
  struct CompletionDelegate__Fields fields;
};
struct CompletionDelegate__VTable {
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
struct CompletionDelegate__StaticFields {
};
struct CompletionDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompletionDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompletionDelegate__VTable vtable;
};
struct WebClient_DownloadBitsState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebClient_DownloadBitsState__StaticFields {
};
struct WebClient_DownloadBitsState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient_DownloadBitsState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient_DownloadBitsState__VTable vtable;
};

struct __declspec(align(8)) WebClient_UploadBitsState__Fields {
  int32_t m_ChunkSize;
  int32_t m_BufferWritePosition;
  struct WebClient * WebClient;
  struct Stream * WriteStream;
  struct Byte__Array * InnerBuffer;
  struct Byte__Array * Header;
  struct Byte__Array * Footer;
  struct AsyncOperation * AsyncOp;
  struct WebRequest * Request;
  struct CompletionDelegate * UploadCompletionDelegate;
  struct CompletionDelegate * DownloadCompletionDelegate;
  struct Stream * ReadStream;
  struct WebClient_ProgressData * Progress;
};
struct WebClient_UploadBitsState {
  struct WebClient_UploadBitsState__Class *klass;
  struct MonitorData *monitor;
  struct WebClient_UploadBitsState__Fields fields;
};
struct WebClient_UploadBitsState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebClient_UploadBitsState__StaticFields {
};
struct WebClient_UploadBitsState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient_UploadBitsState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient_UploadBitsState__VTable vtable;
};

struct Task_1_System_String___Fields {
  struct Task__Fields _;
  struct String * m_result;
};
struct Task_1_System_String_ {
  struct Task_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_String___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_String___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_String_ {
  struct TaskFactory_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_String___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Fields fields;
};
struct TaskFactory_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_System_String___StaticFields {
};
struct TaskFactory_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_System_String___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__VTable vtable;
};
struct Task_1_System_String___VTable {
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
struct Task_1_System_String___StaticFields {
  struct TaskFactory_1_System_String_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8 * TaskWhenAnyCast;
};
struct Task_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_System_String___VTable vtable;
};

struct Task_1_System_Byte___Fields {
  struct Task__Fields _;
  struct Byte__Array * m_result;
};
struct Task_1_System_Byte_ {
  struct Task_1_System_Byte___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_Byte___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_Byte___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_Byte_ {
  struct TaskFactory_1_System_Byte___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_Byte___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Fields fields;
};
struct TaskFactory_1_System_Byte___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_System_Byte___StaticFields {
};
struct TaskFactory_1_System_Byte___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_System_Byte___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_System_Byte___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__VTable vtable;
};
struct Task_1_System_Byte___VTable {
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
struct Task_1_System_Byte___StaticFields {
  struct TaskFactory_1_System_Byte_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9 * TaskWhenAnyCast;
};
struct Task_1_System_Byte___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_System_Byte___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_System_Byte___VTable vtable;
};

struct WebClient_WebClientWriteStream__Fields {
  struct Stream__Fields _;
  struct WebRequest * m_request;
  struct Stream * m_stream;
  struct WebClient * m_WebClient;
};
struct WebClient_WebClientWriteStream {
  struct WebClient_WebClientWriteStream__Class *klass;
  struct MonitorData *monitor;
  struct WebClient_WebClientWriteStream__Fields fields;
};
struct WebClient_WebClientWriteStream__VTable {
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
struct WebClient_WebClientWriteStream__StaticFields {
};
struct WebClient_WebClientWriteStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient_WebClientWriteStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient_WebClientWriteStream__VTable vtable;
};

struct __declspec(align(8)) WebClient_c_DisplayClass219_0__Fields {
  struct WebClient * __4__this;
  struct TaskCompletionSource_1_System_String_ * tcs;
  struct DownloadStringCompletedEventHandler * handler;
};
struct WebClient_c_DisplayClass219_0 {
  struct WebClient_c_DisplayClass219_0__Class *klass;
  struct MonitorData *monitor;
  struct WebClient_c_DisplayClass219_0__Fields fields;
};
struct __declspec(align(8)) TaskCompletionSource_1_System_String___Fields {
  struct Task_1_System_String_ * m_task;
};
struct TaskCompletionSource_1_System_String_ {
  struct TaskCompletionSource_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct TaskCompletionSource_1_System_String___Fields fields;
};
struct TaskCompletionSource_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskCompletionSource_1_System_String___StaticFields {
};
struct TaskCompletionSource_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskCompletionSource_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskCompletionSource_1_System_String___VTable vtable;
};
struct WebClient_c_DisplayClass219_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebClient_c_DisplayClass219_0__StaticFields {
};
struct WebClient_c_DisplayClass219_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebClient_c_DisplayClass219_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebClient_c_DisplayClass219_0__VTable vtable;
};

struct WebClient_c {
  struct WebClient_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___Fields {
  struct MulticastDelegate__Fields _;
};}