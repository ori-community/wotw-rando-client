namespace app {
struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array__VTable {
};

struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array__StaticFields {
};

struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array__VTable vtable;
};

struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___StaticFields {
};

struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array *_emptyArray;
};

struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW___VTable vtable;
};

struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW__1__VTable {
};

struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW__1__StaticFields {
};

struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW__1__VTable vtable;
};

struct Win32_IP_ADDR_STRING {
    void *Next;
    struct String *IpAddress;
    struct String *IpMask;
    uint32_t Context;
};

struct Win32_IP_ADDR_STRING__Boxed {
    struct Win32_IP_ADDR_STRING__Class *klass;
    MonitorData *monitor;
    struct Win32_IP_ADDR_STRING fields;
};

enum class NetBiosNodeType__Enum : int32_t {
    Unknown = 0x00000000,
    Broadcast = 0x00000001,
    Peer2Peer = 0x00000002,
    Mixed = 0x00000004,
    Hybrid = 0x00000008,
};

struct NetBiosNodeType__Enum__Boxed {
    struct NetBiosNodeType__Enum__Class *klass;
    MonitorData *monitor;
    NetBiosNodeType__Enum value;
    
};

struct Win32_FIXED_INFO {
    struct String *HostName;
    struct String *DomainName;
    void *CurrentDnsServer;
    struct Win32_IP_ADDR_STRING DnsServerList;
    NetBiosNodeType__Enum NodeType;
    
    struct String *ScopeId;
    uint32_t EnableRouting;
    uint32_t EnableProxy;
    uint32_t EnableDns;
};

struct Win32_FIXED_INFO__Boxed {
    struct Win32_FIXED_INFO__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Win32_IP_ADDR_STRING__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Win32_IP_ADDR_STRING__VTable vtable;
};

struct NetBiosNodeType__Enum__VTable {
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

struct NetBiosNodeType__Enum__StaticFields {
};

struct NetBiosNodeType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetBiosNodeType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetBiosNodeType__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Win32_FIXED_INFO__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Win32_FIXED_INFO__VTable vtable;
};

struct __declspec(align(8)) DefaultProxySectionInternal__Fields {
    struct IWebProxy *webProxy;
};

struct DefaultProxySectionInternal {
    struct DefaultProxySectionInternal__Class *klass;
    MonitorData *monitor;
    struct DefaultProxySectionInternal__Fields fields;
};

struct DefaultProxySectionInternal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DefaultProxySectionInternal__StaticFields {
    struct Object *classSyncObject;
};

struct DefaultProxySectionInternal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultProxySectionInternal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultProxySectionInternal__VTable vtable;
};

struct __declspec(align(8)) SettingsSectionInternal__Fields {
    bool HttpListenerUnescapeRequestUrl;
    IPProtectionLevel__Enum IPProtectionLevel;
    
    bool _UseNagleAlgorithm_k__BackingField;
    bool _Expect100Continue_k__BackingField;
    bool _CheckCertificateName_k__BackingField;
    int32_t _DnsRefreshTimeout_k__BackingField;
    bool _EnableDnsRoundRobin_k__BackingField;
    bool _CheckCertificateRevocationList_k__BackingField;
    EncryptionPolicy__Enum _EncryptionPolicy_k__BackingField;
    
};

struct SettingsSectionInternal {
    struct SettingsSectionInternal__Class *klass;
    MonitorData *monitor;
    struct SettingsSectionInternal__Fields fields;
};

struct SettingsSectionInternal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SettingsSectionInternal__StaticFields {
    struct SettingsSectionInternal *instance;
};

struct SettingsSectionInternal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsSectionInternal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsSectionInternal__VTable vtable;
};

struct __declspec(align(8)) RequestCachingSectionInternal__Fields {
    bool DisableAllCaching;
};

struct RequestCachingSectionInternal {
    struct RequestCachingSectionInternal__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RequestCachingSectionInternal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RequestCachingSectionInternal__VTable vtable;
};

struct CaseSensitiveStringDictionary__Fields {
    struct StringDictionary__Fields _;
};

struct CaseSensitiveStringDictionary {
    struct CaseSensitiveStringDictionary__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CaseSensitiveStringDictionary__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CaseSensitiveStringDictionary__VTable vtable;
};

struct __declspec(align(8)) ListDictionary_NodeEnumerator__Fields {
    struct ListDictionary *list;
    struct ListDictionary_DictionaryNode *current;
    int32_t version;
    bool start;
};

