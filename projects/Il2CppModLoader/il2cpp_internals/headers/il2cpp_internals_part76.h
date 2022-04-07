namespace app {
struct UnlockConnectionDelegate__StaticFields {
};
struct UnlockConnectionDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnlockConnectionDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnlockConnectionDelegate__VTable vtable;
};

struct __declspec(align(8)) KnownHttpVerb__Fields {
  struct String * Name;
  bool RequireContentBody;
  bool ContentBodyNotAllowed;
  bool ConnectRequest;
  bool ExpectNoContentResponse;
};
struct KnownHttpVerb {
  struct KnownHttpVerb__Class *klass;
  struct MonitorData *monitor;
  struct KnownHttpVerb__Fields fields;
};
struct __declspec(align(8)) ListDictionary__Fields {
  struct ListDictionary_DictionaryNode * head;
  int32_t version;
  int32_t count;
  struct IComparer * comparer;
  struct Object * _syncRoot;
};
struct ListDictionary {
  struct ListDictionary__Class *klass;
  struct MonitorData *monitor;
  struct ListDictionary__Fields fields;
};
struct __declspec(align(8)) ListDictionary_DictionaryNode__Fields {
  struct Object * key;
  struct Object * value;
  struct ListDictionary_DictionaryNode * next;
};
struct ListDictionary_DictionaryNode {
  struct ListDictionary_DictionaryNode__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListDictionary_DictionaryNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListDictionary__VTable vtable;
};
struct KnownHttpVerb__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KnownHttpVerb__StaticFields {
  struct ListDictionary * NamedHeaders;
  struct KnownHttpVerb * Get;
  struct KnownHttpVerb * Connect;
  struct KnownHttpVerb * Head;
  struct KnownHttpVerb * Put;
  struct KnownHttpVerb * Post;
  struct KnownHttpVerb * MkCol;
};
struct KnownHttpVerb__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KnownHttpVerb__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KnownHttpVerb__VTable vtable;
};

struct HttpProtocolUtils {
  struct HttpProtocolUtils__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpProtocolUtils__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpProtocolUtils__VTable vtable;
};

struct __declspec(align(8)) SplitWritesState__Fields {
  struct BufferOffsetSize_1__Array * _UserBuffers;
  int32_t _Index;
  int32_t _LastBufferConsumed;
  struct BufferOffsetSize_1__Array * _RealBuffers;
};
struct SplitWritesState {
  struct SplitWritesState__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SplitWritesState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SplitWritesState__VTable vtable;
};

struct ProtocolViolationException__Fields {
  struct InvalidOperationException__Fields _;
};
struct ProtocolViolationException {
  struct ProtocolViolationException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProtocolViolationException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProtocolViolationException__VTable vtable;
};

struct TransportContext {
  struct TransportContext__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CachedTransportContext__Fields {
  struct ChannelBinding * binding;
};
struct CachedTransportContext {
  struct CachedTransportContext__Class *klass;
  struct MonitorData *monitor;
  struct CachedTransportContext__Fields fields;
};
enum ChannelBindingKind__Enum : int32_t {
  ChannelBindingKind__Enum_Unknown = 0,
  ChannelBindingKind__Enum_Unique = 25,
  ChannelBindingKind__Enum_Endpoint = 26,
};
struct ChannelBindingKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ChannelBindingKind__Enum value;
};
struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding_ {
  struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___StaticFields {
};
struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CachedTransportContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransportContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransportContext__VTable vtable;
};

