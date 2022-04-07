namespace app {
struct X509Certificate_2 {
  struct X509Certificate_2__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate_2__Fields fields;
};
struct __declspec(align(8)) ASN1_1__Fields {
  uint8_t m_nTag;
  struct Byte__Array * m_aValue;
  struct ArrayList * elist;
};
struct ASN1_1 {
  struct ASN1_1__Class *klass;
  struct MonitorData *monitor;
  struct ASN1_1__Fields fields;
};
struct X509ExtensionCollection_1__Fields {
  struct CollectionBase__Fields _;
  bool readOnly;
};
struct X509ExtensionCollection_1 {
  struct X509ExtensionCollection_1__Class *klass;
  struct MonitorData *monitor;
  struct X509ExtensionCollection_1__Fields fields;
};
struct PublicKey__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PublicKey__StaticFields {
  struct Byte__Array * Empty;
};
struct PublicKey__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PublicKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PublicKey__VTable vtable;
};
struct ASN1_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetBytes;
};
struct ASN1_1__StaticFields {
};
struct ASN1_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ASN1_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ASN1_1__VTable vtable;
};
struct X509ExtensionCollection_1__VTable {
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
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData OnSet;
  VirtualInvokeData OnInsert;
  VirtualInvokeData OnClear;
  VirtualInvokeData OnRemove;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnSetComplete;
  VirtualInvokeData OnInsertComplete;
  VirtualInvokeData OnClearComplete;
  VirtualInvokeData OnRemoveComplete;
};
struct X509ExtensionCollection_1__StaticFields {
};
struct X509ExtensionCollection_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ExtensionCollection_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ExtensionCollection_1__VTable vtable;
};
struct X509Certificate_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_IssuerName;
  VirtualInvokeData get_KeyAlgorithm;
  VirtualInvokeData get_KeyAlgorithmParameters;
  VirtualInvokeData set_KeyAlgorithmParameters;
  VirtualInvokeData get_PublicKey;
  VirtualInvokeData get_RSA;
  VirtualInvokeData set_RSA;
  VirtualInvokeData get_RawData;
  VirtualInvokeData get_SerialNumber;
  VirtualInvokeData get_Signature;
  VirtualInvokeData get_SignatureAlgorithm;
  VirtualInvokeData get_SignatureAlgorithmParameters;
  VirtualInvokeData get_SubjectName;
  VirtualInvokeData get_ValidFrom;
  VirtualInvokeData get_ValidUntil;
  VirtualInvokeData GetObjectData_1;
};
struct X509Certificate_2__StaticFields {
  struct String * encoding_error;
};
struct X509Certificate_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate_2__VTable vtable;
};

enum X500DistinguishedNameFlags__Enum : int32_t {
  X500DistinguishedNameFlags__Enum_None = 0,
  X500DistinguishedNameFlags__Enum_Reversed = 1,
  X500DistinguishedNameFlags__Enum_UseSemicolons = 16,
  X500DistinguishedNameFlags__Enum_DoNotUsePlusSign = 32,
  X500DistinguishedNameFlags__Enum_DoNotUseQuotes = 64,
  X500DistinguishedNameFlags__Enum_UseCommas = 128,
  X500DistinguishedNameFlags__Enum_UseNewLines = 256,
  X500DistinguishedNameFlags__Enum_UseUTF8Encoding = 4096,
  X500DistinguishedNameFlags__Enum_UseT61Encoding = 8192,
  X500DistinguishedNameFlags__Enum_ForceUTF8Encoding = 16384,
};
struct X500DistinguishedNameFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X500DistinguishedNameFlags__Enum value;
};

