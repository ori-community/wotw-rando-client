namespace app {
struct IgnoreSectionHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Create;
    VirtualInvokeData Create_1;
};

struct IgnoreSectionHandler__StaticFields {
};

struct IgnoreSectionHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IgnoreSectionHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IgnoreSectionHandler__VTable vtable;
};

struct IriParsingElement {
    struct IriParsingElement__Class *klass;
    MonitorData *monitor;
};

struct IriParsingElement__VTable {
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

struct IriParsingElement__StaticFields {
};

struct IriParsingElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IriParsingElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IriParsingElement__VTable vtable;
};

struct NameValueFileSectionHandler {
    struct NameValueFileSectionHandler__Class *klass;
    MonitorData *monitor;
};

struct NameValueFileSectionHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Create;
};

struct NameValueFileSectionHandler__StaticFields {
};

struct NameValueFileSectionHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NameValueFileSectionHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NameValueFileSectionHandler__VTable vtable;
};

struct NameValueSectionHandler {
    struct NameValueSectionHandler__Class *klass;
    MonitorData *monitor;
};

struct NameValueSectionHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Create;
    VirtualInvokeData get_KeyAttributeName;
    VirtualInvokeData get_ValueAttributeName;
};

struct NameValueSectionHandler__StaticFields {
};

struct NameValueSectionHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NameValueSectionHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NameValueSectionHandler__VTable vtable;
};

struct NoSettingsVersionUpgradeAttribute {
    struct NoSettingsVersionUpgradeAttribute__Class *klass;
    MonitorData *monitor;
};

struct NoSettingsVersionUpgradeAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct NoSettingsVersionUpgradeAttribute__StaticFields {
};

struct NoSettingsVersionUpgradeAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NoSettingsVersionUpgradeAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NoSettingsVersionUpgradeAttribute__VTable vtable;
};

struct SchemeSettingElement {
    struct SchemeSettingElement__Class *klass;
    MonitorData *monitor;
};

struct SchemeSettingElement__VTable {
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

struct SchemeSettingElement__StaticFields {
};

struct SchemeSettingElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SchemeSettingElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SchemeSettingElement__VTable vtable;
};

enum class GenericUriParserOptions__Enum : int32_t {
    Default = 0x00000000,
    GenericAuthority = 0x00000001,
    AllowEmptyAuthority = 0x00000002,
    NoUserInfo = 0x00000004,
    NoPort = 0x00000008,
    NoQuery = 0x00000010,
    NoFragment = 0x00000020,
    DontConvertPathBackslashes = 0x00000040,
    DontCompressPath = 0x00000080,
    DontUnescapePathDotsAndSlashes = 0x00000100,
    Idn = 0x00000200,
    IriParsing = 0x00000400,
};

struct GenericUriParserOptions__Enum__Boxed {
    struct GenericUriParserOptions__Enum__Class *klass;
    MonitorData *monitor;
    GenericUriParserOptions__Enum value;
    
};

struct GenericUriParserOptions__Enum__VTable {
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

struct GenericUriParserOptions__Enum__StaticFields {
};

struct GenericUriParserOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GenericUriParserOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GenericUriParserOptions__Enum__VTable vtable;
};

struct SchemeSettingElementCollection {
    struct SchemeSettingElementCollection__Class *klass;
    MonitorData *monitor;
};

struct SchemeSettingElementCollection__VTable {
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

struct SchemeSettingElementCollection__StaticFields {
};

struct SchemeSettingElementCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SchemeSettingElementCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SchemeSettingElementCollection__VTable vtable;
};

struct SettingsDescriptionAttribute {
    struct SettingsDescriptionAttribute__Class *klass;
    MonitorData *monitor;
};

struct SettingsDescriptionAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SettingsDescriptionAttribute__StaticFields {
};

struct SettingsDescriptionAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsDescriptionAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsDescriptionAttribute__VTable vtable;
};

struct SettingsGroupDescriptionAttribute {
    struct SettingsGroupDescriptionAttribute__Class *klass;
    MonitorData *monitor;
};

struct SettingsGroupDescriptionAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SettingsGroupDescriptionAttribute__StaticFields {
};

struct SettingsGroupDescriptionAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsGroupDescriptionAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsGroupDescriptionAttribute__VTable vtable;
};

struct SettingsGroupNameAttribute {
    struct SettingsGroupNameAttribute__Class *klass;
    MonitorData *monitor;
};

struct SettingsGroupNameAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SettingsGroupNameAttribute__StaticFields {
};

struct SettingsGroupNameAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsGroupNameAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsGroupNameAttribute__VTable vtable;
};

struct SettingsManageabilityAttribute {
    struct SettingsManageabilityAttribute__Class *klass;
    MonitorData *monitor;
};

