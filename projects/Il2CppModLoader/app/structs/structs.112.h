namespace app {
    struct ListenerAsyncResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsCompleted;
        VirtualInvokeData get_AsyncWaitHandle;
        VirtualInvokeData get_AsyncState;
        VirtualInvokeData get_CompletedSynchronously;
    };

    struct ListenerAsyncResult__StaticFields {
        struct WaitCallback* InvokeCB;
    };

    struct ListenerAsyncResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListenerAsyncResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListenerAsyncResult__VTable vtable;
    };

    struct __declspec(align(8)) MonoChunkStream_Chunk__Fields {
        struct Byte__Array* Bytes;
        int32_t Offset;
    };

    struct MonoChunkStream_Chunk {
        struct MonoChunkStream_Chunk__Class* klass;
        MonitorData* monitor;
        struct MonoChunkStream_Chunk__Fields fields;
    };

    struct MonoChunkStream_Chunk__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MonoChunkStream_Chunk__StaticFields {
    };

    struct MonoChunkStream_Chunk__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MonoChunkStream_Chunk__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MonoChunkStream_Chunk__VTable vtable;
    };

    struct MonoHttpDate {
        struct MonoHttpDate__Class* klass;
        MonitorData* monitor;
    };

    struct MonoHttpDate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MonoHttpDate__StaticFields {
        struct String* rfc1123_date;
        struct String* rfc850_date;
        struct String* asctime_date;
        struct String__Array* formats;
    };

    struct MonoHttpDate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MonoHttpDate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MonoHttpDate__VTable vtable;
    };

    struct __declspec(align(8)) NetConfig__Fields {
        bool ipv6Enabled;
        int32_t MaxResponseHeadersLength;
    };

    struct NetConfig {
        struct NetConfig__Class* klass;
        MonitorData* monitor;
        struct NetConfig__Fields fields;
    };

    struct NetConfig__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ICloneable_Clone;
    };

    struct NetConfig__StaticFields {
    };

    struct NetConfig__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NetConfig__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NetConfig__VTable vtable;
    };

    struct __declspec(align(8)) NtlmClient_1__Fields {
        struct IAuthenticationModule* authObject;
    };

    struct NtlmClient_1 {
        struct NtlmClient_1__Class* klass;
        MonitorData* monitor;
        struct NtlmClient_1__Fields fields;
    };

    struct NtlmClient_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Authenticate;
        VirtualInvokeData PreAuthenticate;
        VirtualInvokeData get_CanPreAuthenticate;
        VirtualInvokeData get_AuthenticationType;
    };

    struct NtlmClient_1__StaticFields {
    };

    struct NtlmClient_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NtlmClient_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NtlmClient_1__VTable vtable;
    };

    struct ServicePointManager {
        struct ServicePointManager__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HybridDictionary__Fields {
        struct ListDictionary* list;
        struct Hashtable* hashtable;
        bool caseInsensitive;
    };

    struct HybridDictionary {
        struct HybridDictionary__Class* klass;
        MonitorData* monitor;
        struct HybridDictionary__Fields fields;
    };

    struct ICertificatePolicy {
        struct ICertificatePolicy__Class* klass;
        MonitorData* monitor;
    };

    enum class SecurityProtocolType__Enum : int32_t {
        SystemDefault = 0x00000000,
        Ssl3 = 0x00000030,
        Tls = 0x000000c0,
        Tls11 = 0x00000300,
        Tls12 = 0x00000c00,
    };

    struct SecurityProtocolType__Enum__Boxed {
        struct SecurityProtocolType__Enum__Class* klass;
        MonitorData* monitor;
        SecurityProtocolType__Enum value;
    };

    struct HybridDictionary__VTable {
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

    struct HybridDictionary__StaticFields {
    };

    struct HybridDictionary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HybridDictionary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HybridDictionary__VTable vtable;
    };

    struct ICertificatePolicy__VTable {
        VirtualInvokeData CheckValidationResult;
    };

    struct ICertificatePolicy__StaticFields {
    };

    struct ICertificatePolicy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICertificatePolicy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICertificatePolicy__VTable vtable;
    };

    struct SecurityProtocolType__Enum__VTable {
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

    struct SecurityProtocolType__Enum__StaticFields {
    };

    struct SecurityProtocolType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SecurityProtocolType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SecurityProtocolType__Enum__VTable vtable;
    };

    struct ServicePointManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ServicePointManager__StaticFields {
        struct HybridDictionary* servicePoints;
        struct ICertificatePolicy* policy;
        int32_t defaultConnectionLimit;
        int32_t maxServicePointIdleTime;
        int32_t maxServicePoints;
        int32_t dnsRefreshTimeout;
        bool _checkCRL;
        SecurityProtocolType__Enum _securityProtocol;

        bool expectContinue;
        bool useNagle;
        struct ServerCertValidationCallback* server_cert_cb;
        bool tcp_keepalive;
        int32_t tcp_keepalive_time;
        int32_t tcp_keepalive_interval;
    };

    struct ServicePointManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServicePointManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServicePointManager__VTable vtable;
    };

    enum class EncryptionPolicy__Enum : int32_t {
        RequireEncryption = 0x00000000,
        AllowNoEncryption = 0x00000001,
        NoEncryption = 0x00000002,
    };

    struct EncryptionPolicy__Enum__Boxed {
        struct EncryptionPolicy__Enum__Class* klass;
        MonitorData* monitor;
        EncryptionPolicy__Enum value;
    };

    struct EncryptionPolicy__Enum__VTable {
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

    struct EncryptionPolicy__Enum__StaticFields {
    };

    struct EncryptionPolicy__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncryptionPolicy__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncryptionPolicy__Enum__VTable vtable;
    };

    struct __declspec(align(8)) ServicePointManager_SPKey__Fields {
        struct Uri* uri;
        struct Uri* proxy;
        bool use_connect;
    };

    struct ServicePointManager_SPKey {
        struct ServicePointManager_SPKey__Class* klass;
        MonitorData* monitor;
        struct ServicePointManager_SPKey__Fields fields;
    };

    struct ServicePointManager_SPKey__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ServicePointManager_SPKey__StaticFields {
    };

    struct ServicePointManager_SPKey__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServicePointManager_SPKey__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServicePointManager_SPKey__VTable vtable;
    };

    struct Func_2_System_Net_SimpleAsyncResult_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Net_SimpleAsyncResult_Boolean_ {
        struct Func_2_System_Net_SimpleAsyncResult_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Net_SimpleAsyncResult_Boolean___Fields fields;
    };

    struct Func_2_System_Net_SimpleAsyncResult_Boolean___VTable {
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

    struct Func_2_System_Net_SimpleAsyncResult_Boolean___StaticFields {
    };

    struct Func_2_System_Net_SimpleAsyncResult_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Net_SimpleAsyncResult_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Net_SimpleAsyncResult_Boolean___VTable vtable;
    };

    struct __declspec(align(8)) SimpleAsyncResult_c_DisplayClass9_0__Fields {
        struct AsyncCallback* cb;
        struct SimpleAsyncResult* __4__this;
    };

    struct SimpleAsyncResult_c_DisplayClass9_0 {
        struct SimpleAsyncResult_c_DisplayClass9_0__Class* klass;
        MonitorData* monitor;
        struct SimpleAsyncResult_c_DisplayClass9_0__Fields fields;
    };

    struct SimpleAsyncResult_c_DisplayClass9_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleAsyncResult_c_DisplayClass9_0__StaticFields {
    };

    struct SimpleAsyncResult_c_DisplayClass9_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleAsyncResult_c_DisplayClass9_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleAsyncResult_c_DisplayClass9_0__VTable vtable;
    };

    struct __declspec(align(8)) SimpleAsyncResult_c_DisplayClass11_0__Fields {
        struct Func_2_System_Net_SimpleAsyncResult_Boolean_* func;
        struct Object* locker;
        struct SimpleAsyncCallback* callback;
    };

    struct SimpleAsyncResult_c_DisplayClass11_0 {
        struct SimpleAsyncResult_c_DisplayClass11_0__Class* klass;
        MonitorData* monitor;
        struct SimpleAsyncResult_c_DisplayClass11_0__Fields fields;
    };

    struct SimpleAsyncResult_c_DisplayClass11_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleAsyncResult_c_DisplayClass11_0__StaticFields {
    };

    struct SimpleAsyncResult_c_DisplayClass11_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleAsyncResult_c_DisplayClass11_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleAsyncResult_c_DisplayClass11_0__VTable vtable;
    };

    struct __declspec(align(8)) SocketPermission__Fields {
        struct ArrayList* m_acceptList;
        struct ArrayList* m_connectList;
        bool m_noRestriction;
    };

    struct SocketPermission {
        struct SocketPermission__Class* klass;
        MonitorData* monitor;
        struct SocketPermission__Fields fields;
    };

    struct SocketPermission__VTable {
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

    struct SocketPermission__StaticFields {
    };

    struct SocketPermission__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketPermission__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketPermission__VTable vtable;
    };

    struct SocketPermissionAttribute__Fields {
        struct CodeAccessSecurityAttribute__Fields _;
        struct String* m_access;
        struct String* m_host;
        struct String* m_port;
        struct String* m_transport;
    };

    struct SocketPermissionAttribute {
        struct SocketPermissionAttribute__Class* klass;
        MonitorData* monitor;
        struct SocketPermissionAttribute__Fields fields;
    };

    struct SocketPermissionAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
        VirtualInvokeData CreatePermission;
    };

    struct SocketPermissionAttribute__StaticFields {
    };

    struct SocketPermissionAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketPermissionAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketPermissionAttribute__VTable vtable;
    };

    struct __declspec(align(8)) WebConnectionStream_c_DisplayClass75_0__Fields {
        struct WebConnectionStream* __4__this;
        bool setInternalLength;
    };

    struct WebConnectionStream_c_DisplayClass75_0 {
        struct WebConnectionStream_c_DisplayClass75_0__Class* klass;
        MonitorData* monitor;
        struct WebConnectionStream_c_DisplayClass75_0__Fields fields;
    };

    struct WebConnectionStream_c_DisplayClass75_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WebConnectionStream_c_DisplayClass75_0__StaticFields {
    };

    struct WebConnectionStream_c_DisplayClass75_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebConnectionStream_c_DisplayClass75_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebConnectionStream_c_DisplayClass75_0__VTable vtable;
    };

    struct __declspec(align(8)) WebConnectionStream_c_DisplayClass76_0__Fields {
        struct WebConnectionStream* __4__this;
        struct SimpleAsyncResult* result;
    };

    struct WebConnectionStream_c_DisplayClass76_0 {
        struct WebConnectionStream_c_DisplayClass76_0__Class* klass;
        MonitorData* monitor;
        struct WebConnectionStream_c_DisplayClass76_0__Fields fields;
    };

    struct WebConnectionStream_c_DisplayClass76_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WebConnectionStream_c_DisplayClass76_0__StaticFields {
    };

    struct WebConnectionStream_c_DisplayClass76_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebConnectionStream_c_DisplayClass76_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebConnectionStream_c_DisplayClass76_0__VTable vtable;
    };

    struct __declspec(align(8)) WebConnectionStream_c_DisplayClass80_0__Fields {
        struct SimpleAsyncResult* result;
        struct WebConnectionStream* __4__this;
        int32_t length;
        struct Byte__Array* bytes;
        struct AsyncCallback* __9__1;
    };

    struct WebConnectionStream_c_DisplayClass80_0 {
        struct WebConnectionStream_c_DisplayClass80_0__Class* klass;
        MonitorData* monitor;
        struct WebConnectionStream_c_DisplayClass80_0__Fields fields;
    };

    struct WebConnectionStream_c_DisplayClass80_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WebConnectionStream_c_DisplayClass80_0__StaticFields {
    };

    struct WebConnectionStream_c_DisplayClass80_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebConnectionStream_c_DisplayClass80_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebConnectionStream_c_DisplayClass80_0__VTable vtable;
    };

    struct __declspec(align(8)) MailAddress__Fields {
        struct String* address;
        struct String* displayName;
        struct String* host;
        struct String* user;
        struct String* to_string;
    };

    struct MailAddress {
        struct MailAddress__Class* klass;
        MonitorData* monitor;
        struct MailAddress__Fields fields;
    };

    struct MailAddress__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MailAddress__StaticFields {
    };

    struct MailAddress__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MailAddress__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MailAddress__VTable vtable;
    };

    struct SocketException__Fields {
        struct Win32Exception__Fields _;
        struct EndPoint* m_EndPoint;
    };

    struct SocketException {
        struct SocketException__Class* klass;
        MonitorData* monitor;
        struct SocketException__Fields fields;
    };

    struct SocketException__VTable {
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

    struct SocketException__StaticFields {
    };

    struct SocketException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketException__VTable vtable;
    };

    struct __declspec(align(8)) LingerOption__Fields {
        bool enabled;
        int32_t lingerTime;
    };

    struct LingerOption {
        struct LingerOption__Class* klass;
        MonitorData* monitor;
        struct LingerOption__Fields fields;
    };

    struct LingerOption__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LingerOption__StaticFields {
    };

    struct LingerOption__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LingerOption__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LingerOption__VTable vtable;
    };

    enum class IOControlCode__Enum : int64_t {
        AsyncIO = 0x000000008004667d,
        NonBlockingIO = 0x000000008004667e,
        DataToRead = 0x000000004004667f,
        OobDataRead = 0x0000000040047307,
        AssociateHandle = 0x0000000088000001,
        EnableCircularQueuing = 0x0000000028000002,
        Flush = 0x0000000028000004,
        GetBroadcastAddress = 0x0000000048000005,
        GetExtensionFunctionPointer = 0x00000000c8000006,
        GetQos = 0x00000000c8000007,
        GetGroupQos = 0x00000000c8000008,
        MultipointLoopback = 0x0000000088000009,
        MulticastScope = 0x000000008800000a,
        SetQos = 0x000000008800000b,
        SetGroupQos = 0x000000008800000c,
        TranslateHandle = 0x00000000c800000d,
        RoutingInterfaceQuery = 0x00000000c8000014,
        RoutingInterfaceChange = 0x0000000088000015,
        AddressListQuery = 0x0000000048000016,
        AddressListChange = 0x0000000028000017,
        QueryTargetPnpHandle = 0x0000000048000018,
        NamespaceChange = 0x0000000088000019,
        AddressListSort = 0x00000000c8000019,
        ReceiveAll = 0x0000000098000001,
        ReceiveAllMulticast = 0x0000000098000002,
        ReceiveAllIgmpMulticast = 0x0000000098000003,
        KeepAliveValues = 0x0000000098000004,
        AbsorbRouterAlert = 0x0000000098000005,
        UnicastInterface = 0x0000000098000006,
        LimitBroadcasts = 0x0000000098000007,
        BindToInterface = 0x0000000098000008,
        MulticastInterface = 0x0000000098000009,
        AddMulticastGroupOnInterface = 0x000000009800000a,
        DeleteMulticastGroupFromInterface = 0x000000009800000b,
    };

    struct IOControlCode__Enum__Boxed {
        struct IOControlCode__Enum__Class* klass;
        MonitorData* monitor;
        IOControlCode__Enum value;
    };

    struct IOControlCode__Enum__VTable {
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

    struct IOControlCode__Enum__StaticFields {
    };

    struct IOControlCode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IOControlCode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IOControlCode__Enum__VTable vtable;
    };

    enum class IPProtectionLevel__Enum : int32_t {
        Unspecified = -1,
        Unrestricted = 0x0000000a,
        EdgeRestricted = 0x00000014,
        Restricted = 0x0000001e,
    };

    struct IPProtectionLevel__Enum__Boxed {
        struct IPProtectionLevel__Enum__Class* klass;
        MonitorData* monitor;
        IPProtectionLevel__Enum value;
    };

    struct IPProtectionLevel__Enum__VTable {
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

    struct IPProtectionLevel__Enum__StaticFields {
    };

    struct IPProtectionLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPProtectionLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPProtectionLevel__Enum__VTable vtable;
    };

    enum class SocketOptionLevel__Enum : int32_t {
        Socket = 0x0000ffff,
        IP = 0x00000000,
        IPv6 = 0x00000029,
        Tcp = 0x00000006,
        Udp = 0x00000011,
    };

    struct SocketOptionLevel__Enum__Boxed {
        struct SocketOptionLevel__Enum__Class* klass;
        MonitorData* monitor;
        SocketOptionLevel__Enum value;
    };

    enum class SocketOptionName__Enum : int32_t {
        Debug = 0x00000001,
        AcceptConnection = 0x00000002,
        ReuseAddress = 0x00000004,
        KeepAlive = 0x00000008,
        DontRoute = 0x00000010,
        Broadcast = 0x00000020,
        UseLoopback = 0x00000040,
        Linger = 0x00000080,
        OutOfBandInline = 0x00000100,
        DontLinger = -129,
        ExclusiveAddressUse = -5,
        SendBuffer = 0x00001001,
        ReceiveBuffer = 0x00001002,
        SendLowWater = 0x00001003,
        ReceiveLowWater = 0x00001004,
        SendTimeout = 0x00001005,
        ReceiveTimeout = 0x00001006,
        Error = 0x00001007,
        Type = 0x00001008,
        ReuseUnicastPort = 0x00003007,
        MaxConnections = 0x7fffffff,
        IPOptions = 0x00000001,
        HeaderIncluded = 0x00000002,
        TypeOfService = 0x00000003,
        IpTimeToLive = 0x00000004,
        MulticastInterface = 0x00000009,
        MulticastTimeToLive = 0x0000000a,
        MulticastLoopback = 0x0000000b,
        AddMembership = 0x0000000c,
        DropMembership = 0x0000000d,
        DontFragment = 0x0000000e,
        AddSourceMembership = 0x0000000f,
        DropSourceMembership = 0x00000010,
        BlockSource = 0x00000011,
        UnblockSource = 0x00000012,
        PacketInformation = 0x00000013,
        HopLimit = 0x00000015,
        IPProtectionLevel = 0x00000017,
        IPv6Only = 0x0000001b,
        NoDelay = 0x00000001,
        BsdUrgent = 0x00000002,
        Expedited = 0x00000002,
        NoChecksum = 0x00000001,
        ChecksumCoverage = 0x00000014,
        UpdateAcceptContext = 0x0000700b,
        UpdateConnectContext = 0x00007010,
    };

    struct SocketOptionName__Enum__Boxed {
        struct SocketOptionName__Enum__Class* klass;
        MonitorData* monitor;
        SocketOptionName__Enum value;
    };

    struct SocketOptionLevel__Enum__VTable {
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

    struct SocketOptionLevel__Enum__StaticFields {
    };

    struct SocketOptionLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketOptionLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketOptionLevel__Enum__VTable vtable;
    };

} // namespace app
