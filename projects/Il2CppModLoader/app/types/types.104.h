namespace app {
struct __declspec(align(8)) WebPermission__Fields {
    bool m_noRestriction;
    bool m_UnrestrictedConnect;
    bool m_UnrestrictedAccept;
    struct ArrayList *m_connectList;
    struct ArrayList *m_acceptList;
};

struct WebPermission {
    struct WebPermission__Class *klass;
    MonitorData *monitor;
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
    struct Regex *s_MatchAllRegex;
};

struct WebPermission__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebPermission__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebPermission__VTable vtable;
};

enum class NetworkAccess__Enum : int32_t {
    Accept = 0x00000080,
    Connect = 0x00000040,
};

struct NetworkAccess__Enum__Boxed {
    struct NetworkAccess__Enum__Class *klass;
    MonitorData *monitor;
    NetworkAccess__Enum value;
    
};

struct NetworkAccess__Enum__VTable {
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

struct NetworkAccess__Enum__StaticFields {
};

struct NetworkAccess__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkAccess__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkAccess__Enum__VTable vtable;
};

struct __declspec(align(8)) WebRequest_WebProxyWrapperOpaque__Fields {
    struct WebProxy *webProxy;
};

struct WebRequest_WebProxyWrapperOpaque {
    struct WebRequest_WebProxyWrapperOpaque__Class *klass;
    MonitorData *monitor;
    struct WebRequest_WebProxyWrapperOpaque__Fields fields;
};

struct __declspec(align(8)) WebProxy__Fields {
    bool _UseRegistry;
    bool _BypassOnLocal;
    bool m_EnableAutoproxy;
    struct Uri *_ProxyAddress;
    struct ArrayList *_BypassList;
    struct ICredentials *_Credentials;
    struct Regex__Array *_RegExBypassList;
    struct Hashtable *_ProxyHostAddresses;
    struct AutoWebProxyScriptEngine *m_ScriptEngine;
};

struct WebProxy {
    struct WebProxy__Class *klass;
    MonitorData *monitor;
    struct WebProxy__Fields fields;
};

struct Regex__Array {
    struct Regex__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Regex *vector[32];
};

struct __declspec(align(8)) AutoWebProxyScriptEngine__Fields {
    struct Uri *_AutomaticConfigurationScript_k__BackingField;
    bool _AutomaticallyDetectSettings_k__BackingField;
};

struct AutoWebProxyScriptEngine {
    struct AutoWebProxyScriptEngine__Class *klass;
    MonitorData *monitor;
    struct AutoWebProxyScriptEngine__Fields fields;
};

struct __declspec(align(8)) ProxyChain__Fields {
    struct List_1_System_Uri_ *m_Cache;
    bool m_CacheComplete;
    struct ProxyChain_ProxyEnumerator *m_MainEnumerator;
    struct Uri *m_Destination;
    struct HttpAbortDelegate *m_HttpAbortDelegate;
};

struct ProxyChain {
    struct ProxyChain__Class *klass;
    MonitorData *monitor;
    struct ProxyChain__Fields fields;
};

struct __declspec(align(8)) List_1_System_Uri___Fields {
    struct Uri__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Uri_ {
    struct List_1_System_Uri___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Uri___Fields fields;
};

struct Uri__Array {
    struct Uri__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Uri *vector[32];
};

struct IEnumerator_1_System_Uri_ {
    struct IEnumerator_1_System_Uri___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ProxyChain_ProxyEnumerator__Fields {
    struct ProxyChain *m_Chain;
    bool m_Finished;
    int32_t m_CurrentIndex;
    bool m_TriedDirect;
};

struct ProxyChain_ProxyEnumerator {
    struct ProxyChain_ProxyEnumerator__Class *klass;
    MonitorData *monitor;
    struct ProxyChain_ProxyEnumerator__Fields fields;
};

struct ProxyScriptChain__Fields {
    struct ProxyChain__Fields _;
    struct WebProxy *m_Proxy;
    struct Uri__Array *m_ScriptProxies;
    int32_t m_CurrentIndex;
    int32_t m_SyncStatus;
};

struct ProxyScriptChain {
    struct ProxyScriptChain__Class *klass;
    MonitorData *monitor;
    struct ProxyScriptChain__Fields fields;
};

struct Regex__Array__VTable {
};

struct Regex__Array__StaticFields {
};

struct Regex__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Regex__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Regex__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoWebProxyScriptEngine__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoWebProxyScriptEngine__VTable vtable;
};

struct Uri__Array__VTable {
};

struct Uri__Array__StaticFields {
};

struct Uri__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Uri__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Uri__Array__VTable vtable;
};

struct IEnumerator_1_System_Uri___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Uri___StaticFields {
};

struct IEnumerator_1_System_Uri___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Uri___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Uri__Array *_emptyArray;
};

struct List_1_System_Uri___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Uri___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProxyChain_ProxyEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProxyScriptChain__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProxyChain__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebProxy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebRequest_WebProxyWrapperOpaque__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebRequest_WebProxyWrapperOpaque__VTable vtable;
};

