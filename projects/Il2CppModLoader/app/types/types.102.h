namespace app {
struct HttpConnection__StaticFields {
    struct AsyncCallback *onread_cb;
};

struct HttpConnection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpConnection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpConnection__VTable vtable;
};

struct HttpListenerContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HttpListenerContext__StaticFields {
};

struct HttpListenerContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerContext__VTable vtable;
};

struct HttpListenerRequest_GCCDelegate__VTable {
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

struct HttpListenerRequest_GCCDelegate__StaticFields {
};

struct HttpListenerRequest_GCCDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerRequest_GCCDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerRequest_GCCDelegate__VTable vtable;
};

struct HttpListenerRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HttpListenerRequest__StaticFields {
    struct Byte__Array *_100continue;
    struct Char__Array *separators;
};

struct HttpListenerRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerRequest__VTable vtable;
};

struct AuthenticationSchemeSelector__VTable {
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

struct AuthenticationSchemeSelector__StaticFields {
};

struct AuthenticationSchemeSelector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AuthenticationSchemeSelector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AuthenticationSchemeSelector__VTable vtable;
};

struct __declspec(align(8)) CredentialCache__Fields {
    struct Hashtable *cache;
    struct Hashtable *cacheForHosts;
    int32_t m_version;
    int32_t m_NumbDefaultCredInCache;
};

struct CredentialCache {
    struct CredentialCache__Class *klass;
    MonitorData *monitor;
    struct CredentialCache__Fields fields;
};

struct CredentialCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCredential;
    VirtualInvokeData GetCredential_1;
    VirtualInvokeData GetEnumerator;
};

struct CredentialCache__StaticFields {
};

struct CredentialCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CredentialCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CredentialCache__VTable vtable;
};

struct __declspec(align(8)) CredentialCache_CredentialEnumerator__Fields {
    struct CredentialCache *m_cache;
    struct ICredentials__Array *m_array;
    int32_t m_index;
    int32_t m_version;
};

struct CredentialCache_CredentialEnumerator {
    struct CredentialCache_CredentialEnumerator__Class *klass;
    MonitorData *monitor;
    struct CredentialCache_CredentialEnumerator__Fields fields;
};

struct ICredentials__Array {
    struct ICredentials__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ICredentials *vector[32];
};

struct ICredentials__Array__VTable {
};

struct ICredentials__Array__StaticFields {
};

struct ICredentials__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICredentials__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICredentials__Array__VTable vtable;
};

struct CredentialCache_CredentialEnumerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IEnumerator_MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct CredentialCache_CredentialEnumerator__StaticFields {
};

struct CredentialCache_CredentialEnumerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CredentialCache_CredentialEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CredentialCache_CredentialEnumerator__VTable vtable;
};

struct SystemNetworkCredential__Fields {
    struct NetworkCredential__Fields _;
};

struct SystemNetworkCredential {
    struct SystemNetworkCredential__Class *klass;
    MonitorData *monitor;
    struct SystemNetworkCredential__Fields fields;
};

struct SystemNetworkCredential__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCredential;
    VirtualInvokeData GetCredential_1;
};

struct SystemNetworkCredential__StaticFields {
    struct SystemNetworkCredential *defaultCredential;
};

struct SystemNetworkCredential__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SystemNetworkCredential__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SystemNetworkCredential__VTable vtable;
};

struct __declspec(align(8)) CredentialHostKey__Fields {
    struct String *Host;
    struct String *AuthenticationType;
    int32_t Port;
    int32_t m_HashCode;
    bool m_ComputedHashCode;
};

struct CredentialHostKey {
    struct CredentialHostKey__Class *klass;
    MonitorData *monitor;
    struct CredentialHostKey__Fields fields;
};

struct CredentialHostKey__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CredentialHostKey__StaticFields {
};

struct CredentialHostKey__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CredentialHostKey__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CredentialHostKey__VTable vtable;
};

