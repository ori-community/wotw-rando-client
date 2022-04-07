namespace app {
struct MibIPGlobalProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MibIPGlobalProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MibIPGlobalProperties__VTable vtable;
};

struct __declspec(align(8)) List_1_System_String__1__Fields {
  struct String__Array__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_String__1 {
  struct List_1_System_String__1__Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_String__1__Fields fields;
};
struct String__Array__Array {
  struct String__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct String__Array * vector[32];
};
struct IEnumerator_1_System_String__1 {
  struct IEnumerator_1_System_String__1__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_String__1__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_String__1__StaticFields {
};
struct IEnumerator_1_System_String__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_String__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_String__1__VTable vtable;
};
struct List_1_System_String__1__VTable {
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
struct List_1_System_String__1__StaticFields {
  struct String__Array__Array * _emptyArray;
};
struct List_1_System_String__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_String__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_String__1__VTable vtable;
};

struct Win32IPGlobalProperties {
  struct Win32IPGlobalProperties__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___Fields {
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW_ {
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___Fields fields;
};
enum TcpState__Enum : int32_t {
  TcpState__Enum_Unknown = 0,
  TcpState__Enum_Closed = 1,
  TcpState__Enum_Listen = 2,
  TcpState__Enum_SynSent = 3,
  TcpState__Enum_SynReceived = 4,
  TcpState__Enum_Established = 5,
  TcpState__Enum_FinWait1 = 6,
  TcpState__Enum_FinWait2 = 7,
  TcpState__Enum_CloseWait = 8,
  TcpState__Enum_Closing = 9,
  TcpState__Enum_LastAck = 10,
  TcpState__Enum_TimeWait = 11,
  TcpState__Enum_DeleteTcb = 12,
};
struct TcpState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TcpState__Enum value;
};
struct __declspec(align(8)) Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields {
  enum TcpState__Enum State;
  uint32_t LocalAddr;
  uint32_t LocalPort;
  uint32_t RemoteAddr;
  uint32_t RemotePort;
};
struct Win32IPGlobalProperties_Win32_MIB_TCPROW {
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW__Class *klass;
  struct MonitorData *monitor;
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields fields;
};
struct Win32IPGlobalProperties_Win32_MIB_TCPROW__Array {
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW * vector[32];
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW_ {
  struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Fields {
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_ {
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Fields fields;
};
struct Win32IPGlobalProperties_Win32_IN6_ADDR {
  struct Byte__Array * Bytes;
};
struct Win32IPGlobalProperties_Win32_IN6_ADDR__Boxed {
  struct Win32IPGlobalProperties_Win32_IN6_ADDR__Class *klass;
  struct MonitorData *monitor;
  struct Win32IPGlobalProperties_Win32_IN6_ADDR fields;
};
struct __declspec(align(8)) Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Fields {
  enum TcpState__Enum State;
  struct Win32IPGlobalProperties_Win32_IN6_ADDR LocalAddr;
  uint32_t LocalScopeId;
  uint32_t LocalPort;
  struct Win32IPGlobalProperties_Win32_IN6_ADDR RemoteAddr;
  uint32_t RemoteScopeId;
  uint32_t RemotePort;
};
struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW {
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class *klass;
  struct MonitorData *monitor;
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Fields fields;
};
struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array {
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW * vector[32];
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_ {
  struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Class *klass;
  struct MonitorData *monitor;
};
struct Win32IPGlobalProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetActiveTcpListeners;
  VirtualInvokeData get_DomainName;
};
struct Win32IPGlobalProperties__StaticFields {
};
struct Win32IPGlobalProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32IPGlobalProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32IPGlobalProperties__VTable vtable;
};
struct Win32IPGlobalProperties_Win32_MIB_TCPROW__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Win32IPGlobalProperties_Win32_MIB_TCPROW__StaticFields {
};
struct Win32IPGlobalProperties_Win32_MIB_TCPROW__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW__VTable vtable;
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___StaticFields {
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___VTable vtable;
};
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___VTable {
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
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___StaticFields {
  struct Win32IPGlobalProperties_Win32_MIB_TCPROW__Array * _emptyArray;
};
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW___VTable vtable;
};
struct Win32IPGlobalProperties_Win32_IN6_ADDR__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Win32IPGlobalProperties_Win32_IN6_ADDR__StaticFields {
};
struct Win32IPGlobalProperties_Win32_IN6_ADDR__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32IPGlobalProperties_Win32_IN6_ADDR__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32IPGlobalProperties_Win32_IN6_ADDR__VTable vtable;
};
struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__StaticFields {
};
struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__VTable vtable;
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___StaticFields {
};
struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___VTable vtable;
};
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___VTable {
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
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___StaticFields {
  struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array * _emptyArray;
};
struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___VTable vtable;
};

struct Win32_IP_ADDR_STRING {
  void * Next;
  struct String * IpAddress;
  struct String * IpMask;
  uint32_t Context;
};
struct Win32_IP_ADDR_STRING__Boxed {
  struct Win32_IP_ADDR_STRING__Class *klass;
  struct MonitorData *monitor;
  struct Win32_IP_ADDR_STRING fields;
};
enum NetBiosNodeType__Enum : int32_t {
  NetBiosNodeType__Enum_Unknown = 0,
  NetBiosNodeType__Enum_Broadcast = 1,
  NetBiosNodeType__Enum_Peer2Peer = 2,
  NetBiosNodeType__Enum_Mixed = 4,
  NetBiosNodeType__Enum_Hybrid = 8,
};
struct NetBiosNodeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NetBiosNodeType__Enum value;
};
struct Win32_FIXED_INFO {
  struct String * HostName;
  struct String * DomainName;
  void * CurrentDnsServer;
  struct Win32_IP_ADDR_STRING DnsServerList;
  enum NetBiosNodeType__Enum NodeType;
  struct String * ScopeId;
  uint32_t EnableRouting;
  uint32_t EnableProxy;
  uint32_t EnableDns;
};
struct Win32_FIXED_INFO__Boxed {
  struct Win32_FIXED_INFO__Class *klass;
  struct MonitorData *monitor;
  struct Win32_FIXED_INFO fields;
};
struct Win32_IP_ADDR_STRING__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Win32_IP_ADDR_STRING__StaticFields {
};
struct Win32_IP_ADDR_STRING__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32_IP_ADDR_STRING__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32_IP_ADDR_STRING__VTable vtable;
};
struct Win32_FIXED_INFO__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Win32_FIXED_INFO__StaticFields {
};
struct Win32_FIXED_INFO__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32_FIXED_INFO__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32_FIXED_INFO__VTable vtable;
};

