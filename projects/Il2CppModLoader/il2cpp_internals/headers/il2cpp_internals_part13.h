namespace app {
struct MD4Managed__Fields {
  struct MD4__Fields _;
  struct UInt32__Array * state;
  struct Byte__Array * buffer;
  struct UInt32__Array * count;
  struct UInt32__Array * x;
  struct Byte__Array * digest;
};
struct MD4Managed {
  struct MD4Managed__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD4Managed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MD4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MD4__VTable vtable;
};

struct __declspec(align(8)) PKCS8_EncryptedPrivateKeyInfo__Fields {
  struct String * _algorithm;
  struct Byte__Array * _salt;
  int32_t _iterations;
  struct Byte__Array * _data;
};
struct PKCS8_EncryptedPrivateKeyInfo {
  struct PKCS8_EncryptedPrivateKeyInfo__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS8_EncryptedPrivateKeyInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS8_EncryptedPrivateKeyInfo__VTable vtable;
};

struct __declspec(align(8)) SymmetricTransform__Fields {
  struct SymmetricAlgorithm * algo;
  bool encrypt;
  int32_t BlockSizeByte;
  struct Byte__Array * temp;
  struct Byte__Array * temp2;
  struct Byte__Array * workBuff;
  struct Byte__Array * workout;
  enum PaddingMode__Enum padmode;
  int32_t FeedBackByte;
  bool m_disposed;
  bool lastBlock;
  struct RandomNumberGenerator * _rng;
};
struct SymmetricTransform {
  struct SymmetricTransform__Class *klass;
  struct MonitorData *monitor;
  struct SymmetricTransform__Fields fields;
};
struct DESTransform__Fields {
  struct SymmetricTransform__Fields _;
  struct Byte__Array * keySchedule;
  struct Byte__Array * byteBuff;
  struct UInt32__Array * dwordBuff;
};
struct DESTransform {
  struct DESTransform__Class *klass;
  struct MonitorData *monitor;
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
  struct UInt32__Array * spBoxes;
  struct Byte__Array * PC1;
  struct Byte__Array * leftRotTotal;
  struct Byte__Array * PC2;
  struct UInt32__Array * ipTab;
  struct UInt32__Array * fpTab;
};
struct DESTransform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DESTransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SymmetricTransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SymmetricTransform__VTable vtable;
};

enum BigInteger_Sign__Enum : int32_t {
  BigInteger_Sign__Enum_Negative = -1,
  BigInteger_Sign__Enum_Zero = 0,
  BigInteger_Sign__Enum_Positive = 1,
};
struct BigInteger_Sign__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BigInteger_Sign__Enum value;
};

struct __declspec(align(8)) BigInteger_ModulusRing__Fields {
  struct BigInteger * mod;
  struct BigInteger * constant;
};
struct BigInteger_ModulusRing {
  struct BigInteger_ModulusRing__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BigInteger_ModulusRing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BigInteger_ModulusRing__VTable vtable;
};

struct BigInteger__Array {
  struct BigInteger__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BigInteger * vector[32];
};

struct PrimalityTest__Fields {
  struct MulticastDelegate__Fields _;
};
struct PrimalityTest {
  struct PrimalityTest__Class *klass;
  struct MonitorData *monitor;
  struct PrimalityTest__Fields fields;
};
enum ConfidenceFactor__Enum : int32_t {
  ConfidenceFactor__Enum_ExtraLow = 0,
  ConfidenceFactor__Enum_Low = 1,
  ConfidenceFactor__Enum_Medium = 2,
  ConfidenceFactor__Enum_High = 3,
  ConfidenceFactor__Enum_ExtraHigh = 4,
  ConfidenceFactor__Enum_Provable = 5,
};
struct ConfidenceFactor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConfidenceFactor__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrimalityTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrimalityTest__VTable vtable;
};

