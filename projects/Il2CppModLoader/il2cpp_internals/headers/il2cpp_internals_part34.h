namespace app {

struct __declspec(align(8)) AwaitTaskContinuation__Fields {
  struct ExecutionContext * m_capturedContext;
  struct Action * m_action;
};
struct AwaitTaskContinuation {
  struct AwaitTaskContinuation__Class *klass;
  struct MonitorData *monitor;
  struct AwaitTaskContinuation__Fields fields;
};
struct SynchronizationContextAwaitTaskContinuation__Fields {
  struct AwaitTaskContinuation__Fields _;
  struct SynchronizationContext * m_syncContext;
};
struct SynchronizationContextAwaitTaskContinuation {
  struct SynchronizationContextAwaitTaskContinuation__Class *klass;
  struct MonitorData *monitor;
  struct SynchronizationContextAwaitTaskContinuation__Fields fields;
};
struct AwaitTaskContinuation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Run;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
};
struct AwaitTaskContinuation__StaticFields {
  struct ContextCallback * s_invokeActionCallback;
};
struct AwaitTaskContinuation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AwaitTaskContinuation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AwaitTaskContinuation__VTable vtable;
};
struct SynchronizationContextAwaitTaskContinuation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Run;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
};
struct SynchronizationContextAwaitTaskContinuation__StaticFields {
  struct SendOrPostCallback * s_postCallback;
  struct ContextCallback * s_postActionCallback;
};
struct SynchronizationContextAwaitTaskContinuation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SynchronizationContextAwaitTaskContinuation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SynchronizationContextAwaitTaskContinuation__VTable vtable;
};

struct SynchronizationContextAwaitTaskContinuation_c {
  struct SynchronizationContextAwaitTaskContinuation_c__Class *klass;
  struct MonitorData *monitor;
};
struct SynchronizationContextAwaitTaskContinuation_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SynchronizationContextAwaitTaskContinuation_c__StaticFields {
  struct SynchronizationContextAwaitTaskContinuation_c * __9;
};
struct SynchronizationContextAwaitTaskContinuation_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SynchronizationContextAwaitTaskContinuation_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SynchronizationContextAwaitTaskContinuation_c__VTable vtable;
};

struct TaskSchedulerAwaitTaskContinuation__Fields {
  struct AwaitTaskContinuation__Fields _;
  struct TaskScheduler * m_scheduler;
};
struct TaskSchedulerAwaitTaskContinuation {
  struct TaskSchedulerAwaitTaskContinuation__Class *klass;
  struct MonitorData *monitor;
  struct TaskSchedulerAwaitTaskContinuation__Fields fields;
};
struct TaskSchedulerAwaitTaskContinuation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Run;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
};
struct TaskSchedulerAwaitTaskContinuation__StaticFields {
};
struct TaskSchedulerAwaitTaskContinuation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskSchedulerAwaitTaskContinuation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskSchedulerAwaitTaskContinuation__VTable vtable;
};

struct TaskSchedulerAwaitTaskContinuation_c {
  struct TaskSchedulerAwaitTaskContinuation_c__Class *klass;
  struct MonitorData *monitor;
};
struct TaskSchedulerAwaitTaskContinuation_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskSchedulerAwaitTaskContinuation_c__StaticFields {
  struct TaskSchedulerAwaitTaskContinuation_c * __9;
  struct Action_1_Object_ * __9__2_0;
};
struct TaskSchedulerAwaitTaskContinuation_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskSchedulerAwaitTaskContinuation_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskSchedulerAwaitTaskContinuation_c__VTable vtable;
};

struct AwaitTaskContinuation_c {
  struct AwaitTaskContinuation_c__Class *klass;
  struct MonitorData *monitor;
};
struct AwaitTaskContinuation_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AwaitTaskContinuation_c__StaticFields {
  struct AwaitTaskContinuation_c * __9;
  struct WaitCallback * __9__17_0;
};
struct AwaitTaskContinuation_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AwaitTaskContinuation_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AwaitTaskContinuation_c__VTable vtable;
};

