namespace app {
struct RequestCacheProtocol {
  struct RequestCacheProtocol__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) RequestCacheBinding__Fields {
  struct RequestCache * m_RequestCache;
  struct RequestCacheValidator * m_CacheValidator;
  struct RequestCachePolicy * m_Policy;
};
struct RequestCacheBinding {
  struct RequestCacheBinding__Class *klass;
  struct MonitorData *monitor;
  struct RequestCacheBinding__Fields fields;
};
struct __declspec(align(8)) RequestCache__Fields {
  bool _IsPrivateCache;
  bool _CanWrite;
};
struct RequestCache {
  struct RequestCache__Class *klass;
  struct MonitorData *monitor;
  struct RequestCache__Fields fields;
};
struct RequestCacheValidator {
  struct RequestCacheValidator__Class *klass;
  struct MonitorData *monitor;
};
struct WebRequest_DesignerWebRequestCreate {
  struct WebRequest_DesignerWebRequestCreate__Class *klass;
  struct MonitorData *monitor;
};
struct IWebRequestCreate {
  struct IWebRequestCreate__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) NameObjectCollectionBase__Fields {
  bool _readOnly;
  struct ArrayList * _entriesArray;
  struct IEqualityComparer * _keyComparer;
  struct Hashtable * _entriesTable;
  struct NameObjectCollectionBase_NameObjectEntry * _nullKeyEntry;
  struct NameObjectCollectionBase_KeysCollection * _keys;
  struct SerializationInfo * _serializationInfo;
  int32_t _version;
  struct Object * _syncRoot;
};
struct NameObjectCollectionBase {
  struct NameObjectCollectionBase__Class *klass;
  struct MonitorData *monitor;
  struct NameObjectCollectionBase__Fields fields;
};
struct NameValueCollection__Fields {
  struct NameObjectCollectionBase__Fields _;
  struct String__Array * _all;
  struct String__Array * _allKeys;
};
struct NameValueCollection {
  struct NameValueCollection__Class *klass;
  struct MonitorData *monitor;
  struct NameValueCollection__Fields fields;
};
enum WebHeaderCollectionType__Enum : uint16_t {
  WebHeaderCollectionType__Enum_Unknown = 0,
  WebHeaderCollectionType__Enum_WebRequest = 1,
  WebHeaderCollectionType__Enum_WebResponse = 2,
  WebHeaderCollectionType__Enum_HttpWebRequest = 3,
  WebHeaderCollectionType__Enum_HttpWebResponse = 4,
  WebHeaderCollectionType__Enum_HttpListenerRequest = 5,
  WebHeaderCollectionType__Enum_HttpListenerResponse = 6,
  WebHeaderCollectionType__Enum_FtpWebRequest = 7,
  WebHeaderCollectionType__Enum_FtpWebResponse = 8,
  WebHeaderCollectionType__Enum_FileWebRequest = 9,
  WebHeaderCollectionType__Enum_FileWebResponse = 10,
};
struct WebHeaderCollectionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WebHeaderCollectionType__Enum value;
};
struct WebHeaderCollection__Fields {
  struct NameValueCollection__Fields _;
  struct String__Array * m_CommonHeaders;
  int32_t m_NumCommonHeaders;
  struct NameValueCollection * m_InnerCollection;
  enum WebHeaderCollectionType__Enum m_Type;
};
struct WebHeaderCollection {
  struct WebHeaderCollection__Class *klass;
  struct MonitorData *monitor;
  struct WebHeaderCollection__Fields fields;
};
struct __declspec(align(8)) NameObjectCollectionBase_NameObjectEntry__Fields {
  struct String * Key;
  struct Object * Value;
};
struct NameObjectCollectionBase_NameObjectEntry {
  struct NameObjectCollectionBase_NameObjectEntry__Class *klass;
  struct MonitorData *monitor;
  struct NameObjectCollectionBase_NameObjectEntry__Fields fields;
};
struct __declspec(align(8)) NameObjectCollectionBase_KeysCollection__Fields {
  struct NameObjectCollectionBase * _coll;
};
struct NameObjectCollectionBase_KeysCollection {
  struct NameObjectCollectionBase_KeysCollection__Class *klass;
  struct MonitorData *monitor;
  struct NameObjectCollectionBase_KeysCollection__Fields fields;
};
struct HeaderInfoTable {
  struct HeaderInfoTable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HeaderInfo__Fields {
  bool IsRequestRestricted;
  bool IsResponseRestricted;
  struct HeaderParser * Parser;
  struct String * HeaderName;
  bool AllowMultiValues;
};
struct HeaderInfo {
  struct HeaderInfo__Class *klass;
  struct MonitorData *monitor;
  struct HeaderInfo__Fields fields;
};
struct HeaderParser__Fields {
  struct MulticastDelegate__Fields _;
};
struct HeaderParser {
  struct HeaderParser__Class *klass;
  struct MonitorData *monitor;
  struct HeaderParser__Fields fields;
};
enum WebHeaderCollection_RfcChar__Enum : uint8_t {
  WebHeaderCollection_RfcChar__Enum_High = 0,
  WebHeaderCollection_RfcChar__Enum_Reg = 1,
  WebHeaderCollection_RfcChar__Enum_Ctl = 2,
  WebHeaderCollection_RfcChar__Enum_CR = 3,
  WebHeaderCollection_RfcChar__Enum_LF = 4,
  WebHeaderCollection_RfcChar__Enum_WS = 5,
  WebHeaderCollection_RfcChar__Enum_Colon = 6,
  WebHeaderCollection_RfcChar__Enum_Delim = 7,
};
struct WebHeaderCollection_RfcChar__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WebHeaderCollection_RfcChar__Enum value;
};
struct WebHeaderCollection_RfcChar__Enum__Array {
  struct WebHeaderCollection_RfcChar__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum WebHeaderCollection_RfcChar__Enum vector[32];
};
struct WebResponse__Fields {
  struct MarshalByRefObject__Fields _;
  bool m_IsCacheFresh;
  bool m_IsFromCache;
};
struct WebResponse {
  struct WebResponse__Class *klass;
  struct MonitorData *monitor;
  struct WebResponse__Fields fields;
};
struct Task_1_System_IO_Stream___Fields {
  struct Task__Fields _;
  struct Stream * m_result;
};
struct Task_1_System_IO_Stream_ {
  struct Task_1_System_IO_Stream___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_IO_Stream___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_IO_Stream___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_IO_Stream_ {
  struct TaskFactory_1_System_IO_Stream___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_IO_Stream___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6__Fields fields;
};
struct Task_1_System_Net_WebResponse___Fields {
  struct Task__Fields _;
  struct WebResponse * m_result;
};
struct Task_1_System_Net_WebResponse_ {
  struct Task_1_System_Net_WebResponse___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_Net_WebResponse___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_Net_WebResponse___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_Net_WebResponse_ {
  struct TaskFactory_1_System_Net_WebResponse___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_Net_WebResponse___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7__Fields fields;
};
struct HttpContinueDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct HttpContinueDelegate {
  struct HttpContinueDelegate__Class *klass;
  struct MonitorData *monitor;
  struct HttpContinueDelegate__Fields fields;
};
struct __declspec(align(8)) CookieContainer__Fields {
  struct Hashtable * m_domainTable;
  int32_t m_maxCookieSize;
  int32_t m_maxCookies;
  int32_t m_maxCookiesPerDomain;
  int32_t m_count;
  struct String * m_fqdnMyDomain;
};
struct CookieContainer {
  struct CookieContainer__Class *klass;
  struct MonitorData *monitor;
  struct CookieContainer__Fields fields;
};
enum CookieVariant__Enum : int32_t {
  CookieVariant__Enum_Unknown = 0,
  CookieVariant__Enum_Plain = 1,
  CookieVariant__Enum_Rfc2109 = 2,
  CookieVariant__Enum_Rfc2965 = 3,
  CookieVariant__Enum_Default = 2,
};
struct CookieVariant__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CookieVariant__Enum value;
};
struct HeaderVariantInfo {
  struct String * m_name;
  enum CookieVariant__Enum m_variant;
};
struct HeaderVariantInfo__Boxed {
  struct HeaderVariantInfo__Class *klass;
  struct MonitorData *monitor;
  struct HeaderVariantInfo fields;
};
struct HeaderVariantInfo__Array {
  struct HeaderVariantInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HeaderVariantInfo vector[32];
};
struct __declspec(align(8)) ServicePoint__Fields {
  struct Uri * uri;
  int32_t connectionLimit;
  int32_t maxIdleTime;
  int32_t currentConnections;
  struct DateTime idleSince;
  struct DateTime lastDnsResolve;
  struct Version * protocolVersion;
  struct IPHostEntry * host;
  bool usesProxy;
  struct Dictionary_2_System_String_System_Net_WebConnectionGroup_ * groups;
  bool sendContinue;
  bool useConnect;
  struct Object * hostE;
  bool useNagle;
  struct BindIPEndPoint * endPointCallback;
  bool tcp_keepalive;
  int32_t tcp_keepalive_time;
  int32_t tcp_keepalive_interval;
  struct Timer * idleTimer;
  struct Object * m_ServerCertificateOrBytes;
  struct Object * m_ClientCertificateOrBytes;
};
struct ServicePoint {
  struct ServicePoint__Class *klass;
  struct MonitorData *monitor;
  struct ServicePoint__Fields fields;
};
struct __declspec(align(8)) IPHostEntry__Fields {
  struct String * hostName;
  struct String__Array * aliases;
  struct IPAddress__Array * addressList;
  bool isTrustedHost;
};
struct IPHostEntry {
  struct IPHostEntry__Class *klass;
  struct MonitorData *monitor;
  struct IPHostEntry__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Net_WebConnectionGroup___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Net_WebConnectionGroup_ {
  struct Dictionary_2_System_String_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Net_WebConnectionGroup___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct WebConnectionGroup * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup_ vector[32];
};
struct __declspec(align(8)) WebConnectionGroup__Fields {
  struct ServicePoint * sPoint;
  struct String * name;
  struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * connections;
  struct Queue * queue;
  bool closing;
  struct EventHandler * ConnectionClosed;
};
struct WebConnectionGroup {
  struct WebConnectionGroup__Class *klass;
  struct MonitorData *monitor;
  struct WebConnectionGroup__Fields fields;
};
struct __declspec(align(8)) LinkedList_1_System_Net_WebConnectionGroup_ConnectionState___Fields {
  struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_ * head;
  int32_t count;
  int32_t version;
  struct Object * _syncRoot;
  struct SerializationInfo * _siInfo;
};
struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ {
  struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState___Class *klass;
  struct MonitorData *monitor;
  struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState___Fields fields;
};
struct __declspec(align(8)) LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState___Fields {
  struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * list;
  struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_ * next;
  struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_ * prev;
  struct WebConnectionGroup_ConnectionState * item;
};
struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_ {
  struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState___Class *klass;
  struct MonitorData *monitor;
  struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState___Fields fields;
};
struct __declspec(align(8)) WebConnectionGroup_ConnectionState__Fields {
  struct WebConnection * _Connection_k__BackingField;
  struct WebConnectionGroup * _Group_k__BackingField;
  bool busy;
  struct DateTime idleSince;
};
struct WebConnectionGroup_ConnectionState {
  struct WebConnectionGroup_ConnectionState__Class *klass;
  struct MonitorData *monitor;
  struct WebConnectionGroup_ConnectionState__Fields fields;
};
enum WebConnection_NtlmAuthState__Enum : int32_t {
  WebConnection_NtlmAuthState__Enum_None = 0,
  WebConnection_NtlmAuthState__Enum_Challenge = 1,
  WebConnection_NtlmAuthState__Enum_Response = 2,
};
struct WebConnection_NtlmAuthState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WebConnection_NtlmAuthState__Enum value;
};
struct __declspec(align(8)) WebConnection__Fields {
  struct ServicePoint * sPoint;
  struct Stream * nstream;
  struct Socket * socket;
  struct Object * socketLock;
  struct IWebConnectionState * state;
  enum WebExceptionStatus__Enum status;
  bool keepAlive;
  struct Byte__Array * buffer;
  struct EventHandler * abortHandler;
  struct WebConnection_AbortHelper * abortHelper;
  struct WebConnectionData * Data;
  bool chunkedRead;
  struct MonoChunkStream * chunkStream;
  struct Queue * queue;
  bool reused;
  int32_t position;
  struct HttpWebRequest * priority_request;
  struct NetworkCredential * ntlm_credentials;
  bool ntlm_authenticated;
  bool unsafe_sharing;
  enum WebConnection_NtlmAuthState__Enum connect_ntlm_auth_state;
  struct HttpWebRequest * connect_request;
  struct Exception * connect_exception;
  struct MonoTlsStream * tlsStream;
};
struct WebConnection {
  struct WebConnection__Class *klass;
  struct MonitorData *monitor;
  struct WebConnection__Fields fields;
};
struct IWebConnectionState {
  struct IWebConnectionState__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) WebConnection_AbortHelper__Fields {
  struct WebConnection * Connection;
};
struct WebConnection_AbortHelper {
  struct WebConnection_AbortHelper__Class *klass;
  struct MonitorData *monitor;
  struct WebConnection_AbortHelper__Fields fields;
};
enum ReadState__Enum : int32_t {
  ReadState__Enum_None = 0,
  ReadState__Enum_Status = 1,
  ReadState__Enum_Headers = 2,
  ReadState__Enum_Content = 3,
  ReadState__Enum_Aborted = 4,
};
struct ReadState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReadState__Enum value;
};
struct __declspec(align(8)) WebConnectionData__Fields {
  struct HttpWebRequest * _request;
  int32_t StatusCode;
  struct String * StatusDescription;
  struct WebHeaderCollection * Headers;
  struct Version * Version;
  struct Version * ProxyVersion;
  struct Stream * stream;
  struct String__Array * Challenge;
  enum ReadState__Enum _readState;
};
struct WebConnectionData {
  struct WebConnectionData__Class *klass;
  struct MonitorData *monitor;
  struct WebConnectionData__Fields fields;
};
enum MonoChunkStream_State__Enum : int32_t {
  MonoChunkStream_State__Enum_None = 0,
  MonoChunkStream_State__Enum_PartialSize = 1,
  MonoChunkStream_State__Enum_Body = 2,
  MonoChunkStream_State__Enum_BodyFinished = 3,
  MonoChunkStream_State__Enum_Trailer = 4,
};
struct MonoChunkStream_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MonoChunkStream_State__Enum value;
};
struct __declspec(align(8)) MonoChunkStream__Fields {
  struct WebHeaderCollection * headers;
  int32_t chunkSize;
  int32_t chunkRead;
  int32_t totalWritten;
  enum MonoChunkStream_State__Enum state;
  struct StringBuilder * saved;
  bool sawCR;
  bool gotit;
  int32_t trailerState;
  struct ArrayList * chunks;
};
struct MonoChunkStream {
  struct MonoChunkStream__Class *klass;
  struct MonitorData *monitor;
  struct MonoChunkStream__Fields fields;
};
struct WebConnectionGroup_ConnectionState__Array {
  struct WebConnectionGroup_ConnectionState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WebConnectionGroup_ConnectionState * vector[32];
};
struct IEnumerator_1_System_Net_WebConnectionGroup_ConnectionState_ {
  struct IEnumerator_1_System_Net_WebConnectionGroup_ConnectionState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup___Fields {
  struct Dictionary_2_System_String_System_Net_WebConnectionGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup___Fields {
  struct Dictionary_2_System_String_System_Net_WebConnectionGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup___Fields fields;
};
struct WebConnectionGroup__Array {
  struct WebConnectionGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WebConnectionGroup * vector[32];
};
struct IEnumerator_1_System_Net_WebConnectionGroup_ {
  struct IEnumerator_1_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Net_WebConnectionGroup_ {
  struct ICollection_1_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ {
  struct String * key;
  struct WebConnectionGroup * value;
};
struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Boxed {
  struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ fields;
};
struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Array {
  struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Net_WebConnectionGroup_ {
  struct IEnumerable_1_System_Net_WebConnectionGroup___Class *klass;
  struct MonitorData *monitor;
};
struct BindIPEndPoint__Fields {
  struct MulticastDelegate__Fields _;
};
struct BindIPEndPoint {
  struct BindIPEndPoint__Class *klass;
  struct MonitorData *monitor;
  struct BindIPEndPoint__Fields fields;
};
struct __declspec(align(8)) IPEndPoint__Fields {
  struct IPAddress * m_Address;
  int32_t m_Port;
};
struct IPEndPoint {
  struct IPEndPoint__Class *klass;
  struct MonitorData *monitor;
  struct IPEndPoint__Fields fields;
};
struct WebConnectionStream__Fields {
  struct Stream__Fields _;
  bool isRead;
  struct WebConnection * cnc;
  struct HttpWebRequest * request;
  struct Byte__Array * readBuffer;
  int32_t readBufferOffset;
  int32_t readBufferSize;
  int32_t stream_length;
  int64_t contentLength;
  int64_t totalRead;
  int64_t totalWritten;
  bool nextReadCalled;
  int32_t pendingReads;
  int32_t pendingWrites;
  struct ManualResetEvent * pending;
  bool allowBuffering;
  bool sendChunked;
  struct MemoryStream * writeBuffer;
  bool requestWritten;
  struct Byte__Array * headers;
  bool disposed;
  bool headersSent;
  struct Object * locker;
  bool initRead;
  bool read_eof;
  bool complete_request_written;
  int32_t read_timeout;
  int32_t write_timeout;
  struct AsyncCallback * cb_wrapper;
  bool IgnoreIOErrors;
  bool _GetResponseOnClose_k__BackingField;
};
struct WebConnectionStream {
  struct WebConnectionStream__Class *klass;
  struct MonitorData *monitor;
  struct WebConnectionStream__Fields fields;
};
enum HttpStatusCode__Enum : int32_t {
  HttpStatusCode__Enum_Continue = 100,
  HttpStatusCode__Enum_SwitchingProtocols = 101,
  HttpStatusCode__Enum_OK = 200,
  HttpStatusCode__Enum_Created = 201,
  HttpStatusCode__Enum_Accepted = 202,
  HttpStatusCode__Enum_NonAuthoritativeInformation = 203,
  HttpStatusCode__Enum_NoContent = 204,
  HttpStatusCode__Enum_ResetContent = 205,
  HttpStatusCode__Enum_PartialContent = 206,
  HttpStatusCode__Enum_MultipleChoices = 300,
  HttpStatusCode__Enum_Ambiguous = 300,
  HttpStatusCode__Enum_MovedPermanently = 301,
  HttpStatusCode__Enum_Moved = 301,
  HttpStatusCode__Enum_Found = 302,
  HttpStatusCode__Enum_Redirect = 302,
  HttpStatusCode__Enum_SeeOther = 303,
  HttpStatusCode__Enum_RedirectMethod = 303,
  HttpStatusCode__Enum_NotModified = 304,
  HttpStatusCode__Enum_UseProxy = 305,
  HttpStatusCode__Enum_Unused = 306,
  HttpStatusCode__Enum_TemporaryRedirect = 307,
  HttpStatusCode__Enum_RedirectKeepVerb = 307,
  HttpStatusCode__Enum_BadRequest = 400,
  HttpStatusCode__Enum_Unauthorized = 401,
  HttpStatusCode__Enum_PaymentRequired = 402,
  HttpStatusCode__Enum_Forbidden = 403,
  HttpStatusCode__Enum_NotFound = 404,
  HttpStatusCode__Enum_MethodNotAllowed = 405,
  HttpStatusCode__Enum_NotAcceptable = 406,
  HttpStatusCode__Enum_ProxyAuthenticationRequired = 407,
  HttpStatusCode__Enum_RequestTimeout = 408,
  HttpStatusCode__Enum_Conflict = 409,
  HttpStatusCode__Enum_Gone = 410,
  HttpStatusCode__Enum_LengthRequired = 411,
  HttpStatusCode__Enum_PreconditionFailed = 412,
  HttpStatusCode__Enum_RequestEntityTooLarge = 413,
  HttpStatusCode__Enum_RequestUriTooLong = 414,
  HttpStatusCode__Enum_UnsupportedMediaType = 415,
  HttpStatusCode__Enum_RequestedRangeNotSatisfiable = 416,
  HttpStatusCode__Enum_ExpectationFailed = 417,
  HttpStatusCode__Enum_UpgradeRequired = 426,
  HttpStatusCode__Enum_InternalServerError = 500,
  HttpStatusCode__Enum_NotImplemented = 501,
  HttpStatusCode__Enum_BadGateway = 502,
  HttpStatusCode__Enum_ServiceUnavailable = 503,
  HttpStatusCode__Enum_GatewayTimeout = 504,
  HttpStatusCode__Enum_HttpVersionNotSupported = 505,
};
struct HttpStatusCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HttpStatusCode__Enum value;
};
struct HttpWebResponse__Fields {
  struct WebResponse__Fields _;
  struct Uri * uri;
  struct WebHeaderCollection * webHeaders;
  struct CookieCollection * cookieCollection;
  struct String * method;
  struct Version * version;
  enum HttpStatusCode__Enum statusCode;
  struct String * statusDescription;
  int64_t contentLength;
  struct String * contentType;
  struct CookieContainer * cookie_container;
  bool disposed;
  struct Stream * stream;
};
struct HttpWebResponse {
  struct HttpWebResponse__Class *klass;
  struct MonitorData *monitor;
  struct HttpWebResponse__Fields fields;
};
struct __declspec(align(8)) CookieCollection__Fields {
  int32_t m_version;
  struct ArrayList * m_list;
  struct DateTime m_TimeStamp;
  bool m_has_other_versions;
  bool m_IsReadOnly;
};
struct CookieCollection {
  struct CookieCollection__Class *klass;
  struct MonitorData *monitor;
  struct CookieCollection__Fields fields;
};
struct __declspec(align(8)) SimpleAsyncResult__Fields {
  struct ManualResetEvent * handle;
  bool synch;
  bool isCompleted;
  struct SimpleAsyncCallback * cb;
  struct Object * state;
  bool callbackDone;
  struct Exception * exc;
  struct Object * locker;
  struct Nullable_1_Boolean_ user_read_synch;
};
struct SimpleAsyncResult {
  struct SimpleAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct SimpleAsyncResult__Fields fields;
};
struct WebAsyncResult__Fields {
  struct SimpleAsyncResult__Fields _;
  int32_t nbytes;
  struct IAsyncResult * innerAsyncResult;
  struct HttpWebResponse * response;
  struct Stream * writeStream;
  struct Byte__Array * buffer;
  int32_t offset;
  int32_t size;
  bool EndCalled;
  bool AsyncWriteAll;
  struct HttpWebRequest * AsyncObject;
};
struct WebAsyncResult {
  struct WebAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct WebAsyncResult__Fields fields;
};
struct SimpleAsyncCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct SimpleAsyncCallback {
  struct SimpleAsyncCallback__Class *klass;
  struct MonitorData *monitor;
  struct SimpleAsyncCallback__Fields fields;
};
struct Action_1_System_IO_Stream___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_System_IO_Stream_ {
  struct Action_1_System_IO_Stream___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_System_IO_Stream___Fields fields;
};
struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ {
  enum MonoSslPolicyErrors__Enum value;
  bool has_value;
};
struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors___Boxed {
  struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ fields;
};
struct __declspec(align(8)) ValidationResult__Fields {
  bool trusted;
  bool user_denied;
  int32_t error_code;
  struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ policy_errors;
};
struct ValidationResult {
  struct ValidationResult__Class *klass;
  struct MonitorData *monitor;
  struct ValidationResult__Fields fields;
};
struct LocalCertSelectionCallback__VTable {
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
struct LocalCertSelectionCallback__StaticFields {
};
struct LocalCertSelectionCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LocalCertSelectionCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LocalCertSelectionCallback__VTable vtable;
};
struct IEnumerator_1_System_Threading_Thread___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Threading_Thread___StaticFields {
};
struct IEnumerator_1_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Threading_Thread___VTable vtable;
};
struct List_1_System_Threading_Thread___VTable {
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
struct List_1_System_Threading_Thread___StaticFields {
  struct Thread__Array * _emptyArray;
};
struct List_1_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Threading_Thread___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___VTable vtable;
};
struct IEqualityComparer_1_System_Threading_Thread___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_System_Threading_Thread___StaticFields {
};
struct IEqualityComparer_1_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_System_Threading_Thread___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___VTable vtable;
};
struct IEnumerator_1_System_Diagnostics_StackTrace___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Diagnostics_StackTrace___StaticFields {
};
struct IEnumerator_1_System_Diagnostics_StackTrace___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Diagnostics_StackTrace___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Diagnostics_StackTrace___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___VTable vtable;
};
struct ICollection_1_System_Threading_Thread___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Threading_Thread___StaticFields {
};
struct ICollection_1_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Threading_Thread___VTable vtable;
};
struct ICollection_1_System_Diagnostics_StackTrace___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Diagnostics_StackTrace___StaticFields {
};
struct ICollection_1_System_Diagnostics_StackTrace___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Diagnostics_StackTrace___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Diagnostics_StackTrace___VTable vtable;
};}