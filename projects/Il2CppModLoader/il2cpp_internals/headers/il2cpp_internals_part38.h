namespace app {
struct CspKeyContainerInfo {
  struct CspKeyContainerInfo__Class *klass;
  struct MonitorData *monitor;
  struct CspKeyContainerInfo__Fields fields;
};
struct CspKeyContainerInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CspKeyContainerInfo__StaticFields {
};
struct CspKeyContainerInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CspKeyContainerInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CspKeyContainerInfo__VTable vtable;
};
struct RSACryptoServiceProvider__VTable {
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
  VirtualInvokeData ExportCspBlob;
  VirtualInvokeData ImportCspBlob;
  VirtualInvokeData get_CspKeyContainerInfo;
};
struct RSACryptoServiceProvider__StaticFields {
  enum CspProviderFlags__Enum s_UseMachineKeyStore;
};
struct RSACryptoServiceProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSACryptoServiceProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSACryptoServiceProvider__VTable vtable;
};

struct __declspec(align(8)) RSAPKCS1KeyExchangeDeformatter__Fields {
  struct RSA * _rsaKey;
  struct Nullable_1_Boolean_ _rsaOverridesDecrypt;
  struct RandomNumberGenerator * RngValue;
};
struct RSAPKCS1KeyExchangeDeformatter {
  struct RSAPKCS1KeyExchangeDeformatter__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1KeyExchangeDeformatter__Fields fields;
};
struct RSAPKCS1KeyExchangeDeformatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Parameters;
  VirtualInvokeData set_Parameters;
  VirtualInvokeData SetKey;
  VirtualInvokeData DecryptKeyExchange;
};
struct RSAPKCS1KeyExchangeDeformatter__StaticFields {
};
struct RSAPKCS1KeyExchangeDeformatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1KeyExchangeDeformatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1KeyExchangeDeformatter__VTable vtable;
};

struct __declspec(align(8)) RSAPKCS1KeyExchangeFormatter__Fields {
  struct RandomNumberGenerator * RngValue;
  struct RSA * _rsaKey;
  struct Nullable_1_Boolean_ _rsaOverridesEncrypt;
};
struct RSAPKCS1KeyExchangeFormatter {
  struct RSAPKCS1KeyExchangeFormatter__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1KeyExchangeFormatter__Fields fields;
};
struct RSAPKCS1KeyExchangeFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Parameters;
  VirtualInvokeData SetKey;
  VirtualInvokeData CreateKeyExchange;
  VirtualInvokeData CreateKeyExchange_1;
};
struct RSAPKCS1KeyExchangeFormatter__StaticFields {
};
struct RSAPKCS1KeyExchangeFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1KeyExchangeFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1KeyExchangeFormatter__VTable vtable;
};

struct SHA1__Fields {
  struct HashAlgorithm__Fields _;
};
struct SHA1 {
  struct SHA1__Class *klass;
  struct MonitorData *monitor;
  struct SHA1__Fields fields;
};
struct SHA1Managed__Fields {
  struct SHA1__Fields _;
  struct Byte__Array * _buffer;
  int64_t _count;
  struct UInt32__Array * _stateSHA1;
  struct UInt32__Array * _expandedBuffer;
};
struct SHA1Managed {
  struct SHA1Managed__Class *klass;
  struct MonitorData *monitor;
  struct SHA1Managed__Fields fields;
};
struct SHA1Managed__VTable {
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
struct SHA1Managed__StaticFields {
};
struct SHA1Managed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA1Managed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA1Managed__VTable vtable;
};
struct SHA1__VTable {
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
struct SHA1__StaticFields {
};
struct SHA1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA1__VTable vtable;
};

struct SHA256__Fields {
  struct HashAlgorithm__Fields _;
};
struct SHA256 {
  struct SHA256__Class *klass;
  struct MonitorData *monitor;
  struct SHA256__Fields fields;
};
struct SHA256Managed__Fields {
  struct SHA256__Fields _;
  struct Byte__Array * _buffer;
  int64_t _count;
  struct UInt32__Array * _stateSHA256;
  struct UInt32__Array * _W;
};
struct SHA256Managed {
  struct SHA256Managed__Class *klass;
  struct MonitorData *monitor;
  struct SHA256Managed__Fields fields;
};
struct SHA256Managed__VTable {
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
struct SHA256Managed__StaticFields {
  struct UInt32__Array * _K;
};
struct SHA256Managed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA256Managed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA256Managed__VTable vtable;
};
struct SHA256__VTable {
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
struct SHA256__StaticFields {
};
struct SHA256__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA256__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA256__VTable vtable;
};