struct X509Extension_1__Fields {
  struct AsnEncodedData__Fields _;
  bool _critical;
};
struct X509Extension_1 {
  struct X509Extension_1__Class *klass;
  struct MonitorData *monitor;
  struct X509Extension_1__Fields fields;
};
enum AsnDecodeStatus__Enum : int32_t {
  AsnDecodeStatus__Enum_NotDecoded = -1,
  AsnDecodeStatus__Enum_Ok = 0,
  AsnDecodeStatus__Enum_BadAsn = 1,
  AsnDecodeStatus__Enum_BadTag = 2,
  AsnDecodeStatus__Enum_BadLength = 3,
  AsnDecodeStatus__Enum_InformationNotAvailable = 4,
};
struct AsnDecodeStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AsnDecodeStatus__Enum value;
};
struct X509BasicConstraintsExtension__Fields {
  struct X509Extension_1__Fields _;
  bool _certificateAuthority;
  bool _hasPathLengthConstraint;
  int32_t _pathLengthConstraint;
  enum AsnDecodeStatus__Enum _status;
};
struct X509BasicConstraintsExtension {
  struct X509BasicConstraintsExtension__Class *klass;
  struct MonitorData *monitor;
  struct X509BasicConstraintsExtension__Fields fields;
};
struct X509Extension_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyFrom;
  VirtualInvokeData Format;
  VirtualInvokeData ToString_1;
};
struct X509Extension_1__StaticFields {
};
struct X509Extension_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Extension_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Extension_1__VTable vtable;
};
struct X509BasicConstraintsExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyFrom;
  VirtualInvokeData Format;
  VirtualInvokeData ToString_1;
};
struct X509BasicConstraintsExtension__StaticFields {
};
struct X509BasicConstraintsExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509BasicConstraintsExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509BasicConstraintsExtension__VTable vtable;
};

struct X509Certificate2Impl__Fields {
  struct X509CertificateImpl__Fields _;
};
struct X509Certificate2Impl {
  struct X509Certificate2Impl__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate2Impl__Fields fields;
};
struct X509Certificate2ImplMono__Fields {
  struct X509Certificate2Impl__Fields _;
  bool _archived;
  struct X509ExtensionCollection_2 * _extensions;
  struct PublicKey * _publicKey;
  struct X500DistinguishedName * issuer_name;
  struct X500DistinguishedName * subject_name;
  struct Oid * signature_algorithm;
  struct X509CertificateImplCollection * intermediateCerts;
  struct X509Certificate_2 * _cert;
};
struct X509Certificate2ImplMono {
  struct X509Certificate2ImplMono__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate2ImplMono__Fields fields;
};
struct __declspec(align(8)) X509ExtensionCollection_2__Fields {
  struct ArrayList * _list;
};
struct X509ExtensionCollection_2 {
  struct X509ExtensionCollection_2__Class *klass;
  struct MonitorData *monitor;
  struct X509ExtensionCollection_2__Fields fields;
};
struct __declspec(align(8)) X509CertificateImplCollection__Fields {
  struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_ * list;
};
struct X509CertificateImplCollection {
  struct X509CertificateImplCollection__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateImplCollection__Fields fields;
};
struct __declspec(align(8)) List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Fields {
  struct X509CertificateImpl__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_ {
  struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Fields fields;
};
struct X509CertificateImpl__Array {
  struct X509CertificateImpl__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct X509CertificateImpl * vector[32];
};
struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_ {
  struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class *klass;
  struct MonitorData *monitor;
};
enum X509NameType__Enum : int32_t {
  X509NameType__Enum_SimpleName = 0,
  X509NameType__Enum_EmailName = 1,
  X509NameType__Enum_UpnName = 2,
  X509NameType__Enum_DnsName = 3,
  X509NameType__Enum_DnsFromAlternativeName = 4,
  X509NameType__Enum_UrlName = 5,
};
struct X509NameType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509NameType__Enum value;
};
struct X509ExtensionCollection_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct X509ExtensionCollection_2__StaticFields {
  struct Byte__Array * Empty;
};
struct X509ExtensionCollection_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ExtensionCollection_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ExtensionCollection_2__VTable vtable;
};
struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields {
};
struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable vtable;
};
struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable {
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
struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields {
  struct X509CertificateImpl__Array * _emptyArray;
};
struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable vtable;
};
struct X509CertificateImplCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
};
struct X509CertificateImplCollection__StaticFields {
};
struct X509CertificateImplCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateImplCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateImplCollection__VTable vtable;
};
struct X509Certificate2ImplMono__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_IsValid;
  VirtualInvokeData Clone;
  VirtualInvokeData GetIssuerName;
  VirtualInvokeData GetSubjectName;
  VirtualInvokeData GetRawCertData;
  VirtualInvokeData GetValidFrom;
  VirtualInvokeData GetValidUntil;
  VirtualInvokeData GetCertHash;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetPublicKey;
  VirtualInvokeData GetSerialNumber;
  VirtualInvokeData ToString_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_Extensions;
  VirtualInvokeData get_IssuerName;
  VirtualInvokeData get_PrivateKey;
  VirtualInvokeData set_PrivateKey;
  VirtualInvokeData get_PublicKey;
  VirtualInvokeData get_SignatureAlgorithm;
  VirtualInvokeData get_SubjectName;
  VirtualInvokeData get_Version;
  VirtualInvokeData get_IntermediateCertificates;
  VirtualInvokeData get_FallbackImpl;
  VirtualInvokeData GetNameInfo;
  VirtualInvokeData Import;
  VirtualInvokeData Verify;
  VirtualInvokeData Reset;
};
struct X509Certificate2ImplMono__StaticFields {
  struct String * empty_error;
  struct Byte__Array * commonName;
  struct Byte__Array * email;
  struct Byte__Array * signedData;
};
struct X509Certificate2ImplMono__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate2ImplMono__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate2ImplMono__VTable vtable;
};
struct X509Certificate2Impl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
  VirtualInvokeData __unknown_9;
  VirtualInvokeData __unknown_10;
  VirtualInvokeData __unknown_11;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData __unknown_12;
  VirtualInvokeData __unknown_13;
  VirtualInvokeData __unknown_14;
  VirtualInvokeData __unknown_15;
  VirtualInvokeData __unknown_16;
  VirtualInvokeData __unknown_17;
  VirtualInvokeData __unknown_18;
  VirtualInvokeData __unknown_19;
  VirtualInvokeData __unknown_20;
  VirtualInvokeData __unknown_21;
  VirtualInvokeData __unknown_22;
  VirtualInvokeData __unknown_23;
  VirtualInvokeData __unknown_24;
  VirtualInvokeData __unknown_25;
};
struct X509Certificate2Impl__StaticFields {
};
struct X509Certificate2Impl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate2Impl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate2Impl__VTable vtable;
};

