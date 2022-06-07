namespace app {
struct IDictionary_2_System_String_System_Object___StaticFields {
};

struct IDictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDictionary_2_System_String_System_Object___VTable vtable;
};

struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
};

struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___StaticFields {
};

struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___VTable vtable;
};

struct TrackingValidationObjectDictionary__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData Remove;
};

struct TrackingValidationObjectDictionary__StaticFields {
};

struct TrackingValidationObjectDictionary__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TrackingValidationObjectDictionary__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TrackingValidationObjectDictionary__VTable vtable;
};

struct TrackingValidationObjectDictionary_ValidateAndParseValue__Fields {
    struct MulticastDelegate__Fields _;
};

struct TrackingValidationObjectDictionary_ValidateAndParseValue {
    struct TrackingValidationObjectDictionary_ValidateAndParseValue__Class *klass;
    MonitorData *monitor;
    struct TrackingValidationObjectDictionary_ValidateAndParseValue__Fields fields;
};

struct TrackingValidationObjectDictionary_ValidateAndParseValue__VTable {
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

struct TrackingValidationObjectDictionary_ValidateAndParseValue__StaticFields {
};

struct TrackingValidationObjectDictionary_ValidateAndParseValue__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TrackingValidationObjectDictionary_ValidateAndParseValue__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TrackingValidationObjectDictionary_ValidateAndParseValue__VTable vtable;
};

struct WebClient__Fields {
    struct Component__Fields _;
    struct Uri *m_baseAddress;
    struct ICredentials *m_credentials;
    struct WebHeaderCollection *m_headers;
    struct NameValueCollection *m_requestParameters;
    struct WebResponse *m_WebResponse;
    struct WebRequest *m_WebRequest;
    struct Encoding *m_Encoding;
    struct String *m_Method;
    int64_t m_ContentLength;
    bool m_InitWebClientAsync;
    bool m_Cancelled;
    struct WebClient_ProgressData *m_Progress;
    struct IWebProxy *m_Proxy;
    bool m_ProxySet;
    struct RequestCachePolicy *m_CachePolicy;
    bool _AllowReadStreamBuffering_k__BackingField;
    bool _AllowWriteStreamBuffering_k__BackingField;
    int32_t m_CallNesting;
    struct AsyncOperation *m_AsyncOp;
    struct OpenReadCompletedEventHandler *OpenReadCompleted;
    struct SendOrPostCallback *openReadOperationCompleted;
    struct OpenWriteCompletedEventHandler *OpenWriteCompleted;
    struct SendOrPostCallback *openWriteOperationCompleted;
    struct DownloadStringCompletedEventHandler *DownloadStringCompleted;
    struct SendOrPostCallback *downloadStringOperationCompleted;
    struct DownloadDataCompletedEventHandler *DownloadDataCompleted;
    struct SendOrPostCallback *downloadDataOperationCompleted;
    struct AsyncCompletedEventHandler *DownloadFileCompleted;
    struct SendOrPostCallback *downloadFileOperationCompleted;
    struct UploadStringCompletedEventHandler *UploadStringCompleted;
    struct SendOrPostCallback *uploadStringOperationCompleted;
    struct UploadDataCompletedEventHandler *UploadDataCompleted;
    struct SendOrPostCallback *uploadDataOperationCompleted;
    struct UploadFileCompletedEventHandler *UploadFileCompleted;
    struct SendOrPostCallback *uploadFileOperationCompleted;
    struct UploadValuesCompletedEventHandler *UploadValuesCompleted;
    struct SendOrPostCallback *uploadValuesOperationCompleted;
    struct DownloadProgressChangedEventHandler *DownloadProgressChanged;
    struct UploadProgressChangedEventHandler *UploadProgressChanged;
    struct SendOrPostCallback *reportDownloadProgressChanged;
    struct SendOrPostCallback *reportUploadProgressChanged;
};

struct WebClient {
    struct WebClient__Class *klass;
    MonitorData *monitor;
    struct WebClient__Fields fields;
};

struct __declspec(align(8)) WebClient_ProgressData__Fields {
    int64_t BytesSent;
    int64_t TotalBytesToSend;
    int64_t BytesReceived;
    int64_t TotalBytesToReceive;
    bool HasUploadPhase;
};

struct WebClient_ProgressData {
    struct WebClient_ProgressData__Class *klass;
    MonitorData *monitor;
    struct WebClient_ProgressData__Fields fields;
};

struct OpenReadCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct OpenReadCompletedEventHandler {
    struct OpenReadCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct OpenReadCompletedEventHandler__Fields fields;
};

struct OpenReadCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Stream *m_Result;
};

struct OpenReadCompletedEventArgs {
    struct OpenReadCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct OpenReadCompletedEventArgs__Fields fields;
};

