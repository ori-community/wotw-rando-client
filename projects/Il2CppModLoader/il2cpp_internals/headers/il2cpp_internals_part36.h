namespace app {
struct Rijndael__StaticFields {
  struct KeySizes__Array * s_legalBlockSizes;
  struct KeySizes__Array * s_legalKeySizes;
};
struct Rijndael__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Rijndael__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Rijndael__VTable vtable;
};
struct RijndaelManaged__VTable {
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
};
struct RijndaelManaged__StaticFields {
};
struct RijndaelManaged__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RijndaelManaged__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RijndaelManaged__VTable vtable;
};
struct AesManaged__VTable {
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
};
struct AesManaged__StaticFields {
};
struct AesManaged__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AesManaged__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AesManaged__VTable vtable;
};
struct Aes__VTable {
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
struct Aes__StaticFields {
  struct KeySizes__Array * s_legalBlockSizes;
  struct KeySizes__Array * s_legalKeySizes;
};
struct Aes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Aes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Aes__VTable vtable;
};

struct AsymmetricKeyExchangeDeformatter {
  struct AsymmetricKeyExchangeDeformatter__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) RSAOAEPKeyExchangeDeformatter__Fields {
  struct RSA * _rsaKey;
  struct Nullable_1_Boolean_ _rsaOverridesDecrypt;
};
struct RSAOAEPKeyExchangeDeformatter {
  struct RSAOAEPKeyExchangeDeformatter__Class *klass;
  struct MonitorData *monitor;
  struct RSAOAEPKeyExchangeDeformatter__Fields fields;
};
struct RSAOAEPKeyExchangeDeformatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Parameters;
  VirtualInvokeData set_Parameters;
  VirtualInvokeData SetKey;
  VirtualInvokeData DecryptKeyExchange;
};
struct RSAOAEPKeyExchangeDeformatter__StaticFields {
};
struct RSAOAEPKeyExchangeDeformatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAOAEPKeyExchangeDeformatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAOAEPKeyExchangeDeformatter__VTable vtable;
};
struct AsymmetricKeyExchangeDeformatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
};
struct AsymmetricKeyExchangeDeformatter__StaticFields {
};
struct AsymmetricKeyExchangeDeformatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymmetricKeyExchangeDeformatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymmetricKeyExchangeDeformatter__VTable vtable;
};

struct AsymmetricKeyExchangeFormatter {
  struct AsymmetricKeyExchangeFormatter__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) RSAOAEPKeyExchangeFormatter__Fields {
  struct Byte__Array * ParameterValue;
  struct RSA * _rsaKey;
  struct Nullable_1_Boolean_ _rsaOverridesEncrypt;
  struct RandomNumberGenerator * RngValue;
};
struct RSAOAEPKeyExchangeFormatter {
  struct RSAOAEPKeyExchangeFormatter__Class *klass;
  struct MonitorData *monitor;
  struct RSAOAEPKeyExchangeFormatter__Fields fields;
};
struct RSAOAEPKeyExchangeFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Parameters;
  VirtualInvokeData SetKey;
  VirtualInvokeData CreateKeyExchange;
  VirtualInvokeData CreateKeyExchange_1;
};
struct RSAOAEPKeyExchangeFormatter__StaticFields {
};
struct RSAOAEPKeyExchangeFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAOAEPKeyExchangeFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAOAEPKeyExchangeFormatter__VTable vtable;
};
struct AsymmetricKeyExchangeFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
};
struct AsymmetricKeyExchangeFormatter__StaticFields {
};
struct AsymmetricKeyExchangeFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymmetricKeyExchangeFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymmetricKeyExchangeFormatter__VTable vtable;
};

struct AsymmetricSignatureDeformatter {
  struct AsymmetricSignatureDeformatter__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DSASignatureDeformatter__Fields {
  struct DSA * _dsaKey;
  struct String * _oid;
};
struct DSASignatureDeformatter {
  struct DSASignatureDeformatter__Class *klass;
  struct MonitorData *monitor;
  struct DSASignatureDeformatter__Fields fields;
};
struct DSASignatureDeformatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetKey;
  VirtualInvokeData SetHashAlgorithm;
  VirtualInvokeData VerifySignature;
  VirtualInvokeData VerifySignature_1;
};
struct DSASignatureDeformatter__StaticFields {
};
struct DSASignatureDeformatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DSASignatureDeformatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DSASignatureDeformatter__VTable vtable;
};
struct AsymmetricSignatureDeformatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData VerifySignature;
  VirtualInvokeData __unknown_2;
};
struct AsymmetricSignatureDeformatter__StaticFields {
};
struct AsymmetricSignatureDeformatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymmetricSignatureDeformatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymmetricSignatureDeformatter__VTable vtable;
};

