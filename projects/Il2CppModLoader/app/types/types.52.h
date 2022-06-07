namespace app {
struct PKCS1MaskGenerationMethod__StaticFields {
};

struct PKCS1MaskGenerationMethod__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PKCS1MaskGenerationMethod__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PKCS1MaskGenerationMethod__VTable vtable;
};

struct MaskGenerationMethod__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct MaskGenerationMethod__StaticFields {
};

struct MaskGenerationMethod__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaskGenerationMethod__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaskGenerationMethod__VTable vtable;
};

struct MD5__Fields {
    struct HashAlgorithm__Fields _;
};

struct MD5 {
    struct MD5__Class *klass;
    MonitorData *monitor;
    struct MD5__Fields fields;
};

struct MD5CryptoServiceProvider__Fields {
    struct MD5__Fields _;
    struct UInt32__Array *_H;
    struct UInt32__Array *buff;
    uint64_t count;
    struct Byte__Array *_ProcessingBuffer;
    int32_t _ProcessingBufferCount;
};

struct MD5CryptoServiceProvider {
    struct MD5CryptoServiceProvider__Class *klass;
    MonitorData *monitor;
    struct MD5CryptoServiceProvider__Fields fields;
};

struct MD5CryptoServiceProvider__VTable {
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

struct MD5CryptoServiceProvider__StaticFields {
    struct UInt32__Array *K;
};

struct MD5CryptoServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MD5CryptoServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MD5CryptoServiceProvider__VTable vtable;
};

struct MD5__VTable {
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

struct MD5__StaticFields {
};

struct MD5__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MD5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MD5__VTable vtable;
};

struct RC2__Fields {
    struct SymmetricAlgorithm__Fields _;
    int32_t EffectiveKeySizeValue;
};

struct RC2 {
    struct RC2__Class *klass;
    MonitorData *monitor;
    struct RC2__Fields fields;
};

struct RC2CryptoServiceProvider__Fields {
    struct RC2__Fields _;
    bool m_use40bitSalt;
};

struct RC2CryptoServiceProvider {
    struct RC2CryptoServiceProvider__Class *klass;
    MonitorData *monitor;
    struct RC2CryptoServiceProvider__Fields fields;
};

struct RC2CryptoServiceProvider__VTable {
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
    VirtualInvokeData get_EffectiveKeySize;
    VirtualInvokeData set_EffectiveKeySize;
};

struct RC2CryptoServiceProvider__StaticFields {
    struct KeySizes__Array *s_legalKeySizes;
};

struct RC2CryptoServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RC2CryptoServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RC2CryptoServiceProvider__VTable vtable;
};

struct RC2__VTable {
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
    VirtualInvokeData get_EffectiveKeySize;
    VirtualInvokeData set_EffectiveKeySize;
};

struct RC2__StaticFields {
    struct KeySizes__Array *s_legalBlockSizes;
    struct KeySizes__Array *s_legalKeySizes;
};

struct RC2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RC2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RC2__VTable vtable;
};

struct __declspec(align(8)) Rfc2898DeriveBytes__Fields {
    struct Byte__Array *m_buffer;
    struct Byte__Array *m_salt;
    struct HMACSHA1 *m_hmacsha1;
    struct Byte__Array *m_password;
    uint32_t m_iterations;
    uint32_t m_block;
    int32_t m_startIndex;
    int32_t m_endIndex;
};

struct Rfc2898DeriveBytes {
    struct Rfc2898DeriveBytes__Class *klass;
    MonitorData *monitor;
    struct Rfc2898DeriveBytes__Fields fields;
};

struct Rfc2898DeriveBytes__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData GetBytes;
    VirtualInvokeData Reset;
    VirtualInvokeData Dispose_1;
};

struct Rfc2898DeriveBytes__StaticFields {
};

struct Rfc2898DeriveBytes__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Rfc2898DeriveBytes__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Rfc2898DeriveBytes__VTable vtable;
};

enum class RijndaelManagedTransformMode__Enum : int32_t {
    Encrypt = 0x00000000,
    Decrypt = 0x00000001,
};