struct ListDictionary_NodeEnumerator {
    struct ListDictionary_NodeEnumerator__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListDictionary_NodeEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListDictionary_NodeEnumerator__VTable vtable;
};

struct __declspec(align(8)) ListDictionary_NodeKeyValueCollection__Fields {
    struct ListDictionary *list;
    bool isKeys;
};

struct ListDictionary_NodeKeyValueCollection {
    struct ListDictionary_NodeKeyValueCollection__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListDictionary_NodeKeyValueCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListDictionary_NodeKeyValueCollection__VTable vtable;
};

struct __declspec(align(8)) ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Fields {
    struct ListDictionary *list;
    struct ListDictionary_DictionaryNode *current;
    int32_t version;
    bool isKeys;
    bool start;
};

struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator {
    struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__VTable vtable;
};

struct __declspec(align(8)) NameObjectCollectionBase_NameObjectKeysEnumerator__Fields {
    int32_t _pos;
    struct NameObjectCollectionBase *_coll;
    int32_t _version;
};

struct NameObjectCollectionBase_NameObjectKeysEnumerator {
    struct NameObjectCollectionBase_NameObjectKeysEnumerator__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NameObjectCollectionBase_NameObjectKeysEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NameObjectCollectionBase_NameObjectKeysEnumerator__VTable vtable;
};

struct __declspec(align(8)) CompatibleComparer_1__Fields {
    struct IComparer *_comparer;
    struct IHashCodeProvider *_hcp;
};

struct CompatibleComparer_1 {
    struct CompatibleComparer_1__Class *klass;
    MonitorData *monitor;
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
    struct IComparer *defaultComparer;
    struct IHashCodeProvider *defaultHashProvider;
};

struct CompatibleComparer_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompatibleComparer_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompatibleComparer_1__VTable vtable;
};

enum class NotifyCollectionChangedAction__Enum : int32_t {
    Add = 0x00000000,
    Remove = 0x00000001,
    Replace = 0x00000002,
    Move = 0x00000003,
    Reset = 0x00000004,
};

struct NotifyCollectionChangedAction__Enum__Boxed {
    struct NotifyCollectionChangedAction__Enum__Class *klass;
    MonitorData *monitor;
    NotifyCollectionChangedAction__Enum value;
    
};

struct __declspec(align(8)) NotifyCollectionChangedEventArgs__Fields {
    NotifyCollectionChangedAction__Enum _action;
    
    struct IList *_newItems;
    struct IList *_oldItems;
    int32_t _newStartingIndex;
    int32_t _oldStartingIndex;
};

struct NotifyCollectionChangedEventArgs {
    struct NotifyCollectionChangedEventArgs__Class *klass;
    MonitorData *monitor;
    struct NotifyCollectionChangedEventArgs__Fields fields;
};

struct NotifyCollectionChangedAction__Enum__VTable {
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

struct NotifyCollectionChangedAction__Enum__StaticFields {
};

struct NotifyCollectionChangedAction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NotifyCollectionChangedAction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NotifyCollectionChangedAction__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NotifyCollectionChangedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NotifyCollectionChangedEventArgs__VTable vtable;
};

struct NotifyCollectionChangedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct NotifyCollectionChangedEventHandler {
    struct NotifyCollectionChangedEventHandler__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NotifyCollectionChangedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NotifyCollectionChangedEventHandler__VTable vtable;
};

struct __declspec(align(8)) OrderedDictionary__Fields {
    struct ArrayList *_objectsArray;
    struct Hashtable *_objectsTable;
    int32_t _initialCapacity;
    struct IEqualityComparer *_comparer;
    bool _readOnly;
    struct Object *_syncRoot;
    struct SerializationInfo *_siInfo;
};

struct OrderedDictionary {
    struct OrderedDictionary__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrderedDictionary__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrderedDictionary__VTable vtable;
};

struct __declspec(align(8)) OrderedDictionary_OrderedDictionaryEnumerator__Fields {
    int32_t _objectReturnType;
    struct IEnumerator *arrayEnumerator;
};

struct OrderedDictionary_OrderedDictionaryEnumerator {
    struct OrderedDictionary_OrderedDictionaryEnumerator__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrderedDictionary_OrderedDictionaryEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrderedDictionary_OrderedDictionaryEnumerator__VTable vtable;
};

struct __declspec(align(8)) OrderedDictionary_OrderedDictionaryKeyValueCollection__Fields {
    struct ArrayList *_objects;
    bool isKeys;
};