enum X509FindType__Enum : int32_t {
  X509FindType__Enum_FindByThumbprint = 0,
  X509FindType__Enum_FindBySubjectName = 1,
  X509FindType__Enum_FindBySubjectDistinguishedName = 2,
  X509FindType__Enum_FindByIssuerName = 3,
  X509FindType__Enum_FindByIssuerDistinguishedName = 4,
  X509FindType__Enum_FindBySerialNumber = 5,
  X509FindType__Enum_FindByTimeValid = 6,
  X509FindType__Enum_FindByTimeNotYetValid = 7,
  X509FindType__Enum_FindByTimeExpired = 8,
  X509FindType__Enum_FindByTemplateName = 9,
  X509FindType__Enum_FindByApplicationPolicy = 10,
  X509FindType__Enum_FindByCertificatePolicy = 11,
  X509FindType__Enum_FindByExtension = 12,
  X509FindType__Enum_FindByKeyUsage = 13,
  X509FindType__Enum_FindBySubjectKeyIdentifier = 14,
};
struct X509FindType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509FindType__Enum value;
};

struct __declspec(align(8)) X509Certificate2Enumerator__Fields {
  struct IEnumerator * enumerator;
};
struct X509Certificate2Enumerator {
  struct X509Certificate2Enumerator__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate2Enumerator__Fields fields;
};
struct X509Certificate2Enumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEnumerator_MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct X509Certificate2Enumerator__StaticFields {
};
struct X509Certificate2Enumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate2Enumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate2Enumerator__VTable vtable;
};

struct X509Certificate_1__Array {
  struct X509Certificate_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct X509Certificate_1 * vector[32];
};

struct __declspec(align(8)) X509CertificateCollection_X509CertificateEnumerator_1__Fields {
  struct IEnumerator * enumerator;
};
struct X509CertificateCollection_X509CertificateEnumerator_1 {
  struct X509CertificateCollection_X509CertificateEnumerator_1__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateCollection_X509CertificateEnumerator_1__Fields fields;
};
struct X509CertificateCollection_X509CertificateEnumerator_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEnumerator_MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct X509CertificateCollection_X509CertificateEnumerator_1__StaticFields {
};
struct X509CertificateCollection_X509CertificateEnumerator_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateCollection_X509CertificateEnumerator_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateCollection_X509CertificateEnumerator_1__VTable vtable;
};

struct __declspec(align(8)) X509ChainElementEnumerator__Fields {
  struct IEnumerator * enumerator;
};
struct X509ChainElementEnumerator {
  struct X509ChainElementEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct X509ChainElementEnumerator__Fields fields;
};
struct X509ChainElementEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
};
struct X509ChainElementEnumerator__StaticFields {
};
struct X509ChainElementEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ChainElementEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ChainElementEnumerator__VTable vtable;
};

struct IEnumerable {
  struct IEnumerable__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable__VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable__StaticFields {
};
struct IEnumerable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable__VTable vtable;
};

