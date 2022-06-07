namespace app {
struct AllowPartiallyTrustedCallersAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct AllowPartiallyTrustedCallersAttribute__StaticFields {
};

struct AllowPartiallyTrustedCallersAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AllowPartiallyTrustedCallersAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AllowPartiallyTrustedCallersAttribute__VTable vtable;
};

struct SecurityCriticalAttribute {
    struct SecurityCriticalAttribute__Class *klass;
    MonitorData *monitor;
};

struct SecurityCriticalAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SecurityCriticalAttribute__StaticFields {
};

struct SecurityCriticalAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityCriticalAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityCriticalAttribute__VTable vtable;
};

struct SecuritySafeCriticalAttribute {
    struct SecuritySafeCriticalAttribute__Class *klass;
    MonitorData *monitor;
};

struct SecuritySafeCriticalAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SecuritySafeCriticalAttribute__StaticFields {
};

struct SecuritySafeCriticalAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecuritySafeCriticalAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecuritySafeCriticalAttribute__VTable vtable;
};

enum class SecurityRuleSet__Enum : uint8_t {
    None = 0x00,
    Level1 = 0x01,
    Level2 = 0x02,
};

struct SecurityRuleSet__Enum__Boxed {
    struct SecurityRuleSet__Enum__Class *klass;
    MonitorData *monitor;
    SecurityRuleSet__Enum value;
    
};

struct __declspec(align(8)) SecurityRulesAttribute__Fields {
    SecurityRuleSet__Enum m_ruleSet;
    
    bool m_skipVerificationInFullTrust;
};

struct SecurityRulesAttribute {
    struct SecurityRulesAttribute__Class *klass;
    MonitorData *monitor;
    struct SecurityRulesAttribute__Fields fields;
};

struct SecurityRuleSet__Enum__VTable {
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

struct SecurityRuleSet__Enum__StaticFields {
};

struct SecurityRuleSet__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityRuleSet__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityRuleSet__Enum__VTable vtable;
};

struct SecurityRulesAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct SecurityRulesAttribute__StaticFields {
};

struct SecurityRulesAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityRulesAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityRulesAttribute__VTable vtable;
};

struct __declspec(align(8)) SecurityDocument__Fields {
    struct Byte__Array *m_data;
};

struct SecurityDocument {
    struct SecurityDocument__Class *klass;
    MonitorData *monitor;
    struct SecurityDocument__Fields fields;
};

struct SecurityDocument__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SecurityDocument__StaticFields {
};

struct SecurityDocument__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityDocument__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityDocument__VTable vtable;
};

struct CodeAccessPermission {
    struct CodeAccessPermission__Class *klass;
    MonitorData *monitor;
};

struct IPermission {
    struct IPermission__Class *klass;
    MonitorData *monitor;
};

enum class ReflectionPermissionFlag__Enum : int32_t {
    NoFlags = 0x00000000,
    TypeInformation = 0x00000001,
    MemberAccess = 0x00000002,
    ReflectionEmit = 0x00000004,
    AllFlags = 0x00000007,
    RestrictedMemberAccess = 0x00000008,
};

struct ReflectionPermissionFlag__Enum__Boxed {
    struct ReflectionPermissionFlag__Enum__Class *klass;
    MonitorData *monitor;
    ReflectionPermissionFlag__Enum value;
    
};

struct __declspec(align(8)) ReflectionPermission__Fields {
    ReflectionPermissionFlag__Enum flags;
    
};

struct ReflectionPermission {
    struct ReflectionPermission__Class *klass;
    MonitorData *monitor;
    struct ReflectionPermission__Fields fields;
};

struct IPermission__VTable {
    VirtualInvokeData Demand;
    VirtualInvokeData IsSubsetOf;
};

struct IPermission__StaticFields {
};

struct IPermission__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPermission__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPermission__VTable vtable;
};

struct ReflectionPermissionFlag__Enum__VTable {
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

struct ReflectionPermissionFlag__Enum__StaticFields {
};

struct ReflectionPermissionFlag__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionPermissionFlag__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionPermissionFlag__Enum__VTable vtable;
};

struct ReflectionPermission__VTable {
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

struct ReflectionPermission__StaticFields {
};

struct ReflectionPermission__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionPermission__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionPermission__VTable vtable;
};

struct CodeAccessPermission__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Security_IPermission_Demand;
    VirtualInvokeData IsSubsetOf;
    VirtualInvokeData ToXml;
    VirtualInvokeData __unknown;
    VirtualInvokeData Demand;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData Union;
};

struct CodeAccessPermission__StaticFields {
};

struct CodeAccessPermission__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CodeAccessPermission__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CodeAccessPermission__VTable vtable;
};

enum class PermissionState__Enum : int32_t {
    Unrestricted = 0x00000001,
    None = 0x00000000,
};

struct PermissionState__Enum__Boxed {
    struct PermissionState__Enum__Class *klass;
    MonitorData *monitor;
    PermissionState__Enum value;
    
};

