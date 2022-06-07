namespace app {
struct KeyUsages__Enum__VTable {
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

struct KeyUsages__Enum__StaticFields {
};

struct KeyUsages__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyUsages__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyUsages__Enum__VTable vtable;
};

struct NetscapeCertTypeExtension__Fields {
    struct X509Extension_2__Fields _;
    int32_t ctbits;
};

struct NetscapeCertTypeExtension {
    struct NetscapeCertTypeExtension__Class *klass;
    MonitorData *monitor;
    struct NetscapeCertTypeExtension__Fields fields;
};

struct NetscapeCertTypeExtension__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Decode;
    VirtualInvokeData Encode;
    VirtualInvokeData get_Name;
};

struct NetscapeCertTypeExtension__StaticFields {
};

struct NetscapeCertTypeExtension__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetscapeCertTypeExtension__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetscapeCertTypeExtension__VTable vtable;
};

enum class NetscapeCertTypeExtension_CertTypes__Enum : int32_t {
    SslClient = 0x00000080,
    SslServer = 0x00000040,
    Smime = 0x00000020,
    ObjectSigning = 0x00000010,
    SslCA = 0x00000004,
    SmimeCA = 0x00000002,
    ObjectSigningCA = 0x00000001,
};

struct NetscapeCertTypeExtension_CertTypes__Enum__Boxed {
    struct NetscapeCertTypeExtension_CertTypes__Enum__Class *klass;
    MonitorData *monitor;
    NetscapeCertTypeExtension_CertTypes__Enum value;
    
};

struct NetscapeCertTypeExtension_CertTypes__Enum__VTable {
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

struct NetscapeCertTypeExtension_CertTypes__Enum__StaticFields {
};

struct NetscapeCertTypeExtension_CertTypes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetscapeCertTypeExtension_CertTypes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetscapeCertTypeExtension_CertTypes__Enum__VTable vtable;
};

struct SubjectAltNameExtension__Fields {
    struct X509Extension_2__Fields _;
    struct GeneralNames *_names;
};

struct SubjectAltNameExtension {
    struct SubjectAltNameExtension__Class *klass;
    MonitorData *monitor;
    struct SubjectAltNameExtension__Fields fields;
};

struct SubjectAltNameExtension__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Decode;
    VirtualInvokeData Encode;
    VirtualInvokeData get_Name;
};

struct SubjectAltNameExtension__StaticFields {
};

struct SubjectAltNameExtension__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SubjectAltNameExtension__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SubjectAltNameExtension__VTable vtable;
};

struct SubjectKeyIdentifierExtension__Fields {
    struct X509Extension_2__Fields _;
    struct Byte__Array *ski;
};

struct SubjectKeyIdentifierExtension {
    struct SubjectKeyIdentifierExtension__Class *klass;
    MonitorData *monitor;
    struct SubjectKeyIdentifierExtension__Fields fields;
};

struct SubjectKeyIdentifierExtension__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Decode;
    VirtualInvokeData Encode;
    VirtualInvokeData get_Name;
};

struct SubjectKeyIdentifierExtension__StaticFields {
};

struct SubjectKeyIdentifierExtension__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SubjectKeyIdentifierExtension__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SubjectKeyIdentifierExtension__VTable vtable;
};

enum class AlertLevel__Enum : uint8_t {
    Warning = 0x01,
    Fatal = 0x02,
};

struct AlertLevel__Enum__Boxed {
    struct AlertLevel__Enum__Class *klass;
    MonitorData *monitor;
    AlertLevel__Enum value;
    
};

