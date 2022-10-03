namespace app {
    struct UnityTlsContext__Fields {
        struct MobileTlsContext__Fields _;
        struct UnityTls_unitytls_tlsctx* tlsContext;
        struct UnityTls_unitytls_x509list* requestedClientCertChain;
        struct UnityTls_unitytls_key* requestedClientKey;
        struct X509Certificate_1* localClientCertificate;
        struct X509Certificate_1* remoteCertificate;
        struct MonoTlsConnectionInfo* connectioninfo;
        bool isAuthenticated;
        bool hasContext;
        bool closedGraceful;
        struct Byte__Array* writeBuffer;
        struct Byte__Array* readBuffer;
        struct GCHandle handle;
        struct Exception* lastException;
    };

    struct UnityTlsContext {
        struct UnityTlsContext__Class* klass;
        MonitorData* monitor;
        struct UnityTlsContext__Fields fields;
    };

    struct AuthenticatedStream__Fields {
        struct Stream__Fields _;
        struct Stream* _InnerStream;
        bool _LeaveStreamOpen;
    };

    struct AuthenticatedStream {
        struct AuthenticatedStream__Class* klass;
        MonitorData* monitor;
        struct AuthenticatedStream__Fields fields;
    };

    struct MobileAuthenticatedStream__Fields {
        struct AuthenticatedStream__Fields _;
        struct MobileTlsContext* xobileTlsContext;
        struct ExceptionDispatchInfo* lastException;
        struct AsyncProtocolRequest* asyncHandshakeRequest;
        struct AsyncProtocolRequest* asyncReadRequest;
        struct AsyncProtocolRequest* asyncWriteRequest;
        struct BufferOffsetSize2* readBuffer;
        struct BufferOffsetSize2* writeBuffer;
        struct Object* ioLock;
        int32_t closeRequested;
        bool shutdown;
        struct SslStream* _SslStream_k__BackingField;
        struct MonoTlsSettings* _Settings_k__BackingField;
        struct MonoTlsProvider* _Provider_k__BackingField;
        int32_t ID;
    };

    struct MobileAuthenticatedStream {
        struct MobileAuthenticatedStream__Class* klass;
        MonitorData* monitor;
        struct MobileAuthenticatedStream__Fields fields;
    };

    struct __declspec(align(8)) AsyncProtocolRequest__Fields {
        struct MobileAuthenticatedStream* _Parent_k__BackingField;
        bool _RunSynchronously_k__BackingField;
        int32_t _UserResult_k__BackingField;
        int32_t Started;
        int32_t RequestedSize;
        int32_t WriteRequested;
        struct Object* locker;
    };

    struct AsyncProtocolRequest {
        struct AsyncProtocolRequest__Class* klass;
        MonitorData* monitor;
        struct AsyncProtocolRequest__Fields fields;
    };

    struct AsyncHandshakeRequest__Fields {
        struct AsyncProtocolRequest__Fields _;
    };

    struct AsyncHandshakeRequest {
        struct AsyncHandshakeRequest__Class* klass;
        MonitorData* monitor;
        struct AsyncHandshakeRequest__Fields fields;
    };

    enum class AsyncOperationStatus__Enum : int32_t {
        Initialize = 0x00000000,
        Continue = 0x00000001,
        ReadDone = 0x00000002,
        Complete = 0x00000003,
    };

    struct AsyncOperationStatus__Enum__Boxed {
        struct AsyncOperationStatus__Enum__Class* klass;
        MonitorData* monitor;
        AsyncOperationStatus__Enum value;
    };

    struct __declspec(align(8)) BufferOffsetSize__Fields {
        struct Byte__Array* Buffer;
        int32_t Offset;
        int32_t Size;
        int32_t TotalBytes;
        bool Complete;
    };

    struct BufferOffsetSize {
        struct BufferOffsetSize__Class* klass;
        MonitorData* monitor;
        struct BufferOffsetSize__Fields fields;
    };

    struct BufferOffsetSize2__Fields {
        struct BufferOffsetSize__Fields _;
        int32_t InitialSize;
    };

    struct BufferOffsetSize2 {
        struct BufferOffsetSize2__Class* klass;
        MonitorData* monitor;
        struct BufferOffsetSize2__Fields fields;
    };

    struct SslStream__Fields {
        struct AuthenticatedStream__Fields _;
        struct MonoTlsProvider* provider;
        struct IMonoSslStream* impl;
    };

    struct SslStream {
        struct SslStream__Class* klass;
        MonitorData* monitor;
        struct SslStream__Fields fields;
    };

    struct MonoTlsProvider {
        struct MonoTlsProvider__Class* klass;
        MonitorData* monitor;
    };

    struct UnityTlsProvider {
        struct UnityTlsProvider__Class* klass;
        MonitorData* monitor;
    };

    struct IMonoSslStream {
        struct IMonoSslStream__Class* klass;
        MonitorData* monitor;
    };

    struct Nullable_1_DateTime_ {
        struct DateTime value;
        bool has_value;
    };

    struct Nullable_1_DateTime___Boxed {
        struct Nullable_1_DateTime___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_DateTime_ fields;
    };

    enum class TlsProtocols__Enum : int32_t {
        Zero = 0x00000000,
        Tls10Client = 0x00000080,
        Tls10Server = 0x00000040,
        Tls10 = 0x000000c0,
        Tls11Client = 0x00000200,
        Tls11Server = 0x00000100,
        Tls11 = 0x00000300,
        Tls12Client = 0x00000800,
        Tls12Server = 0x00000400,
        Tls12 = 0x00000c00,
        ClientMask = 0x00000a80,
        ServerMask = 0x00000540,
    };

    struct TlsProtocols__Enum__Boxed {
        struct TlsProtocols__Enum__Class* klass;
        MonitorData* monitor;
        TlsProtocols__Enum value;
    };

    struct Nullable_1_Mono_Security_Interface_TlsProtocols_ {
        TlsProtocols__Enum value;

        bool has_value;
    };

    struct Nullable_1_Mono_Security_Interface_TlsProtocols___Boxed {
        struct Nullable_1_Mono_Security_Interface_TlsProtocols___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_Mono_Security_Interface_TlsProtocols_ fields;
    };

    struct __declspec(align(8)) MonoTlsSettings__Fields {
        struct MonoRemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField;
        struct MonoLocalCertificateSelectionCallback* _ClientCertificateSelectionCallback_k__BackingField;
        struct Nullable_1_DateTime_ _CertificateValidationTime_k__BackingField;
        struct X509CertificateCollection_1* _TrustAnchors_k__BackingField;
        struct Object* _UserSettings_k__BackingField;
        struct String__Array* _CertificateSearchPaths_k__BackingField;
        bool _SendCloseNotify_k__BackingField;
        struct Nullable_1_Mono_Security_Interface_TlsProtocols_ _EnabledProtocols_k__BackingField;
        struct CipherSuiteCode__Enum__Array* _EnabledCiphers_k__BackingField;
        bool cloned;
        bool checkCertName;
        bool checkCertRevocationStatus;
        struct Nullable_1_Boolean_ useServicePointManagerCallback;
        bool skipSystemValidators;
        bool callbackNeedsChain;
        struct ICertificateValidator* certificateValidator;
    };

    struct MonoTlsSettings {
        struct MonoTlsSettings__Class* klass;
        MonitorData* monitor;
        struct MonoTlsSettings__Fields fields;
    };

    struct MonoRemoteCertificateValidationCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct MonoRemoteCertificateValidationCallback {
        struct MonoRemoteCertificateValidationCallback__Class* klass;
        MonitorData* monitor;
        struct MonoRemoteCertificateValidationCallback__Fields fields;
    };

    struct __declspec(align(8)) X509Chain__Fields {
        struct X509ChainImpl* impl;
    };

    struct X509Chain {
        struct X509Chain__Class* klass;
        MonitorData* monitor;
        struct X509Chain__Fields fields;
    };

    struct X509ChainImpl {
        struct X509ChainImpl__Class* klass;
        MonitorData* monitor;
    };

    enum class StoreLocation__Enum : int32_t {
        CurrentUser = 0x00000001,
        LocalMachine = 0x00000002,
    };

    struct StoreLocation__Enum__Boxed {
        struct StoreLocation__Enum__Class* klass;
        MonitorData* monitor;
        StoreLocation__Enum value;
    };

    struct __declspec(align(8)) X509ChainImplMono__Fields {
        StoreLocation__Enum location;

        struct X509ChainElementCollection* elements;
        struct X509ChainPolicy* policy;
        struct X509ChainStatus__Array* status;
        int32_t max_path_length;
        struct X500DistinguishedName* working_issuer_name;
        struct AsymmetricAlgorithm* working_public_key;
        struct X509ChainElement* bce_restriction;
        struct X509Certificate2Collection* roots;
        struct X509Certificate2Collection* cas;
        struct X509Store* root_store;
        struct X509Store* ca_store;
        struct X509Store* user_root_store;
        struct X509Store* user_ca_store;
        struct X509Certificate2Collection* collection;
    };

    struct X509ChainImplMono {
        struct X509ChainImplMono__Class* klass;
        MonitorData* monitor;
        struct X509ChainImplMono__Fields fields;
    };

    struct __declspec(align(8)) X509ChainElementCollection__Fields {
        struct ArrayList* _list;
    };

    struct X509ChainElementCollection {
        struct X509ChainElementCollection__Class* klass;
        MonitorData* monitor;
        struct X509ChainElementCollection__Fields fields;
    };

    enum class X509RevocationFlag__Enum : int32_t {
        EndCertificateOnly = 0x00000000,
        EntireChain = 0x00000001,
        ExcludeRoot = 0x00000002,
    };

    struct X509RevocationFlag__Enum__Boxed {
        struct X509RevocationFlag__Enum__Class* klass;
        MonitorData* monitor;
        X509RevocationFlag__Enum value;
    };

    enum class X509RevocationMode__Enum : int32_t {
        NoCheck = 0x00000000,
        Online = 0x00000001,
        Offline = 0x00000002,
    };

    struct X509RevocationMode__Enum__Boxed {
        struct X509RevocationMode__Enum__Class* klass;
        MonitorData* monitor;
        X509RevocationMode__Enum value;
    };

    enum class X509VerificationFlags__Enum : int32_t {
        NoFlag = 0x00000000,
        IgnoreNotTimeValid = 0x00000001,
        IgnoreCtlNotTimeValid = 0x00000002,
        IgnoreNotTimeNested = 0x00000004,
        IgnoreInvalidBasicConstraints = 0x00000008,
        AllowUnknownCertificateAuthority = 0x00000010,
        IgnoreWrongUsage = 0x00000020,
        IgnoreInvalidName = 0x00000040,
        IgnoreInvalidPolicy = 0x00000080,
        IgnoreEndRevocationUnknown = 0x00000100,
        IgnoreCtlSignerRevocationUnknown = 0x00000200,
        IgnoreCertificateAuthorityRevocationUnknown = 0x00000400,
        IgnoreRootRevocationUnknown = 0x00000800,
        AllFlags = 0x00000fff,
    };

    struct X509VerificationFlags__Enum__Boxed {
        struct X509VerificationFlags__Enum__Class* klass;
        MonitorData* monitor;
        X509VerificationFlags__Enum value;
    };

    struct __declspec(align(8)) X509ChainPolicy__Fields {
        struct OidCollection* apps;
        struct OidCollection* cert;
        struct X509CertificateCollection_1* store;
        struct X509Certificate2Collection* store2;
        X509RevocationFlag__Enum rflag;

        X509RevocationMode__Enum mode;

        struct TimeSpan timeout;
        X509VerificationFlags__Enum vflags;

        struct DateTime vtime;
    };

    struct X509ChainPolicy {
        struct X509ChainPolicy__Class* klass;
        MonitorData* monitor;
        struct X509ChainPolicy__Fields fields;
    };

    struct __declspec(align(8)) OidCollection__Fields {
        struct ArrayList* m_list;
    };

    struct OidCollection {
        struct OidCollection__Class* klass;
        MonitorData* monitor;
        struct OidCollection__Fields fields;
    };

    struct X509Certificate2Collection__Fields {
        struct X509CertificateCollection_1__Fields _;
    };

    struct X509Certificate2Collection {
        struct X509Certificate2Collection__Class* klass;
        MonitorData* monitor;
        struct X509Certificate2Collection__Fields fields;
    };

    enum class X509ChainStatusFlags__Enum : int32_t {
        NoError = 0x00000000,
        NotTimeValid = 0x00000001,
        NotTimeNested = 0x00000002,
        Revoked = 0x00000004,
        NotSignatureValid = 0x00000008,
        NotValidForUsage = 0x00000010,
        UntrustedRoot = 0x00000020,
        RevocationStatusUnknown = 0x00000040,
        Cyclic = 0x00000080,
        InvalidExtension = 0x00000100,
        InvalidPolicyConstraints = 0x00000200,
        InvalidBasicConstraints = 0x00000400,
        InvalidNameConstraints = 0x00000800,
        HasNotSupportedNameConstraint = 0x00001000,
        HasNotDefinedNameConstraint = 0x00002000,
        HasNotPermittedNameConstraint = 0x00004000,
        HasExcludedNameConstraint = 0x00008000,
        PartialChain = 0x00010000,
        CtlNotTimeValid = 0x00020000,
        CtlNotSignatureValid = 0x00040000,
        CtlNotValidForUsage = 0x00080000,
        OfflineRevocation = 0x01000000,
        NoIssuanceChainPolicy = 0x02000000,
        ExplicitDistrust = 0x04000000,
        HasNotSupportedCriticalExtension = 0x08000000,
        HasWeakSignature = 0x00100000,
    };

    struct X509ChainStatusFlags__Enum__Boxed {
        struct X509ChainStatusFlags__Enum__Class* klass;
        MonitorData* monitor;
        X509ChainStatusFlags__Enum value;
    };

    struct X509ChainStatus {
        X509ChainStatusFlags__Enum status;

        struct String* info;
    };

    struct X509ChainStatus__Boxed {
        struct X509ChainStatus__Class* klass;
        MonitorData* monitor;
        struct X509ChainStatus fields;
    };

    struct X509ChainStatus__Array {
        struct X509ChainStatus__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct X509ChainStatus vector[32];
    };

    struct __declspec(align(8)) AsnEncodedData__Fields {
        struct Oid* _oid;
        struct Byte__Array* _raw;
    };

    struct AsnEncodedData {
        struct AsnEncodedData__Class* klass;
        MonitorData* monitor;
        struct AsnEncodedData__Fields fields;
    };

    struct X500DistinguishedName__Fields {
        struct AsnEncodedData__Fields _;
        struct String* name;
        struct Byte__Array* canonEncoding;
    };

    struct X500DistinguishedName {
        struct X500DistinguishedName__Class* klass;
        MonitorData* monitor;
        struct X500DistinguishedName__Fields fields;
    };

    enum class OidGroup__Enum : int32_t {
        All = 0x00000000,
        HashAlgorithm = 0x00000001,
        EncryptionAlgorithm = 0x00000002,
        PublicKeyAlgorithm = 0x00000003,
        SignatureAlgorithm = 0x00000004,
        Attribute = 0x00000005,
        ExtensionOrAttribute = 0x00000006,
        EnhancedKeyUsage = 0x00000007,
        Policy = 0x00000008,
        Template = 0x00000009,
        KeyDerivationFunction = 0x0000000a,
    };

    struct OidGroup__Enum__Boxed {
        struct OidGroup__Enum__Class* klass;
        MonitorData* monitor;
        OidGroup__Enum value;
    };

    struct __declspec(align(8)) Oid__Fields {
        struct String* m_value;
        struct String* m_friendlyName;
        OidGroup__Enum m_group;
    };

    struct Oid {
        struct Oid__Class* klass;
        MonitorData* monitor;
        struct Oid__Fields fields;
    };

    struct __declspec(align(8)) X509ChainElement__Fields {
        struct X509Certificate2* certificate;
        struct X509ChainStatus__Array* status;
        struct String* info;
        X509ChainStatusFlags__Enum compressed_status_flags;
    };

    struct X509ChainElement {
        struct X509ChainElement__Class* klass;
        MonitorData* monitor;
        struct X509ChainElement__Fields fields;
    };

    struct X509Certificate2__Fields {
        struct X509Certificate_1__Fields _;
        struct String* friendlyName;
    };

    struct X509Certificate2 {
        struct X509Certificate2__Class* klass;
        MonitorData* monitor;
        struct X509Certificate2__Fields fields;
    };

    enum class OpenFlags__Enum : int32_t {
        ReadOnly = 0x00000000,
        ReadWrite = 0x00000001,
        MaxAllowed = 0x00000002,
        OpenExistingOnly = 0x00000004,
        IncludeArchived = 0x00000008,
    };

    struct OpenFlags__Enum__Boxed {
        struct OpenFlags__Enum__Class* klass;
        MonitorData* monitor;
        OpenFlags__Enum value;
    };

    struct __declspec(align(8)) X509Store__Fields {
        struct String* _name;
        StoreLocation__Enum _location;

        struct X509Certificate2Collection* list;
        OpenFlags__Enum _flags;

        struct X509Store_1* store;
    };

    struct X509Store {
        struct X509Store__Class* klass;
        MonitorData* monitor;
        struct X509Store__Fields fields;
    };

    struct __declspec(align(8)) X509Store_1__Fields {
        struct String* _storePath;
        struct X509CertificateCollection_2* _certificates;
        struct ArrayList* _crls;
        bool _crl;
        bool _newFormat;
        struct String* _name;
    };

    struct X509Store_1 {
        struct X509Store_1__Class* klass;
        MonitorData* monitor;
        struct X509Store_1__Fields fields;
    };

    struct X509CertificateCollection_2__Fields {
        struct CollectionBase__Fields _;
    };

    struct X509CertificateCollection_2 {
        struct X509CertificateCollection_2__Class* klass;
        MonitorData* monitor;
        struct X509CertificateCollection_2__Fields fields;
    };

    enum class MonoSslPolicyErrors__Enum : int32_t {
        None = 0x00000000,
        RemoteCertificateNotAvailable = 0x00000001,
        RemoteCertificateNameMismatch = 0x00000002,
        RemoteCertificateChainErrors = 0x00000004,
    };

    struct MonoSslPolicyErrors__Enum__Boxed {
        struct MonoSslPolicyErrors__Enum__Class* klass;
        MonitorData* monitor;
        MonoSslPolicyErrors__Enum value;
    };

    struct MonoLocalCertificateSelectionCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct MonoLocalCertificateSelectionCallback {
        struct MonoLocalCertificateSelectionCallback__Class* klass;
        MonitorData* monitor;
        struct MonoLocalCertificateSelectionCallback__Fields fields;
    };

    enum class CipherSuiteCode__Enum : uint16_t {
        TLS_NULL_WITH_NULL_NULL = 0x0000,
        TLS_RSA_WITH_NULL_MD5 = 0x0001,
        TLS_RSA_WITH_NULL_SHA = 0x0002,
        TLS_RSA_EXPORT_WITH_RC4_40_MD5 = 0x0003,
        TLS_RSA_WITH_RC4_128_MD5 = 0x0004,
        TLS_RSA_WITH_RC4_128_SHA = 0x0005,
        TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 = 0x0006,
        TLS_RSA_WITH_IDEA_CBC_SHA = 0x0007,
        TLS_RSA_EXPORT_WITH_DES40_CBC_SHA = 0x0008,
        TLS_RSA_WITH_DES_CBC_SHA = 0x0009,
        TLS_RSA_WITH_3DES_EDE_CBC_SHA = 0x000a,
        TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA = 0x000b,
        TLS_DH_DSS_WITH_DES_CBC_SHA = 0x000c,
        TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA = 0x000d,
        TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA = 0x000e,
        TLS_DH_RSA_WITH_DES_CBC_SHA = 0x000f,
        TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA = 0x0010,
        TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA = 0x0011,
        TLS_DHE_DSS_WITH_DES_CBC_SHA = 0x0012,
        TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA = 0x0013,
        TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA = 0x0014,
        TLS_DHE_RSA_WITH_DES_CBC_SHA = 0x0015,
        TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = 0x0016,
        TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 = 0x0017,
        TLS_DH_anon_WITH_RC4_128_MD5 = 0x0018,
        TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA = 0x0019,
        TLS_DH_anon_WITH_DES_CBC_SHA = 0x001a,
        TLS_DH_anon_WITH_3DES_EDE_CBC_SHA = 0x001b,
        TLS_RSA_WITH_AES_128_CBC_SHA = 0x002f,
        TLS_DH_DSS_WITH_AES_128_CBC_SHA = 0x0030,
        TLS_DH_RSA_WITH_AES_128_CBC_SHA = 0x0031,
        TLS_DHE_DSS_WITH_AES_128_CBC_SHA = 0x0032,
        TLS_DHE_RSA_WITH_AES_128_CBC_SHA = 0x0033,
        TLS_DH_anon_WITH_AES_128_CBC_SHA = 0x0034,
        TLS_RSA_WITH_AES_256_CBC_SHA = 0x0035,
        TLS_DH_DSS_WITH_AES_256_CBC_SHA = 0x0036,
        TLS_DH_RSA_WITH_AES_256_CBC_SHA = 0x0037,
        TLS_DHE_DSS_WITH_AES_256_CBC_SHA = 0x0038,
        TLS_DHE_RSA_WITH_AES_256_CBC_SHA = 0x0039,
        TLS_DH_anon_WITH_AES_256_CBC_SHA = 0x003a,
        TLS_RSA_WITH_CAMELLIA_128_CBC_SHA = 0x0041,
        TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA = 0x0042,
        TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA = 0x0043,
        TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA = 0x0044,
        TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA = 0x0045,
        TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA = 0x0046,
        TLS_RSA_WITH_CAMELLIA_256_CBC_SHA = 0x0084,
        TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA = 0x0085,
        TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA = 0x0086,
        TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA = 0x0087,
        TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA = 0x0088,
        TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA = 0x0089,
        TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0x00ba,
        TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bb,
        TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bc,
        TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bd,
        TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0x00be,
        TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 = 0x00bf,
        TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c0,
        TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c1,
        TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c2,
        TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c3,
        TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c4,
        TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 = 0x00c5,
        TLS_RSA_WITH_SEED_CBC_SHA = 0x0096,
        TLS_DH_DSS_WITH_SEED_CBC_SHA = 0x0097,
        TLS_DH_RSA_WITH_SEED_CBC_SHA = 0x0098,
        TLS_DHE_DSS_WITH_SEED_CBC_SHA = 0x0099,
        TLS_DHE_RSA_WITH_SEED_CBC_SHA = 0x009a,
        TLS_DH_anon_WITH_SEED_CBC_SHA = 0x009b,
        TLS_PSK_WITH_RC4_128_SHA = 0x008a,
        TLS_PSK_WITH_3DES_EDE_CBC_SHA = 0x008b,
        TLS_PSK_WITH_AES_128_CBC_SHA = 0x008c,
        TLS_PSK_WITH_AES_256_CBC_SHA = 0x008d,
        TLS_DHE_PSK_WITH_RC4_128_SHA = 0x008e,
        TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA = 0x008f,
        TLS_DHE_PSK_WITH_AES_128_CBC_SHA = 0x0090,
        TLS_DHE_PSK_WITH_AES_256_CBC_SHA = 0x0091,
        TLS_RSA_PSK_WITH_RC4_128_SHA = 0x0092,
        TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA = 0x0093,
        TLS_RSA_PSK_WITH_AES_128_CBC_SHA = 0x0094,
        TLS_RSA_PSK_WITH_AES_256_CBC_SHA = 0x0095,
        TLS_ECDH_ECDSA_WITH_NULL_SHA = 0xc001,
        TLS_ECDH_ECDSA_WITH_RC4_128_SHA = 0xc002,
        TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA = 0xc003,
        TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA = 0xc004,
        TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA = 0xc005,
        TLS_ECDHE_ECDSA_WITH_NULL_SHA = 0xc006,
        TLS_ECDHE_ECDSA_WITH_RC4_128_SHA = 0xc007,
        TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA = 0xc008,
        TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = 0xc009,
        TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = 0xc00a,
        TLS_ECDH_RSA_WITH_NULL_SHA = 0xc00b,
        TLS_ECDH_RSA_WITH_RC4_128_SHA = 0xc00c,
        TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA = 0xc00d,
        TLS_ECDH_RSA_WITH_AES_128_CBC_SHA = 0xc00e,
        TLS_ECDH_RSA_WITH_AES_256_CBC_SHA = 0xc00f,
        TLS_ECDHE_RSA_WITH_NULL_SHA = 0xc010,
        TLS_ECDHE_RSA_WITH_RC4_128_SHA = 0xc011,
        TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA = 0xc012,
        TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = 0xc013,
        TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = 0xc014,
        TLS_ECDH_anon_WITH_NULL_SHA = 0xc015,
        TLS_ECDH_anon_WITH_RC4_128_SHA = 0xc016,
        TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA = 0xc017,
        TLS_ECDH_anon_WITH_AES_128_CBC_SHA = 0xc018,
        TLS_ECDH_anon_WITH_AES_256_CBC_SHA = 0xc019,
        TLS_PSK_WITH_NULL_SHA = 0x002c,
        TLS_DHE_PSK_WITH_NULL_SHA = 0x002d,
        TLS_RSA_PSK_WITH_NULL_SHA = 0x002e,
        TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA = 0xc01a,
        TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA = 0xc01b,
        TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA = 0xc01c,
        TLS_SRP_SHA_WITH_AES_128_CBC_SHA = 0xc01d,
        TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA = 0xc01e,
        TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA = 0xc01f,
        TLS_SRP_SHA_WITH_AES_256_CBC_SHA = 0xc020,
        TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA = 0xc021,
        TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA = 0xc022,
        TLS_RSA_WITH_NULL_SHA256 = 0x003b,
        TLS_RSA_WITH_AES_128_CBC_SHA256 = 0x003c,
        TLS_RSA_WITH_AES_256_CBC_SHA256 = 0x003d,
        TLS_DH_DSS_WITH_AES_128_CBC_SHA256 = 0x003e,
        TLS_DH_RSA_WITH_AES_128_CBC_SHA256 = 0x003f,
        TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 = 0x0040,
        TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 = 0x0067,
        TLS_DH_DSS_WITH_AES_256_CBC_SHA256 = 0x0068,
        TLS_DH_RSA_WITH_AES_256_CBC_SHA256 = 0x0069,
        TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 = 0x006a,
        TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 = 0x006b,
        TLS_DH_anon_WITH_AES_128_CBC_SHA256 = 0x006c,
        TLS_DH_anon_WITH_AES_256_CBC_SHA256 = 0x006d,
        TLS_RSA_WITH_AES_128_GCM_SHA256 = 0x009c,
        TLS_RSA_WITH_AES_256_GCM_SHA384 = 0x009d,
        TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 = 0x009e,
        TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 = 0x009f,
        TLS_DH_RSA_WITH_AES_128_GCM_SHA256 = 0x00a0,
        TLS_DH_RSA_WITH_AES_256_GCM_SHA384 = 0x00a1,
        TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 = 0x00a2,
        TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 = 0x00a3,
        TLS_DH_DSS_WITH_AES_128_GCM_SHA256 = 0x00a4,
        TLS_DH_DSS_WITH_AES_256_GCM_SHA384 = 0x00a5,
        TLS_DH_anon_WITH_AES_128_GCM_SHA256 = 0x00a6,
        TLS_DH_anon_WITH_AES_256_GCM_SHA384 = 0x00a7,
        TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = 0xc023,
        TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 = 0xc024,
        TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 = 0xc025,
        TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 = 0xc026,
        TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = 0xc027,
        TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 = 0xc028,
        TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 = 0xc029,
        TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 = 0xc02a,
        TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 0xc02b,
        TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = 0xc02c,
        TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 = 0xc02d,
        TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 = 0xc02e,
        TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 0xc02f,
        TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = 0xc030,
        TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 = 0xc031,
        TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 = 0xc032,
        TLS_PSK_WITH_AES_128_GCM_SHA256 = 0x00a8,
        TLS_PSK_WITH_AES_256_GCM_SHA384 = 0x00a9,
        TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 = 0x00aa,
        TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 = 0x00ab,
        TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 = 0x00ac,
        TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 = 0x00ad,
        TLS_PSK_WITH_AES_128_CBC_SHA256 = 0x00ae,
        TLS_PSK_WITH_AES_256_CBC_SHA384 = 0x00af,
        TLS_PSK_WITH_NULL_SHA256 = 0x00b0,
        TLS_PSK_WITH_NULL_SHA384 = 0x00b1,
        TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 = 0x00b2,
        TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 = 0x00b3,
        TLS_DHE_PSK_WITH_NULL_SHA256 = 0x00b4,
        TLS_DHE_PSK_WITH_NULL_SHA384 = 0x00b5,
        TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 = 0x00b6,
        TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 = 0x00b7,
        TLS_RSA_PSK_WITH_NULL_SHA256 = 0x00b8,
        TLS_RSA_PSK_WITH_NULL_SHA384 = 0x00b9,
        TLS_ECDHE_PSK_WITH_RC4_128_SHA = 0xc033,
        TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA = 0xc034,
        TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA = 0xc035,
        TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA = 0xc036,
        TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 = 0xc037,
        TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 = 0xc038,
        TLS_ECDHE_PSK_WITH_NULL_SHA = 0xc039,
        TLS_ECDHE_PSK_WITH_NULL_SHA256 = 0xc03a,
        TLS_ECDHE_PSK_WITH_NULL_SHA384 = 0xc03b,
        TLS_EMPTY_RENEGOTIATION_INFO_SCSV = 0x00ff,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc072,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc073,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc074,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc075,
        TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc076,
        TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc077,
        TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 0xc078,
        TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 0xc079,
        TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc07a,
        TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc07b,
        TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc07c,
        TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc07d,
        TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc07e,
        TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc07f,
        TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 0xc080,
        TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 0xc081,
        TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 0xc082,
        TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 0xc083,
        TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 = 0xc084,
        TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 = 0xc085,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc086,
        TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc087,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc088,
        TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc089,
        TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc08a,
        TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc08b,
        TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 0xc08c,
        TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 0xc08d,
        TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 0xc08e,
        TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 0xc08f,
        TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 0xc090,
        TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 0xc091,
        TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 0xc092,
        TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 0xc093,
        TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc094,
        TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc095,
        TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc096,
        TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc097,
        TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc098,
        TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc099,
        TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 0xc09a,
        TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 0xc09b,
        TLS_RSA_WITH_AES_128_CCM = 0xc09c,
        TLS_RSA_WITH_AES_256_CCM = 0xc09d,
        TLS_DHE_RSA_WITH_AES_128_CCM = 0xc09e,
        TLS_DHE_RSA_WITH_AES_256_CCM = 0xc09f,
        TLS_RSA_WITH_AES_128_CCM_8 = 0xc0a0,
        TLS_RSA_WITH_AES_256_CCM_8 = 0xc0a1,
        TLS_DHE_RSA_WITH_AES_128_CCM_8 = 0xc0a2,
        TLS_DHE_RSA_WITH_AES_256_CCM_8 = 0xc0a3,
        TLS_PSK_WITH_AES_128_CCM = 0xc0a4,
        TLS_PSK_WITH_AES_256_CCM = 0xc0a5,
        TLS_DHE_PSK_WITH_AES_128_CCM = 0xc0a6,
        TLS_DHE_PSK_WITH_AES_256_CCM = 0xc0a7,
        TLS_PSK_WITH_AES_128_CCM_8 = 0xc0a8,
        TLS_PSK_WITH_AES_256_CCM_8 = 0xc0a9,
        TLS_PSK_DHE_WITH_AES_128_CCM_8 = 0xc0aa,
        TLS_PSK_DHE_WITH_AES_256_CCM_8 = 0xc0ab,
        TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 0xcc13,
        TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = 0xcc14,
        TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 0xcc15,
        TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 = 0xe410,
        TLS_RSA_WITH_SALSA20_SHA1 = 0xe411,
        TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 0xe412,
        TLS_ECDHE_RSA_WITH_SALSA20_SHA1 = 0xe413,
        TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 = 0xe414,
        TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 = 0xe415,
        TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 = 0xe416,
        TLS_PSK_WITH_SALSA20_SHA1 = 0xe417,
        TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 0xe418,
        TLS_ECDHE_PSK_WITH_SALSA20_SHA1 = 0xe419,
        TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 = 0xe41a,
        TLS_RSA_PSK_WITH_SALSA20_SHA1 = 0xe41b,
        TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 0xe41c,
        TLS_DHE_PSK_WITH_SALSA20_SHA1 = 0xe41d,
        TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 0xe41e,
        TLS_DHE_RSA_WITH_SALSA20_SHA1 = 0xe41f,
        TLS_FALLBACK_SCSV = 0x5600,
    };

    struct CipherSuiteCode__Enum__Boxed {
        struct CipherSuiteCode__Enum__Class* klass;
        MonitorData* monitor;
        CipherSuiteCode__Enum value;
    };

    struct CipherSuiteCode__Enum__Array {
        struct CipherSuiteCode__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        CipherSuiteCode__Enum vector[32];
    };

    struct ICertificateValidator {
        struct ICertificateValidator__Class* klass;
        MonitorData* monitor;
    };

    struct ICertificateValidator2 {
        struct ICertificateValidator2__Class* klass;
        MonitorData* monitor;
    };

    struct UnityTlsStream__Fields {
        struct MobileAuthenticatedStream__Fields _;
    };

    struct UnityTlsStream {
        struct UnityTlsStream__Class* klass;
        MonitorData* monitor;
        struct UnityTlsStream__Fields fields;
    };

    struct ValueTuple_2_Int32_Boolean_ {
        int32_t Item1;
        bool Item2;
    };

    struct ValueTuple_2_Int32_Boolean___Boxed {
        struct ValueTuple_2_Int32_Boolean___Class* klass;
        MonitorData* monitor;
        struct ValueTuple_2_Int32_Boolean_ fields;
    };

    struct __declspec(align(8)) MonoTlsConnectionInfo__Fields {
        CipherSuiteCode__Enum _CipherSuiteCode_k__BackingField;

        TlsProtocols__Enum _ProtocolVersion_k__BackingField;

        struct String* _PeerDomainName_k__BackingField;
    };

    struct MonoTlsConnectionInfo {
        struct MonoTlsConnectionInfo__Class* klass;
        MonitorData* monitor;
        struct MonoTlsConnectionInfo__Fields fields;
    };

    struct AuthenticatedStream__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData InitializeLifetimeService;
        VirtualInvokeData Dispose;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData get_CanTimeout;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData get_ReadTimeout;
        VirtualInvokeData set_ReadTimeout;
        VirtualInvokeData get_WriteTimeout;
        VirtualInvokeData set_WriteTimeout;
        VirtualInvokeData Close;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData __unknown_6;
        VirtualInvokeData FlushAsync;
        VirtualInvokeData BeginRead;
        VirtualInvokeData EndRead;
        VirtualInvokeData ReadAsync;
        VirtualInvokeData BeginWrite;
        VirtualInvokeData EndWrite;
        VirtualInvokeData WriteAsync;
        VirtualInvokeData __unknown_7;
        VirtualInvokeData __unknown_8;
        VirtualInvokeData __unknown_9;
        VirtualInvokeData ReadByte;
        VirtualInvokeData __unknown_10;
        VirtualInvokeData WriteByte;
        VirtualInvokeData __unknown_11;
    };

    struct AuthenticatedStream__StaticFields {
    };

    struct AuthenticatedStream__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AuthenticatedStream__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AuthenticatedStream__VTable vtable;
    };

    struct AsyncOperationStatus__Enum__VTable {
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

} // namespace app
