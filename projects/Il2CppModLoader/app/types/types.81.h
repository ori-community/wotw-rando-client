namespace app {
struct RemoteCertificateValidationCallback__StaticFields {
};

struct RemoteCertificateValidationCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoteCertificateValidationCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoteCertificateValidationCallback__VTable vtable;
};

struct ServerCertValidationCallback__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerCertValidationCallback__StaticFields {
};

struct ServerCertValidationCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerCertValidationCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerCertValidationCallback__VTable vtable;
};

struct ServerCertValidationCallbackWrapper__VTable {
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

struct ServerCertValidationCallbackWrapper__StaticFields {
};

struct ServerCertValidationCallbackWrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerCertValidationCallbackWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerCertValidationCallbackWrapper__VTable vtable;
};

struct __declspec(align(8)) ChainValidationHelper__Fields {
    struct Object *sender;
    struct MonoTlsSettings *settings;
    struct MonoTlsProvider *provider;
    struct ServerCertValidationCallback *certValidationCallback;
    struct LocalCertSelectionCallback *certSelectionCallback;
    struct ServerCertValidationCallbackWrapper *callbackWrapper;
    struct MonoTlsStream *tlsStream;
    struct HttpWebRequest *request;
};

struct ChainValidationHelper {
    struct ChainValidationHelper__Class *klass;
    MonitorData *monitor;
    struct ChainValidationHelper__Fields fields;
};

struct LocalCertSelectionCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct LocalCertSelectionCallback {
    struct LocalCertSelectionCallback__Class *klass;
    MonitorData *monitor;
    struct LocalCertSelectionCallback__Fields fields;
};

enum class WebExceptionStatus__Enum : int32_t {
    Success = 0x00000000,
    NameResolutionFailure = 0x00000001,
    ConnectFailure = 0x00000002,
    ReceiveFailure = 0x00000003,
    SendFailure = 0x00000004,
    PipelineFailure = 0x00000005,
    RequestCanceled = 0x00000006,
    ProtocolError = 0x00000007,
    ConnectionClosed = 0x00000008,
    TrustFailure = 0x00000009,
    SecureChannelFailure = 0x0000000a,
    ServerProtocolViolation = 0x0000000b,
    KeepAliveFailure = 0x0000000c,
    Pending = 0x0000000d,
    Timeout = 0x0000000e,
    ProxyNameResolutionFailure = 0x0000000f,
    UnknownError = 0x00000010,
    MessageLengthLimitExceeded = 0x00000011,
    CacheEntryNotFound = 0x00000012,
    RequestProhibitedByCachePolicy = 0x00000013,
    RequestProhibitedByProxy = 0x00000014,
};

struct WebExceptionStatus__Enum__Boxed {
    struct WebExceptionStatus__Enum__Class *klass;
    MonitorData *monitor;
    WebExceptionStatus__Enum value;
    
};

struct __declspec(align(8)) MonoTlsStream__Fields {
    struct MonoTlsProvider *provider;
    struct NetworkStream *networkStream;
    struct HttpWebRequest *request;
    struct MonoTlsSettings *settings;
    struct IMonoSslStream *sslStream;
    WebExceptionStatus__Enum status;
    
    bool _CertificateValidationFailed_k__BackingField;
};

struct MonoTlsStream {
    struct MonoTlsStream__Class *klass;
    MonitorData *monitor;
    struct MonoTlsStream__Fields fields;
};

struct NetworkStream__Fields {
    struct Stream__Fields _;
    struct Socket *m_StreamSocket;
    bool m_Readable;
    bool m_Writeable;
    bool m_OwnsSocket;
    int32_t m_CloseTimeout;
    bool m_CleanedUp;
    int32_t m_CurrentReadTimeout;
    int32_t m_CurrentWriteTimeout;
};

struct NetworkStream {
    struct NetworkStream__Class *klass;
    MonitorData *monitor;
    struct NetworkStream__Fields fields;
};

