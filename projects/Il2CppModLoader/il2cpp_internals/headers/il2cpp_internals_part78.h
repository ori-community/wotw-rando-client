namespace app {

struct Cookie__Array {
  struct Cookie__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Cookie * vector[32];
};

enum CookieCollection_Stamp__Enum : int32_t {
  CookieCollection_Stamp__Enum_Check = 0,
  CookieCollection_Stamp__Enum_Set = 1,
  CookieCollection_Stamp__Enum_SetToUnused = 2,
  CookieCollection_Stamp__Enum_SetToMaxUsed = 3,
};
struct CookieCollection_Stamp__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CookieCollection_Stamp__Enum value;
};

struct __declspec(align(8)) CookieCollection_CookieCollectionEnumerator__Fields {
  struct CookieCollection * m_cookies;
  int32_t m_count;
  int32_t m_index;
  int32_t m_version;
};
struct CookieCollection_CookieCollectionEnumerator {
  struct CookieCollection_CookieCollectionEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct CookieCollection_CookieCollectionEnumerator__Fields fields;
};
struct CookieCollection_CookieCollectionEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEnumerator_MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct CookieCollection_CookieCollectionEnumerator__StaticFields {
};
struct CookieCollection_CookieCollectionEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CookieCollection_CookieCollectionEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CookieCollection_CookieCollectionEnumerator__VTable vtable;
};

struct __declspec(align(8)) PathList__Fields {
  struct SortedList * m_list;
};
struct PathList {
  struct PathList__Class *klass;
  struct MonitorData *monitor;
  struct PathList__Fields fields;
};
struct PathList__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PathList__StaticFields {
};
struct PathList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PathList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PathList__VTable vtable;
};

struct PathList_PathListComparer {
  struct PathList_PathListComparer__Class *klass;
  struct MonitorData *monitor;
};
struct PathList_PathListComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IComparer_Compare;
};
struct PathList_PathListComparer__StaticFields {
  struct PathList_PathListComparer * StaticInstance;
};
struct PathList_PathListComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PathList_PathListComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PathList_PathListComparer__VTable vtable;
};

struct CookieException__Fields {
  struct FormatException__Fields _;
};
struct CookieException {
  struct CookieException__Class *klass;
  struct MonitorData *monitor;
  struct CookieException__Fields fields;
};
struct CookieException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData GetType;
};
struct CookieException__StaticFields {
};
struct CookieException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CookieException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CookieException__VTable vtable;
};

struct FileWebRequest__Fields {
  struct WebRequest__Fields _;
  struct String * m_connectionGroupName;
  int64_t m_contentLength;
  struct ICredentials * m_credentials;
  enum FileAccess__Enum m_fileAccess;
  struct WebHeaderCollection * m_headers;
  struct String * m_method;
  bool m_preauthenticate;
  struct IWebProxy * m_proxy;
  struct ManualResetEvent * m_readerEvent;
  bool m_readPending;
  struct WebResponse * m_response;
  struct Stream * m_stream;
  bool m_syncHint;
  int32_t m_timeout;
  struct Uri * m_uri;
  bool m_writePending;
  bool m_writing;
  struct LazyAsyncResult * m_WriteAResult;
  struct LazyAsyncResult * m_ReadAResult;
  int32_t m_Aborted;
};
struct FileWebRequest {
  struct FileWebRequest__Class *klass;
  struct MonitorData *monitor;
  struct FileWebRequest__Fields fields;
};
struct FileWebRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData get_CreatorInstance;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_CachePolicy;
  VirtualInvokeData set_CachePolicy;
  VirtualInvokeData get_Method;
  VirtualInvokeData set_Method;
  VirtualInvokeData get_RequestUri;
  VirtualInvokeData get_ConnectionGroupName;
  VirtualInvokeData set_ConnectionGroupName;
  VirtualInvokeData get_Headers;
  VirtualInvokeData set_Headers;
  VirtualInvokeData get_ContentLength;
  VirtualInvokeData set_ContentLength;
  VirtualInvokeData get_ContentType;
  VirtualInvokeData set_ContentType;
  VirtualInvokeData get_Credentials;
  VirtualInvokeData set_Credentials;
  VirtualInvokeData get_UseDefaultCredentials;
  VirtualInvokeData set_UseDefaultCredentials;
  VirtualInvokeData get_Proxy;
  VirtualInvokeData set_Proxy;
  VirtualInvokeData get_PreAuthenticate;
  VirtualInvokeData set_PreAuthenticate;
  VirtualInvokeData get_Timeout;
  VirtualInvokeData set_Timeout;
  VirtualInvokeData GetRequestStream;
  VirtualInvokeData GetResponse;
  VirtualInvokeData BeginGetResponse;
  VirtualInvokeData EndGetResponse;
  VirtualInvokeData BeginGetRequestStream;
  VirtualInvokeData EndGetRequestStream;
  VirtualInvokeData GetRequestStreamAsync;
  VirtualInvokeData GetResponseAsync;
  VirtualInvokeData Abort;
  VirtualInvokeData RequestCallback;
};
struct FileWebRequest__StaticFields {
  struct WaitCallback * s_GetRequestStreamCallback;
  struct WaitCallback * s_GetResponseCallback;
};
struct FileWebRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileWebRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileWebRequest__VTable vtable;
};

