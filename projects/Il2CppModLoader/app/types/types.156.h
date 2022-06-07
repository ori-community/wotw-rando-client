namespace app {
struct __declspec(align(8)) X509Builder__Fields {
    struct String *hashName;
};

struct X509Builder {
    struct X509Builder__Class *klass;
    MonitorData *monitor;
    struct X509Builder__Fields fields;
};

struct X509CertificateBuilder__Fields {
    struct X509Builder__Fields _;
    uint8_t version;
    struct Byte__Array *sn;
    struct String *issuer;
    struct DateTime notBefore;
    struct DateTime notAfter;
    struct String *subject;
    struct AsymmetricAlgorithm *aa;
    struct Byte__Array *issuerUniqueID;
    struct Byte__Array *subjectUniqueID;
    struct X509ExtensionCollection_1 *extensions;
};

struct X509CertificateBuilder {
    struct X509CertificateBuilder__Class *klass;
    MonitorData *monitor;
    struct X509CertificateBuilder__Fields fields;
};

struct X509CertificateBuilder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ToBeSigned;
    VirtualInvokeData Sign;
    VirtualInvokeData Sign_1;
    VirtualInvokeData Sign_2;
};

struct X509CertificateBuilder__StaticFields {
};

struct X509CertificateBuilder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509CertificateBuilder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509CertificateBuilder__VTable vtable;
};

struct X509Builder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData Sign;
    VirtualInvokeData Sign_1;
    VirtualInvokeData Sign_2;
};

struct X509Builder__StaticFields {
};

struct X509Builder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509Builder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509Builder__VTable vtable;
};

struct X509Certificate_2__Array {
    struct X509Certificate_2__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct X509Certificate_2 *vector[32];
};

struct X509Certificate_2__Array__VTable {
};

struct X509Certificate_2__Array__StaticFields {
};

struct X509Certificate_2__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509Certificate_2__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509Certificate_2__Array__VTable vtable;
};

struct __declspec(align(8)) X509CertificateCollection_X509CertificateEnumerator_2__Fields {
    struct IEnumerator *enumerator;
};

struct X509CertificateCollection_X509CertificateEnumerator_2 {
    struct X509CertificateCollection_X509CertificateEnumerator_2__Class *klass;
    MonitorData *monitor;
    struct X509CertificateCollection_X509CertificateEnumerator_2__Fields fields;
};

struct X509CertificateCollection_X509CertificateEnumerator_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IEnumerator_MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct X509CertificateCollection_X509CertificateEnumerator_2__StaticFields {
};

struct X509CertificateCollection_X509CertificateEnumerator_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509CertificateCollection_X509CertificateEnumerator_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509CertificateCollection_X509CertificateEnumerator_2__VTable vtable;
};

enum class X509ChainStatusFlags__Enum_1 : int32_t {
    InvalidBasicConstraints = 0x00000400,
    NoError = 0x00000000,
    NotSignatureValid = 0x00000008,
    NotTimeNested = 0x00000002,
    NotTimeValid = 0x00000001,
    PartialChain = 0x00010000,
    UntrustedRoot = 0x00000020,
};

struct X509ChainStatusFlags__Enum_1__Boxed {
    struct X509ChainStatusFlags__Enum_1__Class *klass;
    MonitorData *monitor;
    X509ChainStatusFlags__Enum_1 value;
    
};

struct __declspec(align(8)) X509Chain_1__Fields {
    struct X509CertificateCollection_2 *roots;
    struct X509CertificateCollection_2 *certs;
    struct X509Certificate_2 *_root;
    struct X509CertificateCollection_2 *_chain;
    X509ChainStatusFlags__Enum_1 _status;
    
};

struct X509Chain_1 {
    struct X509Chain_1__Class *klass;
    MonitorData *monitor;
    struct X509Chain_1__Fields fields;
};

struct X509ChainStatusFlags__Enum_1__VTable {
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

struct X509ChainStatusFlags__Enum_1__StaticFields {
};

struct X509ChainStatusFlags__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509ChainStatusFlags__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509ChainStatusFlags__Enum_1__VTable vtable;
};

struct X509Chain_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X509Chain_1__StaticFields {
};

struct X509Chain_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509Chain_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509Chain_1__VTable vtable;
};

struct X509Extension_2__Array {
    struct X509Extension_2__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct X509Extension_2 *vector[32];
};

struct X509Extension_2__Array__VTable {
};

struct X509Extension_2__Array__StaticFields {
};

struct X509Extension_2__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509Extension_2__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509Extension_2__Array__VTable vtable;
};

struct X509StoreManager {
    struct X509StoreManager__Class *klass;
    MonitorData *monitor;
};

struct X509StoreManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X509StoreManager__StaticFields {
    struct String *_userPath;
    struct String *_localMachinePath;
    struct String *_newUserPath;
    struct String *_newLocalMachinePath;
    struct X509Stores *_userStore;
    struct X509Stores *_machineStore;
    struct X509Stores *_newUserStore;
    struct X509Stores *_newMachineStore;
};

