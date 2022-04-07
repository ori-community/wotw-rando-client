namespace app {
struct TlsException_1 {
  struct TlsException_1__Class *klass;
  struct MonitorData *monitor;
  struct TlsException_1__Fields fields;
};
struct TlsException_1__VTable {
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
struct TlsException_1__StaticFields {
};
struct TlsException_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsException_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsException_1__VTable vtable;
};

struct RC4_1__Fields {
  struct SymmetricAlgorithm__Fields _;
};
struct RC4_1 {
  struct RC4_1__Class *klass;
  struct MonitorData *monitor;
  struct RC4_1__Fields fields;
};
struct ARC4Managed_1__Fields {
  struct RC4_1__Fields _;
  struct Byte__Array * key;
  struct Byte__Array * state;
  uint8_t x;
  uint8_t y;
  bool m_disposed;
};
struct ARC4Managed_1 {
  struct ARC4Managed_1__Class *klass;
  struct MonitorData *monitor;
  struct ARC4Managed_1__Fields fields;
};
struct RC4_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_BlockSize;
  VirtualInvokeData set_BlockSize;
  VirtualInvokeData get_FeedbackSize;
  VirtualInvokeData set_FeedbackSize;
  VirtualInvokeData get_IV;
  VirtualInvokeData set_IV;
  VirtualInvokeData get_Key;
  VirtualInvokeData set_Key;
  VirtualInvokeData get_LegalBlockSizes;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_Mode;
  VirtualInvokeData set_Mode;
  VirtualInvokeData get_Padding;
  VirtualInvokeData set_Padding;
  VirtualInvokeData CreateEncryptor;
  VirtualInvokeData __unknown;
  VirtualInvokeData CreateDecryptor;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
};
struct RC4_1__StaticFields {
  struct KeySizes__Array * s_legalBlockSizes;
  struct KeySizes__Array * s_legalKeySizes;
};
struct RC4_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RC4_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RC4_1__VTable vtable;
};
struct ARC4Managed_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_BlockSize;
  VirtualInvokeData set_BlockSize;
  VirtualInvokeData get_FeedbackSize;
  VirtualInvokeData set_FeedbackSize;
  VirtualInvokeData get_IV;
  VirtualInvokeData set_IV;
  VirtualInvokeData get_Key;
  VirtualInvokeData set_Key;
  VirtualInvokeData get_LegalBlockSizes;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_Mode;
  VirtualInvokeData set_Mode;
  VirtualInvokeData get_Padding;
  VirtualInvokeData set_Padding;
  VirtualInvokeData CreateEncryptor;
  VirtualInvokeData CreateEncryptor_1;
  VirtualInvokeData CreateDecryptor;
  VirtualInvokeData CreateDecryptor_1;
  VirtualInvokeData GenerateKey;
  VirtualInvokeData GenerateIV;
  VirtualInvokeData get_InputBlockSize;
  VirtualInvokeData get_OutputBlockSize;
  VirtualInvokeData get_CanTransformMultipleBlocks;
  VirtualInvokeData get_CanReuseTransform;
  VirtualInvokeData TransformBlock;
  VirtualInvokeData TransformFinalBlock;
};
struct ARC4Managed_1__StaticFields {
};
struct ARC4Managed_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ARC4Managed_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ARC4Managed_1__VTable vtable;
};

struct MD2_1__Fields {
  struct HashAlgorithm__Fields _;
};
struct MD2_1 {
  struct MD2_1__Class *klass;
  struct MonitorData *monitor;
  struct MD2_1__Fields fields;
};
struct MD2Managed_1__Fields {
  struct MD2_1__Fields _;
  struct Byte__Array * state;
  struct Byte__Array * checksum;
  struct Byte__Array * buffer;
  int32_t count;
  struct Byte__Array * x;
};
struct MD2Managed_1 {
  struct MD2Managed_1__Class *klass;
  struct MonitorData *monitor;
  struct MD2Managed_1__Fields fields;
};
struct MD2Managed_1__VTable {
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
struct MD2Managed_1__StaticFields {
  struct Byte__Array * PI_SUBST;
};
struct MD2Managed_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD2Managed_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD2Managed_1__VTable vtable;
};
struct MD2_1__VTable {
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
struct MD2_1__StaticFields {
};
struct MD2_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD2_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD2_1__VTable vtable;
};

struct MD4_1__Fields {
  struct HashAlgorithm__Fields _;
};
struct MD4_1 {
  struct MD4_1__Class *klass;
  struct MonitorData *monitor;
  struct MD4_1__Fields fields;
};
struct MD4Managed_1__Fields {
  struct MD4_1__Fields _;
  struct UInt32__Array * state;
  struct Byte__Array * buffer;
  struct UInt32__Array * count;
  struct UInt32__Array * x;
  struct Byte__Array * digest;
};
struct MD4Managed_1 {
  struct MD4Managed_1__Class *klass;
  struct MonitorData *monitor;
  struct MD4Managed_1__Fields fields;
};
struct MD4Managed_1__VTable {
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
struct MD4Managed_1__StaticFields {
};
struct MD4Managed_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD4Managed_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD4Managed_1__VTable vtable;
};
struct MD4_1__VTable {
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
struct MD4_1__StaticFields {
};
struct MD4_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD4_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD4_1__VTable vtable;
};

