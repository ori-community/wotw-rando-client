namespace app {
struct PrimeGeneratorBase_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Confidence;
    VirtualInvokeData get_PrimalityTest;
    VirtualInvokeData get_TrialDivisionBounds;
    VirtualInvokeData __unknown;
};

struct PrimeGeneratorBase_1__StaticFields {
};

struct PrimeGeneratorBase_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PrimeGeneratorBase_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PrimeGeneratorBase_1__VTable vtable;
};

struct SafePipeHandle__Fields {
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};

struct SafePipeHandle {
    struct SafePipeHandle__Class *klass;
    MonitorData *monitor;
    struct SafePipeHandle__Fields fields;
};

struct SafePipeHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_IsInvalid;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData ReleaseHandle;
};

struct SafePipeHandle__StaticFields {
};

struct SafePipeHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SafePipeHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SafePipeHandle__VTable vtable;
};

struct __declspec(align(8)) MonoTODOAttribute_2__Fields {
    struct String *comment;
};

struct MonoTODOAttribute_2 {
    struct MonoTODOAttribute_2__Class *klass;
    MonitorData *monitor;
    struct MonoTODOAttribute_2__Fields fields;
};

struct MonoTODOAttribute_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct MonoTODOAttribute_2__StaticFields {
};

struct MonoTODOAttribute_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoTODOAttribute_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoTODOAttribute_2__VTable vtable;
};

struct __declspec(align(8)) ReaderWriterCount__Fields {
    int64_t lockID;
    int32_t readercount;
    int32_t writercount;
    int32_t upgradecount;
    struct ReaderWriterCount *next;
};

struct ReaderWriterCount {
    struct ReaderWriterCount__Class *klass;
    MonitorData *monitor;
    struct ReaderWriterCount__Fields fields;
};

struct ReaderWriterCount__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReaderWriterCount__StaticFields {
};

struct ReaderWriterCount__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReaderWriterCount__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReaderWriterCount__VTable vtable;
};

struct __declspec(align(8)) ReaderWriterLockSlim__Fields {
    bool fIsReentrant;
    int32_t myLock;
    uint32_t numWriteWaiters;
    uint32_t numReadWaiters;
    uint32_t numWriteUpgradeWaiters;
    uint32_t numUpgradeWaiters;
    bool fNoWaiters;
    int32_t upgradeLockOwnerId;
    int32_t writeLockOwnerId;
    struct EventWaitHandle *writeEvent;
    struct EventWaitHandle *readEvent;
    struct EventWaitHandle *upgradeEvent;
    struct EventWaitHandle *waitUpgradeEvent;
    int64_t lockID;
    bool fUpgradeThreadHoldingRead;
    uint32_t owners;
    bool fDisposed;
};

struct ReaderWriterLockSlim {
    struct ReaderWriterLockSlim__Class *klass;
    MonitorData *monitor;
    struct ReaderWriterLockSlim__Fields fields;
};

struct ReaderWriterLockSlim__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct ReaderWriterLockSlim__StaticFields {
    int64_t s_nextLockID;
    struct ReaderWriterCount *t_rwc;
};

struct ReaderWriterLockSlim__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReaderWriterLockSlim__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReaderWriterLockSlim__VTable vtable;
};

enum class LockRecursionPolicy__Enum : int32_t {
    NoRecursion = 0x00000000,
    SupportsRecursion = 0x00000001,
};

struct LockRecursionPolicy__Enum__Boxed {
    struct LockRecursionPolicy__Enum__Class *klass;
    MonitorData *monitor;
    LockRecursionPolicy__Enum value;
    
};

struct LockRecursionPolicy__Enum__VTable {
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

struct LockRecursionPolicy__Enum__StaticFields {
};

struct LockRecursionPolicy__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LockRecursionPolicy__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LockRecursionPolicy__Enum__VTable vtable;
};

struct ReaderWriterLockSlim_TimeoutTracker {
    int32_t m_total;
    int32_t m_start;
};

struct ReaderWriterLockSlim_TimeoutTracker__Boxed {
    struct ReaderWriterLockSlim_TimeoutTracker__Class *klass;
    MonitorData *monitor;
    struct ReaderWriterLockSlim_TimeoutTracker fields;
};

struct ReaderWriterLockSlim_TimeoutTracker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReaderWriterLockSlim_TimeoutTracker__StaticFields {
};

struct ReaderWriterLockSlim_TimeoutTracker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReaderWriterLockSlim_TimeoutTracker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReaderWriterLockSlim_TimeoutTracker__VTable vtable;
};

struct EventWaitHandle___VTable {
};