enum HttpRequestHeader__Enum : int32_t {
  HttpRequestHeader__Enum_CacheControl = 0,
  HttpRequestHeader__Enum_Connection = 1,
  HttpRequestHeader__Enum_Date = 2,
  HttpRequestHeader__Enum_KeepAlive = 3,
  HttpRequestHeader__Enum_Pragma = 4,
  HttpRequestHeader__Enum_Trailer = 5,
  HttpRequestHeader__Enum_TransferEncoding = 6,
  HttpRequestHeader__Enum_Upgrade = 7,
  HttpRequestHeader__Enum_Via = 8,
  HttpRequestHeader__Enum_Warning = 9,
  HttpRequestHeader__Enum_Allow = 10,
  HttpRequestHeader__Enum_ContentLength = 11,
  HttpRequestHeader__Enum_ContentType = 12,
  HttpRequestHeader__Enum_ContentEncoding = 13,
  HttpRequestHeader__Enum_ContentLanguage = 14,
  HttpRequestHeader__Enum_ContentLocation = 15,
  HttpRequestHeader__Enum_ContentMd5 = 16,
  HttpRequestHeader__Enum_ContentRange = 17,
  HttpRequestHeader__Enum_Expires = 18,
  HttpRequestHeader__Enum_LastModified = 19,
  HttpRequestHeader__Enum_Accept = 20,
  HttpRequestHeader__Enum_AcceptCharset = 21,
  HttpRequestHeader__Enum_AcceptEncoding = 22,
  HttpRequestHeader__Enum_AcceptLanguage = 23,
  HttpRequestHeader__Enum_Authorization = 24,
  HttpRequestHeader__Enum_Cookie = 25,
  HttpRequestHeader__Enum_Expect = 26,
  HttpRequestHeader__Enum_From = 27,
  HttpRequestHeader__Enum_Host = 28,
  HttpRequestHeader__Enum_IfMatch = 29,
  HttpRequestHeader__Enum_IfModifiedSince = 30,
  HttpRequestHeader__Enum_IfNoneMatch = 31,
  HttpRequestHeader__Enum_IfRange = 32,
  HttpRequestHeader__Enum_IfUnmodifiedSince = 33,
  HttpRequestHeader__Enum_MaxForwards = 34,
  HttpRequestHeader__Enum_ProxyAuthorization = 35,
  HttpRequestHeader__Enum_Referer = 36,
  HttpRequestHeader__Enum_Range = 37,
  HttpRequestHeader__Enum_Te = 38,
  HttpRequestHeader__Enum_Translate = 39,
  HttpRequestHeader__Enum_UserAgent = 40,
};
struct HttpRequestHeader__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HttpRequestHeader__Enum value;
};

enum HttpResponseHeader__Enum : int32_t {
  HttpResponseHeader__Enum_CacheControl = 0,
  HttpResponseHeader__Enum_Connection = 1,
  HttpResponseHeader__Enum_Date = 2,
  HttpResponseHeader__Enum_KeepAlive = 3,
  HttpResponseHeader__Enum_Pragma = 4,
  HttpResponseHeader__Enum_Trailer = 5,
  HttpResponseHeader__Enum_TransferEncoding = 6,
  HttpResponseHeader__Enum_Upgrade = 7,
  HttpResponseHeader__Enum_Via = 8,
  HttpResponseHeader__Enum_Warning = 9,
  HttpResponseHeader__Enum_Allow = 10,
  HttpResponseHeader__Enum_ContentLength = 11,
  HttpResponseHeader__Enum_ContentType = 12,
  HttpResponseHeader__Enum_ContentEncoding = 13,
  HttpResponseHeader__Enum_ContentLanguage = 14,
  HttpResponseHeader__Enum_ContentLocation = 15,
  HttpResponseHeader__Enum_ContentMd5 = 16,
  HttpResponseHeader__Enum_ContentRange = 17,
  HttpResponseHeader__Enum_Expires = 18,
  HttpResponseHeader__Enum_LastModified = 19,
  HttpResponseHeader__Enum_AcceptRanges = 20,
  HttpResponseHeader__Enum_Age = 21,
  HttpResponseHeader__Enum_ETag = 22,
  HttpResponseHeader__Enum_Location = 23,
  HttpResponseHeader__Enum_ProxyAuthenticate = 24,
  HttpResponseHeader__Enum_RetryAfter = 25,
  HttpResponseHeader__Enum_Server = 26,
  HttpResponseHeader__Enum_SetCookie = 27,
  HttpResponseHeader__Enum_Vary = 28,
  HttpResponseHeader__Enum_WwwAuthenticate = 29,
};
struct HttpResponseHeader__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HttpResponseHeader__Enum value;
};