struct MD5SHA1__Fields {
  struct HashAlgorithm__Fields _;
  struct HashAlgorithm * md5;
  struct HashAlgorithm * sha;
  bool hashing;
};
struct MD5SHA1 {
  struct MD5SHA1__Class *klass;
  struct MonitorData *monitor;
  struct MD5SHA1__Fields fields;
};
struct MD5SHA1__VTable {
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
struct MD5SHA1__StaticFields {
};
struct MD5SHA1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD5SHA1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD5SHA1__VTable vtable;
};

struct __declspec(align(8)) PKCS8_EncryptedPrivateKeyInfo_1__Fields {
  struct String * _algorithm;
  struct Byte__Array * _salt;
  int32_t _iterations;
  struct Byte__Array * _data;
};
struct PKCS8_EncryptedPrivateKeyInfo_1 {
  struct PKCS8_EncryptedPrivateKeyInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct PKCS8_EncryptedPrivateKeyInfo_1__Fields fields;
};
struct PKCS8_EncryptedPrivateKeyInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS8_EncryptedPrivateKeyInfo_1__StaticFields {
};
struct PKCS8_EncryptedPrivateKeyInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS8_EncryptedPrivateKeyInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS8_EncryptedPrivateKeyInfo_1__VTable vtable;
};

struct HMAC_1__Fields {
  struct KeyedHashAlgorithm__Fields _;
  struct HashAlgorithm * hash;
  bool hashing;
  struct Byte__Array * innerPad;
  struct Byte__Array * outerPad;
};
struct HMAC_1 {
  struct HMAC_1__Class *klass;
  struct MonitorData *monitor;
  struct HMAC_1__Fields fields;
};
struct HMAC_1__VTable {
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
  VirtualInvokeData get_Key;
  VirtualInvokeData set_Key;
};
struct HMAC_1__StaticFields {
};
struct HMAC_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HMAC_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HMAC_1__VTable vtable;
};

struct __declspec(align(8)) PrivateKey__Fields {
  bool encrypted;
  struct RSA * rsa;
  bool weak;
  int32_t keyType;
};
struct PrivateKey {
  struct PrivateKey__Class *klass;
  struct MonitorData *monitor;
  struct PrivateKey__Fields fields;
};
struct PrivateKey__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PrivateKey__StaticFields {
};
struct PrivateKey__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrivateKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrivateKey__VTable vtable;
};

enum BigInteger_Sign__Enum_1 : int32_t {
  BigInteger_Sign__Enum_1_Negative = -1,
  BigInteger_Sign__Enum_1_Zero = 0,
  BigInteger_Sign__Enum_1_Positive = 1,
};
struct BigInteger_Sign__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BigInteger_Sign__Enum_1 value;
};

struct __declspec(align(8)) BigInteger_ModulusRing_1__Fields {
  struct BigInteger_1 * mod;
  struct BigInteger_1 * constant;
};
struct BigInteger_ModulusRing_1 {
  struct BigInteger_ModulusRing_1__Class *klass;
  struct MonitorData *monitor;
  struct BigInteger_ModulusRing_1__Fields fields;
};
struct BigInteger_ModulusRing_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BigInteger_ModulusRing_1__StaticFields {
};
struct BigInteger_ModulusRing_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BigInteger_ModulusRing_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BigInteger_ModulusRing_1__VTable vtable;
};

struct BigInteger_1__Array {
  struct BigInteger_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BigInteger_1 * vector[32];
};

struct PrimalityTest_1__Fields {
  struct MulticastDelegate__Fields _;
};
struct PrimalityTest_1 {
  struct PrimalityTest_1__Class *klass;
  struct MonitorData *monitor;
  struct PrimalityTest_1__Fields fields;
};
enum ConfidenceFactor__Enum_1 : int32_t {
  ConfidenceFactor__Enum_1_ExtraLow = 0,
  ConfidenceFactor__Enum_1_Low = 1,
  ConfidenceFactor__Enum_1_Medium = 2,
  ConfidenceFactor__Enum_1_High = 3,
  ConfidenceFactor__Enum_1_ExtraHigh = 4,
  ConfidenceFactor__Enum_1_Provable = 5,
};
struct ConfidenceFactor__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConfidenceFactor__Enum_1 value;
};
struct PrimalityTest_1__VTable {
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
struct PrimalityTest_1__StaticFields {
};
struct PrimalityTest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrimalityTest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrimalityTest_1__VTable vtable;
};