struct RijndaelManagedTransformMode__Enum__Boxed {
    struct RijndaelManagedTransformMode__Enum__Class *klass;
    MonitorData *monitor;
    RijndaelManagedTransformMode__Enum value;
    
};

struct RijndaelManagedTransformMode__Enum__VTable {
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

struct RijndaelManagedTransformMode__Enum__StaticFields {
};

struct RijndaelManagedTransformMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RijndaelManagedTransformMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RijndaelManagedTransformMode__Enum__VTable vtable;
};

struct __declspec(align(8)) RijndaelManagedTransform__Fields {
    CipherMode__Enum m_cipherMode;
    
    PaddingMode__Enum m_paddingValue;
    
    RijndaelManagedTransformMode__Enum m_transformMode;
    
    int32_t m_blockSizeBits;
    int32_t m_blockSizeBytes;
    int32_t m_inputBlockSize;
    int32_t m_outputBlockSize;
    struct Int32__Array *m_encryptKeyExpansion;
    struct Int32__Array *m_decryptKeyExpansion;
    int32_t m_Nr;
    int32_t m_Nb;
    int32_t m_Nk;
    struct Int32__Array *m_encryptindex;
    struct Int32__Array *m_decryptindex;
    struct Int32__Array *m_IV;
    struct Int32__Array *m_lastBlockBuffer;
    struct Byte__Array *m_depadBuffer;
    struct Byte__Array *m_shiftRegister;
};

struct RijndaelManagedTransform {
    struct RijndaelManagedTransform__Class *klass;
    MonitorData *monitor;
    struct RijndaelManagedTransform__Fields fields;
};

struct RijndaelManagedTransform__VTable {
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

struct RijndaelManagedTransform__StaticFields {
    struct Byte__Array *s_Sbox;
    struct Int32__Array *s_Rcon;
    struct Int32__Array *s_T;
    struct Int32__Array *s_TF;
    struct Int32__Array *s_iT;
    struct Int32__Array *s_iTF;
};

struct RijndaelManagedTransform__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RijndaelManagedTransform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RijndaelManagedTransform__VTable vtable;
};

struct RIPEMD160__Fields {
    struct HashAlgorithm__Fields _;
};

struct RIPEMD160 {
    struct RIPEMD160__Class *klass;
    MonitorData *monitor;
    struct RIPEMD160__Fields fields;
};

struct RIPEMD160Managed__Fields {
    struct RIPEMD160__Fields _;
    struct Byte__Array *_buffer;
    int64_t _count;
    struct UInt32__Array *_stateMD160;
    struct UInt32__Array *_blockDWords;
};

struct RIPEMD160Managed {
    struct RIPEMD160Managed__Class *klass;
    MonitorData *monitor;
    struct RIPEMD160Managed__Fields fields;
};

struct RIPEMD160Managed__VTable {
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

struct RIPEMD160Managed__StaticFields {
};

struct RIPEMD160Managed__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RIPEMD160Managed__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RIPEMD160Managed__VTable vtable;
};

struct RIPEMD160__VTable {
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

struct RIPEMD160__StaticFields {
};

struct RIPEMD160__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RIPEMD160__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RIPEMD160__VTable vtable;
};

struct UInt32Ptr {
    struct UInt32Ptr__Class *klass;
    MonitorData *monitor;
};

struct UInt32Ptr__VTable {
};

struct UInt32Ptr__StaticFields {
};

struct UInt32Ptr__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UInt32Ptr__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UInt32Ptr__VTable vtable;
};

struct RSACryptoServiceProvider__Fields {
    struct RSA__Fields _;
    struct KeyPairPersistence *store;
    bool persistKey;
    bool persisted;
    bool privateKeyExportable;
    bool m_disposed;
    struct RSAManaged *rsa;
};

struct RSACryptoServiceProvider {
    struct RSACryptoServiceProvider__Class *klass;
    MonitorData *monitor;
    struct RSACryptoServiceProvider__Fields fields;
};

