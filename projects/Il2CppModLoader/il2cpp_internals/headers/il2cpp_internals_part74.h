namespace app {

struct InvalidDataException__Fields {
  struct SystemException__Fields _;
};
struct InvalidDataException {
  struct InvalidDataException__Class *klass;
  struct MonitorData *monitor;
  struct InvalidDataException__Fields fields;
};
struct InvalidDataException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct InvalidDataException__StaticFields {
};
struct InvalidDataException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidDataException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidDataException__VTable vtable;
};

struct GZipStream__Fields {
  struct Stream__Fields _;
  struct DeflateStream * _deflateStream;
};
struct GZipStream {
  struct GZipStream__Class *klass;
  struct MonitorData *monitor;
  struct GZipStream__Fields fields;
};
enum CompressionMode__Enum : int32_t {
  CompressionMode__Enum_Decompress = 0,
  CompressionMode__Enum_Compress = 1,
};
struct CompressionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CompressionMode__Enum value;
};
struct DeflateStream__Fields {
  struct Stream__Fields _;
  struct Stream * base_stream;
  enum CompressionMode__Enum mode;
  bool leaveOpen;
  bool disposed;
  struct DeflateStreamNative * native;
};
struct DeflateStream {
  struct DeflateStream__Class *klass;
  struct MonitorData *monitor;
  struct DeflateStream__Fields fields;
};
struct __declspec(align(8)) DeflateStreamNative__Fields {
  struct DeflateStreamNative_UnmanagedReadOrWrite * feeder;
  struct Stream * base_stream;
  struct DeflateStreamNative_SafeDeflateStreamHandle * z_stream;
  struct GCHandle data;
  bool disposed;
  struct Byte__Array * io_buffer;
};
struct DeflateStreamNative {
  struct DeflateStreamNative__Class *klass;
  struct MonitorData *monitor;
  struct DeflateStreamNative__Fields fields;
};
struct DeflateStreamNative_UnmanagedReadOrWrite__Fields {
  struct MulticastDelegate__Fields _;
};
struct DeflateStreamNative_UnmanagedReadOrWrite {
  struct DeflateStreamNative_UnmanagedReadOrWrite__Class *klass;
  struct MonitorData *monitor;
  struct DeflateStreamNative_UnmanagedReadOrWrite__Fields fields;
};
struct DeflateStreamNative_SafeDeflateStreamHandle__Fields {
  struct SafeHandle__Fields _;
};
struct DeflateStreamNative_SafeDeflateStreamHandle {
  struct DeflateStreamNative_SafeDeflateStreamHandle__Class *klass;
  struct MonitorData *monitor;
  struct DeflateStreamNative_SafeDeflateStreamHandle__Fields fields;
};
struct DeflateStreamNative_UnmanagedReadOrWrite__VTable {
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
struct DeflateStreamNative_UnmanagedReadOrWrite__StaticFields {
};
struct DeflateStreamNative_UnmanagedReadOrWrite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateStreamNative_UnmanagedReadOrWrite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateStreamNative_UnmanagedReadOrWrite__VTable vtable;
};
struct DeflateStreamNative_SafeDeflateStreamHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_IsInvalid;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ReleaseHandle;
};
struct DeflateStreamNative_SafeDeflateStreamHandle__StaticFields {
};
struct DeflateStreamNative_SafeDeflateStreamHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateStreamNative_SafeDeflateStreamHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateStreamNative_SafeDeflateStreamHandle__VTable vtable;
};
struct DeflateStreamNative__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeflateStreamNative__StaticFields {
};
struct DeflateStreamNative__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateStreamNative__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateStreamNative__VTable vtable;
};
struct DeflateStream__VTable {
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
struct DeflateStream__StaticFields {
};
struct DeflateStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateStream__VTable vtable;
};
struct GZipStream__VTable {
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
struct GZipStream__StaticFields {
};
struct GZipStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GZipStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GZipStream__VTable vtable;
};

struct DeflateStream_ReadMethod__Fields {
  struct MulticastDelegate__Fields _;
};
struct DeflateStream_ReadMethod {
  struct DeflateStream_ReadMethod__Class *klass;
  struct MonitorData *monitor;
  struct DeflateStream_ReadMethod__Fields fields;
};
struct DeflateStream_ReadMethod__VTable {
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
struct DeflateStream_ReadMethod__StaticFields {
};
struct DeflateStream_ReadMethod__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateStream_ReadMethod__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateStream_ReadMethod__VTable vtable;
};