struct OpenWriteCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct OpenWriteCompletedEventHandler {
    struct OpenWriteCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct OpenWriteCompletedEventHandler__Fields fields;
};

struct OpenWriteCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Stream *m_Result;
};

struct OpenWriteCompletedEventArgs {
    struct OpenWriteCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct OpenWriteCompletedEventArgs__Fields fields;
};

struct DownloadStringCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct DownloadStringCompletedEventHandler {
    struct DownloadStringCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct DownloadStringCompletedEventHandler__Fields fields;
};

struct DownloadStringCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct String *m_Result;
};

struct DownloadStringCompletedEventArgs {
    struct DownloadStringCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct DownloadStringCompletedEventArgs__Fields fields;
};

struct DownloadDataCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct DownloadDataCompletedEventHandler {
    struct DownloadDataCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct DownloadDataCompletedEventHandler__Fields fields;
};

struct DownloadDataCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Byte__Array *m_Result;
};

struct DownloadDataCompletedEventArgs {
    struct DownloadDataCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct DownloadDataCompletedEventArgs__Fields fields;
};

struct UploadStringCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct UploadStringCompletedEventHandler {
    struct UploadStringCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct UploadStringCompletedEventHandler__Fields fields;
};

struct UploadStringCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct String *m_Result;
};

struct UploadStringCompletedEventArgs {
    struct UploadStringCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct UploadStringCompletedEventArgs__Fields fields;
};

struct UploadDataCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct UploadDataCompletedEventHandler {
    struct UploadDataCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct UploadDataCompletedEventHandler__Fields fields;
};

struct UploadDataCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Byte__Array *m_Result;
};

struct UploadDataCompletedEventArgs {
    struct UploadDataCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct UploadDataCompletedEventArgs__Fields fields;
};

struct UploadFileCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct UploadFileCompletedEventHandler {
    struct UploadFileCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct UploadFileCompletedEventHandler__Fields fields;
};

struct UploadFileCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Byte__Array *m_Result;
};

struct UploadFileCompletedEventArgs {
    struct UploadFileCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct UploadFileCompletedEventArgs__Fields fields;
};

struct UploadValuesCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct UploadValuesCompletedEventHandler {
    struct UploadValuesCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct UploadValuesCompletedEventHandler__Fields fields;
};

struct UploadValuesCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Byte__Array *m_Result;
};

struct UploadValuesCompletedEventArgs {
    struct UploadValuesCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct UploadValuesCompletedEventArgs__Fields fields;
};

struct DownloadProgressChangedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct DownloadProgressChangedEventHandler {
    struct DownloadProgressChangedEventHandler__Class *klass;
    MonitorData *monitor;
    struct DownloadProgressChangedEventHandler__Fields fields;
};

struct DownloadProgressChangedEventArgs__Fields {
    struct ProgressChangedEventArgs__Fields _;
    int64_t m_BytesReceived;
    int64_t m_TotalBytesToReceive;
};

struct DownloadProgressChangedEventArgs {
    struct DownloadProgressChangedEventArgs__Class *klass;
    MonitorData *monitor;
    struct DownloadProgressChangedEventArgs__Fields fields;
};

struct UploadProgressChangedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct UploadProgressChangedEventHandler {
    struct UploadProgressChangedEventHandler__Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebClient_ProgressData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OpenReadCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OpenReadCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OpenWriteCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OpenWriteCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DownloadStringCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DownloadStringCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DownloadDataCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DownloadDataCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadStringCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadStringCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadDataCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadDataCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadFileCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadFileCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadValuesCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadValuesCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DownloadProgressChangedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DownloadProgressChangedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadProgressChangedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UploadProgressChangedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebClient__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebClient__VTable vtable;
};

struct WebRequest___VTable {
};

struct WebRequest___StaticFields {
};

struct WebRequest___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebRequest___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebRequest___VTable vtable;
};

struct FileStream___VTable {
};

struct FileStream___StaticFields {
};

struct FileStream___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FileStream___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FileStream___VTable vtable;
};

struct __declspec(align(8)) WebClient_DownloadBitsState__Fields {
    struct WebClient *WebClient;
    struct Stream *WriteStream;
    struct Byte__Array *InnerBuffer;
    struct AsyncOperation *AsyncOp;
    struct WebRequest *Request;
    struct CompletionDelegate *CompletionDelegate;
    struct Stream *ReadStream;
    struct ScatterGatherBuffers *SgBuffers;
    int64_t ContentLength;
    int64_t Length;
    struct WebClient_ProgressData *Progress;
};

struct WebClient_DownloadBitsState {
    struct WebClient_DownloadBitsState__Class *klass;
    MonitorData *monitor;
    struct WebClient_DownloadBitsState__Fields fields;
};

struct CompletionDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct CompletionDelegate {
    struct CompletionDelegate__Class *klass;
    MonitorData *monitor;
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

}
