namespace app {
struct DnsPermission__StaticFields {
};

struct DnsPermission__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DnsPermission__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DnsPermission__VTable vtable;
};

struct DnsPermissionAttribute__Fields {
    struct CodeAccessSecurityAttribute__Fields _;
};

struct DnsPermissionAttribute {
    struct DnsPermissionAttribute__Class *klass;
    MonitorData *monitor;
    struct DnsPermissionAttribute__Fields fields;
};

struct DnsPermissionAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
    VirtualInvokeData CreatePermission;
};

struct DnsPermissionAttribute__StaticFields {
};

struct DnsPermissionAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DnsPermissionAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DnsPermissionAttribute__VTable vtable;
};

struct ConfigurationElement {
    struct ConfigurationElement__Class *klass;
    MonitorData *monitor;
};

struct AuthenticationModuleElement {
    struct AuthenticationModuleElement__Class *klass;
    MonitorData *monitor;
};

struct ConfigurationPropertyCollection {
    struct ConfigurationPropertyCollection__Class *klass;
    MonitorData *monitor;
};

enum class ConfigurationSaveMode__Enum : int32_t {
    Full = 0x00000002,
    Minimal = 0x00000001,
    Modified = 0x00000000,
};

struct ConfigurationSaveMode__Enum__Boxed {
    struct ConfigurationSaveMode__Enum__Class *klass;
    MonitorData *monitor;
    ConfigurationSaveMode__Enum value;
    
};

struct ConfigurationPropertyCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
};

struct ConfigurationPropertyCollection__StaticFields {
};

struct ConfigurationPropertyCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationPropertyCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationPropertyCollection__VTable vtable;
};

struct ConfigurationSaveMode__Enum__VTable {
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

struct ConfigurationSaveMode__Enum__StaticFields {
};

struct ConfigurationSaveMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationSaveMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationSaveMode__Enum__VTable vtable;
};

struct ConfigurationElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct ConfigurationElement__StaticFields {
};

struct ConfigurationElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationElement__VTable vtable;
};

struct AuthenticationModuleElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct AuthenticationModuleElement__StaticFields {
};

struct AuthenticationModuleElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AuthenticationModuleElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AuthenticationModuleElement__VTable vtable;
};

struct ConfigurationElementCollection {
    struct ConfigurationElementCollection__Class *klass;
    MonitorData *monitor;
};

struct AuthenticationModuleElementCollection {
    struct AuthenticationModuleElementCollection__Class *klass;
    MonitorData *monitor;
};

enum class ConfigurationElementCollectionType__Enum : int32_t {
    AddRemoveClearMap = 0x00000001,
    AddRemoveClearMapAlternate = 0x00000003,
    BasicMap = 0x00000000,
    BasicMapAlternate = 0x00000002,
};

struct ConfigurationElementCollectionType__Enum__Boxed {
    struct ConfigurationElementCollectionType__Enum__Class *klass;
    MonitorData *monitor;
    ConfigurationElementCollectionType__Enum value;
    
};

struct ConfigurationElementCollectionType__Enum__VTable {
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

struct ConfigurationElementCollectionType__Enum__StaticFields {
};

struct ConfigurationElementCollectionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationElementCollectionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationElementCollectionType__Enum__VTable vtable;
};

struct ConfigurationElementCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_CollectionType;
    VirtualInvokeData get_ElementName;
    VirtualInvokeData get_ThrowOnDuplicate;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
};

struct ConfigurationElementCollection__StaticFields {
};

struct ConfigurationElementCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationElementCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationElementCollection__VTable vtable;
};

struct AuthenticationModuleElementCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_CollectionType;
    VirtualInvokeData get_ElementName;
    VirtualInvokeData get_ThrowOnDuplicate;
    VirtualInvokeData CreateNewElement;
    VirtualInvokeData GetElementKey;
};

struct AuthenticationModuleElementCollection__StaticFields {
};

struct AuthenticationModuleElementCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AuthenticationModuleElementCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AuthenticationModuleElementCollection__VTable vtable;
};

