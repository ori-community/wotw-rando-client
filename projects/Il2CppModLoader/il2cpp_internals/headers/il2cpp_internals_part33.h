namespace app {

struct ThreadStateException__Fields {
  struct SystemException__Fields _;
};
struct ThreadStateException {
  struct ThreadStateException__Class *klass;
  struct MonitorData *monitor;
  struct ThreadStateException__Fields fields;
};
struct ThreadStateException__VTable {
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
struct ThreadStateException__StaticFields {
};
struct ThreadStateException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadStateException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadStateException__VTable vtable;
};

struct WaitHandle__Array {
  struct WaitHandle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WaitHandle * vector[32];
};

struct WaitHandleCannotBeOpenedException__Fields {
  struct ApplicationException__Fields _;
};
struct WaitHandleCannotBeOpenedException {
  struct WaitHandleCannotBeOpenedException__Class *klass;
  struct MonitorData *monitor;
  struct WaitHandleCannotBeOpenedException__Fields fields;
};
struct WaitHandleCannotBeOpenedException__VTable {
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
struct WaitHandleCannotBeOpenedException__StaticFields {
};
struct WaitHandleCannotBeOpenedException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitHandleCannotBeOpenedException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitHandleCannotBeOpenedException__VTable vtable;
};

struct __declspec(align(8)) LockQueue__Fields {
  struct ReaderWriterLock * rwlock;
  int32_t lockCount;
};
struct LockQueue {
  struct LockQueue__Class *klass;
  struct MonitorData *monitor;
  struct LockQueue__Fields fields;
};
struct __declspec(align(8)) ReaderWriterLock__Fields {
  int32_t seq_num;
  int32_t state;
  int32_t readers;
  int32_t writer_lock_owner;
  struct LockQueue * writer_queue;
  struct Hashtable * reader_locks;
};
struct ReaderWriterLock {
  struct ReaderWriterLock__Class *klass;
  struct MonitorData *monitor;
  struct ReaderWriterLock__Fields fields;
};
struct ReaderWriterLock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReaderWriterLock__StaticFields {
};
struct ReaderWriterLock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReaderWriterLock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReaderWriterLock__VTable vtable;
};
struct LockQueue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LockQueue__StaticFields {
};
struct LockQueue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LockQueue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LockQueue__VTable vtable;
};

struct Timer_TimerComparer {
  struct Timer_TimerComparer__Class *klass;
  struct MonitorData *monitor;
};
struct Timer_TimerComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct Timer_TimerComparer__StaticFields {
};
struct Timer_TimerComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Timer_TimerComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Timer_TimerComparer__VTable vtable;
};

struct __declspec(align(8)) List_1_System_Threading_Timer___Fields {
  struct Timer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Threading_Timer_ {
  struct List_1_System_Threading_Timer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Threading_Timer___Fields fields;
};
struct Timer__Array {
  struct Timer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Timer * vector[32];
};
struct IEnumerator_1_System_Threading_Timer_ {
  struct IEnumerator_1_System_Threading_Timer___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Threading_Timer___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Threading_Timer___StaticFields {
};
struct IEnumerator_1_System_Threading_Timer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Threading_Timer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Threading_Timer___VTable vtable;
};
struct List_1_System_Threading_Timer___VTable {
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
struct List_1_System_Threading_Timer___StaticFields {
  struct Timer__Array * _emptyArray;
};
struct List_1_System_Threading_Timer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Threading_Timer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Threading_Timer___VTable vtable;
};

enum CausalityTraceLevel__Enum : int32_t {
  CausalityTraceLevel__Enum_Required = 0,
  CausalityTraceLevel__Enum_Important = 1,
  CausalityTraceLevel__Enum_Verbose = 2,
};
struct CausalityTraceLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CausalityTraceLevel__Enum value;
};

enum AsyncCausalityStatus__Enum : int32_t {
  AsyncCausalityStatus__Enum_Started = 0,
  AsyncCausalityStatus__Enum_Completed = 1,
  AsyncCausalityStatus__Enum_Canceled = 2,
  AsyncCausalityStatus__Enum_Error = 3,
};
struct AsyncCausalityStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AsyncCausalityStatus__Enum value;
};

enum CausalityRelation__Enum : int32_t {
  CausalityRelation__Enum_AssignDelegate = 0,
  CausalityRelation__Enum_Join = 1,
  CausalityRelation__Enum_Choice = 2,
  CausalityRelation__Enum_Cancel = 3,
  CausalityRelation__Enum_Error = 4,
};
struct CausalityRelation__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CausalityRelation__Enum value;
};

enum CausalitySynchronousWork__Enum : int32_t {
  CausalitySynchronousWork__Enum_CompletionNotification = 0,
  CausalitySynchronousWork__Enum_ProgressNotification = 1,
  CausalitySynchronousWork__Enum_Execution = 2,
};
struct CausalitySynchronousWork__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CausalitySynchronousWork__Enum value;
};

