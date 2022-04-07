namespace app {
struct X509CertificateCollection_X509CertificateEnumerator_2 {
  struct X509CertificateCollection_X509CertificateEnumerator_2__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateCollection_X509CertificateEnumerator_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateCollection_X509CertificateEnumerator_2__VTable vtable;
};

enum X509ChainStatusFlags__Enum_1 : int32_t {
  X509ChainStatusFlags__Enum_1_InvalidBasicConstraints = 1024,
  X509ChainStatusFlags__Enum_1_NoError = 0,
  X509ChainStatusFlags__Enum_1_NotSignatureValid = 8,
  X509ChainStatusFlags__Enum_1_NotTimeNested = 2,
  X509ChainStatusFlags__Enum_1_NotTimeValid = 1,
  X509ChainStatusFlags__Enum_1_PartialChain = 65536,
  X509ChainStatusFlags__Enum_1_UntrustedRoot = 32,
};
struct X509ChainStatusFlags__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509ChainStatusFlags__Enum_1 value;
};
struct __declspec(align(8)) X509Chain_1__Fields {
  struct X509CertificateCollection_2 * roots;
  struct X509CertificateCollection_2 * certs;
  struct X509Certificate_2 * _root;
  struct X509CertificateCollection_2 * _chain;
  enum X509ChainStatusFlags__Enum_1 _status;
};
struct X509Chain_1 {
  struct X509Chain_1__Class *klass;
  struct MonitorData *monitor;
  struct X509Chain_1__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Chain_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Chain_1__VTable vtable;
};

struct X509Extension_2__Array {
  struct X509Extension_2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct X509Extension_2 * vector[32];
};

struct X509StoreManager {
  struct X509StoreManager__Class *klass;
  struct MonitorData *monitor;
};
struct X509StoreManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509StoreManager__StaticFields {
  struct String * _userPath;
  struct String * _localMachinePath;
  struct String * _newUserPath;
  struct String * _newLocalMachinePath;
  struct X509Stores * _userStore;
  struct X509Stores * _machineStore;
  struct X509Stores * _newUserStore;
  struct X509Stores * _newMachineStore;
};
struct X509StoreManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509StoreManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509StoreManager__VTable vtable;
};

struct X509Stores_Names {
  struct X509Stores_Names__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Stores_Names__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Stores_Names__VTable vtable;
};

struct X520 {
  struct X520__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520__VTable vtable;
};

struct X520_Name__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_Name {
  struct X520_Name__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_Name__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_Name__VTable vtable;
};

struct X520_CommonName__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_CommonName {
  struct X520_CommonName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_CommonName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_CommonName__VTable vtable;
};

struct X520_SerialNumber__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_SerialNumber {
  struct X520_SerialNumber__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_SerialNumber__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_SerialNumber__VTable vtable;
};

struct X520_LocalityName__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_LocalityName {
  struct X520_LocalityName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_LocalityName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_LocalityName__VTable vtable;
};

struct X520_StateOrProvinceName__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_StateOrProvinceName {
  struct X520_StateOrProvinceName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_StateOrProvinceName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_StateOrProvinceName__VTable vtable;
};

struct X520_OrganizationName__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_OrganizationName {
  struct X520_OrganizationName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_OrganizationName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_OrganizationName__VTable vtable;
};

struct X520_OrganizationalUnitName__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_OrganizationalUnitName {
  struct X520_OrganizationalUnitName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_OrganizationalUnitName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_OrganizationalUnitName__VTable vtable;
};

struct X520_EmailAddress__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_EmailAddress {
  struct X520_EmailAddress__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_EmailAddress__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_EmailAddress__VTable vtable;
};

struct X520_DomainComponent__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_DomainComponent {
  struct X520_DomainComponent__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_DomainComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_DomainComponent__VTable vtable;
};

struct X520_UserId__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_UserId {
  struct X520_UserId__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_UserId__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_UserId__VTable vtable;
};

struct X520_Oid__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_Oid {
  struct X520_Oid__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_Oid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_Oid__VTable vtable;
};