struct FileWebRequestCreator {
  struct FileWebRequestCreator__Class *klass;
  struct MonitorData *monitor;
};
struct FileWebRequestCreator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Create;
};
struct FileWebRequestCreator__StaticFields {
};
struct FileWebRequestCreator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileWebRequestCreator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileWebRequestCreator__VTable vtable;
};

struct FileWebStream__Fields {
  struct FileStream__Fields _;
  struct FileWebRequest * m_request;
};
struct FileWebStream {
  struct FileWebStream__Class *klass;
  struct MonitorData *monitor;
  struct FileWebStream__Fields fields;
};
enum CloseExState__Enum : int32_t {
  CloseExState__Enum_Normal = 0,
  CloseExState__Enum_Abort = 1,
  CloseExState__Enum_Silent = 2,
};
struct CloseExState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CloseExState__Enum value;
};
struct FileWebStream__VTable {
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
  VirtualInvokeData get_SafeFileHandle;
  VirtualInvokeData System_Net_ICloseEx_CloseEx;
};
struct FileWebStream__StaticFields {
};
struct FileWebStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileWebStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileWebStream__VTable vtable;
};

struct FileWebResponse__Fields {
  struct WebResponse__Fields _;
  bool m_closed;
  int64_t m_contentLength;
  enum FileAccess__Enum m_fileAccess;
  struct WebHeaderCollection * m_headers;
  struct Stream * m_stream;
  struct Uri * m_uri;
};
struct FileWebResponse {
  struct FileWebResponse__Class *klass;
  struct MonitorData *monitor;
  struct FileWebResponse__Fields fields;
};
struct FileWebResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData Dispose;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_IsFromCache;
  VirtualInvokeData get_IsCacheFresh;
  VirtualInvokeData get_IsMutuallyAuthenticated;
  VirtualInvokeData get_ContentLength;
  VirtualInvokeData set_ContentLength;
  VirtualInvokeData get_ContentType;
  VirtualInvokeData set_ContentType;
  VirtualInvokeData GetResponseStream;
  VirtualInvokeData get_ResponseUri;
  VirtualInvokeData get_Headers;
  VirtualInvokeData get_SupportsHeaders;
  VirtualInvokeData System_Net_ICloseEx_CloseEx;
};
struct FileWebResponse__StaticFields {
};
struct FileWebResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileWebResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileWebResponse__VTable vtable;
};