struct TaskContinuation {
  struct TaskContinuation__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) StandardTaskContinuation__Fields {
  struct Task * m_task;
  enum TaskContinuationOptions__Enum m_options;
  struct TaskScheduler * m_taskScheduler;
};
struct StandardTaskContinuation {
  struct StandardTaskContinuation__Class *klass;
  struct MonitorData *monitor;
  struct StandardTaskContinuation__Fields fields;
};
struct StandardTaskContinuation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Run;
};
struct StandardTaskContinuation__StaticFields {
};
struct StandardTaskContinuation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StandardTaskContinuation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StandardTaskContinuation__VTable vtable;
};
struct TaskContinuation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct TaskContinuation__StaticFields {
};
struct TaskContinuation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskContinuation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskContinuation__VTable vtable;
};

enum TaskStatus__Enum : int32_t {
  TaskStatus__Enum_Created = 0,
  TaskStatus__Enum_WaitingForActivation = 1,
  TaskStatus__Enum_WaitingToRun = 2,
  TaskStatus__Enum_Running = 3,
  TaskStatus__Enum_WaitingForChildrenToComplete = 4,
  TaskStatus__Enum_RanToCompletion = 5,
  TaskStatus__Enum_Canceled = 6,
  TaskStatus__Enum_Faulted = 7,
};
struct TaskStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TaskStatus__Enum value;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields {
  struct IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
  struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields fields;
};
struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_T__Insert;
  VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Count_2;
};
struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___StaticFields {
};
struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___VTable vtable;
};

struct TaskAwaiter {
  struct Task * m_task;
};
struct TaskAwaiter__Boxed {
  struct TaskAwaiter__Class *klass;
  struct MonitorData *monitor;
  struct TaskAwaiter fields;
};
struct TaskAwaiter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct TaskAwaiter__StaticFields {
};
struct TaskAwaiter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskAwaiter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskAwaiter__VTable vtable;
};

struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter {
  struct Task * m_task;
  bool m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed {
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class *klass;
  struct MonitorData *monitor;
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter fields;
};
struct ConfiguredTaskAwaitable {
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable__Boxed {
  struct ConfiguredTaskAwaitable__Class *klass;
  struct MonitorData *monitor;
  struct ConfiguredTaskAwaitable fields;
};
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__StaticFields {
};
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__VTable vtable;
};
struct ConfiguredTaskAwaitable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConfiguredTaskAwaitable__StaticFields {
};
struct ConfiguredTaskAwaitable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfiguredTaskAwaitable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfiguredTaskAwaitable__VTable vtable;
};

struct YieldAwaitable {
};
struct YieldAwaitable__Boxed {
  struct YieldAwaitable__Class *klass;
  struct MonitorData *monitor;
  struct YieldAwaitable fields;
};
struct YieldAwaitable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct YieldAwaitable__StaticFields {
};
struct YieldAwaitable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YieldAwaitable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YieldAwaitable__VTable vtable;
};

struct Action_1_System_Threading_Tasks_Task___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_System_Threading_Tasks_Task_ {
  struct Action_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_System_Threading_Tasks_Task___Fields fields;
};
struct Action_1_System_Threading_Tasks_Task___VTable {
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
struct Action_1_System_Threading_Tasks_Task___StaticFields {
};
struct Action_1_System_Threading_Tasks_Task___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_System_Threading_Tasks_Task___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_System_Threading_Tasks_Task___VTable vtable;
};

struct ITaskCompletionAction {
  struct ITaskCompletionAction__Class *klass;
  struct MonitorData *monitor;
};
struct ITaskCompletionAction__VTable {
  VirtualInvokeData Invoke;
};
struct ITaskCompletionAction__StaticFields {
};
struct ITaskCompletionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITaskCompletionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITaskCompletionAction__VTable vtable;
};

struct Func_1_System_Threading_Tasks_Task___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_System_Threading_Tasks_Task_ {
  struct Func_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_System_Threading_Tasks_Task___Fields fields;
};
struct Func_1_System_Threading_Tasks_Task___VTable {
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
struct Func_1_System_Threading_Tasks_Task___StaticFields {
};
struct Func_1_System_Threading_Tasks_Task___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_System_Threading_Tasks_Task___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_System_Threading_Tasks_Task___VTable vtable;
};

struct Task_SetOnInvokeMres__Fields {
  struct ManualResetEventSlim__Fields _;
};
struct Task_SetOnInvokeMres {
  struct Task_SetOnInvokeMres__Class *klass;
  struct MonitorData *monitor;
  struct Task_SetOnInvokeMres__Fields fields;
};
struct Task_SetOnInvokeMres__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Invoke;
};
struct Task_SetOnInvokeMres__StaticFields {
};
struct Task_SetOnInvokeMres__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_SetOnInvokeMres__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_SetOnInvokeMres__VTable vtable;
};