struct EventWaitHandle___StaticFields {
};

struct EventWaitHandle___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventWaitHandle___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventWaitHandle___VTable vtable;
};

enum class PipeDirection__Enum : int32_t {
    In = 0x00000001,
    Out = 0x00000002,
    InOut = 0x00000003,
};

struct PipeDirection__Enum__Boxed {
    struct PipeDirection__Enum__Class *klass;
    MonitorData *monitor;
    PipeDirection__Enum value;
    
};

enum class PipeTransmissionMode__Enum : int32_t {
    Byte = 0x00000000,
    Message = 0x00000001,
};

struct PipeTransmissionMode__Enum__Boxed {
    struct PipeTransmissionMode__Enum__Class *klass;
    MonitorData *monitor;
    PipeTransmissionMode__Enum value;
    
};

struct PipeStream__Fields {
    struct Stream__Fields _;
    PipeDirection__Enum direction;
    
    PipeTransmissionMode__Enum transmission_mode;
    
    PipeTransmissionMode__Enum read_trans_mode;
    
    int32_t buffer_size;
    struct SafePipeHandle *handle;
    struct Stream *stream;
    bool _IsAsync_k__BackingField;
    bool _IsConnected_k__BackingField;
    struct Func_4_Byte_Int32_Int32_Int32_ *read_delegate;
    struct Action_3_Byte_Int32_Int32_ *write_delegate;
};

struct PipeStream {
    struct PipeStream__Class *klass;
    MonitorData *monitor;
    struct PipeStream__Fields fields;
};

struct NamedPipeServerStream__Fields {
    struct PipeStream__Fields _;
    struct INamedPipeServer *impl;
};

struct NamedPipeServerStream {
    struct NamedPipeServerStream__Class *klass;
    MonitorData *monitor;
    struct NamedPipeServerStream__Fields fields;
};

struct Func_4_Byte_Int32_Int32_Int32___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_4_Byte_Int32_Int32_Int32_ {
    struct Func_4_Byte_Int32_Int32_Int32___Class *klass;
    MonitorData *monitor;
    struct Func_4_Byte_Int32_Int32_Int32___Fields fields;
};

struct Action_3_Byte_Int32_Int32___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_Byte_Int32_Int32_ {
    struct Action_3_Byte_Int32_Int32___Class *klass;
    MonitorData *monitor;
    struct Action_3_Byte_Int32_Int32___Fields fields;
};

struct INamedPipeServer {
    struct INamedPipeServer__Class *klass;
    MonitorData *monitor;
};

enum class PipeOptions__Enum : int32_t {
    None = 0x00000000,
    WriteThrough = -2147483648,
    Asynchronous = 0x40000000,
};

struct PipeOptions__Enum__Boxed {
    struct PipeOptions__Enum__Class *klass;
    MonitorData *monitor;
    PipeOptions__Enum value;
    
};

struct PipeDirection__Enum__VTable {
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

struct PipeDirection__Enum__StaticFields {
};

struct PipeDirection__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PipeDirection__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PipeDirection__Enum__VTable vtable;
};

struct PipeTransmissionMode__Enum__VTable {
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

struct PipeTransmissionMode__Enum__StaticFields {
};

struct PipeTransmissionMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PipeTransmissionMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PipeTransmissionMode__Enum__VTable vtable;
};

struct Func_4_Byte_Int32_Int32_Int32___VTable {
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

struct Func_4_Byte_Int32_Int32_Int32___StaticFields {
};

struct Func_4_Byte_Int32_Int32_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_4_Byte_Int32_Int32_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_4_Byte_Int32_Int32_Int32___VTable vtable;
};

struct Action_3_Byte_Int32_Int32___VTable {
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

struct Action_3_Byte_Int32_Int32___StaticFields {
};

struct Action_3_Byte_Int32_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_3_Byte_Int32_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_3_Byte_Int32_Int32___VTable vtable;
};

struct PipeStream__VTable {
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

struct PipeStream__StaticFields {
};

struct PipeStream__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PipeStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PipeStream__VTable vtable;
};

struct INamedPipeServer__VTable {
    VirtualInvokeData WaitForConnection;
};

struct INamedPipeServer__StaticFields {
};

struct INamedPipeServer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct INamedPipeServer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct INamedPipeServer__VTable vtable;
};

struct NamedPipeServerStream__VTable {
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

struct NamedPipeServerStream__StaticFields {
};

struct NamedPipeServerStream__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NamedPipeServerStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NamedPipeServerStream__VTable vtable;
};

struct PipeOptions__Enum__VTable {
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

struct PipeOptions__Enum__StaticFields {
};

struct PipeOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PipeOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PipeOptions__Enum__VTable vtable;
};