struct PrimeGeneratorBase {
  struct PrimeGeneratorBase__Class *klass;
  struct MonitorData *monitor;
};
struct SequentialSearchPrimeGeneratorBase {
  struct SequentialSearchPrimeGeneratorBase__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SequentialSearchPrimeGeneratorBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
struct PrimeGeneratorBase__StaticFields {
};
struct PrimeGeneratorBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrimeGeneratorBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrimeGeneratorBase__VTable vtable;
};

struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback {
  struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class *klass;
  struct MonitorData *monitor;
  struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Fields fields;
};
struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR {
  int64_t Ptr;
  int32_t Size;
  int32_t Type;
};
struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Boxed {
  struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Class *klass;
  struct MonitorData *monitor;
  struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR fields;
};
struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__StaticFields {
};
struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR__VTable vtable;
};
struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__VTable {
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
struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__StaticFields {
};
struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback__VTable vtable;
};

struct EventDescriptor {
  int32_t m_traceloggingId;
  uint16_t m_id;
  uint8_t m_version;
  uint8_t m_channel;
  uint8_t m_level;
  uint8_t m_opcode;
  uint16_t m_task;
  int64_t m_keywords;
};
struct EventDescriptor__Boxed {
  struct EventDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct EventDescriptor fields;
};
struct EventProvider_EventData {
  uint64_t Ptr;
  uint32_t Size;
  uint32_t Reserved;
};
struct EventProvider_EventData__Boxed {
  struct EventProvider_EventData__Class *klass;
  struct MonitorData *monitor;
  struct EventProvider_EventData fields;
};
struct EventDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventDescriptor__StaticFields {
};
struct EventDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventDescriptor__VTable vtable;
};
struct EventProvider_EventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventProvider_EventData__StaticFields {
};
struct EventProvider_EventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventProvider_EventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventProvider_EventData__VTable vtable;
};

enum UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum : uint32_t {
  UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum_EVENT_ACTIVITY_CTRL_GET_ID = 1,
  UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum_EVENT_ACTIVITY_CTRL_SET_ID = 2,
  UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum_EVENT_ACTIVITY_CTRL_CREATE_ID = 3,
  UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum_EVENT_ACTIVITY_CTRL_GET_SET_ID = 4,
  UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum_EVENT_ACTIVITY_CTRL_CREATE_SET_ID = 5,
};
struct UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum value;
};

enum UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum : int32_t {
  UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum_BinaryTrackInfo = 0,
  UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum_SetEnableAllKeywords = 1,
  UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum_SetTraits = 2,
};
struct UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum value;
};

enum UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum : int32_t {
  UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum_TraceGuidQueryList = 0,
  UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum_TraceGuidQueryInfo = 1,
  UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum_TraceGuidQueryProcess = 2,
  UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum_TraceStackTracingInfo = 3,
  UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum_MaxTraceSetInfoClass = 4,
};
struct UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum value;
};

struct RegistryKey__Fields {
  struct MarshalByRefObject__Fields _;
  struct Object * handle;
  struct SafeRegistryHandle * safe_handle;
  struct Object * hive;
  struct String * qname;
  bool isRemoteRoot;
  bool isWritable;
};
struct RegistryKey {
  struct RegistryKey__Class *klass;
  struct MonitorData *monitor;
  struct RegistryKey__Fields fields;
};
struct SafeRegistryHandle__Fields {
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};
struct SafeRegistryHandle {
  struct SafeRegistryHandle__Class *klass;
  struct MonitorData *monitor;
  struct SafeRegistryHandle__Fields fields;
};
struct IRegistryApi {
  struct IRegistryApi__Class *klass;
  struct MonitorData *monitor;
};
enum RegistryHive__Enum : int32_t {
  RegistryHive__Enum_ClassesRoot = -2147483648,
  RegistryHive__Enum_CurrentConfig = -2147483643,
  RegistryHive__Enum_CurrentUser = -2147483647,
  RegistryHive__Enum_DynData = -2147483642,
  RegistryHive__Enum_LocalMachine = -2147483646,
  RegistryHive__Enum_PerformanceData = -2147483644,
  RegistryHive__Enum_Users = -2147483645,
};
struct RegistryHive__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RegistryHive__Enum value;
};
struct SafeRegistryHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_IsInvalid;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ReleaseHandle;
};
struct SafeRegistryHandle__StaticFields {
};
struct SafeRegistryHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SafeRegistryHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SafeRegistryHandle__VTable vtable;
};
struct IRegistryApi__VTable {
  VirtualInvokeData OpenSubKey;
  VirtualInvokeData Flush;
  VirtualInvokeData Close;
  VirtualInvokeData GetValue;
  VirtualInvokeData GetSubKeyNames;
  VirtualInvokeData ToString;
  VirtualInvokeData GetHandle;
};
struct IRegistryApi__StaticFields {
};
struct IRegistryApi__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRegistryApi__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRegistryApi__VTable vtable;
};
struct RegistryKey__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
};
struct RegistryKey__StaticFields {
  struct IRegistryApi * RegistryApi;
};
struct RegistryKey__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegistryKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegistryKey__VTable vtable;
};