enum DataParseStatus__Enum : int32_t {
  DataParseStatus__Enum_NeedMoreData = 0,
  DataParseStatus__Enum_ContinueParsing = 1,
  DataParseStatus__Enum_Done = 2,
  DataParseStatus__Enum_Invalid = 3,
  DataParseStatus__Enum_DataTooBig = 4,
};
struct DataParseStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DataParseStatus__Enum value;
};
enum WebParseErrorSection__Enum : int32_t {
  WebParseErrorSection__Enum_Generic = 0,
  WebParseErrorSection__Enum_ResponseHeader = 1,
  WebParseErrorSection__Enum_ResponseStatusLine = 2,
  WebParseErrorSection__Enum_ResponseBody = 3,
};
struct WebParseErrorSection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WebParseErrorSection__Enum value;
};
enum WebParseErrorCode__Enum : int32_t {
  WebParseErrorCode__Enum_Generic = 0,
  WebParseErrorCode__Enum_InvalidHeaderName = 1,
  WebParseErrorCode__Enum_InvalidContentLength = 2,
  WebParseErrorCode__Enum_IncompleteHeaderLine = 3,
  WebParseErrorCode__Enum_CrLfError = 4,
  WebParseErrorCode__Enum_InvalidChunkFormat = 5,
  WebParseErrorCode__Enum_UnexpectedServerResponse = 6,
};
struct WebParseErrorCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WebParseErrorCode__Enum value;
};
struct WebParseError {
  enum WebParseErrorSection__Enum Section;
  enum WebParseErrorCode__Enum Code;
};
struct WebParseError__Boxed {
  struct WebParseError__Class *klass;
  struct MonitorData *monitor;
  struct WebParseError fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebParseError__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebParseError__VTable vtable;
};

struct CaseInsensitiveAscii {
  struct CaseInsensitiveAscii__Class *klass;
  struct MonitorData *monitor;
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
  struct CaseInsensitiveAscii * StaticInstance;
  struct Byte__Array * AsciiToLower;
};
struct CaseInsensitiveAscii__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CaseInsensitiveAscii__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CaseInsensitiveAscii__VTable vtable;
};

struct __declspec(align(8)) HostHeaderString__Fields {
  bool m_Converted;
  struct String * m_String;
  struct Byte__Array * m_Bytes;
};
struct HostHeaderString {
  struct HostHeaderString__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HostHeaderString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HostHeaderString__VTable vtable;
};

struct WebPermissionAttribute__Fields {
  struct CodeAccessSecurityAttribute__Fields _;
  struct Object * m_accept;
  struct Object * m_connect;
};
struct WebPermissionAttribute {
  struct WebPermissionAttribute__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebPermissionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebPermissionAttribute__VTable vtable;
};

struct __declspec(align(8)) DelayedRegex__Fields {
  struct Regex * _AsRegex;
  struct String * _AsString;
};
struct DelayedRegex {
  struct DelayedRegex__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DelayedRegex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DelayedRegex__VTable vtable;
};

struct __declspec(align(8)) WebPermission__Fields {
  bool m_noRestriction;
  bool m_UnrestrictedConnect;
  bool m_UnrestrictedAccept;
  struct ArrayList * m_connectList;
  struct ArrayList * m_acceptList;
};
struct WebPermission {
  struct WebPermission__Class *klass;
  struct MonitorData *monitor;
  struct WebPermission__Fields fields;
};
struct WebPermission__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Security_IPermission_Demand;
  VirtualInvokeData IsSubsetOf;
  VirtualInvokeData ToXml;
  VirtualInvokeData Copy;
  VirtualInvokeData Demand;
  VirtualInvokeData FromXml;
  VirtualInvokeData Intersect;
  VirtualInvokeData IsSubsetOf_1;
  VirtualInvokeData ToXml_1;
  VirtualInvokeData Union;
  VirtualInvokeData IsUnrestricted;
};
struct WebPermission__StaticFields {
  struct Regex * s_MatchAllRegex;
};
struct WebPermission__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebPermission__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebPermission__VTable vtable;
};

enum NetworkAccess__Enum : int32_t {
  NetworkAccess__Enum_Accept = 128,
  NetworkAccess__Enum_Connect = 64,
};
struct NetworkAccess__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NetworkAccess__Enum value;
};