enum class AlertDescription__Enum_1 : uint8_t {
    CloseNotify = 0x00,
    UnexpectedMessage = 0x0a,
    BadRecordMAC = 0x14,
    DecryptionFailed = 0x15,
    RecordOverflow = 0x16,
    DecompressionFailiure = 0x1e,
    HandshakeFailiure = 0x28,
    NoCertificate = 0x29,
    BadCertificate = 0x2a,
    UnsupportedCertificate = 0x2b,
    CertificateRevoked = 0x2c,
    CertificateExpired = 0x2d,
    CertificateUnknown = 0x2e,
    IlegalParameter = 0x2f,
    UnknownCA = 0x30,
    AccessDenied = 0x31,
    DecodeError = 0x32,
    DecryptError = 0x33,
    ExportRestriction = 0x3c,
    ProtocolVersion = 0x46,
    InsuficientSecurity = 0x47,
    InternalError = 0x50,
    UserCancelled = 0x5a,
    NoRenegotiation = 0x64,
};

struct AlertDescription__Enum_1__Boxed {
    struct AlertDescription__Enum_1__Class *klass;
    MonitorData *monitor;
    AlertDescription__Enum_1 value;
    
};

struct __declspec(align(8)) Alert__Fields {
    AlertLevel__Enum level;
    
    AlertDescription__Enum_1 description;
    
};

struct Alert {
    struct Alert__Class *klass;
    MonitorData *monitor;
    struct Alert__Fields fields;
};

struct AlertLevel__Enum__VTable {
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

struct AlertLevel__Enum__StaticFields {
};

struct AlertLevel__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AlertLevel__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AlertLevel__Enum__VTable vtable;
};

struct AlertDescription__Enum_1__VTable {
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

struct AlertDescription__Enum_1__StaticFields {
};

struct AlertDescription__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AlertDescription__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AlertDescription__Enum_1__VTable vtable;
};

struct Alert__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Alert__StaticFields {
};

struct Alert__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Alert__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Alert__VTable vtable;
};

enum class CipherAlgorithmType__Enum : int32_t {
    Des = 0x00000000,
    None = 0x00000001,
    Rc2 = 0x00000002,
    Rc4 = 0x00000003,
    Rijndael = 0x00000004,
    SkipJack = 0x00000005,
    TripleDes = 0x00000006,
};

struct CipherAlgorithmType__Enum__Boxed {
    struct CipherAlgorithmType__Enum__Class *klass;
    MonitorData *monitor;
    CipherAlgorithmType__Enum value;
    
};

enum class HashAlgorithmType__Enum : int32_t {
    Md5 = 0x00000000,
    None = 0x00000001,
    Sha1 = 0x00000002,
};

struct HashAlgorithmType__Enum__Boxed {
    struct HashAlgorithmType__Enum__Class *klass;
    MonitorData *monitor;
    HashAlgorithmType__Enum value;
    
};

enum class ExchangeAlgorithmType__Enum : int32_t {
    DiffieHellman = 0x00000000,
    Fortezza = 0x00000001,
    None = 0x00000002,
    RsaKeyX = 0x00000003,
    RsaSign = 0x00000004,
};

struct ExchangeAlgorithmType__Enum__Boxed {
    struct ExchangeAlgorithmType__Enum__Class *klass;
    MonitorData *monitor;
    ExchangeAlgorithmType__Enum value;
    
};

struct __declspec(align(8)) CipherSuite__Fields {
    int16_t code;
    struct String *name;
    CipherAlgorithmType__Enum cipherAlgorithmType;
    
    HashAlgorithmType__Enum hashAlgorithmType;
    
    ExchangeAlgorithmType__Enum exchangeAlgorithmType;
    
    bool isExportable;
    CipherMode__Enum cipherMode;
    
    uint8_t keyMaterialSize;
    int32_t keyBlockSize;
    uint8_t expandedKeyMaterialSize;
    int16_t effectiveKeyBits;
    uint8_t ivSize;
    uint8_t blockSize;
    struct Context_1 *context;
    struct SymmetricAlgorithm *encryptionAlgorithm;
    struct ICryptoTransform *encryptionCipher;
    struct SymmetricAlgorithm *decryptionAlgorithm;
    struct ICryptoTransform *decryptionCipher;
    struct KeyedHashAlgorithm *clientHMAC;
    struct KeyedHashAlgorithm *serverHMAC;
};