struct PermissionState__Enum__VTable {
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

struct PermissionState__Enum__StaticFields {
};

struct PermissionState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PermissionState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PermissionState__Enum__VTable vtable;
};

struct __declspec(align(8)) PermissionSet__Fields {
    PermissionState__Enum state;
    
    struct ArrayList *list;
    bool _declsec;
    struct Boolean__Array *_ignored;
};

struct PermissionSet {
    struct PermissionSet__Class *klass;
    MonitorData *monitor;
    struct PermissionSet__Fields fields;
};

struct NamedPermissionSet__Fields {
    struct PermissionSet__Fields _;
    struct String *name;
    struct String *description;
};

struct NamedPermissionSet {
    struct NamedPermissionSet__Class *klass;
    MonitorData *monitor;
    struct NamedPermissionSet__Fields fields;
};

struct PermissionSet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ToXml;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData Demand;
    VirtualInvokeData ToXml_1;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData get_IsSynchronized_1;
    VirtualInvokeData get_SyncRoot_1;
};

struct PermissionSet__StaticFields {
    struct Object__Array *psUnrestricted;
    struct Object__Array *action;
};

struct PermissionSet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PermissionSet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PermissionSet__VTable vtable;
};

struct NamedPermissionSet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ToXml;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData Demand;
    VirtualInvokeData ToXml_1;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData get_IsSynchronized_1;
    VirtualInvokeData get_SyncRoot_1;
};

struct NamedPermissionSet__StaticFields {
};

struct NamedPermissionSet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NamedPermissionSet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NamedPermissionSet__VTable vtable;
};

struct __declspec(align(8)) SecurityElement_SecurityAttribute__Fields {
    struct String *_name;
    struct String *_value;
};

struct SecurityElement_SecurityAttribute {
    struct SecurityElement_SecurityAttribute__Class *klass;
    MonitorData *monitor;
    struct SecurityElement_SecurityAttribute__Fields fields;
};

struct SecurityElement_SecurityAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SecurityElement_SecurityAttribute__StaticFields {
};

struct SecurityElement_SecurityAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityElement_SecurityAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityElement_SecurityAttribute__VTable vtable;
};

struct SecurityException__Fields {
    struct SystemException__Fields _;
    struct String *permissionState;
};

struct SecurityException {
    struct SecurityException__Class *klass;
    MonitorData *monitor;
    struct SecurityException__Fields fields;
};

struct SecurityException__VTable {
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

struct SecurityException__StaticFields {
};

struct SecurityException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityException__VTable vtable;
};

struct XmlSyntaxException__Fields {
    struct SystemException__Fields _;
};

struct XmlSyntaxException {
    struct XmlSyntaxException__Class *klass;
    MonitorData *monitor;
    struct XmlSyntaxException__Fields fields;
};

struct XmlSyntaxException__VTable {
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

struct XmlSyntaxException__StaticFields {
};

struct XmlSyntaxException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSyntaxException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSyntaxException__VTable vtable;
};

struct __declspec(align(8)) Evidence_EvidenceEnumerator__Fields {
    struct IEnumerator *currentEnum;
    struct IEnumerator *hostEnum;
    struct IEnumerator *assemblyEnum;
};

struct Evidence_EvidenceEnumerator {
    struct Evidence_EvidenceEnumerator__Class *klass;
    MonitorData *monitor;
    struct Evidence_EvidenceEnumerator__Fields fields;
};

struct Evidence_EvidenceEnumerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData get_Current;
    VirtualInvokeData Reset;
};

struct Evidence_EvidenceEnumerator__StaticFields {
};

struct Evidence_EvidenceEnumerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Evidence_EvidenceEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Evidence_EvidenceEnumerator__VTable vtable;
};

enum class SecurityAction__Enum : int32_t {
    Demand = 0x00000002,
    Assert = 0x00000003,
    Deny = 0x00000004,
    PermitOnly = 0x00000005,
    LinkDemand = 0x00000006,
    InheritanceDemand = 0x00000007,
    RequestMinimum = 0x00000008,
    RequestOptional = 0x00000009,
    RequestRefuse = 0x0000000a,
};

struct SecurityAction__Enum__Boxed {
    struct SecurityAction__Enum__Class *klass;
    MonitorData *monitor;
    SecurityAction__Enum value;
    
};

struct __declspec(align(8)) SecurityAttribute__Fields {
    SecurityAction__Enum m_Action;
    
    bool m_Unrestricted;
};

struct SecurityAttribute {
    struct SecurityAttribute__Class *klass;
    MonitorData *monitor;
    struct SecurityAttribute__Fields fields;
};

struct CodeAccessSecurityAttribute__Fields {
    struct SecurityAttribute__Fields _;
};

struct CodeAccessSecurityAttribute {
    struct CodeAccessSecurityAttribute__Class *klass;
    MonitorData *monitor;
    struct CodeAccessSecurityAttribute__Fields fields;
};