struct IList_1_System_Threading_Tasks_Task_ {
  struct IList_1_System_Threading_Tasks_Task___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_System_Threading_Tasks_Task___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_System_Threading_Tasks_Task___StaticFields {
};
struct IList_1_System_Threading_Tasks_Task___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_System_Threading_Tasks_Task___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_System_Threading_Tasks_Task___VTable vtable;
};

struct TaskFactory_CompleteOnInvokePromise__Fields {
  struct Task_1_Task___Fields _;
  struct IList_1_System_Threading_Tasks_Task_ * _tasks;
  int32_t m_firstTaskAlreadyCompleted;
};
struct TaskFactory_CompleteOnInvokePromise {
  struct TaskFactory_CompleteOnInvokePromise__Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_CompleteOnInvokePromise__Fields fields;
};
struct TaskFactory_CompleteOnInvokePromise__VTable {
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
struct TaskFactory_CompleteOnInvokePromise__StaticFields {
};
struct TaskFactory_CompleteOnInvokePromise__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_CompleteOnInvokePromise__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_CompleteOnInvokePromise__VTable vtable;
};

struct __declspec(align(8)) TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Fields {
  struct TaskScheduler * m_taskScheduler;
};
struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView {
  struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class *klass;
  struct MonitorData *monitor;
  struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Fields fields;
};
struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__StaticFields {
};
struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__VTable vtable;
};

struct TaskSchedulerException__Fields {
  struct Exception__Fields _;
};
struct TaskSchedulerException {
  struct TaskSchedulerException__Class *klass;
  struct MonitorData *monitor;
  struct TaskSchedulerException__Fields fields;
};
struct TaskSchedulerException__VTable {
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
struct TaskSchedulerException__StaticFields {
};
struct TaskSchedulerException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskSchedulerException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskSchedulerException__VTable vtable;
};

struct __declspec(align(8)) TaskToApm_TaskWrapperAsyncResult__Fields {
  struct Task * Task;
  struct Object * m_state;
  bool m_completedSynchronously;
};
struct TaskToApm_TaskWrapperAsyncResult {
  struct TaskToApm_TaskWrapperAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct TaskToApm_TaskWrapperAsyncResult__Fields fields;
};
struct TaskToApm_TaskWrapperAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IAsyncResult_get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData System_IAsyncResult_get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
};
struct TaskToApm_TaskWrapperAsyncResult__StaticFields {
};
struct TaskToApm_TaskWrapperAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskToApm_TaskWrapperAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskToApm_TaskWrapperAsyncResult__VTable vtable;
};

struct __declspec(align(8)) TaskToApm_c_DisplayClass3_0__Fields {
  struct AsyncCallback * callback;
  struct IAsyncResult * asyncResult;
};
struct TaskToApm_c_DisplayClass3_0 {
  struct TaskToApm_c_DisplayClass3_0__Class *klass;
  struct MonitorData *monitor;
  struct TaskToApm_c_DisplayClass3_0__Fields fields;
};
struct TaskToApm_c_DisplayClass3_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskToApm_c_DisplayClass3_0__StaticFields {
};
struct TaskToApm_c_DisplayClass3_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskToApm_c_DisplayClass3_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskToApm_c_DisplayClass3_0__VTable vtable;
};

struct __declspec(align(8)) ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Fields {
  int32_t __1__state;
  struct Task * __2__current;
  int32_t __l__initialThreadId;
  struct IEnumerable_1_System_Threading_IThreadPoolWorkItem_ * tpwItems;
  struct IEnumerable_1_System_Threading_IThreadPoolWorkItem_ * __3__tpwItems;
  struct IEnumerator_1_System_Threading_IThreadPoolWorkItem_ * __7__wrap1;
};
struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7 {
  struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class *klass;
  struct MonitorData *monitor;
  struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Fields fields;
};
struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Threading_Tasks_Task__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Threading_Tasks_Task__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__StaticFields {
};
struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__VTable vtable;
};

