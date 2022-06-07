namespace app {
struct QueueUserWorkItemCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QueueUserWorkItemCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QueueUserWorkItemCallback__VTable vtable;
};

struct RegisteredWaitHandle__Fields {
    struct MarshalByRefObject__Fields _;
    struct WaitHandle *_waitObject;
    struct WaitOrTimerCallback *_callback;
    struct Object *_state;
    struct WaitHandle *_finalEvent;
    struct ManualResetEvent *_cancelEvent;
    struct TimeSpan _timeout;
    int32_t _callsInProcess;
    bool _executeOnlyOnce;
    bool _unregistered;
};

struct RegisteredWaitHandle {
    struct RegisteredWaitHandle__Class *klass;
    MonitorData *monitor;
    struct RegisteredWaitHandle__Fields fields;
};

struct RegisteredWaitHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
};

struct RegisteredWaitHandle__StaticFields {
};

struct RegisteredWaitHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RegisteredWaitHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RegisteredWaitHandle__VTable vtable;
};

struct IEnumerable_1_System_Threading_IThreadPoolWorkItem_ {
    struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___StaticFields {
};

struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___VTable vtable;
};

struct __declspec(align(8)) ThreadPool_EnumerateQueuedWorkItems_d_21__Fields {
    int32_t __1__state;
    struct IThreadPoolWorkItem *__2__current;
    int32_t __l__initialThreadId;
    struct ThreadPoolWorkQueue_WorkStealingQueue__Array *wsQueues;
    struct ThreadPoolWorkQueue_WorkStealingQueue__Array *__3__wsQueues;
    struct IThreadPoolWorkItem__Array *_items_5__1;
    int32_t _i_5__2;
    struct ThreadPoolWorkQueue_QueueSegment *globalQueueTail;
    struct ThreadPoolWorkQueue_QueueSegment *__3__globalQueueTail;
    struct IThreadPoolWorkItem__Array *_items_5__3;
    int32_t _i_5__4;
    struct ThreadPoolWorkQueue_QueueSegment *_segment_5__5;
    struct ThreadPoolWorkQueue_WorkStealingQueue__Array *__7__wrap1;
    int32_t __7__wrap2;
};

struct ThreadPool_EnumerateQueuedWorkItems_d_21 {
    struct ThreadPool_EnumerateQueuedWorkItems_d_21__Class *klass;
    MonitorData *monitor;
    struct ThreadPool_EnumerateQueuedWorkItems_d_21__Fields fields;
};

struct IEnumerator_1_System_Threading_IThreadPoolWorkItem_ {
    struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___StaticFields {
};

struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___VTable vtable;
};

struct ThreadPool_EnumerateQueuedWorkItems_d_21__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Threading_IThreadPoolWorkItem__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Threading_IThreadPoolWorkItem__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct ThreadPool_EnumerateQueuedWorkItems_d_21__StaticFields {
};

struct ThreadPool_EnumerateQueuedWorkItems_d_21__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadPool_EnumerateQueuedWorkItems_d_21__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadPool_EnumerateQueuedWorkItems_d_21__VTable vtable;
};

struct ThreadStateException__Fields {
    struct SystemException__Fields _;
};

struct ThreadStateException {
    struct ThreadStateException__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadStateException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadStateException__VTable vtable;
};

struct WaitHandle__Array {
    struct WaitHandle__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct WaitHandle *vector[32];
};

struct WaitHandle__Array__VTable {
};

struct WaitHandle__Array__StaticFields {
};

struct WaitHandle__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitHandle__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitHandle__Array__VTable vtable;
};

struct WaitHandleCannotBeOpenedException__Fields {
    struct ApplicationException__Fields _;
};

struct WaitHandleCannotBeOpenedException {
    struct WaitHandleCannotBeOpenedException__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitHandleCannotBeOpenedException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitHandleCannotBeOpenedException__VTable vtable;
};

struct __declspec(align(8)) LockQueue__Fields {
    struct ReaderWriterLock *rwlock;
    int32_t lockCount;
};

struct LockQueue {
    struct LockQueue__Class *klass;
    MonitorData *monitor;
    struct LockQueue__Fields fields;
};

struct __declspec(align(8)) ReaderWriterLock__Fields {
    int32_t seq_num;
    int32_t state;
    int32_t readers;
    int32_t writer_lock_owner;
    struct LockQueue *writer_queue;
    struct Hashtable *reader_locks;
};

struct ReaderWriterLock {
    struct ReaderWriterLock__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReaderWriterLock__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LockQueue__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LockQueue__VTable vtable;
};

struct Timer_TimerComparer {
    struct Timer_TimerComparer__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Timer_TimerComparer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Timer_TimerComparer__VTable vtable;
};

struct __declspec(align(8)) List_1_System_Threading_Timer___Fields {
    struct Timer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Threading_Timer_ {
    struct List_1_System_Threading_Timer___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Threading_Timer___Fields fields;
};

struct Timer__Array {
    struct Timer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Timer *vector[32];
};

struct IEnumerator_1_System_Threading_Timer_ {
    struct IEnumerator_1_System_Threading_Timer___Class *klass;
    MonitorData *monitor;
};

struct Timer__Array__VTable {
};

struct Timer__Array__StaticFields {
};

struct Timer__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Timer__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Timer__Array__VTable vtable;
};

struct IEnumerator_1_System_Threading_Timer___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Threading_Timer___StaticFields {
};

