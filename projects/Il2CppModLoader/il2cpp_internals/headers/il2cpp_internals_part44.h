namespace app {
struct ConstructionResponse__StaticFields {
};
struct ConstructionResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstructionResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstructionResponse__VTable vtable;
};

struct EnvoyTerminatorSink {
  struct EnvoyTerminatorSink__Class *klass;
  struct MonitorData *monitor;
};
struct EnvoyTerminatorSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct EnvoyTerminatorSink__StaticFields {
  struct EnvoyTerminatorSink * Instance;
};
struct EnvoyTerminatorSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnvoyTerminatorSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnvoyTerminatorSink__VTable vtable;
};

struct __declspec(align(8)) ErrorMessage__Fields {
  struct String * _uri;
};
struct ErrorMessage {
  struct ErrorMessage__Class *klass;
  struct MonitorData *monitor;
  struct ErrorMessage__Fields fields;
};
struct ErrorMessage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ArgCount;
  VirtualInvokeData get_Args;
  VirtualInvokeData get_LogicalCallContext;
  VirtualInvokeData get_MethodBase;
  VirtualInvokeData get_MethodName;
  VirtualInvokeData get_MethodSignature;
  VirtualInvokeData get_TypeName;
  VirtualInvokeData get_Uri;
  VirtualInvokeData GetArg;
  VirtualInvokeData get_Properties;
  VirtualInvokeData get_Properties_1;
};
struct ErrorMessage__StaticFields {
};
struct ErrorMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ErrorMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ErrorMessage__VTable vtable;
};

struct __declspec(align(8)) MessageDictionary_DictionaryEnumerator__Fields {
  struct MessageDictionary * _methodDictionary;
  struct IDictionaryEnumerator * _hashtableEnum;
  int32_t _posMethod;
};
struct MessageDictionary_DictionaryEnumerator {
  struct MessageDictionary_DictionaryEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct MessageDictionary_DictionaryEnumerator__Fields fields;
};
struct MessageDictionary_DictionaryEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Key;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Entry;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct MessageDictionary_DictionaryEnumerator__StaticFields {
};
struct MessageDictionary_DictionaryEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MessageDictionary_DictionaryEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MessageDictionary_DictionaryEnumerator__VTable vtable;
};

struct RemotingSurrogate {
  struct RemotingSurrogate__Class *klass;
  struct MonitorData *monitor;
};
struct RemotingSurrogate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData SetObjectData;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData SetObjectData_1;
};
struct RemotingSurrogate__StaticFields {
};
struct RemotingSurrogate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemotingSurrogate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemotingSurrogate__VTable vtable;
};

struct ObjRefSurrogate {
  struct ObjRefSurrogate__Class *klass;
  struct MonitorData *monitor;
};
struct ObjRefSurrogate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData SetObjectData;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData SetObjectData_1;
};
struct ObjRefSurrogate__StaticFields {
};
struct ObjRefSurrogate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjRefSurrogate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjRefSurrogate__VTable vtable;
};

struct __declspec(align(8)) RemotingSurrogateSelector__Fields {
  struct ISurrogateSelector * _next;
};
struct RemotingSurrogateSelector {
  struct RemotingSurrogateSelector__Class *klass;
  struct MonitorData *monitor;
  struct RemotingSurrogateSelector__Fields fields;
};
struct RemotingSurrogateSelector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSurrogate;
  VirtualInvokeData GetSurrogate_1;
};
struct RemotingSurrogateSelector__StaticFields {
  struct Type * s_cachedTypeObjRef;
  struct ObjRefSurrogate * _objRefSurrogate;
  struct RemotingSurrogate * _objRemotingSurrogate;
};
struct RemotingSurrogateSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemotingSurrogateSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemotingSurrogateSelector__VTable vtable;
};

struct ServerContextTerminatorSink {
  struct ServerContextTerminatorSink__Class *klass;
  struct MonitorData *monitor;
};
struct ServerContextTerminatorSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct ServerContextTerminatorSink__StaticFields {
};
struct ServerContextTerminatorSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerContextTerminatorSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerContextTerminatorSink__VTable vtable;
};

struct __declspec(align(8)) ServerObjectTerminatorSink__Fields {
  struct IMessageSink * _nextSink;
};
struct ServerObjectTerminatorSink {
  struct ServerObjectTerminatorSink__Class *klass;
  struct MonitorData *monitor;
  struct ServerObjectTerminatorSink__Fields fields;
};
struct ServerObjectTerminatorSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct ServerObjectTerminatorSink__StaticFields {
};
struct ServerObjectTerminatorSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerObjectTerminatorSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerObjectTerminatorSink__VTable vtable;
};

