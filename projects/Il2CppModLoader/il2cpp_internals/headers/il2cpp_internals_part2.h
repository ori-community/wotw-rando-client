namespace app {
struct Task_1_System_Int32_ {
  struct Task_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_Int32___Fields fields;
};
struct Stream_ReadWriteTask__Fields {
  struct Task_1_System_Int32___Fields _;
  bool _isRead;
  struct Stream * _stream;
  struct Byte__Array * _buffer;
  int32_t _offset;
  int32_t _count;
  struct AsyncCallback * _callback;
  struct ExecutionContext * _context;
};
struct Stream_ReadWriteTask {
  struct Stream_ReadWriteTask__Class *klass;
  struct MonitorData *monitor;
  struct Stream_ReadWriteTask__Fields fields;
};
struct __declspec(align(8)) StackGuard__Fields {
  int32_t m_inliningDepth;
};
struct StackGuard {
  struct StackGuard__Class *klass;
  struct MonitorData *monitor;
  struct StackGuard__Fields fields;
};
struct CancellationToken {
  struct CancellationTokenSource * m_source;
};
struct CancellationToken__Boxed {
  struct CancellationToken__Class *klass;
  struct MonitorData *monitor;
  struct CancellationToken fields;
};
enum TaskCreationOptions__Enum : int32_t {
  TaskCreationOptions__Enum_None = 0,
  TaskCreationOptions__Enum_PreferFairness = 1,
  TaskCreationOptions__Enum_LongRunning = 2,
  TaskCreationOptions__Enum_AttachedToParent = 4,
  TaskCreationOptions__Enum_DenyChildAttach = 8,
  TaskCreationOptions__Enum_HideScheduler = 16,
  TaskCreationOptions__Enum_RunContinuationsAsynchronously = 64,
};
struct TaskCreationOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TaskCreationOptions__Enum value;
};
enum TaskContinuationOptions__Enum : int32_t {
  TaskContinuationOptions__Enum_None = 0,
  TaskContinuationOptions__Enum_PreferFairness = 1,
  TaskContinuationOptions__Enum_LongRunning = 2,
  TaskContinuationOptions__Enum_AttachedToParent = 4,
  TaskContinuationOptions__Enum_DenyChildAttach = 8,
  TaskContinuationOptions__Enum_HideScheduler = 16,
  TaskContinuationOptions__Enum_LazyCancellation = 32,
  TaskContinuationOptions__Enum_RunContinuationsAsynchronously = 64,
  TaskContinuationOptions__Enum_NotOnRanToCompletion = 65536,
  TaskContinuationOptions__Enum_NotOnFaulted = 131072,
  TaskContinuationOptions__Enum_NotOnCanceled = 262144,
  TaskContinuationOptions__Enum_OnlyOnRanToCompletion = 393216,
  TaskContinuationOptions__Enum_OnlyOnFaulted = 327680,
  TaskContinuationOptions__Enum_OnlyOnCanceled = 196608,
  TaskContinuationOptions__Enum_ExecuteSynchronously = 524288,
};
struct TaskContinuationOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TaskContinuationOptions__Enum value;
};
struct __declspec(align(8)) TaskFactory__Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory {
  struct TaskFactory__Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory__Fields fields;
};
struct __declspec(align(8)) CancellationTokenSource__Fields {
  struct ManualResetEvent * m_kernelEvent;
  struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array * m_registeredCallbacksLists;
  int32_t m_state;
  int32_t m_threadIDExecutingCallbacks;
  bool m_disposed;
  struct CancellationTokenRegistration__Array * m_linkingRegistrations;
  struct CancellationCallbackInfo * m_executingCallback;
  struct Timer * m_timer;
};
struct CancellationTokenSource {
  struct CancellationTokenSource__Class *klass;
  struct MonitorData *monitor;
  struct CancellationTokenSource__Fields fields;
};
struct WaitHandle__Fields {
  struct MarshalByRefObject__Fields _;
  void * waitHandle;
  struct SafeWaitHandle * safeWaitHandle;
  bool hasThreadAffinity;
};
struct WaitHandle {
  struct WaitHandle__Class *klass;
  struct MonitorData *monitor;
  struct WaitHandle__Fields fields;
};
struct EventWaitHandle__Fields {
  struct WaitHandle__Fields _;
};
struct EventWaitHandle {
  struct EventWaitHandle__Class *klass;
  struct MonitorData *monitor;
  struct EventWaitHandle__Fields fields;
};
struct ManualResetEvent__Fields {
  struct EventWaitHandle__Fields _;
};
struct ManualResetEvent {
  struct ManualResetEvent__Class *klass;
  struct MonitorData *monitor;
  struct ManualResetEvent__Fields fields;
};
struct CriticalFinalizerObject {
  struct CriticalFinalizerObject__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SafeHandle__Fields {
  void * handle;
  int32_t _state;
  bool _ownsHandle;
  bool _fullyInitialized;
};
struct SafeHandle {
  struct SafeHandle__Class *klass;
  struct MonitorData *monitor;
  struct SafeHandle__Fields fields;
};
struct SafeHandleZeroOrMinusOneIsInvalid__Fields {
  struct SafeHandle__Fields _;
};
struct SafeHandleZeroOrMinusOneIsInvalid {
  struct SafeHandleZeroOrMinusOneIsInvalid__Class *klass;
  struct MonitorData *monitor;
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields fields;
};
struct SafeWaitHandle__Fields {
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};
struct SafeWaitHandle {
  struct SafeWaitHandle__Class *klass;
  struct MonitorData *monitor;
  struct SafeWaitHandle__Fields fields;
};
struct SafeFileHandle__Fields {
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};
struct SafeFileHandle {
  struct SafeFileHandle__Class *klass;
  struct MonitorData *monitor;
  struct SafeFileHandle__Fields fields;
};
struct TimeSpan {
  int64_t _ticks;
};
struct TimeSpan__Boxed {
  struct TimeSpan__Class *klass;
  struct MonitorData *monitor;
  struct TimeSpan fields;
};
struct __declspec(align(8)) SparselyPopulatedArray_1_CancellationCallbackInfo___Fields {
  struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ * m_tail;
};
struct SparselyPopulatedArray_1_CancellationCallbackInfo_ {
  struct SparselyPopulatedArray_1_CancellationCallbackInfo___Class *klass;
  struct MonitorData *monitor;
  struct SparselyPopulatedArray_1_CancellationCallbackInfo___Fields fields;
};
struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array {
  struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SparselyPopulatedArray_1_CancellationCallbackInfo_ * vector[32];
};
struct __declspec(align(8)) SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Fields {
  struct CancellationCallbackInfo__Array * m_elements;
  int32_t m_freeCount;
  struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ * m_next;
  struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ * m_prev;
};
struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ {
  struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Class *klass;
  struct MonitorData *monitor;
  struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Fields fields;
};
struct __declspec(align(8)) CancellationCallbackInfo__Fields {
  struct Action_1_Object_ * Callback;
  struct Object * StateForCallback;
  struct SynchronizationContext * TargetSyncContext;
  struct ExecutionContext * TargetExecutionContext;
  struct CancellationTokenSource * CancellationTokenSource;
};
struct CancellationCallbackInfo {
  struct CancellationCallbackInfo__Class *klass;
  struct MonitorData *monitor;
  struct CancellationCallbackInfo__Fields fields;
};
struct CancellationCallbackInfo__Array {
  struct CancellationCallbackInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CancellationCallbackInfo * vector[32];
};
struct Action_1_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Object_ {
  struct Action_1_Object___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Object___Fields fields;
};
enum SynchronizationContextProperties__Enum : int32_t {
  SynchronizationContextProperties__Enum_None = 0,
  SynchronizationContextProperties__Enum_RequireWaitNotification = 1,
};
struct SynchronizationContextProperties__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SynchronizationContextProperties__Enum value;
};
struct __declspec(align(8)) SynchronizationContext__Fields {
  enum SynchronizationContextProperties__Enum _props;
};
struct SynchronizationContext {
  struct SynchronizationContext__Class *klass;
  struct MonitorData *monitor;
  struct SynchronizationContext__Fields fields;
};
struct SendOrPostCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct SendOrPostCallback {
  struct SendOrPostCallback__Class *klass;
  struct MonitorData *monitor;
  struct SendOrPostCallback__Fields fields;
};
enum ExecutionContext_Flags__Enum : int32_t {
  ExecutionContext_Flags__Enum_None = 0,
  ExecutionContext_Flags__Enum_IsNewCapture = 1,
  ExecutionContext_Flags__Enum_IsFlowSuppressed = 2,
  ExecutionContext_Flags__Enum_IsPreAllocatedDefault = 4,
};
struct ExecutionContext_Flags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExecutionContext_Flags__Enum value;
};
struct __declspec(align(8)) ExecutionContext__Fields {
  struct SynchronizationContext * _syncContext;
  struct SynchronizationContext * _syncContextNoFlow;
  struct LogicalCallContext * _logicalCallContext;
  struct IllogicalCallContext * _illogicalCallContext;
  enum ExecutionContext_Flags__Enum _flags;
  struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ * _localValues;
  struct List_1_System_Threading_IAsyncLocal_ * _localChangeNotifications;
};
struct ExecutionContext {
  struct ExecutionContext__Class *klass;
  struct MonitorData *monitor;
  struct ExecutionContext__Fields fields;
};
struct __declspec(align(8)) LogicalCallContext__Fields {
  struct Hashtable * m_Datastore;
  struct CallContextRemotingData * m_RemotingData;
  struct CallContextSecurityData * m_SecurityData;
  struct Object * m_HostContext;
  bool m_IsCorrelationMgr;
  struct Header__Array * _sendHeaders;
  struct Header__Array * _recvHeaders;
};
struct LogicalCallContext {
  struct LogicalCallContext__Class *klass;
  struct MonitorData *monitor;
  struct LogicalCallContext__Fields fields;
};
struct __declspec(align(8)) CallContextRemotingData__Fields {
  struct String * _logicalCallID;
};
struct CallContextRemotingData {
  struct CallContextRemotingData__Class *klass;
  struct MonitorData *monitor;
  struct CallContextRemotingData__Fields fields;
};
struct __declspec(align(8)) CallContextSecurityData__Fields {
  struct IPrincipal * _principal;
};
struct CallContextSecurityData {
  struct CallContextSecurityData__Class *klass;
  struct MonitorData *monitor;
  struct CallContextSecurityData__Fields fields;
};
struct IPrincipal {
  struct IPrincipal__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Header__Fields {
  struct String * HeaderNamespace;
  bool MustUnderstand;
  struct String * Name;
  struct Object * Value;
};
struct Header {
  struct Header__Class *klass;
  struct MonitorData *monitor;
  struct Header__Fields fields;
};
struct Header__Array {
  struct Header__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Header * vector[32];
};
struct __declspec(align(8)) IllogicalCallContext__Fields {
  struct Hashtable * m_Datastore;
  struct Object * m_HostContext;
};
struct IllogicalCallContext {
  struct IllogicalCallContext__Class *klass;
  struct MonitorData *monitor;
  struct IllogicalCallContext__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Threading_IAsyncLocal_System_Object___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Threading_IAsyncLocal_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ {
  struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ {
  int32_t hashCode;
  int32_t next;
  struct IAsyncLocal * key;
  struct Object * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ vector[32];
};
struct IAsyncLocal {
  struct IAsyncLocal__Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_System_Threading_IAsyncLocal_ {
  struct IEqualityComparer_1_System_Threading_IAsyncLocal___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Fields {
  struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Fields fields;
};
struct IAsyncLocal__Array {
  struct IAsyncLocal__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IAsyncLocal * vector[32];
};
struct IEnumerator_1_System_Threading_IAsyncLocal_ {
  struct IEnumerator_1_System_Threading_IAsyncLocal___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Fields {
  struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Fields fields;
};
struct IEnumerator_1_System_Object_ {
  struct IEnumerator_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Threading_IAsyncLocal_ {
  struct ICollection_1_System_Threading_IAsyncLocal___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Object_ {
  struct ICollection_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ {
  struct IAsyncLocal * key;
  struct Object * value;
};
struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Boxed {
  struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ fields;
};
struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array {
  struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ {
  struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Threading_IAsyncLocal_ {
  struct IEnumerable_1_System_Threading_IAsyncLocal___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Object_ {
  struct IEnumerable_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Threading_IAsyncLocal___Fields {
  struct IAsyncLocal__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Threading_IAsyncLocal_ {
  struct List_1_System_Threading_IAsyncLocal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Threading_IAsyncLocal___Fields fields;
};
struct ContextCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct ContextCallback {
  struct ContextCallback__Class *klass;
  struct MonitorData *monitor;
  struct ContextCallback__Fields fields;
};
struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ {
  struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ * m_source;
  int32_t m_index;
};
struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Boxed {
  struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Class *klass;
  struct MonitorData *monitor;
  struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ fields;
};
struct CancellationTokenRegistration {
  struct CancellationCallbackInfo * m_callbackInfo;
  struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ m_registrationInfo;
};
struct CancellationTokenRegistration__Boxed {
  struct CancellationTokenRegistration__Class *klass;
  struct MonitorData *monitor;
  struct CancellationTokenRegistration fields;
};
struct CancellationTokenRegistration__Array {
  struct CancellationTokenRegistration__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CancellationTokenRegistration vector[32];
};
struct Timer__Fields {
  struct MarshalByRefObject__Fields _;
  struct TimerCallback * callback;
  struct Object * state;
  int64_t due_time_ms;
  int64_t period_ms;
  int64_t next_run;
  bool disposed;
};
struct Timer {
  struct Timer__Class *klass;
  struct MonitorData *monitor;
  struct Timer__Fields fields;
};
struct __declspec(align(8)) Timer_Scheduler__Fields {
  struct SortedList * list;
  struct ManualResetEvent * changed;
};
struct Timer_Scheduler {
  struct Timer_Scheduler__Class *klass;
  struct MonitorData *monitor;
  struct Timer_Scheduler__Fields fields;
};
struct __declspec(align(8)) SortedList__Fields {
  struct Object__Array * keys;
  struct Object__Array * values;
  int32_t _size;
  int32_t version;
  struct IComparer * comparer;
  struct SortedList_KeyList * keyList;
  struct SortedList_ValueList * valueList;
  struct Object * _syncRoot;
};
struct SortedList {
  struct SortedList__Class *klass;
  struct MonitorData *monitor;
  struct SortedList__Fields fields;
};
struct __declspec(align(8)) SortedList_KeyList__Fields {
  struct SortedList * sortedList;
};
struct SortedList_KeyList {
  struct SortedList_KeyList__Class *klass;
  struct MonitorData *monitor;
  struct SortedList_KeyList__Fields fields;
};
struct __declspec(align(8)) SortedList_ValueList__Fields {
  struct SortedList * sortedList;
};
struct SortedList_ValueList {
  struct SortedList_ValueList__Class *klass;
  struct MonitorData *monitor;
  struct SortedList_ValueList__Fields fields;
};
struct IList {
  struct IList__Class *klass;
  struct MonitorData *monitor;
};
struct TimerCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct TimerCallback {
  struct TimerCallback__Class *klass;
  struct MonitorData *monitor;
  struct TimerCallback__Fields fields;
};
struct __declspec(align(8)) TaskScheduler__Fields {
  int32_t m_taskSchedulerId;
};
struct TaskScheduler {
  struct TaskScheduler__Class *klass;
  struct MonitorData *monitor;
  struct TaskScheduler__Fields fields;
};
struct __declspec(align(8)) ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Fields {
  struct Ephemeron__Array * data;
  struct Object * _lock;
  int32_t size;
};
struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_ {
  struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Fields fields;
};
struct Ephemeron {
  struct Object * key;
  struct Object * value;
};
struct Ephemeron__Boxed {
  struct Ephemeron__Class *klass;
  struct MonitorData *monitor;
  struct Ephemeron fields;
};
struct Ephemeron__Array {
  struct Ephemeron__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Ephemeron vector[32];
};
struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_ {
  struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Fields fields;
};
struct EventArgs {
  struct EventArgs__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UnobservedTaskExceptionEventArgs__Fields {
  struct AggregateException * m_exception;
  bool m_observed;
};
struct UnobservedTaskExceptionEventArgs {
  struct UnobservedTaskExceptionEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct UnobservedTaskExceptionEventArgs__Fields fields;
};
struct __declspec(align(8)) Exception__Fields {
  struct String * _className;
  struct String * _message;
  struct IDictionary * _data;
  struct Exception * _innerException;
  struct String * _helpURL;
  struct Object * _stackTrace;
  struct String * _stackTraceString;
  struct String * _remoteStackTraceString;
  int32_t _remoteStackIndex;
  struct Object * _dynamicMethods;
  int32_t _HResult;
  struct String * _source;
  struct SafeSerializationManager * _safeSerializationManager;
  struct StackTrace__Array * captured_traces;
  struct IntPtr__Array * native_trace_ips;
};
struct Exception {
  struct Exception__Class *klass;
  struct MonitorData *monitor;
  struct Exception__Fields fields;
};
struct AggregateException__Fields {
  struct Exception__Fields _;
  struct ReadOnlyCollection_1_System_Exception_ * m_innerExceptions;
};
struct AggregateException {
  struct AggregateException__Class *klass;
  struct MonitorData *monitor;
  struct AggregateException__Fields fields;
};
struct IDictionary {
  struct IDictionary__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SafeSerializationManager__Fields {
  struct IList_1_System_Object_ * m_serializedStates;
  struct SerializationInfo * m_savedSerializationInfo;
  struct Object * m_realObject;
  struct RuntimeType * m_realType;
  struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_ * SerializeObjectState;
};
struct SafeSerializationManager {
  struct SafeSerializationManager__Class *klass;
  struct MonitorData *monitor;
  struct SafeSerializationManager__Fields fields;
};
struct IList_1_System_Object_ {
  struct IList_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_ {
  struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Fields fields;
};
struct __declspec(align(8)) SafeSerializationEventArgs__Fields {
  struct StreamingContext m_streamingContext;
  struct List_1_System_Object_ * m_serializedStates;
};
struct SafeSerializationEventArgs {
  struct SafeSerializationEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct SafeSerializationEventArgs__Fields fields;
};
struct __declspec(align(8)) List_1_System_Object___Fields {
  struct Object__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Object_ {
  struct List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Object___Fields fields;
};
struct __declspec(align(8)) StackTrace__Fields {
  struct StackFrame__Array * frames;
  struct StackTrace__Array * captured_traces;
  bool debug_info;
};
struct StackTrace {
  struct StackTrace__Class *klass;
  struct MonitorData *monitor;
  struct StackTrace__Fields fields;
};
struct StackTrace__Array {
  struct StackTrace__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StackTrace * vector[32];
};
struct __declspec(align(8)) StackFrame__Fields {
  int32_t ilOffset;
  int32_t nativeOffset;
  int64_t methodAddress;
  uint32_t methodIndex;
  struct MethodBase * methodBase;
  struct String * fileName;
  int32_t lineNumber;
  int32_t columnNumber;
  struct String * internalMethodName;
};
struct StackFrame {
  struct StackFrame__Class *klass;
  struct MonitorData *monitor;
  struct StackFrame__Fields fields;
};
struct StackFrame__Array {
  struct StackFrame__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StackFrame * vector[32];
};
struct IntPtr__Array {
  struct IntPtr__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  void * vector[32];
};
struct __declspec(align(8)) ReadOnlyCollection_1_System_Exception___Fields {
  struct IList_1_System_Exception_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_System_Exception_ {
  struct ReadOnlyCollection_1_System_Exception___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_System_Exception___Fields fields;
};
struct IList_1_System_Exception_ {
  struct IList_1_System_Exception___Class *klass;
  struct MonitorData *monitor;
};
struct Exception__Array {
  struct Exception__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Exception * vector[32];
};
struct IEnumerator_1_System_Exception_ {
  struct IEnumerator_1_System_Exception___Class *klass;
  struct MonitorData *monitor;
};
struct ThreadPoolTaskScheduler__Fields {
  struct TaskScheduler__Fields _;
};
struct ThreadPoolTaskScheduler {
  struct ThreadPoolTaskScheduler__Class *klass;
  struct MonitorData *monitor;
  struct ThreadPoolTaskScheduler__Fields fields;
};
struct ParameterizedThreadStart__Fields {
  struct MulticastDelegate__Fields _;
};
struct ParameterizedThreadStart {
  struct ParameterizedThreadStart__Class *klass;
  struct MonitorData *monitor;
  struct ParameterizedThreadStart__Fields fields;
};
struct IEnumerable_1_System_Threading_Tasks_Task_ {
  struct IEnumerable_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Threading_Tasks_Task___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ {
  struct Dictionary_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Threading_Tasks_Task___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Task * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Fields {
  struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Fields {
  struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Fields fields;
};
struct Task__Array {
  struct Task__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Task * vector[32];
};
struct IEnumerator_1_System_Threading_Tasks_Task_ {
  struct IEnumerator_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Threading_Tasks_Task_ {
  struct ICollection_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ {
  int32_t key;
  struct Task * value;
};
struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Boxed {
  struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ fields;
};
struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Array {
  struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Task_ContingentProperties__Fields {
  struct ExecutionContext * m_capturedContext;
  struct ManualResetEventSlim * m_completionEvent;
  struct TaskExceptionHolder * m_exceptionsHolder;
  struct CancellationToken m_cancellationToken;
  struct Shared_1_System_Threading_CancellationTokenRegistration_ * m_cancellationRegistration;
  int32_t m_internalCancellationRequested;
  int32_t m_completionCountdown;
  struct List_1_System_Threading_Tasks_Task_ * m_exceptionalChildren;
};
struct Task_ContingentProperties {
  struct Task_ContingentProperties__Class *klass;
  struct MonitorData *monitor;
  struct Task_ContingentProperties__Fields fields;
};
struct __declspec(align(8)) ManualResetEventSlim__Fields {
  struct Object * m_lock;
  struct ManualResetEvent * m_eventObj;
  int32_t m_combinedState;
};
struct ManualResetEventSlim {
  struct ManualResetEventSlim__Class *klass;
  struct MonitorData *monitor;
  struct ManualResetEventSlim__Fields fields;
};
struct __declspec(align(8)) TaskExceptionHolder__Fields {
  struct Task * m_task;
  struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * m_faultExceptions;
  struct ExceptionDispatchInfo * m_cancellationException;
  bool m_isHandled;
};
struct TaskExceptionHolder {
  struct TaskExceptionHolder__Class *klass;
  struct MonitorData *monitor;
  struct TaskExceptionHolder__Fields fields;
};
struct EventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler {
  struct EventHandler__Class *klass;
  struct MonitorData *monitor;
  struct EventHandler__Fields fields;
};
struct __declspec(align(8)) List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields {
  struct ExceptionDispatchInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
  struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields fields;
};
struct __declspec(align(8)) ExceptionDispatchInfo__Fields {
  struct Exception * m_Exception;
  struct Object * m_stackTrace;
};
struct ExceptionDispatchInfo {
  struct ExceptionDispatchInfo__Class *klass;
  struct MonitorData *monitor;
  struct ExceptionDispatchInfo__Fields fields;
};
struct ExceptionDispatchInfo__Array {
  struct ExceptionDispatchInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExceptionDispatchInfo * vector[32];
};
struct IEnumerator_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
  struct IEnumerator_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Shared_1_System_Threading_CancellationTokenRegistration___Fields {
  struct CancellationTokenRegistration Value;
};
struct Shared_1_System_Threading_CancellationTokenRegistration_ {
  struct Shared_1_System_Threading_CancellationTokenRegistration___Class *klass;
  struct MonitorData *monitor;
  struct Shared_1_System_Threading_CancellationTokenRegistration___Fields fields;
};
struct __declspec(align(8)) List_1_System_Threading_Tasks_Task___Fields {
  struct Task__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Threading_Tasks_Task_ {
  struct List_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Threading_Tasks_Task___Fields fields;
};
struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_System_Threading_Tasks_Task_ContingentProperties_ {
  struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Fields fields;
};
struct Predicate_1_System_Threading_Tasks_Task___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_System_Threading_Tasks_Task_ {
  struct Predicate_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_System_Threading_Tasks_Task___Fields fields;
};
struct Predicate_1_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_Object_ {
  struct Predicate_1_Object___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_Object___Fields fields;
};
struct SystemException__Fields {
  struct Exception__Fields _;
};
struct SystemException {
  struct SystemException__Class *klass;
  struct MonitorData *monitor;
  struct SystemException__Fields fields;
};
struct ThreadAbortException__Fields {
  struct SystemException__Fields _;
};
struct ThreadAbortException {
  struct ThreadAbortException__Class *klass;
  struct MonitorData *monitor;
  struct ThreadAbortException__Fields fields;
};}