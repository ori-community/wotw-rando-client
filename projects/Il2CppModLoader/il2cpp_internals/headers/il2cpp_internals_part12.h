namespace app {

struct __declspec(align(8)) PKCS8_PrivateKeyInfo__Fields {
  int32_t _version;
  struct String * _algorithm;
  struct Byte__Array * _key;
  struct ArrayList * _list;
};
struct PKCS8_PrivateKeyInfo {
  struct PKCS8_PrivateKeyInfo__Class *klass;
  struct MonitorData *monitor;
  struct PKCS8_PrivateKeyInfo__Fields fields;
};
struct PKCS8_PrivateKeyInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS8_PrivateKeyInfo__StaticFields {
};
struct PKCS8_PrivateKeyInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS8_PrivateKeyInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS8_PrivateKeyInfo__VTable vtable;
};

struct __declspec(align(8)) X509Certificate__Fields {
  struct ASN1 * decoder;
  struct Byte__Array * m_encodedcert;
  struct DateTime m_from;
  struct DateTime m_until;
  struct ASN1 * issuer;
  struct String * m_issuername;
  struct String * m_keyalgo;
  struct Byte__Array * m_keyalgoparams;
  struct ASN1 * subject;
  struct String * m_subject;
  struct Byte__Array * m_publickey;
  struct Byte__Array * signature;
  struct String * m_signaturealgo;
  struct Byte__Array * m_signaturealgoparams;
  struct RSA * _rsa;
  struct DSA * _dsa;
  int32_t version;
  struct Byte__Array * serialnumber;
  struct Byte__Array * issuerUniqueID;
  struct Byte__Array * subjectUniqueID;
  struct X509ExtensionCollection * extensions;
};
struct X509Certificate {
  struct X509Certificate__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate__Fields fields;
};
struct __declspec(align(8)) AsymmetricAlgorithm__Fields {
  int32_t KeySizeValue;
  struct KeySizes__Array * LegalKeySizesValue;
};
struct AsymmetricAlgorithm {
  struct AsymmetricAlgorithm__Class *klass;
  struct MonitorData *monitor;
  struct AsymmetricAlgorithm__Fields fields;
};
struct RSA__Fields {
  struct AsymmetricAlgorithm__Fields _;
};
struct RSA {
  struct RSA__Class *klass;
  struct MonitorData *monitor;
  struct RSA__Fields fields;
};
enum RSAEncryptionPaddingMode__Enum : int32_t {
  RSAEncryptionPaddingMode__Enum_Pkcs1 = 0,
  RSAEncryptionPaddingMode__Enum_Oaep = 1,
};
struct RSAEncryptionPaddingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RSAEncryptionPaddingMode__Enum value;
};
struct HashAlgorithmName {
  struct String * _name;
};
struct HashAlgorithmName__Boxed {
  struct HashAlgorithmName__Class *klass;
  struct MonitorData *monitor;
  struct HashAlgorithmName fields;
};
struct __declspec(align(8)) RSAEncryptionPadding__Fields {
  enum RSAEncryptionPaddingMode__Enum _mode;
  struct HashAlgorithmName _oaepHashAlgorithm;
};
struct RSAEncryptionPadding {
  struct RSAEncryptionPadding__Class *klass;
  struct MonitorData *monitor;
  struct RSAEncryptionPadding__Fields fields;
};
enum RSASignaturePaddingMode__Enum : int32_t {
  RSASignaturePaddingMode__Enum_Pkcs1 = 0,
  RSASignaturePaddingMode__Enum_Pss = 1,
};
struct RSASignaturePaddingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RSASignaturePaddingMode__Enum value;
};
struct __declspec(align(8)) RSASignaturePadding__Fields {
  enum RSASignaturePaddingMode__Enum _mode;
};
struct RSASignaturePadding {
  struct RSASignaturePadding__Class *klass;
  struct MonitorData *monitor;
  struct RSASignaturePadding__Fields fields;
};
struct RSAManaged__Fields {
  struct RSA__Fields _;
  bool isCRTpossible;
  bool keyBlinding;
  bool keypairGenerated;
  bool m_disposed;
  struct BigInteger * d;
  struct BigInteger * p;
  struct BigInteger * q;
  struct BigInteger * dp;
  struct BigInteger * dq;
  struct BigInteger * qInv;
  struct BigInteger * n;
  struct BigInteger * e;
  struct RSAManaged_KeyGeneratedEventHandler * KeyGenerated;
};
struct RSAManaged {
  struct RSAManaged__Class *klass;
  struct MonitorData *monitor;
  struct RSAManaged__Fields fields;
};
struct __declspec(align(8)) BigInteger__Fields {
  uint32_t length;
  struct UInt32__Array * data;
};
struct BigInteger {
  struct BigInteger__Class *klass;
  struct MonitorData *monitor;
  struct BigInteger__Fields fields;
};
struct RSAManaged_KeyGeneratedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct RSAManaged_KeyGeneratedEventHandler {
  struct RSAManaged_KeyGeneratedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct RSAManaged_KeyGeneratedEventHandler__Fields fields;
};
struct RSAParameters {
  struct Byte__Array * Exponent;
  struct Byte__Array * Modulus;
  struct Byte__Array * P;
  struct Byte__Array * Q;
  struct Byte__Array * DP;
  struct Byte__Array * DQ;
  struct Byte__Array * InverseQ;
  struct Byte__Array * D;
};
struct RSAParameters__Boxed {
  struct RSAParameters__Class *klass;
  struct MonitorData *monitor;
  struct RSAParameters fields;
};
struct DSA__Fields {
  struct AsymmetricAlgorithm__Fields _;
};
struct DSA {
  struct DSA__Class *klass;
  struct MonitorData *monitor;
  struct DSA__Fields fields;
};
struct DSAManaged__Fields {
  struct DSA__Fields _;
  bool keypairGenerated;
  bool m_disposed;
  struct BigInteger * p;
  struct BigInteger * q;
  struct BigInteger * g;
  struct BigInteger * x;
  struct BigInteger * y;
  struct BigInteger * j;
  struct BigInteger * seed;
  int32_t counter;
  bool j_missing;
  struct RandomNumberGenerator * rng;
  struct DSAManaged_KeyGeneratedEventHandler * KeyGenerated;
};
struct DSAManaged {
  struct DSAManaged__Class *klass;
  struct MonitorData *monitor;
  struct DSAManaged__Fields fields;
};
struct DSAManaged_KeyGeneratedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DSAManaged_KeyGeneratedEventHandler {
  struct DSAManaged_KeyGeneratedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DSAManaged_KeyGeneratedEventHandler__Fields fields;
};
struct X509ExtensionCollection__Fields {
  struct CollectionBase__Fields _;
  bool readOnly;
};
struct X509ExtensionCollection {
  struct X509ExtensionCollection__Class *klass;
  struct MonitorData *monitor;
  struct X509ExtensionCollection__Fields fields;
};
struct AsymmetricAlgorithm__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_SignatureAlgorithm;
  VirtualInvokeData get_KeyExchangeAlgorithm;
  VirtualInvokeData FromXmlString;
  VirtualInvokeData ToXmlString;
};
struct AsymmetricAlgorithm__StaticFields {
};
struct AsymmetricAlgorithm__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymmetricAlgorithm__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymmetricAlgorithm__VTable vtable;
};
struct HashAlgorithmName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct HashAlgorithmName__StaticFields {
};
struct HashAlgorithmName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashAlgorithmName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashAlgorithmName__VTable vtable;
};
struct RSAEncryptionPadding__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct RSAEncryptionPadding__StaticFields {
  struct RSAEncryptionPadding * s_pkcs1;
  struct RSAEncryptionPadding * s_oaepSHA1;
  struct RSAEncryptionPadding * s_oaepSHA256;
  struct RSAEncryptionPadding * s_oaepSHA384;
  struct RSAEncryptionPadding * s_oaepSHA512;
};
struct RSAEncryptionPadding__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAEncryptionPadding__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAEncryptionPadding__VTable vtable;
};
struct RSASignaturePadding__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct RSASignaturePadding__StaticFields {
  struct RSASignaturePadding * s_pkcs1;
  struct RSASignaturePadding * s_pss;
};
struct RSASignaturePadding__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSASignaturePadding__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSASignaturePadding__VTable vtable;
};
struct BigInteger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BigInteger__StaticFields {
  struct UInt32__Array * smallPrimes;
  struct RandomNumberGenerator * rng;
};
struct BigInteger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BigInteger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BigInteger__VTable vtable;
};
struct RSAManaged_KeyGeneratedEventHandler__VTable {
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
struct RSAManaged_KeyGeneratedEventHandler__StaticFields {
};
struct RSAManaged_KeyGeneratedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAManaged_KeyGeneratedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAManaged_KeyGeneratedEventHandler__VTable vtable;
};
struct RSAParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RSAParameters__StaticFields {
};
struct RSAParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAParameters__VTable vtable;
};
struct RSAManaged__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_SignatureAlgorithm;
  VirtualInvokeData get_KeyExchangeAlgorithm;
  VirtualInvokeData FromXmlString;
  VirtualInvokeData ToXmlString;
  VirtualInvokeData Encrypt;
  VirtualInvokeData Decrypt;
  VirtualInvokeData SignHash;
  VirtualInvokeData VerifyHash;
  VirtualInvokeData HashData;
  VirtualInvokeData HashData_1;
  VirtualInvokeData SignData;
  VirtualInvokeData SignData_1;
  VirtualInvokeData VerifyData;
  VirtualInvokeData DecryptValue;
  VirtualInvokeData EncryptValue;
  VirtualInvokeData ExportParameters;
  VirtualInvokeData ImportParameters;
};
struct RSAManaged__StaticFields {
};
struct RSAManaged__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAManaged__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAManaged__VTable vtable;
};
struct RSA__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_SignatureAlgorithm;
  VirtualInvokeData get_KeyExchangeAlgorithm;
  VirtualInvokeData FromXmlString;
  VirtualInvokeData ToXmlString;
  VirtualInvokeData Encrypt;
  VirtualInvokeData Decrypt;
  VirtualInvokeData SignHash;
  VirtualInvokeData VerifyHash;
  VirtualInvokeData HashData;
  VirtualInvokeData HashData_1;
  VirtualInvokeData SignData;
  VirtualInvokeData SignData_1;
  VirtualInvokeData VerifyData;
  VirtualInvokeData DecryptValue;
  VirtualInvokeData EncryptValue;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct RSA__StaticFields {
};
struct RSA__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSA__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSA__VTable vtable;
};
struct DSAManaged_KeyGeneratedEventHandler__VTable {
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
struct DSAManaged_KeyGeneratedEventHandler__StaticFields {
};
struct DSAManaged_KeyGeneratedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DSAManaged_KeyGeneratedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DSAManaged_KeyGeneratedEventHandler__VTable vtable;
};
struct DSAManaged__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_SignatureAlgorithm;
  VirtualInvokeData get_KeyExchangeAlgorithm;
  VirtualInvokeData FromXmlString;
  VirtualInvokeData ToXmlString;
  VirtualInvokeData CreateSignature;
  VirtualInvokeData VerifySignature;
  VirtualInvokeData HashData;
  VirtualInvokeData HashData_1;
  VirtualInvokeData SignData;
  VirtualInvokeData SignData_1;
  VirtualInvokeData VerifyData;
  VirtualInvokeData VerifyData_1;
  VirtualInvokeData ExportParameters;
  VirtualInvokeData ImportParameters;
};
struct DSAManaged__StaticFields {
};
struct DSAManaged__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DSAManaged__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DSAManaged__VTable vtable;
};
struct DSA__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_SignatureAlgorithm;
  VirtualInvokeData get_KeyExchangeAlgorithm;
  VirtualInvokeData FromXmlString;
  VirtualInvokeData ToXmlString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData HashData;
  VirtualInvokeData HashData_1;
  VirtualInvokeData SignData;
  VirtualInvokeData SignData_1;
  VirtualInvokeData VerifyData;
  VirtualInvokeData VerifyData_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
};
struct DSA__StaticFields {
};
struct DSA__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DSA__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DSA__VTable vtable;
};
struct X509ExtensionCollection__VTable {
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
struct X509ExtensionCollection__StaticFields {
};
struct X509ExtensionCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509ExtensionCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509ExtensionCollection__VTable vtable;
};
struct X509Certificate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_IssuerName;
  VirtualInvokeData get_KeyAlgorithmParameters;
  VirtualInvokeData get_PublicKey;
  VirtualInvokeData get_RSA;
  VirtualInvokeData get_RawData;
  VirtualInvokeData get_SerialNumber;
  VirtualInvokeData get_SubjectName;
  VirtualInvokeData get_ValidFrom;
  VirtualInvokeData get_ValidUntil;
  VirtualInvokeData GetObjectData_1;
};
struct X509Certificate__StaticFields {
  struct String * encoding_error;
};
struct X509Certificate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate__VTable vtable;
};