struct __declspec(align(8)) X509Crl__Fields {
  struct String * issuer;
  uint8_t version;
  struct DateTime thisUpdate;
  struct DateTime nextUpdate;
  struct ArrayList * entries;
  struct String * signatureOID;
  struct Byte__Array * signature;
  struct X509ExtensionCollection_1 * extensions;
  struct Byte__Array * encoded;
  struct Byte__Array * hash_value;
};
struct X509Crl {
  struct X509Crl__Class *klass;
  struct MonitorData *monitor;
  struct X509Crl__Fields fields;
};
struct X509Crl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509Crl__StaticFields {
};
struct X509Crl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Crl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Crl__VTable vtable;
};

struct __declspec(align(8)) X509Extension_2__Fields {
  struct String * extnOid;
  bool extnCritical;
  struct ASN1_1 * extnValue;
};
struct X509Extension_2 {
  struct X509Extension_2__Class *klass;
  struct MonitorData *monitor;
  struct X509Extension_2__Fields fields;
};
struct X509Extension_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Decode;
  VirtualInvokeData Encode;
  VirtualInvokeData get_Name;
};
struct X509Extension_2__StaticFields {
};
struct X509Extension_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Extension_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Extension_2__VTable vtable;
};

struct __declspec(align(8)) X509Crl_X509CrlEntry__Fields {
  struct Byte__Array * sn;
  struct DateTime revocationDate;
  struct X509ExtensionCollection_1 * extensions;
};
struct X509Crl_X509CrlEntry {
  struct X509Crl_X509CrlEntry__Class *klass;
  struct MonitorData *monitor;
  struct X509Crl_X509CrlEntry__Fields fields;
};
struct X509Crl_X509CrlEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509Crl_X509CrlEntry__StaticFields {
};
struct X509Crl_X509CrlEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Crl_X509CrlEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Crl_X509CrlEntry__VTable vtable;
};

struct X509EnhancedKeyUsageExtension__Fields {
  struct X509Extension_1__Fields _;
  struct OidCollection * _enhKeyUsage;
  enum AsnDecodeStatus__Enum _status;
};
struct X509EnhancedKeyUsageExtension {
  struct X509EnhancedKeyUsageExtension__Class *klass;
  struct MonitorData *monitor;
  struct X509EnhancedKeyUsageExtension__Fields fields;
};
struct X509EnhancedKeyUsageExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyFrom;
  VirtualInvokeData Format;
  VirtualInvokeData ToString_1;
};
struct X509EnhancedKeyUsageExtension__StaticFields {
};
struct X509EnhancedKeyUsageExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509EnhancedKeyUsageExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509EnhancedKeyUsageExtension__VTable vtable;
};

struct __declspec(align(8)) X509ExtensionEnumerator__Fields {
  struct IEnumerator * enumerator;
};
struct X509ExtensionEnumerator {
  struct X509ExtensionEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct X509ExtensionEnumerator__Fields fields;
};
struct X509ExtensionEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
};
struct X509ExtensionEnumerator__StaticFields {
};
struct X509ExtensionEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ExtensionEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ExtensionEnumerator__VTable vtable;
};

struct X509Helper2_MyNativeHelper {
  struct X509Helper2_MyNativeHelper__Class *klass;
  struct MonitorData *monitor;
};
struct X509Helper2_MyNativeHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Import;
};
struct X509Helper2_MyNativeHelper__StaticFields {
};
struct X509Helper2_MyNativeHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Helper2_MyNativeHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Helper2_MyNativeHelper__VTable vtable;
};

enum X509KeyUsageFlags__Enum : int32_t {
  X509KeyUsageFlags__Enum_None = 0,
  X509KeyUsageFlags__Enum_EncipherOnly = 1,
  X509KeyUsageFlags__Enum_CrlSign = 2,
  X509KeyUsageFlags__Enum_KeyCertSign = 4,
  X509KeyUsageFlags__Enum_KeyAgreement = 8,
  X509KeyUsageFlags__Enum_DataEncipherment = 16,
  X509KeyUsageFlags__Enum_KeyEncipherment = 32,
  X509KeyUsageFlags__Enum_NonRepudiation = 64,
  X509KeyUsageFlags__Enum_DigitalSignature = 128,
  X509KeyUsageFlags__Enum_DecipherOnly = 32768,
};
struct X509KeyUsageFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509KeyUsageFlags__Enum value;
};
struct X509KeyUsageExtension__Fields {
  struct X509Extension_1__Fields _;
  enum X509KeyUsageFlags__Enum _keyUsages;
  enum AsnDecodeStatus__Enum _status;
};
struct X509KeyUsageExtension {
  struct X509KeyUsageExtension__Class *klass;
  struct MonitorData *monitor;
  struct X509KeyUsageExtension__Fields fields;
};
struct X509KeyUsageExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyFrom;
  VirtualInvokeData Format;
  VirtualInvokeData ToString_1;
};
struct X509KeyUsageExtension__StaticFields {
};
struct X509KeyUsageExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509KeyUsageExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509KeyUsageExtension__VTable vtable;
};