struct SHA384__Fields {
  struct HashAlgorithm__Fields _;
};
struct SHA384 {
  struct SHA384__Class *klass;
  struct MonitorData *monitor;
  struct SHA384__Fields fields;
};
struct SHA384Managed__Fields {
  struct SHA384__Fields _;
  struct Byte__Array * _buffer;
  uint64_t _count;
  struct UInt64__Array * _stateSHA384;
  struct UInt64__Array * _W;
};
struct SHA384Managed {
  struct SHA384Managed__Class *klass;
  struct MonitorData *monitor;
  struct SHA384Managed__Fields fields;
};
struct SHA384Managed__VTable {
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
struct SHA384Managed__StaticFields {
  struct UInt64__Array * _K;
};
struct SHA384Managed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA384Managed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA384Managed__VTable vtable;
};
struct SHA384__VTable {
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
struct SHA384__StaticFields {
};
struct SHA384__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA384__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA384__VTable vtable;
};

struct SHA512__Fields {
  struct HashAlgorithm__Fields _;
};
struct SHA512 {
  struct SHA512__Class *klass;
  struct MonitorData *monitor;
  struct SHA512__Fields fields;
};
struct SHA512Managed__Fields {
  struct SHA512__Fields _;
  struct Byte__Array * _buffer;
  uint64_t _count;
  struct UInt64__Array * _stateSHA512;
  struct UInt64__Array * _W;
};
struct SHA512Managed {
  struct SHA512Managed__Class *klass;
  struct MonitorData *monitor;
  struct SHA512Managed__Fields fields;
};
struct SHA512Managed__VTable {
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
struct SHA512Managed__StaticFields {
  struct UInt64__Array * _K;
};
struct SHA512Managed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA512Managed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA512Managed__VTable vtable;
};
struct SHA512__VTable {
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
struct SHA512__StaticFields {
};
struct SHA512__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA512__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA512__VTable vtable;
};

struct __declspec(align(8)) SignatureDescription__Fields {
  struct String * _strKey;
  struct String * _strDigest;
  struct String * _strFormatter;
  struct String * _strDeformatter;
};
struct SignatureDescription {
  struct SignatureDescription__Class *klass;
  struct MonitorData *monitor;
  struct SignatureDescription__Fields fields;
};
struct SignatureDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateDeformatter;
  VirtualInvokeData CreateFormatter;
  VirtualInvokeData CreateDigest;
};
struct SignatureDescription__StaticFields {
};
struct SignatureDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SignatureDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SignatureDescription__VTable vtable;
};

struct RSAPKCS1SignatureDescription__Fields {
  struct SignatureDescription__Fields _;
  struct String * _hashAlgorithm;
};
struct RSAPKCS1SignatureDescription {
  struct RSAPKCS1SignatureDescription__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1SignatureDescription__Fields fields;
};
struct RSAPKCS1SignatureDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateDeformatter;
  VirtualInvokeData CreateFormatter;
  VirtualInvokeData CreateDigest;
};
struct RSAPKCS1SignatureDescription__StaticFields {
};
struct RSAPKCS1SignatureDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1SignatureDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1SignatureDescription__VTable vtable;
};

struct RSAPKCS1SHA1SignatureDescription__Fields {
  struct RSAPKCS1SignatureDescription__Fields _;
};
struct RSAPKCS1SHA1SignatureDescription {
  struct RSAPKCS1SHA1SignatureDescription__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1SHA1SignatureDescription__Fields fields;
};
struct RSAPKCS1SHA1SignatureDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateDeformatter;
  VirtualInvokeData CreateFormatter;
  VirtualInvokeData CreateDigest;
};
struct RSAPKCS1SHA1SignatureDescription__StaticFields {
};
struct RSAPKCS1SHA1SignatureDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1SHA1SignatureDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1SHA1SignatureDescription__VTable vtable;
};

struct RSAPKCS1SHA256SignatureDescription__Fields {
  struct RSAPKCS1SignatureDescription__Fields _;
};
struct RSAPKCS1SHA256SignatureDescription {
  struct RSAPKCS1SHA256SignatureDescription__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1SHA256SignatureDescription__Fields fields;
};
struct RSAPKCS1SHA256SignatureDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateDeformatter;
  VirtualInvokeData CreateFormatter;
  VirtualInvokeData CreateDigest;
};
struct RSAPKCS1SHA256SignatureDescription__StaticFields {
};
struct RSAPKCS1SHA256SignatureDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1SHA256SignatureDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1SHA256SignatureDescription__VTable vtable;
};