struct Task_1_VoidTaskResult___Fields {
  struct Task__Fields _;
  struct VoidTaskResult m_result;
};
struct Task_1_VoidTaskResult_ {
  struct Task_1_VoidTaskResult___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_VoidTaskResult___Fields fields;
};
struct Task_DelayPromise__Fields {
  struct Task_1_VoidTaskResult___Fields _;
  struct CancellationToken Token;
  struct CancellationTokenRegistration Registration;
  struct Timer * Timer;
};
struct Task_DelayPromise {
  struct Task_DelayPromise__Class *klass;
  struct MonitorData *monitor;
  struct Task_DelayPromise__Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_VoidTaskResult___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_VoidTaskResult_ {
  struct TaskFactory_1_VoidTaskResult___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_VoidTaskResult___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__Fields fields;
};
struct TaskFactory_1_VoidTaskResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_VoidTaskResult___StaticFields {
};
struct TaskFactory_1_VoidTaskResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_VoidTaskResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_VoidTaskResult___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__VTable vtable;
};
struct Task_1_VoidTaskResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct Task_1_VoidTaskResult___StaticFields {
  struct TaskFactory_1_VoidTaskResult_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3 * TaskWhenAnyCast;
};
struct Task_1_VoidTaskResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_VoidTaskResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_VoidTaskResult___VTable vtable;
};
struct Task_DelayPromise__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct Task_DelayPromise__StaticFields {
};
struct Task_DelayPromise__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_DelayPromise__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_DelayPromise__VTable vtable;
};

struct Task_WhenAllPromise__Fields {
  struct Task_1_VoidTaskResult___Fields _;
  struct Task__Array * m_tasks;
  int32_t m_count;
};
struct Task_WhenAllPromise {
  struct Task_WhenAllPromise__Class *klass;
  struct MonitorData *monitor;
  struct Task_WhenAllPromise__Fields fields;
};
struct Task_WhenAllPromise__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
  VirtualInvokeData Invoke;
};
struct Task_WhenAllPromise__StaticFields {
};
struct Task_WhenAllPromise__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_WhenAllPromise__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_WhenAllPromise__VTable vtable;
};

struct __declspec(align(8)) Task_c_DisplayClass178_0__Fields {
  struct Task * root;
  bool replicasAreQuitting;
  struct Action_1_Object_ * taskReplicaDelegate;
  enum TaskCreationOptions__Enum creationOptionsForReplicas;
  enum InternalTaskOptions__Enum internalOptionsForReplicas;
};
struct Task_c_DisplayClass178_0 {
  struct Task_c_DisplayClass178_0__Class *klass;
  struct MonitorData *monitor;
  struct Task_c_DisplayClass178_0__Fields fields;
};
struct Task_c_DisplayClass178_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Task_c_DisplayClass178_0__StaticFields {
};
struct Task_c_DisplayClass178_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_c_DisplayClass178_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_c_DisplayClass178_0__VTable vtable;
};

struct Task_c {
  struct Task_c__Class *klass;
  struct MonitorData *monitor;
};
struct Task_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Task_c__StaticFields {
  struct Task_c * __9;
  struct Action_1_Object_ * __9__276_0;
  struct TimerCallback * __9__276_1;
};
struct Task_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_c__VTable vtable;
};

struct __declspec(align(8)) CompletionActionInvoker__Fields {
  struct ITaskCompletionAction * m_action;
  struct Task * m_completingTask;
};
struct CompletionActionInvoker {
  struct CompletionActionInvoker__Class *klass;
  struct MonitorData *monitor;
  struct CompletionActionInvoker__Fields fields;
};
struct CompletionActionInvoker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ExecuteWorkItem;
  VirtualInvokeData MarkAborted;
};
struct CompletionActionInvoker__StaticFields {
};
struct CompletionActionInvoker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompletionActionInvoker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompletionActionInvoker__VTable vtable;
};

struct __declspec(align(8)) SystemThreadingTasks_TaskDebugView__Fields {
  struct Task * m_task;
};
struct SystemThreadingTasks_TaskDebugView {
  struct SystemThreadingTasks_TaskDebugView__Class *klass;
  struct MonitorData *monitor;
  struct SystemThreadingTasks_TaskDebugView__Fields fields;
};
struct SystemThreadingTasks_TaskDebugView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SystemThreadingTasks_TaskDebugView__StaticFields {
};
struct SystemThreadingTasks_TaskDebugView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SystemThreadingTasks_TaskDebugView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SystemThreadingTasks_TaskDebugView__VTable vtable;
};

struct TaskCanceledException__Fields {
  struct OperationCanceledException__Fields _;
  struct Task * m_canceledTask;
};
struct TaskCanceledException {
  struct TaskCanceledException__Class *klass;
  struct MonitorData *monitor;
  struct TaskCanceledException__Fields fields;
};
struct TaskCanceledException__VTable {
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
struct TaskCanceledException__StaticFields {
};
struct TaskCanceledException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskCanceledException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskCanceledException__VTable vtable;
};

struct ContinuationTaskFromTask__Fields {
  struct Task__Fields _;
  struct Task * m_antecedent;
};
struct ContinuationTaskFromTask {
  struct ContinuationTaskFromTask__Class *klass;
  struct MonitorData *monitor;
  struct ContinuationTaskFromTask__Fields fields;
};
struct ContinuationTaskFromTask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct ContinuationTaskFromTask__StaticFields {
};
struct ContinuationTaskFromTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContinuationTaskFromTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContinuationTaskFromTask__VTable vtable;
};}