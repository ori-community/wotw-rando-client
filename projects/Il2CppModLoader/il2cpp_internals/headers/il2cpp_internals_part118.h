namespace app {
struct HandshakeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HandshakeType__Enum value;
};
enum HandshakeState__Enum : int32_t {
  HandshakeState__Enum_None = 0,
  HandshakeState__Enum_Started = 1,
  HandshakeState__Enum_Finished = 2,
};
struct HandshakeState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HandshakeState__Enum value;
};
struct __declspec(align(8)) Context_1__Fields {
  enum SecurityProtocolType__Enum_1 securityProtocol;
  struct Byte__Array * sessionId;
  enum SecurityCompressionType__Enum compressionMethod;
  struct TlsServerSettings * serverSettings;
  struct TlsClientSettings * clientSettings;
  struct SecurityParameters * current;
  struct SecurityParameters * negotiating;
  struct SecurityParameters * read;
  struct SecurityParameters * write;
  struct CipherSuiteCollection * supportedCiphers;
  enum HandshakeType__Enum lastHandshakeMsg;
  enum HandshakeState__Enum handshakeState;
  bool abbreviatedHandshake;
  bool receivedConnectionEnd;
  bool sentConnectionEnd;
  bool protocolNegotiated;
  uint64_t writeSequenceNumber;
  uint64_t readSequenceNumber;
  struct Byte__Array * clientRandom;
  struct Byte__Array * serverRandom;
  struct Byte__Array * randomCS;
  struct Byte__Array * randomSC;
  struct Byte__Array * masterSecret;
  struct Byte__Array * clientWriteKey;
  struct Byte__Array * serverWriteKey;
  struct Byte__Array * clientWriteIV;
  struct Byte__Array * serverWriteIV;
  struct TlsStream * handshakeMessages;
  struct RandomNumberGenerator * random;
  struct RecordProtocol * recordProtocol;
  bool _ChangeCipherSpecDone_k__BackingField;
};
struct Context_1 {
  struct Context_1__Class *klass;
  struct MonitorData *monitor;
  struct Context_1__Fields fields;
};
struct __declspec(align(8)) TlsServerSettings__Fields {
  struct X509CertificateCollection_2 * certificates;
  struct RSA * certificateRSA;
  struct RSAParameters rsaParameters;
  struct Byte__Array * signedParams;
  struct String__Array * distinguisedNames;
  bool serverKeyExchange;
  bool certificateRequest;
  struct ClientCertificateType__Enum__Array * certificateTypes;
};
struct TlsServerSettings {
  struct TlsServerSettings__Class *klass;
  struct MonitorData *monitor;
  struct TlsServerSettings__Fields fields;
};
enum ClientCertificateType__Enum : int32_t {
  ClientCertificateType__Enum_RSA = 1,
  ClientCertificateType__Enum_DSS = 2,
  ClientCertificateType__Enum_RSAFixed = 3,
  ClientCertificateType__Enum_DSSFixed = 4,
  ClientCertificateType__Enum_Unknown = 255,
};
struct ClientCertificateType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ClientCertificateType__Enum value;
};
struct ClientCertificateType__Enum__Array {
  struct ClientCertificateType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum ClientCertificateType__Enum vector[32];
};
struct __declspec(align(8)) TlsClientSettings__Fields {
  struct String * targetHost;
  struct X509CertificateCollection_1 * certificates;
  struct X509Certificate_1 * clientCertificate;
  struct RSAManaged_1 * certificateRSA;
};
struct TlsClientSettings {
  struct TlsClientSettings__Class *klass;
  struct MonitorData *monitor;
  struct TlsClientSettings__Fields fields;
};
struct RSAManaged_1__Fields {
  struct RSA__Fields _;
  bool isCRTpossible;
  bool keyBlinding;
  bool keypairGenerated;
  bool m_disposed;
  struct BigInteger_1 * d;
  struct BigInteger_1 * p;
  struct BigInteger_1 * q;
  struct BigInteger_1 * dp;
  struct BigInteger_1 * dq;
  struct BigInteger_1 * qInv;
  struct BigInteger_1 * n;
  struct BigInteger_1 * e;
  struct RSAManaged_KeyGeneratedEventHandler_1 * KeyGenerated;
};
struct RSAManaged_1 {
  struct RSAManaged_1__Class *klass;
  struct MonitorData *monitor;
  struct RSAManaged_1__Fields fields;
};
struct __declspec(align(8)) BigInteger_1__Fields {
  uint32_t length;
  struct UInt32__Array * data;
};
struct BigInteger_1 {
  struct BigInteger_1__Class *klass;
  struct MonitorData *monitor;
  struct BigInteger_1__Fields fields;
};
struct RSAManaged_KeyGeneratedEventHandler_1__Fields {
  struct MulticastDelegate__Fields _;
};
struct RSAManaged_KeyGeneratedEventHandler_1 {
  struct RSAManaged_KeyGeneratedEventHandler_1__Class *klass;
  struct MonitorData *monitor;
  struct RSAManaged_KeyGeneratedEventHandler_1__Fields fields;
};
struct __declspec(align(8)) SecurityParameters__Fields {
  struct CipherSuite * cipher;
  struct Byte__Array * clientWriteMAC;
  struct Byte__Array * serverWriteMAC;
};
struct SecurityParameters {
  struct SecurityParameters__Class *klass;
  struct MonitorData *monitor;
  struct SecurityParameters__Fields fields;
};
struct __declspec(align(8)) List_1_Mono_Security_Protocol_Tls_CipherSuite___Fields {
  struct CipherSuite__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Mono_Security_Protocol_Tls_CipherSuite_ {
  struct List_1_Mono_Security_Protocol_Tls_CipherSuite___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Mono_Security_Protocol_Tls_CipherSuite___Fields fields;
};
struct CipherSuiteCollection__Fields {
  struct List_1_Mono_Security_Protocol_Tls_CipherSuite___Fields _;
  enum SecurityProtocolType__Enum_1 protocol;
};
struct CipherSuiteCollection {
  struct CipherSuiteCollection__Class *klass;
  struct MonitorData *monitor;
  struct CipherSuiteCollection__Fields fields;
};
struct CipherSuite__Array {
  struct CipherSuite__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CipherSuite * vector[32];
};
struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite_ {
  struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite___Class *klass;
  struct MonitorData *monitor;
};
struct TlsStream__Fields {
  struct Stream__Fields _;
  bool canRead;
  bool canWrite;
  struct MemoryStream * buffer;
  struct Byte__Array * temp;
};
struct TlsStream {
  struct TlsStream__Class *klass;
  struct MonitorData *monitor;
  struct TlsStream__Fields fields;
};
struct __declspec(align(8)) RecordProtocol__Fields {
  struct Stream * innerStream;
  struct Context_1 * context;
};
struct RecordProtocol {
  struct RecordProtocol__Class *klass;
  struct MonitorData *monitor;
  struct RecordProtocol__Fields fields;
};
struct ClientRecordProtocol__Fields {
  struct RecordProtocol__Fields _;
};
struct ClientRecordProtocol {
  struct ClientRecordProtocol__Class *klass;
  struct MonitorData *monitor;
  struct ClientRecordProtocol__Fields fields;
};
enum ContentType__Enum : uint8_t {
  ContentType__Enum_ChangeCipherSpec = 20,
  ContentType__Enum_Alert = 21,
  ContentType__Enum_Handshake = 22,
  ContentType__Enum_ApplicationData = 23,
};
struct ContentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ContentType__Enum value;
};
struct HandshakeMessage__Fields {
  struct TlsStream__Fields _;
  struct Context_1 * context;
  enum HandshakeType__Enum handshakeType;
  enum ContentType__Enum contentType;
  struct Byte__Array * cache;
};
struct HandshakeMessage {
  struct HandshakeMessage__Class *klass;
  struct MonitorData *monitor;
  struct HandshakeMessage__Fields fields;
};
struct TlsClientCertificate__Fields {
  struct HandshakeMessage__Fields _;
  struct X509CertificateCollection_2 * clientCertificates;
};
struct TlsClientCertificate {
  struct TlsClientCertificate__Class *klass;
  struct MonitorData *monitor;
  struct TlsClientCertificate__Fields fields;
};
struct SslCipherSuite__Fields {
  struct CipherSuite__Fields _;
  struct Byte__Array * pad1;
  struct Byte__Array * pad2;
  struct Byte__Array * header;
};
struct SslCipherSuite {
  struct SslCipherSuite__Class *klass;
  struct MonitorData *monitor;
  struct SslCipherSuite__Fields fields;
};
struct TlsServerSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TlsServerSettings__StaticFields {
};
struct TlsServerSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsServerSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsServerSettings__VTable vtable;
};
struct BigInteger_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BigInteger_1__StaticFields {
  struct UInt32__Array * smallPrimes;
  struct RandomNumberGenerator * rng;
};
struct BigInteger_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BigInteger_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BigInteger_1__VTable vtable;
};
struct RSAManaged_KeyGeneratedEventHandler_1__VTable {
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
struct RSAManaged_KeyGeneratedEventHandler_1__StaticFields {
};
struct RSAManaged_KeyGeneratedEventHandler_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAManaged_KeyGeneratedEventHandler_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAManaged_KeyGeneratedEventHandler_1__VTable vtable;
};
struct RSAManaged_1__VTable {
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
};
struct RSAManaged_1__StaticFields {
};
struct RSAManaged_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSAManaged_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSAManaged_1__VTable vtable;
};
struct TlsClientSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TlsClientSettings__StaticFields {
};
struct TlsClientSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsClientSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsClientSettings__VTable vtable;
};
struct SecurityParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SecurityParameters__StaticFields {
};
struct SecurityParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityParameters__VTable vtable;
};
struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite___StaticFields {
};
struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite___VTable vtable;
};
struct List_1_Mono_Security_Protocol_Tls_CipherSuite___VTable {
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
struct List_1_Mono_Security_Protocol_Tls_CipherSuite___StaticFields {
  struct CipherSuite__Array * _emptyArray;
};
struct List_1_Mono_Security_Protocol_Tls_CipherSuite___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Mono_Security_Protocol_Tls_CipherSuite___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Mono_Security_Protocol_Tls_CipherSuite___VTable vtable;
};
struct CipherSuiteCollection__VTable {
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
struct CipherSuiteCollection__StaticFields {
};
struct CipherSuiteCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CipherSuiteCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CipherSuiteCollection__VTable vtable;
};
struct TlsStream__VTable {
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
struct TlsStream__StaticFields {
};
struct TlsStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsStream__VTable vtable;
};
struct TlsClientCertificate__VTable {
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
  VirtualInvokeData ProcessAsTls1;
  VirtualInvokeData ProcessAsSsl3;
  VirtualInvokeData Update;
  VirtualInvokeData EncodeMessage;
};
struct TlsClientCertificate__StaticFields {
};
struct TlsClientCertificate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsClientCertificate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsClientCertificate__VTable vtable;
};
struct HandshakeMessage__VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData Update;
  VirtualInvokeData EncodeMessage;
};
struct HandshakeMessage__StaticFields {
};
struct HandshakeMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HandshakeMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HandshakeMessage__VTable vtable;
};
struct ClientRecordProtocol__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SendRecord;
  VirtualInvokeData ProcessHandshakeMessage;
  VirtualInvokeData ProcessChangeCipherSpec;
  VirtualInvokeData GetMessage;
};
struct ClientRecordProtocol__StaticFields {
};
struct ClientRecordProtocol__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientRecordProtocol__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientRecordProtocol__VTable vtable;
};
struct RecordProtocol__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SendRecord;
  VirtualInvokeData __unknown;
  VirtualInvokeData ProcessChangeCipherSpec;
  VirtualInvokeData GetMessage;
};
struct RecordProtocol__StaticFields {
  struct ManualResetEvent * record_processing;
};
struct RecordProtocol__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecordProtocol__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecordProtocol__VTable vtable;
};
struct Context_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clear;
  VirtualInvokeData ClearKeyInfo;
};
struct Context_1__StaticFields {
};
struct Context_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Context_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Context_1__VTable vtable;
};
struct SslCipherSuite__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ComputeClientRecordMAC;
  VirtualInvokeData ComputeServerRecordMAC;
  VirtualInvokeData ComputeMasterSecret;
  VirtualInvokeData ComputeKeys;
};
struct SslCipherSuite__StaticFields {
};
struct SslCipherSuite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslCipherSuite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslCipherSuite__VTable vtable;
};
struct CipherSuite__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
};
struct CipherSuite__StaticFields {
  struct Byte__Array * EmptyArray;
};
struct CipherSuite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CipherSuite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CipherSuite__VTable vtable;
};

