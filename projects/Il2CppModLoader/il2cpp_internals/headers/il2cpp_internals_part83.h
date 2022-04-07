namespace app {

struct __declspec(align(8)) NetConfig__Fields {
  bool ipv6Enabled;
  int32_t MaxResponseHeadersLength;
};
struct NetConfig {
  struct NetConfig__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetConfig__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetConfig__VTable vtable;
};

struct __declspec(align(8)) NtlmClient_1__Fields {
  struct IAuthenticationModule * authObject;
};
struct NtlmClient_1 {
  struct NtlmClient_1__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NtlmClient_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NtlmClient_1__VTable vtable;
};

struct ServicePointManager {
  struct ServicePointManager__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HybridDictionary__Fields {
  struct ListDictionary * list;
  struct Hashtable * hashtable;
  bool caseInsensitive;
};
struct HybridDictionary {
  struct HybridDictionary__Class *klass;
  struct MonitorData *monitor;
  struct HybridDictionary__Fields fields;
};
struct ICertificatePolicy {
  struct ICertificatePolicy__Class *klass;
  struct MonitorData *monitor;
};
enum SecurityProtocolType__Enum : int32_t {
  SecurityProtocolType__Enum_SystemDefault = 0,
  SecurityProtocolType__Enum_Ssl3 = 48,
  SecurityProtocolType__Enum_Tls = 192,
  SecurityProtocolType__Enum_Tls11 = 768,
  SecurityProtocolType__Enum_Tls12 = 3072,
};
struct SecurityProtocolType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SecurityProtocolType__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HybridDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HybridDictionary__VTable vtable;
};
struct ICertificatePolicy__VTable {
  VirtualInvokeData CheckValidationResult;
};
struct ICertificatePolicy__StaticFields {
};
struct ICertificatePolicy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICertificatePolicy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICertificatePolicy__VTable vtable;
};
struct ServicePointManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServicePointManager__StaticFields {
  struct HybridDictionary * servicePoints;
  struct ICertificatePolicy * policy;
  int32_t defaultConnectionLimit;
  int32_t maxServicePointIdleTime;
  int32_t maxServicePoints;
  int32_t dnsRefreshTimeout;
  bool _checkCRL;
  enum SecurityProtocolType__Enum _securityProtocol;
  bool expectContinue;
  bool useNagle;
  struct ServerCertValidationCallback * server_cert_cb;
  bool tcp_keepalive;
  int32_t tcp_keepalive_time;
  int32_t tcp_keepalive_interval;
};
struct ServicePointManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServicePointManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServicePointManager__VTable vtable;
};

enum EncryptionPolicy__Enum : int32_t {
  EncryptionPolicy__Enum_RequireEncryption = 0,
  EncryptionPolicy__Enum_AllowNoEncryption = 1,
  EncryptionPolicy__Enum_NoEncryption = 2,
};
struct EncryptionPolicy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EncryptionPolicy__Enum value;
};

struct __declspec(align(8)) ServicePointManager_SPKey__Fields {
  struct Uri * uri;
  struct Uri * proxy;
  bool use_connect;
};
struct ServicePointManager_SPKey {
  struct ServicePointManager_SPKey__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServicePointManager_SPKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServicePointManager_SPKey__VTable vtable;
};

struct Func_2_System_Net_SimpleAsyncResult_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Net_SimpleAsyncResult_Boolean_ {
  struct Func_2_System_Net_SimpleAsyncResult_Boolean___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Net_SimpleAsyncResult_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Net_SimpleAsyncResult_Boolean___VTable vtable;
};

struct __declspec(align(8)) SimpleAsyncResult_c_DisplayClass9_0__Fields {
  struct AsyncCallback * cb;
  struct SimpleAsyncResult * __4__this;
};
struct SimpleAsyncResult_c_DisplayClass9_0 {
  struct SimpleAsyncResult_c_DisplayClass9_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleAsyncResult_c_DisplayClass9_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleAsyncResult_c_DisplayClass9_0__VTable vtable;
};