enum class SettingsManageability__Enum : int32_t {
    Roaming = 0x00000000,
};

struct SettingsManageability__Enum__Boxed {
    struct SettingsManageability__Enum__Class *klass;
    MonitorData *monitor;
    SettingsManageability__Enum value;
    
};

struct SettingsManageabilityAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SettingsManageabilityAttribute__StaticFields {
};

struct SettingsManageabilityAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsManageabilityAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsManageabilityAttribute__VTable vtable;
};

struct SettingsManageability__Enum__VTable {
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

struct SettingsManageability__Enum__StaticFields {
};

struct SettingsManageability__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsManageability__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsManageability__Enum__VTable vtable;
};

struct SettingsPropertyIsReadOnlyException__Fields {
    struct Exception__Fields _;
};

struct SettingsPropertyIsReadOnlyException {
    struct SettingsPropertyIsReadOnlyException__Class *klass;
    MonitorData *monitor;
    struct SettingsPropertyIsReadOnlyException__Fields fields;
};

struct SettingsPropertyIsReadOnlyException__VTable {
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

struct SettingsPropertyIsReadOnlyException__StaticFields {
};

struct SettingsPropertyIsReadOnlyException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsPropertyIsReadOnlyException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsPropertyIsReadOnlyException__VTable vtable;
};

struct SettingsPropertyNotFoundException__Fields {
    struct Exception__Fields _;
};

struct SettingsPropertyNotFoundException {
    struct SettingsPropertyNotFoundException__Class *klass;
    MonitorData *monitor;
    struct SettingsPropertyNotFoundException__Fields fields;
};

struct SettingsPropertyNotFoundException__VTable {
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

struct SettingsPropertyNotFoundException__StaticFields {
};

struct SettingsPropertyNotFoundException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsPropertyNotFoundException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsPropertyNotFoundException__VTable vtable;
};

struct SettingsPropertyWrongTypeException__Fields {
    struct Exception__Fields _;
};

struct SettingsPropertyWrongTypeException {
    struct SettingsPropertyWrongTypeException__Class *klass;
    MonitorData *monitor;
    struct SettingsPropertyWrongTypeException__Fields fields;
};

struct SettingsPropertyWrongTypeException__VTable {
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

struct SettingsPropertyWrongTypeException__StaticFields {
};

struct SettingsPropertyWrongTypeException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsPropertyWrongTypeException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsPropertyWrongTypeException__VTable vtable;
};

struct SettingsProviderAttribute {
    struct SettingsProviderAttribute__Class *klass;
    MonitorData *monitor;
};

struct SettingsProviderAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SettingsProviderAttribute__StaticFields {
};

struct SettingsProviderAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsProviderAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsProviderAttribute__VTable vtable;
};

struct SettingsSerializeAsAttribute {
    struct SettingsSerializeAsAttribute__Class *klass;
    MonitorData *monitor;
};

struct SettingsSerializeAsAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SettingsSerializeAsAttribute__StaticFields {
};

struct SettingsSerializeAsAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SettingsSerializeAsAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SettingsSerializeAsAttribute__VTable vtable;
};

struct SingleTagSectionHandler {
    struct SingleTagSectionHandler__Class *klass;
    MonitorData *monitor;
};

struct SingleTagSectionHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Create;
    VirtualInvokeData Create_1;
};

struct SingleTagSectionHandler__StaticFields {
};

struct SingleTagSectionHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SingleTagSectionHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SingleTagSectionHandler__VTable vtable;
};

struct SpecialSettingAttribute {
    struct SpecialSettingAttribute__Class *klass;
    MonitorData *monitor;
};

enum class SpecialSetting__Enum : int32_t {
    ConnectionString = 0x00000000,
    WebServiceUrl = 0x00000001,
};

struct SpecialSetting__Enum__Boxed {
    struct SpecialSetting__Enum__Class *klass;
    MonitorData *monitor;
    SpecialSetting__Enum value;
    
};

struct SpecialSettingAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SpecialSettingAttribute__StaticFields {
};

struct SpecialSettingAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpecialSettingAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpecialSettingAttribute__VTable vtable;
};

struct SpecialSetting__Enum__VTable {
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

struct SpecialSetting__Enum__StaticFields {
};

struct SpecialSetting__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpecialSetting__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpecialSetting__Enum__VTable vtable;
};

struct UriSection {
    struct UriSection__Class *klass;
    MonitorData *monitor;
};

struct UriSection__VTable {
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

struct UriSection__StaticFields {
};

struct UriSection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UriSection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UriSection__VTable vtable;
};

struct UserScopedSettingAttribute {
    struct UserScopedSettingAttribute__Class *klass;
    MonitorData *monitor;
};