struct AesCryptoServiceProvider__Fields {
    struct Aes__Fields _;
};

struct AesCryptoServiceProvider {
    struct AesCryptoServiceProvider__Class *klass;
    MonitorData *monitor;
    struct AesCryptoServiceProvider__Fields fields;
};

struct AesCryptoServiceProvider__VTable {
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

struct AesCryptoServiceProvider__StaticFields {
};

struct AesCryptoServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AesCryptoServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AesCryptoServiceProvider__VTable vtable;
};

struct AesTransform__Fields {
    struct SymmetricTransform__Fields _;
    struct UInt32__Array *expandedKey;
    int32_t Nk;
    int32_t Nr;
};

struct AesTransform {
    struct AesTransform__Class *klass;
    MonitorData *monitor;
    struct AesTransform__Fields fields;
};

struct AesTransform__VTable {
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

struct AesTransform__StaticFields {
    struct UInt32__Array *Rcon;
    struct Byte__Array *SBox;
    struct Byte__Array *iSBox;
    struct UInt32__Array *T0;
    struct UInt32__Array *T1;
    struct UInt32__Array *T2;
    struct UInt32__Array *T3;
    struct UInt32__Array *iT0;
    struct UInt32__Array *iT1;
    struct UInt32__Array *iT2;
    struct UInt32__Array *iT3;
};

struct AesTransform__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AesTransform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AesTransform__VTable vtable;
};

struct IEnumerable_1_System_Int64_ {
    struct IEnumerable_1_System_Int64___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Int64___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Int64___StaticFields {
};

struct IEnumerable_1_System_Int64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Int64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Int64___VTable vtable;
};

struct IEnumerable_1_System_Double_ {
    struct IEnumerable_1_System_Double___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Double___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Double___StaticFields {
};

struct IEnumerable_1_System_Double___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Double___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Double___VTable vtable;
};

struct IEnumerable_1_System_Single_ {
    struct IEnumerable_1_System_Single___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Single___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Single___StaticFields {
};

struct IEnumerable_1_System_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Single___VTable vtable;
};

struct __declspec(align(8)) Enumerable_RangeIterator_d_115__Fields {
    int32_t __1__state;
    int32_t __2__current;
    int32_t __l__initialThreadId;
    int32_t start;
    int32_t __3__start;
    int32_t _i_5__1;
    int32_t count;
    int32_t __3__count;
};

struct Enumerable_RangeIterator_d_115 {
    struct Enumerable_RangeIterator_d_115__Class *klass;
    MonitorData *monitor;
    struct Enumerable_RangeIterator_d_115__Fields fields;
};

struct Enumerable_RangeIterator_d_115__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Int32__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct Enumerable_RangeIterator_d_115__StaticFields {
};

struct Enumerable_RangeIterator_d_115__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Enumerable_RangeIterator_d_115__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Enumerable_RangeIterator_d_115__VTable vtable;
};

struct Expression {
    struct Expression__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) BinaryExpression__Fields {
    struct Expression *_Right_k__BackingField;
    struct Expression *_Left_k__BackingField;
};

struct BinaryExpression {
    struct BinaryExpression__Class *klass;
    MonitorData *monitor;
    struct BinaryExpression__Fields fields;
};

struct __declspec(align(8)) CacheDict_2_System_Type_System_Reflection_MethodInfo___Fields {
    int32_t _mask;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array *_entries;
};

struct CacheDict_2_System_Type_System_Reflection_MethodInfo_ {
    struct CacheDict_2_System_Type_System_Reflection_MethodInfo___Class *klass;
    MonitorData *monitor;
    struct CacheDict_2_System_Type_System_Reflection_MethodInfo___Fields fields;
};