struct ClientContext__Fields {
  struct Context_1__Fields _;
  struct SslClientStream * sslStream;
  int16_t clientHelloProtocol;
};
struct ClientContext {
  struct ClientContext__Class *klass;
  struct MonitorData *monitor;
  struct ClientContext__Fields fields;
};
struct SslStreamBase__Fields {
  struct Stream__Fields _;
  struct Stream * innerStream;
  struct MemoryStream * inputBuffer;
  struct Context_1 * context;
  struct RecordProtocol * protocol;
  bool ownsStream;
  bool disposed;
  bool checkCertRevocationStatus;
  struct Object * negotiate;
  struct Object * read;
  struct Object * write;
  struct ManualResetEvent * negotiationComplete;
  struct Byte__Array * recbuf;
  struct MemoryStream * recordStream;
};
struct SslStreamBase {
  struct SslStreamBase__Class *klass;
  struct MonitorData *monitor;
  struct SslStreamBase__Fields fields;
};
struct SslClientStream__Fields {
  struct SslStreamBase__Fields _;
  struct CertificateValidationCallback * ServerCertValidation;
  struct CertificateSelectionCallback * ClientCertSelection;
  struct PrivateKeySelectionCallback * PrivateKeySelection;
  struct CertificateValidationCallback2 * ServerCertValidation2;
};
struct SslClientStream {
  struct SslClientStream__Class *klass;
  struct MonitorData *monitor;
  struct SslClientStream__Fields fields;
};
struct CertificateValidationCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct CertificateValidationCallback {
  struct CertificateValidationCallback__Class *klass;
  struct MonitorData *monitor;
  struct CertificateValidationCallback__Fields fields;
};
struct CertificateSelectionCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct CertificateSelectionCallback {
  struct CertificateSelectionCallback__Class *klass;
  struct MonitorData *monitor;
  struct CertificateSelectionCallback__Fields fields;
};
struct PrivateKeySelectionCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct PrivateKeySelectionCallback {
  struct PrivateKeySelectionCallback__Class *klass;
  struct MonitorData *monitor;
  struct PrivateKeySelectionCallback__Fields fields;
};
struct CertificateValidationCallback2__Fields {
  struct MulticastDelegate__Fields _;
};
struct CertificateValidationCallback2 {
  struct CertificateValidationCallback2__Class *klass;
  struct MonitorData *monitor;
  struct CertificateValidationCallback2__Fields fields;
};
struct SslStreamBase__VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
};
struct SslStreamBase__StaticFields {
  struct ManualResetEvent * record_processing;
};
struct SslStreamBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslStreamBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslStreamBase__VTable vtable;
};
struct CertificateValidationCallback__VTable {
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
struct CertificateValidationCallback__StaticFields {
};
struct CertificateValidationCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CertificateValidationCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CertificateValidationCallback__VTable vtable;
};
struct CertificateSelectionCallback__VTable {
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
struct CertificateSelectionCallback__StaticFields {
};
struct CertificateSelectionCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CertificateSelectionCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CertificateSelectionCallback__VTable vtable;
};
struct PrivateKeySelectionCallback__VTable {
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
struct PrivateKeySelectionCallback__StaticFields {
};
struct PrivateKeySelectionCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrivateKeySelectionCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrivateKeySelectionCallback__VTable vtable;
};
struct CertificateValidationCallback2__VTable {
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
struct CertificateValidationCallback2__StaticFields {
};
struct CertificateValidationCallback2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CertificateValidationCallback2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CertificateValidationCallback2__VTable vtable;
};
struct SslClientStream__VTable {
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
  VirtualInvokeData BeginNegotiateHandshake;
  VirtualInvokeData EndNegotiateHandshake;
  VirtualInvokeData OnLocalCertificateSelection;
  VirtualInvokeData OnRemoteCertificateValidation;
  VirtualInvokeData OnRemoteCertificateValidation2;
  VirtualInvokeData get_HaveRemoteValidation2Callback;
  VirtualInvokeData OnLocalPrivateKeySelection;
  VirtualInvokeData RaiseServerCertificateValidation;
  VirtualInvokeData RaiseServerCertificateValidation2;
};}