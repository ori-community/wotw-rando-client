namespace app {
    struct SecurityBufferDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SecurityBufferDescriptor__StaticFields {
    };

    struct SecurityBufferDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SecurityBufferDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SecurityBufferDescriptor__VTable vtable;
    };

    struct __declspec(align(8)) SecChannelBindings__Fields {
        int32_t dwInitiatorAddrType;
        int32_t cbInitiatorLength;
        int32_t dwInitiatorOffset;
        int32_t dwAcceptorAddrType;
        int32_t cbAcceptorLength;
        int32_t dwAcceptorOffset;
        int32_t cbApplicationDataLength;
        int32_t dwApplicationDataOffset;
    };

    struct SecChannelBindings {
        struct SecChannelBindings__Class* klass;
        MonitorData* monitor;
        struct SecChannelBindings__Fields fields;
    };

    struct SecChannelBindings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SecChannelBindings__StaticFields {
    };

    struct SecChannelBindings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SecChannelBindings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SecChannelBindings__VTable vtable;
    };

    struct __declspec(align(8)) WebRequestPrefixElement__Fields {
        struct String* Prefix;
        struct IWebRequestCreate* creator;
        struct Type* creatorType;
    };

    struct WebRequestPrefixElement {
        struct WebRequestPrefixElement__Class* klass;
        MonitorData* monitor;
        struct WebRequestPrefixElement__Fields fields;
    };

    struct WebRequestPrefixElement__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WebRequestPrefixElement__StaticFields {
    };

    struct WebRequestPrefixElement__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebRequestPrefixElement__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebRequestPrefixElement__VTable vtable;
    };

    struct HttpAbortDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct HttpAbortDelegate {
        struct HttpAbortDelegate__Class* klass;
        MonitorData* monitor;
        struct HttpAbortDelegate__Fields fields;
    };

    struct HttpAbortDelegate__VTable {
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

    struct HttpAbortDelegate__StaticFields {
    };

    struct HttpAbortDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpAbortDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpAbortDelegate__VTable vtable;
    };

    struct UnlockConnectionDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct UnlockConnectionDelegate {
        struct UnlockConnectionDelegate__Class* klass;
        MonitorData* monitor;
        struct UnlockConnectionDelegate__Fields fields;
    };

    struct UnlockConnectionDelegate__VTable {
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

    struct UnlockConnectionDelegate__StaticFields {
    };

    struct UnlockConnectionDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnlockConnectionDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnlockConnectionDelegate__VTable vtable;
    };

    struct __declspec(align(8)) KnownHttpVerb__Fields {
        struct String* Name;
        bool RequireContentBody;
        bool ContentBodyNotAllowed;
        bool ConnectRequest;
        bool ExpectNoContentResponse;
    };

    struct KnownHttpVerb {
        struct KnownHttpVerb__Class* klass;
        MonitorData* monitor;
        struct KnownHttpVerb__Fields fields;
    };

    struct __declspec(align(8)) ListDictionary__Fields {
        struct ListDictionary_DictionaryNode* head;
        int32_t version;
        int32_t count;
        struct IComparer* comparer;
        struct Object* _syncRoot;
    };

    struct ListDictionary {
        struct ListDictionary__Class* klass;
        MonitorData* monitor;
        struct ListDictionary__Fields fields;
    };

    struct __declspec(align(8)) ListDictionary_DictionaryNode__Fields {
        struct Object* key;
        struct Object* value;
        struct ListDictionary_DictionaryNode* next;
    };

    struct ListDictionary_DictionaryNode {
        struct ListDictionary_DictionaryNode__Class* klass;
        MonitorData* monitor;
        struct ListDictionary_DictionaryNode__Fields fields;
    };

    struct ListDictionary_DictionaryNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListDictionary_DictionaryNode__StaticFields {
    };

    struct ListDictionary_DictionaryNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListDictionary_DictionaryNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListDictionary_DictionaryNode__VTable vtable;
    };

    struct ListDictionary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData get_Keys;
        VirtualInvokeData get_Values;
        VirtualInvokeData Contains;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_IsFixedSize;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData Remove;
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    };

    struct ListDictionary__StaticFields {
    };

    struct ListDictionary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListDictionary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListDictionary__VTable vtable;
    };

    struct KnownHttpVerb__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KnownHttpVerb__StaticFields {
        struct ListDictionary* NamedHeaders;
        struct KnownHttpVerb* Get;
        struct KnownHttpVerb* Connect;
        struct KnownHttpVerb* Head;
        struct KnownHttpVerb* Put;
        struct KnownHttpVerb* Post;
        struct KnownHttpVerb* MkCol;
    };

    struct KnownHttpVerb__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KnownHttpVerb__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KnownHttpVerb__VTable vtable;
    };

    struct HttpProtocolUtils {
        struct HttpProtocolUtils__Class* klass;
        MonitorData* monitor;
    };

    struct HttpProtocolUtils__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HttpProtocolUtils__StaticFields {
    };

    struct HttpProtocolUtils__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpProtocolUtils__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpProtocolUtils__VTable vtable;
    };

    struct __declspec(align(8)) SplitWritesState__Fields {
        struct BufferOffsetSize_1__Array* _UserBuffers;
        int32_t _Index;
        int32_t _LastBufferConsumed;
        struct BufferOffsetSize_1__Array* _RealBuffers;
    };

    struct SplitWritesState {
        struct SplitWritesState__Class* klass;
        MonitorData* monitor;
        struct SplitWritesState__Fields fields;
    };

    struct SplitWritesState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SplitWritesState__StaticFields {
    };

    struct SplitWritesState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SplitWritesState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SplitWritesState__VTable vtable;
    };

    struct ProtocolViolationException__Fields {
        struct InvalidOperationException__Fields _;
    };

    struct ProtocolViolationException {
        struct ProtocolViolationException__Class* klass;
        MonitorData* monitor;
        struct ProtocolViolationException__Fields fields;
    };

    struct ProtocolViolationException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData GetType;
    };

    struct ProtocolViolationException__StaticFields {
    };

    struct ProtocolViolationException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProtocolViolationException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProtocolViolationException__VTable vtable;
    };

    struct TransportContext {
        struct TransportContext__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CachedTransportContext__Fields {
        struct ChannelBinding* binding;
    };

    struct CachedTransportContext {
        struct CachedTransportContext__Class* klass;
        MonitorData* monitor;
        struct CachedTransportContext__Fields fields;
    };

    enum class ChannelBindingKind__Enum : int32_t {
        Unknown = 0x00000000,
        Unique = 0x00000019,
        Endpoint = 0x0000001a,
    };

    struct ChannelBindingKind__Enum__Boxed {
        struct ChannelBindingKind__Enum__Class* klass;
        MonitorData* monitor;
        ChannelBindingKind__Enum value;
    };

    struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding_ {
        struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___Class* klass;
        MonitorData* monitor;
    };

    struct ChannelBindingKind__Enum__VTable {
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

    struct ChannelBindingKind__Enum__StaticFields {
    };

    struct ChannelBindingKind__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChannelBindingKind__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChannelBindingKind__Enum__VTable vtable;
    };

    struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___StaticFields {
    };

    struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___VTable vtable;
    };

    struct CachedTransportContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetChannelBinding;
        VirtualInvokeData GetTlsTokenBindings;
    };

    struct CachedTransportContext__StaticFields {
    };

    struct CachedTransportContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CachedTransportContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CachedTransportContext__VTable vtable;
    };

    struct TransportContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData GetTlsTokenBindings;
    };

    struct TransportContext__StaticFields {
    };

    struct TransportContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransportContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransportContext__VTable vtable;
    };

    enum class HttpRequestHeader__Enum : int32_t {
        CacheControl = 0x00000000,
        Connection = 0x00000001,
        Date = 0x00000002,
        KeepAlive = 0x00000003,
        Pragma = 0x00000004,
        Trailer = 0x00000005,
        TransferEncoding = 0x00000006,
        Upgrade = 0x00000007,
        Via = 0x00000008,
        Warning = 0x00000009,
        Allow = 0x0000000a,
        ContentLength = 0x0000000b,
        ContentType = 0x0000000c,
        ContentEncoding = 0x0000000d,
        ContentLanguage = 0x0000000e,
        ContentLocation = 0x0000000f,
        ContentMd5 = 0x00000010,
        ContentRange = 0x00000011,
        Expires = 0x00000012,
        LastModified = 0x00000013,
        Accept = 0x00000014,
        AcceptCharset = 0x00000015,
        AcceptEncoding = 0x00000016,
        AcceptLanguage = 0x00000017,
        Authorization = 0x00000018,
        Cookie = 0x00000019,
        Expect = 0x0000001a,
        From = 0x0000001b,
        Host = 0x0000001c,
        IfMatch = 0x0000001d,
        IfModifiedSince = 0x0000001e,
        IfNoneMatch = 0x0000001f,
        IfRange = 0x00000020,
        IfUnmodifiedSince = 0x00000021,
        MaxForwards = 0x00000022,
        ProxyAuthorization = 0x00000023,
        Referer = 0x00000024,
        Range = 0x00000025,
        Te = 0x00000026,
        Translate = 0x00000027,
        UserAgent = 0x00000028,
    };

    struct HttpRequestHeader__Enum__Boxed {
        struct HttpRequestHeader__Enum__Class* klass;
        MonitorData* monitor;
        HttpRequestHeader__Enum value;
    };

    struct HttpRequestHeader__Enum__VTable {
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

    struct HttpRequestHeader__Enum__StaticFields {
    };

    struct HttpRequestHeader__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpRequestHeader__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpRequestHeader__Enum__VTable vtable;
    };

    enum class HttpResponseHeader__Enum : int32_t {
        CacheControl = 0x00000000,
        Connection = 0x00000001,
        Date = 0x00000002,
        KeepAlive = 0x00000003,
        Pragma = 0x00000004,
        Trailer = 0x00000005,
        TransferEncoding = 0x00000006,
        Upgrade = 0x00000007,
        Via = 0x00000008,
        Warning = 0x00000009,
        Allow = 0x0000000a,
        ContentLength = 0x0000000b,
        ContentType = 0x0000000c,
        ContentEncoding = 0x0000000d,
        ContentLanguage = 0x0000000e,
        ContentLocation = 0x0000000f,
        ContentMd5 = 0x00000010,
        ContentRange = 0x00000011,
        Expires = 0x00000012,
        LastModified = 0x00000013,
        AcceptRanges = 0x00000014,
        Age = 0x00000015,
        ETag = 0x00000016,
        Location = 0x00000017,
        ProxyAuthenticate = 0x00000018,
        RetryAfter = 0x00000019,
        Server = 0x0000001a,
        SetCookie = 0x0000001b,
        Vary = 0x0000001c,
        WwwAuthenticate = 0x0000001d,
    };

    struct HttpResponseHeader__Enum__Boxed {
        struct HttpResponseHeader__Enum__Class* klass;
        MonitorData* monitor;
        HttpResponseHeader__Enum value;
    };

    struct HttpResponseHeader__Enum__VTable {
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

    struct HttpResponseHeader__Enum__StaticFields {
    };

    struct HttpResponseHeader__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HttpResponseHeader__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HttpResponseHeader__Enum__VTable vtable;
    };

    enum class DataParseStatus__Enum : int32_t {
        NeedMoreData = 0x00000000,
        ContinueParsing = 0x00000001,
        Done = 0x00000002,
        Invalid = 0x00000003,
        DataTooBig = 0x00000004,
    };

    struct DataParseStatus__Enum__Boxed {
        struct DataParseStatus__Enum__Class* klass;
        MonitorData* monitor;
        DataParseStatus__Enum value;
    };

    enum class WebParseErrorSection__Enum : int32_t {
        Generic = 0x00000000,
        ResponseHeader = 0x00000001,
        ResponseStatusLine = 0x00000002,
        ResponseBody = 0x00000003,
    };

    struct WebParseErrorSection__Enum__Boxed {
        struct WebParseErrorSection__Enum__Class* klass;
        MonitorData* monitor;
        WebParseErrorSection__Enum value;
    };

    enum class WebParseErrorCode__Enum : int32_t {
        Generic = 0x00000000,
        InvalidHeaderName = 0x00000001,
        InvalidContentLength = 0x00000002,
        IncompleteHeaderLine = 0x00000003,
        CrLfError = 0x00000004,
        InvalidChunkFormat = 0x00000005,
        UnexpectedServerResponse = 0x00000006,
    };

    struct WebParseErrorCode__Enum__Boxed {
        struct WebParseErrorCode__Enum__Class* klass;
        MonitorData* monitor;
        WebParseErrorCode__Enum value;
    };

    struct WebParseError {
        WebParseErrorSection__Enum Section;

        WebParseErrorCode__Enum Code;
    };

    struct WebParseError__Boxed {
        struct WebParseError__Class* klass;
        MonitorData* monitor;
        struct WebParseError fields;
    };

    struct DataParseStatus__Enum__VTable {
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

    struct DataParseStatus__Enum__StaticFields {
    };

    struct DataParseStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataParseStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataParseStatus__Enum__VTable vtable;
    };

    struct WebParseErrorSection__Enum__VTable {
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

    struct WebParseErrorSection__Enum__StaticFields {
    };

    struct WebParseErrorSection__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebParseErrorSection__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebParseErrorSection__Enum__VTable vtable;
    };

    struct WebParseErrorCode__Enum__VTable {
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

    struct WebParseErrorCode__Enum__StaticFields {
    };

    struct WebParseErrorCode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebParseErrorCode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebParseErrorCode__Enum__VTable vtable;
    };

    struct WebParseError__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WebParseError__StaticFields {
    };

    struct WebParseError__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebParseError__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebParseError__VTable vtable;
    };

    struct WebParseError___VTable {
    };

    struct WebParseError___StaticFields {
    };

    struct WebParseError___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebParseError___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebParseError___VTable vtable;
    };

    struct CaseInsensitiveAscii {
        struct CaseInsensitiveAscii__Class* klass;
        MonitorData* monitor;
    };

    struct CaseInsensitiveAscii__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
        VirtualInvokeData Compare;
    };

    struct CaseInsensitiveAscii__StaticFields {
        struct CaseInsensitiveAscii* StaticInstance;
        struct Byte__Array* AsciiToLower;
    };

    struct CaseInsensitiveAscii__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CaseInsensitiveAscii__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CaseInsensitiveAscii__VTable vtable;
    };

    struct __declspec(align(8)) HostHeaderString__Fields {
        bool m_Converted;
        struct String* m_String;
        struct Byte__Array* m_Bytes;
    };

    struct HostHeaderString {
        struct HostHeaderString__Class* klass;
        MonitorData* monitor;
        struct HostHeaderString__Fields fields;
    };

    struct HostHeaderString__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HostHeaderString__StaticFields {
    };

    struct HostHeaderString__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HostHeaderString__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HostHeaderString__VTable vtable;
    };

    struct WebPermissionAttribute__Fields {
        struct CodeAccessSecurityAttribute__Fields _;
        struct Object* m_accept;
        struct Object* m_connect;
    };

    struct WebPermissionAttribute {
        struct WebPermissionAttribute__Class* klass;
        MonitorData* monitor;
        struct WebPermissionAttribute__Fields fields;
    };

    struct WebPermissionAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
        VirtualInvokeData CreatePermission;
    };

    struct WebPermissionAttribute__StaticFields {
    };

    struct WebPermissionAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebPermissionAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebPermissionAttribute__VTable vtable;
    };

    struct __declspec(align(8)) DelayedRegex__Fields {
        struct Regex* _AsRegex;
        struct String* _AsString;
    };

    struct DelayedRegex {
        struct DelayedRegex__Class* klass;
        MonitorData* monitor;
        struct DelayedRegex__Fields fields;
    };

    struct DelayedRegex__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DelayedRegex__StaticFields {
    };

    struct DelayedRegex__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DelayedRegex__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DelayedRegex__VTable vtable;
    };

} // namespace app
