namespace app {
struct SslClientStream__StaticFields {
};
struct SslClientStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslClientStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslClientStream__VTable vtable;
};
struct ClientContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clear;
  VirtualInvokeData ClearKeyInfo;
};
struct ClientContext__StaticFields {
};
struct ClientContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientContext__VTable vtable;
};

struct __declspec(align(8)) ClientSessionInfo__Fields {
  bool disposed;
  struct DateTime validuntil;
  struct String * host;
  struct Byte__Array * sid;
  struct Byte__Array * masterSecret;
};
struct ClientSessionInfo {
  struct ClientSessionInfo__Class *klass;
  struct MonitorData *monitor;
  struct ClientSessionInfo__Fields fields;
};
struct ClientSessionInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct ClientSessionInfo__StaticFields {
  int32_t ValidityInterval;
};
struct ClientSessionInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientSessionInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientSessionInfo__VTable vtable;
};

struct ClientSessionCache {
  struct ClientSessionCache__Class *klass;
  struct MonitorData *monitor;
};
struct ClientSessionCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ClientSessionCache__StaticFields {
  struct Hashtable * cache;
  struct Object * locker;
};
struct ClientSessionCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientSessionCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientSessionCache__VTable vtable;
};

struct DebugHelper {
  struct DebugHelper__Class *klass;
  struct MonitorData *monitor;
};
struct DebugHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DebugHelper__StaticFields {
  bool isInitialized;
};
struct DebugHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugHelper__VTable vtable;
};

struct HttpsClientStream__Fields {
  struct SslClientStream__Fields _;
  struct HttpWebRequest * _request;
  int32_t _status;
};
struct HttpsClientStream {
  struct HttpsClientStream__Class *klass;
  struct MonitorData *monitor;
  struct HttpsClientStream__Fields fields;
};
struct HttpsClientStream__VTable {
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
};
struct HttpsClientStream__StaticFields {
};
struct HttpsClientStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpsClientStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpsClientStream__VTable vtable;
};

struct HttpsClientStream_c {
  struct HttpsClientStream_c__Class *klass;
  struct MonitorData *monitor;
};
struct HttpsClientStream_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HttpsClientStream_c__StaticFields {
  struct HttpsClientStream_c * __9;
  struct CertificateSelectionCallback * __9__2_0;
  struct PrivateKeySelectionCallback * __9__2_1;
};
struct HttpsClientStream_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpsClientStream_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpsClientStream_c__VTable vtable;
};

struct __declspec(align(8)) RSASslSignatureDeformatter__Fields {
  struct RSA * key;
  struct HashAlgorithm * hash;
};
struct RSASslSignatureDeformatter {
  struct RSASslSignatureDeformatter__Class *klass;
  struct MonitorData *monitor;
  struct RSASslSignatureDeformatter__Fields fields;
};
struct RSASslSignatureDeformatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetKey;
  VirtualInvokeData SetHashAlgorithm;
  VirtualInvokeData VerifySignature;
  VirtualInvokeData VerifySignature_1;
};
struct RSASslSignatureDeformatter__StaticFields {
};
struct RSASslSignatureDeformatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSASslSignatureDeformatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSASslSignatureDeformatter__VTable vtable;
};

struct __declspec(align(8)) RSASslSignatureFormatter__Fields {
  struct RSA * key;
  struct HashAlgorithm * hash;
};
struct RSASslSignatureFormatter {
  struct RSASslSignatureFormatter__Class *klass;
  struct MonitorData *monitor;
  struct RSASslSignatureFormatter__Fields fields;
};
struct RSASslSignatureFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetKey;
  VirtualInvokeData SetHashAlgorithm;
  VirtualInvokeData CreateSignature;
  VirtualInvokeData CreateSignature_1;
};
struct RSASslSignatureFormatter__StaticFields {
};
struct RSASslSignatureFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RSASslSignatureFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RSASslSignatureFormatter__VTable vtable;
};

struct __declspec(align(8)) RecordProtocol_ReceiveRecordAsyncResult__Fields {
  struct Object * locker;
  struct AsyncCallback * _userCallback;
  struct Object * _userState;
  struct Exception * _asyncException;
  struct ManualResetEvent * handle;
  struct Byte__Array * _resultingBuffer;
  struct Stream * _record;
  bool completed;
  struct Byte__Array * _initialBuffer;
};
struct RecordProtocol_ReceiveRecordAsyncResult {
  struct RecordProtocol_ReceiveRecordAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct RecordProtocol_ReceiveRecordAsyncResult__Fields fields;
};
struct RecordProtocol_ReceiveRecordAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
};
struct RecordProtocol_ReceiveRecordAsyncResult__StaticFields {
};
struct RecordProtocol_ReceiveRecordAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecordProtocol_ReceiveRecordAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecordProtocol_ReceiveRecordAsyncResult__VTable vtable;
};