struct CipherSuite {
    struct CipherSuite__Class *klass;
    MonitorData *monitor;
    struct CipherSuite__Fields fields;
};

enum class SecurityProtocolType__Enum_1 : int32_t {
    Default = -1073741824,
    Ssl2 = 0x0000000c,
    Ssl3 = 0x00000030,
    Tls = 0x000000c0,
    Tls11 = 0x00000300,
    Tls12 = 0x00000c00,
};

struct SecurityProtocolType__Enum_1__Boxed {
    struct SecurityProtocolType__Enum_1__Class *klass;
    MonitorData *monitor;
    SecurityProtocolType__Enum_1 value;
    
};

enum class SecurityCompressionType__Enum : int32_t {
    None = 0x00000000,
    Zlib = 0x00000001,
};

struct SecurityCompressionType__Enum__Boxed {
    struct SecurityCompressionType__Enum__Class *klass;
    MonitorData *monitor;
    SecurityCompressionType__Enum value;
    
};

enum class HandshakeType__Enum : uint8_t {
    HelloRequest = 0x00,
    ClientHello = 0x01,
    ServerHello = 0x02,
    Certificate = 0x0b,
    ServerKeyExchange = 0x0c,
    CertificateRequest = 0x0d,
    ServerHelloDone = 0x0e,
    CertificateVerify = 0x0f,
    ClientKeyExchange = 0x10,
    Finished = 0x14,
    None = 0xff,
};

struct HandshakeType__Enum__Boxed {
    struct HandshakeType__Enum__Class *klass;
    MonitorData *monitor;
    HandshakeType__Enum value;
    
};

enum class HandshakeState__Enum : int32_t {
    None = 0x00000000,
    Started = 0x00000001,
    Finished = 0x00000002,
};

struct HandshakeState__Enum__Boxed {
    struct HandshakeState__Enum__Class *klass;
    MonitorData *monitor;
    HandshakeState__Enum value;
    
};

struct __declspec(align(8)) Context_1__Fields {
    SecurityProtocolType__Enum_1 securityProtocol;
    
    struct Byte__Array *sessionId;
    SecurityCompressionType__Enum compressionMethod;
    
    struct TlsServerSettings *serverSettings;
    struct TlsClientSettings *clientSettings;
    struct SecurityParameters *current;
    struct SecurityParameters *negotiating;
    struct SecurityParameters *read;
    struct SecurityParameters *write;
    struct CipherSuiteCollection *supportedCiphers;
    HandshakeType__Enum lastHandshakeMsg;
    
    HandshakeState__Enum handshakeState;
    
    bool abbreviatedHandshake;
    bool receivedConnectionEnd;
    bool sentConnectionEnd;
    bool protocolNegotiated;
    uint64_t writeSequenceNumber;
    uint64_t readSequenceNumber;
    struct Byte__Array *clientRandom;
    struct Byte__Array *serverRandom;
    struct Byte__Array *randomCS;
    struct Byte__Array *randomSC;
    struct Byte__Array *masterSecret;
    struct Byte__Array *clientWriteKey;
    struct Byte__Array *serverWriteKey;
    struct Byte__Array *clientWriteIV;
    struct Byte__Array *serverWriteIV;
    struct TlsStream *handshakeMessages;
    struct RandomNumberGenerator *random;
    struct RecordProtocol *recordProtocol;
    bool _ChangeCipherSpecDone_k__BackingField;
};

struct Context_1 {
    struct Context_1__Class *klass;
    MonitorData *monitor;
    struct Context_1__Fields fields;
};

struct __declspec(align(8)) TlsServerSettings__Fields {
    struct X509CertificateCollection_2 *certificates;
    struct RSA *certificateRSA;
    struct RSAParameters rsaParameters;
    struct Byte__Array *signedParams;
    struct String__Array *distinguisedNames;
    bool serverKeyExchange;
    bool certificateRequest;
    struct ClientCertificateType__Enum__Array *certificateTypes;
};