struct OrderedDictionary_OrderedDictionaryKeyValueCollection {
    struct OrderedDictionary_OrderedDictionaryKeyValueCollection__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrderedDictionary_OrderedDictionaryKeyValueCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrderedDictionary_OrderedDictionaryKeyValueCollection__VTable vtable;
};

struct __declspec(align(8)) StringCollection__Fields {
    struct ArrayList *data;
};

struct StringCollection {
    struct StringCollection__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StringCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StringCollection__VTable vtable;
};

struct CDSCollectionETWBCLProvider_1__Fields {
    struct EventSource__Fields _;
};

struct CDSCollectionETWBCLProvider_1 {
    struct CDSCollectionETWBCLProvider_1__Class *klass;
    MonitorData *monitor;
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
    struct CDSCollectionETWBCLProvider_1 *Log;
};

struct CDSCollectionETWBCLProvider_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CDSCollectionETWBCLProvider_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CDSCollectionETWBCLProvider_1__VTable vtable;
};

struct ConfigurationException__Fields {
    struct SystemException__Fields _;
};

struct ConfigurationException {
    struct ConfigurationException__Class *klass;
    MonitorData *monitor;
    struct ConfigurationException__Fields fields;
};

struct ConfigurationException__VTable {
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
    VirtualInvokeData get_BareMessage;
    VirtualInvokeData get_Filename;
    VirtualInvokeData get_Line;
};

struct ConfigurationException__StaticFields {
};

struct ConfigurationException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationException__VTable vtable;
};

struct __declspec(align(8)) XmlNode__Fields {
    struct XmlNode *parentNode;
};

struct XmlNode {
    struct XmlNode__Class *klass;
    MonitorData *monitor;
    struct XmlNode__Fields fields;
};

struct XmlDocument__Fields {
    struct XmlNode__Fields _;
    struct XmlImplementation *implementation;
    struct DomNameTable *domNameTable;
    struct XmlLinkedNode *lastChild;
    struct XmlNamedNodeMap *entities;
    struct Hashtable *htElementIdMap;
    struct Hashtable *htElementIDAttrDecl;
    struct SchemaInfo *schemaInfo;
    struct XmlSchemaSet *schemas;
    bool reportValidity;
    bool actualLoadingStatus;
    struct XmlNodeChangedEventHandler *onNodeInsertingDelegate;
    struct XmlNodeChangedEventHandler *onNodeInsertedDelegate;
    struct XmlNodeChangedEventHandler *onNodeRemovingDelegate;
    struct XmlNodeChangedEventHandler *onNodeRemovedDelegate;
    struct XmlNodeChangedEventHandler *onNodeChangingDelegate;
    struct XmlNodeChangedEventHandler *onNodeChangedDelegate;
    bool fEntRefNodesPresent;
    bool fCDataNodesPresent;
    bool preserveWhitespace;
    bool isLoading;
    struct String *strDocumentName;
    struct String *strDocumentFragmentName;
    struct String *strCommentName;
    struct String *strTextName;
    struct String *strCDataSectionName;
    struct String *strEntityName;
    struct String *strID;
    struct String *strXmlns;
    struct String *strXml;
    struct String *strSpace;
    struct String *strLang;
    struct String *strEmpty;
    struct String *strNonSignificantWhitespaceName;
    struct String *strSignificantWhitespaceName;
    struct String *strReservedXmlns;
    struct String *strReservedXml;
    struct String *baseURI;
    struct XmlResolver *resolver;
    bool bSetResolver;
    struct Object *objLock;
};

struct XmlDocument {
    struct XmlDocument__Class *klass;
    MonitorData *monitor;
    struct XmlDocument__Fields fields;
};

struct __declspec(align(8)) XmlImplementation__Fields {
    struct XmlNameTable *nameTable;
};

struct XmlImplementation {
    struct XmlImplementation__Class *klass;
    MonitorData *monitor;
    struct XmlImplementation__Fields fields;
};

struct XmlNameTable {
    struct XmlNameTable__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) NameTable__Fields {
    struct NameTable_Entry__Array *entries;
    int32_t count;
    int32_t mask;
    int32_t hashCodeRandomizer;
};

struct NameTable {
    struct NameTable__Class *klass;
    MonitorData *monitor;
    struct NameTable__Fields fields;
};

struct __declspec(align(8)) NameTable_Entry__Fields {
    struct String *str;
    int32_t hashCode;
    struct NameTable_Entry *next;
};

struct NameTable_Entry {
    struct NameTable_Entry__Class *klass;
    MonitorData *monitor;
    struct NameTable_Entry__Fields fields;
};

}