struct __declspec(align(8)) SimpleAsyncResult_c_DisplayClass11_0__Fields {
  struct Func_2_System_Net_SimpleAsyncResult_Boolean_ * func;
  struct Object * locker;
  struct SimpleAsyncCallback * callback;
};
struct SimpleAsyncResult_c_DisplayClass11_0 {
  struct SimpleAsyncResult_c_DisplayClass11_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleAsyncResult_c_DisplayClass11_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleAsyncResult_c_DisplayClass11_0__VTable vtable;
};

struct __declspec(align(8)) SocketPermission__Fields {
  struct ArrayList * m_acceptList;
  struct ArrayList * m_connectList;
  bool m_noRestriction;
};
struct SocketPermission {
  struct SocketPermission__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SocketPermission__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SocketPermission__VTable vtable;
};

struct SocketPermissionAttribute__Fields {
  struct CodeAccessSecurityAttribute__Fields _;
  struct String * m_access;
  struct String * m_host;
  struct String * m_port;
  struct String * m_transport;
};
struct SocketPermissionAttribute {
  struct SocketPermissionAttribute__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SocketPermissionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SocketPermissionAttribute__VTable vtable;
};

struct __declspec(align(8)) WebConnectionStream_c_DisplayClass75_0__Fields {
  struct WebConnectionStream * __4__this;
  bool setInternalLength;
};
struct WebConnectionStream_c_DisplayClass75_0 {
  struct WebConnectionStream_c_DisplayClass75_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebConnectionStream_c_DisplayClass75_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebConnectionStream_c_DisplayClass75_0__VTable vtable;
};

struct __declspec(align(8)) WebConnectionStream_c_DisplayClass76_0__Fields {
  struct WebConnectionStream * __4__this;
  struct SimpleAsyncResult * result;
};
struct WebConnectionStream_c_DisplayClass76_0 {
  struct WebConnectionStream_c_DisplayClass76_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebConnectionStream_c_DisplayClass76_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebConnectionStream_c_DisplayClass76_0__VTable vtable;
};

struct __declspec(align(8)) WebConnectionStream_c_DisplayClass80_0__Fields {
  struct SimpleAsyncResult * result;
  struct WebConnectionStream * __4__this;
  int32_t length;
  struct Byte__Array * bytes;
  struct AsyncCallback * __9__1;
};
struct WebConnectionStream_c_DisplayClass80_0 {
  struct WebConnectionStream_c_DisplayClass80_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebConnectionStream_c_DisplayClass80_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebConnectionStream_c_DisplayClass80_0__VTable vtable;
};

struct __declspec(align(8)) MailAddress__Fields {
  struct String * address;
  struct String * displayName;
  struct String * host;
  struct String * user;
  struct String * to_string;
};
struct MailAddress {
  struct MailAddress__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MailAddress__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MailAddress__VTable vtable;
};

struct SocketException__Fields {
  struct Win32Exception__Fields _;
  struct EndPoint * m_EndPoint;
};
struct SocketException {
  struct SocketException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SocketException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SocketException__VTable vtable;
};

struct __declspec(align(8)) LingerOption__Fields {
  bool enabled;
  int32_t lingerTime;
};
struct LingerOption {
  struct LingerOption__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LingerOption__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LingerOption__VTable vtable;
};