struct TlsServerSettings {
    struct TlsServerSettings__Class *klass;
    MonitorData *monitor;
    struct TlsServerSettings__Fields fields;
};

enum class ClientCertificateType__Enum : int32_t {
    RSA = 0x00000001,
    DSS = 0x00000002,
    RSAFixed = 0x00000003,
    DSSFixed = 0x00000004,
    Unknown = 0x000000ff,
};

struct ClientCertificateType__Enum__Boxed {
    struct ClientCertificateType__Enum__Class *klass;
    MonitorData *monitor;
    ClientCertificateType__Enum value;
    
};

struct ClientCertificateType__Enum__Array {
    struct ClientCertificateType__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    ClientCertificateType__Enum vector[32];
};

struct __declspec(align(8)) TlsClientSettings__Fields {
    struct String *targetHost;
    struct X509CertificateCollection_1 *certificates;
    struct X509Certificate_1 *clientCertificate;
    struct RSAManaged_1 *certificateRSA;
};

struct TlsClientSettings {
    struct TlsClientSettings__Class *klass;
    MonitorData *monitor;
    struct TlsClientSettings__Fields fields;
};

struct RSAManaged_1__Fields {
    struct RSA__Fields _;
    bool isCRTpossible;
    bool keyBlinding;
    bool keypairGenerated;
    bool m_disposed;
    struct BigInteger_1 *d;
    struct BigInteger_1 *p;
    struct BigInteger_1 *q;
    struct BigInteger_1 *dp;
    struct BigInteger_1 *dq;
    struct BigInteger_1 *qInv;
    struct BigInteger_1 *n;
    struct BigInteger_1 *e;
    struct RSAManaged_KeyGeneratedEventHandler_1 *KeyGenerated;
};

struct RSAManaged_1 {
    struct RSAManaged_1__Class *klass;
    MonitorData *monitor;
    struct RSAManaged_1__Fields fields;
};

struct __declspec(align(8)) BigInteger_1__Fields {
    uint32_t length;
    struct UInt32__Array *data;
};

struct BigInteger_1 {
    struct BigInteger_1__Class *klass;
    MonitorData *monitor;
    struct BigInteger_1__Fields fields;
};

struct RSAManaged_KeyGeneratedEventHandler_1__Fields {
    struct MulticastDelegate__Fields _;
};

struct RSAManaged_KeyGeneratedEventHandler_1 {
    struct RSAManaged_KeyGeneratedEventHandler_1__Class *klass;
    MonitorData *monitor;
    struct RSAManaged_KeyGeneratedEventHandler_1__Fields fields;
};

struct __declspec(align(8)) SecurityParameters__Fields {
    struct CipherSuite *cipher;
    struct Byte__Array *clientWriteMAC;
    struct Byte__Array *serverWriteMAC;
};

struct SecurityParameters {
    struct SecurityParameters__Class *klass;
    MonitorData *monitor;
    struct SecurityParameters__Fields fields;
};