struct __declspec(align(8)) ServerObjectReplySink__Fields {
  struct IMessageSink * _replySink;
  struct ServerIdentity * _identity;
};
struct ServerObjectReplySink {
  struct ServerObjectReplySink__Class *klass;
  struct MonitorData *monitor;
  struct ServerObjectReplySink__Fields fields;
};
struct ServerObjectReplySink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct ServerObjectReplySink__StaticFields {
};
struct ServerObjectReplySink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerObjectReplySink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerObjectReplySink__VTable vtable;
};

struct __declspec(align(8)) StackBuilderSink__Fields {
  struct MarshalByRefObject * _target;
  struct RealProxy * _rp;
};
struct StackBuilderSink {
  struct StackBuilderSink__Class *klass;
  struct MonitorData *monitor;
  struct StackBuilderSink__Fields fields;
};
struct StackBuilderSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct StackBuilderSink__StaticFields {
};
struct StackBuilderSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StackBuilderSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StackBuilderSink__VTable vtable;
};

struct HandleProcessCorruptedStateExceptionsAttribute {
  struct HandleProcessCorruptedStateExceptionsAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct HandleProcessCorruptedStateExceptionsAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct HandleProcessCorruptedStateExceptionsAttribute__StaticFields {
};
struct HandleProcessCorruptedStateExceptionsAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HandleProcessCorruptedStateExceptionsAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HandleProcessCorruptedStateExceptionsAttribute__VTable vtable;
};

enum Consistency__Enum : int32_t {
  Consistency__Enum_MayCorruptProcess = 0,
  Consistency__Enum_MayCorruptAppDomain = 1,
  Consistency__Enum_MayCorruptInstance = 2,
  Consistency__Enum_WillNotCorruptState = 3,
};
struct Consistency__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Consistency__Enum value;
};
enum Cer__Enum : int32_t {
  Cer__Enum_None = 0,
  Cer__Enum_MayFail = 1,
  Cer__Enum_Success = 2,
};
struct Cer__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Cer__Enum value;
};
struct __declspec(align(8)) ReliabilityContractAttribute__Fields {
  enum Consistency__Enum _consistency;
  enum Cer__Enum _cer;
};
struct ReliabilityContractAttribute {
  struct ReliabilityContractAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ReliabilityContractAttribute__Fields fields;
};
struct ReliabilityContractAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ReliabilityContractAttribute__StaticFields {
};
struct ReliabilityContractAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReliabilityContractAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReliabilityContractAttribute__VTable vtable;
};

struct IsByRefLikeAttribute {
  struct IsByRefLikeAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct IsByRefLikeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct IsByRefLikeAttribute__StaticFields {
};
struct IsByRefLikeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsByRefLikeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsByRefLikeAttribute__VTable vtable;
};

struct IsReadOnlyAttribute {
  struct IsReadOnlyAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct IsReadOnlyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct IsReadOnlyAttribute__StaticFields {
};
struct IsReadOnlyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsReadOnlyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsReadOnlyAttribute__VTable vtable;
};

struct __declspec(align(8)) TupleElementNamesAttribute__Fields {
  struct String__Array * _transformNames;
};
struct TupleElementNamesAttribute {
  struct TupleElementNamesAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TupleElementNamesAttribute__Fields fields;
};
struct TupleElementNamesAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TupleElementNamesAttribute__StaticFields {
};
struct TupleElementNamesAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TupleElementNamesAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TupleElementNamesAttribute__VTable vtable;
};

struct AsyncVoidMethodBuilder {
  struct SynchronizationContext * m_synchronizationContext;
  struct AsyncMethodBuilderCore m_coreState;
  struct Task * m_task;
};
struct AsyncVoidMethodBuilder__Boxed {
  struct AsyncVoidMethodBuilder__Class *klass;
  struct MonitorData *monitor;
  struct AsyncVoidMethodBuilder fields;
};
struct AsyncVoidMethodBuilder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncVoidMethodBuilder__StaticFields {
};
struct AsyncVoidMethodBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncVoidMethodBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncVoidMethodBuilder__VTable vtable;
};

struct Task_1_System_Int32___Array {
  struct Task_1_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Task_1_System_Int32_ * vector[32];
};

struct __declspec(align(8)) AsyncMethodBuilderCore_MoveNextRunner__Fields {
  struct ExecutionContext * m_context;
  struct IAsyncStateMachine * m_stateMachine;
};
struct AsyncMethodBuilderCore_MoveNextRunner {
  struct AsyncMethodBuilderCore_MoveNextRunner__Class *klass;
  struct MonitorData *monitor;
  struct AsyncMethodBuilderCore_MoveNextRunner__Fields fields;
};
struct AsyncMethodBuilderCore_MoveNextRunner__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncMethodBuilderCore_MoveNextRunner__StaticFields {
  struct ContextCallback * s_invokeMoveNext;
};
struct AsyncMethodBuilderCore_MoveNextRunner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncMethodBuilderCore_MoveNextRunner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncMethodBuilderCore_MoveNextRunner__VTable vtable;
};