enum class AddressFamily__Enum : int32_t {
    Unknown = -1,
    Unspecified = 0x00000000,
    Unix = 0x00000001,
    InterNetwork = 0x00000002,
    ImpLink = 0x00000003,
    Pup = 0x00000004,
    Chaos = 0x00000005,
    NS = 0x00000006,
    Ipx = 0x00000006,
    Iso = 0x00000007,
    Osi = 0x00000007,
    Ecma = 0x00000008,
    DataKit = 0x00000009,
    Ccitt = 0x0000000a,
    Sna = 0x0000000b,
    DecNet = 0x0000000c,
    DataLink = 0x0000000d,
    Lat = 0x0000000e,
    HyperChannel = 0x0000000f,
    AppleTalk = 0x00000010,
    NetBios = 0x00000011,
    VoiceView = 0x00000012,
    FireFox = 0x00000013,
    Banyan = 0x00000015,
    Atm = 0x00000016,
    InterNetworkV6 = 0x00000017,
    Cluster = 0x00000018,
    Ieee12844 = 0x00000019,
    Irda = 0x0000001a,
    NetworkDesigners = 0x0000001c,
    Max = 0x0000001d,
};

struct AddressFamily__Enum__Boxed {
    struct AddressFamily__Enum__Class *klass;
    MonitorData *monitor;
    AddressFamily__Enum value;
    
};

enum class SocketType__Enum : int32_t {
    Stream = 0x00000001,
    Dgram = 0x00000002,
    Raw = 0x00000003,
    Rdm = 0x00000004,
    Seqpacket = 0x00000005,
    Unknown = -1,
};

struct SocketType__Enum__Boxed {
    struct SocketType__Enum__Class *klass;
    MonitorData *monitor;
    SocketType__Enum value;
    
};

enum class ProtocolType__Enum : int32_t {
    IP = 0x00000000,
    IPv6HopByHopOptions = 0x00000000,
    Icmp = 0x00000001,
    Igmp = 0x00000002,
    Ggp = 0x00000003,
    IPv4 = 0x00000004,
    Tcp = 0x00000006,
    Pup = 0x0000000c,
    Udp = 0x00000011,
    Idp = 0x00000016,
    IPv6 = 0x00000029,
    IPv6RoutingHeader = 0x0000002b,
    IPv6FragmentHeader = 0x0000002c,
    IPSecEncapsulatingSecurityPayload = 0x00000032,
    IPSecAuthenticationHeader = 0x00000033,
    IcmpV6 = 0x0000003a,
    IPv6NoNextHeader = 0x0000003b,
    IPv6DestinationOptions = 0x0000003c,
    ND = 0x0000004d,
    Raw = 0x000000ff,
    Unspecified = 0x00000000,
    Ipx = 0x000003e8,
    Spx = 0x000004e8,
    SpxII = 0x000004e9,
    Unknown = -1,
};

struct ProtocolType__Enum__Boxed {
    struct ProtocolType__Enum__Class *klass;
    MonitorData *monitor;
    ProtocolType__Enum value;
    
};

struct __declspec(align(8)) Socket__Fields {
    bool is_closed;
    bool is_listening;
    bool useOverlappedIO;
    int32_t linger_timeout;
    AddressFamily__Enum addressFamily;
    
    SocketType__Enum socketType;
    
    ProtocolType__Enum protocolType;
    
    struct SafeSocketHandle *m_Handle;
    struct EndPoint *seed_endpoint;
    struct SemaphoreSlim *ReadSem;
    struct SemaphoreSlim *WriteSem;
    bool is_blocking;
    bool is_bound;
    bool is_connected;
    int32_t m_IntCleanedUp;
    bool connect_in_progress;
};

struct Socket {
    struct Socket__Class *klass;
    MonitorData *monitor;
    struct Socket__Fields fields;
};

struct SafeSocketHandle__Fields {
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
    struct List_1_System_Threading_Thread_ *blocking_threads;
    struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ *threads_stacktraces;
    bool in_cleanup;
};

struct SafeSocketHandle {
    struct SafeSocketHandle__Class *klass;
    MonitorData *monitor;
    struct SafeSocketHandle__Fields fields;
};