struct DeflateStream_WriteMethod__Fields {
  struct MulticastDelegate__Fields _;
};
struct DeflateStream_WriteMethod {
  struct DeflateStream_WriteMethod__Class *klass;
  struct MonitorData *monitor;
  struct DeflateStream_WriteMethod__Fields fields;
};
struct DeflateStream_WriteMethod__VTable {
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
struct DeflateStream_WriteMethod__StaticFields {
};
struct DeflateStream_WriteMethod__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateStream_WriteMethod__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateStream_WriteMethod__VTable vtable;
};

struct NetEventSource__Fields {
  struct EventSource__Fields _;
};
struct NetEventSource {
  struct NetEventSource__Class *klass;
  struct MonitorData *monitor;
  struct NetEventSource__Fields fields;
};
struct NetEventSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData OnEventCommand;
  VirtualInvokeData Dispose_1;
};
struct NetEventSource__StaticFields {
  struct NetEventSource * Log;
};
struct NetEventSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetEventSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetEventSource__VTable vtable;
};

struct NetEventSource_Keywords {
  struct NetEventSource_Keywords__Class *klass;
  struct MonitorData *monitor;
};
struct NetEventSource_Keywords__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NetEventSource_Keywords__StaticFields {
};
struct NetEventSource_Keywords__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetEventSource_Keywords__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetEventSource_Keywords__VTable vtable;
};