enum IOControlCode__Enum : int64_t {
  IOControlCode__Enum_AsyncIO = 2147772029,
  IOControlCode__Enum_NonBlockingIO = 2147772030,
  IOControlCode__Enum_DataToRead = 1074030207,
  IOControlCode__Enum_OobDataRead = 1074033415,
  IOControlCode__Enum_AssociateHandle = 2281701377,
  IOControlCode__Enum_EnableCircularQueuing = 671088642,
  IOControlCode__Enum_Flush = 671088644,
  IOControlCode__Enum_GetBroadcastAddress = 1207959557,
  IOControlCode__Enum_GetExtensionFunctionPointer = 3355443206,
  IOControlCode__Enum_GetQos = 3355443207,
  IOControlCode__Enum_GetGroupQos = 3355443208,
  IOControlCode__Enum_MultipointLoopback = 2281701385,
  IOControlCode__Enum_MulticastScope = 2281701386,
  IOControlCode__Enum_SetQos = 2281701387,
  IOControlCode__Enum_SetGroupQos = 2281701388,
  IOControlCode__Enum_TranslateHandle = 3355443213,
  IOControlCode__Enum_RoutingInterfaceQuery = 3355443220,
  IOControlCode__Enum_RoutingInterfaceChange = 2281701397,
  IOControlCode__Enum_AddressListQuery = 1207959574,
  IOControlCode__Enum_AddressListChange = 671088663,
  IOControlCode__Enum_QueryTargetPnpHandle = 1207959576,
  IOControlCode__Enum_NamespaceChange = 2281701401,
  IOControlCode__Enum_AddressListSort = 3355443225,
  IOControlCode__Enum_ReceiveAll = 2550136833,
  IOControlCode__Enum_ReceiveAllMulticast = 2550136834,
  IOControlCode__Enum_ReceiveAllIgmpMulticast = 2550136835,
  IOControlCode__Enum_KeepAliveValues = 2550136836,
  IOControlCode__Enum_AbsorbRouterAlert = 2550136837,
  IOControlCode__Enum_UnicastInterface = 2550136838,
  IOControlCode__Enum_LimitBroadcasts = 2550136839,
  IOControlCode__Enum_BindToInterface = 2550136840,
  IOControlCode__Enum_MulticastInterface = 2550136841,
  IOControlCode__Enum_AddMulticastGroupOnInterface = 2550136842,
  IOControlCode__Enum_DeleteMulticastGroupFromInterface = 2550136843,
};
struct IOControlCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum IOControlCode__Enum value;
};

enum IPProtectionLevel__Enum : int32_t {
  IPProtectionLevel__Enum_Unspecified = -1,
  IPProtectionLevel__Enum_Unrestricted = 10,
  IPProtectionLevel__Enum_EdgeRestricted = 20,
  IPProtectionLevel__Enum_Restricted = 30,
};
struct IPProtectionLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum IPProtectionLevel__Enum value;
};

enum SocketOptionLevel__Enum : int32_t {
  SocketOptionLevel__Enum_Socket = 65535,
  SocketOptionLevel__Enum_IP = 0,
  SocketOptionLevel__Enum_IPv6 = 41,
  SocketOptionLevel__Enum_Tcp = 6,
  SocketOptionLevel__Enum_Udp = 17,
};
struct SocketOptionLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SocketOptionLevel__Enum value;
};
enum SocketOptionName__Enum : int32_t {
  SocketOptionName__Enum_Debug = 1,
  SocketOptionName__Enum_AcceptConnection = 2,
  SocketOptionName__Enum_ReuseAddress = 4,
  SocketOptionName__Enum_KeepAlive = 8,
  SocketOptionName__Enum_DontRoute = 16,
  SocketOptionName__Enum_Broadcast = 32,
  SocketOptionName__Enum_UseLoopback = 64,
  SocketOptionName__Enum_Linger = 128,
  SocketOptionName__Enum_OutOfBandInline = 256,
  SocketOptionName__Enum_DontLinger = -129,
  SocketOptionName__Enum_ExclusiveAddressUse = -5,
  SocketOptionName__Enum_SendBuffer = 4097,
  SocketOptionName__Enum_ReceiveBuffer = 4098,
  SocketOptionName__Enum_SendLowWater = 4099,
  SocketOptionName__Enum_ReceiveLowWater = 4100,
  SocketOptionName__Enum_SendTimeout = 4101,
  SocketOptionName__Enum_ReceiveTimeout = 4102,
  SocketOptionName__Enum_Error = 4103,
  SocketOptionName__Enum_Type = 4104,
  SocketOptionName__Enum_ReuseUnicastPort = 12295,
  SocketOptionName__Enum_MaxConnections = 2147483647,
  SocketOptionName__Enum_IPOptions = 1,
  SocketOptionName__Enum_HeaderIncluded = 2,
  SocketOptionName__Enum_TypeOfService = 3,
  SocketOptionName__Enum_IpTimeToLive = 4,
  SocketOptionName__Enum_MulticastInterface = 9,
  SocketOptionName__Enum_MulticastTimeToLive = 10,
  SocketOptionName__Enum_MulticastLoopback = 11,
  SocketOptionName__Enum_AddMembership = 12,
  SocketOptionName__Enum_DropMembership = 13,
  SocketOptionName__Enum_DontFragment = 14,
  SocketOptionName__Enum_AddSourceMembership = 15,
  SocketOptionName__Enum_DropSourceMembership = 16,
  SocketOptionName__Enum_BlockSource = 17,
  SocketOptionName__Enum_UnblockSource = 18,
  SocketOptionName__Enum_PacketInformation = 19,
  SocketOptionName__Enum_HopLimit = 21,
  SocketOptionName__Enum_IPProtectionLevel = 23,
  SocketOptionName__Enum_IPv6Only = 27,
  SocketOptionName__Enum_NoDelay = 1,
  SocketOptionName__Enum_BsdUrgent = 2,
  SocketOptionName__Enum_Expedited = 2,
  SocketOptionName__Enum_NoChecksum = 1,
  SocketOptionName__Enum_ChecksumCoverage = 20,
  SocketOptionName__Enum_UpdateAcceptContext = 28683,
  SocketOptionName__Enum_UpdateConnectContext = 28688,
};
struct SocketOptionName__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SocketOptionName__Enum value;
};