struct __declspec(align(8)) List_1_System_Threading_Thread___Fields {
    struct Thread__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Threading_Thread_ {
    struct List_1_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Threading_Thread___Fields fields;
};

struct Thread__Array {
    struct Thread__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Thread *vector[32];
};

struct IEnumerator_1_System_Threading_Thread_ {
    struct IEnumerator_1_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Threading_Thread_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    int32_t hashCode;
    int32_t next;
    struct Thread *key;
    struct StackTrace *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace_ vector[32];
};

struct IEqualityComparer_1_System_Threading_Thread_ {
    struct IEqualityComparer_1_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Fields {
    struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Fields {
    struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_Thread_System_Diagnostics_StackTrace___Fields fields;
};

struct IEnumerator_1_System_Diagnostics_StackTrace_ {
    struct IEnumerator_1_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Threading_Thread_ {
    struct ICollection_1_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Diagnostics_StackTrace_ {
    struct ICollection_1_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    struct Thread *key;
    struct StackTrace *value;
};

struct KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace___Boxed {
    struct KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace_ fields;
};

struct KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace___Array {
    struct KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    struct IEnumerator_1_KeyValuePair_2_System_Threading_Thread_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Threading_Thread_ {
    struct IEnumerable_1_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Diagnostics_StackTrace_ {
    struct IEnumerable_1_System_Diagnostics_StackTrace___Class *klass;
    MonitorData *monitor;
};

struct EndPoint {
    struct EndPoint__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SocketAddress__Fields {
    int32_t m_Size;
    struct Byte__Array *m_Buffer;
    bool m_changed;
    int32_t m_hash;
};

struct SocketAddress {
    struct SocketAddress__Class *klass;
    MonitorData *monitor;
    struct SocketAddress__Fields fields;
};

struct IOAsyncCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct IOAsyncCallback {
    struct IOAsyncCallback__Class *klass;
    MonitorData *monitor;
    struct IOAsyncCallback__Fields fields;
};

struct __declspec(align(8)) IOAsyncResult__Fields {
    struct AsyncCallback *async_callback;
    struct Object *async_state;
    struct ManualResetEvent *wait_handle;
    bool completed_synchronously;
    bool completed;
};

struct IOAsyncResult {
    struct IOAsyncResult__Class *klass;
    MonitorData *monitor;
    struct IOAsyncResult__Fields fields;
};

enum class SocketOperation__Enum : int32_t {
    Accept = 0x00000000,
    Connect = 0x00000001,
    Receive = 0x00000002,
    ReceiveFrom = 0x00000003,
    Send = 0x00000004,
    SendTo = 0x00000005,
    RecvJustCallback = 0x00000006,
    SendJustCallback = 0x00000007,
    Disconnect = 0x00000008,
    AcceptReceive = 0x00000009,
    ReceiveGeneric = 0x0000000a,
    SendGeneric = 0x0000000b,
};

struct SocketOperation__Enum__Boxed {
    struct SocketOperation__Enum__Class *klass;
    MonitorData *monitor;
    SocketOperation__Enum value;
    
};

enum class SocketFlags__Enum : int32_t {
    None = 0x00000000,
    OutOfBand = 0x00000001,
    Peek = 0x00000002,
    DontRoute = 0x00000004,
    MaxIOVectorLength = 0x00000010,
    Truncated = 0x00000100,
    ControlDataTruncated = 0x00000200,
    Broadcast = 0x00000400,
    Multicast = 0x00000800,
    Partial = 0x00008000,
};

struct SocketFlags__Enum__Boxed {
    struct SocketFlags__Enum__Class *klass;
    MonitorData *monitor;
    SocketFlags__Enum value;
    
};

struct SocketAsyncResult__Fields {
    struct IOAsyncResult__Fields _;
    struct Socket *socket;
    SocketOperation__Enum operation;
    
    struct Exception *DelayedException;
    struct EndPoint *EndPoint;
    struct Byte__Array *Buffer;
    int32_t Offset;
    int32_t Size;
    SocketFlags__Enum SockFlags;
    
    struct Socket *AcceptSocket;
    struct IPAddress__Array *Addresses;
    int32_t Port;
    struct IList_1_System_ArraySegment_1_ *Buffers;
    bool ReuseSocket;
    int32_t CurrentAddress;
    struct Socket *AcceptedSocket;
    int32_t Total;
    int32_t error;
    int32_t EndCalled;
};

struct SocketAsyncResult {
    struct SocketAsyncResult__Class *klass;
    MonitorData *monitor;
    struct SocketAsyncResult__Fields fields;
};

struct __declspec(align(8)) IPAddress__Fields {
    int64_t m_Address;
    struct String *m_ToString;
    AddressFamily__Enum m_Family;
    
