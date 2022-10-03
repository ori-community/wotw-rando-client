namespace app {
    struct X509ExtensionCollection__StaticFields {
    };

    struct X509ExtensionCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509ExtensionCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct String* encoding_error;
    };

    struct X509Certificate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Certificate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Certificate__VTable vtable;
    };

    struct __declspec(align(8)) PKCS12_DeriveBytes__Fields {
        struct String* _hashName;
        int32_t _iterations;
        struct Byte__Array* _password;
        struct Byte__Array* _salt;
    };

    struct PKCS12_DeriveBytes {
        struct PKCS12_DeriveBytes__Class* klass;
        MonitorData* monitor;
        struct PKCS12_DeriveBytes__Fields fields;
    };

    struct PKCS12_DeriveBytes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PKCS12_DeriveBytes__StaticFields {
        struct Byte__Array* keyDiversifier;
        struct Byte__Array* ivDiversifier;
        struct Byte__Array* macDiversifier;
    };

    struct PKCS12_DeriveBytes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PKCS12_DeriveBytes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PKCS12_DeriveBytes__VTable vtable;
    };

    struct __declspec(align(8)) X509CertificateCollection_X509CertificateEnumerator__Fields {
        struct IEnumerator* enumerator;
    };

    struct X509CertificateCollection_X509CertificateEnumerator {
        struct X509CertificateCollection_X509CertificateEnumerator__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509CertificateCollection_X509CertificateEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509CertificateCollection_X509CertificateEnumerator__VTable vtable;
    };

    struct __declspec(align(8)) X509Extension__Fields {
        struct String* extnOid;
        bool extnCritical;
        struct ASN1* extnValue;
    };

    struct X509Extension {
        struct X509Extension__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Extension__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Extension__VTable vtable;
    };

    struct __declspec(align(8)) KeyPairPersistence__Fields {
        struct CspParameters* _params;
        struct String* _keyvalue;
        struct String* _filename;
        struct String* _container;
    };

    struct KeyPairPersistence {
        struct KeyPairPersistence__Class* klass;
        MonitorData* monitor;
        struct KeyPairPersistence__Fields fields;
    };

    struct __declspec(align(8)) CspParameters__Fields {
        int32_t ProviderType;
        struct String* ProviderName;
        struct String* KeyContainerName;
        int32_t KeyNumber;
        int32_t m_flags;
        struct CryptoKeySecurity* m_cryptoKeySecurity;
        struct SecureString* m_keyPassword;
        void* m_parentWindowHandle;
    };

    struct CspParameters {
        struct CspParameters__Class* klass;
        MonitorData* monitor;
        struct CspParameters__Fields fields;
    };

    struct ObjectSecurity {
        struct ObjectSecurity__Class* klass;
        MonitorData* monitor;
    };

    struct CommonObjectSecurity {
        struct CommonObjectSecurity__Class* klass;
        MonitorData* monitor;
    };

    struct NativeObjectSecurity {
        struct NativeObjectSecurity__Class* klass;
        MonitorData* monitor;
    };

    struct CryptoKeySecurity {
        struct CryptoKeySecurity__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SecureString__Fields {
        int32_t length;
        bool disposed;
        bool read_only;
        struct Byte__Array* data;
    };

    struct SecureString {
        struct SecureString__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ObjectSecurity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CommonObjectSecurity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NativeObjectSecurity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptoKeySecurity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SecureString__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CspParameters__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct String* _userPath;
        bool _machinePathExists;
        struct String* _machinePath;
        struct Object* lockobj;
    };

    struct KeyPairPersistence__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyPairPersistence__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyPairPersistence__VTable vtable;
    };

    struct __declspec(align(8)) HashAlgorithm__Fields {
        int32_t HashSizeValue;
        struct Byte__Array* HashValue;
        int32_t State;
        bool m_bDisposed;
    };

    struct HashAlgorithm {
        struct HashAlgorithm__Class* klass;
        MonitorData* monitor;
        struct HashAlgorithm__Fields fields;
    };

    struct MD2__Fields {
        struct HashAlgorithm__Fields _;
    };

    struct MD2 {
        struct MD2__Class* klass;
        MonitorData* monitor;
        struct MD2__Fields fields;
    };

    struct MD2Managed__Fields {
        struct MD2__Fields _;
        struct Byte__Array* state;
        struct Byte__Array* checksum;
        struct Byte__Array* buffer;
        int32_t count;
        struct Byte__Array* x;
    };

    struct MD2Managed {
        struct MD2Managed__Class* klass;
        MonitorData* monitor;
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
        struct Byte__Array* PI_SUBST;
    };

    struct MD2Managed__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD2Managed__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashAlgorithm__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MD2__VTable vtable;
    };

    struct MD4__Fields {
        struct HashAlgorithm__Fields _;
    };

    struct MD4 {
        struct MD4__Class* klass;
        MonitorData* monitor;
        struct MD4__Fields fields;
    };

    struct MD4Managed__Fields {
        struct MD4__Fields _;
        struct UInt32__Array* state;
        struct Byte__Array* buffer;
        struct UInt32__Array* count;
        struct UInt32__Array* x;
        struct Byte__Array* digest;
    };

    struct MD4Managed {
        struct MD4Managed__Class* klass;
        MonitorData* monitor;
        struct MD4Managed__Fields fields;
    };

    struct MD4Managed__VTable {
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

    struct MD4Managed__StaticFields {
    };

    struct MD4Managed__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD4Managed__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MD4Managed__VTable vtable;
    };

    struct MD4__VTable {
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

    struct MD4__StaticFields {
    };

    struct MD4__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD4__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MD4__VTable vtable;
    };

    struct UInt32___VTable {
    };

    struct UInt32___StaticFields {
    };

    struct UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt32___VTable vtable;
    };

    struct __declspec(align(8)) PKCS8_EncryptedPrivateKeyInfo__Fields {
        struct String* _algorithm;
        struct Byte__Array* _salt;
        int32_t _iterations;
        struct Byte__Array* _data;
    };

    struct PKCS8_EncryptedPrivateKeyInfo {
        struct PKCS8_EncryptedPrivateKeyInfo__Class* klass;
        MonitorData* monitor;
        struct PKCS8_EncryptedPrivateKeyInfo__Fields fields;
    };

    struct PKCS8_EncryptedPrivateKeyInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PKCS8_EncryptedPrivateKeyInfo__StaticFields {
    };

    struct PKCS8_EncryptedPrivateKeyInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PKCS8_EncryptedPrivateKeyInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PKCS8_EncryptedPrivateKeyInfo__VTable vtable;
    };

    struct __declspec(align(8)) SymmetricTransform__Fields {
        struct SymmetricAlgorithm* algo;
        bool encrypt;
        int32_t BlockSizeByte;
        struct Byte__Array* temp;
        struct Byte__Array* temp2;
        struct Byte__Array* workBuff;
        struct Byte__Array* workout;
        PaddingMode__Enum padmode;

        int32_t FeedBackByte;
        bool m_disposed;
        bool lastBlock;
        struct RandomNumberGenerator* _rng;
    };

    struct SymmetricTransform {
        struct SymmetricTransform__Class* klass;
        MonitorData* monitor;
        struct SymmetricTransform__Fields fields;
    };

    struct DESTransform__Fields {
        struct SymmetricTransform__Fields _;
        struct Byte__Array* keySchedule;
        struct Byte__Array* byteBuff;
        struct UInt32__Array* dwordBuff;
    };

    struct DESTransform {
        struct DESTransform__Class* klass;
        MonitorData* monitor;
        struct DESTransform__Fields fields;
    };

    struct DESTransform__VTable {
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

    struct DESTransform__StaticFields {
        int32_t KEY_BIT_SIZE;
        int32_t KEY_BYTE_SIZE;
        int32_t BLOCK_BIT_SIZE;
        int32_t BLOCK_BYTE_SIZE;
        struct UInt32__Array* spBoxes;
        struct Byte__Array* PC1;
        struct Byte__Array* leftRotTotal;
        struct Byte__Array* PC2;
        struct UInt32__Array* ipTab;
        struct UInt32__Array* fpTab;
    };

    struct DESTransform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DESTransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DESTransform__VTable vtable;
    };

    struct SymmetricTransform__VTable {
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
        VirtualInvokeData __unknown;
        VirtualInvokeData CBC;
        VirtualInvokeData CFB;
        VirtualInvokeData OFB;
        VirtualInvokeData CTS;
        VirtualInvokeData TransformBlock_1;
        VirtualInvokeData FinalEncrypt;
        VirtualInvokeData FinalDecrypt;
        VirtualInvokeData TransformFinalBlock_1;
    };

    struct SymmetricTransform__StaticFields {
    };

    struct SymmetricTransform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SymmetricTransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SymmetricTransform__VTable vtable;
    };

    enum class BigInteger_Sign__Enum : int32_t {
        Negative = -1,
        Zero = 0x00000000,
        Positive = 0x00000001,
    };

    struct BigInteger_Sign__Enum__Boxed {
        struct BigInteger_Sign__Enum__Class* klass;
        MonitorData* monitor;
        BigInteger_Sign__Enum value;
    };

    struct BigInteger_Sign__Enum__VTable {
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

    struct BigInteger_Sign__Enum__StaticFields {
    };

    struct BigInteger_Sign__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BigInteger_Sign__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BigInteger_Sign__Enum__VTable vtable;
    };

    struct __declspec(align(8)) BigInteger_ModulusRing__Fields {
        struct BigInteger* mod;
        struct BigInteger* constant;
    };

    struct BigInteger_ModulusRing {
        struct BigInteger_ModulusRing__Class* klass;
        MonitorData* monitor;
        struct BigInteger_ModulusRing__Fields fields;
    };

    struct BigInteger_ModulusRing__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BigInteger_ModulusRing__StaticFields {
    };

    struct BigInteger_ModulusRing__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BigInteger_ModulusRing__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BigInteger_ModulusRing__VTable vtable;
    };

    struct BigInteger__Array {
        struct BigInteger__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BigInteger* vector[32];
    };

    struct BigInteger__Array__VTable {
    };

    struct BigInteger__Array__StaticFields {
    };

    struct BigInteger__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BigInteger__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BigInteger__Array__VTable vtable;
    };

    struct PrimalityTest__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct PrimalityTest {
        struct PrimalityTest__Class* klass;
        MonitorData* monitor;
        struct PrimalityTest__Fields fields;
    };

    enum class ConfidenceFactor__Enum : int32_t {
        ExtraLow = 0x00000000,
        Low = 0x00000001,
        Medium = 0x00000002,
        High = 0x00000003,
        ExtraHigh = 0x00000004,
        Provable = 0x00000005,
    };

    struct ConfidenceFactor__Enum__Boxed {
        struct ConfidenceFactor__Enum__Class* klass;
        MonitorData* monitor;
        ConfidenceFactor__Enum value;
    };

    struct ConfidenceFactor__Enum__VTable {
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

    struct ConfidenceFactor__Enum__StaticFields {
    };

    struct ConfidenceFactor__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConfidenceFactor__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConfidenceFactor__Enum__VTable vtable;
    };

    struct PrimalityTest__VTable {
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

    struct PrimalityTest__StaticFields {
    };

    struct PrimalityTest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PrimalityTest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PrimalityTest__VTable vtable;
    };

    struct PrimeGeneratorBase {
        struct PrimeGeneratorBase__Class* klass;
        MonitorData* monitor;
    };

    struct SequentialSearchPrimeGeneratorBase {
        struct SequentialSearchPrimeGeneratorBase__Class* klass;
        MonitorData* monitor;
    };

    struct SequentialSearchPrimeGeneratorBase__VTable {
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

    struct SequentialSearchPrimeGeneratorBase__StaticFields {
    };

    struct SequentialSearchPrimeGeneratorBase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SequentialSearchPrimeGeneratorBase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SequentialSearchPrimeGeneratorBase__VTable vtable;
    };

    struct PrimeGeneratorBase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Confidence;
        VirtualInvokeData get_PrimalityTest;
        VirtualInvokeData get_TrialDivisionBounds;
        VirtualInvokeData __unknown;
    };

} // namespace app