struct X509StoreManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509StoreManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509StoreManager__VTable vtable;
};

struct X509Stores_Names {
    struct X509Stores_Names__Class *klass;
    MonitorData *monitor;
};

struct X509Stores_Names__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X509Stores_Names__StaticFields {
};

struct X509Stores_Names__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X509Stores_Names__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X509Stores_Names__VTable vtable;
};

struct X520 {
    struct X520__Class *klass;
    MonitorData *monitor;
};

struct X520__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520__StaticFields {
};

struct X520__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520__VTable vtable;
};

struct X520_Name__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_Name {
    struct X520_Name__Class *klass;
    MonitorData *monitor;
    struct X520_Name__Fields fields;
};

struct X520_Name__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_Name__StaticFields {
};

struct X520_Name__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_Name__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_Name__VTable vtable;
};

struct X520_CommonName__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_CommonName {
    struct X520_CommonName__Class *klass;
    MonitorData *monitor;
    struct X520_CommonName__Fields fields;
};

struct X520_CommonName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_CommonName__StaticFields {
};

struct X520_CommonName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_CommonName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_CommonName__VTable vtable;
};

struct X520_SerialNumber__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_SerialNumber {
    struct X520_SerialNumber__Class *klass;
    MonitorData *monitor;
    struct X520_SerialNumber__Fields fields;
};

struct X520_SerialNumber__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_SerialNumber__StaticFields {
};

struct X520_SerialNumber__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_SerialNumber__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_SerialNumber__VTable vtable;
};

struct X520_LocalityName__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_LocalityName {
    struct X520_LocalityName__Class *klass;
    MonitorData *monitor;
    struct X520_LocalityName__Fields fields;
};

struct X520_LocalityName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_LocalityName__StaticFields {
};

struct X520_LocalityName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_LocalityName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_LocalityName__VTable vtable;
};

struct X520_StateOrProvinceName__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_StateOrProvinceName {
    struct X520_StateOrProvinceName__Class *klass;
    MonitorData *monitor;
    struct X520_StateOrProvinceName__Fields fields;
};

struct X520_StateOrProvinceName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_StateOrProvinceName__StaticFields {
};

struct X520_StateOrProvinceName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_StateOrProvinceName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_StateOrProvinceName__VTable vtable;
};

struct X520_OrganizationName__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_OrganizationName {
    struct X520_OrganizationName__Class *klass;
    MonitorData *monitor;
    struct X520_OrganizationName__Fields fields;
};

struct X520_OrganizationName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_OrganizationName__StaticFields {
};

struct X520_OrganizationName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_OrganizationName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_OrganizationName__VTable vtable;
};

struct X520_OrganizationalUnitName__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_OrganizationalUnitName {
    struct X520_OrganizationalUnitName__Class *klass;
    MonitorData *monitor;
    struct X520_OrganizationalUnitName__Fields fields;
};

struct X520_OrganizationalUnitName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_OrganizationalUnitName__StaticFields {
};

struct X520_OrganizationalUnitName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_OrganizationalUnitName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_OrganizationalUnitName__VTable vtable;
};

struct X520_EmailAddress__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_EmailAddress {
    struct X520_EmailAddress__Class *klass;
    MonitorData *monitor;
    struct X520_EmailAddress__Fields fields;
};

struct X520_EmailAddress__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_EmailAddress__StaticFields {
};

struct X520_EmailAddress__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_EmailAddress__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_EmailAddress__VTable vtable;
};

struct X520_DomainComponent__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_DomainComponent {
    struct X520_DomainComponent__Class *klass;
    MonitorData *monitor;
    struct X520_DomainComponent__Fields fields;
};

struct X520_DomainComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_DomainComponent__StaticFields {
};

struct X520_DomainComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_DomainComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_DomainComponent__VTable vtable;
};

struct X520_UserId__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_UserId {
    struct X520_UserId__Class *klass;
    MonitorData *monitor;
    struct X520_UserId__Fields fields;
};

struct X520_UserId__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_UserId__StaticFields {
};

struct X520_UserId__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_UserId__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_UserId__VTable vtable;
};

struct X520_Oid__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_Oid {
    struct X520_Oid__Class *klass;
    MonitorData *monitor;
    struct X520_Oid__Fields fields;
};

struct X520_Oid__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_Oid__StaticFields {
};

struct X520_Oid__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_Oid__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_Oid__VTable vtable;
};

struct X520_Title__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_Title {
    struct X520_Title__Class *klass;
    MonitorData *monitor;
    struct X520_Title__Fields fields;
};

struct X520_Title__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_Title__StaticFields {
};

struct X520_Title__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_Title__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_Title__VTable vtable;
};

struct X520_CountryName__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_CountryName {
    struct X520_CountryName__Class *klass;
    MonitorData *monitor;
    struct X520_CountryName__Fields fields;
};

struct X520_CountryName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_CountryName__StaticFields {
};

struct X520_CountryName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_CountryName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_CountryName__VTable vtable;
};

struct X520_DnQualifier__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_DnQualifier {
    struct X520_DnQualifier__Class *klass;
    MonitorData *monitor;
    struct X520_DnQualifier__Fields fields;
};