struct Socket_WSABUF {
  int32_t len;
  void * buf;
};
struct Socket_WSABUF__Boxed {
  struct Socket_WSABUF__Class *klass;
  struct MonitorData *monitor;
  struct Socket_WSABUF fields;
};
struct Socket_WSABUF__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Socket_WSABUF__StaticFields {
};
struct Socket_WSABUF__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Socket_WSABUF__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Socket_WSABUF__VTable vtable;
};

enum NetworkInterfaceComponent__Enum : int32_t {
  NetworkInterfaceComponent__Enum_IPv4 = 0,
  NetworkInterfaceComponent__Enum_IPv6 = 1,
};
struct NetworkInterfaceComponent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NetworkInterfaceComponent__Enum value;
};

struct Socket_c {
  struct Socket_c__Class *klass;
  struct MonitorData *monitor;
};
struct Socket_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Socket_c__StaticFields {
  struct Socket_c * __9;
  struct IOAsyncCallback * __9__241_0;
};
struct Socket_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Socket_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Socket_c__VTable vtable;
};

struct __declspec(align(8)) Socket_c_DisplayClass242_0__Fields {
  int32_t sent_so_far;
};
struct Socket_c_DisplayClass242_0 {
  struct Socket_c_DisplayClass242_0__Class *klass;
  struct MonitorData *monitor;
  struct Socket_c_DisplayClass242_0__Fields fields;
};
struct Socket_c_DisplayClass242_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Socket_c_DisplayClass242_0__StaticFields {
};
struct Socket_c_DisplayClass242_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Socket_c_DisplayClass242_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Socket_c_DisplayClass242_0__VTable vtable;
};

struct __declspec(align(8)) Socket_c_DisplayClass298_0__Fields {
  struct Socket * __4__this;
  struct IOSelectorJob * job;
  void * handle;
};
struct Socket_c_DisplayClass298_0 {
  struct Socket_c_DisplayClass298_0__Class *klass;
  struct MonitorData *monitor;
  struct Socket_c_DisplayClass298_0__Fields fields;
};
struct Socket_c_DisplayClass298_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Socket_c_DisplayClass298_0__StaticFields {
};
struct Socket_c_DisplayClass298_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Socket_c_DisplayClass298_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Socket_c_DisplayClass298_0__VTable vtable;
};

struct __declspec(align(8)) TcpClient__Fields {
  struct Socket * m_ClientSocket;
  bool m_Active;
  struct NetworkStream * m_DataStream;
  enum AddressFamily__Enum m_Family;
  bool m_CleanedUp;
};
struct TcpClient {
  struct TcpClient__Class *klass;
  struct MonitorData *monitor;
  struct TcpClient__Fields fields;
};
struct TcpClient__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
};
struct TcpClient__StaticFields {
};
struct TcpClient__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TcpClient__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TcpClient__VTable vtable;
};