    struct UInt16__Array *m_Numbers;
    int64_t m_ScopeId;
    int32_t m_HashCode;
};

struct IPAddress {
    struct IPAddress__Class *klass;
    MonitorData *monitor;
    struct IPAddress__Fields fields;
};

struct IPAddress__Array {
    struct IPAddress__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IPAddress *vector[32];
};

struct IList_1_System_ArraySegment_1_ {
    struct IList_1_System_ArraySegment_1___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) BufferOffsetSize_1__Fields {
    struct Byte__Array *Buffer;
    int32_t Offset;
    int32_t Size;
};

struct BufferOffsetSize_1 {
    struct BufferOffsetSize_1__Class *klass;
    MonitorData *monitor;
    struct BufferOffsetSize_1__Fields fields;
};

struct BufferOffsetSize_1__Array {
    struct BufferOffsetSize_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BufferOffsetSize_1 *vector[32];
};

enum class AuthenticationLevel__Enum : int32_t {
    None = 0x00000000,
    MutualAuthRequested = 0x00000001,
    MutualAuthRequired = 0x00000002,
};

struct AuthenticationLevel__Enum__Boxed {
    struct AuthenticationLevel__Enum__Class *klass;
    MonitorData *monitor;
    AuthenticationLevel__Enum value;
    
};

enum class TokenImpersonationLevel__Enum : int32_t {
    Anonymous = 0x00000001,
    Delegation = 0x00000004,
    Identification = 0x00000002,
    Impersonation = 0x00000003,
    None = 0x00000000,
};

struct TokenImpersonationLevel__Enum__Boxed {
    struct TokenImpersonationLevel__Enum__Class *klass;
    MonitorData *monitor;
    TokenImpersonationLevel__Enum value;
    
};

struct WebRequest__Fields {
    struct MarshalByRefObject__Fields _;
    AuthenticationLevel__Enum m_AuthenticationLevel;
    
    TokenImpersonationLevel__Enum m_ImpersonationLevel;
    
    struct RequestCachePolicy *m_CachePolicy;
    struct RequestCacheProtocol *m_CacheProtocol;
    struct RequestCacheBinding *m_CacheBinding;
};

struct WebRequest {
    struct WebRequest__Class *klass;
    MonitorData *monitor;
    struct WebRequest__Fields fields;
};

enum class DecompressionMethods__Enum : int32_t {
    None = 0x00000000,
    GZip = 0x00000001,
    Deflate = 0x00000002,
};

struct DecompressionMethods__Enum__Boxed {
    struct DecompressionMethods__Enum__Class *klass;
    MonitorData *monitor;
    DecompressionMethods__Enum value;
    
};

enum class HttpWebRequest_NtlmAuthState__Enum : int32_t {
    None = 0x00000000,
    Challenge = 0x00000001,
    Response = 0x00000002,
};

struct HttpWebRequest_NtlmAuthState__Enum__Boxed {
    struct HttpWebRequest_NtlmAuthState__Enum__Class *klass;
    MonitorData *monitor;
    HttpWebRequest_NtlmAuthState__Enum value;
    
};

struct HttpWebRequest_AuthorizationState {
    struct HttpWebRequest *request;
    bool isProxy;
    bool isCompleted;
    HttpWebRequest_NtlmAuthState__Enum ntlm_auth_state;
    
};

struct HttpWebRequest_AuthorizationState__Boxed {
    struct HttpWebRequest_AuthorizationState__Class *klass;
    MonitorData *monitor;
    struct HttpWebRequest_AuthorizationState fields;
};

struct HttpWebRequest__Fields {
    struct WebRequest__Fields _;
    struct Uri *requestUri;
    struct Uri *actualUri;
    bool hostChanged;
    bool allowAutoRedirect;
    bool allowBuffering;
    struct X509CertificateCollection_1 *certificates;
    struct String *connectionGroup;
    bool haveContentLength;
    int64_t contentLength;
    struct HttpContinueDelegate *continueDelegate;
    struct CookieContainer *cookieContainer;
    struct ICredentials *credentials;
    bool haveResponse;
    bool haveRequest;
    bool requestSent;
    struct WebHeaderCollection *webHeaders;
    bool keepAlive;
    int32_t maxAutoRedirect;
    struct String *mediaType;
    struct String *method;
    struct String *initialMethod;
    bool pipelined;
    bool preAuthenticate;
    bool usedPreAuth;
    struct Version *version;
    bool force_version;
    struct Version *actualVersion;
    struct IWebProxy *proxy;
    bool sendChunked;
    struct ServicePoint *servicePoint;
    int32_t timeout;
    struct WebConnectionStream *writeStream;
    struct HttpWebResponse *webResponse;
    struct WebAsyncResult *asyncWrite;
    struct WebAsyncResult *asyncRead;
    struct EventHandler *abortHandler;
    int32_t aborted;
    bool gotRequestStream;
    int32_t redirects;
    bool expectContinue;
    struct Byte__Array *bodyBuffer;
    int32_t bodyBufferLength;
    bool getResponseCalled;
    struct Exception *saved_exc;
    struct Object *locker;
    bool finished_reading;
    struct WebConnection *WebConnection;
    DecompressionMethods__Enum auto_decomp;
    