struct __declspec(align(8)) AsyncMethodBuilderCore_ContinuationWrapper__Fields {
  struct Action * m_continuation;
  struct Action * m_invokeAction;
  struct Task * m_innerTask;
};
struct AsyncMethodBuilderCore_ContinuationWrapper {
  struct AsyncMethodBuilderCore_ContinuationWrapper__Class *klass;
  struct MonitorData *monitor;
  struct AsyncMethodBuilderCore_ContinuationWrapper__Fields fields;
};
struct AsyncMethodBuilderCore_ContinuationWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncMethodBuilderCore_ContinuationWrapper__StaticFields {
};
struct AsyncMethodBuilderCore_ContinuationWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncMethodBuilderCore_ContinuationWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncMethodBuilderCore_ContinuationWrapper__VTable vtable;
};

struct __declspec(align(8)) AsyncMethodBuilderCore_c_DisplayClass4_0__Fields {
  struct Task * innerTask;
  struct Action * continuation;
};
struct AsyncMethodBuilderCore_c_DisplayClass4_0 {
  struct AsyncMethodBuilderCore_c_DisplayClass4_0__Class *klass;
  struct MonitorData *monitor;
  struct AsyncMethodBuilderCore_c_DisplayClass4_0__Fields fields;
};
struct AsyncMethodBuilderCore_c_DisplayClass4_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncMethodBuilderCore_c_DisplayClass4_0__StaticFields {
};
struct AsyncMethodBuilderCore_c_DisplayClass4_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncMethodBuilderCore_c_DisplayClass4_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncMethodBuilderCore_c_DisplayClass4_0__VTable vtable;
};

struct AsyncMethodBuilderCore_c {
  struct AsyncMethodBuilderCore_c__Class *klass;
  struct MonitorData *monitor;
};
struct AsyncMethodBuilderCore_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncMethodBuilderCore_c__StaticFields {
  struct AsyncMethodBuilderCore_c * __9;
  struct SendOrPostCallback * __9__6_0;
  struct WaitCallback * __9__6_1;
};
struct AsyncMethodBuilderCore_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncMethodBuilderCore_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncMethodBuilderCore_c__VTable vtable;
};

struct __declspec(align(8)) StateMachineAttribute__Fields {
  struct Type * _StateMachineType_k__BackingField;
};
struct StateMachineAttribute {
  struct StateMachineAttribute__Class *klass;
  struct MonitorData *monitor;
  struct StateMachineAttribute__Fields fields;
};
struct AsyncStateMachineAttribute__Fields {
  struct StateMachineAttribute__Fields _;
};
struct AsyncStateMachineAttribute {
  struct AsyncStateMachineAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AsyncStateMachineAttribute__Fields fields;
};
struct StateMachineAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct StateMachineAttribute__StaticFields {
};
struct StateMachineAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateMachineAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateMachineAttribute__VTable vtable;
};
struct AsyncStateMachineAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AsyncStateMachineAttribute__StaticFields {
};
struct AsyncStateMachineAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncStateMachineAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncStateMachineAttribute__VTable vtable;
};

struct CallerMemberNameAttribute {
  struct CallerMemberNameAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct CallerMemberNameAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CallerMemberNameAttribute__StaticFields {
};
struct CallerMemberNameAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CallerMemberNameAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CallerMemberNameAttribute__VTable vtable;
};

struct IteratorStateMachineAttribute__Fields {
  struct StateMachineAttribute__Fields _;
};
struct IteratorStateMachineAttribute {
  struct IteratorStateMachineAttribute__Class *klass;
  struct MonitorData *monitor;
  struct IteratorStateMachineAttribute__Fields fields;
};
struct IteratorStateMachineAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct IteratorStateMachineAttribute__StaticFields {
};
struct IteratorStateMachineAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IteratorStateMachineAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IteratorStateMachineAttribute__VTable vtable;
};

struct __declspec(align(8)) RuntimeCompatibilityAttribute__Fields {
  bool m_wrapNonExceptionThrows;
};
struct RuntimeCompatibilityAttribute {
  struct RuntimeCompatibilityAttribute__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeCompatibilityAttribute__Fields fields;
};
struct RuntimeCompatibilityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct RuntimeCompatibilityAttribute__StaticFields {
};
struct RuntimeCompatibilityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeCompatibilityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeCompatibilityAttribute__VTable vtable;
};