enum class SecurityPermissionFlag__Enum : int32_t {
    NoFlags = 0x00000000,
    Assertion = 0x00000001,
    UnmanagedCode = 0x00000002,
    SkipVerification = 0x00000004,
    Execution = 0x00000008,
    ControlThread = 0x00000010,
    ControlEvidence = 0x00000020,
    ControlPolicy = 0x00000040,
    SerializationFormatter = 0x00000080,
    ControlDomainPolicy = 0x00000100,
    ControlPrincipal = 0x00000200,
    ControlAppDomain = 0x00000400,
    RemotingConfiguration = 0x00000800,
    Infrastructure = 0x00001000,
    BindingRedirects = 0x00002000,
    AllFlags = 0x00003fff,
};

struct SecurityPermissionFlag__Enum__Boxed {
    struct SecurityPermissionFlag__Enum__Class *klass;
    MonitorData *monitor;
    SecurityPermissionFlag__Enum value;
    
};

struct SecurityPermissionAttribute__Fields {
    struct CodeAccessSecurityAttribute__Fields _;
    SecurityPermissionFlag__Enum m_Flags;
    
};

struct SecurityPermissionAttribute {
    struct SecurityPermissionAttribute__Class *klass;
    MonitorData *monitor;
    struct SecurityPermissionAttribute__Fields fields;
};

struct SecurityAction__Enum__VTable {
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

struct SecurityAction__Enum__StaticFields {
};

struct SecurityAction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityAction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityAction__Enum__VTable vtable;
};

struct SecurityPermissionFlag__Enum__VTable {
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

struct SecurityPermissionFlag__Enum__StaticFields {
};

struct SecurityPermissionFlag__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityPermissionFlag__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityPermissionFlag__Enum__VTable vtable;
};

struct SecurityPermissionAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
    VirtualInvokeData CreatePermission;
};

struct SecurityPermissionAttribute__StaticFields {
};

struct SecurityPermissionAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityPermissionAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityPermissionAttribute__VTable vtable;
};

struct SecurityAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
    VirtualInvokeData __unknown;
};

struct SecurityAttribute__StaticFields {
};

struct SecurityAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityAttribute__VTable vtable;
};

struct CodeAccessSecurityAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
    VirtualInvokeData __unknown;
};

struct CodeAccessSecurityAttribute__StaticFields {
};

struct CodeAccessSecurityAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CodeAccessSecurityAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CodeAccessSecurityAttribute__VTable vtable;
};

struct __declspec(align(8)) SecurityPermission__Fields {
    SecurityPermissionFlag__Enum flags;
    
};

struct SecurityPermission {
    struct SecurityPermission__Class *klass;
    MonitorData *monitor;
    struct SecurityPermission__Fields fields;
};

struct SecurityPermission__VTable {
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

struct SecurityPermission__StaticFields {
};

struct SecurityPermission__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityPermission__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityPermission__VTable vtable;
};

struct __declspec(align(8)) Parser__Fields {
    struct SecurityDocument *_doc;
    struct Tokenizer *_t;
};

struct Parser {
    struct Parser__Class *klass;
    MonitorData *monitor;
    struct Parser__Fields fields;
};

enum class Tokenizer_TokenSource__Enum : int32_t {
    UnicodeByteArray = 0x00000000,
    UTF8ByteArray = 0x00000001,
    ASCIIByteArray = 0x00000002,
    CharArray = 0x00000003,
    String = 0x00000004,
    NestedStrings = 0x00000005,
    Other = 0x00000006,
};

struct Tokenizer_TokenSource__Enum__Boxed {
    struct Tokenizer_TokenSource__Enum__Class *klass;
    MonitorData *monitor;
    Tokenizer_TokenSource__Enum value;
    
};

struct __declspec(align(8)) Tokenizer__Fields {
    int32_t LineNo;
    int32_t _inProcessingTag;
    struct Byte__Array *_inBytes;
    struct Char__Array *_inChars;
    struct String *_inString;
    int32_t _inIndex;
    int32_t _inSize;
    int32_t _inSavedCharacter;
    Tokenizer_TokenSource__Enum _inTokenSource;
    
    struct Tokenizer_ITokenReader *_inTokenReader;
    struct Tokenizer_StringMaker *_maker;
    struct String__Array *_searchStrings;
    struct String__Array *_replaceStrings;
    int32_t _inNestedIndex;
    int32_t _inNestedSize;
    struct String *_inNestedString;
};

struct Tokenizer {
    struct Tokenizer__Class *klass;
    MonitorData *monitor;
    struct Tokenizer__Fields fields;
};

struct Tokenizer_ITokenReader {
    struct Tokenizer_ITokenReader__Class *klass;
    MonitorData *monitor;
};

struct Tokenizer_TokenSource__Enum__VTable {
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

struct Tokenizer_TokenSource__Enum__StaticFields {
};

struct Tokenizer_TokenSource__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Tokenizer_TokenSource__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Tokenizer_TokenSource__Enum__VTable vtable;
};

struct Tokenizer_ITokenReader__VTable {
    VirtualInvokeData Read;
};

struct Tokenizer_ITokenReader__StaticFields {
};

struct Tokenizer_ITokenReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Tokenizer_ITokenReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Tokenizer_ITokenReader__VTable vtable;
};

struct Tokenizer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