struct DelegatedStream__Fields {
  struct Stream__Fields _;
  struct Stream * stream;
  struct NetworkStream * netStream;
};
struct DelegatedStream {
  struct DelegatedStream__Class *klass;
  struct MonitorData *monitor;
  struct DelegatedStream__Fields fields;
};
struct Base64Stream__Fields {
  struct DelegatedStream__Fields _;
  int32_t lineLength;
  struct Base64Stream_ReadStateInfo * readState;
  struct Base64WriteStateInfo * writeState;
};
struct Base64Stream {
  struct Base64Stream__Class *klass;
  struct MonitorData *monitor;
  struct Base64Stream__Fields fields;
};
struct __declspec(align(8)) Base64Stream_ReadStateInfo__Fields {
  uint8_t val;
  uint8_t pos;
};
struct Base64Stream_ReadStateInfo {
  struct Base64Stream_ReadStateInfo__Class *klass;
  struct MonitorData *monitor;
  struct Base64Stream_ReadStateInfo__Fields fields;
};
struct __declspec(align(8)) WriteStateInfoBase__Fields {
  struct Byte__Array * _header;
  struct Byte__Array * _footer;
  int32_t _maxLineLength;
  struct Byte__Array * buffer;
  int32_t _currentLineLength;
  int32_t _currentBufferUsed;
};
struct WriteStateInfoBase {
  struct WriteStateInfoBase__Class *klass;
  struct MonitorData *monitor;
  struct WriteStateInfoBase__Fields fields;
};
struct Base64WriteStateInfo__Fields {
  struct WriteStateInfoBase__Fields _;
  int32_t _Padding_k__BackingField;
  uint8_t _LastBits_k__BackingField;
};
struct Base64WriteStateInfo {
  struct Base64WriteStateInfo__Class *klass;
  struct MonitorData *monitor;
  struct Base64WriteStateInfo__Fields fields;
};
struct DelegatedStream__VTable {
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
struct DelegatedStream__StaticFields {
};
struct DelegatedStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DelegatedStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DelegatedStream__VTable vtable;
};
struct Base64Stream_ReadStateInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Base64Stream_ReadStateInfo__StaticFields {
};
struct Base64Stream_ReadStateInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Base64Stream_ReadStateInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Base64Stream_ReadStateInfo__VTable vtable;
};
struct WriteStateInfoBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WriteStateInfoBase__StaticFields {
};
struct WriteStateInfoBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WriteStateInfoBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WriteStateInfoBase__VTable vtable;
};
struct Base64WriteStateInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Base64WriteStateInfo__StaticFields {
};
struct Base64WriteStateInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Base64WriteStateInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Base64WriteStateInfo__VTable vtable;
};
struct Base64Stream__VTable {
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
  VirtualInvokeData DecodeBytes;
  VirtualInvokeData EncodeBytes;
  VirtualInvokeData GetStream;
  VirtualInvokeData GetEncodedString;
};
struct Base64Stream__StaticFields {
  struct Byte__Array * base64DecodeMap;
  struct Byte__Array * base64EncodeMap;
};
struct Base64Stream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Base64Stream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Base64Stream__VTable vtable;
};

struct Base64Stream_ReadAsyncResult__Fields {
  struct LazyAsyncResult__Fields _;
  struct Base64Stream * parent;
  struct Byte__Array * buffer;
  int32_t offset;
  int32_t count;
  int32_t read;
};
struct Base64Stream_ReadAsyncResult {
  struct Base64Stream_ReadAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct Base64Stream_ReadAsyncResult__Fields fields;
};
struct Base64Stream_ReadAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
  VirtualInvokeData Complete;
  VirtualInvokeData Cleanup;
};
struct Base64Stream_ReadAsyncResult__StaticFields {
  struct AsyncCallback * onRead;
};
struct Base64Stream_ReadAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Base64Stream_ReadAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Base64Stream_ReadAsyncResult__VTable vtable;
};

struct Base64Stream_WriteAsyncResult__Fields {
  struct LazyAsyncResult__Fields _;
  struct Base64Stream * parent;
  struct Byte__Array * buffer;
  int32_t offset;
  int32_t count;
  int32_t written;
};
struct Base64Stream_WriteAsyncResult {
  struct Base64Stream_WriteAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct Base64Stream_WriteAsyncResult__Fields fields;
};
struct Base64Stream_WriteAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
  VirtualInvokeData Complete;
  VirtualInvokeData Cleanup;
};
struct Base64Stream_WriteAsyncResult__StaticFields {
  struct AsyncCallback * onWrite;
};
struct Base64Stream_WriteAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Base64Stream_WriteAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Base64Stream_WriteAsyncResult__VTable vtable;
};