    int32_t maxResponseHeadersLength;
    int32_t readWriteTimeout;
    struct MonoTlsProvider *tlsProvider;
    struct MonoTlsSettings *tlsSettings;
    struct ServerCertValidationCallback *certValidationCallback;
    struct HttpWebRequest_AuthorizationState auth_state;
    struct HttpWebRequest_AuthorizationState proxy_auth_state;
    struct String *host;
    struct Action_1_System_IO_Stream_ *ResendContentFactory;
    bool _ThrowOnError_k__BackingField;
    bool unsafe_auth_blah;
    bool _ReuseConnection_k__BackingField;
    struct WebConnection *StoredConnection;
};

struct HttpWebRequest {
    struct HttpWebRequest__Class *klass;
    MonitorData *monitor;
    struct HttpWebRequest__Fields fields;
};

struct __declspec(align(8)) TimerThread_Queue__Fields {
    int32_t m_DurationMilliseconds;
};

struct TimerThread_Queue {
    struct TimerThread_Queue__Class *klass;
    MonitorData *monitor;
    struct TimerThread_Queue__Fields fields;
};

struct TimerThread_TimerQueue__Fields {
    struct TimerThread_Queue__Fields _;
    void *m_ThisHandle;
    struct TimerThread_TimerNode *m_Timers;
};

struct TimerThread_TimerQueue {
    struct TimerThread_TimerQueue__Class *klass;
    MonitorData *monitor;
    struct TimerThread_TimerQueue__Fields fields;
};

struct __declspec(align(8)) TimerThread_Timer__Fields {
    int32_t m_StartTimeMilliseconds;
    int32_t m_DurationMilliseconds;
};

struct TimerThread_Timer {
    struct TimerThread_Timer__Class *klass;
    MonitorData *monitor;
    struct TimerThread_Timer__Fields fields;
};

enum class TimerThread_TimerNode_TimerState__Enum : int32_t {
    Ready = 0x00000000,
    Fired = 0x00000001,
    Cancelled = 0x00000002,
    Sentinel = 0x00000003,
};

struct TimerThread_TimerNode_TimerState__Enum__Boxed {
    struct TimerThread_TimerNode_TimerState__Enum__Class *klass;
    MonitorData *monitor;
    TimerThread_TimerNode_TimerState__Enum value;
    
};

struct TimerThread_TimerNode__Fields {
    struct TimerThread_Timer__Fields _;
    TimerThread_TimerNode_TimerState__Enum m_TimerState;
    