struct __declspec(align(8)) RecordProtocol_SendRecordAsyncResult__Fields {
  struct Object * locker;
  struct AsyncCallback * _userCallback;
  struct Object * _userState;
  struct Exception * _asyncException;
  struct ManualResetEvent * handle;
  struct HandshakeMessage * _message;
  bool completed;
};
struct RecordProtocol_SendRecordAsyncResult {
  struct RecordProtocol_SendRecordAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct RecordProtocol_SendRecordAsyncResult__Fields fields;
};
struct RecordProtocol_SendRecordAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
};
struct RecordProtocol_SendRecordAsyncResult__StaticFields {
};
struct RecordProtocol_SendRecordAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecordProtocol_SendRecordAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecordProtocol_SendRecordAsyncResult__VTable vtable;
};

struct ServerContext__Fields {
  struct Context_1__Fields _;
  struct SslServerStream * sslStream;
  bool request_client_certificate;
  bool clientCertificateRequired;
};
struct ServerContext {
  struct ServerContext__Class *klass;
  struct MonitorData *monitor;
  struct ServerContext__Fields fields;
};
struct SslServerStream__Fields {
  struct SslStreamBase__Fields _;
  struct CertificateValidationCallback * ClientCertValidation;
  struct PrivateKeySelectionCallback * PrivateKeySelection;
  struct CertificateValidationCallback2 * ClientCertValidation2;
};
struct SslServerStream {
  struct SslServerStream__Class *klass;
  struct MonitorData *monitor;
  struct SslServerStream__Fields fields;
};
struct SslServerStream__VTable {
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
};
struct SslServerStream__StaticFields {
};
struct SslServerStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslServerStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslServerStream__VTable vtable;
};
struct ServerContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clear;
  VirtualInvokeData ClearKeyInfo;
};
struct ServerContext__StaticFields {
};
struct ServerContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerContext__VTable vtable;
};

struct ServerRecordProtocol__Fields {
  struct RecordProtocol__Fields _;
  struct TlsClientCertificate * cert;
};
struct ServerRecordProtocol {
  struct ServerRecordProtocol__Class *klass;
  struct MonitorData *monitor;
  struct ServerRecordProtocol__Fields fields;
};
struct ServerRecordProtocol__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SendRecord;
  VirtualInvokeData ProcessHandshakeMessage;
  VirtualInvokeData ProcessChangeCipherSpec;
  VirtualInvokeData GetMessage;
};
struct ServerRecordProtocol__StaticFields {
};
struct ServerRecordProtocol__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerRecordProtocol__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerRecordProtocol__VTable vtable;
};

enum SslClientStream_NegotiateState__Enum : int32_t {
  SslClientStream_NegotiateState__Enum_SentClientHello = 0,
  SslClientStream_NegotiateState__Enum_ReceiveClientHelloResponse = 1,
  SslClientStream_NegotiateState__Enum_SentCipherSpec = 2,
  SslClientStream_NegotiateState__Enum_ReceiveCipherSpecResponse = 3,
  SslClientStream_NegotiateState__Enum_SentKeyExchange = 4,
  SslClientStream_NegotiateState__Enum_ReceiveFinishResponse = 5,
  SslClientStream_NegotiateState__Enum_SentFinished = 6,
};
struct SslClientStream_NegotiateState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SslClientStream_NegotiateState__Enum value;
};
struct __declspec(align(8)) SslClientStream_NegotiateAsyncResult__Fields {
  struct Object * locker;
  struct AsyncCallback * _userCallback;
  struct Object * _userState;
  struct Exception * _asyncException;
  struct ManualResetEvent * handle;
  enum SslClientStream_NegotiateState__Enum _state;
  bool completed;
};
struct SslClientStream_NegotiateAsyncResult {
  struct SslClientStream_NegotiateAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct SslClientStream_NegotiateAsyncResult__Fields fields;
};
struct SslClientStream_NegotiateAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
};
struct SslClientStream_NegotiateAsyncResult__StaticFields {
};
struct SslClientStream_NegotiateAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslClientStream_NegotiateAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslClientStream_NegotiateAsyncResult__VTable vtable;
};

struct SslHandshakeHash__Fields {
  struct HashAlgorithm__Fields _;
  struct HashAlgorithm * md5;
  struct HashAlgorithm * sha;
  bool hashing;
  struct Byte__Array * secret;
  struct Byte__Array * innerPadMD5;
  struct Byte__Array * outerPadMD5;
  struct Byte__Array * innerPadSHA;
  struct Byte__Array * outerPadSHA;
};
struct SslHandshakeHash {
  struct SslHandshakeHash__Class *klass;
  struct MonitorData *monitor;
  struct SslHandshakeHash__Fields fields;
};
struct SslHandshakeHash__VTable {
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
struct SslHandshakeHash__StaticFields {
};
struct SslHandshakeHash__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslHandshakeHash__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslHandshakeHash__VTable vtable;
};

