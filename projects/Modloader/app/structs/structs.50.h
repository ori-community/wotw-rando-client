namespace app {
    struct IDictionary_2_System_String_System_String_ {
        struct IDictionary_2_System_String_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct IDictionary_2_System_String_System_String___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData get_Keys;
        VirtualInvokeData get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
    };

    struct IDictionary_2_System_String_System_String___StaticFields {
    };

    struct IDictionary_2_System_String_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDictionary_2_System_String_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDictionary_2_System_String_System_String___VTable vtable;
    };

    struct __declspec(align(8)) ClaimsIdentity_get_Claims_d_51__Fields {
        int32_t __1__state;
        struct Claim* __2__current;
        int32_t __l__initialThreadId;
        struct ClaimsIdentity* __4__this;
        int32_t _i_5__1;
        int32_t _j_5__2;
        struct IEnumerator_1_System_Security_Claims_Claim_* __7__wrap1;
    };

    struct ClaimsIdentity_get_Claims_d_51 {
        struct ClaimsIdentity_get_Claims_d_51__Class* klass;
        MonitorData* monitor;
        struct ClaimsIdentity_get_Claims_d_51__Fields fields;
    };

    struct ClaimsIdentity_get_Claims_d_51__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct ClaimsIdentity_get_Claims_d_51__StaticFields {
    };

    struct ClaimsIdentity_get_Claims_d_51__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClaimsIdentity_get_Claims_d_51__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClaimsIdentity_get_Claims_d_51__VTable vtable;
    };

    struct Aes__Fields {
        struct SymmetricAlgorithm__Fields _;
    };

    struct Aes {
        struct Aes__Class* klass;
        MonitorData* monitor;
        struct Aes__Fields fields;
    };

    struct AesManaged__Fields {
        struct Aes__Fields _;
        struct RijndaelManaged* m_rijndael;
    };

    struct AesManaged {
        struct AesManaged__Class* klass;
        MonitorData* monitor;
        struct AesManaged__Fields fields;
    };

    struct Rijndael__Fields {
        struct SymmetricAlgorithm__Fields _;
    };

    struct Rijndael {
        struct Rijndael__Class* klass;
        MonitorData* monitor;
        struct Rijndael__Fields fields;
    };

    struct RijndaelManaged__Fields {
        struct Rijndael__Fields _;
    };

    struct RijndaelManaged {
        struct RijndaelManaged__Class* klass;
        MonitorData* monitor;
        struct RijndaelManaged__Fields fields;
    };

    struct Rijndael__VTable {
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

    struct Rijndael__StaticFields {
        struct KeySizes__Array* s_legalBlockSizes;
        struct KeySizes__Array* s_legalKeySizes;
    };

    struct Rijndael__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Rijndael__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RijndaelManaged__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AesManaged__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct KeySizes__Array* s_legalBlockSizes;
        struct KeySizes__Array* s_legalKeySizes;
    };

    struct Aes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Aes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Aes__VTable vtable;
    };

    struct AsymmetricKeyExchangeDeformatter {
        struct AsymmetricKeyExchangeDeformatter__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) RSAOAEPKeyExchangeDeformatter__Fields {
        struct RSA* _rsaKey;
        struct Nullable_1_Boolean_ _rsaOverridesDecrypt;
    };

    struct RSAOAEPKeyExchangeDeformatter {
        struct RSAOAEPKeyExchangeDeformatter__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAOAEPKeyExchangeDeformatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsymmetricKeyExchangeDeformatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsymmetricKeyExchangeDeformatter__VTable vtable;
    };

    struct AsymmetricKeyExchangeFormatter {
        struct AsymmetricKeyExchangeFormatter__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) RSAOAEPKeyExchangeFormatter__Fields {
        struct Byte__Array* ParameterValue;
        struct RSA* _rsaKey;
        struct Nullable_1_Boolean_ _rsaOverridesEncrypt;
        struct RandomNumberGenerator* RngValue;
    };

    struct RSAOAEPKeyExchangeFormatter {
        struct RSAOAEPKeyExchangeFormatter__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RSAOAEPKeyExchangeFormatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsymmetricKeyExchangeFormatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsymmetricKeyExchangeFormatter__VTable vtable;
    };

    struct AsymmetricSignatureDeformatter {
        struct AsymmetricSignatureDeformatter__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) DSASignatureDeformatter__Fields {
        struct DSA* _dsaKey;
        struct String* _oid;
    };

    struct DSASignatureDeformatter {
        struct DSASignatureDeformatter__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DSASignatureDeformatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsymmetricSignatureDeformatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsymmetricSignatureDeformatter__VTable vtable;
    };

    struct AsymmetricSignatureFormatter {
        struct AsymmetricSignatureFormatter__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) DSASignatureFormatter__Fields {
        struct DSA* _dsaKey;
        struct String* _oid;
    };

    struct DSASignatureFormatter {
        struct DSASignatureFormatter__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DSASignatureFormatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsymmetricSignatureFormatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsymmetricSignatureFormatter__VTable vtable;
    };

    struct ToBase64Transform {
        struct ToBase64Transform__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ToBase64Transform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ToBase64Transform__VTable vtable;
    };

    enum class FromBase64TransformMode__Enum : int32_t {
        IgnoreWhiteSpaces = 0x00000000,
        DoNotIgnoreWhiteSpaces = 0x00000001,
    };

    struct FromBase64TransformMode__Enum__Boxed {
        struct FromBase64TransformMode__Enum__Class* klass;
        MonitorData* monitor;
        FromBase64TransformMode__Enum value;
    };

    struct __declspec(align(8)) FromBase64Transform__Fields {
        struct Byte__Array* _inputBuffer;
        int32_t _inputIndex;
        FromBase64TransformMode__Enum _whitespaces;
    };

    struct FromBase64Transform {
        struct FromBase64Transform__Class* klass;
        MonitorData* monitor;
        struct FromBase64Transform__Fields fields;
    };

    struct FromBase64TransformMode__Enum__VTable {
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

    struct FromBase64TransformMode__Enum__StaticFields {
    };

    struct FromBase64TransformMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FromBase64TransformMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FromBase64TransformMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FromBase64Transform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FromBase64Transform__VTable vtable;
    };

    struct CryptographicException__Fields {
        struct SystemException__Fields _;
    };

    struct CryptographicException {
        struct CryptographicException__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptographicException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CryptographicException__VTable vtable;
    };

    struct CryptographicUnexpectedOperationException__Fields {
        struct CryptographicException__Fields _;
    };

    struct CryptographicUnexpectedOperationException {
        struct CryptographicUnexpectedOperationException__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptographicUnexpectedOperationException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CryptographicUnexpectedOperationException__VTable vtable;
    };

    enum class CspProviderFlags__Enum : int32_t {
        NoFlags = 0x00000000,
        UseMachineKeyStore = 0x00000001,
        UseDefaultKeyContainer = 0x00000002,
        UseNonExportableKey = 0x00000004,
        UseExistingKey = 0x00000008,
        UseArchivableKey = 0x00000010,
        UseUserProtectedKey = 0x00000020,
        NoPrompt = 0x00000040,
        CreateEphemeralKey = 0x00000080,
    };

    struct CspProviderFlags__Enum__Boxed {
        struct CspProviderFlags__Enum__Class* klass;
        MonitorData* monitor;
        CspProviderFlags__Enum value;
    };

    struct CspProviderFlags__Enum__VTable {
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

    struct CspProviderFlags__Enum__StaticFields {
    };

    struct CspProviderFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CspProviderFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CspProviderFlags__Enum__VTable vtable;
    };

    enum class CryptoStreamMode__Enum : int32_t {
        Read = 0x00000000,
        Write = 0x00000001,
    };

    struct CryptoStreamMode__Enum__Boxed {
        struct CryptoStreamMode__Enum__Class* klass;
        MonitorData* monitor;
        CryptoStreamMode__Enum value;
    };

    struct CryptoStream__Fields {
        struct Stream__Fields _;
        struct Stream* _stream;
        struct ICryptoTransform* _Transform;
        struct Byte__Array* _InputBuffer;
        int32_t _InputBufferIndex;
        int32_t _InputBlockSize;
        struct Byte__Array* _OutputBuffer;
        int32_t _OutputBufferIndex;
        int32_t _OutputBlockSize;
        CryptoStreamMode__Enum _transformMode;

        bool _canRead;
        bool _canWrite;
        bool _finalBlockTransformed;
    };

    struct CryptoStream {
        struct CryptoStream__Class* klass;
        MonitorData* monitor;
        struct CryptoStream__Fields fields;
    };

    struct CryptoStreamMode__Enum__VTable {
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

    struct CryptoStreamMode__Enum__StaticFields {
    };

    struct CryptoStreamMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptoStreamMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CryptoStreamMode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptoStream__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CryptoStream__VTable vtable;
    };

    struct CryptoStream_HopToThreadPoolAwaitable {
    };

    struct CryptoStream_HopToThreadPoolAwaitable__Boxed {
        struct CryptoStream_HopToThreadPoolAwaitable__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CryptoStream_HopToThreadPoolAwaitable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CryptoStream_HopToThreadPoolAwaitable__VTable vtable;
    };

    struct AsyncTaskMethodBuilder_1_System_Int32_ {
        struct AsyncMethodBuilderCore m_coreState;
        struct Task_1_System_Int32_* m_task;
    };

    struct AsyncTaskMethodBuilder_1_System_Int32___Boxed {
        struct AsyncTaskMethodBuilder_1_System_Int32___Class* klass;
        MonitorData* monitor;
        struct AsyncTaskMethodBuilder_1_System_Int32_ fields;
    };

    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ {
        struct Task_1_System_Int32_* m_task;
        bool m_continueOnCapturedContext;
    };

    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___Boxed {
        struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___Class* klass;
        MonitorData* monitor;
        struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ fields;
    };

    struct CryptoStream_ReadAsyncInternal_d_34 {
        int32_t __1__state;
        struct AsyncTaskMethodBuilder_1_System_Int32_ __t__builder;
        struct CryptoStream* __4__this;
        int32_t count;
        int32_t offset;
        struct Byte__Array* buffer;
        struct CancellationToken cancellationToken;
        struct Byte__Array* _tempInputBuffer_5__1;
        int32_t _currentOutputIndex_5__2;
        int32_t _bytesToDeliver_5__3;
        struct SemaphoreSlim* _sem_5__4;
        struct CryptoStream_HopToThreadPoolAwaitable __u__1;
        struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
        int32_t __7__wrap1;
        struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ __u__3;
    };

    struct CryptoStream_ReadAsyncInternal_d_34__Boxed {
        struct CryptoStream_ReadAsyncInternal_d_34__Class* klass;
        MonitorData* monitor;
        struct CryptoStream_ReadAsyncInternal_d_34 fields;
    };

    struct AsyncTaskMethodBuilder_1_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AsyncTaskMethodBuilder_1_System_Int32___StaticFields {
        struct Task_1_System_Int32_* s_defaultResultTask;
    };

    struct AsyncTaskMethodBuilder_1_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsyncTaskMethodBuilder_1_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsyncTaskMethodBuilder_1_System_Int32___VTable vtable;
    };

} // namespace app