enum StoreName__Enum : int32_t {
  StoreName__Enum_AddressBook = 1,
  StoreName__Enum_AuthRoot = 2,
  StoreName__Enum_CertificateAuthority = 3,
  StoreName__Enum_Disallowed = 4,
  StoreName__Enum_My = 5,
  StoreName__Enum_Root = 6,
  StoreName__Enum_TrustedPeople = 7,
  StoreName__Enum_TrustedPublisher = 8,
};
struct StoreName__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StoreName__Enum value;
};

struct __declspec(align(8)) X509Stores__Fields {
  struct String * _storePath;
  bool _newFormat;
  struct X509Store_1 * _personal;
  struct X509Store_1 * _other;
  struct X509Store_1 * _intermediate;
  struct X509Store_1 * _trusted;
  struct X509Store_1 * _untrusted;
};
struct X509Stores {
  struct X509Stores__Class *klass;
  struct MonitorData *monitor;
  struct X509Stores__Fields fields;
};
struct X509Stores__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509Stores__StaticFields {
};
struct X509Stores__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Stores__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Stores__VTable vtable;
};

struct X509SubjectKeyIdentifierExtension__Fields {
  struct X509Extension_1__Fields _;
  struct Byte__Array * _subjectKeyIdentifier;
  struct String * _ski;
  enum AsnDecodeStatus__Enum _status;
};
struct X509SubjectKeyIdentifierExtension {
  struct X509SubjectKeyIdentifierExtension__Class *klass;
  struct MonitorData *monitor;
  struct X509SubjectKeyIdentifierExtension__Fields fields;
};
struct X509SubjectKeyIdentifierExtension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyFrom;
  VirtualInvokeData Format;
  VirtualInvokeData ToString_1;
};
struct X509SubjectKeyIdentifierExtension__StaticFields {
};
struct X509SubjectKeyIdentifierExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509SubjectKeyIdentifierExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509SubjectKeyIdentifierExtension__VTable vtable;
};

enum X509SubjectKeyIdentifierHashAlgorithm__Enum : int32_t {
  X509SubjectKeyIdentifierHashAlgorithm__Enum_Sha1 = 0,
  X509SubjectKeyIdentifierHashAlgorithm__Enum_ShortSha1 = 1,
  X509SubjectKeyIdentifierHashAlgorithm__Enum_CapiSha1 = 2,
};
struct X509SubjectKeyIdentifierHashAlgorithm__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509SubjectKeyIdentifierHashAlgorithm__Enum value;
};

struct __declspec(align(8)) GeneratedCodeAttribute__Fields {
  struct String * tool;
  struct String * version;
};
struct GeneratedCodeAttribute {
  struct GeneratedCodeAttribute__Class *klass;
  struct MonitorData *monitor;
  struct GeneratedCodeAttribute__Fields fields;
};
struct GeneratedCodeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct GeneratedCodeAttribute__StaticFields {
};
struct GeneratedCodeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneratedCodeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneratedCodeAttribute__VTable vtable;
};

struct FileSystemWatcher__Fields {
  struct Component__Fields _;
};
struct FileSystemWatcher {
  struct FileSystemWatcher__Class *klass;
  struct MonitorData *monitor;
  struct FileSystemWatcher__Fields fields;
};
struct FileSystemWatcher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData get_Site;
  VirtualInvokeData set_Site;
  VirtualInvokeData add_Disposed;
  VirtualInvokeData remove_Disposed;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRaiseEvents;
  VirtualInvokeData get_Site_1;
  VirtualInvokeData set_Site_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData GetService;
  VirtualInvokeData BeginInit;
  VirtualInvokeData EndInit;
};
struct FileSystemWatcher__StaticFields {
};
struct FileSystemWatcher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileSystemWatcher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileSystemWatcher__VTable vtable;
};}