struct SuppressUnmanagedCodeSecurityAttribute {
  struct SuppressUnmanagedCodeSecurityAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct SuppressUnmanagedCodeSecurityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SuppressUnmanagedCodeSecurityAttribute__StaticFields {
};
struct SuppressUnmanagedCodeSecurityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SuppressUnmanagedCodeSecurityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SuppressUnmanagedCodeSecurityAttribute__VTable vtable;
};

struct UnverifiableCodeAttribute {
  struct UnverifiableCodeAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct UnverifiableCodeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UnverifiableCodeAttribute__StaticFields {
};
struct UnverifiableCodeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnverifiableCodeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnverifiableCodeAttribute__VTable vtable;
};

struct AllowPartiallyTrustedCallersAttribute {
  struct AllowPartiallyTrustedCallersAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct AllowPartiallyTrustedCallersAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AllowPartiallyTrustedCallersAttribute__StaticFields {
};
struct AllowPartiallyTrustedCallersAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllowPartiallyTrustedCallersAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllowPartiallyTrustedCallersAttribute__VTable vtable;
};

struct SecurityCriticalAttribute {
  struct SecurityCriticalAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct SecurityCriticalAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SecurityCriticalAttribute__StaticFields {
};
struct SecurityCriticalAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityCriticalAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityCriticalAttribute__VTable vtable;
};

struct SecuritySafeCriticalAttribute {
  struct SecuritySafeCriticalAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct SecuritySafeCriticalAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SecuritySafeCriticalAttribute__StaticFields {
};
struct SecuritySafeCriticalAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecuritySafeCriticalAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecuritySafeCriticalAttribute__VTable vtable;
};

enum SecurityRuleSet__Enum : uint8_t {
  SecurityRuleSet__Enum_None = 0,
  SecurityRuleSet__Enum_Level1 = 1,
  SecurityRuleSet__Enum_Level2 = 2,
};
struct SecurityRuleSet__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SecurityRuleSet__Enum value;
};
struct __declspec(align(8)) SecurityRulesAttribute__Fields {
  enum SecurityRuleSet__Enum m_ruleSet;
  bool m_skipVerificationInFullTrust;
};
struct SecurityRulesAttribute {
  struct SecurityRulesAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SecurityRulesAttribute__Fields fields;
};
struct SecurityRulesAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SecurityRulesAttribute__StaticFields {
};
struct SecurityRulesAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityRulesAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityRulesAttribute__VTable vtable;
};

struct __declspec(align(8)) SecurityDocument__Fields {
  struct Byte__Array * m_data;
};
struct SecurityDocument {
  struct SecurityDocument__Class *klass;
  struct MonitorData *monitor;
  struct SecurityDocument__Fields fields;
};
struct SecurityDocument__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SecurityDocument__StaticFields {
};
struct SecurityDocument__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityDocument__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityDocument__VTable vtable;
};

struct CodeAccessPermission {
  struct CodeAccessPermission__Class *klass;
  struct MonitorData *monitor;
};
struct IPermission {
  struct IPermission__Class *klass;
  struct MonitorData *monitor;
};
enum ReflectionPermissionFlag__Enum : int32_t {
  ReflectionPermissionFlag__Enum_NoFlags = 0,
  ReflectionPermissionFlag__Enum_TypeInformation = 1,
  ReflectionPermissionFlag__Enum_MemberAccess = 2,
  ReflectionPermissionFlag__Enum_ReflectionEmit = 4,
  ReflectionPermissionFlag__Enum_AllFlags = 7,
  ReflectionPermissionFlag__Enum_RestrictedMemberAccess = 8,
};
struct ReflectionPermissionFlag__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReflectionPermissionFlag__Enum value;
};
struct __declspec(align(8)) ReflectionPermission__Fields {
  enum ReflectionPermissionFlag__Enum flags;
};
struct ReflectionPermission {
  struct ReflectionPermission__Class *klass;
  struct MonitorData *monitor;
  struct ReflectionPermission__Fields fields;
};
struct IPermission__VTable {
  VirtualInvokeData Demand;
  VirtualInvokeData IsSubsetOf;
};
struct IPermission__StaticFields {
};
struct IPermission__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPermission__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPermission__VTable vtable;
};
struct ReflectionPermission__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Security_IPermission_Demand;
  VirtualInvokeData IsSubsetOf;
  VirtualInvokeData ToXml;
  VirtualInvokeData Copy;
  VirtualInvokeData Demand;
  VirtualInvokeData FromXml;
  VirtualInvokeData Intersect;
  VirtualInvokeData IsSubsetOf_1;
  VirtualInvokeData ToXml_1;
  VirtualInvokeData Union;
  VirtualInvokeData IsUnrestricted;
};
struct ReflectionPermission__StaticFields {
};
struct ReflectionPermission__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionPermission__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionPermission__VTable vtable;
};
struct CodeAccessPermission__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Security_IPermission_Demand;
  VirtualInvokeData IsSubsetOf;
  VirtualInvokeData ToXml;
  VirtualInvokeData __unknown;
  VirtualInvokeData Demand;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData Union;
};
struct CodeAccessPermission__StaticFields {
};
struct CodeAccessPermission__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CodeAccessPermission__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CodeAccessPermission__VTable vtable;
};