struct IOException__Fields {
  struct SystemException__Fields _;
  struct String * _maybeFullPath;
};
struct IOException {
  struct IOException__Class *klass;
  struct MonitorData *monitor;
  struct IOException__Fields fields;
};
struct IOException__VTable {
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
struct IOException__StaticFields {
};
struct IOException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IOException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IOException__VTable vtable;
};

struct __declspec(align(8)) ExpandString__Fields {
  struct String * value;
};
struct ExpandString {
  struct ExpandString__Class *klass;
  struct MonitorData *monitor;
  struct ExpandString__Fields fields;
};
struct ExpandString__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExpandString__StaticFields {
};
struct ExpandString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExpandString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExpandString__VTable vtable;
};

struct RegistryKeyComparer {
  struct RegistryKeyComparer__Class *klass;
  struct MonitorData *monitor;
};
struct RegistryKeyComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
};
struct RegistryKeyComparer__StaticFields {
};
struct RegistryKeyComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegistryKeyComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegistryKeyComparer__VTable vtable;
};

struct __declspec(align(8)) KeyHandler__Fields {
  struct String * Dir;
  struct String * ActualDir;
  bool IsVolatile;
  struct Hashtable * values;
  struct String * file;
  bool dirty;
};
struct KeyHandler {
  struct KeyHandler__Class *klass;
  struct MonitorData *monitor;
  struct KeyHandler__Fields fields;
};
struct KeyHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyHandler__StaticFields {
  struct Hashtable * key_to_handler;
  struct Hashtable * dir_to_handler;
  struct String * user_store;
  struct String * machine_store;
};
struct KeyHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyHandler__VTable vtable;
};

enum RegistryValueOptions__Enum : int32_t {
  RegistryValueOptions__Enum_None = 0,
  RegistryValueOptions__Enum_DoNotExpandEnvironmentNames = 1,
};
struct RegistryValueOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RegistryValueOptions__Enum value;
};

struct UnixRegistryApi {
  struct UnixRegistryApi__Class *klass;
  struct MonitorData *monitor;
};
struct UnixRegistryApi__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OpenSubKey;
  VirtualInvokeData Flush;
  VirtualInvokeData Close;
  VirtualInvokeData GetValue;
  VirtualInvokeData GetSubKeyNames;
  VirtualInvokeData ToString_1;
  VirtualInvokeData GetHandle;
};
struct UnixRegistryApi__StaticFields {
};
struct UnixRegistryApi__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnixRegistryApi__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnixRegistryApi__VTable vtable;
};

struct Int64__Array {
  struct Int64__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  int64_t vector[32];
};

enum RegistryValueKind__Enum : int32_t {
  RegistryValueKind__Enum_Unknown = 0,
  RegistryValueKind__Enum_String = 1,
  RegistryValueKind__Enum_ExpandString = 2,
  RegistryValueKind__Enum_Binary = 3,
  RegistryValueKind__Enum_DWord = 4,
  RegistryValueKind__Enum_MultiString = 7,
  RegistryValueKind__Enum_QWord = 11,
  RegistryValueKind__Enum_None = -1,
};
struct RegistryValueKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RegistryValueKind__Enum value;
};