struct __declspec(align(8)) WebRequest_WebProxyWrapperOpaque__Fields {
  struct WebProxy * webProxy;
};
struct WebRequest_WebProxyWrapperOpaque {
  struct WebRequest_WebProxyWrapperOpaque__Class *klass;
  struct MonitorData *monitor;
  struct WebRequest_WebProxyWrapperOpaque__Fields fields;
};
struct __declspec(align(8)) WebProxy__Fields {
  bool _UseRegistry;
  bool _BypassOnLocal;
  bool m_EnableAutoproxy;
  struct Uri * _ProxyAddress;
  struct ArrayList * _BypassList;
  struct ICredentials * _Credentials;
  struct Regex__Array * _RegExBypassList;
  struct Hashtable * _ProxyHostAddresses;
  struct AutoWebProxyScriptEngine * m_ScriptEngine;
};
struct WebProxy {
  struct WebProxy__Class *klass;
  struct MonitorData *monitor;
  struct WebProxy__Fields fields;
};
struct Regex__Array {
  struct Regex__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Regex * vector[32];
};
struct __declspec(align(8)) AutoWebProxyScriptEngine__Fields {
  struct Uri * _AutomaticConfigurationScript_k__BackingField;
  bool _AutomaticallyDetectSettings_k__BackingField;
};
struct AutoWebProxyScriptEngine {
  struct AutoWebProxyScriptEngine__Class *klass;
  struct MonitorData *monitor;
  struct AutoWebProxyScriptEngine__Fields fields;
};
struct __declspec(align(8)) ProxyChain__Fields {
  struct List_1_System_Uri_ * m_Cache;
  bool m_CacheComplete;
  struct ProxyChain_ProxyEnumerator * m_MainEnumerator;
  struct Uri * m_Destination;
  struct HttpAbortDelegate * m_HttpAbortDelegate;
};
struct ProxyChain {
  struct ProxyChain__Class *klass;
  struct MonitorData *monitor;
  struct ProxyChain__Fields fields;
};
struct __declspec(align(8)) List_1_System_Uri___Fields {
  struct Uri__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Uri_ {
  struct List_1_System_Uri___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Uri___Fields fields;
};
struct Uri__Array {
  struct Uri__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Uri * vector[32];
};
struct IEnumerator_1_System_Uri_ {
  struct IEnumerator_1_System_Uri___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ProxyChain_ProxyEnumerator__Fields {
  struct ProxyChain * m_Chain;
  bool m_Finished;
  int32_t m_CurrentIndex;
  bool m_TriedDirect;
};
struct ProxyChain_ProxyEnumerator {
  struct ProxyChain_ProxyEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct ProxyChain_ProxyEnumerator__Fields fields;
};
struct ProxyScriptChain__Fields {
  struct ProxyChain__Fields _;
  struct WebProxy * m_Proxy;
  struct Uri__Array * m_ScriptProxies;
  int32_t m_CurrentIndex;
  int32_t m_SyncStatus;
};
struct ProxyScriptChain {
  struct ProxyScriptChain__Class *klass;
  struct MonitorData *monitor;
  struct ProxyScriptChain__Fields fields;
};
struct AutoWebProxyScriptEngine__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AutoWebProxyScriptEngine__StaticFields {
};
struct AutoWebProxyScriptEngine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoWebProxyScriptEngine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoWebProxyScriptEngine__VTable vtable;
};
struct IEnumerator_1_System_Uri___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Uri___StaticFields {
};
struct IEnumerator_1_System_Uri___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Uri___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Uri___VTable vtable;
};
struct List_1_System_Uri___VTable {
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
struct List_1_System_Uri___StaticFields {
  struct Uri__Array * _emptyArray;
};
struct List_1_System_Uri___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Uri___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Uri___VTable vtable;
};
struct ProxyChain_ProxyEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
};
struct ProxyChain_ProxyEnumerator__StaticFields {
};
struct ProxyChain_ProxyEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProxyChain_ProxyEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProxyChain_ProxyEnumerator__VTable vtable;
};
struct ProxyScriptChain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Abort;
  VirtualInvokeData GetNextProxy;
};
struct ProxyScriptChain__StaticFields {
};
struct ProxyScriptChain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProxyScriptChain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProxyScriptChain__VTable vtable;
};
struct ProxyChain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Abort;
  VirtualInvokeData __unknown;
};
struct ProxyChain__StaticFields {
};
struct ProxyChain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProxyChain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProxyChain__VTable vtable;
};
struct WebProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Net_IAutoWebProxy_GetProxies;
  VirtualInvokeData GetProxy;
  VirtualInvokeData IsBypassed;
  VirtualInvokeData get_Credentials;
  VirtualInvokeData set_Credentials;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData GetObjectData;
};
struct WebProxy__StaticFields {
};
struct WebProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebProxy__VTable vtable;
};
struct WebRequest_WebProxyWrapperOpaque__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetProxies;
  VirtualInvokeData GetProxy;
  VirtualInvokeData IsBypassed;
  VirtualInvokeData get_Credentials;
  VirtualInvokeData set_Credentials;
};
struct WebRequest_WebProxyWrapperOpaque__StaticFields {
};
struct WebRequest_WebProxyWrapperOpaque__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebRequest_WebProxyWrapperOpaque__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebRequest_WebProxyWrapperOpaque__VTable vtable;
};

