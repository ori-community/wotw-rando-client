namespace app {
    struct HeaderParser {
        struct HeaderParser__Class* klass;
        MonitorData* monitor;
        struct HeaderParser__Fields fields;
    };

    enum class WebHeaderCollection_RfcChar__Enum : uint8_t {
        High = 0x00,
        Reg = 0x01,
        Ctl = 0x02,
        CR = 0x03,
        LF = 0x04,
        WS = 0x05,
        Colon = 0x06,
        Delim = 0x07,
    };

    struct WebHeaderCollection_RfcChar__Enum__Boxed {
        struct WebHeaderCollection_RfcChar__Enum__Class* klass;
        MonitorData* monitor;
        WebHeaderCollection_RfcChar__Enum value;
    };

    struct WebHeaderCollection_RfcChar__Enum__Array {
        struct WebHeaderCollection_RfcChar__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        WebHeaderCollection_RfcChar__Enum vector[32];
    };

    struct WebResponse__Fields {
        struct MarshalByRefObject__Fields _;
        bool m_IsCacheFresh;
        bool m_IsFromCache;
    };

    struct WebResponse {
        struct WebResponse__Class* klass;
        MonitorData* monitor;
        struct WebResponse__Fields fields;
    };

    struct Task_1_System_IO_Stream___Fields {
        struct Task__Fields _;
        struct Stream* m_result;
    };

    struct Task_1_System_IO_Stream_ {
        struct Task_1_System_IO_Stream___Class* klass;
        MonitorData* monitor;
        struct Task_1_System_IO_Stream___Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_System_IO_Stream___Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_System_IO_Stream_ {
        struct TaskFactory_1_System_IO_Stream___Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_System_IO_Stream___Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__6__Fields fields;
    };

    struct Task_1_System_Net_WebResponse___Fields {
        struct Task__Fields _;
        struct WebResponse* m_result;
    };

    struct Task_1_System_Net_WebResponse_ {
        struct Task_1_System_Net_WebResponse___Class* klass;
        MonitorData* monitor;
        struct Task_1_System_Net_WebResponse___Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_System_Net_WebResponse___Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_System_Net_WebResponse_ {
        struct TaskFactory_1_System_Net_WebResponse___Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_System_Net_WebResponse___Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__7__Fields fields;
    };

    struct HttpContinueDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct HttpContinueDelegate {
        struct HttpContinueDelegate__Class* klass;
        MonitorData* monitor;
        struct HttpContinueDelegate__Fields fields;
    };

    struct __declspec(align(8)) CookieContainer__Fields {
        struct Hashtable* m_domainTable;
        int32_t m_maxCookieSize;
        int32_t m_maxCookies;
        int32_t m_maxCookiesPerDomain;
        int32_t m_count;
        struct String* m_fqdnMyDomain;
    };

    struct CookieContainer {
        struct CookieContainer__Class* klass;
        MonitorData* monitor;
        struct CookieContainer__Fields fields;
    };

    enum class CookieVariant__Enum : int32_t {
        Unknown = 0x00000000,
        Plain = 0x00000001,
        Rfc2109 = 0x00000002,
        Rfc2965 = 0x00000003,
        Default = 0x00000002,
    };

    struct CookieVariant__Enum__Boxed {
        struct CookieVariant__Enum__Class* klass;
        MonitorData* monitor;
        CookieVariant__Enum value;
    };

    struct HeaderVariantInfo {
        struct String* m_name;
        CookieVariant__Enum m_variant;
    };

    struct HeaderVariantInfo__Boxed {
        struct HeaderVariantInfo__Class* klass;
        MonitorData* monitor;
        struct HeaderVariantInfo fields;
    };

    struct HeaderVariantInfo__Array {
        struct HeaderVariantInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HeaderVariantInfo vector[32];
    };

    struct __declspec(align(8)) ServicePoint__Fields {
        struct Uri* uri;
        int32_t connectionLimit;
        int32_t maxIdleTime;
        int32_t currentConnections;
        struct DateTime idleSince;
        struct DateTime lastDnsResolve;
        struct Version* protocolVersion;
        struct IPHostEntry* host;
        bool usesProxy;
        struct Dictionary_2_System_String_System_Net_WebConnectionGroup_* groups;
        bool sendContinue;
        bool useConnect;
        struct Object* hostE;
        bool useNagle;
        struct BindIPEndPoint* endPointCallback;
        bool tcp_keepalive;
        int32_t tcp_keepalive_time;
        int32_t tcp_keepalive_interval;
        struct Timer* idleTimer;
        struct Object* m_ServerCertificateOrBytes;
        struct Object* m_ClientCertificateOrBytes;
    };

    struct ServicePoint {
        struct ServicePoint__Class* klass;
        MonitorData* monitor;
        struct ServicePoint__Fields fields;
    };

    struct __declspec(align(8)) IPHostEntry__Fields {
        struct String* hostName;
        struct String__Array* aliases;
        struct IPAddress__Array* addressList;
        bool isTrustedHost;
    };

    struct IPHostEntry {
        struct IPHostEntry__Class* klass;
        MonitorData* monitor;
        struct IPHostEntry__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Net_WebConnectionGroup___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Net_WebConnectionGroup_ {
        struct Dictionary_2_System_String_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Net_WebConnectionGroup___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct WebConnectionGroup* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup_ fields;
    };

    struct __declspec(align(8)) WebConnectionGroup__Fields {
        struct ServicePoint* sPoint;
        struct String* name;
        struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_* connections;
        struct Queue* queue;
        bool closing;
        struct EventHandler* ConnectionClosed;
    };

    struct WebConnectionGroup {
        struct WebConnectionGroup__Class* klass;
        MonitorData* monitor;
        struct WebConnectionGroup__Fields fields;
    };

    struct __declspec(align(8)) LinkedList_1_System_Net_WebConnectionGroup_ConnectionState___Fields {
        struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_* head;
        int32_t count;
        int32_t version;
        struct Object* _syncRoot;
        struct SerializationInfo* _siInfo;
    };

    struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ {
        struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState___Class* klass;
        MonitorData* monitor;
        struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState___Fields fields;
    };

    struct __declspec(align(8)) LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState___Fields {
        struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_* list;
        struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_* next;
        struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_* prev;
        struct WebConnectionGroup_ConnectionState* item;
    };

    struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_ {
        struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState___Class* klass;
        MonitorData* monitor;
        struct LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState___Fields fields;
    };

    struct __declspec(align(8)) WebConnectionGroup_ConnectionState__Fields {
        struct WebConnection* _Connection_k__BackingField;
        struct WebConnectionGroup* _Group_k__BackingField;
        bool busy;
        struct DateTime idleSince;
    };

    struct WebConnectionGroup_ConnectionState {
        struct WebConnectionGroup_ConnectionState__Class* klass;
        MonitorData* monitor;
        struct WebConnectionGroup_ConnectionState__Fields fields;
    };

    enum class WebConnection_NtlmAuthState__Enum : int32_t {
        None = 0x00000000,
        Challenge = 0x00000001,
        Response = 0x00000002,
    };

    struct WebConnection_NtlmAuthState__Enum__Boxed {
        struct WebConnection_NtlmAuthState__Enum__Class* klass;
        MonitorData* monitor;
        WebConnection_NtlmAuthState__Enum value;
    };

    struct __declspec(align(8)) WebConnection__Fields {
        struct ServicePoint* sPoint;
        struct Stream* nstream;
        struct Socket* socket;
        struct Object* socketLock;
        struct IWebConnectionState* state;
        WebExceptionStatus__Enum status;

        bool keepAlive;
        struct Byte__Array* buffer;
        struct EventHandler* abortHandler;
        struct WebConnection_AbortHelper* abortHelper;
        struct WebConnectionData* Data;
        bool chunkedRead;
        struct MonoChunkStream* chunkStream;
        struct Queue* queue;
        bool reused;
        int32_t position;
        struct HttpWebRequest* priority_request;
        struct NetworkCredential* ntlm_credentials;
        bool ntlm_authenticated;
        bool unsafe_sharing;
        WebConnection_NtlmAuthState__Enum connect_ntlm_auth_state;

        struct HttpWebRequest* connect_request;
        struct Exception* connect_exception;
        struct MonoTlsStream* tlsStream;
    };

    struct WebConnection {
        struct WebConnection__Class* klass;
        MonitorData* monitor;
        struct WebConnection__Fields fields;
    };

    struct IWebConnectionState {
        struct IWebConnectionState__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) WebConnection_AbortHelper__Fields {
        struct WebConnection* Connection;
    };

    struct WebConnection_AbortHelper {
        struct WebConnection_AbortHelper__Class* klass;
        MonitorData* monitor;
        struct WebConnection_AbortHelper__Fields fields;
    };

    enum class ReadState__Enum : int32_t {
        None = 0x00000000,
        Status = 0x00000001,
        Headers = 0x00000002,
        Content = 0x00000003,
        Aborted = 0x00000004,
    };

    struct ReadState__Enum__Boxed {
        struct ReadState__Enum__Class* klass;
        MonitorData* monitor;
        ReadState__Enum value;
    };

    struct __declspec(align(8)) WebConnectionData__Fields {
        struct HttpWebRequest* _request;
        int32_t StatusCode;
        struct String* StatusDescription;
        struct WebHeaderCollection* Headers;
        struct Version* Version;
        struct Version* ProxyVersion;
        struct Stream* stream;
        struct String__Array* Challenge;
        ReadState__Enum _readState;
    };

    struct WebConnectionData {
        struct WebConnectionData__Class* klass;
        MonitorData* monitor;
        struct WebConnectionData__Fields fields;
    };

    enum class MonoChunkStream_State__Enum : int32_t {
        None = 0x00000000,
        PartialSize = 0x00000001,
        Body = 0x00000002,
        BodyFinished = 0x00000003,
        Trailer = 0x00000004,
    };

    struct MonoChunkStream_State__Enum__Boxed {
        struct MonoChunkStream_State__Enum__Class* klass;
        MonitorData* monitor;
        MonoChunkStream_State__Enum value;
    };

    struct __declspec(align(8)) MonoChunkStream__Fields {
        struct WebHeaderCollection* headers;
        int32_t chunkSize;
        int32_t chunkRead;
        int32_t totalWritten;
        MonoChunkStream_State__Enum state;

        struct StringBuilder* saved;
        bool sawCR;
        bool gotit;
        int32_t trailerState;
        struct ArrayList* chunks;
    };

    struct MonoChunkStream {
        struct MonoChunkStream__Class* klass;
        MonitorData* monitor;
        struct MonoChunkStream__Fields fields;
    };

    struct WebConnectionGroup_ConnectionState__Array {
        struct WebConnectionGroup_ConnectionState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WebConnectionGroup_ConnectionState* vector[32];
    };

    struct IEnumerator_1_System_Net_WebConnectionGroup_ConnectionState_ {
        struct IEnumerator_1_System_Net_WebConnectionGroup_ConnectionState___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Net_WebConnectionGroup_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup___Fields {
        struct Dictionary_2_System_String_System_Net_WebConnectionGroup_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Net_WebConnectionGroup___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup___Fields {
        struct Dictionary_2_System_String_System_Net_WebConnectionGroup_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup___Fields fields;
    };

    struct WebConnectionGroup__Array {
        struct WebConnectionGroup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WebConnectionGroup* vector[32];
    };

    struct IEnumerator_1_System_Net_WebConnectionGroup_ {
        struct IEnumerator_1_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Net_WebConnectionGroup_ {
        struct ICollection_1_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ {
        struct String* key;
        struct WebConnectionGroup* value;
    };

    struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Boxed {
        struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ fields;
    };

    struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Array {
        struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Net_WebConnectionGroup_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Net_WebConnectionGroup_ {
        struct IEnumerable_1_System_Net_WebConnectionGroup___Class* klass;
        MonitorData* monitor;
    };

    struct BindIPEndPoint__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct BindIPEndPoint {
        struct BindIPEndPoint__Class* klass;
        MonitorData* monitor;
        struct BindIPEndPoint__Fields fields;
    };

    struct __declspec(align(8)) IPEndPoint__Fields {
        struct IPAddress* m_Address;
        int32_t m_Port;
    };

    struct IPEndPoint {
        struct IPEndPoint__Class* klass;
        MonitorData* monitor;
        struct IPEndPoint__Fields fields;
    };

    struct WebConnectionStream__Fields {
        struct Stream__Fields _;
        bool isRead;
        struct WebConnection* cnc;
        struct HttpWebRequest* request;
        struct Byte__Array* readBuffer;
        int32_t readBufferOffset;
        int32_t readBufferSize;
        int32_t stream_length;
        int64_t contentLength;
        int64_t totalRead;
        int64_t totalWritten;
        bool nextReadCalled;
        int32_t pendingReads;
        int32_t pendingWrites;
        struct ManualResetEvent* pending;
        bool allowBuffering;
        bool sendChunked;
        struct MemoryStream* writeBuffer;
        bool requestWritten;
        struct Byte__Array* headers;
        bool disposed;
        bool headersSent;
        struct Object* locker;
        bool initRead;
        bool read_eof;
        bool complete_request_written;
        int32_t read_timeout;
        int32_t write_timeout;
        struct AsyncCallback* cb_wrapper;
        bool IgnoreIOErrors;
        bool _GetResponseOnClose_k__BackingField;
    };

    struct WebConnectionStream {
        struct WebConnectionStream__Class* klass;
        MonitorData* monitor;
        struct WebConnectionStream__Fields fields;
    };

    enum class HttpStatusCode__Enum : int32_t {
        Continue = 0x00000064,
        SwitchingProtocols = 0x00000065,
        OK = 0x000000c8,
        Created = 0x000000c9,
        Accepted = 0x000000ca,
        NonAuthoritativeInformation = 0x000000cb,
        NoContent = 0x000000cc,
        ResetContent = 0x000000cd,
        PartialContent = 0x000000ce,
        MultipleChoices = 0x0000012c,
        Ambiguous = 0x0000012c,
        MovedPermanently = 0x0000012d,
        Moved = 0x0000012d,
        Found = 0x0000012e,
        Redirect = 0x0000012e,
        SeeOther = 0x0000012f,
        RedirectMethod = 0x0000012f,
        NotModified = 0x00000130,
        UseProxy = 0x00000131,
        Unused = 0x00000132,
        TemporaryRedirect = 0x00000133,
        RedirectKeepVerb = 0x00000133,
        BadRequest = 0x00000190,
        Unauthorized = 0x00000191,
        PaymentRequired = 0x00000192,
        Forbidden = 0x00000193,
        NotFound = 0x00000194,
        MethodNotAllowed = 0x00000195,
        NotAcceptable = 0x00000196,
        ProxyAuthenticationRequired = 0x00000197,
        RequestTimeout = 0x00000198,
        Conflict = 0x00000199,
        Gone = 0x0000019a,
        LengthRequired = 0x0000019b,
        PreconditionFailed = 0x0000019c,
        RequestEntityTooLarge = 0x0000019d,
        RequestUriTooLong = 0x0000019e,
        UnsupportedMediaType = 0x0000019f,
        RequestedRangeNotSatisfiable = 0x000001a0,
        ExpectationFailed = 0x000001a1,
        UpgradeRequired = 0x000001aa,
        InternalServerError = 0x000001f4,
        NotImplemented = 0x000001f5,
        BadGateway = 0x000001f6,
        ServiceUnavailable = 0x000001f7,
        GatewayTimeout = 0x000001f8,
        HttpVersionNotSupported = 0x000001f9,
    };

    struct HttpStatusCode__Enum__Boxed {
        struct HttpStatusCode__Enum__Class* klass;
        MonitorData* monitor;
        HttpStatusCode__Enum value;
    };

    struct HttpWebResponse__Fields {
        struct WebResponse__Fields _;
        struct Uri* uri;
        struct WebHeaderCollection* webHeaders;
        struct CookieCollection* cookieCollection;
        struct String* method;
        struct Version* version;
        HttpStatusCode__Enum statusCode;

        struct String* statusDescription;
        int64_t contentLength;
        struct String* contentType;
        struct CookieContainer* cookie_container;
        bool disposed;
        struct Stream* stream;
    };

    struct HttpWebResponse {
        struct HttpWebResponse__Class* klass;
        MonitorData* monitor;
        struct HttpWebResponse__Fields fields;
    };

    struct __declspec(align(8)) CookieCollection__Fields {
        int32_t m_version;
        struct ArrayList* m_list;
        struct DateTime m_TimeStamp;
        bool m_has_other_versions;
        bool m_IsReadOnly;
    };

    struct CookieCollection {
        struct CookieCollection__Class* klass;
        MonitorData* monitor;
        struct CookieCollection__Fields fields;
    };

    struct __declspec(align(8)) SimpleAsyncResult__Fields {
        struct ManualResetEvent* handle;
        bool synch;
        bool isCompleted;
        struct SimpleAsyncCallback* cb;
        struct Object* state;
        bool callbackDone;
        struct Exception* exc;
        struct Object* locker;
        struct Nullable_1_Boolean_ user_read_synch;
    };

    struct SimpleAsyncResult {
        struct SimpleAsyncResult__Class* klass;
        MonitorData* monitor;
        struct SimpleAsyncResult__Fields fields;
    };

    struct WebAsyncResult__Fields {
        struct SimpleAsyncResult__Fields _;
        int32_t nbytes;
        struct IAsyncResult* innerAsyncResult;
        struct HttpWebResponse* response;
        struct Stream* writeStream;
        struct Byte__Array* buffer;
        int32_t offset;
        int32_t size;
        bool EndCalled;
        bool AsyncWriteAll;
        struct HttpWebRequest* AsyncObject;
    };

    struct WebAsyncResult {
        struct WebAsyncResult__Class* klass;
        MonitorData* monitor;
        struct WebAsyncResult__Fields fields;
    };

    struct SimpleAsyncCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct SimpleAsyncCallback {
        struct SimpleAsyncCallback__Class* klass;
        MonitorData* monitor;
        struct SimpleAsyncCallback__Fields fields;
    };

    struct Action_1_System_IO_Stream___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_System_IO_Stream_ {
        struct Action_1_System_IO_Stream___Class* klass;
        MonitorData* monitor;
        struct Action_1_System_IO_Stream___Fields fields;
    };

    struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ {
        MonoSslPolicyErrors__Enum value;

        bool has_value;
    };

    struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors___Boxed {
        struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ fields;
    };

    struct __declspec(align(8)) ValidationResult__Fields {
        bool trusted;
        bool user_denied;
        int32_t error_code;
        struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ policy_errors;
    };

    struct ValidationResult {
        struct ValidationResult__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocalCertSelectionCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocalCertSelectionCallback__VTable vtable;
    };

    struct AddressFamily__Enum__VTable {
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

    struct AddressFamily__Enum__StaticFields {
    };

    struct AddressFamily__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AddressFamily__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AddressFamily__Enum__VTable vtable;
    };

    struct SocketType__Enum__VTable {
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

    struct SocketType__Enum__StaticFields {
    };

    struct SocketType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketType__Enum__VTable vtable;
    };

    struct ProtocolType__Enum__VTable {
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

    struct ProtocolType__Enum__StaticFields {
    };

    struct ProtocolType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProtocolType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProtocolType__Enum__VTable vtable;
    };

    struct Thread__Array__VTable {
    };

    struct Thread__Array__StaticFields {
    };

    struct Thread__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Thread__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Thread__Array__VTable vtable;
    };

    struct IEnumerator_1_System_Threading_Thread___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Threading_Thread___StaticFields {
    };

    struct IEnumerator_1_System_Threading_Thread___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Threading_Thread___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Thread__Array* _emptyArray;
    };

    struct List_1_System_Threading_Thread___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Threading_Thread___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___VTable vtable;
    };

} // namespace app