struct AsymmetricSignatureFormatter {
  struct AsymmetricSignatureFormatter__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DSASignatureFormatter__Fields {
  struct DSA * _dsaKey;
  struct String * _oid;
};
struct DSASignatureFormatter {
  struct DSASignatureFormatter__Class *klass;
  struct MonitorData *monitor;
  struct DSASignatureFormatter__Fields fields;
};
struct DSASignatureFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetKey;
  VirtualInvokeData SetHashAlgorithm;
  VirtualInvokeData CreateSignature;
  VirtualInvokeData CreateSignature_1;
};
struct DSASignatureFormatter__StaticFields {
};
struct DSASignatureFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DSASignatureFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DSASignatureFormatter__VTable vtable;
};
struct AsymmetricSignatureFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData CreateSignature;
  VirtualInvokeData __unknown_2;
};
struct AsymmetricSignatureFormatter__StaticFields {
};
struct AsymmetricSignatureFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymmetricSignatureFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymmetricSignatureFormatter__VTable vtable;
};

struct ToBase64Transform {
  struct ToBase64Transform__Class *klass;
  struct MonitorData *monitor;
};
struct ToBase64Transform__VTable {
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
  VirtualInvokeData get_CanReuseTransform_1;
  VirtualInvokeData Dispose_1;
};
struct ToBase64Transform__StaticFields {
};
struct ToBase64Transform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ToBase64Transform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ToBase64Transform__VTable vtable;
};

enum FromBase64TransformMode__Enum : int32_t {
  FromBase64TransformMode__Enum_IgnoreWhiteSpaces = 0,
  FromBase64TransformMode__Enum_DoNotIgnoreWhiteSpaces = 1,
};
struct FromBase64TransformMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FromBase64TransformMode__Enum value;
};
struct __declspec(align(8)) FromBase64Transform__Fields {
  struct Byte__Array * _inputBuffer;
  int32_t _inputIndex;
  enum FromBase64TransformMode__Enum _whitespaces;
};
struct FromBase64Transform {
  struct FromBase64Transform__Class *klass;
  struct MonitorData *monitor;
  struct FromBase64Transform__Fields fields;
};
struct FromBase64Transform__VTable {
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
  VirtualInvokeData get_CanReuseTransform_1;
  VirtualInvokeData Dispose_1;
};
struct FromBase64Transform__StaticFields {
};
struct FromBase64Transform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FromBase64Transform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FromBase64Transform__VTable vtable;
};

struct CryptographicException__Fields {
  struct SystemException__Fields _;
};
struct CryptographicException {
  struct CryptographicException__Class *klass;
  struct MonitorData *monitor;
  struct CryptographicException__Fields fields;
};
struct CryptographicException__VTable {
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
struct CryptographicException__StaticFields {
};
struct CryptographicException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptographicException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptographicException__VTable vtable;
};

struct CryptographicUnexpectedOperationException__Fields {
  struct CryptographicException__Fields _;
};
struct CryptographicUnexpectedOperationException {
  struct CryptographicUnexpectedOperationException__Class *klass;
  struct MonitorData *monitor;
  struct CryptographicUnexpectedOperationException__Fields fields;
};
struct CryptographicUnexpectedOperationException__VTable {
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
struct CryptographicUnexpectedOperationException__StaticFields {
};
struct CryptographicUnexpectedOperationException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptographicUnexpectedOperationException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptographicUnexpectedOperationException__VTable vtable;
};

enum CspProviderFlags__Enum : int32_t {
  CspProviderFlags__Enum_NoFlags = 0,
  CspProviderFlags__Enum_UseMachineKeyStore = 1,
  CspProviderFlags__Enum_UseDefaultKeyContainer = 2,
  CspProviderFlags__Enum_UseNonExportableKey = 4,
  CspProviderFlags__Enum_UseExistingKey = 8,
  CspProviderFlags__Enum_UseArchivableKey = 16,
  CspProviderFlags__Enum_UseUserProtectedKey = 32,
  CspProviderFlags__Enum_NoPrompt = 64,
  CspProviderFlags__Enum_CreateEphemeralKey = 128,
};
struct CspProviderFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CspProviderFlags__Enum value;
};