struct __declspec(align(8)) PKCS12_DeriveBytes__Fields {
  struct String * _hashName;
  int32_t _iterations;
  struct Byte__Array * _password;
  struct Byte__Array * _salt;
};
struct PKCS12_DeriveBytes {
  struct PKCS12_DeriveBytes__Class *klass;
  struct MonitorData *monitor;
  struct PKCS12_DeriveBytes__Fields fields;
};
struct PKCS12_DeriveBytes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS12_DeriveBytes__StaticFields {
  struct Byte__Array * keyDiversifier;
  struct Byte__Array * ivDiversifier;
  struct Byte__Array * macDiversifier;
};
struct PKCS12_DeriveBytes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS12_DeriveBytes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS12_DeriveBytes__VTable vtable;
};

struct __declspec(align(8)) X509CertificateCollection_X509CertificateEnumerator__Fields {
  struct IEnumerator * enumerator;
};
struct X509CertificateCollection_X509CertificateEnumerator {
  struct X509CertificateCollection_X509CertificateEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateCollection_X509CertificateEnumerator__Fields fields;
};
struct X509CertificateCollection_X509CertificateEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEnumerator_MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct X509CertificateCollection_X509CertificateEnumerator__StaticFields {
};
struct X509CertificateCollection_X509CertificateEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateCollection_X509CertificateEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateCollection_X509CertificateEnumerator__VTable vtable;
};