struct __declspec(align(8)) TcpListener__Fields {
  struct IPEndPoint * m_ServerSocketEP;
  struct Socket * m_ServerSocket;
  bool m_Active;
  bool m_ExclusiveAddressUse;
};
struct TcpListener {
  struct TcpListener__Class *klass;
  struct MonitorData *monitor;
  struct TcpListener__Fields fields;
};
struct TcpListener__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TcpListener__StaticFields {
};
struct TcpListener__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TcpListener__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TcpListener__VTable vtable;
};

struct SocketAsyncResult_c {
  struct SocketAsyncResult_c__Class *klass;
  struct MonitorData *monitor;
};
struct SocketAsyncResult_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SocketAsyncResult_c__StaticFields {
  struct SocketAsyncResult_c * __9;
  struct WaitCallback * __9__27_0;
};
struct SocketAsyncResult_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SocketAsyncResult_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SocketAsyncResult_c__VTable vtable;
};

struct IPGlobalProperties {
  struct IPGlobalProperties__Class *klass;
  struct MonitorData *monitor;
};
struct CommonUnixIPGlobalProperties {
  struct CommonUnixIPGlobalProperties__Class *klass;
  struct MonitorData *monitor;
};
struct UnixIPGlobalProperties {
  struct UnixIPGlobalProperties__Class *klass;
  struct MonitorData *monitor;
};
struct IPEndPoint__Array {
  struct IPEndPoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IPEndPoint * vector[32];
};
struct CommonUnixIPGlobalProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_DomainName;
};
struct CommonUnixIPGlobalProperties__StaticFields {
};
struct CommonUnixIPGlobalProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CommonUnixIPGlobalProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CommonUnixIPGlobalProperties__VTable vtable;
};
struct UnixIPGlobalProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetActiveTcpListeners;
  VirtualInvokeData get_DomainName;
};
struct UnixIPGlobalProperties__StaticFields {
};
struct UnixIPGlobalProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnixIPGlobalProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnixIPGlobalProperties__VTable vtable;
};
struct IPGlobalProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct IPGlobalProperties__StaticFields {
  bool _PlatformNeedsLibCWorkaround_k__BackingField;
};
struct IPGlobalProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPGlobalProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPGlobalProperties__VTable vtable;
};

struct NetworkInformationException__Fields {
  struct Win32Exception__Fields _;
};
struct NetworkInformationException {
  struct NetworkInformationException__Class *klass;
  struct MonitorData *monitor;
  struct NetworkInformationException__Fields fields;
};
struct NetworkInformationException__VTable {
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
struct NetworkInformationException__StaticFields {
};
struct NetworkInformationException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetworkInformationException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetworkInformationException__VTable vtable;
};

struct UnixNoLibCIPGlobalProperties {
  struct UnixNoLibCIPGlobalProperties__Class *klass;
  struct MonitorData *monitor;
};
struct UnixNoLibCIPGlobalProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetActiveTcpListeners;
  VirtualInvokeData get_DomainName;
};
struct UnixNoLibCIPGlobalProperties__StaticFields {
};
struct UnixNoLibCIPGlobalProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnixNoLibCIPGlobalProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnixNoLibCIPGlobalProperties__VTable vtable;
};

struct __declspec(align(8)) MibIPGlobalProperties__Fields {
  struct String * StatisticsFile;
  struct String * StatisticsFileIPv6;
  struct String * TcpFile;
  struct String * Tcp6File;
  struct String * UdpFile;
  struct String * Udp6File;
};
struct MibIPGlobalProperties {
  struct MibIPGlobalProperties__Class *klass;
  struct MonitorData *monitor;
  struct MibIPGlobalProperties__Fields fields;
};
struct MibIPGlobalProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetActiveTcpListeners;
  VirtualInvokeData get_DomainName;
};
struct MibIPGlobalProperties__StaticFields {
  struct Char__Array * wsChars;
};}