struct __declspec(align(8)) CredentialKey__Fields {
    struct Uri *UriPrefix;
    int32_t UriPrefixLength;
    struct String *AuthenticationType;
    int32_t m_HashCode;
    bool m_ComputedHashCode;
};

struct CredentialKey {
    struct CredentialKey__Class *klass;
    MonitorData *monitor;
    struct CredentialKey__Fields fields;
};

struct CredentialKey__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CredentialKey__StaticFields {
};

struct CredentialKey__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CredentialKey__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CredentialKey__VTable vtable;
};

struct __declspec(align(8)) DnsEndPoint__Fields {
    struct String *m_Host;
    int32_t m_Port;
    AddressFamily__Enum m_Family;
    
};

struct DnsEndPoint {
    struct DnsEndPoint__Class *klass;
    MonitorData *monitor;
    struct DnsEndPoint__Fields fields;
};

struct DnsEndPoint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AddressFamily;
    VirtualInvokeData Serialize;
    VirtualInvokeData Create;
};

struct DnsEndPoint__StaticFields {
};

struct DnsEndPoint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DnsEndPoint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DnsEndPoint__VTable vtable;
};

struct GlobalProxySelection {
    struct GlobalProxySelection__Class *klass;
    MonitorData *monitor;
};

struct GlobalProxySelection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GlobalProxySelection__StaticFields {
};

struct GlobalProxySelection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GlobalProxySelection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GlobalProxySelection__VTable vtable;
};

struct HttpListenerException__Fields {
    struct Win32Exception__Fields _;
};

struct HttpListenerException {
    struct HttpListenerException__Class *klass;
    MonitorData *monitor;
    struct HttpListenerException__Fields fields;
};

struct HttpListenerException__VTable {
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
    VirtualInvokeData get_ErrorCode;
};

struct HttpListenerException__StaticFields {
};

struct HttpListenerException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerException__VTable vtable;
};

struct __declspec(align(8)) HttpListenerRequestUriBuilder__Fields {
    struct String *rawUri;
    struct String *cookedUriScheme;
    struct String *cookedUriHost;
    struct String *cookedUriPath;
    struct String *cookedUriQuery;
    struct StringBuilder *requestUriString;
    struct List_1_System_Byte_ *rawOctets;
    struct String *rawPath;
    struct Uri *requestUri;
};

struct HttpListenerRequestUriBuilder {
    struct HttpListenerRequestUriBuilder__Class *klass;
    MonitorData *monitor;
    struct HttpListenerRequestUriBuilder__Fields fields;
};

struct HttpListenerRequestUriBuilder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HttpListenerRequestUriBuilder__StaticFields {
    bool useCookedRequestUrl;
    struct Encoding *utf8Encoding;
    struct Encoding *ansiEncoding;
};

struct HttpListenerRequestUriBuilder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerRequestUriBuilder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerRequestUriBuilder__VTable vtable;
};

enum class HttpListenerRequestUriBuilder_EncodingType__Enum : int32_t {
    Primary = 0x00000000,
    Secondary = 0x00000001,
};

struct HttpListenerRequestUriBuilder_EncodingType__Enum__Boxed {
    struct HttpListenerRequestUriBuilder_EncodingType__Enum__Class *klass;
    MonitorData *monitor;
    HttpListenerRequestUriBuilder_EncodingType__Enum value;
    
};

struct HttpListenerRequestUriBuilder_EncodingType__Enum__VTable {
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

struct HttpListenerRequestUriBuilder_EncodingType__Enum__StaticFields {
};

struct HttpListenerRequestUriBuilder_EncodingType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerRequestUriBuilder_EncodingType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerRequestUriBuilder_EncodingType__Enum__VTable vtable;
};

enum class HttpListenerRequestUriBuilder_ParsingResult__Enum : int32_t {
    Success = 0x00000000,
    InvalidString = 0x00000001,
    EncodingError = 0x00000002,
};