struct IEnumerator_1_System_Threading_Timer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Threading_Timer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Timer__Array *_emptyArray;
};

struct List_1_System_Threading_Timer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Threading_Timer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Threading_Timer___VTable vtable;
};

enum class CausalityTraceLevel__Enum : int32_t {
    Required = 0x00000000,
    Important = 0x00000001,
    Verbose = 0x00000002,
};

struct CausalityTraceLevel__Enum__Boxed {
    struct CausalityTraceLevel__Enum__Class *klass;
    MonitorData *monitor;
    CausalityTraceLevel__Enum value;
    
};

struct CausalityTraceLevel__Enum__VTable {
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

struct CausalityTraceLevel__Enum__StaticFields {
};

struct CausalityTraceLevel__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CausalityTraceLevel__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CausalityTraceLevel__Enum__VTable vtable;
};

enum class AsyncCausalityStatus__Enum : int32_t {
    Started = 0x00000000,
    Completed = 0x00000001,
    Canceled = 0x00000002,
    Error = 0x00000003,
};

struct AsyncCausalityStatus__Enum__Boxed {
    struct AsyncCausalityStatus__Enum__Class *klass;
    MonitorData *monitor;
    AsyncCausalityStatus__Enum value;
    
};

struct AsyncCausalityStatus__Enum__VTable {
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

struct AsyncCausalityStatus__Enum__StaticFields {
};

struct AsyncCausalityStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncCausalityStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncCausalityStatus__Enum__VTable vtable;
};

enum class CausalityRelation__Enum : int32_t {
    AssignDelegate = 0x00000000,
    Join = 0x00000001,
    Choice = 0x00000002,
    Cancel = 0x00000003,
    Error = 0x00000004,
};

struct CausalityRelation__Enum__Boxed {
    struct CausalityRelation__Enum__Class *klass;
    MonitorData *monitor;
    CausalityRelation__Enum value;
    
};

struct CausalityRelation__Enum__VTable {
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

struct CausalityRelation__Enum__StaticFields {
};

struct CausalityRelation__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CausalityRelation__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CausalityRelation__Enum__VTable vtable;
};

enum class CausalitySynchronousWork__Enum : int32_t {
    CompletionNotification = 0x00000000,
    ProgressNotification = 0x00000001,
    Execution = 0x00000002,
};

struct CausalitySynchronousWork__Enum__Boxed {
    struct CausalitySynchronousWork__Enum__Class *klass;
    MonitorData *monitor;
    CausalitySynchronousWork__Enum value;
    
};

struct CausalitySynchronousWork__Enum__VTable {
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

struct CausalitySynchronousWork__Enum__StaticFields {
};

struct CausalitySynchronousWork__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CausalitySynchronousWork__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CausalitySynchronousWork__Enum__VTable vtable;
};

struct TaskContinuation {
    struct TaskContinuation__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) StandardTaskContinuation__Fields {
    struct Task *m_task;
    TaskContinuationOptions__Enum m_options;
    
    struct TaskScheduler *m_taskScheduler;
};

struct StandardTaskContinuation {
    struct StandardTaskContinuation__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StandardTaskContinuation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskContinuation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskContinuation__VTable vtable;
};

enum class TaskStatus__Enum : int32_t {
    Created = 0x00000000,
    WaitingForActivation = 0x00000001,
    WaitingToRun = 0x00000002,
    Running = 0x00000003,
    WaitingForChildrenToComplete = 0x00000004,
    RanToCompletion = 0x00000005,
    Canceled = 0x00000006,
    Faulted = 0x00000007,
};

struct TaskStatus__Enum__Boxed {
    struct TaskStatus__Enum__Class *klass;
    MonitorData *monitor;
    TaskStatus__Enum value;
    
};

struct TaskStatus__Enum__VTable {
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

struct TaskStatus__Enum__StaticFields {
};

struct TaskStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskStatus__Enum__VTable vtable;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields {
    struct IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
    struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___VTable vtable;
};

struct TaskAwaiter {
    struct Task *m_task;
};

struct TaskAwaiter__Boxed {
    struct TaskAwaiter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskAwaiter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskAwaiter__VTable vtable;
};

struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter {
    struct Task *m_task;
    bool m_continueOnCapturedContext;
};

struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed {
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class *klass;
    MonitorData *monitor;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter fields;
};

struct ConfiguredTaskAwaitable {
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter m_configuredTaskAwaiter;
};

struct ConfiguredTaskAwaitable__Boxed {
    struct ConfiguredTaskAwaitable__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfiguredTaskAwaitable__VTable vtable;
};

struct YieldAwaitable {
};

struct YieldAwaitable__Boxed {
    struct YieldAwaitable__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct YieldAwaitable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct YieldAwaitable__VTable vtable;
};

struct Action_1_System_Threading_Tasks_Task___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_System_Threading_Tasks_Task_ {
    struct Action_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_System_Threading_Tasks_Task___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_System_Threading_Tasks_Task___VTable vtable;
};

struct TaskCreationOptions___VTable {
};

struct TaskCreationOptions___StaticFields {
};

struct TaskCreationOptions___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskCreationOptions___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskCreationOptions___VTable vtable;
};

struct InternalTaskOptions___VTable {
};

struct InternalTaskOptions___StaticFields {
};

struct InternalTaskOptions___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InternalTaskOptions___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InternalTaskOptions___VTable vtable;
};

}