struct ConfigurationSection {
    struct ConfigurationSection__Class *klass;
    MonitorData *monitor;
};

struct AuthenticationModulesSection {
    struct AuthenticationModulesSection__Class *klass;
    MonitorData *monitor;
};

struct ConfigurationSection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData DeserializeSection;
    VirtualInvokeData SerializeSection;
};

struct ConfigurationSection__StaticFields {
};

struct ConfigurationSection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationSection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationSection__VTable vtable;
};

struct AuthenticationModulesSection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData DeserializeSection;
    VirtualInvokeData SerializeSection;
};

struct AuthenticationModulesSection__StaticFields {
};

struct AuthenticationModulesSection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AuthenticationModulesSection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AuthenticationModulesSection__VTable vtable;
};

struct BypassElement {
    struct BypassElement__Class *klass;
    MonitorData *monitor;
};

struct BypassElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct BypassElement__StaticFields {
};

struct BypassElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BypassElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BypassElement__VTable vtable;
};

struct BypassElementCollection {
    struct BypassElementCollection__Class *klass;
    MonitorData *monitor;
};

struct BypassElementCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_CollectionType;
    VirtualInvokeData get_ElementName;
    VirtualInvokeData get_ThrowOnDuplicate;
    VirtualInvokeData CreateNewElement;
    VirtualInvokeData GetElementKey;
};

struct BypassElementCollection__StaticFields {
};

struct BypassElementCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BypassElementCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BypassElementCollection__VTable vtable;
};

struct ConnectionManagementElement {
    struct ConnectionManagementElement__Class *klass;
    MonitorData *monitor;
};

struct ConnectionManagementElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct ConnectionManagementElement__StaticFields {
};

struct ConnectionManagementElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConnectionManagementElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConnectionManagementElement__VTable vtable;
};

struct ConnectionManagementElementCollection {
    struct ConnectionManagementElementCollection__Class *klass;
    MonitorData *monitor;
};

struct ConnectionManagementElementCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_CollectionType;
    VirtualInvokeData get_ElementName;
    VirtualInvokeData get_ThrowOnDuplicate;
    VirtualInvokeData CreateNewElement;
    VirtualInvokeData GetElementKey;
};

struct ConnectionManagementElementCollection__StaticFields {
};

struct ConnectionManagementElementCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConnectionManagementElementCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConnectionManagementElementCollection__VTable vtable;
};

struct ConnectionManagementSection {
    struct ConnectionManagementSection__Class *klass;
    MonitorData *monitor;
};

struct ConnectionManagementSection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData DeserializeSection;
    VirtualInvokeData SerializeSection;
};

struct ConnectionManagementSection__StaticFields {
};

struct ConnectionManagementSection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConnectionManagementSection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConnectionManagementSection__VTable vtable;
};

struct DefaultProxySection {
    struct DefaultProxySection__Class *klass;
    MonitorData *monitor;
};

struct DefaultProxySection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData DeserializeSection;
    VirtualInvokeData SerializeSection;
};

struct DefaultProxySection__StaticFields {
};

struct DefaultProxySection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultProxySection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultProxySection__VTable vtable;
};

struct ModuleElement {
    struct ModuleElement__Class *klass;
    MonitorData *monitor;
};

struct ModuleElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct ModuleElement__StaticFields {
};

struct ModuleElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ModuleElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ModuleElement__VTable vtable;
};

struct ProxyElement {
    struct ProxyElement__Class *klass;
    MonitorData *monitor;
};

struct ProxyElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct ProxyElement__StaticFields {
};

struct ProxyElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProxyElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProxyElement__VTable vtable;
};

enum class ProxyElement_AutoDetectValues__Enum : int32_t {
    False = 0x00000000,
    True = 0x00000001,
    Unspecified = -1,
};