struct HttpListenerRequestUriBuilder_ParsingResult__Enum__Boxed {
    struct HttpListenerRequestUriBuilder_ParsingResult__Enum__Class *klass;
    MonitorData *monitor;
    HttpListenerRequestUriBuilder_ParsingResult__Enum value;
    
};

struct HttpListenerRequestUriBuilder_ParsingResult__Enum__VTable {
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

struct HttpListenerRequestUriBuilder_ParsingResult__Enum__StaticFields {
};

struct HttpListenerRequestUriBuilder_ParsingResult__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerRequestUriBuilder_ParsingResult__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerRequestUriBuilder_ParsingResult__Enum__VTable vtable;
};

struct IEnumerable_1_System_Byte_ {
    struct IEnumerable_1_System_Byte___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Byte___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Byte___StaticFields {
};

struct IEnumerable_1_System_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Byte___VTable vtable;
};

struct HttpVersion {
    struct HttpVersion__Class *klass;
    MonitorData *monitor;
};

struct HttpVersion__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HttpVersion__StaticFields {
    struct Version *Version10;
    struct Version *Version11;
};

struct HttpVersion__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpVersion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpVersion__VTable vtable;
};

struct IPAddress___VTable {
};

struct IPAddress___StaticFields {
};

struct IPAddress___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPAddress___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPAddress___VTable vtable;
};

struct InternalException__Fields {
    struct SystemException__Fields _;
};

struct InternalException {
    struct InternalException__Class *klass;
    MonitorData *monitor;
    struct InternalException__Fields fields;
};

struct InternalException__VTable {
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

struct InternalException__StaticFields {
};

struct InternalException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InternalException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InternalException__VTable vtable;
};

enum class SecurityStatus__Enum : int32_t {
    OK = 0x00000000,
    ContinueNeeded = 0x00090312,
    CompleteNeeded = 0x00090313,
    CompAndContinue = 0x00090314,
    ContextExpired = 0x00090317,
    CredentialsNeeded = 0x00090320,
    Renegotiate = 0x00090321,
    OutOfMemory = -2146893056,
    InvalidHandle = -2146893055,
    Unsupported = -2146893054,
    TargetUnknown = -2146893053,
    InternalError = -2146893052,
    PackageNotFound = -2146893051,
    NotOwner = -2146893050,
    CannotInstall = -2146893049,
    InvalidToken = -2146893048,
    CannotPack = -2146893047,
    QopNotSupported = -2146893046,
    NoImpersonation = -2146893045,
    LogonDenied = -2146893044,
    UnknownCredentials = -2146893043,
    NoCredentials = -2146893042,
    MessageAltered = -2146893041,
    OutOfSequence = -2146893040,
    NoAuthenticatingAuthority = -2146893039,
    IncompleteMessage = -2146893032,
    IncompleteCredentials = -2146893024,
    BufferNotEnough = -2146893023,
    WrongPrincipal = -2146893022,
    TimeSkew = -2146893020,
    UntrustedRoot = -2146893019,
    IllegalMessage = -2146893018,
    CertUnknown = -2146893017,
    CertExpired = -2146893016,
    AlgorithmMismatch = -2146893007,
    SecurityQosFailed = -2146893006,
    SmartcardLogonRequired = -2146892994,
    UnsupportedPreauth = -2146892989,
    BadBinding = -2146892986,
};

struct SecurityStatus__Enum__Boxed {
    struct SecurityStatus__Enum__Class *klass;
    MonitorData *monitor;
    SecurityStatus__Enum value;
    
};

struct SecurityStatus__Enum__VTable {
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

struct SecurityStatus__Enum__StaticFields {
};

struct SecurityStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityStatus__Enum__VTable vtable;
};

struct InterlockedGate {
    int32_t m_State;
};

struct InterlockedGate__Boxed {
    struct InterlockedGate__Class *klass;
    MonitorData *monitor;
    struct InterlockedGate fields;
};

struct InterlockedGate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InterlockedGate__StaticFields {
};