struct WebRequest_WebProxyWrapper__Fields {
  struct WebRequest_WebProxyWrapperOpaque__Fields _;
};
struct WebRequest_WebProxyWrapper {
  struct WebRequest_WebProxyWrapper__Class *klass;
  struct MonitorData *monitor;
  struct WebRequest_WebProxyWrapper__Fields fields;
};
struct WebRequest_WebProxyWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetProxies;
  VirtualInvokeData GetProxy;
  VirtualInvokeData IsBypassed;
  VirtualInvokeData get_Credentials;
  VirtualInvokeData set_Credentials;
};
struct WebRequest_WebProxyWrapper__StaticFields {
};
struct WebRequest_WebProxyWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebRequest_WebProxyWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebRequest_WebProxyWrapper__VTable vtable;
};

struct __declspec(align(8)) WebRequest_c_DisplayClass78_0__Fields {
  struct WindowsIdentity * currentUser;
  struct WebRequest * __4__this;
};
struct WebRequest_c_DisplayClass78_0 {
  struct WebRequest_c_DisplayClass78_0__Class *klass;
  struct MonitorData *monitor;
  struct WebRequest_c_DisplayClass78_0__Fields fields;
};
struct WebRequest_c_DisplayClass78_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebRequest_c_DisplayClass78_0__StaticFields {
};
struct WebRequest_c_DisplayClass78_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebRequest_c_DisplayClass78_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebRequest_c_DisplayClass78_0__VTable vtable;
};

struct __declspec(align(8)) WebRequest_c_DisplayClass79_0__Fields {
  struct WindowsIdentity * currentUser;
  struct WebRequest * __4__this;
};
struct WebRequest_c_DisplayClass79_0 {
  struct WebRequest_c_DisplayClass79_0__Class *klass;
  struct MonitorData *monitor;
  struct WebRequest_c_DisplayClass79_0__Fields fields;
};
struct WebRequest_c_DisplayClass79_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebRequest_c_DisplayClass79_0__StaticFields {
};
struct WebRequest_c_DisplayClass79_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebRequest_c_DisplayClass79_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebRequest_c_DisplayClass79_0__VTable vtable;
};

enum UnicodeDecodingConformance__Enum : int32_t {
  UnicodeDecodingConformance__Enum_Auto = 0,
  UnicodeDecodingConformance__Enum_Strict = 1,
  UnicodeDecodingConformance__Enum_Compat = 2,
  UnicodeDecodingConformance__Enum_Loose = 3,
};
struct UnicodeDecodingConformance__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnicodeDecodingConformance__Enum value;
};

enum UnicodeEncodingConformance__Enum : int32_t {
  UnicodeEncodingConformance__Enum_Auto = 0,
  UnicodeEncodingConformance__Enum_Strict = 1,
  UnicodeEncodingConformance__Enum_Compat = 2,
};
struct UnicodeEncodingConformance__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnicodeEncodingConformance__Enum value;
};

struct __declspec(align(8)) WebUtility_UrlDecoder__Fields {
  int32_t _bufferSize;
  int32_t _numChars;
  struct Char__Array * _charBuffer;
  int32_t _numBytes;
  struct Byte__Array * _byteBuffer;
  struct Encoding * _encoding;
};
struct WebUtility_UrlDecoder {
  struct WebUtility_UrlDecoder__Class *klass;
  struct MonitorData *monitor;
  struct WebUtility_UrlDecoder__Fields fields;
};
struct WebUtility_UrlDecoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebUtility_UrlDecoder__StaticFields {
};
struct WebUtility_UrlDecoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebUtility_UrlDecoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebUtility_UrlDecoder__VTable vtable;
};}