struct __declspec(align(8)) DefaultProxySectionInternal__Fields {
  struct IWebProxy * webProxy;
};
struct DefaultProxySectionInternal {
  struct DefaultProxySectionInternal__Class *klass;
  struct MonitorData *monitor;
  struct DefaultProxySectionInternal__Fields fields;
};
struct DefaultProxySectionInternal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DefaultProxySectionInternal__StaticFields {
  struct Object * classSyncObject;
};
struct DefaultProxySectionInternal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultProxySectionInternal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultProxySectionInternal__VTable vtable;
};

struct __declspec(align(8)) SettingsSectionInternal__Fields {
  bool HttpListenerUnescapeRequestUrl;
  enum IPProtectionLevel__Enum IPProtectionLevel;
  bool _UseNagleAlgorithm_k__BackingField;
  bool _Expect100Continue_k__BackingField;
  bool _CheckCertificateName_k__BackingField;
  int32_t _DnsRefreshTimeout_k__BackingField;
  bool _EnableDnsRoundRobin_k__BackingField;
  bool _CheckCertificateRevocationList_k__BackingField;
  enum EncryptionPolicy__Enum _EncryptionPolicy_k__BackingField;
};
struct SettingsSectionInternal {
  struct SettingsSectionInternal__Class *klass;
  struct MonitorData *monitor;
  struct SettingsSectionInternal__Fields fields;
};
struct SettingsSectionInternal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SettingsSectionInternal__StaticFields {
  struct SettingsSectionInternal * instance;
};
struct SettingsSectionInternal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SettingsSectionInternal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SettingsSectionInternal__VTable vtable;
};

struct __declspec(align(8)) RequestCachingSectionInternal__Fields {
  bool DisableAllCaching;
};
struct RequestCachingSectionInternal {
  struct RequestCachingSectionInternal__Class *klass;
  struct MonitorData *monitor;
  struct RequestCachingSectionInternal__Fields fields;
};
struct RequestCachingSectionInternal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RequestCachingSectionInternal__StaticFields {
};
struct RequestCachingSectionInternal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RequestCachingSectionInternal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RequestCachingSectionInternal__VTable vtable;
};

