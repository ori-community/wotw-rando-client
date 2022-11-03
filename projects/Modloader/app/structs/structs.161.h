namespace app {
    struct TlsServerHelloDone_1__StaticFields {
    };

    struct TlsServerHelloDone_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TlsServerHelloDone_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TlsServerHelloDone_1__VTable vtable;
    };

    struct __declspec(align(8)) ChallengeResponse__Fields {
        bool _disposed;
        struct Byte__Array* _challenge;
        struct Byte__Array* _lmpwd;
        struct Byte__Array* _ntpwd;
    };

    struct ChallengeResponse {
        struct ChallengeResponse__Class* klass;
        MonitorData* monitor;
        struct ChallengeResponse__Fields fields;
    };

    struct ChallengeResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct ChallengeResponse__StaticFields {
        struct Byte__Array* magic;
        struct Byte__Array* nullEncMagic;
    };

    struct ChallengeResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChallengeResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChallengeResponse__VTable vtable;
    };

    struct Type2Message__Fields {
        struct MessageBase__Fields _;
        struct Byte__Array* _nonce;
        struct String* _targetName;
        struct Byte__Array* _targetInfo;
    };

    struct Type2Message {
        struct Type2Message__Class* klass;
        MonitorData* monitor;
        struct Type2Message__Fields fields;
    };

    struct Type2Message__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Decode;
        VirtualInvokeData GetBytes;
    };

    struct Type2Message__StaticFields {
    };

    struct Type2Message__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Type2Message__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Type2Message__VTable vtable;
    };

    enum class NtlmAuthLevel__Enum : int32_t {
        LM_and_NTLM = 0x00000000,
        LM_and_NTLM_and_try_NTLMv2_Session = 0x00000001,
        NTLM_only = 0x00000002,
        NTLMv2_only = 0x00000003,
    };

    struct NtlmAuthLevel__Enum__Boxed {
        struct NtlmAuthLevel__Enum__Class* klass;
        MonitorData* monitor;
        NtlmAuthLevel__Enum value;
    };

    struct NtlmAuthLevel__Enum__VTable {
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

    struct NtlmAuthLevel__Enum__StaticFields {
    };

    struct NtlmAuthLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NtlmAuthLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NtlmAuthLevel__Enum__VTable vtable;
    };

    struct Type3Message__Fields {
        struct MessageBase__Fields _;
        NtlmAuthLevel__Enum _level;

        struct Byte__Array* _challenge;
        struct String* _host;
        struct String* _domain;
        struct String* _username;
        struct String* _password;
        struct Type2Message* _type2;
        struct Byte__Array* _lm;
        struct Byte__Array* _nt;
    };

    struct Type3Message {
        struct Type3Message__Class* klass;
        MonitorData* monitor;
        struct Type3Message__Fields fields;
    };

    struct Type3Message__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Decode;
        VirtualInvokeData GetBytes;
    };

    struct Type3Message__StaticFields {
    };

    struct Type3Message__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Type3Message__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Type3Message__VTable vtable;
    };

    enum class AlertLevel__Enum_1 : uint8_t {
        Warning = 0x01,
        Fatal = 0x02,
    };

    struct AlertLevel__Enum_1__Boxed {
        struct AlertLevel__Enum_1__Class* klass;
        MonitorData* monitor;
        AlertLevel__Enum_1 value;
    };

    struct __declspec(align(8)) Alert_1__Fields {
        AlertLevel__Enum_1 level;

        AlertDescription__Enum description;
    };

    struct Alert_1 {
        struct Alert_1__Class* klass;
        MonitorData* monitor;
        struct Alert_1__Fields fields;
    };

    struct AlertLevel__Enum_1__VTable {
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

    struct AlertLevel__Enum_1__StaticFields {
    };

    struct AlertLevel__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AlertLevel__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AlertLevel__Enum_1__VTable vtable;
    };

    struct Alert_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Alert_1__StaticFields {
    };

    struct Alert_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Alert_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Alert_1__VTable vtable;
    };

    struct TlsException_1__Fields {
        struct Exception__Fields _;
        struct Alert_1* alert;
    };

    struct TlsException_1 {
        struct TlsException_1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TlsException_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TlsException_1__VTable vtable;
    };

    struct RC4_1__Fields {
        struct SymmetricAlgorithm__Fields _;
    };

    struct RC4_1 {
        struct RC4_1__Class* klass;
        MonitorData* monitor;
        struct RC4_1__Fields fields;
    };

    struct ARC4Managed_1__Fields {
        struct RC4_1__Fields _;
        struct Byte__Array* key;
        struct Byte__Array* state;
        uint8_t x;
        uint8_t y;
        bool m_disposed;
    };

    struct ARC4Managed_1 {
        struct ARC4Managed_1__Class* klass;
        MonitorData* monitor;
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
        struct KeySizes__Array* s_legalBlockSizes;
        struct KeySizes__Array* s_legalKeySizes;
    };

    struct RC4_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RC4_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ARC4Managed_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ARC4Managed_1__VTable vtable;
    };

    struct MD2_1__Fields {
        struct HashAlgorithm__Fields _;
    };

    struct MD2_1 {
        struct MD2_1__Class* klass;
        MonitorData* monitor;
        struct MD2_1__Fields fields;
    };

    struct MD2Managed_1__Fields {
        struct MD2_1__Fields _;
        struct Byte__Array* state;
        struct Byte__Array* checksum;
        struct Byte__Array* buffer;
        int32_t count;
        struct Byte__Array* x;
    };

    struct MD2Managed_1 {
        struct MD2Managed_1__Class* klass;
        MonitorData* monitor;
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
        struct Byte__Array* PI_SUBST;
    };

    struct MD2Managed_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD2Managed_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD2_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MD2_1__VTable vtable;
    };

    struct MD4_1__Fields {
        struct HashAlgorithm__Fields _;
    };

    struct MD4_1 {
        struct MD4_1__Class* klass;
        MonitorData* monitor;
        struct MD4_1__Fields fields;
    };

    struct MD4Managed_1__Fields {
        struct MD4_1__Fields _;
        struct UInt32__Array* state;
        struct Byte__Array* buffer;
        struct UInt32__Array* count;
        struct UInt32__Array* x;
        struct Byte__Array* digest;
    };

    struct MD4Managed_1 {
        struct MD4Managed_1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD4Managed_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD4_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MD4_1__VTable vtable;
    };

    struct MD5SHA1__Fields {
        struct HashAlgorithm__Fields _;
        struct HashAlgorithm* md5;
        struct HashAlgorithm* sha;
        bool hashing;
    };

    struct MD5SHA1 {
        struct MD5SHA1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MD5SHA1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MD5SHA1__VTable vtable;
    };

    struct __declspec(align(8)) PKCS8_EncryptedPrivateKeyInfo_1__Fields {
        struct String* _algorithm;
        struct Byte__Array* _salt;
        int32_t _iterations;
        struct Byte__Array* _data;
    };

    struct PKCS8_EncryptedPrivateKeyInfo_1 {
        struct PKCS8_EncryptedPrivateKeyInfo_1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PKCS8_EncryptedPrivateKeyInfo_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PKCS8_EncryptedPrivateKeyInfo_1__VTable vtable;
    };

    struct HMAC_1__Fields {
        struct KeyedHashAlgorithm__Fields _;
        struct HashAlgorithm* hash;
        bool hashing;
        struct Byte__Array* innerPad;
        struct Byte__Array* outerPad;
    };

    struct HMAC_1 {
        struct HMAC_1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HMAC_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HMAC_1__VTable vtable;
    };

    struct __declspec(align(8)) PrivateKey__Fields {
        bool encrypted;
        struct RSA* rsa;
        bool weak;
        int32_t keyType;
    };

    struct PrivateKey {
        struct PrivateKey__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PrivateKey__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PrivateKey__VTable vtable;
    };

    enum class BigInteger_Sign__Enum_1 : int32_t {
        Negative = -1,
        Zero = 0x00000000,
        Positive = 0x00000001,
    };

    struct BigInteger_Sign__Enum_1__Boxed {
        struct BigInteger_Sign__Enum_1__Class* klass;
        MonitorData* monitor;
        BigInteger_Sign__Enum_1 value;
    };

    struct BigInteger_Sign__Enum_1__VTable {
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

    struct BigInteger_Sign__Enum_1__StaticFields {
    };

    struct BigInteger_Sign__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BigInteger_Sign__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BigInteger_Sign__Enum_1__VTable vtable;
    };

    struct __declspec(align(8)) BigInteger_ModulusRing_1__Fields {
        struct BigInteger_1* mod;
        struct BigInteger_1* constant;
    };

    struct BigInteger_ModulusRing_1 {
        struct BigInteger_ModulusRing_1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BigInteger_ModulusRing_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BigInteger_ModulusRing_1__VTable vtable;
    };

    struct BigInteger_1__Array {
        struct BigInteger_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BigInteger_1* vector[32];
    };

    struct BigInteger_1__Array__VTable {
    };

    struct BigInteger_1__Array__StaticFields {
    };

    struct BigInteger_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BigInteger_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BigInteger_1__Array__VTable vtable;
    };

    struct PrimalityTest_1__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct PrimalityTest_1 {
        struct PrimalityTest_1__Class* klass;
        MonitorData* monitor;
        struct PrimalityTest_1__Fields fields;
    };

    enum class ConfidenceFactor__Enum_1 : int32_t {
        ExtraLow = 0x00000000,
        Low = 0x00000001,
        Medium = 0x00000002,
        High = 0x00000003,
        ExtraHigh = 0x00000004,
        Provable = 0x00000005,
    };

    struct ConfidenceFactor__Enum_1__Boxed {
        struct ConfidenceFactor__Enum_1__Class* klass;
        MonitorData* monitor;
        ConfidenceFactor__Enum_1 value;
    };

    struct ConfidenceFactor__Enum_1__VTable {
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

    struct ConfidenceFactor__Enum_1__StaticFields {
    };

    struct ConfidenceFactor__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConfidenceFactor__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConfidenceFactor__Enum_1__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PrimalityTest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PrimalityTest_1__VTable vtable;
    };

    struct PrimeGeneratorBase_1 {
        struct PrimeGeneratorBase_1__Class* klass;
        MonitorData* monitor;
    };

    struct SequentialSearchPrimeGeneratorBase_1 {
        struct SequentialSearchPrimeGeneratorBase_1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SequentialSearchPrimeGeneratorBase_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SequentialSearchPrimeGeneratorBase_1__VTable vtable;
    };

} // namespace app
