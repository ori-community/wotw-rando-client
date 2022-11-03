namespace app {
    struct SHA512Managed__StaticFields {
        struct UInt64__Array* _K;
    };

    struct SHA512Managed__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SHA512Managed__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SHA512__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SHA512__VTable vtable;
    };

    struct __declspec(align(8)) SignatureDescription__Fields {
        struct String* _strKey;
        struct String* _strDigest;
        struct String* _strFormatter;
        struct String* _strDeformatter;
    };

    struct SignatureDescription {
        struct SignatureDescription__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SignatureDescription__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SignatureDescription__VTable vtable;
    };

    struct RSAPKCS1SignatureDescription__Fields {
        struct SignatureDescription__Fields _;
        struct String* _hashAlgorithm;
    };

    struct RSAPKCS1SignatureDescription {
        struct RSAPKCS1SignatureDescription__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAPKCS1SignatureDescription__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RSAPKCS1SignatureDescription__VTable vtable;
    };

    struct RSAPKCS1SHA1SignatureDescription__Fields {
        struct RSAPKCS1SignatureDescription__Fields _;
    };

    struct RSAPKCS1SHA1SignatureDescription {
        struct RSAPKCS1SHA1SignatureDescription__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAPKCS1SHA1SignatureDescription__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RSAPKCS1SHA1SignatureDescription__VTable vtable;
    };

    struct RSAPKCS1SHA256SignatureDescription__Fields {
        struct RSAPKCS1SignatureDescription__Fields _;
    };

    struct RSAPKCS1SHA256SignatureDescription {
        struct RSAPKCS1SHA256SignatureDescription__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAPKCS1SHA256SignatureDescription__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RSAPKCS1SHA256SignatureDescription__VTable vtable;
    };

    struct RSAPKCS1SHA384SignatureDescription__Fields {
        struct RSAPKCS1SignatureDescription__Fields _;
    };

    struct RSAPKCS1SHA384SignatureDescription {
        struct RSAPKCS1SHA384SignatureDescription__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAPKCS1SHA384SignatureDescription__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RSAPKCS1SHA384SignatureDescription__VTable vtable;
    };

    struct RSAPKCS1SHA512SignatureDescription__Fields {
        struct RSAPKCS1SignatureDescription__Fields _;
    };

    struct RSAPKCS1SHA512SignatureDescription {
        struct RSAPKCS1SHA512SignatureDescription__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAPKCS1SHA512SignatureDescription__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RSAPKCS1SHA512SignatureDescription__VTable vtable;
    };

    struct DSASignatureDescription__Fields {
        struct SignatureDescription__Fields _;
    };

    struct DSASignatureDescription {
        struct DSASignatureDescription__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DSASignatureDescription__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DSASignatureDescription__VTable vtable;
    };

    struct __declspec(align(8)) CryptoAPITransform__Fields {
        bool m_disposed;
    };

    struct CryptoAPITransform {
        struct CryptoAPITransform__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptoAPITransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CryptoAPITransform__VTable vtable;
    };

    struct CryptoConfig {
        struct CryptoConfig__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptoConfig__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CryptoConfig__VTable vtable;
    };

    enum class KeyNumber__Enum : int32_t {
        Exchange = 0x00000001,
        Signature = 0x00000002,
    };

    struct KeyNumber__Enum__Boxed {
        struct KeyNumber__Enum__Class* klass;
        MonitorData* monitor;
        KeyNumber__Enum value;
    };

    struct KeyNumber__Enum__VTable {
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

    struct KeyNumber__Enum__StaticFields {
    };

    struct KeyNumber__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyNumber__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyNumber__Enum__VTable vtable;
    };

    struct DSACryptoServiceProvider__Fields {
        struct DSA__Fields _;
        struct KeyPairPersistence* store;
        bool persistKey;
        bool persisted;
        bool privateKeyExportable;
        bool m_disposed;
        struct DSAManaged* dsa;
    };

    struct DSACryptoServiceProvider {
        struct DSACryptoServiceProvider__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DSACryptoServiceProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DSACryptoServiceProvider__VTable vtable;
    };

    struct RC2Transform__Fields {
        struct SymmetricTransform__Fields _;
        uint16_t R0;
        uint16_t R1;
        uint16_t R2;
        uint16_t R3;
        struct UInt16__Array* K;
        int32_t j;
    };

    struct RC2Transform {
        struct RC2Transform__Class* klass;
        MonitorData* monitor;
        struct RC2Transform__Fields fields;
    };

    struct UInt16__Array {
        struct UInt16__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        uint16_t vector[32];
    };

    struct UInt16__Array__VTable {
    };

    struct UInt16__Array__StaticFields {
    };

    struct UInt16__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt16__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt16__Array__VTable vtable;
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
        struct Byte__Array* pitable;
    };

    struct RC2Transform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RC2Transform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RC2Transform__VTable vtable;
    };

    struct __declspec(align(8)) RSAPKCS1SignatureDeformatter__Fields {
        struct RSA* rsa;
        struct String* hashName;
    };

    struct RSAPKCS1SignatureDeformatter {
        struct RSAPKCS1SignatureDeformatter__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAPKCS1SignatureDeformatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RSAPKCS1SignatureDeformatter__VTable vtable;
    };

    struct __declspec(align(8)) RSAPKCS1SignatureFormatter__Fields {
        struct RSA* rsa;
        struct String* hash;
    };

    struct RSAPKCS1SignatureFormatter {
        struct RSAPKCS1SignatureFormatter__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAPKCS1SignatureFormatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RSAPKCS1SignatureFormatter__VTable vtable;
    };

    struct __declspec(align(8)) SHA1Internal__Fields {
        struct UInt32__Array* _H;
        uint64_t count;
        struct Byte__Array* _ProcessingBuffer;
        int32_t _ProcessingBufferCount;
        struct UInt32__Array* buff;
    };

    struct SHA1Internal {
        struct SHA1Internal__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SHA1Internal__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SHA1Internal__VTable vtable;
    };

    struct SHA1CryptoServiceProvider__Fields {
        struct SHA1__Fields _;
        struct SHA1Internal* sha;
    };

    struct SHA1CryptoServiceProvider {
        struct SHA1CryptoServiceProvider__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SHA1CryptoServiceProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SHA1CryptoServiceProvider__VTable vtable;
    };

    struct TripleDESTransform__Fields {
        struct SymmetricTransform__Fields _;
        struct DESTransform* E1;
        struct DESTransform* D2;
        struct DESTransform* E3;
        struct DESTransform* D1;
        struct DESTransform* E2;
        struct DESTransform* D3;
    };

    struct TripleDESTransform {
        struct TripleDESTransform__Class* klass;
        MonitorData* monitor;
        struct TripleDESTransform__Fields fields;
    };

    struct TripleDESTransform__VTable {
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

    struct TripleDESTransform__StaticFields {
    };

    struct TripleDESTransform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TripleDESTransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TripleDESTransform__VTable vtable;
    };

    struct __declspec(align(8)) X509Certificate_1__Fields {
        struct X509CertificateImpl* impl;
        bool hideDates;
        struct String* issuer_name;
        struct String* subject_name;
    };

    struct X509Certificate_1 {
        struct X509Certificate_1__Class* klass;
        MonitorData* monitor;
        struct X509Certificate_1__Fields fields;
    };

    struct __declspec(align(8)) X509CertificateImpl__Fields {
        struct Byte__Array* cachedCertificateHash;
    };

    struct X509CertificateImpl {
        struct X509CertificateImpl__Class* klass;
        MonitorData* monitor;
        struct X509CertificateImpl__Fields fields;
    };

    struct X509CertificateImplMono__Fields {
        struct X509CertificateImpl__Fields _;
        struct X509Certificate* x509;
    };

    struct X509CertificateImplMono {
        struct X509CertificateImplMono__Class* klass;
        MonitorData* monitor;
        struct X509CertificateImplMono__Fields fields;
    };

    enum class X509KeyStorageFlags__Enum : int32_t {
        DefaultKeySet = 0x00000000,
        UserKeySet = 0x00000001,
        MachineKeySet = 0x00000002,
        Exportable = 0x00000004,
        UserProtected = 0x00000008,
        PersistKeySet = 0x00000010,
        EphemeralKeySet = 0x00000020,
    };

    struct X509KeyStorageFlags__Enum__Boxed {
        struct X509KeyStorageFlags__Enum__Class* klass;
        MonitorData* monitor;
        X509KeyStorageFlags__Enum value;
    };

    struct X509CertificateImplMono__VTable {
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
    };

    struct X509CertificateImplMono__StaticFields {
    };

    struct X509CertificateImplMono__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509CertificateImplMono__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509CertificateImplMono__VTable vtable;
    };

    struct X509CertificateImpl__VTable {
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
    };

    struct X509CertificateImpl__StaticFields {
    };

    struct X509CertificateImpl__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509CertificateImpl__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509CertificateImpl__VTable vtable;
    };

    struct X509KeyStorageFlags__Enum__VTable {
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

    struct X509KeyStorageFlags__Enum__StaticFields {
    };

    struct X509KeyStorageFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509KeyStorageFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509KeyStorageFlags__Enum__VTable vtable;
    };

    struct X509Certificate_1__VTable {
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

    struct X509Certificate_1__StaticFields {
    };

    struct X509Certificate_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Certificate_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Certificate_1__VTable vtable;
    };

    struct INativeCertificateHelper {
        struct INativeCertificateHelper__Class* klass;
        MonitorData* monitor;
    };

    struct INativeCertificateHelper__VTable {
        VirtualInvokeData Import;
    };

    struct INativeCertificateHelper__StaticFields {
    };

    struct INativeCertificateHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct INativeCertificateHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct INativeCertificateHelper__VTable vtable;
    };

    struct __declspec(align(8)) TargetFrameworkAttribute__Fields {
        struct String* _frameworkName;
        struct String* _frameworkDisplayName;
    };

    struct TargetFrameworkAttribute {
        struct TargetFrameworkAttribute__Class* klass;
        MonitorData* monitor;
        struct TargetFrameworkAttribute__Fields fields;
    };

    struct TargetFrameworkAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct TargetFrameworkAttribute__StaticFields {
    };

    struct TargetFrameworkAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TargetFrameworkAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TargetFrameworkAttribute__VTable vtable;
    };

    struct DeserializationEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DeserializationEventHandler {
        struct DeserializationEventHandler__Class* klass;
        MonitorData* monitor;
        struct DeserializationEventHandler__Fields fields;
    };

    struct DeserializationEventHandler__VTable {
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

} // namespace app