struct __declspec(align(8)) SslStreamBase_InternalAsyncResult__Fields {
  struct Object * locker;
  struct AsyncCallback * _userCallback;
  struct Object * _userState;
  struct Exception * _asyncException;
  struct ManualResetEvent * handle;
  bool completed;
  int32_t _bytesRead;
  bool _fromWrite;
  bool _proceedAfterHandshake;
  struct Byte__Array * _buffer;
  int32_t _offset;
  int32_t _count;
};
struct SslStreamBase_InternalAsyncResult {
  struct SslStreamBase_InternalAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct SslStreamBase_InternalAsyncResult__Fields fields;
};
struct SslStreamBase_InternalAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
};
struct SslStreamBase_InternalAsyncResult__StaticFields {
};
struct SslStreamBase_InternalAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslStreamBase_InternalAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslStreamBase_InternalAsyncResult__VTable vtable;
};

struct SslStreamBase_AsyncHandshakeDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct SslStreamBase_AsyncHandshakeDelegate {
  struct SslStreamBase_AsyncHandshakeDelegate__Class *klass;
  struct MonitorData *monitor;
  struct SslStreamBase_AsyncHandshakeDelegate__Fields fields;
};
struct SslStreamBase_AsyncHandshakeDelegate__VTable {
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
struct SslStreamBase_AsyncHandshakeDelegate__StaticFields {
};
struct SslStreamBase_AsyncHandshakeDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SslStreamBase_AsyncHandshakeDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SslStreamBase_AsyncHandshakeDelegate__VTable vtable;
};

struct TlsCipherSuite__Fields {
  struct CipherSuite__Fields _;
  struct Byte__Array * header;
  struct Object * headerLock;
};
struct TlsCipherSuite {
  struct TlsCipherSuite__Class *klass;
  struct MonitorData *monitor;
  struct TlsCipherSuite__Fields fields;
};
struct TlsCipherSuite__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ComputeClientRecordMAC;
  VirtualInvokeData ComputeServerRecordMAC;
  VirtualInvokeData ComputeMasterSecret;
  VirtualInvokeData ComputeKeys;
};
struct TlsCipherSuite__StaticFields {
};
struct TlsCipherSuite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsCipherSuite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsCipherSuite__VTable vtable;
};

struct TlsException__Fields {
  struct Exception__Fields _;
  struct Alert * alert;
};
struct TlsException {
  struct TlsException__Class *klass;
  struct MonitorData *monitor;
  struct TlsException__Fields fields;
};
struct TlsException__VTable {
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
struct TlsException__StaticFields {
};
struct TlsException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsException__VTable vtable;
};

struct TlsClientCertificateVerify__Fields {
  struct HandshakeMessage__Fields _;
};
struct TlsClientCertificateVerify {
  struct TlsClientCertificateVerify__Class *klass;
  struct MonitorData *monitor;
  struct TlsClientCertificateVerify__Fields fields;
};
struct TlsClientCertificateVerify__VTable {
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
struct TlsClientCertificateVerify__StaticFields {
};
struct TlsClientCertificateVerify__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsClientCertificateVerify__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsClientCertificateVerify__VTable vtable;
};

struct TlsClientFinished__Fields {
  struct HandshakeMessage__Fields _;
};
struct TlsClientFinished {
  struct TlsClientFinished__Class *klass;
  struct MonitorData *monitor;
  struct TlsClientFinished__Fields fields;
};
struct TlsClientFinished__VTable {
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
struct TlsClientFinished__StaticFields {
};
struct TlsClientFinished__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsClientFinished__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsClientFinished__VTable vtable;
};

struct TlsClientHello__Fields {
  struct HandshakeMessage__Fields _;
  struct Byte__Array * random;
  struct Byte__Array * sessionId;
  struct Int16__Array * cipherSuites;
  struct Byte__Array * compressionMethods;
};
struct TlsClientHello {
  struct TlsClientHello__Class *klass;
  struct MonitorData *monitor;
  struct TlsClientHello__Fields fields;
};
struct TlsClientHello__VTable {
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
struct TlsClientHello__StaticFields {
};
struct TlsClientHello__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsClientHello__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsClientHello__VTable vtable;
};

struct TlsClientKeyExchange__Fields {
  struct HandshakeMessage__Fields _;
};
struct TlsClientKeyExchange {
  struct TlsClientKeyExchange__Class *klass;
  struct MonitorData *monitor;
  struct TlsClientKeyExchange__Fields fields;
};
struct TlsClientKeyExchange__VTable {
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
struct TlsClientKeyExchange__StaticFields {
};
struct TlsClientKeyExchange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsClientKeyExchange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsClientKeyExchange__VTable vtable;
};

struct TlsServerCertificate__Fields {
  struct HandshakeMessage__Fields _;
};
struct TlsServerCertificate {
  struct TlsServerCertificate__Class *klass;
  struct MonitorData *monitor;
  struct TlsServerCertificate__Fields fields;
};
struct TlsServerCertificate__VTable {
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
struct TlsServerCertificate__StaticFields {
};
struct TlsServerCertificate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TlsServerCertificate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TlsServerCertificate__VTable vtable;
};

struct TlsServerCertificateRequest__Fields {
  struct HandshakeMessage__Fields _;
};
struct TlsServerCertificateRequest {
  struct TlsServerCertificateRequest__Class *klass;
  struct MonitorData *monitor;
  struct TlsServerCertificateRequest__Fields fields;
};
struct TlsServerCertificateRequest__VTable {
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
};}