struct __declspec(align(8)) X509Extension__Fields {
  struct String * extnOid;
  bool extnCritical;
  struct ASN1 * extnValue;
};
struct X509Extension {
  struct X509Extension__Class *klass;
  struct MonitorData *monitor;
  struct X509Extension__Fields fields;
};
struct X509Extension__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Decode;
};
struct X509Extension__StaticFields {
};
struct X509Extension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Extension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Extension__VTable vtable;
};

struct __declspec(align(8)) KeyPairPersistence__Fields {
  struct CspParameters * _params;
  struct String * _keyvalue;
  struct String * _filename;
  struct String * _container;
};
struct KeyPairPersistence {
  struct KeyPairPersistence__Class *klass;
  struct MonitorData *monitor;
  struct KeyPairPersistence__Fields fields;
};
struct __declspec(align(8)) CspParameters__Fields {
  int32_t ProviderType;
  struct String * ProviderName;
  struct String * KeyContainerName;
  int32_t KeyNumber;
  int32_t m_flags;
  struct CryptoKeySecurity * m_cryptoKeySecurity;
  struct SecureString * m_keyPassword;
  void * m_parentWindowHandle;
};
struct CspParameters {
  struct CspParameters__Class *klass;
  struct MonitorData *monitor;
  struct CspParameters__Fields fields;
};
struct ObjectSecurity {
  struct ObjectSecurity__Class *klass;
  struct MonitorData *monitor;
};
struct CommonObjectSecurity {
  struct CommonObjectSecurity__Class *klass;
  struct MonitorData *monitor;
};
struct NativeObjectSecurity {
  struct NativeObjectSecurity__Class *klass;
  struct MonitorData *monitor;
};
struct CryptoKeySecurity {
  struct CryptoKeySecurity__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SecureString__Fields {
  int32_t length;
  bool disposed;
  bool read_only;
  struct Byte__Array * data;
};
struct SecureString {
  struct SecureString__Class *klass;
  struct MonitorData *monitor;
  struct SecureString__Fields fields;
};
struct ObjectSecurity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ObjectSecurity__StaticFields {
};
struct ObjectSecurity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectSecurity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectSecurity__VTable vtable;
};
struct CommonObjectSecurity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CommonObjectSecurity__StaticFields {
};
struct CommonObjectSecurity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CommonObjectSecurity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CommonObjectSecurity__VTable vtable;
};
struct NativeObjectSecurity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NativeObjectSecurity__StaticFields {
};
struct NativeObjectSecurity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeObjectSecurity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeObjectSecurity__VTable vtable;
};
struct CryptoKeySecurity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CryptoKeySecurity__StaticFields {
};
struct CryptoKeySecurity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptoKeySecurity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptoKeySecurity__VTable vtable;
};
struct SecureString__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct SecureString__StaticFields {
};
struct SecureString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecureString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecureString__VTable vtable;
};
struct CspParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CspParameters__StaticFields {
};
struct CspParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CspParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CspParameters__VTable vtable;
};
struct KeyPairPersistence__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyPairPersistence__StaticFields {
  bool _userPathExists;
  struct String * _userPath;
  bool _machinePathExists;
  struct String * _machinePath;
  struct Object * lockobj;
};
struct KeyPairPersistence__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyPairPersistence__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyPairPersistence__VTable vtable;
};