struct WebRequest_WebProxyWrapper__Fields {
    struct WebRequest_WebProxyWrapperOpaque__Fields _;
};

struct WebRequest_WebProxyWrapper {
    struct WebRequest_WebProxyWrapper__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebRequest_WebProxyWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebRequest_WebProxyWrapper__VTable vtable;
};

struct __declspec(align(8)) WebRequest_c_DisplayClass78_0__Fields {
    struct WindowsIdentity *currentUser;
    struct WebRequest *__4__this;
};

struct WebRequest_c_DisplayClass78_0 {
    struct WebRequest_c_DisplayClass78_0__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebRequest_c_DisplayClass78_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebRequest_c_DisplayClass78_0__VTable vtable;
};

struct __declspec(align(8)) WebRequest_c_DisplayClass79_0__Fields {
    struct WindowsIdentity *currentUser;
    struct WebRequest *__4__this;
};

struct WebRequest_c_DisplayClass79_0 {
    struct WebRequest_c_DisplayClass79_0__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebRequest_c_DisplayClass79_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebRequest_c_DisplayClass79_0__VTable vtable;
};

enum class UnicodeDecodingConformance__Enum : int32_t {
    Auto = 0x00000000,
    Strict = 0x00000001,
    Compat = 0x00000002,
    Loose = 0x00000003,
};

struct UnicodeDecodingConformance__Enum__Boxed {
    struct UnicodeDecodingConformance__Enum__Class *klass;
    MonitorData *monitor;
    UnicodeDecodingConformance__Enum value;
    
};

struct UnicodeDecodingConformance__Enum__VTable {
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

struct UnicodeDecodingConformance__Enum__StaticFields {
};

struct UnicodeDecodingConformance__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnicodeDecodingConformance__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnicodeDecodingConformance__Enum__VTable vtable;
};

enum class UnicodeEncodingConformance__Enum : int32_t {
    Auto = 0x00000000,
    Strict = 0x00000001,
    Compat = 0x00000002,
};

struct UnicodeEncodingConformance__Enum__Boxed {
    struct UnicodeEncodingConformance__Enum__Class *klass;
    MonitorData *monitor;
    UnicodeEncodingConformance__Enum value;
    
};

struct UnicodeEncodingConformance__Enum__VTable {
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

struct UnicodeEncodingConformance__Enum__StaticFields {
};

struct UnicodeEncodingConformance__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnicodeEncodingConformance__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnicodeEncodingConformance__Enum__VTable vtable;
};

struct __declspec(align(8)) WebUtility_UrlDecoder__Fields {
    int32_t _bufferSize;
    int32_t _numChars;
    struct Char__Array *_charBuffer;
    int32_t _numBytes;
    struct Byte__Array *_byteBuffer;
    struct Encoding *_encoding;
};

struct WebUtility_UrlDecoder {
    struct WebUtility_UrlDecoder__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebUtility_UrlDecoder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebUtility_UrlDecoder__VTable vtable;
};

struct WriteStreamClosedEventArgs {
    struct WriteStreamClosedEventArgs__Class *klass;
    MonitorData *monitor;
};

struct WriteStreamClosedEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WriteStreamClosedEventArgs__StaticFields {
};

struct WriteStreamClosedEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WriteStreamClosedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WriteStreamClosedEventArgs__VTable vtable;
};

struct WriteStreamClosedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct WriteStreamClosedEventHandler {
    struct WriteStreamClosedEventHandler__Class *klass;
    MonitorData *monitor;
    struct WriteStreamClosedEventHandler__Fields fields;
};

struct WriteStreamClosedEventHandler__VTable {
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

struct WriteStreamClosedEventHandler__StaticFields {
};

struct WriteStreamClosedEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WriteStreamClosedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WriteStreamClosedEventHandler__VTable vtable;
};

struct __declspec(align(8)) LazyAsyncResult_ThreadContext__Fields {
    int32_t m_NestedIOCount;
};

struct LazyAsyncResult_ThreadContext {
    struct LazyAsyncResult_ThreadContext__Class *klass;
    MonitorData *monitor;
    struct LazyAsyncResult_ThreadContext__Fields fields;
};

struct LazyAsyncResult_ThreadContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LazyAsyncResult_ThreadContext__StaticFields {
};

struct LazyAsyncResult_ThreadContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LazyAsyncResult_ThreadContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LazyAsyncResult_ThreadContext__VTable vtable;
};

struct __declspec(align(8)) LazyAsyncResult__Fields {
    struct Object *m_AsyncObject;
    struct Object *m_AsyncState;
    struct AsyncCallback *m_AsyncCallback;
    struct Object *m_Result;
    int32_t m_ErrorCode;
    int32_t m_IntCompleted;
    bool m_EndCalled;
    bool m_UserEvent;
    struct Object *m_Event;
};