struct X520_DnQualifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_DnQualifier__StaticFields {
};

struct X520_DnQualifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_DnQualifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_DnQualifier__VTable vtable;
};

struct X520_Surname__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_Surname {
    struct X520_Surname__Class *klass;
    MonitorData *monitor;
    struct X520_Surname__Fields fields;
};

struct X520_Surname__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_Surname__StaticFields {
};

struct X520_Surname__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_Surname__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_Surname__VTable vtable;
};

struct X520_GivenName__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_GivenName {
    struct X520_GivenName__Class *klass;
    MonitorData *monitor;
    struct X520_GivenName__Fields fields;
};

struct X520_GivenName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_GivenName__StaticFields {
};

struct X520_GivenName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_GivenName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_GivenName__VTable vtable;
};

struct X520_Initial__Fields {
    struct X520_AttributeTypeAndValue__Fields _;
};

struct X520_Initial {
    struct X520_Initial__Class *klass;
    MonitorData *monitor;
    struct X520_Initial__Fields fields;
};

struct X520_Initial__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct X520_Initial__StaticFields {
};

struct X520_Initial__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct X520_Initial__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct X520_Initial__VTable vtable;
};

struct AuthorityKeyIdentifierExtension__Fields {
    struct X509Extension_2__Fields _;
    struct Byte__Array *aki;
};

struct AuthorityKeyIdentifierExtension {
    struct AuthorityKeyIdentifierExtension__Class *klass;
    MonitorData *monitor;
    struct AuthorityKeyIdentifierExtension__Fields fields;
};

struct AuthorityKeyIdentifierExtension__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Decode;
    VirtualInvokeData Encode;
    VirtualInvokeData get_Name;
};

struct AuthorityKeyIdentifierExtension__StaticFields {
};

struct AuthorityKeyIdentifierExtension__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AuthorityKeyIdentifierExtension__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AuthorityKeyIdentifierExtension__VTable vtable;
};

struct BasicConstraintsExtension__Fields {
    struct X509Extension_2__Fields _;
    bool cA;
    int32_t pathLenConstraint;
};

struct BasicConstraintsExtension {
    struct BasicConstraintsExtension__Class *klass;
    MonitorData *monitor;
    struct BasicConstraintsExtension__Fields fields;
};

struct BasicConstraintsExtension__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Decode;
    VirtualInvokeData Encode;
    VirtualInvokeData get_Name;
};

struct BasicConstraintsExtension__StaticFields {
};

struct BasicConstraintsExtension__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BasicConstraintsExtension__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BasicConstraintsExtension__VTable vtable;
};

struct ExtendedKeyUsageExtension__Fields {
    struct X509Extension_2__Fields _;
    struct ArrayList *keyPurpose;
};

struct ExtendedKeyUsageExtension {
    struct ExtendedKeyUsageExtension__Class *klass;
    MonitorData *monitor;
    struct ExtendedKeyUsageExtension__Fields fields;
};

struct ExtendedKeyUsageExtension__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Decode;
    VirtualInvokeData Encode;
    VirtualInvokeData get_Name;
};

struct ExtendedKeyUsageExtension__StaticFields {
};

struct ExtendedKeyUsageExtension__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExtendedKeyUsageExtension__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExtendedKeyUsageExtension__VTable vtable;
};

struct __declspec(align(8)) GeneralNames__Fields {
    struct ArrayList *rfc822Name;
    struct ArrayList *dnsName;
    struct ArrayList *directoryNames;
    struct ArrayList *uris;
    struct ArrayList *ipAddr;
};

struct GeneralNames {
    struct GeneralNames__Class *klass;
    MonitorData *monitor;
    struct GeneralNames__Fields fields;
};

struct GeneralNames__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralNames__StaticFields {
};

struct GeneralNames__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralNames__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralNames__VTable vtable;
};

struct KeyUsageExtension__Fields {
    struct X509Extension_2__Fields _;
    int32_t kubits;
};

struct KeyUsageExtension {
    struct KeyUsageExtension__Class *klass;
    MonitorData *monitor;
    struct KeyUsageExtension__Fields fields;
};

struct KeyUsageExtension__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Decode;
    VirtualInvokeData Encode;
    VirtualInvokeData get_Name;
};

struct KeyUsageExtension__StaticFields {
};

struct KeyUsageExtension__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyUsageExtension__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyUsageExtension__VTable vtable;
};

enum class KeyUsages__Enum : int32_t {
    digitalSignature = 0x00000080,
    nonRepudiation = 0x00000040,
    keyEncipherment = 0x00000020,
    dataEncipherment = 0x00000010,
    keyAgreement = 0x00000008,
    keyCertSign = 0x00000004,
    cRLSign = 0x00000002,
    encipherOnly = 0x00000001,
    decipherOnly = 0x00000800,
    none = 0x00000000,
};

struct KeyUsages__Enum__Boxed {
    struct KeyUsages__Enum__Class *klass;
    MonitorData *monitor;
    KeyUsages__Enum value;
    
};

}