struct __declspec(align(8)) Win32RegistryApi__Fields {
  int32_t NativeBytesPerCharacter;
};
struct Win32RegistryApi {
  struct Win32RegistryApi__Class *klass;
  struct MonitorData *monitor;
  struct Win32RegistryApi__Fields fields;
};
struct Win32RegistryApi__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OpenSubKey;
  VirtualInvokeData Flush;
  VirtualInvokeData Close;
  VirtualInvokeData GetValue;
  VirtualInvokeData GetSubKeyNames;
  VirtualInvokeData ToString_1;
  VirtualInvokeData GetHandle;
  VirtualInvokeData SubKeyCount;
};
struct Win32RegistryApi__StaticFields {
};
struct Win32RegistryApi__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32RegistryApi__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32RegistryApi__VTable vtable;
};

struct __declspec(align(8)) Win32Native_WIN32_FIND_DATA__Fields {
  int32_t dwFileAttributes;
  struct String * cFileName;
};
struct Win32Native_WIN32_FIND_DATA {
  struct Win32Native_WIN32_FIND_DATA__Class *klass;
  struct MonitorData *monitor;
  struct Win32Native_WIN32_FIND_DATA__Fields fields;
};
struct Win32Native_WIN32_FIND_DATA__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Win32Native_WIN32_FIND_DATA__StaticFields {
};
struct Win32Native_WIN32_FIND_DATA__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Win32Native_WIN32_FIND_DATA__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Win32Native_WIN32_FIND_DATA__VTable vtable;
};

struct SafeFindHandle__Fields {
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};
struct SafeFindHandle {
  struct SafeFindHandle__Class *klass;
  struct MonitorData *monitor;
  struct SafeFindHandle__Fields fields;
};
struct SafeFindHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_IsInvalid;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ReleaseHandle;
};
struct SafeFindHandle__StaticFields {
};
struct SafeFindHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SafeFindHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SafeFindHandle__VTable vtable;
};

enum ExceptionArgument__Enum : int32_t {
  ExceptionArgument__Enum_obj = 0,
  ExceptionArgument__Enum_dictionary = 1,
  ExceptionArgument__Enum_dictionaryCreationThreshold = 2,
  ExceptionArgument__Enum_array = 3,
  ExceptionArgument__Enum_info = 4,
  ExceptionArgument__Enum_key = 5,
  ExceptionArgument__Enum_collection = 6,
  ExceptionArgument__Enum_list = 7,
  ExceptionArgument__Enum_match = 8,
  ExceptionArgument__Enum_converter = 9,
  ExceptionArgument__Enum_queue = 10,
  ExceptionArgument__Enum_stack = 11,
  ExceptionArgument__Enum_capacity = 12,
  ExceptionArgument__Enum_index = 13,
  ExceptionArgument__Enum_startIndex = 14,
  ExceptionArgument__Enum_value = 15,
  ExceptionArgument__Enum_count = 16,
  ExceptionArgument__Enum_arrayIndex = 17,
  ExceptionArgument__Enum_name = 18,
  ExceptionArgument__Enum_mode = 19,
  ExceptionArgument__Enum_item = 20,
  ExceptionArgument__Enum_options = 21,
  ExceptionArgument__Enum_view = 22,
  ExceptionArgument__Enum_sourceBytesToCopy = 23,
  ExceptionArgument__Enum_start = 24,
  ExceptionArgument__Enum_pointer = 25,
  ExceptionArgument__Enum_ownedMemory = 26,
  ExceptionArgument__Enum_text = 27,
};
struct ExceptionArgument__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExceptionArgument__Enum value;
};