struct X520_Title__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_Title {
  struct X520_Title__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_Title__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_Title__VTable vtable;
};

struct X520_CountryName__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_CountryName {
  struct X520_CountryName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_CountryName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_CountryName__VTable vtable;
};

struct X520_DnQualifier__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_DnQualifier {
  struct X520_DnQualifier__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_DnQualifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_DnQualifier__VTable vtable;
};

struct X520_Surname__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_Surname {
  struct X520_Surname__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_Surname__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_Surname__VTable vtable;
};

struct X520_GivenName__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_GivenName {
  struct X520_GivenName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_GivenName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_GivenName__VTable vtable;
};

struct X520_Initial__Fields {
  struct X520_AttributeTypeAndValue__Fields _;
};
struct X520_Initial {
  struct X520_Initial__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_Initial__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_Initial__VTable vtable;
};

struct AuthorityKeyIdentifierExtension__Fields {
  struct X509Extension_2__Fields _;
  struct Byte__Array * aki;
};
struct AuthorityKeyIdentifierExtension {
  struct AuthorityKeyIdentifierExtension__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AuthorityKeyIdentifierExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AuthorityKeyIdentifierExtension__VTable vtable;
};

struct BasicConstraintsExtension__Fields {
  struct X509Extension_2__Fields _;
  bool cA;
  int32_t pathLenConstraint;
};
struct BasicConstraintsExtension {
  struct BasicConstraintsExtension__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BasicConstraintsExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BasicConstraintsExtension__VTable vtable;
};

struct ExtendedKeyUsageExtension__Fields {
  struct X509Extension_2__Fields _;
  struct ArrayList * keyPurpose;
};
struct ExtendedKeyUsageExtension {
  struct ExtendedKeyUsageExtension__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExtendedKeyUsageExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExtendedKeyUsageExtension__VTable vtable;
};

struct __declspec(align(8)) GeneralNames__Fields {
  struct ArrayList * rfc822Name;
  struct ArrayList * dnsName;
  struct ArrayList * directoryNames;
  struct ArrayList * uris;
  struct ArrayList * ipAddr;
};
struct GeneralNames {
  struct GeneralNames__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralNames__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralNames__VTable vtable;
};

struct KeyUsageExtension__Fields {
  struct X509Extension_2__Fields _;
  int32_t kubits;
};
struct KeyUsageExtension {
  struct KeyUsageExtension__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyUsageExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyUsageExtension__VTable vtable;
};

enum KeyUsages__Enum : int32_t {
  KeyUsages__Enum_digitalSignature = 128,
  KeyUsages__Enum_nonRepudiation = 64,
  KeyUsages__Enum_keyEncipherment = 32,
  KeyUsages__Enum_dataEncipherment = 16,
  KeyUsages__Enum_keyAgreement = 8,
  KeyUsages__Enum_keyCertSign = 4,
  KeyUsages__Enum_cRLSign = 2,
  KeyUsages__Enum_encipherOnly = 1,
  KeyUsages__Enum_decipherOnly = 2048,
  KeyUsages__Enum_none = 0,
};
struct KeyUsages__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KeyUsages__Enum value;
};

struct NetscapeCertTypeExtension__Fields {
  struct X509Extension_2__Fields _;
  int32_t ctbits;
};
struct NetscapeCertTypeExtension {
  struct NetscapeCertTypeExtension__Class *klass;
  struct MonitorData *monitor;
  struct NetscapeCertTypeExtension__Fields fields;
};
struct NetscapeCertTypeExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Decode;
  VirtualInvokeData Encode;
  VirtualInvokeData get_Name;
};
struct NetscapeCertTypeExtension__StaticFields {
};
struct NetscapeCertTypeExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetscapeCertTypeExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetscapeCertTypeExtension__VTable vtable;
};