struct CaseSensitiveStringDictionary__Fields {
  struct StringDictionary__Fields _;
};
struct CaseSensitiveStringDictionary {
  struct CaseSensitiveStringDictionary__Class *klass;
  struct MonitorData *monitor;
  struct CaseSensitiveStringDictionary__Fields fields;
};
struct CaseSensitiveStringDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData Remove;
};
struct CaseSensitiveStringDictionary__StaticFields {
};
struct CaseSensitiveStringDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CaseSensitiveStringDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CaseSensitiveStringDictionary__VTable vtable;
};

struct __declspec(align(8)) ListDictionary_NodeEnumerator__Fields {
  struct ListDictionary * list;
  struct ListDictionary_DictionaryNode * current;
  int32_t version;
  bool start;
};
struct ListDictionary_NodeEnumerator {
  struct ListDictionary_NodeEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct ListDictionary_NodeEnumerator__Fields fields;
};
struct ListDictionary_NodeEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Key;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Entry;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct ListDictionary_NodeEnumerator__StaticFields {
};
struct ListDictionary_NodeEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListDictionary_NodeEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListDictionary_NodeEnumerator__VTable vtable;
};

struct __declspec(align(8)) ListDictionary_NodeKeyValueCollection__Fields {
  struct ListDictionary * list;
  bool isKeys;
};
struct ListDictionary_NodeKeyValueCollection {
  struct ListDictionary_NodeKeyValueCollection__Class *klass;
  struct MonitorData *monitor;
  struct ListDictionary_NodeKeyValueCollection__Fields fields;
};
struct ListDictionary_NodeKeyValueCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData System_Collections_ICollection_get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct ListDictionary_NodeKeyValueCollection__StaticFields {
};
struct ListDictionary_NodeKeyValueCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListDictionary_NodeKeyValueCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListDictionary_NodeKeyValueCollection__VTable vtable;
};

struct __declspec(align(8)) ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Fields {
  struct ListDictionary * list;
  struct ListDictionary_DictionaryNode * current;
  int32_t version;
  bool isKeys;
  bool start;
};
struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator {
  struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Fields fields;
};
struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__StaticFields {
};
struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__VTable vtable;
};

struct __declspec(align(8)) NameObjectCollectionBase_NameObjectKeysEnumerator__Fields {
  int32_t _pos;
  struct NameObjectCollectionBase * _coll;
  int32_t _version;
};
struct NameObjectCollectionBase_NameObjectKeysEnumerator {
  struct NameObjectCollectionBase_NameObjectKeysEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct NameObjectCollectionBase_NameObjectKeysEnumerator__Fields fields;
};
struct NameObjectCollectionBase_NameObjectKeysEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct NameObjectCollectionBase_NameObjectKeysEnumerator__StaticFields {
};
struct NameObjectCollectionBase_NameObjectKeysEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameObjectCollectionBase_NameObjectKeysEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameObjectCollectionBase_NameObjectKeysEnumerator__VTable vtable;
};

struct __declspec(align(8)) CompatibleComparer_1__Fields {
  struct IComparer * _comparer;
  struct IHashCodeProvider * _hcp;
};
struct CompatibleComparer_1 {
  struct CompatibleComparer_1__Class *klass;
  struct MonitorData *monitor;
  struct CompatibleComparer_1__Fields fields;
};
struct CompatibleComparer_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
};
struct CompatibleComparer_1__StaticFields {
  struct IComparer * defaultComparer;
  struct IHashCodeProvider * defaultHashProvider;
};
struct CompatibleComparer_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompatibleComparer_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompatibleComparer_1__VTable vtable;
};

enum NotifyCollectionChangedAction__Enum : int32_t {
  NotifyCollectionChangedAction__Enum_Add = 0,
  NotifyCollectionChangedAction__Enum_Remove = 1,
  NotifyCollectionChangedAction__Enum_Replace = 2,
  NotifyCollectionChangedAction__Enum_Move = 3,
  NotifyCollectionChangedAction__Enum_Reset = 4,
};
struct NotifyCollectionChangedAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NotifyCollectionChangedAction__Enum value;
};
struct __declspec(align(8)) NotifyCollectionChangedEventArgs__Fields {
  enum NotifyCollectionChangedAction__Enum _action;
  struct IList * _newItems;
  struct IList * _oldItems;
  int32_t _newStartingIndex;
  int32_t _oldStartingIndex;
};
struct NotifyCollectionChangedEventArgs {
  struct NotifyCollectionChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct NotifyCollectionChangedEventArgs__Fields fields;
};
struct NotifyCollectionChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NotifyCollectionChangedEventArgs__StaticFields {
};
struct NotifyCollectionChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NotifyCollectionChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NotifyCollectionChangedEventArgs__VTable vtable;
};

