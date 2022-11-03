namespace app {
    struct HttpListenerResponse {
        struct HttpListenerResponse__Class* klass;
        MonitorData* monitor;
        struct HttpListenerResponse__Fields fields;
    };

    struct ResponseStream__Fields {
        struct Stream__Fields _;
        struct HttpListenerResponse* response;
        bool ignore_errors;
        bool disposed;
        bool trailer_sent;
        struct Stream* stream;
    };

    struct ResponseStream {
        struct ResponseStream__Class* klass;
        MonitorData* monitor;
        struct ResponseStream__Fields fields;
    };

    enum class HttpConnection_InputState__Enum : int32_t {
        RequestLine = 0x00000000,
        Headers = 0x00000001,
    };

    struct HttpConnection_InputState__Enum__Boxed {
        struct HttpConnection_InputState__Enum__Class* klass;
        MonitorData* monitor;
        HttpConnection_InputState__Enum value;
    };

    enum class HttpConnection_LineState__Enum : int32_t {
        None = 0x00000000,
        CR = 0x00000001,
        LF = 0x00000002,
    };

    struct HttpConnection_LineState__Enum__Boxed {
        struct HttpConnection_LineState__Enum__Class* klass;
        MonitorData* monitor;
        HttpConnection_LineState__Enum value;
    };

    struct __declspec(align(8)) HttpConnection__Fields {
        struct Socket* sock;
        struct Stream* stream;
        struct EndPointListener* epl;
        struct MemoryStream* ms;
        struct Byte__Array* buffer;
        struct HttpListenerContext* context;
        struct StringBuilder* current_line;
        struct ListenerPrefix* prefix;
        struct RequestStream* i_stream;
        struct ResponseStream* o_stream;
        bool chunked;
        int32_t reuses;
        bool context_bound;
        bool secure;
        struct X509Certificate_1* cert;
        int32_t s_timeout;
        struct Timer* timer;
        struct IPEndPoint* local_ep;
        struct HttpListener* last_listener;
        struct Int32__Array* client_cert_errors;
        struct X509Certificate2* client_cert;
        struct SslStream* ssl_stream;
        HttpConnection_InputState__Enum input_state;

        HttpConnection_LineState__Enum line_state;

        int32_t position;
    };

    struct HttpConnection {
        struct HttpConnection__Class* klass;
        MonitorData* monitor;
        struct HttpConnection__Fields fields;
    };

    struct __declspec(align(8)) EndPointListener__Fields {
        struct HttpListener* listener;
        struct IPEndPoint* endpoint;
        struct Socket* sock;
        struct Hashtable* prefixes;
        struct ArrayList* unhandled;
        struct ArrayList* all;
        struct X509Certificate_1* cert;
        bool secure;
        struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* unregistered;
    };

    struct EndPointListener {
        struct EndPointListener__Class* klass;
        MonitorData* monitor;
        struct EndPointListener__Fields fields;
    };

    struct __declspec(align(8)) HttpListener__Fields {
        struct MonoTlsProvider* tlsProvider;
        struct MonoTlsSettings* tlsSettings;
        struct X509Certificate_1* certificate;
        AuthenticationSchemes__Enum auth_schemes;

        struct HttpListenerPrefixCollection* prefixes;
        struct AuthenticationSchemeSelector* auth_selector;
        struct String* realm;
        bool ignore_write_exceptions;
        bool unsafe_ntlm_auth;
        bool listening;
        bool disposed;
        struct Object* _internalLock;
        struct Hashtable* registry;
        struct ArrayList* ctx_queue;
        struct ArrayList* wait_queue;
        struct Hashtable* connections;
        struct ServiceNameStore* defaultServiceNames;
        struct ExtendedProtectionPolicy* extendedProtectionPolicy;
        struct HttpListener_ExtendedProtectionSelector* extendedProtectionSelectorDelegate;
    };

    struct HttpListener {
        struct HttpListener__Class* klass;
        MonitorData* monitor;
        struct HttpListener__Fields fields;
    };

    struct __declspec(align(8)) HttpListenerPrefixCollection__Fields {
        struct List_1_System_String_* prefixes;
        struct HttpListener* listener;
    };

    struct HttpListenerPrefixCollection {
        struct HttpListenerPrefixCollection__Class* klass;
        MonitorData* monitor;
        struct HttpListenerPrefixCollection__Fields fields;
    };

    struct __declspec(align(8)) ServiceNameStore__Fields {
        struct List_1_System_String_* serviceNames;
        struct ServiceNameCollection* serviceNameCollection;
    };

    struct ServiceNameStore {
        struct ServiceNameStore__Class* klass;
        MonitorData* monitor;
        struct ServiceNameStore__Fields fields;
    };

    struct HttpListener_ExtendedProtectionSelector__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct HttpListener_ExtendedProtectionSelector {
        struct HttpListener_ExtendedProtectionSelector__Class* klass;
        MonitorData* monitor;
        struct HttpListener_ExtendedProtectionSelector__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Net_HttpConnection_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_ {
        struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection_ {
        int32_t hashCode;
        int32_t next;
        struct HttpConnection* key;
        struct HttpConnection* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection_ vector[32];
    };

    struct IEqualityComparer_1_System_Net_HttpConnection_ {
        struct IEqualityComparer_1_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields {
        struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields fields;
    };

    struct HttpConnection__Array {
        struct HttpConnection__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HttpConnection* vector[32];
    };

    struct IEnumerator_1_System_Net_HttpConnection_ {
        struct IEnumerator_1_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields {
        struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___Fields fields;
    };

    struct ICollection_1_System_Net_HttpConnection_ {
        struct ICollection_1_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ {
        struct HttpConnection* key;
        struct HttpConnection* value;
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Boxed {
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ fields;
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array {
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection_ {
        struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Net_HttpConnection_ {
        struct IEnumerable_1_System_Net_HttpConnection___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ListenerPrefix__Fields {
        struct String* original;
        struct String* host;
        uint16_t port;
        struct String* path;
        bool secure;
        struct IPAddress__Array* addresses;
        struct HttpListener* Listener;
    };

    struct ListenerPrefix {
        struct ListenerPrefix__Class* klass;
        MonitorData* monitor;
        struct ListenerPrefix__Fields fields;
    };

    struct RequestStream__Fields {
        struct Stream__Fields _;
        struct Byte__Array* buffer;
        int32_t offset;
        int32_t length;
        int64_t remaining_body;
        bool disposed;
        struct Stream* stream;
    };

    struct RequestStream {
        struct RequestStream__Class* klass;
        MonitorData* monitor;
        struct RequestStream__Fields fields;
    };

    struct HttpListenerRequest_GCCDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct HttpListenerRequest_GCCDelegate {
        struct HttpListenerRequest_GCCDelegate__Class* klass;
        MonitorData* monitor;
        struct HttpListenerRequest_GCCDelegate__Fields fields;
    };

    struct AuthenticationSchemes__Enum__VTable {
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

    struct AuthenticationSchemes__Enum__StaticFields {
    };

    struct AuthenticationSchemes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AuthenticationSchemes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AuthenticationSchemes__Enum__VTable vtable;
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
        struct Byte__Array* crlf;
    };

    struct ResponseStream__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ResponseStream__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct String* tspecials;
    };

    struct HttpListenerResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpListenerResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpListenerPrefixCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServiceNameStore__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpListener_ExtendedProtectionSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpListener__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Net_HttpConnection_System_Net_HttpConnection___Array__VTable vtable;
    };

    struct IEqualityComparer_1_System_Net_HttpConnection___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_System_Net_HttpConnection___StaticFields {
    };

    struct IEqualityComparer_1_System_Net_HttpConnection___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_System_Net_HttpConnection___VTable vtable;
    };

    struct HttpConnection__Array__VTable {
    };

    struct HttpConnection__Array__StaticFields {
    };

    struct HttpConnection__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpConnection__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpConnection__Array__VTable vtable;
    };

    struct IEnumerator_1_System_Net_HttpConnection___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Net_HttpConnection___StaticFields {
    };

    struct IEnumerator_1_System_Net_HttpConnection___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_Net_HttpConnection___VTable vtable;
    };

    struct HttpConnection___VTable {
    };

    struct HttpConnection___StaticFields {
    };

    struct HttpConnection___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpConnection___VTable vtable;
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields {
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___VTable vtable;
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array__VTable {
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Net_HttpConnection_System_Net_HttpConnection___VTable vtable;
    };

    struct IEnumerable_1_System_Net_HttpConnection___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_System_Net_HttpConnection___StaticFields {
    };

    struct IEnumerable_1_System_Net_HttpConnection___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_System_Net_HttpConnection___VTable vtable;
    };

    struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields {
    };

    struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection___VTable vtable;
    };

    struct EndPointListener__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EndPointListener__StaticFields {
    };

    struct EndPointListener__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EndPointListener__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EndPointListener__VTable vtable;
    };

    struct ListenerPrefix__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListenerPrefix__StaticFields {
    };

    struct ListenerPrefix__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListenerPrefix__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListenerPrefix__VTable vtable;
    };

    struct RequestStream__VTable {
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

    struct RequestStream__StaticFields {
    };

    struct RequestStream__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RequestStream__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RequestStream__VTable vtable;
    };

    struct HttpConnection_InputState__Enum__VTable {
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

    struct HttpConnection_InputState__Enum__StaticFields {
    };

    struct HttpConnection_InputState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpConnection_InputState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpConnection_InputState__Enum__VTable vtable;
    };

    struct HttpConnection_LineState__Enum__VTable {
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

    struct HttpConnection_LineState__Enum__StaticFields {
    };

    struct HttpConnection_LineState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpConnection_LineState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpConnection_LineState__Enum__VTable vtable;
    };

    struct HttpConnection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