struct ProxyElement_AutoDetectValues__Enum__Boxed {
    struct ProxyElement_AutoDetectValues__Enum__Class *klass;
    MonitorData *monitor;
    ProxyElement_AutoDetectValues__Enum value;
    
};

struct ProxyElement_AutoDetectValues__Enum__VTable {
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

struct ProxyElement_AutoDetectValues__Enum__StaticFields {
};

struct ProxyElement_AutoDetectValues__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProxyElement_AutoDetectValues__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProxyElement_AutoDetectValues__Enum__VTable vtable;
};

enum class ProxyElement_BypassOnLocalValues__Enum : int32_t {
    False = 0x00000000,
    True = 0x00000001,
    Unspecified = -1,
};

struct ProxyElement_BypassOnLocalValues__Enum__Boxed {
    struct ProxyElement_BypassOnLocalValues__Enum__Class *klass;
    MonitorData *monitor;
    ProxyElement_BypassOnLocalValues__Enum value;
    
};

struct ProxyElement_BypassOnLocalValues__Enum__VTable {
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

struct ProxyElement_BypassOnLocalValues__Enum__StaticFields {
};

struct ProxyElement_BypassOnLocalValues__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProxyElement_BypassOnLocalValues__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProxyElement_BypassOnLocalValues__Enum__VTable vtable;
};

enum class ProxyElement_UseSystemDefaultValues__Enum : int32_t {
    False = 0x00000000,
    True = 0x00000001,
    Unspecified = -1,
};

struct ProxyElement_UseSystemDefaultValues__Enum__Boxed {
    struct ProxyElement_UseSystemDefaultValues__Enum__Class *klass;
    MonitorData *monitor;
    ProxyElement_UseSystemDefaultValues__Enum value;
    
};

struct ProxyElement_UseSystemDefaultValues__Enum__VTable {
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

struct ProxyElement_UseSystemDefaultValues__Enum__StaticFields {
};

struct ProxyElement_UseSystemDefaultValues__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProxyElement_UseSystemDefaultValues__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProxyElement_UseSystemDefaultValues__Enum__VTable vtable;
};

struct FtpCachePolicyElement {
    struct FtpCachePolicyElement__Class *klass;
    MonitorData *monitor;
};

struct FtpCachePolicyElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct FtpCachePolicyElement__StaticFields {
};

struct FtpCachePolicyElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpCachePolicyElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpCachePolicyElement__VTable vtable;
};

struct HttpCachePolicyElement {
    struct HttpCachePolicyElement__Class *klass;
    MonitorData *monitor;
};

struct HttpCachePolicyElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct HttpCachePolicyElement__StaticFields {
};

struct HttpCachePolicyElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpCachePolicyElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpCachePolicyElement__VTable vtable;
};

enum class HttpRequestCacheLevel__Enum : int32_t {
    Default = 0x00000000,
    BypassCache = 0x00000001,
    CacheOnly = 0x00000002,
    CacheIfAvailable = 0x00000003,
    Revalidate = 0x00000004,
    Reload = 0x00000005,
    NoCacheNoStore = 0x00000006,
    CacheOrNextCacheOnly = 0x00000007,
    Refresh = 0x00000008,
};

struct HttpRequestCacheLevel__Enum__Boxed {
    struct HttpRequestCacheLevel__Enum__Class *klass;
    MonitorData *monitor;
    HttpRequestCacheLevel__Enum value;
    
};

struct HttpRequestCacheLevel__Enum__VTable {
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

struct HttpRequestCacheLevel__Enum__StaticFields {
};

struct HttpRequestCacheLevel__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpRequestCacheLevel__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpRequestCacheLevel__Enum__VTable vtable;
};

struct HttpListenerElement {
    struct HttpListenerElement__Class *klass;
    MonitorData *monitor;
};

struct HttpListenerElement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
};

struct HttpListenerElement__StaticFields {
};

struct HttpListenerElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerElement__VTable vtable;
};

struct HttpListenerTimeoutsElement {
    struct HttpListenerTimeoutsElement__Class *klass;
    MonitorData *monitor;
};

}