struct RSAPKCS1SHA384SignatureDescription__Fields {
  struct RSAPKCS1SignatureDescription__Fields _;
};
struct RSAPKCS1SHA384SignatureDescription {
  struct RSAPKCS1SHA384SignatureDescription__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1SHA384SignatureDescription__Fields fields;
};
struct RSAPKCS1SHA384SignatureDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateDeformatter;
  VirtualInvokeData CreateFormatter;
  VirtualInvokeData CreateDigest;
};
struct RSAPKCS1SHA384SignatureDescription__StaticFields {
};
struct RSAPKCS1SHA384SignatureDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1SHA384SignatureDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1SHA384SignatureDescription__VTable vtable;
};

struct RSAPKCS1SHA512SignatureDescription__Fields {
  struct RSAPKCS1SignatureDescription__Fields _;
};
struct RSAPKCS1SHA512SignatureDescription {
  struct RSAPKCS1SHA512SignatureDescription__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1SHA512SignatureDescription__Fields fields;
};
struct RSAPKCS1SHA512SignatureDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateDeformatter;
  VirtualInvokeData CreateFormatter;
  VirtualInvokeData CreateDigest;
};
struct RSAPKCS1SHA512SignatureDescription__StaticFields {
};
struct RSAPKCS1SHA512SignatureDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1SHA512SignatureDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1SHA512SignatureDescription__VTable vtable;
};

struct DSASignatureDescription__Fields {
  struct SignatureDescription__Fields _;
};
struct DSASignatureDescription {
  struct DSASignatureDescription__Class *klass;
  struct MonitorData *monitor;
  struct DSASignatureDescription__Fields fields;
};
struct DSASignatureDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateDeformatter;
  VirtualInvokeData CreateFormatter;
  VirtualInvokeData CreateDigest;
};
struct DSASignatureDescription__StaticFields {
};
struct DSASignatureDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DSASignatureDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DSASignatureDescription__VTable vtable;
};

struct __declspec(align(8)) CryptoAPITransform__Fields {
  bool m_disposed;
};
struct CryptoAPITransform {
  struct CryptoAPITransform__Class *klass;
  struct MonitorData *monitor;
  struct CryptoAPITransform__Fields fields;
};
struct CryptoAPITransform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_InputBlockSize;
  VirtualInvokeData get_OutputBlockSize;
  VirtualInvokeData get_CanTransformMultipleBlocks;
  VirtualInvokeData get_CanReuseTransform;
  VirtualInvokeData TransformBlock;
  VirtualInvokeData TransformFinalBlock;
  VirtualInvokeData Dispose;
};
struct CryptoAPITransform__StaticFields {
};
struct CryptoAPITransform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptoAPITransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptoAPITransform__VTable vtable;
};

struct CryptoConfig {
  struct CryptoConfig__Class *klass;
  struct MonitorData *monitor;
};
struct CryptoConfig__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CryptoConfig__StaticFields {
};
struct CryptoConfig__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptoConfig__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptoConfig__VTable vtable;
};

enum KeyNumber__Enum : int32_t {
  KeyNumber__Enum_Exchange = 1,
  KeyNumber__Enum_Signature = 2,
};
struct KeyNumber__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KeyNumber__Enum value;
};

struct DSACryptoServiceProvider__Fields {
  struct DSA__Fields _;
  struct KeyPairPersistence * store;
  bool persistKey;
  bool persisted;
  bool privateKeyExportable;
  bool m_disposed;
  struct DSAManaged * dsa;
};
struct DSACryptoServiceProvider {
  struct DSACryptoServiceProvider__Class *klass;
  struct MonitorData *monitor;
  struct DSACryptoServiceProvider__Fields fields;
};
struct DSACryptoServiceProvider__VTable {
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
  VirtualInvokeData ExportCspBlob;
  VirtualInvokeData ImportCspBlob;
  VirtualInvokeData get_CspKeyContainerInfo;
};
struct DSACryptoServiceProvider__StaticFields {
  bool useMachineKeyStore;
};
struct DSACryptoServiceProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DSACryptoServiceProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DSACryptoServiceProvider__VTable vtable;
};

