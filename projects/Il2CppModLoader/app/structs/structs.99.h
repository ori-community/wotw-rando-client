namespace app {
    struct OidEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OidEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OidEnumerator__VTable vtable;
    };

    struct __declspec(align(8)) PublicKey__Fields {
        struct AsymmetricAlgorithm* _key;
        struct AsnEncodedData* _keyValue;
        struct AsnEncodedData* _params;
        struct Oid* _oid;
    };

    struct PublicKey {
        struct PublicKey__Class* klass;
        MonitorData* monitor;
        struct PublicKey__Fields fields;
    };

    struct __declspec(align(8)) X509Certificate_2__Fields {
        struct ASN1_1* decoder;
        struct Byte__Array* m_encodedcert;
        struct DateTime m_from;
        struct DateTime m_until;
        struct ASN1_1* issuer;
        struct String* m_issuername;
        struct String* m_keyalgo;
        struct Byte__Array* m_keyalgoparams;
        struct ASN1_1* subject;
        struct String* m_subject;
        struct Byte__Array* m_publickey;
        struct Byte__Array* signature;
        struct String* m_signaturealgo;
        struct Byte__Array* m_signaturealgoparams;
        struct Byte__Array* certhash;
        struct RSA* _rsa;
        struct DSA* _dsa;
        int32_t version;
        struct Byte__Array* serialnumber;
        struct Byte__Array* issuerUniqueID;
        struct Byte__Array* subjectUniqueID;
        struct X509ExtensionCollection_1* extensions;
    };

    struct X509Certificate_2 {
        struct X509Certificate_2__Class* klass;
        MonitorData* monitor;
        struct X509Certificate_2__Fields fields;
    };

    struct __declspec(align(8)) ASN1_1__Fields {
        uint8_t m_nTag;
        struct Byte__Array* m_aValue;
        struct ArrayList* elist;
    };

    struct ASN1_1 {
        struct ASN1_1__Class* klass;
        MonitorData* monitor;
        struct ASN1_1__Fields fields;
    };

    struct X509ExtensionCollection_1__Fields {
        struct CollectionBase__Fields _;
        bool readOnly;
    };

    struct X509ExtensionCollection_1 {
        struct X509ExtensionCollection_1__Class* klass;
        MonitorData* monitor;
        struct X509ExtensionCollection_1__Fields fields;
    };

    struct PublicKey__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PublicKey__StaticFields {
        struct Byte__Array* Empty;
    };

    struct PublicKey__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PublicKey__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PublicKey__VTable vtable;
    };

    struct ASN1_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetBytes;
    };

    struct ASN1_1__StaticFields {
    };

    struct ASN1_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ASN1_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ASN1_1__VTable vtable;
    };

    struct X509ExtensionCollection_1__VTable {
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

    struct X509ExtensionCollection_1__StaticFields {
    };

    struct X509ExtensionCollection_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509ExtensionCollection_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509ExtensionCollection_1__VTable vtable;
    };

    struct X509Certificate_2__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_IssuerName;
        VirtualInvokeData get_KeyAlgorithm;
        VirtualInvokeData get_KeyAlgorithmParameters;
        VirtualInvokeData set_KeyAlgorithmParameters;
        VirtualInvokeData get_PublicKey;
        VirtualInvokeData get_RSA;
        VirtualInvokeData set_RSA;
        VirtualInvokeData get_RawData;
        VirtualInvokeData get_SerialNumber;
        VirtualInvokeData get_Signature;
        VirtualInvokeData get_SignatureAlgorithm;
        VirtualInvokeData get_SignatureAlgorithmParameters;
        VirtualInvokeData get_SubjectName;
        VirtualInvokeData get_ValidFrom;
        VirtualInvokeData get_ValidUntil;
        VirtualInvokeData GetObjectData_1;
    };

    struct X509Certificate_2__StaticFields {
        struct String* encoding_error;
    };

    struct X509Certificate_2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Certificate_2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Certificate_2__VTable vtable;
    };

    enum class X500DistinguishedNameFlags__Enum : int32_t {
        None = 0x00000000,
        Reversed = 0x00000001,
        UseSemicolons = 0x00000010,
        DoNotUsePlusSign = 0x00000020,
        DoNotUseQuotes = 0x00000040,
        UseCommas = 0x00000080,
        UseNewLines = 0x00000100,
        UseUTF8Encoding = 0x00001000,
        UseT61Encoding = 0x00002000,
        ForceUTF8Encoding = 0x00004000,
    };

    struct X500DistinguishedNameFlags__Enum__Boxed {
        struct X500DistinguishedNameFlags__Enum__Class* klass;
        MonitorData* monitor;
        X500DistinguishedNameFlags__Enum value;
    };

    struct X500DistinguishedNameFlags__Enum__VTable {
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

    struct X500DistinguishedNameFlags__Enum__StaticFields {
    };

    struct X500DistinguishedNameFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X500DistinguishedNameFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X500DistinguishedNameFlags__Enum__VTable vtable;
    };

    struct X509Extension_1__Fields {
        struct AsnEncodedData__Fields _;
        bool _critical;
    };

    struct X509Extension_1 {
        struct X509Extension_1__Class* klass;
        MonitorData* monitor;
        struct X509Extension_1__Fields fields;
    };

    enum class AsnDecodeStatus__Enum : int32_t {
        NotDecoded = -1,
        Ok = 0x00000000,
        BadAsn = 0x00000001,
        BadTag = 0x00000002,
        BadLength = 0x00000003,
        InformationNotAvailable = 0x00000004,
    };

    struct AsnDecodeStatus__Enum__Boxed {
        struct AsnDecodeStatus__Enum__Class* klass;
        MonitorData* monitor;
        AsnDecodeStatus__Enum value;
    };

    struct X509BasicConstraintsExtension__Fields {
        struct X509Extension_1__Fields _;
        bool _certificateAuthority;
        bool _hasPathLengthConstraint;
        int32_t _pathLengthConstraint;
        AsnDecodeStatus__Enum _status;
    };

    struct X509BasicConstraintsExtension {
        struct X509BasicConstraintsExtension__Class* klass;
        MonitorData* monitor;
        struct X509BasicConstraintsExtension__Fields fields;
    };

    struct X509Extension_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyFrom;
        VirtualInvokeData Format;
        VirtualInvokeData ToString_1;
    };

    struct X509Extension_1__StaticFields {
    };

    struct X509Extension_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Extension_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Extension_1__VTable vtable;
    };

    struct AsnDecodeStatus__Enum__VTable {
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

    struct AsnDecodeStatus__Enum__StaticFields {
    };

    struct AsnDecodeStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsnDecodeStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsnDecodeStatus__Enum__VTable vtable;
    };

    struct X509BasicConstraintsExtension__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyFrom;
        VirtualInvokeData Format;
        VirtualInvokeData ToString_1;
    };

    struct X509BasicConstraintsExtension__StaticFields {
    };

    struct X509BasicConstraintsExtension__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509BasicConstraintsExtension__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509BasicConstraintsExtension__VTable vtable;
    };

    struct X509Certificate2Impl__Fields {
        struct X509CertificateImpl__Fields _;
    };

    struct X509Certificate2Impl {
        struct X509Certificate2Impl__Class* klass;
        MonitorData* monitor;
        struct X509Certificate2Impl__Fields fields;
    };

    struct X509Certificate2ImplMono__Fields {
        struct X509Certificate2Impl__Fields _;
        bool _archived;
        struct X509ExtensionCollection_2* _extensions;
        struct PublicKey* _publicKey;
        struct X500DistinguishedName* issuer_name;
        struct X500DistinguishedName* subject_name;
        struct Oid* signature_algorithm;
        struct X509CertificateImplCollection* intermediateCerts;
        struct X509Certificate_2* _cert;
    };

    struct X509Certificate2ImplMono {
        struct X509Certificate2ImplMono__Class* klass;
        MonitorData* monitor;
        struct X509Certificate2ImplMono__Fields fields;
    };

    struct __declspec(align(8)) X509ExtensionCollection_2__Fields {
        struct ArrayList* _list;
    };

    struct X509ExtensionCollection_2 {
        struct X509ExtensionCollection_2__Class* klass;
        MonitorData* monitor;
        struct X509ExtensionCollection_2__Fields fields;
    };

    struct __declspec(align(8)) X509CertificateImplCollection__Fields {
        struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_* list;
    };

    struct X509CertificateImplCollection {
        struct X509CertificateImplCollection__Class* klass;
        MonitorData* monitor;
        struct X509CertificateImplCollection__Fields fields;
    };

    struct __declspec(align(8)) List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Fields {
        struct X509CertificateImpl__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_ {
        struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Fields fields;
    };

    struct X509CertificateImpl__Array {
        struct X509CertificateImpl__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct X509CertificateImpl* vector[32];
    };

    struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_ {
        struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class* klass;
        MonitorData* monitor;
    };

    enum class X509NameType__Enum : int32_t {
        SimpleName = 0x00000000,
        EmailName = 0x00000001,
        UpnName = 0x00000002,
        DnsName = 0x00000003,
        DnsFromAlternativeName = 0x00000004,
        UrlName = 0x00000005,
    };

    struct X509NameType__Enum__Boxed {
        struct X509NameType__Enum__Class* klass;
        MonitorData* monitor;
        X509NameType__Enum value;
    };

    struct X509ExtensionCollection_2__VTable {
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

    struct X509ExtensionCollection_2__StaticFields {
        struct Byte__Array* Empty;
    };

    struct X509ExtensionCollection_2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509ExtensionCollection_2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509ExtensionCollection_2__VTable vtable;
    };

    struct X509CertificateImpl__Array__VTable {
    };

    struct X509CertificateImpl__Array__StaticFields {
    };

    struct X509CertificateImpl__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509CertificateImpl__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509CertificateImpl__Array__VTable vtable;
    };

    struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields {
    };

    struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable vtable;
    };

    struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt_1;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData get_Count_2;
    };

    struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields {
        struct X509CertificateImpl__Array* _emptyArray;
    };

    struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl___VTable vtable;
    };

    struct X509CertificateImplCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Dispose_1;
    };

    struct X509CertificateImplCollection__StaticFields {
    };

    struct X509CertificateImplCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509CertificateImplCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509CertificateImplCollection__VTable vtable;
    };

    struct X509NameType__Enum__VTable {
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

    struct X509NameType__Enum__StaticFields {
    };

    struct X509NameType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509NameType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509NameType__Enum__VTable vtable;
    };

    struct X509Certificate2ImplMono__VTable {
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
        VirtualInvokeData get_Extensions;
        VirtualInvokeData get_IssuerName;
        VirtualInvokeData get_PrivateKey;
        VirtualInvokeData set_PrivateKey;
        VirtualInvokeData get_PublicKey;
        VirtualInvokeData get_SignatureAlgorithm;
        VirtualInvokeData get_SubjectName;
        VirtualInvokeData get_Version;
        VirtualInvokeData get_IntermediateCertificates;
        VirtualInvokeData get_FallbackImpl;
        VirtualInvokeData GetNameInfo;
        VirtualInvokeData Import;
        VirtualInvokeData Verify;
        VirtualInvokeData Reset;
    };

    struct X509Certificate2ImplMono__StaticFields {
        struct String* empty_error;
        struct Byte__Array* commonName;
        struct Byte__Array* email;
        struct Byte__Array* signedData;
    };

    struct X509Certificate2ImplMono__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Certificate2ImplMono__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Certificate2ImplMono__VTable vtable;
    };

    struct X509Certificate2Impl__VTable {
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
        VirtualInvokeData __unknown_12;
        VirtualInvokeData __unknown_13;
        VirtualInvokeData __unknown_14;
        VirtualInvokeData __unknown_15;
        VirtualInvokeData __unknown_16;
        VirtualInvokeData __unknown_17;
        VirtualInvokeData __unknown_18;
        VirtualInvokeData __unknown_19;
        VirtualInvokeData __unknown_20;
        VirtualInvokeData __unknown_21;
        VirtualInvokeData __unknown_22;
        VirtualInvokeData __unknown_23;
        VirtualInvokeData __unknown_24;
        VirtualInvokeData __unknown_25;
    };

    struct X509Certificate2Impl__StaticFields {
    };

    struct X509Certificate2Impl__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Certificate2Impl__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Certificate2Impl__VTable vtable;
    };

    enum class X509FindType__Enum : int32_t {
        FindByThumbprint = 0x00000000,
        FindBySubjectName = 0x00000001,
        FindBySubjectDistinguishedName = 0x00000002,
        FindByIssuerName = 0x00000003,
        FindByIssuerDistinguishedName = 0x00000004,
        FindBySerialNumber = 0x00000005,
        FindByTimeValid = 0x00000006,
        FindByTimeNotYetValid = 0x00000007,
        FindByTimeExpired = 0x00000008,
        FindByTemplateName = 0x00000009,
        FindByApplicationPolicy = 0x0000000a,
        FindByCertificatePolicy = 0x0000000b,
        FindByExtension = 0x0000000c,
        FindByKeyUsage = 0x0000000d,
        FindBySubjectKeyIdentifier = 0x0000000e,
    };

    struct X509FindType__Enum__Boxed {
        struct X509FindType__Enum__Class* klass;
        MonitorData* monitor;
        X509FindType__Enum value;
    };

    struct X509FindType__Enum__VTable {
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

    struct X509FindType__Enum__StaticFields {
    };

    struct X509FindType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509FindType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509FindType__Enum__VTable vtable;
    };

    struct __declspec(align(8)) X509Certificate2Enumerator__Fields {
        struct IEnumerator* enumerator;
    };

    struct X509Certificate2Enumerator {
        struct X509Certificate2Enumerator__Class* klass;
        MonitorData* monitor;
        struct X509Certificate2Enumerator__Fields fields;
    };

    struct X509Certificate2Enumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IEnumerator_MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct X509Certificate2Enumerator__StaticFields {
    };

    struct X509Certificate2Enumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Certificate2Enumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Certificate2Enumerator__VTable vtable;
    };

    struct X509Certificate_1__Array {
        struct X509Certificate_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct X509Certificate_1* vector[32];
    };

    struct X509Certificate_1__Array__VTable {
    };

    struct X509Certificate_1__Array__StaticFields {
    };

    struct X509Certificate_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Certificate_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Certificate_1__Array__VTable vtable;
    };

    struct __declspec(align(8)) X509CertificateCollection_X509CertificateEnumerator_1__Fields {
        struct IEnumerator* enumerator;
    };

    struct X509CertificateCollection_X509CertificateEnumerator_1 {
        struct X509CertificateCollection_X509CertificateEnumerator_1__Class* klass;
        MonitorData* monitor;
        struct X509CertificateCollection_X509CertificateEnumerator_1__Fields fields;
    };

    struct X509CertificateCollection_X509CertificateEnumerator_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IEnumerator_MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct X509CertificateCollection_X509CertificateEnumerator_1__StaticFields {
    };

    struct X509CertificateCollection_X509CertificateEnumerator_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509CertificateCollection_X509CertificateEnumerator_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509CertificateCollection_X509CertificateEnumerator_1__VTable vtable;
    };

    struct __declspec(align(8)) X509ChainElementEnumerator__Fields {
        struct IEnumerator* enumerator;
    };

    struct X509ChainElementEnumerator {
        struct X509ChainElementEnumerator__Class* klass;
        MonitorData* monitor;
        struct X509ChainElementEnumerator__Fields fields;
    };

    struct X509ChainElementEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData Reset;
    };

    struct X509ChainElementEnumerator__StaticFields {
    };

    struct X509ChainElementEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509ChainElementEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509ChainElementEnumerator__VTable vtable;
    };

    struct IEnumerable {
        struct IEnumerable__Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable__VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable__StaticFields {
    };

    struct IEnumerable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable__VTable vtable;
    };

    struct __declspec(align(8)) X509Crl__Fields {
        struct String* issuer;
        uint8_t version;
        struct DateTime thisUpdate;
        struct DateTime nextUpdate;
        struct ArrayList* entries;
        struct String* signatureOID;
        struct Byte__Array* signature;
        struct X509ExtensionCollection_1* extensions;
        struct Byte__Array* encoded;
        struct Byte__Array* hash_value;
    };

    struct X509Crl {
        struct X509Crl__Class* klass;
        MonitorData* monitor;
        struct X509Crl__Fields fields;
    };

    struct X509Crl__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct X509Crl__StaticFields {
    };

    struct X509Crl__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Crl__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Crl__VTable vtable;
    };

    struct __declspec(align(8)) X509Extension_2__Fields {
        struct String* extnOid;
        bool extnCritical;
        struct ASN1_1* extnValue;
    };

    struct X509Extension_2 {
        struct X509Extension_2__Class* klass;
        MonitorData* monitor;
        struct X509Extension_2__Fields fields;
    };

    struct X509Extension_2__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Decode;
        VirtualInvokeData Encode;
        VirtualInvokeData get_Name;
    };

    struct X509Extension_2__StaticFields {
    };

    struct X509Extension_2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Extension_2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Extension_2__VTable vtable;
    };

} // namespace app