struct LazyAsyncResult {
    struct LazyAsyncResult__Class *klass;
    MonitorData *monitor;
    struct LazyAsyncResult__Fields fields;
};

struct LazyAsyncResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsCompleted;
    VirtualInvokeData get_AsyncWaitHandle;
    VirtualInvokeData get_AsyncState;
    VirtualInvokeData get_CompletedSynchronously;
    VirtualInvokeData Complete;
    VirtualInvokeData Cleanup;
};

struct LazyAsyncResult__StaticFields {
    struct LazyAsyncResult_ThreadContext *t_ThreadContext;
};

struct LazyAsyncResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LazyAsyncResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LazyAsyncResult__VTable vtable;
};

struct ManualResetEvent___VTable {
};

struct ManualResetEvent___StaticFields {
};

struct ManualResetEvent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ManualResetEvent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ManualResetEvent___VTable vtable;
};

struct BaseLoggingObject {
    struct BaseLoggingObject__Class *klass;
    MonitorData *monitor;
};

struct BaseLoggingObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData EnterFunc;
    VirtualInvokeData LeaveFunc;
    VirtualInvokeData DumpArrayToConsole;
    VirtualInvokeData PrintLine;
    VirtualInvokeData DumpArray;
    VirtualInvokeData DumpArrayToFile;
    VirtualInvokeData Flush;
    VirtualInvokeData Flush_1;
    VirtualInvokeData LoggingMonitorTick;
    VirtualInvokeData Dump;
    VirtualInvokeData Dump_1;
    VirtualInvokeData Dump_2;
    VirtualInvokeData Dump_3;
};

struct BaseLoggingObject__StaticFields {
};

struct BaseLoggingObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseLoggingObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseLoggingObject__VTable vtable;
};

enum class ThreadKinds__Enum : int32_t {
    Unknown = 0x00000000,
    User = 0x00000001,
    System = 0x00000002,
    Sync = 0x00000004,
    Async = 0x00000008,
    Timer = 0x00000010,
    CompletionPort = 0x00000020,
    Worker = 0x00000040,
    Finalization = 0x00000080,
    Other = 0x00000100,
    OwnerMask = 0x00000003,
    SyncMask = 0x0000000c,
    SourceMask = 0x000001f0,
    SafeSources = 0x00000160,
    ThreadPool = 0x00000060,
};

struct ThreadKinds__Enum__Boxed {
    struct ThreadKinds__Enum__Class *klass;
    MonitorData *monitor;
    ThreadKinds__Enum value;
    
};

struct ThreadKinds__Enum__VTable {
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

struct ThreadKinds__Enum__StaticFields {
};

struct ThreadKinds__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadKinds__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadKinds__Enum__VTable vtable;
};

struct NetRes {
    struct NetRes__Class *klass;
    MonitorData *monitor;
};

struct NetRes__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NetRes__StaticFields {
};

struct NetRes__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetRes__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetRes__VTable vtable;
};

enum class FtpStatusCode__Enum : int32_t {
    Undefined = 0x00000000,
    RestartMarker = 0x0000006e,
    ServiceTemporarilyNotAvailable = 0x00000078,
    DataAlreadyOpen = 0x0000007d,
    OpeningData = 0x00000096,
    CommandOK = 0x000000c8,
    CommandExtraneous = 0x000000ca,
    DirectoryStatus = 0x000000d4,
    FileStatus = 0x000000d5,
    SystemType = 0x000000d7,
    SendUserCommand = 0x000000dc,
    ClosingControl = 0x000000dd,
    ClosingData = 0x000000e2,
    EnteringPassive = 0x000000e3,
    LoggedInProceed = 0x000000e6,
    ServerWantsSecureSession = 0x000000ea,
    FileActionOK = 0x000000fa,
    PathnameCreated = 0x00000101,
    SendPasswordCommand = 0x0000014b,
    NeedLoginAccount = 0x0000014c,
    FileCommandPending = 0x0000015e,
    ServiceNotAvailable = 0x000001a5,
    CantOpenData = 0x000001a9,
    ConnectionClosed = 0x000001aa,
    ActionNotTakenFileUnavailableOrBusy = 0x000001c2,
    ActionAbortedLocalProcessingError = 0x000001c3,
    ActionNotTakenInsufficientSpace = 0x000001c4,
    CommandSyntaxError = 0x000001f4,
    ArgumentSyntaxError = 0x000001f5,
    CommandNotImplemented = 0x000001f6,
    BadCommandSequence = 0x000001f7,
    NotLoggedIn = 0x00000212,
    AccountNeeded = 0x00000214,
    ActionNotTakenFileUnavailable = 0x00000226,
    ActionAbortedUnknownPageType = 0x00000227,
    FileActionAborted = 0x00000228,
    ActionNotTakenFilenameNotAllowed = 0x00000229,
};

struct FtpStatusCode__Enum__Boxed {
    struct FtpStatusCode__Enum__Class *klass;
    MonitorData *monitor;
    FtpStatusCode__Enum value;
    
};

}