struct InterlockedGate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InterlockedGate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InterlockedGate__VTable vtable;
};

struct ArraySegment_1_Byte_ {
    struct Byte__Array *_array;
    int32_t _offset;
    int32_t _count;
};

struct ArraySegment_1_Byte___Boxed {
    struct ArraySegment_1_Byte___Class *klass;
    MonitorData *monitor;
    struct ArraySegment_1_Byte_ fields;
};

struct ArraySegment_1_Byte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
    VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
    VirtualInvokeData System_Collections_Generic_IList_T__IndexOf;
    VirtualInvokeData System_Collections_Generic_IList_T__Insert;
    VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_T__CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IReadOnlyList_T__get_Item;
    VirtualInvokeData get_Count_1;
};

struct ArraySegment_1_Byte___StaticFields {
};

struct ArraySegment_1_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArraySegment_1_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArraySegment_1_Byte___VTable vtable;
};

enum class WebExceptionInternalStatus__Enum : int32_t {
    RequestFatal = 0x00000000,
    ServicePointFatal = 0x00000001,
    Recoverable = 0x00000002,
    Isolated = 0x00000003,
};

struct WebExceptionInternalStatus__Enum__Boxed {
    struct WebExceptionInternalStatus__Enum__Class *klass;
    MonitorData *monitor;
    WebExceptionInternalStatus__Enum value;
    
};

struct WebException__Fields {
    struct InvalidOperationException__Fields _;
    WebExceptionStatus__Enum m_Status;
    
    struct WebResponse *m_Response;
    WebExceptionInternalStatus__Enum m_InternalStatus;
    
};

struct WebException {
    struct WebException__Class *klass;
    MonitorData *monitor;
    struct WebException__Fields fields;
};

struct WebExceptionInternalStatus__Enum__VTable {
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

struct WebExceptionInternalStatus__Enum__StaticFields {
};

struct WebExceptionInternalStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebExceptionInternalStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebExceptionInternalStatus__Enum__VTable vtable;
};

struct WebException__VTable {
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

struct WebException__StaticFields {
};

struct WebException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebException__VTable vtable;
};

enum class BufferType__Enum : int32_t {
    Empty = 0x00000000,
    Data = 0x00000001,
    Token = 0x00000002,
    Parameters = 0x00000003,
    Missing = 0x00000004,
    Extra = 0x00000005,
    Trailer = 0x00000006,
    Header = 0x00000007,
    Padding = 0x00000009,
    Stream = 0x0000000a,
    ChannelBindings = 0x0000000e,
    TargetHost = 0x00000010,
    ReadOnlyFlag = -2147483648,
    ReadOnlyWithChecksum = 0x10000000,
};

struct BufferType__Enum__Boxed {
    struct BufferType__Enum__Class *klass;
    MonitorData *monitor;
    BufferType__Enum value;
    
};

struct __declspec(align(8)) SecurityBuffer__Fields {
    int32_t size;
    BufferType__Enum type;
    
    struct Byte__Array *token;
    struct SafeHandle *unmanagedToken;
    int32_t offset;
};

struct SecurityBuffer {
    struct SecurityBuffer__Class *klass;
    MonitorData *monitor;
    struct SecurityBuffer__Fields fields;
};

struct BufferType__Enum__VTable {
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

struct BufferType__Enum__StaticFields {
};

struct BufferType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BufferType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BufferType__Enum__VTable vtable;
};

struct SecurityBuffer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SecurityBuffer__StaticFields {
};

struct SecurityBuffer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityBuffer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityBuffer__VTable vtable;
};

struct __declspec(align(8)) SecurityBufferDescriptor__Fields {
    int32_t Version;
    int32_t Count;
    struct Void *UnmanagedPointer;
};

struct SecurityBufferDescriptor {
    struct SecurityBufferDescriptor__Class *klass;
    MonitorData *monitor;
    struct SecurityBufferDescriptor__Fields fields;
};

}