struct UserScopedSettingAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct UserScopedSettingAttribute__StaticFields {
};

struct UserScopedSettingAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserScopedSettingAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserScopedSettingAttribute__VTable vtable;
};

struct UserSettingsGroup {
    struct UserSettingsGroup__Class *klass;
    MonitorData *monitor;
};

struct UserSettingsGroup__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserSettingsGroup__StaticFields {
};

struct UserSettingsGroup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserSettingsGroup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserSettingsGroup__VTable vtable;
};

struct ConfigurationCollectionAttribute {
    struct ConfigurationCollectionAttribute__Class *klass;
    MonitorData *monitor;
};

struct ConfigurationCollectionAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct ConfigurationCollectionAttribute__StaticFields {
};

struct ConfigurationCollectionAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfigurationCollectionAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfigurationCollectionAttribute__VTable vtable;
};

struct IgnoreSection {
    struct IgnoreSection__Class *klass;
    MonitorData *monitor;
};

struct IgnoreSection__VTable {
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

struct IgnoreSection__StaticFields {
};

struct IgnoreSection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IgnoreSection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IgnoreSection__VTable vtable;
};

struct CodeDomProvider {
    struct CodeDomProvider__Class *klass;
    MonitorData *monitor;
};

struct CodeDomProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CodeDomProvider__StaticFields {
};

struct CodeDomProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CodeDomProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CodeDomProvider__VTable vtable;
};

struct CSharpCodeProvider {
    struct CSharpCodeProvider__Class *klass;
    MonitorData *monitor;
};

struct CSharpCodeProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CSharpCodeProvider__StaticFields {
};

struct CSharpCodeProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CSharpCodeProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CSharpCodeProvider__VTable vtable;
};

struct AstNode {
    struct AstNode__Class *klass;
    MonitorData *monitor;
};

enum class Axis_AxisType__Enum : int32_t {
    Ancestor = 0x00000000,
    AncestorOrSelf = 0x00000001,
    Attribute = 0x00000002,
    Child = 0x00000003,
    Descendant = 0x00000004,
    DescendantOrSelf = 0x00000005,
    Following = 0x00000006,
    FollowingSibling = 0x00000007,
    Namespace = 0x00000008,
    Parent = 0x00000009,
    Preceding = 0x0000000a,
    PrecedingSibling = 0x0000000b,
    Self = 0x0000000c,
    None = 0x0000000d,
};

struct Axis_AxisType__Enum__Boxed {
    struct Axis_AxisType__Enum__Class *klass;
    MonitorData *monitor;
    Axis_AxisType__Enum value;
    
};

enum class XPathNodeType__Enum : int32_t {
    Root = 0x00000000,
    Element = 0x00000001,
    Attribute = 0x00000002,
    Namespace = 0x00000003,
    Text = 0x00000004,
    SignificantWhitespace = 0x00000005,
    Whitespace = 0x00000006,
    ProcessingInstruction = 0x00000007,
    Comment = 0x00000008,
    All = 0x00000009,
};

struct XPathNodeType__Enum__Boxed {
    struct XPathNodeType__Enum__Class *klass;
    MonitorData *monitor;
    XPathNodeType__Enum value;
    
};

struct __declspec(align(8)) Axis__Fields {
    Axis_AxisType__Enum axisType;
    
    struct AstNode *input;
    struct String *prefix;
    struct String *name;
    XPathNodeType__Enum nodeType;
    
    bool abbrAxis;
    struct String *urn;
};

struct Axis {
    struct Axis__Class *klass;
    MonitorData *monitor;
    struct Axis__Fields fields;
};

enum class AstNode_AstType__Enum : int32_t {
    Axis = 0x00000000,
    Operator = 0x00000001,
    Filter = 0x00000002,
    ConstantOperand = 0x00000003,
    Function = 0x00000004,
    Group = 0x00000005,
    Root = 0x00000006,
    Variable = 0x00000007,
    Error = 0x00000008,
};

struct AstNode_AstType__Enum__Boxed {
    struct AstNode_AstType__Enum__Class *klass;
    MonitorData *monitor;
    AstNode_AstType__Enum value;
    
};

enum class XPathResultType__Enum : int32_t {
    Number = 0x00000000,
    String = 0x00000001,
    Boolean = 0x00000002,
    NodeSet = 0x00000003,
    Navigator = 0x00000001,
    Any = 0x00000005,
    Error = 0x00000006,
};

struct XPathResultType__Enum__Boxed {
    struct XPathResultType__Enum__Class *klass;
    MonitorData *monitor;
    XPathResultType__Enum value;
    
};

struct Axis_AxisType__Enum__VTable {
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

}