enum CryptoStreamMode__Enum : int32_t {
  CryptoStreamMode__Enum_Read = 0,
  CryptoStreamMode__Enum_Write = 1,
};
struct CryptoStreamMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CryptoStreamMode__Enum value;
};
struct CryptoStream__Fields {
  struct Stream__Fields _;
  struct Stream * _stream;
  struct ICryptoTransform * _Transform;
  struct Byte__Array * _InputBuffer;
  int32_t _InputBufferIndex;
  int32_t _InputBlockSize;
  struct Byte__Array * _OutputBuffer;
  int32_t _OutputBufferIndex;
  int32_t _OutputBlockSize;
  enum CryptoStreamMode__Enum _transformMode;
  bool _canRead;
  bool _canWrite;
  bool _finalBlockTransformed;
};
struct CryptoStream {
  struct CryptoStream__Class *klass;
  struct MonitorData *monitor;
  struct CryptoStream__Fields fields;
};
struct CryptoStream__VTable {
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
struct CryptoStream__StaticFields {
};
struct CryptoStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptoStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptoStream__VTable vtable;
};

struct CryptoStream_HopToThreadPoolAwaitable {
};
struct CryptoStream_HopToThreadPoolAwaitable__Boxed {
  struct CryptoStream_HopToThreadPoolAwaitable__Class *klass;
  struct MonitorData *monitor;
  struct CryptoStream_HopToThreadPoolAwaitable fields;
};
struct CryptoStream_HopToThreadPoolAwaitable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnCompleted;
};
struct CryptoStream_HopToThreadPoolAwaitable__StaticFields {
};
struct CryptoStream_HopToThreadPoolAwaitable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptoStream_HopToThreadPoolAwaitable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptoStream_HopToThreadPoolAwaitable__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_System_Int32_ {
  struct AsyncMethodBuilderCore m_coreState;
  struct Task_1_System_Int32_ * m_task;
};
struct AsyncTaskMethodBuilder_1_System_Int32___Boxed {
  struct AsyncTaskMethodBuilder_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct AsyncTaskMethodBuilder_1_System_Int32_ fields;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ {
  struct Task_1_System_Int32_ * m_task;
  bool m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___Boxed {
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ fields;
};
struct CryptoStream_ReadAsyncInternal_d_34 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder_1_System_Int32_ __t__builder;
  struct CryptoStream * __4__this;
  int32_t count;
  int32_t offset;
  struct Byte__Array * buffer;
  struct CancellationToken cancellationToken;
  struct Byte__Array * _tempInputBuffer_5__1;
  int32_t _currentOutputIndex_5__2;
  int32_t _bytesToDeliver_5__3;
  struct SemaphoreSlim * _sem_5__4;
  struct CryptoStream_HopToThreadPoolAwaitable __u__1;
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
  int32_t __7__wrap1;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ __u__3;
};
struct CryptoStream_ReadAsyncInternal_d_34__Boxed {
  struct CryptoStream_ReadAsyncInternal_d_34__Class *klass;
  struct MonitorData *monitor;
  struct CryptoStream_ReadAsyncInternal_d_34 fields;
};
struct AsyncTaskMethodBuilder_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder_1_System_Int32___StaticFields {
  struct Task_1_System_Int32_ * s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncTaskMethodBuilder_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncTaskMethodBuilder_1_System_Int32___VTable vtable;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___StaticFields {
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___VTable vtable;
};
struct CryptoStream_ReadAsyncInternal_d_34__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct CryptoStream_ReadAsyncInternal_d_34__StaticFields {
};
struct CryptoStream_ReadAsyncInternal_d_34__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptoStream_ReadAsyncInternal_d_34__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptoStream_ReadAsyncInternal_d_34__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_ {
  struct AsyncMethodBuilderCore m_coreState;
  struct Task_1_VoidTaskResult_ * m_task;
};
struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed {
  struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Class *klass;
  struct MonitorData *monitor;
  struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_ fields;
};
struct AsyncTaskMethodBuilder {
  struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_ m_builder;
};
struct AsyncTaskMethodBuilder__Boxed {
  struct AsyncTaskMethodBuilder__Class *klass;
  struct MonitorData *monitor;
  struct AsyncTaskMethodBuilder fields;
};
struct CryptoStream_WriteAsyncInternal_d_37 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder __t__builder;
  struct CryptoStream * __4__this;
  int32_t count;
  int32_t offset;
  struct Byte__Array * buffer;
  struct CancellationToken cancellationToken;
  int32_t _bytesToWrite_5__1;
  int32_t _currentInputIndex_5__2;
  int32_t _numWholeBlocksInBytes_5__3;
  struct SemaphoreSlim * _sem_5__4;
  struct CryptoStream_HopToThreadPoolAwaitable __u__1;
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
};
struct CryptoStream_WriteAsyncInternal_d_37__Boxed {
  struct CryptoStream_WriteAsyncInternal_d_37__Class *klass;
  struct MonitorData *monitor;
  struct CryptoStream_WriteAsyncInternal_d_37 fields;
};
struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___StaticFields {
  struct Task_1_VoidTaskResult_ * s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___VTable vtable;
};
struct AsyncTaskMethodBuilder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder__StaticFields {
  struct Task_1_VoidTaskResult_ * s_cachedCompleted;
};
struct AsyncTaskMethodBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncTaskMethodBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncTaskMethodBuilder__VTable vtable;
};
struct CryptoStream_WriteAsyncInternal_d_37__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct CryptoStream_WriteAsyncInternal_d_37__StaticFields {
};
struct CryptoStream_WriteAsyncInternal_d_37__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CryptoStream_WriteAsyncInternal_d_37__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CryptoStream_WriteAsyncInternal_d_37__VTable vtable;
};