struct __declspec(align(8)) HashAlgorithm__Fields {
  int32_t HashSizeValue;
  struct Byte__Array * HashValue;
  int32_t State;
  bool m_bDisposed;
};
struct HashAlgorithm {
  struct HashAlgorithm__Class *klass;
  struct MonitorData *monitor;
  struct HashAlgorithm__Fields fields;
};
struct MD2__Fields {
  struct HashAlgorithm__Fields _;
};
struct MD2 {
  struct MD2__Class *klass;
  struct MonitorData *monitor;
  struct MD2__Fields fields;
};
struct MD2Managed__Fields {
  struct MD2__Fields _;
  struct Byte__Array * state;
  struct Byte__Array * checksum;
  struct Byte__Array * buffer;
  int32_t count;
  struct Byte__Array * x;
};
struct MD2Managed {
  struct MD2Managed__Class *klass;
  struct MonitorData *monitor;
  struct MD2Managed__Fields fields;
};
struct MD2Managed__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_InputBlockSize;
  VirtualInvokeData get_OutputBlockSize;
  VirtualInvokeData get_CanTransformMultipleBlocks;
  VirtualInvokeData get_CanReuseTransform;
  VirtualInvokeData TransformBlock;
  VirtualInvokeData TransformFinalBlock;
  VirtualInvokeData get_HashSize;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_InputBlockSize_1;
  VirtualInvokeData get_OutputBlockSize_1;
  VirtualInvokeData get_CanTransformMultipleBlocks_1;
  VirtualInvokeData get_CanReuseTransform_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Initialize;
  VirtualInvokeData HashCore;
  VirtualInvokeData HashFinal;
};
struct MD2Managed__StaticFields {
  struct Byte__Array * PI_SUBST;
};
struct MD2Managed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD2Managed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD2Managed__VTable vtable;
};
struct HashAlgorithm__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_InputBlockSize;
  VirtualInvokeData get_OutputBlockSize;
  VirtualInvokeData get_CanTransformMultipleBlocks;
  VirtualInvokeData get_CanReuseTransform;
  VirtualInvokeData TransformBlock;
  VirtualInvokeData TransformFinalBlock;
  VirtualInvokeData get_HashSize;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_InputBlockSize_1;
  VirtualInvokeData get_OutputBlockSize_1;
  VirtualInvokeData get_CanTransformMultipleBlocks_1;
  VirtualInvokeData get_CanReuseTransform_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct HashAlgorithm__StaticFields {
};
struct HashAlgorithm__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashAlgorithm__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashAlgorithm__VTable vtable;
};
struct MD2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_InputBlockSize;
  VirtualInvokeData get_OutputBlockSize;
  VirtualInvokeData get_CanTransformMultipleBlocks;
  VirtualInvokeData get_CanReuseTransform;
  VirtualInvokeData TransformBlock;
  VirtualInvokeData TransformFinalBlock;
  VirtualInvokeData get_HashSize;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_InputBlockSize_1;
  VirtualInvokeData get_OutputBlockSize_1;
  VirtualInvokeData get_CanTransformMultipleBlocks_1;
  VirtualInvokeData get_CanReuseTransform_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct MD2__StaticFields {
};
struct MD2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD2__VTable vtable;
};

struct MD4__Fields {
  struct HashAlgorithm__Fields _;
};
struct MD4 {
  struct MD4__Class *klass;
  struct MonitorData *monitor;
  struct MD4__Fields fields;
};}