struct ClosableStream__Fields {
  struct DelegatedStream__Fields _;
  struct EventHandler * onClose;
  int32_t closed;
};
struct ClosableStream {
  struct ClosableStream__Class *klass;
  struct MonitorData *monitor;
  struct ClosableStream__Fields fields;
};
struct ClosableStream__VTable {
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
struct ClosableStream__StaticFields {
};
struct ClosableStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClosableStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClosableStream__VTable vtable;
};

struct TrackingStringDictionary__Fields {
  struct StringDictionary__Fields _;
  bool isChanged;
  bool isReadOnly;
};
struct TrackingStringDictionary {
  struct TrackingStringDictionary__Class *klass;
  struct MonitorData *monitor;
  struct TrackingStringDictionary__Fields fields;
};
struct TrackingStringDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData Remove;
};
struct TrackingStringDictionary__StaticFields {
};
struct TrackingStringDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TrackingStringDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TrackingStringDictionary__VTable vtable;
};

struct TrackingValidationObjectDictionary__Fields {
  struct StringDictionary__Fields _;
  struct IDictionary_2_System_String_System_Object_ * internalObjects;
  struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue_ * validators;
  bool _IsChanged_k__BackingField;
};
struct TrackingValidationObjectDictionary {
  struct TrackingValidationObjectDictionary__Class *klass;
  struct MonitorData *monitor;
  struct TrackingValidationObjectDictionary__Fields fields;
};
struct IDictionary_2_System_String_System_Object_ {
  struct IDictionary_2_System_String_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue_ {
  struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_System_String_System_Object___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_String_System_Object___StaticFields {
};
struct IDictionary_2_System_String_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_String_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_String_System_Object___VTable vtable;
};
struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___StaticFields {
};
struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue___VTable vtable;
};
struct TrackingValidationObjectDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData Remove;
};
struct TrackingValidationObjectDictionary__StaticFields {
};
struct TrackingValidationObjectDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TrackingValidationObjectDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TrackingValidationObjectDictionary__VTable vtable;
};

struct TrackingValidationObjectDictionary_ValidateAndParseValue__Fields {
  struct MulticastDelegate__Fields _;
};
struct TrackingValidationObjectDictionary_ValidateAndParseValue {
  struct TrackingValidationObjectDictionary_ValidateAndParseValue__Class *klass;
  struct MonitorData *monitor;
  struct TrackingValidationObjectDictionary_ValidateAndParseValue__Fields fields;
};
struct TrackingValidationObjectDictionary_ValidateAndParseValue__VTable {
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
struct TrackingValidationObjectDictionary_ValidateAndParseValue__StaticFields {
};
struct TrackingValidationObjectDictionary_ValidateAndParseValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TrackingValidationObjectDictionary_ValidateAndParseValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TrackingValidationObjectDictionary_ValidateAndParseValue__VTable vtable;
};