struct RC2Transform__Fields {
  struct SymmetricTransform__Fields _;
  uint16_t R0;
  uint16_t R1;
  uint16_t R2;
  uint16_t R3;
  struct UInt16__Array * K;
  int32_t j;
};
struct RC2Transform {
  struct RC2Transform__Class *klass;
  struct MonitorData *monitor;
  struct RC2Transform__Fields fields;
};
struct UInt16__Array {
  struct UInt16__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  uint16_t vector[32];
};
struct RC2Transform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_InputBlockSize;
  VirtualInvokeData get_OutputBlockSize;
  VirtualInvokeData get_CanTransformMultipleBlocks;
  VirtualInvokeData get_CanReuseTransform;
  VirtualInvokeData TransformBlock;
  VirtualInvokeData TransformFinalBlock;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanTransformMultipleBlocks_1;
  VirtualInvokeData get_CanReuseTransform_1;
  VirtualInvokeData get_InputBlockSize_1;
  VirtualInvokeData get_OutputBlockSize_1;
  VirtualInvokeData Transform;
  VirtualInvokeData ECB;
  VirtualInvokeData CBC;
  VirtualInvokeData CFB;
  VirtualInvokeData OFB;
  VirtualInvokeData CTS;
  VirtualInvokeData TransformBlock_1;
  VirtualInvokeData FinalEncrypt;
  VirtualInvokeData FinalDecrypt;
  VirtualInvokeData TransformFinalBlock_1;
};
struct RC2Transform__StaticFields {
  struct Byte__Array * pitable;
};
struct RC2Transform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RC2Transform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RC2Transform__VTable vtable;
};

struct __declspec(align(8)) RSAPKCS1SignatureDeformatter__Fields {
  struct RSA * rsa;
  struct String * hashName;
};
struct RSAPKCS1SignatureDeformatter {
  struct RSAPKCS1SignatureDeformatter__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1SignatureDeformatter__Fields fields;
};
struct RSAPKCS1SignatureDeformatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetKey;
  VirtualInvokeData SetHashAlgorithm;
  VirtualInvokeData VerifySignature;
  VirtualInvokeData VerifySignature_1;
};
struct RSAPKCS1SignatureDeformatter__StaticFields {
};
struct RSAPKCS1SignatureDeformatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1SignatureDeformatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1SignatureDeformatter__VTable vtable;
};

struct __declspec(align(8)) RSAPKCS1SignatureFormatter__Fields {
  struct RSA * rsa;
  struct String * hash;
};
struct RSAPKCS1SignatureFormatter {
  struct RSAPKCS1SignatureFormatter__Class *klass;
  struct MonitorData *monitor;
  struct RSAPKCS1SignatureFormatter__Fields fields;
};
struct RSAPKCS1SignatureFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetKey;
  VirtualInvokeData SetHashAlgorithm;
  VirtualInvokeData CreateSignature;
  VirtualInvokeData CreateSignature_1;
};
struct RSAPKCS1SignatureFormatter__StaticFields {
};
struct RSAPKCS1SignatureFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAPKCS1SignatureFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAPKCS1SignatureFormatter__VTable vtable;
};

struct __declspec(align(8)) SHA1Internal__Fields {
  struct UInt32__Array * _H;
  uint64_t count;
  struct Byte__Array * _ProcessingBuffer;
  int32_t _ProcessingBufferCount;
  struct UInt32__Array * buff;
};
struct SHA1Internal {
  struct SHA1Internal__Class *klass;
  struct MonitorData *monitor;
  struct SHA1Internal__Fields fields;
};
struct SHA1Internal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SHA1Internal__StaticFields {
};
struct SHA1Internal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA1Internal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA1Internal__VTable vtable;
};

struct SHA1CryptoServiceProvider__Fields {
  struct SHA1__Fields _;
  struct SHA1Internal * sha;
};
struct SHA1CryptoServiceProvider {
  struct SHA1CryptoServiceProvider__Class *klass;
  struct MonitorData *monitor;
  struct SHA1CryptoServiceProvider__Fields fields;
};
struct SHA1CryptoServiceProvider__VTable {
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
struct SHA1CryptoServiceProvider__StaticFields {
};
struct SHA1CryptoServiceProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SHA1CryptoServiceProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SHA1CryptoServiceProvider__VTable vtable;
};

struct TripleDESTransform__Fields {
  struct SymmetricTransform__Fields _;
  struct DESTransform * E1;
  struct DESTransform * D2;
  struct DESTransform * E3;
  struct DESTransform * D1;
  struct DESTransform * E2;
  struct DESTransform * D3;
};
struct TripleDESTransform {
  struct TripleDESTransform__Class *klass;
  struct MonitorData *monitor;
  struct TripleDESTransform__Fields fields;
};}