struct PrimeGeneratorBase_1 {
  struct PrimeGeneratorBase_1__Class *klass;
  struct MonitorData *monitor;
};
struct SequentialSearchPrimeGeneratorBase_1 {
  struct SequentialSearchPrimeGeneratorBase_1__Class *klass;
  struct MonitorData *monitor;
};
struct SequentialSearchPrimeGeneratorBase_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Confidence;
  VirtualInvokeData get_PrimalityTest;
  VirtualInvokeData get_TrialDivisionBounds;
  VirtualInvokeData GenerateNewPrime;
  VirtualInvokeData GenerateSearchBase;
  VirtualInvokeData GenerateNewPrime_1;
  VirtualInvokeData IsPrimeAcceptable;
};
struct SequentialSearchPrimeGeneratorBase_1__StaticFields {
};
struct SequentialSearchPrimeGeneratorBase_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SequentialSearchPrimeGeneratorBase_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SequentialSearchPrimeGeneratorBase_1__VTable vtable;
};
struct PrimeGeneratorBase_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Confidence;
  VirtualInvokeData get_PrimalityTest;
  VirtualInvokeData get_TrialDivisionBounds;
  VirtualInvokeData __unknown;
};
struct PrimeGeneratorBase_1__StaticFields {
};
struct PrimeGeneratorBase_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrimeGeneratorBase_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrimeGeneratorBase_1__VTable vtable;
};

struct SafePipeHandle__Fields {
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};
struct SafePipeHandle {
  struct SafePipeHandle__Class *klass;
  struct MonitorData *monitor;
  struct SafePipeHandle__Fields fields;
};
struct SafePipeHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_IsInvalid;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ReleaseHandle;
};
struct SafePipeHandle__StaticFields {
};
struct SafePipeHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SafePipeHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SafePipeHandle__VTable vtable;
};

struct __declspec(align(8)) MonoTODOAttribute_2__Fields {
  struct String * comment;
};
struct MonoTODOAttribute_2 {
  struct MonoTODOAttribute_2__Class *klass;
  struct MonitorData *monitor;
  struct MonoTODOAttribute_2__Fields fields;
};
struct MonoTODOAttribute_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MonoTODOAttribute_2__StaticFields {
};
struct MonoTODOAttribute_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoTODOAttribute_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoTODOAttribute_2__VTable vtable;
};

struct __declspec(align(8)) ReaderWriterCount__Fields {
  int64_t lockID;
  int32_t readercount;
  int32_t writercount;
  int32_t upgradecount;
  struct ReaderWriterCount * next;
};
struct ReaderWriterCount {
  struct ReaderWriterCount__Class *klass;
  struct MonitorData *monitor;
  struct ReaderWriterCount__Fields fields;
};
struct ReaderWriterCount__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReaderWriterCount__StaticFields {
};
struct ReaderWriterCount__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReaderWriterCount__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReaderWriterCount__VTable vtable;
};

struct __declspec(align(8)) ReaderWriterLockSlim__Fields {
  bool fIsReentrant;
  int32_t myLock;
  uint32_t numWriteWaiters;
  uint32_t numReadWaiters;
  uint32_t numWriteUpgradeWaiters;
  uint32_t numUpgradeWaiters;
  bool fNoWaiters;
  int32_t upgradeLockOwnerId;
  int32_t writeLockOwnerId;
  struct EventWaitHandle * writeEvent;
  struct EventWaitHandle * readEvent;
  struct EventWaitHandle * upgradeEvent;
  struct EventWaitHandle * waitUpgradeEvent;
  int64_t lockID;
  bool fUpgradeThreadHoldingRead;
  uint32_t owners;
  bool fDisposed;
};
struct ReaderWriterLockSlim {
  struct ReaderWriterLockSlim__Class *klass;
  struct MonitorData *monitor;
  struct ReaderWriterLockSlim__Fields fields;
};
struct ReaderWriterLockSlim__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct ReaderWriterLockSlim__StaticFields {
  int64_t s_nextLockID;
  struct ReaderWriterCount * t_rwc;
};
struct ReaderWriterLockSlim__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReaderWriterLockSlim__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReaderWriterLockSlim__VTable vtable;
};

enum LockRecursionPolicy__Enum : int32_t {
  LockRecursionPolicy__Enum_NoRecursion = 0,
  LockRecursionPolicy__Enum_SupportsRecursion = 1,
};
struct LockRecursionPolicy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LockRecursionPolicy__Enum value;
};