struct AuthenticationSchemeSelector__Fields {
  struct MulticastDelegate__Fields _;
};
struct AuthenticationSchemeSelector {
  struct AuthenticationSchemeSelector__Class *klass;
  struct MonitorData *monitor;
  struct AuthenticationSchemeSelector__Fields fields;
};
enum AuthenticationSchemes__Enum : int32_t {
  AuthenticationSchemes__Enum_None = 0,
  AuthenticationSchemes__Enum_Digest = 1,
  AuthenticationSchemes__Enum_Negotiate = 2,
  AuthenticationSchemes__Enum_Ntlm = 4,
  AuthenticationSchemes__Enum_Basic = 8,
  AuthenticationSchemes__Enum_Anonymous = 32768,
  AuthenticationSchemes__Enum_IntegratedWindowsAuthentication = 6,
};
struct AuthenticationSchemes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AuthenticationSchemes__Enum value;
};
struct __declspec(align(8)) HttpListenerRequest__Fields {
  struct String__Array * accept_types;
  struct Encoding * content_encoding;
  int64_t content_length;
  bool cl_set;
  struct CookieCollection * cookies;
  struct WebHeaderCollection * headers;
  struct String * method;
  struct Stream * input_stream;
  struct Version * version;
  struct NameValueCollection * query_string;
  struct String * raw_url;
  struct Uri * url;
  struct Uri * referrer;
  struct String__Array * user_languages;
  struct HttpListenerContext * context;
  bool is_chunked;
  bool ka_set;
  bool keep_alive;
  struct HttpListenerRequest_GCCDelegate * gcc_delegate;
};
struct HttpListenerRequest {
  struct HttpListenerRequest__Class *klass;
  struct MonitorData *monitor;
  struct HttpListenerRequest__Fields fields;
};
struct __declspec(align(8)) HttpListenerContext__Fields {
  struct HttpListenerRequest * request;
  struct HttpListenerResponse * response;
  struct IPrincipal * user;
  struct HttpConnection * cnc;
  struct String * error;
  int32_t err_status;
  struct HttpListener * Listener;
};
struct HttpListenerContext {
  struct HttpListenerContext__Class *klass;
  struct MonitorData *monitor;
  struct HttpListenerContext__Fields fields;
};
struct __declspec(align(8)) HttpListenerResponse__Fields {
  bool disposed;
  struct Encoding * content_encoding;
  int64_t content_length;
  bool cl_set;
  struct String * content_type;
  struct CookieCollection * cookies;
  struct WebHeaderCollection * headers;
  bool keep_alive;
  struct ResponseStream * output_stream;
  struct Version * version;
  struct String * location;
  int32_t status_code;
  struct String * status_description;
  bool chunked;
  struct HttpListenerContext * context;
  bool HeadersSent;
  struct Object * headers_lock;
  bool force_close_chunked;
};
struct HttpListenerResponse {
  struct HttpListenerResponse__Class *klass;
  struct MonitorData *monitor;
  struct HttpListenerResponse__Fields fields;
};
struct ResponseStream__Fields {
  struct Stream__Fields _;
  struct HttpListenerResponse * response;
  bool ignore_errors;
  bool disposed;
  bool trailer_sent;
  struct Stream * stream;
};
struct ResponseStream {
  struct ResponseStream__Class *klass;
  struct MonitorData *monitor;
  struct ResponseStream__Fields fields;
};
enum HttpConnection_InputState__Enum : int32_t {
  HttpConnection_InputState__Enum_RequestLine = 0,
  HttpConnection_InputState__Enum_Headers = 1,
};
struct HttpConnection_InputState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HttpConnection_InputState__Enum value;
};
enum HttpConnection_LineState__Enum : int32_t {
  HttpConnection_LineState__Enum_None = 0,
  HttpConnection_LineState__Enum_CR = 1,
  HttpConnection_LineState__Enum_LF = 2,
};
struct HttpConnection_LineState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HttpConnection_LineState__Enum value;
};
struct __declspec(align(8)) HttpConnection__Fields {
  struct Socket * sock;
  struct Stream * stream;
  struct EndPointListener * epl;
  struct MemoryStream * ms;
  struct Byte__Array * buffer;
  struct HttpListenerContext * context;
  struct StringBuilder * current_line;
  struct ListenerPrefix * prefix;
  struct RequestStream * i_stream;
  struct ResponseStream * o_stream;
  bool chunked;
  int32_t reuses;
  bool context_bound;
  bool secure;
  struct X509Certificate_1 * cert;
  int32_t s_timeout;
  struct Timer * timer;
  struct IPEndPoint * local_ep;
  struct HttpListener * last_listener;
  struct Int32__Array * client_cert_errors;
  struct X509Certificate2 * client_cert;
  struct SslStream * ssl_stream;
  enum HttpConnection_InputState__Enum input_state;
  enum HttpConnection_LineState__Enum line_state;
  int32_t position;
};
struct HttpConnection {
  struct HttpConnection__Class *klass;
  struct MonitorData *monitor;
  struct HttpConnection__Fields fields;
};
struct __declspec(align(8)) EndPointListener__Fields {
  struct HttpListener * listener;
  struct IPEndPoint * endpoint;
  struct Socket * sock;
  struct Hashtable * prefixes;
  struct ArrayList * unhandled;
  struct ArrayList * all;
  struct X509Certificate_1 * cert;
  bool secure;
  struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_ * unregistered;
};
struct EndPointListener {
  struct EndPointListener__Class *klass;
  struct MonitorData *monitor;
  struct EndPointListener__Fields fields;
};
struct __declspec(align(8)) HttpListener__Fields {
  struct MonoTlsProvider * tlsProvider;
  struct MonoTlsSettings * tlsSettings;
  struct X509Certificate_1 * certificate;
  enum AuthenticationSchemes__Enum auth_schemes;
  struct HttpListenerPrefixCollection * prefixes;
  struct AuthenticationSchemeSelector * auth_selector;
  struct String * realm;
  bool ignore_write_exceptions;
  bool unsafe_ntlm_auth;
  bool listening;
  bool disposed;
  struct Object * _internalLock;
  struct Hashtable * registry;
  struct ArrayList * ctx_queue;
  struct ArrayList * wait_queue;
  struct Hashtable * connections;
  struct ServiceNameStore * defaultServiceNames;
  struct ExtendedProtectionPolicy * extendedProtectionPolicy;
  struct HttpListener_ExtendedProtectionSelector * extendedProtectionSelectorDelegate;
};
struct HttpListener {
  struct HttpListener__Class *klass;
  struct MonitorData *monitor;
  struct HttpListener__Fields fields;
};
struct __declspec(align(8)) HttpListenerPrefixCollection__Fields {
  struct List_1_System_String_ * prefixes;
  struct HttpListener * listener;
};
struct HttpListenerPrefixCollection {
  struct HttpListenerPrefixCollection__Class *klass;
  struct MonitorData *monitor;
  struct HttpListenerPrefixCollection__Fields fields;
};
struct __declspec(align(8)) ServiceNameStore__Fields {
  struct List_1_System_String_ * serviceNames;
  struct ServiceNameCollection * serviceNameCollection;
};
struct ServiceNameStore {
  struct ServiceNameStore__Class *klass;
  struct MonitorData *monitor;
  struct ServiceNameStore__Fields fields;
};
struct HttpListener_ExtendedProtectionSelector__Fields {
  struct MulticastDelegate__Fields _;
};
struct HttpListener_ExtendedProtectionSelector {
  struct HttpListener_ExtendedProtectionSelector__Class *klass;
  struct MonitorData *monitor;
  struct HttpListener_ExtendedProtectionSelector__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Net_HttpConnection_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_ {
  struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection_ {
  int32_t hashCode;
  int32_t next;
  struct HttpConnection * key;
  struct HttpConnection * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection_ vector[32];
};
struct IEqualityComparer_1_System_Net_HttpConnection_ {
  struct IEqualityComparer_1_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields {
  struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields fields;
};
struct HttpConnection__Array {
  struct HttpConnection__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HttpConnection * vector[32];
};
struct IEnumerator_1_System_Net_HttpConnection_ {
  struct IEnumerator_1_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields {
  struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields fields;
};
struct ICollection_1_System_Net_HttpConnection_ {
  struct ICollection_1_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ {
  struct HttpConnection * key;
  struct HttpConnection * value;
};
struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Boxed {
  struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ fields;
};
struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array {
  struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ {
  struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Net_HttpConnection_ {
  struct IEnumerable_1_System_Net_HttpConnection___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ListenerPrefix__Fields {
  struct String * original;
  struct String * host;
  uint16_t port;
  struct String * path;
  bool secure;
  struct IPAddress__Array * addresses;
  struct HttpListener * Listener;
};
struct ListenerPrefix {
  struct ListenerPrefix__Class *klass;
  struct MonitorData *monitor;
  struct ListenerPrefix__Fields fields;
};
struct RequestStream__Fields {
  struct Stream__Fields _;
  struct Byte__Array * buffer;
  int32_t offset;
  int32_t length;
  int64_t remaining_body;
  bool disposed;
  struct Stream * stream;
};
struct RequestStream {
  struct RequestStream__Class *klass;
  struct MonitorData *monitor;
  struct RequestStream__Fields fields;
};
struct HttpListenerRequest_GCCDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct HttpListenerRequest_GCCDelegate {
  struct HttpListenerRequest_GCCDelegate__Class *klass;
  struct MonitorData *monitor;
  struct HttpListenerRequest_GCCDelegate__Fields fields;
};
struct ResponseStream__VTable {
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
struct ResponseStream__StaticFields {
  struct Byte__Array * crlf;
};
struct ResponseStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResponseStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResponseStream__VTable vtable;
};
struct HttpListenerResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IDisposable_Dispose;
};
struct HttpListenerResponse__StaticFields {
  struct String * tspecials;
};
struct HttpListenerResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpListenerResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpListenerResponse__VTable vtable;
};
struct HttpListenerPrefixCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct HttpListenerPrefixCollection__StaticFields {
};
struct HttpListenerPrefixCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpListenerPrefixCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpListenerPrefixCollection__VTable vtable;
};
struct ServiceNameStore__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServiceNameStore__StaticFields {
};
struct ServiceNameStore__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServiceNameStore__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServiceNameStore__VTable vtable;
};
struct HttpListener_ExtendedProtectionSelector__VTable {
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
struct HttpListener_ExtendedProtectionSelector__StaticFields {
};
struct HttpListener_ExtendedProtectionSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpListener_ExtendedProtectionSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpListener_ExtendedProtectionSelector__VTable vtable;
};
struct HttpListener__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IDisposable_Dispose;
};
struct HttpListener__StaticFields {
};
struct HttpListener__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpListener__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpListener__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___VTable vtable;
};
struct IEqualityComparer_1_System_Net_HttpConnection___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_System_Net_HttpConnection___StaticFields {
};
struct IEqualityComparer_1_System_Net_HttpConnection___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_System_Net_HttpConnection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_System_Net_HttpConnection___VTable vtable;
};
struct IEnumerator_1_System_Net_HttpConnection___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Net_HttpConnection___StaticFields {
};
struct IEnumerator_1_System_Net_HttpConnection___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Net_HttpConnection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Net_HttpConnection___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___VTable vtable;
};
struct ICollection_1_System_Net_HttpConnection___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Net_HttpConnection___StaticFields {
};
struct ICollection_1_System_Net_HttpConnection___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Net_HttpConnection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Net_HttpConnection___VTable vtable;
};
struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields {
};}