    struct TimerThread_Callback *m_Callback;
    struct Object *m_Context;
    struct Object *m_QueueLock;
    struct TimerThread_TimerNode *next;
    struct TimerThread_TimerNode *prev;
};

struct TimerThread_TimerNode {
    struct TimerThread_TimerNode__Class *klass;
    MonitorData *monitor;
    struct TimerThread_TimerNode__Fields fields;
};

struct TimerThread_Callback__Fields {
    struct MulticastDelegate__Fields _;
};

struct TimerThread_Callback {
    struct TimerThread_Callback__Class *klass;
    MonitorData *monitor;
    struct TimerThread_Callback__Fields fields;
};

enum class RequestCacheLevel__Enum : int32_t {
    Default = 0x00000000,
    BypassCache = 0x00000001,
    CacheOnly = 0x00000002,
    CacheIfAvailable = 0x00000003,
    Revalidate = 0x00000004,
    Reload = 0x00000005,
    NoCacheNoStore = 0x00000006,
};

struct RequestCacheLevel__Enum__Boxed {
    struct RequestCacheLevel__Enum__Class *klass;
    MonitorData *monitor;
    RequestCacheLevel__Enum value;
    
};

struct __declspec(align(8)) RequestCachePolicy__Fields {
    RequestCacheLevel__Enum m_Level;
    
};

struct RequestCachePolicy {
    struct RequestCachePolicy__Class *klass;
    MonitorData *monitor;
    struct RequestCachePolicy__Fields fields;
};

struct RequestCacheProtocol {
    struct RequestCacheProtocol__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) RequestCacheBinding__Fields {
    struct RequestCache *m_RequestCache;
    struct RequestCacheValidator *m_CacheValidator;
    struct RequestCachePolicy *m_Policy;
};

struct RequestCacheBinding {
    struct RequestCacheBinding__Class *klass;
    MonitorData *monitor;
    struct RequestCacheBinding__Fields fields;
};

struct __declspec(align(8)) RequestCache__Fields {
    bool _IsPrivateCache;
    bool _CanWrite;
};

struct RequestCache {
    struct RequestCache__Class *klass;
    MonitorData *monitor;
    struct RequestCache__Fields fields;
};

struct RequestCacheValidator {
    struct RequestCacheValidator__Class *klass;
    MonitorData *monitor;
};

struct WebRequest_DesignerWebRequestCreate {
    struct WebRequest_DesignerWebRequestCreate__Class *klass;
    MonitorData *monitor;
};

struct IWebRequestCreate {
    struct IWebRequestCreate__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) NameObjectCollectionBase__Fields {
    bool _readOnly;
    struct ArrayList *_entriesArray;
    struct IEqualityComparer *_keyComparer;
    struct Hashtable *_entriesTable;
    struct NameObjectCollectionBase_NameObjectEntry *_nullKeyEntry;
    struct NameObjectCollectionBase_KeysCollection *_keys;
    struct SerializationInfo *_serializationInfo;
    int32_t _version;
    struct Object *_syncRoot;
};

struct NameObjectCollectionBase {
    struct NameObjectCollectionBase__Class *klass;
    MonitorData *monitor;
    struct NameObjectCollectionBase__Fields fields;
};

struct NameValueCollection__Fields {
    struct NameObjectCollectionBase__Fields _;
    struct String__Array *_all;
    struct String__Array *_allKeys;
};

struct NameValueCollection {
    struct NameValueCollection__Class *klass;
    MonitorData *monitor;
    struct NameValueCollection__Fields fields;
};

enum class WebHeaderCollectionType__Enum : uint16_t {
    Unknown = 0x0000,
    WebRequest = 0x0001,
    WebResponse = 0x0002,
    HttpWebRequest = 0x0003,
    HttpWebResponse = 0x0004,
    HttpListenerRequest = 0x0005,
    HttpListenerResponse = 0x0006,
    FtpWebRequest = 0x0007,
    FtpWebResponse = 0x0008,
    FileWebRequest = 0x0009,
    FileWebResponse = 0x000a,
};

struct WebHeaderCollectionType__Enum__Boxed {
    struct WebHeaderCollectionType__Enum__Class *klass;
    MonitorData *monitor;
    WebHeaderCollectionType__Enum value;
    
};

struct WebHeaderCollection__Fields {
    struct NameValueCollection__Fields _;
    struct String__Array *m_CommonHeaders;
    int32_t m_NumCommonHeaders;
    struct NameValueCollection *m_InnerCollection;
    WebHeaderCollectionType__Enum m_Type;
    
};

struct WebHeaderCollection {
    struct WebHeaderCollection__Class *klass;
    MonitorData *monitor;
    struct WebHeaderCollection__Fields fields;
};

struct __declspec(align(8)) NameObjectCollectionBase_NameObjectEntry__Fields {
    struct String *Key;
    struct Object *Value;
};

struct NameObjectCollectionBase_NameObjectEntry {
    struct NameObjectCollectionBase_NameObjectEntry__Class *klass;
    MonitorData *monitor;
    struct NameObjectCollectionBase_NameObjectEntry__Fields fields;
};

struct __declspec(align(8)) NameObjectCollectionBase_KeysCollection__Fields {
    struct NameObjectCollectionBase *_coll;
};

struct NameObjectCollectionBase_KeysCollection {
    struct NameObjectCollectionBase_KeysCollection__Class *klass;
    MonitorData *monitor;
    struct NameObjectCollectionBase_KeysCollection__Fields fields;
};

struct HeaderInfoTable {
    struct HeaderInfoTable__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) HeaderInfo__Fields {
    bool IsRequestRestricted;
    bool IsResponseRestricted;
    struct HeaderParser *Parser;
    struct String *HeaderName;
    bool AllowMultiValues;
};

struct HeaderInfo {
    struct HeaderInfo__Class *klass;
    MonitorData *monitor;
    struct HeaderInfo__Fields fields;
};

struct HeaderParser__Fields {
    struct MulticastDelegate__Fields _;
};

}