struct __declspec(align(8)) List_1_Mono_Security_Protocol_Tls_CipherSuite___Fields {
    struct CipherSuite__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Mono_Security_Protocol_Tls_CipherSuite_ {
    struct List_1_Mono_Security_Protocol_Tls_CipherSuite___Class *klass;
    MonitorData *monitor;
    struct List_1_Mono_Security_Protocol_Tls_CipherSuite___Fields fields;
};

struct CipherSuiteCollection__Fields {
    struct List_1_Mono_Security_Protocol_Tls_CipherSuite___Fields _;
    SecurityProtocolType__Enum_1 protocol;
    
};

struct CipherSuiteCollection {
    struct CipherSuiteCollection__Class *klass;
    MonitorData *monitor;
    struct CipherSuiteCollection__Fields fields;
};

struct CipherSuite__Array {
    struct CipherSuite__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CipherSuite *vector[32];
};

struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite_ {
    struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite___Class *klass;
    MonitorData *monitor;
};

struct TlsStream__Fields {
    struct Stream__Fields _;
    bool canRead;
    bool canWrite;
    struct MemoryStream *buffer;
    struct Byte__Array *temp;
};

struct TlsStream {
    struct TlsStream__Class *klass;
    MonitorData *monitor;
    struct TlsStream__Fields fields;
};

struct __declspec(align(8)) RecordProtocol__Fields {
    struct Stream *innerStream;
    struct Context_1 *context;
};

struct RecordProtocol {
    struct RecordProtocol__Class *klass;
    MonitorData *monitor;
    struct RecordProtocol__Fields fields;
};

struct ClientRecordProtocol__Fields {
    struct RecordProtocol__Fields _;
};

struct ClientRecordProtocol {
    struct ClientRecordProtocol__Class *klass;
    MonitorData *monitor;
    struct ClientRecordProtocol__Fields fields;
};

enum class ContentType__Enum : uint8_t {
    ChangeCipherSpec = 0x14,
    Alert = 0x15,
    Handshake = 0x16,
    ApplicationData = 0x17,
};

struct ContentType__Enum__Boxed {
    struct ContentType__Enum__Class *klass;
    MonitorData *monitor;
    ContentType__Enum value;
    
};

struct HandshakeMessage__Fields {
    struct TlsStream__Fields _;
    struct Context_1 *context;
    HandshakeType__Enum handshakeType;
    
    ContentType__Enum contentType;
    
    struct Byte__Array *cache;
};

struct HandshakeMessage {
    struct HandshakeMessage__Class *klass;
    MonitorData *monitor;
    struct HandshakeMessage__Fields fields;
};

struct TlsClientCertificate__Fields {
    struct HandshakeMessage__Fields _;
    struct X509CertificateCollection_2 *clientCertificates;
};

struct TlsClientCertificate {
    struct TlsClientCertificate__Class *klass;
    MonitorData *monitor;
    struct TlsClientCertificate__Fields fields;
};

struct SslCipherSuite__Fields {
    struct CipherSuite__Fields _;
    struct Byte__Array *pad1;
    struct Byte__Array *pad2;
    struct Byte__Array *header;
};

struct SslCipherSuite {
    struct SslCipherSuite__Class *klass;
    MonitorData *monitor;
    struct SslCipherSuite__Fields fields;
};

struct CipherAlgorithmType__Enum__VTable {
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

struct CipherAlgorithmType__Enum__StaticFields {
};

struct CipherAlgorithmType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CipherAlgorithmType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CipherAlgorithmType__Enum__VTable vtable;
};

struct HashAlgorithmType__Enum__VTable {
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

struct HashAlgorithmType__Enum__StaticFields {
};

struct HashAlgorithmType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashAlgorithmType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashAlgorithmType__Enum__VTable vtable;
};

struct ExchangeAlgorithmType__Enum__VTable {
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

struct ExchangeAlgorithmType__Enum__StaticFields {
};

struct ExchangeAlgorithmType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExchangeAlgorithmType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExchangeAlgorithmType__Enum__VTable vtable;
};

struct SecurityProtocolType__Enum_1__VTable {
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

struct SecurityProtocolType__Enum_1__StaticFields {
};

struct SecurityProtocolType__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityProtocolType__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityProtocolType__Enum_1__VTable vtable;
};

struct SecurityCompressionType__Enum__VTable {
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

struct SecurityCompressionType__Enum__StaticFields {
};

struct SecurityCompressionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityCompressionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityCompressionType__Enum__VTable vtable;
};

struct ClientCertificateType__Enum__VTable {
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

struct ClientCertificateType__Enum__StaticFields {
};

struct ClientCertificateType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClientCertificateType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClientCertificateType__Enum__VTable vtable;
};

struct ClientCertificateType__Enum__Array__VTable {
};

struct ClientCertificateType__Enum__Array__StaticFields {
};

struct ClientCertificateType__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClientCertificateType__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClientCertificateType__Enum__Array__VTable vtable;
};

}