struct ReaderWriterLockSlim_TimeoutTracker {
  int32_t m_total;
  int32_t m_start;
};
struct ReaderWriterLockSlim_TimeoutTracker__Boxed {
  struct ReaderWriterLockSlim_TimeoutTracker__Class *klass;
  struct MonitorData *monitor;
  struct ReaderWriterLockSlim_TimeoutTracker fields;
};
struct ReaderWriterLockSlim_TimeoutTracker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReaderWriterLockSlim_TimeoutTracker__StaticFields {
};
struct ReaderWriterLockSlim_TimeoutTracker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReaderWriterLockSlim_TimeoutTracker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReaderWriterLockSlim_TimeoutTracker__VTable vtable;
};

enum PipeDirection__Enum : int32_t {
  PipeDirection__Enum_In = 1,
  PipeDirection__Enum_Out = 2,
  PipeDirection__Enum_InOut = 3,
};
struct PipeDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PipeDirection__Enum value;
};
enum PipeTransmissionMode__Enum : int32_t {
  PipeTransmissionMode__Enum_Byte = 0,
  PipeTransmissionMode__Enum_Message = 1,
};
struct PipeTransmissionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PipeTransmissionMode__Enum value;
};
struct PipeStream__Fields {
  struct Stream__Fields _;
  enum PipeDirection__Enum direction;
  enum PipeTransmissionMode__Enum transmission_mode;
  enum PipeTransmissionMode__Enum read_trans_mode;
  int32_t buffer_size;
  struct SafePipeHandle * handle;
  struct Stream * stream;
  bool _IsAsync_k__BackingField;
  bool _IsConnected_k__BackingField;
  struct Func_4_Byte_Int32_Int32_Int32_ * read_delegate;
  struct Action_3_Byte_Int32_Int32_ * write_delegate;
};
struct PipeStream {
  struct PipeStream__Class *klass;
  struct MonitorData *monitor;
  struct PipeStream__Fields fields;
};
struct NamedPipeServerStream__Fields {
  struct PipeStream__Fields _;
  struct INamedPipeServer * impl;
};
struct NamedPipeServerStream {
  struct NamedPipeServerStream__Class *klass;
  struct MonitorData *monitor;
  struct NamedPipeServerStream__Fields fields;
};
struct Func_4_Byte_Int32_Int32_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_4_Byte_Int32_Int32_Int32_ {
  struct Func_4_Byte_Int32_Int32_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Func_4_Byte_Int32_Int32_Int32___Fields fields;
};
struct Action_3_Byte_Int32_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_Byte_Int32_Int32_ {
  struct Action_3_Byte_Int32_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_Byte_Int32_Int32___Fields fields;
};
struct INamedPipeServer {
  struct INamedPipeServer__Class *klass;
  struct MonitorData *monitor;
};
enum PipeOptions__Enum : int32_t {
  PipeOptions__Enum_None = 0,
  PipeOptions__Enum_WriteThrough = -2147483648,
  PipeOptions__Enum_Asynchronous = 1073741824,
};
struct PipeOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PipeOptions__Enum value;
};
struct Func_4_Byte_Int32_Int32_Int32___VTable {
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
struct Func_4_Byte_Int32_Int32_Int32___StaticFields {
};
struct Func_4_Byte_Int32_Int32_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_4_Byte_Int32_Int32_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_4_Byte_Int32_Int32_Int32___VTable vtable;
};
struct Action_3_Byte_Int32_Int32___VTable {
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
struct Action_3_Byte_Int32_Int32___StaticFields {
};
struct Action_3_Byte_Int32_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_3_Byte_Int32_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_3_Byte_Int32_Int32___VTable vtable;
};
struct PipeStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRead;
  VirtualInvokeData get_CanSeek;
  VirtualInvokeData get_CanTimeout;
  VirtualInvokeData get_CanWrite;
  VirtualInvokeData get_Length;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData FlushAsync;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData ReadAsync;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData WriteAsync;
  VirtualInvokeData Seek;
  VirtualInvokeData SetLength;
  VirtualInvokeData Read;
  VirtualInvokeData ReadByte;
  VirtualInvokeData Write;
  VirtualInvokeData WriteByte;
};
struct PipeStream__StaticFields {
};
struct PipeStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PipeStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PipeStream__VTable vtable;
};
struct INamedPipeServer__VTable {
  VirtualInvokeData WaitForConnection;
};
struct INamedPipeServer__StaticFields {
};
struct INamedPipeServer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INamedPipeServer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INamedPipeServer__VTable vtable;
};
struct NamedPipeServerStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRead;
  VirtualInvokeData get_CanSeek;
  VirtualInvokeData get_CanTimeout;
  VirtualInvokeData get_CanWrite;
  VirtualInvokeData get_Length;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData FlushAsync;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData ReadAsync;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData WriteAsync;
  VirtualInvokeData Seek;
  VirtualInvokeData SetLength;
  VirtualInvokeData Read;
  VirtualInvokeData ReadByte;
  VirtualInvokeData Write;
  VirtualInvokeData WriteByte;
};}