struct __declspec(align(8)) CspKeyContainerInfo__Fields {
    struct CspParameters *_params;
    bool _random;
};

struct CspKeyContainerInfo {
    struct CspKeyContainerInfo__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CspKeyContainerInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    CspProviderFlags__Enum s_UseMachineKeyStore;
    
};

struct RSACryptoServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RSACryptoServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RSACryptoServiceProvider__VTable vtable;
};

struct __declspec(align(8)) RSAPKCS1KeyExchangeDeformatter__Fields {
    struct RSA *_rsaKey;
    struct Nullable_1_Boolean_ _rsaOverridesDecrypt;
    struct RandomNumberGenerator *RngValue;
};

struct RSAPKCS1KeyExchangeDeformatter {
    struct RSAPKCS1KeyExchangeDeformatter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RSAPKCS1KeyExchangeDeformatter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RSAPKCS1KeyExchangeDeformatter__VTable vtable;
};

struct __declspec(align(8)) RSAPKCS1KeyExchangeFormatter__Fields {
    struct RandomNumberGenerator *RngValue;
    struct RSA *_rsaKey;
    struct Nullable_1_Boolean_ _rsaOverridesEncrypt;
};

struct RSAPKCS1KeyExchangeFormatter {
    struct RSAPKCS1KeyExchangeFormatter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RSAPKCS1KeyExchangeFormatter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RSAPKCS1KeyExchangeFormatter__VTable vtable;
};

struct SHA1__Fields {
    struct HashAlgorithm__Fields _;
};

struct SHA1 {
    struct SHA1__Class *klass;
    MonitorData *monitor;
    struct SHA1__Fields fields;
};

struct SHA1Managed__Fields {
    struct SHA1__Fields _;
    struct Byte__Array *_buffer;
    int64_t _count;
    struct UInt32__Array *_stateSHA1;
    struct UInt32__Array *_expandedBuffer;
};

struct SHA1Managed {
    struct SHA1Managed__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SHA1Managed__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SHA1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SHA1__VTable vtable;
};

struct SHA256__Fields {
    struct HashAlgorithm__Fields _;
};

struct SHA256 {
    struct SHA256__Class *klass;
    MonitorData *monitor;
    struct SHA256__Fields fields;
};

struct SHA256Managed__Fields {
    struct SHA256__Fields _;
    struct Byte__Array *_buffer;
    int64_t _count;
    struct UInt32__Array *_stateSHA256;
    struct UInt32__Array *_W;
};

struct SHA256Managed {
    struct SHA256Managed__Class *klass;
    MonitorData *monitor;
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
    struct UInt32__Array *_K;
};

struct SHA256Managed__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SHA256Managed__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SHA256__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SHA256__VTable vtable;
};

struct SHA384__Fields {
    struct HashAlgorithm__Fields _;
};

struct SHA384 {
    struct SHA384__Class *klass;
    MonitorData *monitor;
    struct SHA384__Fields fields;
};

struct SHA384Managed__Fields {
    struct SHA384__Fields _;
    struct Byte__Array *_buffer;
    uint64_t _count;
    struct UInt64__Array *_stateSHA384;
    struct UInt64__Array *_W;
};

struct SHA384Managed {
    struct SHA384Managed__Class *klass;
    MonitorData *monitor;
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
    struct UInt64__Array *_K;
};

struct SHA384Managed__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SHA384Managed__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SHA384__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SHA384__VTable vtable;
};

struct SHA512__Fields {
    struct HashAlgorithm__Fields _;
};

struct SHA512 {
    struct SHA512__Class *klass;
    MonitorData *monitor;
    struct SHA512__Fields fields;
};

struct SHA512Managed__Fields {
    struct SHA512__Fields _;
    struct Byte__Array *_buffer;
    uint64_t _count;
    struct UInt64__Array *_stateSHA512;
    struct UInt64__Array *_W;
};

struct SHA512Managed {
    struct SHA512Managed__Class *klass;
    MonitorData *monitor;
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

}