enum PermissionState__Enum : int32_t {
  PermissionState__Enum_Unrestricted = 1,
  PermissionState__Enum_None = 0,
};
struct PermissionState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PermissionState__Enum value;
};

struct __declspec(align(8)) PermissionSet__Fields {
  enum PermissionState__Enum state;
  struct ArrayList * list;
  bool _declsec;
  struct Boolean__Array * _ignored;
};
struct PermissionSet {
  struct PermissionSet__Class *klass;
  struct MonitorData *monitor;
  struct PermissionSet__Fields fields;
};
struct NamedPermissionSet__Fields {
  struct PermissionSet__Fields _;
  struct String * name;
  struct String * description;
};
struct NamedPermissionSet {
  struct NamedPermissionSet__Class *klass;
  struct MonitorData *monitor;
  struct NamedPermissionSet__Fields fields;
};
struct PermissionSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToXml;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData Demand;
  VirtualInvokeData ToXml_1;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData get_IsSynchronized_1;
  VirtualInvokeData get_SyncRoot_1;
};
struct PermissionSet__StaticFields {
  struct Object__Array * psUnrestricted;
  struct Object__Array * action;
};
struct PermissionSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PermissionSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PermissionSet__VTable vtable;
};
struct NamedPermissionSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToXml;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData Demand;
  VirtualInvokeData ToXml_1;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData get_IsSynchronized_1;
  VirtualInvokeData get_SyncRoot_1;
};
struct NamedPermissionSet__StaticFields {
};
struct NamedPermissionSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedPermissionSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedPermissionSet__VTable vtable;
};

struct __declspec(align(8)) SecurityElement_SecurityAttribute__Fields {
  struct String * _name;
  struct String * _value;
};
struct SecurityElement_SecurityAttribute {
  struct SecurityElement_SecurityAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SecurityElement_SecurityAttribute__Fields fields;
};
struct SecurityElement_SecurityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SecurityElement_SecurityAttribute__StaticFields {
};
struct SecurityElement_SecurityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityElement_SecurityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityElement_SecurityAttribute__VTable vtable;
};

struct SecurityException__Fields {
  struct SystemException__Fields _;
  struct String * permissionState;
};
struct SecurityException {
  struct SecurityException__Class *klass;
  struct MonitorData *monitor;
  struct SecurityException__Fields fields;
};
struct SecurityException__VTable {
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
struct SecurityException__StaticFields {
};
struct SecurityException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityException__VTable vtable;
};

struct XmlSyntaxException__Fields {
  struct SystemException__Fields _;
};
struct XmlSyntaxException {
  struct XmlSyntaxException__Class *klass;
  struct MonitorData *monitor;
  struct XmlSyntaxException__Fields fields;
};
struct XmlSyntaxException__VTable {
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
struct XmlSyntaxException__StaticFields {
};
struct XmlSyntaxException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSyntaxException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSyntaxException__VTable vtable;
};