struct __declspec(align(8)) CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Fields {
    int32_t _hash;
    struct Type *_key;
    struct MethodInfo_1 *_value;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo_ {
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Class *klass;
    MonitorData *monitor;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Fields fields;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array {
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo_ *vector[32];
};

struct __declspec(align(8)) CacheDict_2_System_Type_System_Func_5___Fields {
    int32_t _mask;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5___Array *_entries;
};

struct CacheDict_2_System_Type_System_Func_5_ {
    struct CacheDict_2_System_Type_System_Func_5___Class *klass;
    MonitorData *monitor;
    struct CacheDict_2_System_Type_System_Func_5___Fields fields;
};

struct __declspec(align(8)) CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5___Fields {
    int32_t _hash;
    struct Type *_key;
    struct Func_5_System_Linq_Expressions_Expression_String_Boolean_System_Collections_ObjectModel_ReadOnlyCollection_1_System_Linq_Expressions_LambdaExpression_ *_value;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5_ {
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5___Class *klass;
    MonitorData *monitor;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5___Fields fields;
};

struct Func_5_System_Linq_Expressions_Expression_String_Boolean_System_Collections_ObjectModel_ReadOnlyCollection_1_System_Linq_Expressions_LambdaExpression___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_5_System_Linq_Expressions_Expression_String_Boolean_System_Collections_ObjectModel_ReadOnlyCollection_1_System_Linq_Expressions_LambdaExpression_ {
    struct Func_5_System_Linq_Expressions_Expression_String_Boolean_System_Collections_ObjectModel_ReadOnlyCollection_1_System_Linq_Expressions_LambdaExpression___Class *klass;
    MonitorData *monitor;
    struct Func_5_System_Linq_Expressions_Expression_String_Boolean_System_Collections_ObjectModel_ReadOnlyCollection_1_System_Linq_Expressions_LambdaExpression___Fields fields;
};

struct __declspec(align(8)) LambdaExpression__Fields {
    struct Expression *_body;
};

struct LambdaExpression {
    struct LambdaExpression__Class *klass;
    MonitorData *monitor;
    struct LambdaExpression__Fields fields;
};

enum class ExpressionType__Enum : int32_t {
    Add = 0x00000000,
    AddChecked = 0x00000001,
    And = 0x00000002,
    AndAlso = 0x00000003,
    ArrayLength = 0x00000004,
    ArrayIndex = 0x00000005,
    Call = 0x00000006,
    Coalesce = 0x00000007,
    Conditional = 0x00000008,
    Constant = 0x00000009,
    Convert = 0x0000000a,
    ConvertChecked = 0x0000000b,
    Divide = 0x0000000c,
    Equal = 0x0000000d,
    ExclusiveOr = 0x0000000e,
    GreaterThan = 0x0000000f,
    GreaterThanOrEqual = 0x00000010,
    Invoke = 0x00000011,
    Lambda = 0x00000012,
    LeftShift = 0x00000013,
    LessThan = 0x00000014,
    LessThanOrEqual = 0x00000015,
    ListInit = 0x00000016,
    MemberAccess = 0x00000017,
    MemberInit = 0x00000018,
    Modulo = 0x00000019,
    Multiply = 0x0000001a,
    MultiplyChecked = 0x0000001b,
    Negate = 0x0000001c,
    UnaryPlus = 0x0000001d,
    NegateChecked = 0x0000001e,
    New = 0x0000001f,
    NewArrayInit = 0x00000020,
    NewArrayBounds = 0x00000021,
    Not = 0x00000022,
    NotEqual = 0x00000023,
    Or = 0x00000024,
    OrElse = 0x00000025,
    Parameter = 0x00000026,
    Power = 0x00000027,
    Quote = 0x00000028,
    RightShift = 0x00000029,
    Subtract = 0x0000002a,
    SubtractChecked = 0x0000002b,
    TypeAs = 0x0000002c,
    TypeIs = 0x0000002d,
    Assign = 0x0000002e,
    Block = 0x0000002f,
    DebugInfo = 0x00000030,
    Decrement = 0x00000031,
    Dynamic = 0x00000032,
    Default = 0x00000033,
    Extension = 0x00000034,
    Goto = 0x00000035,
    Increment = 0x00000036,
    Index = 0x00000037,
    Label = 0x00000038,
    RuntimeVariables = 0x00000039,
    Loop = 0x0000003a,
    Switch = 0x0000003b,
    Throw = 0x0000003c,
    Try = 0x0000003d,
    Unbox = 0x0000003e,
    AddAssign = 0x0000003f,
    AndAssign = 0x00000040,
    DivideAssign = 0x00000041,
    ExclusiveOrAssign = 0x00000042,
    LeftShiftAssign = 0x00000043,
    ModuloAssign = 0x00000044,
    MultiplyAssign = 0x00000045,
    OrAssign = 0x00000046,
    PowerAssign = 0x00000047,
    RightShiftAssign = 0x00000048,
    SubtractAssign = 0x00000049,
    AddAssignChecked = 0x0000004a,
    MultiplyAssignChecked = 0x0000004b,
    SubtractAssignChecked = 0x0000004c,
    PreIncrementAssign = 0x0000004d,
    PreDecrementAssign = 0x0000004e,
    PostIncrementAssign = 0x0000004f,
    PostDecrementAssign = 0x00000050,
    TypeEqual = 0x00000051,
    OnesComplement = 0x00000052,
    IsTrue = 0x00000053,
    IsFalse = 0x00000054,
};

}