enum NetscapeCertTypeExtension_CertTypes__Enum : int32_t {
  NetscapeCertTypeExtension_CertTypes__Enum_SslClient = 128,
  NetscapeCertTypeExtension_CertTypes__Enum_SslServer = 64,
  NetscapeCertTypeExtension_CertTypes__Enum_Smime = 32,
  NetscapeCertTypeExtension_CertTypes__Enum_ObjectSigning = 16,
  NetscapeCertTypeExtension_CertTypes__Enum_SslCA = 4,
  NetscapeCertTypeExtension_CertTypes__Enum_SmimeCA = 2,
  NetscapeCertTypeExtension_CertTypes__Enum_ObjectSigningCA = 1,
};
struct NetscapeCertTypeExtension_CertTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NetscapeCertTypeExtension_CertTypes__Enum value;
};

struct SubjectAltNameExtension__Fields {
  struct X509Extension_2__Fields _;
  struct GeneralNames * _names;
};
struct SubjectAltNameExtension {
  struct SubjectAltNameExtension__Class *klass;
  struct MonitorData *monitor;
  struct SubjectAltNameExtension__Fields fields;
};
struct SubjectAltNameExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Decode;
  VirtualInvokeData Encode;
  VirtualInvokeData get_Name;
};
struct SubjectAltNameExtension__StaticFields {
};
struct SubjectAltNameExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SubjectAltNameExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SubjectAltNameExtension__VTable vtable;
};

struct SubjectKeyIdentifierExtension__Fields {
  struct X509Extension_2__Fields _;
  struct Byte__Array * ski;
};
struct SubjectKeyIdentifierExtension {
  struct SubjectKeyIdentifierExtension__Class *klass;
  struct MonitorData *monitor;
  struct SubjectKeyIdentifierExtension__Fields fields;
};
struct SubjectKeyIdentifierExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Decode;
  VirtualInvokeData Encode;
  VirtualInvokeData get_Name;
};
struct SubjectKeyIdentifierExtension__StaticFields {
};
struct SubjectKeyIdentifierExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SubjectKeyIdentifierExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SubjectKeyIdentifierExtension__VTable vtable;
};

enum AlertLevel__Enum : uint8_t {
  AlertLevel__Enum_Warning = 1,
  AlertLevel__Enum_Fatal = 2,
};
struct AlertLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlertLevel__Enum value;
};
enum AlertDescription__Enum_1 : uint8_t {
  AlertDescription__Enum_1_CloseNotify = 0,
  AlertDescription__Enum_1_UnexpectedMessage = 10,
  AlertDescription__Enum_1_BadRecordMAC = 20,
  AlertDescription__Enum_1_DecryptionFailed = 21,
  AlertDescription__Enum_1_RecordOverflow = 22,
  AlertDescription__Enum_1_DecompressionFailiure = 30,
  AlertDescription__Enum_1_HandshakeFailiure = 40,
  AlertDescription__Enum_1_NoCertificate = 41,
  AlertDescription__Enum_1_BadCertificate = 42,
  AlertDescription__Enum_1_UnsupportedCertificate = 43,
  AlertDescription__Enum_1_CertificateRevoked = 44,
  AlertDescription__Enum_1_CertificateExpired = 45,
  AlertDescription__Enum_1_CertificateUnknown = 46,
  AlertDescription__Enum_1_IlegalParameter = 47,
  AlertDescription__Enum_1_UnknownCA = 48,
  AlertDescription__Enum_1_AccessDenied = 49,
  AlertDescription__Enum_1_DecodeError = 50,
  AlertDescription__Enum_1_DecryptError = 51,
  AlertDescription__Enum_1_ExportRestriction = 60,
  AlertDescription__Enum_1_ProtocolVersion = 70,
  AlertDescription__Enum_1_InsuficientSecurity = 71,
  AlertDescription__Enum_1_InternalError = 80,
  AlertDescription__Enum_1_UserCancelled = 90,
  AlertDescription__Enum_1_NoRenegotiation = 100,
};
struct AlertDescription__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlertDescription__Enum_1 value;
};
struct __declspec(align(8)) Alert__Fields {
  enum AlertLevel__Enum level;
  enum AlertDescription__Enum_1 description;
};
struct Alert {
  struct Alert__Class *klass;
  struct MonitorData *monitor;
  struct Alert__Fields fields;
};
struct Alert__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Alert__StaticFields {
};
struct Alert__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Alert__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Alert__VTable vtable;
};