struct WebClient__Fields {
  struct Component__Fields _;
  struct Uri * m_baseAddress;
  struct ICredentials * m_credentials;
  struct WebHeaderCollection * m_headers;
  struct NameValueCollection * m_requestParameters;
  struct WebResponse * m_WebResponse;
  struct WebRequest * m_WebRequest;
  struct Encoding * m_Encoding;
  struct String * m_Method;
  int64_t m_ContentLength;
  bool m_InitWebClientAsync;
  bool m_Cancelled;
  struct WebClient_ProgressData * m_Progress;
  struct IWebProxy * m_Proxy;
  bool m_ProxySet;
  struct RequestCachePolicy * m_CachePolicy;
  bool _AllowReadStreamBuffering_k__BackingField;
  bool _AllowWriteStreamBuffering_k__BackingField;
  int32_t m_CallNesting;
  struct AsyncOperation * m_AsyncOp;
  struct OpenReadCompletedEventHandler * OpenReadCompleted;
  struct SendOrPostCallback * openReadOperationCompleted;
  struct OpenWriteCompletedEventHandler * OpenWriteCompleted;
  struct SendOrPostCallback * openWriteOperationCompleted;
  struct DownloadStringCompletedEventHandler * DownloadStringCompleted;
  struct SendOrPostCallback * downloadStringOperationCompleted;
  struct DownloadDataCompletedEventHandler * DownloadDataCompleted;
  struct SendOrPostCallback * downloadDataOperationCompleted;
  struct AsyncCompletedEventHandler * DownloadFileCompleted;
  struct SendOrPostCallback * downloadFileOperationCompleted;
  struct UploadStringCompletedEventHandler * UploadStringCompleted;
  struct SendOrPostCallback * uploadStringOperationCompleted;
  struct UploadDataCompletedEventHandler * UploadDataCompleted;
  struct SendOrPostCallback * uploadDataOperationCompleted;
  struct UploadFileCompletedEventHandler * UploadFileCompleted;
  struct SendOrPostCallback * uploadFileOperationCompleted;
  struct UploadValuesCompletedEventHandler * UploadValuesCompleted;
  struct SendOrPostCallback * uploadValuesOperationCompleted;
  struct DownloadProgressChangedEventHandler * DownloadProgressChanged;
  struct UploadProgressChangedEventHandler * UploadProgressChanged;
  struct SendOrPostCallback * reportDownloadProgressChanged;
  struct SendOrPostCallback * reportUploadProgressChanged;
};
struct WebClient {
  struct WebClient__Class *klass;
  struct MonitorData *monitor;
  struct WebClient__Fields fields;
};
struct __declspec(align(8)) WebClient_ProgressData__Fields {
  int64_t BytesSent;
  int64_t TotalBytesToSend;
  int64_t BytesReceived;
  int64_t TotalBytesToReceive;
  bool HasUploadPhase;
};
struct WebClient_ProgressData {
  struct WebClient_ProgressData__Class *klass;
  struct MonitorData *monitor;
  struct WebClient_ProgressData__Fields fields;
};
struct OpenReadCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct OpenReadCompletedEventHandler {
  struct OpenReadCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct OpenReadCompletedEventHandler__Fields fields;
};
struct OpenReadCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct Stream * m_Result;
};
struct OpenReadCompletedEventArgs {
  struct OpenReadCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct OpenReadCompletedEventArgs__Fields fields;
};
struct OpenWriteCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct OpenWriteCompletedEventHandler {
  struct OpenWriteCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct OpenWriteCompletedEventHandler__Fields fields;
};
struct OpenWriteCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct Stream * m_Result;
};
struct OpenWriteCompletedEventArgs {
  struct OpenWriteCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct OpenWriteCompletedEventArgs__Fields fields;
};
struct DownloadStringCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DownloadStringCompletedEventHandler {
  struct DownloadStringCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DownloadStringCompletedEventHandler__Fields fields;
};
struct DownloadStringCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct String * m_Result;
};
struct DownloadStringCompletedEventArgs {
  struct DownloadStringCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DownloadStringCompletedEventArgs__Fields fields;
};
struct DownloadDataCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DownloadDataCompletedEventHandler {
  struct DownloadDataCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DownloadDataCompletedEventHandler__Fields fields;
};
struct DownloadDataCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct Byte__Array * m_Result;
};
struct DownloadDataCompletedEventArgs {
  struct DownloadDataCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DownloadDataCompletedEventArgs__Fields fields;
};
struct UploadStringCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct UploadStringCompletedEventHandler {
  struct UploadStringCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct UploadStringCompletedEventHandler__Fields fields;
};
struct UploadStringCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct String * m_Result;
};
struct UploadStringCompletedEventArgs {
  struct UploadStringCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct UploadStringCompletedEventArgs__Fields fields;
};
struct UploadDataCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct UploadDataCompletedEventHandler {
  struct UploadDataCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct UploadDataCompletedEventHandler__Fields fields;
};
struct UploadDataCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct Byte__Array * m_Result;
};}