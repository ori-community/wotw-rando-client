namespace app {
struct X509ChainImplMono {
  struct X509ChainImplMono__Class *klass;
  struct MonitorData *monitor;
  struct X509ChainImplMono__Fields fields;
};
struct __declspec(align(8)) X509ChainElementCollection__Fields {
  struct ArrayList * _list;
};
struct X509ChainElementCollection {
  struct X509ChainElementCollection__Class *klass;
  struct MonitorData *monitor;
  struct X509ChainElementCollection__Fields fields;
};
enum X509RevocationFlag__Enum : int32_t {
  X509RevocationFlag__Enum_EndCertificateOnly = 0,
  X509RevocationFlag__Enum_EntireChain = 1,
  X509RevocationFlag__Enum_ExcludeRoot = 2,
};
struct X509RevocationFlag__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509RevocationFlag__Enum value;
};
enum X509RevocationMode__Enum : int32_t {
  X509RevocationMode__Enum_NoCheck = 0,
  X509RevocationMode__Enum_Online = 1,
  X509RevocationMode__Enum_Offline = 2,
};
struct X509RevocationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509RevocationMode__Enum value;
};
enum X509VerificationFlags__Enum : int32_t {
  X509VerificationFlags__Enum_NoFlag = 0,
  X509VerificationFlags__Enum_IgnoreNotTimeValid = 1,
  X509VerificationFlags__Enum_IgnoreCtlNotTimeValid = 2,
  X509VerificationFlags__Enum_IgnoreNotTimeNested = 4,
  X509VerificationFlags__Enum_IgnoreInvalidBasicConstraints = 8,
  X509VerificationFlags__Enum_AllowUnknownCertificateAuthority = 16,
  X509VerificationFlags__Enum_IgnoreWrongUsage = 32,
  X509VerificationFlags__Enum_IgnoreInvalidName = 64,
  X509VerificationFlags__Enum_IgnoreInvalidPolicy = 128,
  X509VerificationFlags__Enum_IgnoreEndRevocationUnknown = 256,
  X509VerificationFlags__Enum_IgnoreCtlSignerRevocationUnknown = 512,
  X509VerificationFlags__Enum_IgnoreCertificateAuthorityRevocationUnknown = 1024,
  X509VerificationFlags__Enum_IgnoreRootRevocationUnknown = 2048,
  X509VerificationFlags__Enum_AllFlags = 4095,
};
struct X509VerificationFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509VerificationFlags__Enum value;
};
struct __declspec(align(8)) X509ChainPolicy__Fields {
  struct OidCollection * apps;
  struct OidCollection * cert;
  struct X509CertificateCollection_1 * store;
  struct X509Certificate2Collection * store2;
  enum X509RevocationFlag__Enum rflag;
  enum X509RevocationMode__Enum mode;
  struct TimeSpan timeout;
  enum X509VerificationFlags__Enum vflags;
  struct DateTime vtime;
};
struct X509ChainPolicy {
  struct X509ChainPolicy__Class *klass;
  struct MonitorData *monitor;
  struct X509ChainPolicy__Fields fields;
};
struct __declspec(align(8)) OidCollection__Fields {
  struct ArrayList * m_list;
};
struct OidCollection {
  struct OidCollection__Class *klass;
  struct MonitorData *monitor;
  struct OidCollection__Fields fields;
};
struct X509Certificate2Collection__Fields {
  struct X509CertificateCollection_1__Fields _;
};
struct X509Certificate2Collection {
  struct X509Certificate2Collection__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate2Collection__Fields fields;
};
enum X509ChainStatusFlags__Enum : int32_t {
  X509ChainStatusFlags__Enum_NoError = 0,
  X509ChainStatusFlags__Enum_NotTimeValid = 1,
  X509ChainStatusFlags__Enum_NotTimeNested = 2,
  X509ChainStatusFlags__Enum_Revoked = 4,
  X509ChainStatusFlags__Enum_NotSignatureValid = 8,
  X509ChainStatusFlags__Enum_NotValidForUsage = 16,
  X509ChainStatusFlags__Enum_UntrustedRoot = 32,
  X509ChainStatusFlags__Enum_RevocationStatusUnknown = 64,
  X509ChainStatusFlags__Enum_Cyclic = 128,
  X509ChainStatusFlags__Enum_InvalidExtension = 256,
  X509ChainStatusFlags__Enum_InvalidPolicyConstraints = 512,
  X509ChainStatusFlags__Enum_InvalidBasicConstraints = 1024,
  X509ChainStatusFlags__Enum_InvalidNameConstraints = 2048,
  X509ChainStatusFlags__Enum_HasNotSupportedNameConstraint = 4096,
  X509ChainStatusFlags__Enum_HasNotDefinedNameConstraint = 8192,
  X509ChainStatusFlags__Enum_HasNotPermittedNameConstraint = 16384,
  X509ChainStatusFlags__Enum_HasExcludedNameConstraint = 32768,
  X509ChainStatusFlags__Enum_PartialChain = 65536,
  X509ChainStatusFlags__Enum_CtlNotTimeValid = 131072,
  X509ChainStatusFlags__Enum_CtlNotSignatureValid = 262144,
  X509ChainStatusFlags__Enum_CtlNotValidForUsage = 524288,
  X509ChainStatusFlags__Enum_OfflineRevocation = 16777216,
  X509ChainStatusFlags__Enum_NoIssuanceChainPolicy = 33554432,
  X509ChainStatusFlags__Enum_ExplicitDistrust = 67108864,
  X509ChainStatusFlags__Enum_HasNotSupportedCriticalExtension = 134217728,
  X509ChainStatusFlags__Enum_HasWeakSignature = 1048576,
};
struct X509ChainStatusFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509ChainStatusFlags__Enum value;
};
struct X509ChainStatus {
  enum X509ChainStatusFlags__Enum status;
  struct String * info;
};
struct X509ChainStatus__Boxed {
  struct X509ChainStatus__Class *klass;
  struct MonitorData *monitor;
  struct X509ChainStatus fields;
};
struct X509ChainStatus__Array {
  struct X509ChainStatus__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct X509ChainStatus vector[32];
};
struct __declspec(align(8)) AsnEncodedData__Fields {
  struct Oid * _oid;
  struct Byte__Array * _raw;
};
struct AsnEncodedData {
  struct AsnEncodedData__Class *klass;
  struct MonitorData *monitor;
  struct AsnEncodedData__Fields fields;
};
struct X500DistinguishedName__Fields {
  struct AsnEncodedData__Fields _;
  struct String * name;
  struct Byte__Array * canonEncoding;
};
struct X500DistinguishedName {
  struct X500DistinguishedName__Class *klass;
  struct MonitorData *monitor;
  struct X500DistinguishedName__Fields fields;
};
enum OidGroup__Enum : int32_t {
  OidGroup__Enum_All = 0,
  OidGroup__Enum_HashAlgorithm = 1,
  OidGroup__Enum_EncryptionAlgorithm = 2,
  OidGroup__Enum_PublicKeyAlgorithm = 3,
  OidGroup__Enum_SignatureAlgorithm = 4,
  OidGroup__Enum_Attribute = 5,
  OidGroup__Enum_ExtensionOrAttribute = 6,
  OidGroup__Enum_EnhancedKeyUsage = 7,
  OidGroup__Enum_Policy = 8,
  OidGroup__Enum_Template = 9,
  OidGroup__Enum_KeyDerivationFunction = 10,
};
struct OidGroup__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OidGroup__Enum value;
};
struct __declspec(align(8)) Oid__Fields {
  struct String * m_value;
  struct String * m_friendlyName;
  enum OidGroup__Enum m_group;
};
struct Oid {
  struct Oid__Class *klass;
  struct MonitorData *monitor;
  struct Oid__Fields fields;
};
struct __declspec(align(8)) X509ChainElement__Fields {
  struct X509Certificate2 * certificate;
  struct X509ChainStatus__Array * status;
  struct String * info;
  enum X509ChainStatusFlags__Enum compressed_status_flags;
};
struct X509ChainElement {
  struct X509ChainElement__Class *klass;
  struct MonitorData *monitor;
  struct X509ChainElement__Fields fields;
};
struct X509Certificate2__Fields {
  struct X509Certificate_1__Fields _;
  struct String * friendlyName;
};
struct X509Certificate2 {
  struct X509Certificate2__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate2__Fields fields;
};
enum OpenFlags__Enum : int32_t {
  OpenFlags__Enum_ReadOnly = 0,
  OpenFlags__Enum_ReadWrite = 1,
  OpenFlags__Enum_MaxAllowed = 2,
  OpenFlags__Enum_OpenExistingOnly = 4,
  OpenFlags__Enum_IncludeArchived = 8,
};
struct OpenFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OpenFlags__Enum value;
};
struct __declspec(align(8)) X509Store__Fields {
  struct String * _name;
  enum StoreLocation__Enum _location;
  struct X509Certificate2Collection * list;
  enum OpenFlags__Enum _flags;
  struct X509Store_1 * store;
};
struct X509Store {
  struct X509Store__Class *klass;
  struct MonitorData *monitor;
  struct X509Store__Fields fields;
};
struct __declspec(align(8)) X509Store_1__Fields {
  struct String * _storePath;
  struct X509CertificateCollection_2 * _certificates;
  struct ArrayList * _crls;
  bool _crl;
  bool _newFormat;
  struct String * _name;
};
struct X509Store_1 {
  struct X509Store_1__Class *klass;
  struct MonitorData *monitor;
  struct X509Store_1__Fields fields;
};
struct X509CertificateCollection_2__Fields {
  struct CollectionBase__Fields _;
};
struct X509CertificateCollection_2 {
  struct X509CertificateCollection_2__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateCollection_2__Fields fields;
};
enum MonoSslPolicyErrors__Enum : int32_t {
  MonoSslPolicyErrors__Enum_None = 0,
  MonoSslPolicyErrors__Enum_RemoteCertificateNotAvailable = 1,
  MonoSslPolicyErrors__Enum_RemoteCertificateNameMismatch = 2,
  MonoSslPolicyErrors__Enum_RemoteCertificateChainErrors = 4,
};
struct MonoSslPolicyErrors__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MonoSslPolicyErrors__Enum value;
};
struct MonoLocalCertificateSelectionCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct MonoLocalCertificateSelectionCallback {
  struct MonoLocalCertificateSelectionCallback__Class *klass;
  struct MonitorData *monitor;
  struct MonoLocalCertificateSelectionCallback__Fields fields;
};
enum CipherSuiteCode__Enum : uint16_t {
  CipherSuiteCode__Enum_TLS_NULL_WITH_NULL_NULL = 0,
  CipherSuiteCode__Enum_TLS_RSA_WITH_NULL_MD5 = 1,
  CipherSuiteCode__Enum_TLS_RSA_WITH_NULL_SHA = 2,
  CipherSuiteCode__Enum_TLS_RSA_EXPORT_WITH_RC4_40_MD5 = 3,
  CipherSuiteCode__Enum_TLS_RSA_WITH_RC4_128_MD5 = 4,
  CipherSuiteCode__Enum_TLS_RSA_WITH_RC4_128_SHA = 5,
  CipherSuiteCode__Enum_TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 = 6,
  CipherSuiteCode__Enum_TLS_RSA_WITH_IDEA_CBC_SHA = 7,
  CipherSuiteCode__Enum_TLS_RSA_EXPORT_WITH_DES40_CBC_SHA = 8,
  CipherSuiteCode__Enum_TLS_RSA_WITH_DES_CBC_SHA = 9,
  CipherSuiteCode__Enum_TLS_RSA_WITH_3DES_EDE_CBC_SHA = 10,
  CipherSuiteCode__Enum_TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA = 11,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_DES_CBC_SHA = 12,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA = 13,
  CipherSuiteCode__Enum_TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA = 14,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_DES_CBC_SHA = 15,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA = 16,
  CipherSuiteCode__Enum_TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA = 17,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_DES_CBC_SHA = 18,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA = 19,
  CipherSuiteCode__Enum_TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA = 20,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_DES_CBC_SHA = 21,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = 22,
  CipherSuiteCode__Enum_TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 = 23,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_RC4_128_MD5 = 24,
  CipherSuiteCode__Enum_TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA = 25,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_DES_CBC_SHA = 26,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_3DES_EDE_CBC_SHA = 27,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_128_CBC_SHA = 47,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_AES_128_CBC_SHA = 48,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_AES_128_CBC_SHA = 49,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_AES_128_CBC_SHA = 50,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_128_CBC_SHA = 51,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_AES_128_CBC_SHA = 52,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_256_CBC_SHA = 53,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_AES_256_CBC_SHA = 54,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_AES_256_CBC_SHA = 55,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_AES_256_CBC_SHA = 56,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_256_CBC_SHA = 57,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_AES_256_CBC_SHA = 58,
  CipherSuiteCode__Enum_TLS_RSA_WITH_CAMELLIA_128_CBC_SHA = 65,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA = 66,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA = 67,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA = 68,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA = 69,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA = 70,
  CipherSuiteCode__Enum_TLS_RSA_WITH_CAMELLIA_256_CBC_SHA = 132,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA = 133,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA = 134,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA = 135,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA = 136,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA = 137,
  CipherSuiteCode__Enum_TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 186,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 187,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 188,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 189,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 190,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 = 191,
  CipherSuiteCode__Enum_TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 192,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 193,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 194,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 195,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 196,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 = 197,
  CipherSuiteCode__Enum_TLS_RSA_WITH_SEED_CBC_SHA = 150,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_SEED_CBC_SHA = 151,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_SEED_CBC_SHA = 152,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_SEED_CBC_SHA = 153,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_SEED_CBC_SHA = 154,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_SEED_CBC_SHA = 155,
  CipherSuiteCode__Enum_TLS_PSK_WITH_RC4_128_SHA = 138,
  CipherSuiteCode__Enum_TLS_PSK_WITH_3DES_EDE_CBC_SHA = 139,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_128_CBC_SHA = 140,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_256_CBC_SHA = 141,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_RC4_128_SHA = 142,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA = 143,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_128_CBC_SHA = 144,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_256_CBC_SHA = 145,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_RC4_128_SHA = 146,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA = 147,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_AES_128_CBC_SHA = 148,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_AES_256_CBC_SHA = 149,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_NULL_SHA = 49153,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_RC4_128_SHA = 49154,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA = 49155,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA = 49156,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA = 49157,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_NULL_SHA = 49158,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_RC4_128_SHA = 49159,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA = 49160,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = 49161,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = 49162,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_NULL_SHA = 49163,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_RC4_128_SHA = 49164,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA = 49165,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA = 49166,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA = 49167,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_NULL_SHA = 49168,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_RC4_128_SHA = 49169,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA = 49170,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = 49171,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = 49172,
  CipherSuiteCode__Enum_TLS_ECDH_anon_WITH_NULL_SHA = 49173,
  CipherSuiteCode__Enum_TLS_ECDH_anon_WITH_RC4_128_SHA = 49174,
  CipherSuiteCode__Enum_TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA = 49175,
  CipherSuiteCode__Enum_TLS_ECDH_anon_WITH_AES_128_CBC_SHA = 49176,
  CipherSuiteCode__Enum_TLS_ECDH_anon_WITH_AES_256_CBC_SHA = 49177,
  CipherSuiteCode__Enum_TLS_PSK_WITH_NULL_SHA = 44,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_NULL_SHA = 45,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_NULL_SHA = 46,
  CipherSuiteCode__Enum_TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA = 49178,
  CipherSuiteCode__Enum_TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA = 49179,
  CipherSuiteCode__Enum_TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA = 49180,
  CipherSuiteCode__Enum_TLS_SRP_SHA_WITH_AES_128_CBC_SHA = 49181,
  CipherSuiteCode__Enum_TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA = 49182,
  CipherSuiteCode__Enum_TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA = 49183,
  CipherSuiteCode__Enum_TLS_SRP_SHA_WITH_AES_256_CBC_SHA = 49184,
  CipherSuiteCode__Enum_TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA = 49185,
  CipherSuiteCode__Enum_TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA = 49186,
  CipherSuiteCode__Enum_TLS_RSA_WITH_NULL_SHA256 = 59,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_128_CBC_SHA256 = 60,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_256_CBC_SHA256 = 61,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_AES_128_CBC_SHA256 = 62,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_AES_128_CBC_SHA256 = 63,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 = 64,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 = 103,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_AES_256_CBC_SHA256 = 104,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_AES_256_CBC_SHA256 = 105,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 = 106,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 = 107,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_AES_128_CBC_SHA256 = 108,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_AES_256_CBC_SHA256 = 109,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_128_GCM_SHA256 = 156,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_256_GCM_SHA384 = 157,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 = 158,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 = 159,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_AES_128_GCM_SHA256 = 160,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_AES_256_GCM_SHA384 = 161,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 = 162,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 = 163,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_AES_128_GCM_SHA256 = 164,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_AES_256_GCM_SHA384 = 165,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_AES_128_GCM_SHA256 = 166,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_AES_256_GCM_SHA384 = 167,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = 49187,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 = 49188,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 = 49189,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 = 49190,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = 49191,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 = 49192,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 = 49193,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 = 49194,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 49195,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = 49196,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 = 49197,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 = 49198,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 49199,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = 49200,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 = 49201,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 = 49202,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_128_GCM_SHA256 = 168,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_256_GCM_SHA384 = 169,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 = 170,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 = 171,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 = 172,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 = 173,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_128_CBC_SHA256 = 174,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_256_CBC_SHA384 = 175,
  CipherSuiteCode__Enum_TLS_PSK_WITH_NULL_SHA256 = 176,
  CipherSuiteCode__Enum_TLS_PSK_WITH_NULL_SHA384 = 177,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 = 178,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 = 179,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_NULL_SHA256 = 180,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_NULL_SHA384 = 181,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 = 182,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 = 183,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_NULL_SHA256 = 184,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_NULL_SHA384 = 185,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_RC4_128_SHA = 49203,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA = 49204,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA = 49205,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA = 49206,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 = 49207,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 = 49208,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_NULL_SHA = 49209,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_NULL_SHA256 = 49210,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_NULL_SHA384 = 49211,
  CipherSuiteCode__Enum_TLS_EMPTY_RENEGOTIATION_INFO_SCSV = 255,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 49266,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 49267,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 49268,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 49269,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 49270,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 49271,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 49272,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 49273,
  CipherSuiteCode__Enum_TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49274,
  CipherSuiteCode__Enum_TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49275,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49276,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49277,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49278,
  CipherSuiteCode__Enum_TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49279,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 49280,
  CipherSuiteCode__Enum_TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 49281,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 49282,
  CipherSuiteCode__Enum_TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 49283,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 = 49284,
  CipherSuiteCode__Enum_TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 = 49285,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 49286,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 49287,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 49288,
  CipherSuiteCode__Enum_TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 49289,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49290,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49291,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49292,
  CipherSuiteCode__Enum_TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49293,
  CipherSuiteCode__Enum_TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49294,
  CipherSuiteCode__Enum_TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49295,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49296,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49297,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49298,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49299,
  CipherSuiteCode__Enum_TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49300,
  CipherSuiteCode__Enum_TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49301,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49302,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49303,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49304,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49305,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49306,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49307,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_128_CCM = 49308,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_256_CCM = 49309,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_128_CCM = 49310,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_256_CCM = 49311,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_128_CCM_8 = 49312,
  CipherSuiteCode__Enum_TLS_RSA_WITH_AES_256_CCM_8 = 49313,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_128_CCM_8 = 49314,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_AES_256_CCM_8 = 49315,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_128_CCM = 49316,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_256_CCM = 49317,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_128_CCM = 49318,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_AES_256_CCM = 49319,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_128_CCM_8 = 49320,
  CipherSuiteCode__Enum_TLS_PSK_WITH_AES_256_CCM_8 = 49321,
  CipherSuiteCode__Enum_TLS_PSK_DHE_WITH_AES_128_CCM_8 = 49322,
  CipherSuiteCode__Enum_TLS_PSK_DHE_WITH_AES_256_CCM_8 = 49323,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 52243,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = 52244,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 52245,
  CipherSuiteCode__Enum_TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58384,
  CipherSuiteCode__Enum_TLS_RSA_WITH_SALSA20_SHA1 = 58385,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58386,
  CipherSuiteCode__Enum_TLS_ECDHE_RSA_WITH_SALSA20_SHA1 = 58387,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 = 58388,
  CipherSuiteCode__Enum_TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 = 58389,
  CipherSuiteCode__Enum_TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58390,
  CipherSuiteCode__Enum_TLS_PSK_WITH_SALSA20_SHA1 = 58391,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58392,
  CipherSuiteCode__Enum_TLS_ECDHE_PSK_WITH_SALSA20_SHA1 = 58393,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58394,
  CipherSuiteCode__Enum_TLS_RSA_PSK_WITH_SALSA20_SHA1 = 58395,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58396,
  CipherSuiteCode__Enum_TLS_DHE_PSK_WITH_SALSA20_SHA1 = 58397,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58398,
  CipherSuiteCode__Enum_TLS_DHE_RSA_WITH_SALSA20_SHA1 = 58399,
  CipherSuiteCode__Enum_TLS_FALLBACK_SCSV = 22016,
};
struct CipherSuiteCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CipherSuiteCode__Enum value;
};
struct CipherSuiteCode__Enum__Array {
  struct CipherSuiteCode__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum CipherSuiteCode__Enum vector[32];
};
struct ICertificateValidator {
  struct ICertificateValidator__Class *klass;
  struct MonitorData *monitor;
};
struct ICertificateValidator2 {
  struct ICertificateValidator2__Class *klass;
  struct MonitorData *monitor;
};
struct UnityTlsStream__Fields {
  struct MobileAuthenticatedStream__Fields _;
};
struct UnityTlsStream {
  struct UnityTlsStream__Class *klass;
  struct MonitorData *monitor;
  struct UnityTlsStream__Fields fields;
};
struct ValueTuple_2_Int32_Boolean_ {
  int32_t Item1;
  bool Item2;
};
struct ValueTuple_2_Int32_Boolean___Boxed {
  struct ValueTuple_2_Int32_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct ValueTuple_2_Int32_Boolean_ fields;
};
struct __declspec(align(8)) MonoTlsConnectionInfo__Fields {
  enum CipherSuiteCode__Enum _CipherSuiteCode_k__BackingField;
  enum TlsProtocols__Enum _ProtocolVersion_k__BackingField;
  struct String * _PeerDomainName_k__BackingField;
};
struct MonoTlsConnectionInfo {
  struct MonoTlsConnectionInfo__Class *klass;
  struct MonitorData *monitor;
  struct MonoTlsConnectionInfo__Fields fields;
};
struct AuthenticatedStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData get_CanTimeout;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData FlushAsync;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData ReadAsync;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData WriteAsync;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
  VirtualInvokeData __unknown_9;
  VirtualInvokeData ReadByte;
  VirtualInvokeData __unknown_10;
  VirtualInvokeData WriteByte;
  VirtualInvokeData __unknown_11;
};
struct AuthenticatedStream__StaticFields {
};
struct AuthenticatedStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AuthenticatedStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AuthenticatedStream__VTable vtable;
};
struct AsyncHandshakeRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Run;
};
struct AsyncHandshakeRequest__StaticFields {
};
struct AsyncHandshakeRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncHandshakeRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncHandshakeRequest__VTable vtable;
};
struct AsyncProtocolRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct AsyncProtocolRequest__StaticFields {
};
struct AsyncProtocolRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncProtocolRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncProtocolRequest__VTable vtable;
};
struct BufferOffsetSize__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BufferOffsetSize__StaticFields {
};
struct BufferOffsetSize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BufferOffsetSize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BufferOffsetSize__VTable vtable;
};
struct BufferOffsetSize2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BufferOffsetSize2__StaticFields {
};
struct BufferOffsetSize2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BufferOffsetSize2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BufferOffsetSize2__VTable vtable;
};
struct IMonoSslStream__VTable {
  VirtualInvokeData AuthenticateAsClient;
  VirtualInvokeData AuthenticateAsServer;
  VirtualInvokeData Read;
  VirtualInvokeData Write;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData get_IsAuthenticated;
  VirtualInvokeData get_CanRead;
  VirtualInvokeData get_CanWrite;
  VirtualInvokeData get_Length;
  VirtualInvokeData get_Position;
  VirtualInvokeData SetLength;
  VirtualInvokeData get_AuthenticatedStream;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData get_InternalLocalCertificate;
};
struct IMonoSslStream__StaticFields {
};
struct IMonoSslStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMonoSslStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMonoSslStream__VTable vtable;
};
struct X509ChainElementCollection__VTable {
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
struct X509ChainElementCollection__StaticFields {
};
struct X509ChainElementCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ChainElementCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ChainElementCollection__VTable vtable;
};
struct OidCollection__VTable {
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
struct OidCollection__StaticFields {
};
struct OidCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OidCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OidCollection__VTable vtable;
};
struct X509Certificate2Collection__VTable {
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
  VirtualInvokeData GetEnumerator;
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
struct X509Certificate2Collection__StaticFields {
  struct String__Array * newline_split;
};
struct X509Certificate2Collection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate2Collection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate2Collection__VTable vtable;
};
struct X509ChainPolicy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509ChainPolicy__StaticFields {
};
struct X509ChainPolicy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ChainPolicy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ChainPolicy__VTable vtable;
};
struct X509ChainStatus__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509ChainStatus__StaticFields {
};
struct X509ChainStatus__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ChainStatus__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ChainStatus__VTable vtable;
};
struct Oid__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Oid__StaticFields {
};
struct Oid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Oid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Oid__VTable vtable;
};
struct AsnEncodedData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyFrom;
  VirtualInvokeData Format;
  VirtualInvokeData ToString_1;
};
struct AsnEncodedData__StaticFields {
};
struct AsnEncodedData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsnEncodedData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsnEncodedData__VTable vtable;
};
struct X500DistinguishedName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyFrom;
  VirtualInvokeData Format;
  VirtualInvokeData ToString_1;
};
struct X500DistinguishedName__StaticFields {
};
struct X500DistinguishedName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X500DistinguishedName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X500DistinguishedName__VTable vtable;
};
struct X509Certificate2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData Dispose;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetCertHash;
  VirtualInvokeData GetCertHashString;
  VirtualInvokeData GetIssuerName;
  VirtualInvokeData GetName;
  VirtualInvokeData GetPublicKey;
  VirtualInvokeData GetRawCertData;
  VirtualInvokeData GetSerialNumber;
  VirtualInvokeData GetSerialNumberString;
  VirtualInvokeData ToString_1;
  VirtualInvokeData Import;
  VirtualInvokeData Import_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Reset;
};
struct X509Certificate2__StaticFields {
  struct Byte__Array * signedData;
};
struct X509Certificate2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate2__VTable vtable;
};
struct X509ChainElement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509ChainElement__StaticFields {
};
struct X509ChainElement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ChainElement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ChainElement__VTable vtable;
};
struct X509CertificateCollection_2__VTable {
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
struct X509CertificateCollection_2__StaticFields {
};
struct X509CertificateCollection_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateCollection_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateCollection_2__VTable vtable;
};
struct X509Store_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X509Store_1__StaticFields {
};
struct X509Store_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Store_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Store_1__VTable vtable;
};}