struct __declspec(align(8)) Evidence_EvidenceEnumerator__Fields {
  struct IEnumerator * currentEnum;
  struct IEnumerator * hostEnum;
  struct IEnumerator * assemblyEnum;
};
struct Evidence_EvidenceEnumerator {
  struct Evidence_EvidenceEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct Evidence_EvidenceEnumerator__Fields fields;
};
struct Evidence_EvidenceEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct Evidence_EvidenceEnumerator__StaticFields {
};
struct Evidence_EvidenceEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Evidence_EvidenceEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Evidence_EvidenceEnumerator__VTable vtable;
};

enum SecurityAction__Enum : int32_t {
  SecurityAction__Enum_Demand = 2,
  SecurityAction__Enum_Assert = 3,
  SecurityAction__Enum_Deny = 4,
  SecurityAction__Enum_PermitOnly = 5,
  SecurityAction__Enum_LinkDemand = 6,
  SecurityAction__Enum_InheritanceDemand = 7,
  SecurityAction__Enum_RequestMinimum = 8,
  SecurityAction__Enum_RequestOptional = 9,
  SecurityAction__Enum_RequestRefuse = 10,
};
struct SecurityAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SecurityAction__Enum value;
};
struct __declspec(align(8)) SecurityAttribute__Fields {
  enum SecurityAction__Enum m_Action;
  bool m_Unrestricted;
};
struct SecurityAttribute {
  struct SecurityAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SecurityAttribute__Fields fields;
};
struct CodeAccessSecurityAttribute__Fields {
  struct SecurityAttribute__Fields _;
};
struct CodeAccessSecurityAttribute {
  struct CodeAccessSecurityAttribute__Class *klass;
  struct MonitorData *monitor;
  struct CodeAccessSecurityAttribute__Fields fields;
};
enum SecurityPermissionFlag__Enum : int32_t {
  SecurityPermissionFlag__Enum_NoFlags = 0,
  SecurityPermissionFlag__Enum_Assertion = 1,
  SecurityPermissionFlag__Enum_UnmanagedCode = 2,
  SecurityPermissionFlag__Enum_SkipVerification = 4,
  SecurityPermissionFlag__Enum_Execution = 8,
  SecurityPermissionFlag__Enum_ControlThread = 16,
  SecurityPermissionFlag__Enum_ControlEvidence = 32,
  SecurityPermissionFlag__Enum_ControlPolicy = 64,
  SecurityPermissionFlag__Enum_SerializationFormatter = 128,
  SecurityPermissionFlag__Enum_ControlDomainPolicy = 256,
  SecurityPermissionFlag__Enum_ControlPrincipal = 512,
  SecurityPermissionFlag__Enum_ControlAppDomain = 1024,
  SecurityPermissionFlag__Enum_RemotingConfiguration = 2048,
  SecurityPermissionFlag__Enum_Infrastructure = 4096,
  SecurityPermissionFlag__Enum_BindingRedirects = 8192,
  SecurityPermissionFlag__Enum_AllFlags = 16383,
};
struct SecurityPermissionFlag__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SecurityPermissionFlag__Enum value;
};
struct SecurityPermissionAttribute__Fields {
  struct CodeAccessSecurityAttribute__Fields _;
  enum SecurityPermissionFlag__Enum m_Flags;
};
struct SecurityPermissionAttribute {
  struct SecurityPermissionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SecurityPermissionAttribute__Fields fields;
};
struct SecurityPermissionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData CreatePermission;
};
struct SecurityPermissionAttribute__StaticFields {
};
struct SecurityPermissionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityPermissionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityPermissionAttribute__VTable vtable;
};
struct SecurityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData __unknown;
};
struct SecurityAttribute__StaticFields {
};
struct SecurityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityAttribute__VTable vtable;
};
struct CodeAccessSecurityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData __unknown;
};
struct CodeAccessSecurityAttribute__StaticFields {
};
struct CodeAccessSecurityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CodeAccessSecurityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CodeAccessSecurityAttribute__VTable vtable;
};

struct __declspec(align(8)) SecurityPermission__Fields {
  enum SecurityPermissionFlag__Enum flags;
};}