enum ExceptionResource__Enum : int32_t {
  ExceptionResource__Enum_Argument_ImplementIComparable = 0,
  ExceptionResource__Enum_Argument_InvalidType = 1,
  ExceptionResource__Enum_Argument_InvalidArgumentForComparison = 2,
  ExceptionResource__Enum_Argument_InvalidRegistryKeyPermissionCheck = 3,
  ExceptionResource__Enum_ArgumentOutOfRange_NeedNonNegNum = 4,
  ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall = 5,
  ExceptionResource__Enum_Arg_NonZeroLowerBound = 6,
  ExceptionResource__Enum_Arg_RankMultiDimNotSupported = 7,
  ExceptionResource__Enum_Arg_RegKeyDelHive = 8,
  ExceptionResource__Enum_Arg_RegKeyStrLenBug = 9,
  ExceptionResource__Enum_Arg_RegSetStrArrNull = 10,
  ExceptionResource__Enum_Arg_RegSetMismatchedKind = 11,
  ExceptionResource__Enum_Arg_RegSubKeyAbsent = 12,
  ExceptionResource__Enum_Arg_RegSubKeyValueAbsent = 13,
  ExceptionResource__Enum_Argument_AddingDuplicate = 14,
  ExceptionResource__Enum_Serialization_InvalidOnDeser = 15,
  ExceptionResource__Enum_Serialization_MissingKeys = 16,
  ExceptionResource__Enum_Serialization_NullKey = 17,
  ExceptionResource__Enum_Argument_InvalidArrayType = 18,
  ExceptionResource__Enum_NotSupported_KeyCollectionSet = 19,
  ExceptionResource__Enum_NotSupported_ValueCollectionSet = 20,
  ExceptionResource__Enum_ArgumentOutOfRange_SmallCapacity = 21,
  ExceptionResource__Enum_ArgumentOutOfRange_Index = 22,
  ExceptionResource__Enum_Argument_InvalidOffLen = 23,
  ExceptionResource__Enum_Argument_ItemNotExist = 24,
  ExceptionResource__Enum_ArgumentOutOfRange_Count = 25,
  ExceptionResource__Enum_ArgumentOutOfRange_InvalidThreshold = 26,
  ExceptionResource__Enum_ArgumentOutOfRange_ListInsert = 27,
  ExceptionResource__Enum_NotSupported_ReadOnlyCollection = 28,
  ExceptionResource__Enum_InvalidOperation_CannotRemoveFromStackOrQueue = 29,
  ExceptionResource__Enum_InvalidOperation_EmptyQueue = 30,
  ExceptionResource__Enum_InvalidOperation_EnumOpCantHappen = 31,
  ExceptionResource__Enum_InvalidOperation_EnumFailedVersion = 32,
  ExceptionResource__Enum_InvalidOperation_EmptyStack = 33,
  ExceptionResource__Enum_ArgumentOutOfRange_BiggerThanCollection = 34,
  ExceptionResource__Enum_InvalidOperation_EnumNotStarted = 35,
  ExceptionResource__Enum_InvalidOperation_EnumEnded = 36,
  ExceptionResource__Enum_NotSupported_SortedListNestedWrite = 37,
  ExceptionResource__Enum_InvalidOperation_NoValue = 38,
  ExceptionResource__Enum_InvalidOperation_RegRemoveSubKey = 39,
  ExceptionResource__Enum_Security_RegistryPermission = 40,
  ExceptionResource__Enum_UnauthorizedAccess_RegistryNoWrite = 41,
  ExceptionResource__Enum_ObjectDisposed_RegKeyClosed = 42,
  ExceptionResource__Enum_NotSupported_InComparableType = 43,
  ExceptionResource__Enum_Argument_InvalidRegistryOptionsCheck = 44,
  ExceptionResource__Enum_Argument_InvalidRegistryViewCheck = 45,
};
struct ExceptionResource__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExceptionResource__Enum value;
};

struct ValueTuple {
};
struct ValueTuple__Boxed {
  struct ValueTuple__Class *klass;
  struct MonitorData *monitor;
  struct ValueTuple fields;
};
struct ValueTuple__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
  VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
  VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
  VirtualInvokeData System_IComparable_CompareTo;
  VirtualInvokeData CompareTo;
};}