struct RuntimeWrappedException__Fields {
  struct Exception__Fields _;
  struct Object * m_wrappedException;
};
struct RuntimeWrappedException {
  struct RuntimeWrappedException__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeWrappedException__Fields fields;
};
struct RuntimeWrappedException__VTable {
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
struct RuntimeWrappedException__StaticFields {
};
struct RuntimeWrappedException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeWrappedException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeWrappedException__VTable vtable;
};

struct __declspec(align(8)) TypeForwardedFromAttribute__Fields {
  struct String * assemblyFullName;
};
struct TypeForwardedFromAttribute {
  struct TypeForwardedFromAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TypeForwardedFromAttribute__Fields fields;
};
struct TypeForwardedFromAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TypeForwardedFromAttribute__StaticFields {
};
struct TypeForwardedFromAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeForwardedFromAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeForwardedFromAttribute__VTable vtable;
};

struct YieldAwaitable_YieldAwaiter {
};
struct YieldAwaitable_YieldAwaiter__Boxed {
  struct YieldAwaitable_YieldAwaiter__Class *klass;
  struct MonitorData *monitor;
  struct YieldAwaitable_YieldAwaiter fields;
};
struct YieldAwaitable_YieldAwaiter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct YieldAwaitable_YieldAwaiter__StaticFields {
  struct WaitCallback * s_waitCallbackRunAction;
  struct SendOrPostCallback * s_sendOrPostCallbackRunAction;
};
struct YieldAwaitable_YieldAwaiter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YieldAwaitable_YieldAwaiter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YieldAwaitable_YieldAwaiter__VTable vtable;
};

enum LoadHint__Enum : int32_t {
  LoadHint__Enum_Default = 0,
  LoadHint__Enum_Always = 1,
  LoadHint__Enum_Sometimes = 2,
};
struct LoadHint__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoadHint__Enum value;
};
struct __declspec(align(8)) DefaultDependencyAttribute__Fields {
  enum LoadHint__Enum loadHint;
};
struct DefaultDependencyAttribute {
  struct DefaultDependencyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DefaultDependencyAttribute__Fields fields;
};
struct DefaultDependencyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DefaultDependencyAttribute__StaticFields {
};
struct DefaultDependencyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultDependencyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultDependencyAttribute__VTable vtable;
};

struct __declspec(align(8)) CompilationRelaxationsAttribute__Fields {
  int32_t m_relaxations;
};
struct CompilationRelaxationsAttribute {
  struct CompilationRelaxationsAttribute__Class *klass;
  struct MonitorData *monitor;
  struct CompilationRelaxationsAttribute__Fields fields;
};
struct CompilationRelaxationsAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CompilationRelaxationsAttribute__StaticFields {
};
struct CompilationRelaxationsAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompilationRelaxationsAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompilationRelaxationsAttribute__VTable vtable;
};

enum CompilationRelaxations__Enum : int32_t {
  CompilationRelaxations__Enum_NoStringInterning = 8,
};
struct CompilationRelaxations__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CompilationRelaxations__Enum value;
};

struct CompilerGeneratedAttribute {
  struct CompilerGeneratedAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct CompilerGeneratedAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CompilerGeneratedAttribute__StaticFields {
};
struct CompilerGeneratedAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompilerGeneratedAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompilerGeneratedAttribute__VTable vtable;
};

struct CustomConstantAttribute {
  struct CustomConstantAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DateTimeConstantAttribute__Fields {
  struct DateTime date;
};
struct DateTimeConstantAttribute {
  struct DateTimeConstantAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeConstantAttribute__Fields fields;
};
struct DateTimeConstantAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_Value;
};
struct DateTimeConstantAttribute__StaticFields {
};
struct DateTimeConstantAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeConstantAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeConstantAttribute__VTable vtable;
};
struct CustomConstantAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData __unknown;
};
struct CustomConstantAttribute__StaticFields {
};
struct CustomConstantAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomConstantAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomConstantAttribute__VTable vtable;
};

struct __declspec(align(8)) DecimalConstantAttribute__Fields {
  struct Decimal dec;
};
struct DecimalConstantAttribute {
  struct DecimalConstantAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DecimalConstantAttribute__Fields fields;
};
struct DecimalConstantAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DecimalConstantAttribute__StaticFields {
};
struct DecimalConstantAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecimalConstantAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecimalConstantAttribute__VTable vtable;
};

struct ExtensionAttribute {
  struct ExtensionAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ExtensionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExtensionAttribute__StaticFields {
};
struct ExtensionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExtensionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExtensionAttribute__VTable vtable;
};}