struct NotifyCollectionChangedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct NotifyCollectionChangedEventHandler {
  struct NotifyCollectionChangedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct NotifyCollectionChangedEventHandler__Fields fields;
};
struct NotifyCollectionChangedEventHandler__VTable {
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
struct NotifyCollectionChangedEventHandler__StaticFields {
};
struct NotifyCollectionChangedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NotifyCollectionChangedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NotifyCollectionChangedEventHandler__VTable vtable;
};

struct __declspec(align(8)) OrderedDictionary__Fields {
  struct ArrayList * _objectsArray;
  struct Hashtable * _objectsTable;
  int32_t _initialCapacity;
  struct IEqualityComparer * _comparer;
  bool _readOnly;
  struct Object * _syncRoot;
  struct SerializationInfo * _siInfo;
};
struct OrderedDictionary {
  struct OrderedDictionary__Class *klass;
  struct MonitorData *monitor;
  struct OrderedDictionary__Fields fields;
};
struct OrderedDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData Contains;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData Remove;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetEnumerator_2;
  VirtualInvokeData GetObjectData_1;
};
struct OrderedDictionary__StaticFields {
};
struct OrderedDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OrderedDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OrderedDictionary__VTable vtable;
};

struct __declspec(align(8)) OrderedDictionary_OrderedDictionaryEnumerator__Fields {
  int32_t _objectReturnType;
  struct IEnumerator * arrayEnumerator;
};
struct OrderedDictionary_OrderedDictionaryEnumerator {
  struct OrderedDictionary_OrderedDictionaryEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct OrderedDictionary_OrderedDictionaryEnumerator__Fields fields;
};
struct OrderedDictionary_OrderedDictionaryEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Key;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Entry;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct OrderedDictionary_OrderedDictionaryEnumerator__StaticFields {
};
struct OrderedDictionary_OrderedDictionaryEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OrderedDictionary_OrderedDictionaryEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OrderedDictionary_OrderedDictionaryEnumerator__VTable vtable;
};

struct __declspec(align(8)) OrderedDictionary_OrderedDictionaryKeyValueCollection__Fields {
  struct ArrayList * _objects;
  bool isKeys;
};
struct OrderedDictionary_OrderedDictionaryKeyValueCollection {
  struct OrderedDictionary_OrderedDictionaryKeyValueCollection__Class *klass;
  struct MonitorData *monitor;
  struct OrderedDictionary_OrderedDictionaryKeyValueCollection__Fields fields;
};
struct OrderedDictionary_OrderedDictionaryKeyValueCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData System_Collections_ICollection_get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct OrderedDictionary_OrderedDictionaryKeyValueCollection__StaticFields {
};
struct OrderedDictionary_OrderedDictionaryKeyValueCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OrderedDictionary_OrderedDictionaryKeyValueCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OrderedDictionary_OrderedDictionaryKeyValueCollection__VTable vtable;
};

struct __declspec(align(8)) StringCollection__Fields {
  struct ArrayList * data;
};
struct StringCollection {
  struct StringCollection__Class *klass;
  struct MonitorData *monitor;
  struct StringCollection__Fields fields;
};
struct StringCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct StringCollection__StaticFields {
};
struct StringCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StringCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StringCollection__VTable vtable;
};

struct CDSCollectionETWBCLProvider_1__Fields {
  struct EventSource__Fields _;
};
struct CDSCollectionETWBCLProvider_1 {
  struct CDSCollectionETWBCLProvider_1__Class *klass;
  struct MonitorData *monitor;
  struct CDSCollectionETWBCLProvider_1__Fields fields;
};
struct CDSCollectionETWBCLProvider_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData OnEventCommand;
  VirtualInvokeData Dispose_1;
};
struct CDSCollectionETWBCLProvider_1__StaticFields {
  struct CDSCollectionETWBCLProvider_1 * Log;
};
struct CDSCollectionETWBCLProvider_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CDSCollectionETWBCLProvider_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CDSCollectionETWBCLProvider_1__VTable vtable;
};

struct ConfigurationException__Fields {
  struct SystemException__Fields _;
};
struct ConfigurationException {
  struct ConfigurationException__Class *klass;
  struct MonitorData *monitor;
  struct ConfigurationException__Fields fields;
};}