struct DeriveBytes {
  struct DeriveBytes__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PasswordDeriveBytes__Fields {
  int32_t _extraCount;
  int32_t _prefix;
  int32_t _iterations;
  struct Byte__Array * _baseValue;
  struct Byte__Array * _extra;
  struct Byte__Array * _salt;
  struct String * _hashName;
  struct Byte__Array * _password;
  struct HashAlgorithm * _hash;
};
struct PasswordDeriveBytes {
  struct PasswordDeriveBytes__Class *klass;
  struct MonitorData *monitor;
  struct PasswordDeriveBytes__Fields fields;
};
struct PasswordDeriveBytes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData GetBytes;
  VirtualInvokeData Reset;
  VirtualInvokeData Dispose_1;
};
struct PasswordDeriveBytes__StaticFields {
};
struct PasswordDeriveBytes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PasswordDeriveBytes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PasswordDeriveBytes__VTable vtable;
};
struct DeriveBytes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData Dispose_1;
};
struct DeriveBytes__StaticFields {
};
struct DeriveBytes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeriveBytes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeriveBytes__VTable vtable;
};

struct DES__Fields {
  struct SymmetricAlgorithm__Fields _;
};
struct DES {
  struct DES__Class *klass;
  struct MonitorData *monitor;
  struct DES__Fields fields;
};
struct DESCryptoServiceProvider__Fields {
  struct DES__Fields _;
};
struct DESCryptoServiceProvider {
  struct DESCryptoServiceProvider__Class *klass;
  struct MonitorData *monitor;
  struct DESCryptoServiceProvider__Fields fields;
};
struct DESCryptoServiceProvider__VTable {
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
};
struct DESCryptoServiceProvider__StaticFields {
};
struct DESCryptoServiceProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DESCryptoServiceProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DESCryptoServiceProvider__VTable vtable;
};
struct DES__VTable {
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
struct DES__StaticFields {
  struct KeySizes__Array * s_legalBlockSizes;
  struct KeySizes__Array * s_legalKeySizes;
};
struct DES__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DES__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DES__VTable vtable;
};

struct KeyedHashAlgorithm__Fields {
  struct HashAlgorithm__Fields _;
  struct Byte__Array * KeyValue;
};
struct KeyedHashAlgorithm {
  struct KeyedHashAlgorithm__Class *klass;
  struct MonitorData *monitor;
  struct KeyedHashAlgorithm__Fields fields;
};
struct HMAC__Fields {
  struct KeyedHashAlgorithm__Fields _;
  int32_t blockSizeValue;
  struct String * m_hashName;
  struct HashAlgorithm * m_hash1;
  struct HashAlgorithm * m_hash2;
  struct Byte__Array * m_inner;
  struct Byte__Array * m_outer;
  bool m_hashing;
};
struct HMAC {
  struct HMAC__Class *klass;
  struct MonitorData *monitor;
  struct HMAC__Fields fields;
};
struct KeyedHashAlgorithm__VTable {
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
  VirtualInvokeData get_Key;
  VirtualInvokeData set_Key;
};}