enum CipherAlgorithmType__Enum : int32_t {
  CipherAlgorithmType__Enum_Des = 0,
  CipherAlgorithmType__Enum_None = 1,
  CipherAlgorithmType__Enum_Rc2 = 2,
  CipherAlgorithmType__Enum_Rc4 = 3,
  CipherAlgorithmType__Enum_Rijndael = 4,
  CipherAlgorithmType__Enum_SkipJack = 5,
  CipherAlgorithmType__Enum_TripleDes = 6,
};
struct CipherAlgorithmType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CipherAlgorithmType__Enum value;
};
enum HashAlgorithmType__Enum : int32_t {
  HashAlgorithmType__Enum_Md5 = 0,
  HashAlgorithmType__Enum_None = 1,
  HashAlgorithmType__Enum_Sha1 = 2,
};
struct HashAlgorithmType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HashAlgorithmType__Enum value;
};
enum ExchangeAlgorithmType__Enum : int32_t {
  ExchangeAlgorithmType__Enum_DiffieHellman = 0,
  ExchangeAlgorithmType__Enum_Fortezza = 1,
  ExchangeAlgorithmType__Enum_None = 2,
  ExchangeAlgorithmType__Enum_RsaKeyX = 3,
  ExchangeAlgorithmType__Enum_RsaSign = 4,
};
struct ExchangeAlgorithmType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExchangeAlgorithmType__Enum value;
};
struct __declspec(align(8)) CipherSuite__Fields {
  int16_t code;
  struct String * name;
  enum CipherAlgorithmType__Enum cipherAlgorithmType;
  enum HashAlgorithmType__Enum hashAlgorithmType;
  enum ExchangeAlgorithmType__Enum exchangeAlgorithmType;
  bool isExportable;
  enum CipherMode__Enum cipherMode;
  uint8_t keyMaterialSize;
  int32_t keyBlockSize;
  uint8_t expandedKeyMaterialSize;
  int16_t effectiveKeyBits;
  uint8_t ivSize;
  uint8_t blockSize;
  struct Context_1 * context;
  struct SymmetricAlgorithm * encryptionAlgorithm;
  struct ICryptoTransform * encryptionCipher;
  struct SymmetricAlgorithm * decryptionAlgorithm;
  struct ICryptoTransform * decryptionCipher;
  struct KeyedHashAlgorithm * clientHMAC;
  struct KeyedHashAlgorithm * serverHMAC;
};
struct CipherSuite {
  struct CipherSuite__Class *klass;
  struct MonitorData *monitor;
  struct CipherSuite__Fields fields;
};
enum SecurityProtocolType__Enum_1 : int32_t {
  SecurityProtocolType__Enum_1_Default = -1073741824,
  SecurityProtocolType__Enum_1_Ssl2 = 12,
  SecurityProtocolType__Enum_1_Ssl3 = 48,
  SecurityProtocolType__Enum_1_Tls = 192,
  SecurityProtocolType__Enum_1_Tls11 = 768,
  SecurityProtocolType__Enum_1_Tls12 = 3072,
};
struct SecurityProtocolType__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SecurityProtocolType__Enum_1 value;
};
enum SecurityCompressionType__Enum : int32_t {
  SecurityCompressionType__Enum_None = 0,
  SecurityCompressionType__Enum_Zlib = 1,
};
struct SecurityCompressionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SecurityCompressionType__Enum value;
};
enum HandshakeType__Enum : uint8_t {
  HandshakeType__Enum_HelloRequest = 0,
  HandshakeType__Enum_ClientHello = 1,
  HandshakeType__Enum_ServerHello = 2,
  HandshakeType__Enum_Certificate = 11,
  HandshakeType__Enum_ServerKeyExchange = 12,
  HandshakeType__Enum_CertificateRequest = 13,
  HandshakeType__Enum_ServerHelloDone = 14,
  HandshakeType__Enum_CertificateVerify = 15,
  HandshakeType__Enum_ClientKeyExchange = 16,
  HandshakeType__Enum_Finished = 20,
  HandshakeType__Enum_None = 255,
};}