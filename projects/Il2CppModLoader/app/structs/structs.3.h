namespace app {
    enum class PropertyAttributes__Enum : int32_t {
        None = 0x00000000,
        SpecialName = 0x00000200,
        ReservedMask = 0x0000f400,
        RTSpecialName = 0x00000400,
        HasDefault = 0x00001000,
        Reserved2 = 0x00002000,
        Reserved3 = 0x00004000,
        Reserved4 = 0x00008000,
    };

    struct PropertyAttributes__Enum__Boxed {
        struct PropertyAttributes__Enum__Class* klass;
        MonitorData* monitor;
        PropertyAttributes__Enum value;
    };

    struct MonoPropertyInfo {
        struct Type* parent;
        struct Type* declaring_type;
        struct String* name;
        struct MethodInfo_1* get_method;
        struct MethodInfo_1* set_method;
        PropertyAttributes__Enum attrs;
    };

    struct MonoPropertyInfo__Boxed {
        struct MonoPropertyInfo__Class* klass;
        MonitorData* monitor;
        struct MonoPropertyInfo fields;
    };

    enum class PInfo__Enum : int32_t {
        Attributes = 0x00000001,
        GetMethod = 0x00000002,
        SetMethod = 0x00000004,
        ReflectedType = 0x00000008,
        DeclaringType = 0x00000010,
        Name = 0x00000020,
    };

    struct PInfo__Enum__Boxed {
        struct PInfo__Enum__Class* klass;
        MonitorData* monitor;
        PInfo__Enum value;
    };

    struct __declspec(align(8)) MonoProperty__Fields {
        void* klass;
        void* prop;
        struct MonoPropertyInfo info;
        PInfo__Enum cached;

        struct MonoProperty_GetterAdapter* cached_getter;
    };

    struct MonoProperty {
        struct MonoProperty__Class* klass;
        MonitorData* monitor;
        struct MonoProperty__Fields fields;
    };

    struct MethodInfo_1__Array {
        struct MethodInfo_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MethodInfo_1* vector[32];
    };

    struct MonoProperty_GetterAdapter__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct MonoProperty_GetterAdapter {
        struct MonoProperty_GetterAdapter__Class* klass;
        MonitorData* monitor;
        struct MonoProperty_GetterAdapter__Fields fields;
    };

    struct Delegate__Array {
        struct Delegate__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Delegate* vector[32];
    };

    struct IAsyncResult {
        struct IAsyncResult__Class* klass;
        MonitorData* monitor;
    };

    struct AsyncCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AsyncCallback {
        struct AsyncCallback__Class* klass;
        MonitorData* monitor;
        struct AsyncCallback__Fields fields;
    };

    struct PropertyInfo_1__Array {
        struct PropertyInfo_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PropertyInfo_1* vector[32];
    };

    enum class CallingConventions__Enum : int32_t {
        Standard = 0x00000001,
        VarArgs = 0x00000002,
        Any = 0x00000003,
        HasThis = 0x00000020,
        ExplicitThis = 0x00000040,
    };

    struct CallingConventions__Enum__Boxed {
        struct CallingConventions__Enum__Class* klass;
        MonitorData* monitor;
        CallingConventions__Enum value;
    };

    struct __declspec(align(8)) MethodBody__Fields {
        struct ExceptionHandlingClause__Array* clauses;
        struct LocalVariableInfo__Array* locals;
        struct Byte__Array* il;
        bool init_locals;
        int32_t sig_token;
        int32_t max_stack;
    };

    struct MethodBody {
        struct MethodBody__Class* klass;
        MonitorData* monitor;
        struct MethodBody__Fields fields;
    };

    enum class ExceptionHandlingClauseOptions__Enum : int32_t {
        Clause = 0x00000000,
        Filter = 0x00000001,
        Finally = 0x00000002,
        Fault = 0x00000004,
    };

    struct ExceptionHandlingClauseOptions__Enum__Boxed {
        struct ExceptionHandlingClauseOptions__Enum__Class* klass;
        MonitorData* monitor;
        ExceptionHandlingClauseOptions__Enum value;
    };

    struct __declspec(align(8)) ExceptionHandlingClause__Fields {
        struct Type* catch_type;
        int32_t filter_offset;
        ExceptionHandlingClauseOptions__Enum flags;

        int32_t try_offset;
        int32_t try_length;
        int32_t handler_offset;
        int32_t handler_length;
    };

    struct ExceptionHandlingClause {
        struct ExceptionHandlingClause__Class* klass;
        MonitorData* monitor;
        struct ExceptionHandlingClause__Fields fields;
    };

    struct ExceptionHandlingClause__Array {
        struct ExceptionHandlingClause__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ExceptionHandlingClause* vector[32];
    };

    struct __declspec(align(8)) LocalVariableInfo__Fields {
        struct Type* type;
        bool is_pinned;
        uint16_t position;
    };

    struct LocalVariableInfo {
        struct LocalVariableInfo__Class* klass;
        MonitorData* monitor;
        struct LocalVariableInfo__Fields fields;
    };

    struct LocalVariableInfo__Array {
        struct LocalVariableInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LocalVariableInfo* vector[32];
    };

    struct __declspec(align(8)) DelegateData__Fields {
        struct Type* target_type;
        struct String* method_name;
        bool curried_first_arg;
    };

    struct DelegateData {
        struct DelegateData__Class* klass;
        MonitorData* monitor;
        struct DelegateData__Fields fields;
    };

    struct __declspec(align(8)) Assembly__Fields {
        void* _mono_assembly;
        struct Assembly_ResolveEventHolder* resolve_event_holder;
        struct Object* _evidence;
        struct Object* _minimum;
        struct Object* _optional;
        struct Object* _refuse;
        struct Object* _granted;
        struct Object* _denied;
        bool fromByteArray;
        struct String* assemblyName;
    };

    struct Assembly {
        struct Assembly__Class* klass;
        MonitorData* monitor;
        struct Assembly__Fields fields;
    };

    struct Assembly_ResolveEventHolder {
        struct Assembly_ResolveEventHolder__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) MarshalByRefObject__Fields {
        struct Object* _identity;
    };

    struct MarshalByRefObject {
        struct MarshalByRefObject__Class* klass;
        MonitorData* monitor;
        struct MarshalByRefObject__Fields fields;
    };

    struct Stream__Fields {
        struct MarshalByRefObject__Fields _;
        struct Stream_ReadWriteTask* _activeReadWriteTask;
        struct SemaphoreSlim* _asyncActiveSemaphore;
    };

    struct Stream {
        struct Stream__Class* klass;
        MonitorData* monitor;
        struct Stream__Fields fields;
    };

    struct __declspec(align(8)) ObjRef__Fields {
        struct IChannelInfo* channel_info;
        struct String* uri;
        struct IRemotingTypeInfo* typeInfo;
        struct IEnvoyInfo* envoyInfo;
        int32_t flags;
        struct Type* _serverType;
    };

    struct ObjRef {
        struct ObjRef__Class* klass;
        MonitorData* monitor;
        struct ObjRef__Fields fields;
    };

    struct IChannelInfo {
        struct IChannelInfo__Class* klass;
        MonitorData* monitor;
    };

    struct IRemotingTypeInfo {
        struct IRemotingTypeInfo__Class* klass;
        MonitorData* monitor;
    };

    struct IEnvoyInfo {
        struct IEnvoyInfo__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Task__Fields {
        int32_t m_taskId;
        struct Object* m_action;
        struct Object* m_stateObject;
        struct TaskScheduler* m_taskScheduler;
        struct Task* m_parent;
        int32_t m_stateFlags;
        struct Object* m_continuationObject;
        struct Task_ContingentProperties* m_contingentProperties;
    };

    struct Task {
        struct Task__Class* klass;
        MonitorData* monitor;
        struct Task__Fields fields;
    };

    struct Task_1_System_Int32___Fields {
        struct Task__Fields _;
        int32_t m_result;
    };

    struct Task_1_System_Int32_ {
        struct Task_1_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Task_1_System_Int32___Fields fields;
    };

    struct Stream_ReadWriteTask__Fields {
        struct Task_1_System_Int32___Fields _;
        bool _isRead;
        struct Stream* _stream;
        struct Byte__Array* _buffer;
        int32_t _offset;
        int32_t _count;
        struct AsyncCallback* _callback;
        struct ExecutionContext* _context;
    };

    struct Stream_ReadWriteTask {
        struct Stream_ReadWriteTask__Class* klass;
        MonitorData* monitor;
        struct Stream_ReadWriteTask__Fields fields;
    };

    struct __declspec(align(8)) StackGuard__Fields {
        int32_t m_inliningDepth;
    };

    struct StackGuard {
        struct StackGuard__Class* klass;
        MonitorData* monitor;
        struct StackGuard__Fields fields;
    };

    struct CancellationToken {
        struct CancellationTokenSource* m_source;
    };

    struct CancellationToken__Boxed {
        struct CancellationToken__Class* klass;
        MonitorData* monitor;
        struct CancellationToken fields;
    };

    enum class TaskCreationOptions__Enum : int32_t {
        None = 0x00000000,
        PreferFairness = 0x00000001,
        LongRunning = 0x00000002,
        AttachedToParent = 0x00000004,
        DenyChildAttach = 0x00000008,
        HideScheduler = 0x00000010,
        RunContinuationsAsynchronously = 0x00000040,
    };

    struct TaskCreationOptions__Enum__Boxed {
        struct TaskCreationOptions__Enum__Class* klass;
        MonitorData* monitor;
        TaskCreationOptions__Enum value;
    };

    enum class TaskContinuationOptions__Enum : int32_t {
        None = 0x00000000,
        PreferFairness = 0x00000001,
        LongRunning = 0x00000002,
        AttachedToParent = 0x00000004,
        DenyChildAttach = 0x00000008,
        HideScheduler = 0x00000010,
        LazyCancellation = 0x00000020,
        RunContinuationsAsynchronously = 0x00000040,
        NotOnRanToCompletion = 0x00010000,
        NotOnFaulted = 0x00020000,
        NotOnCanceled = 0x00040000,
        OnlyOnRanToCompletion = 0x00060000,
        OnlyOnFaulted = 0x00050000,
        OnlyOnCanceled = 0x00030000,
        ExecuteSynchronously = 0x00080000,
    };

    struct TaskContinuationOptions__Enum__Boxed {
        struct TaskContinuationOptions__Enum__Class* klass;
        MonitorData* monitor;
        TaskContinuationOptions__Enum value;
    };

    struct __declspec(align(8)) TaskFactory__Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory {
        struct TaskFactory__Class* klass;
        MonitorData* monitor;
        struct TaskFactory__Fields fields;
    };

    struct __declspec(align(8)) CancellationTokenSource__Fields {
        struct ManualResetEvent* m_kernelEvent;
        struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array* m_registeredCallbacksLists;
        int32_t m_state;
        int32_t m_threadIDExecutingCallbacks;
        bool m_disposed;
        struct CancellationTokenRegistration__Array* m_linkingRegistrations;
        struct CancellationCallbackInfo* m_executingCallback;
        struct Timer* m_timer;
    };

    struct CancellationTokenSource {
        struct CancellationTokenSource__Class* klass;
        MonitorData* monitor;
        struct CancellationTokenSource__Fields fields;
    };

    struct WaitHandle__Fields {
        struct MarshalByRefObject__Fields _;
        void* waitHandle;
        struct SafeWaitHandle* safeWaitHandle;
        bool hasThreadAffinity;
    };

    struct WaitHandle {
        struct WaitHandle__Class* klass;
        MonitorData* monitor;
        struct WaitHandle__Fields fields;
    };

    struct EventWaitHandle__Fields {
        struct WaitHandle__Fields _;
    };

    struct EventWaitHandle {
        struct EventWaitHandle__Class* klass;
        MonitorData* monitor;
        struct EventWaitHandle__Fields fields;
    };

    struct ManualResetEvent__Fields {
        struct EventWaitHandle__Fields _;
    };

    struct ManualResetEvent {
        struct ManualResetEvent__Class* klass;
        MonitorData* monitor;
        struct ManualResetEvent__Fields fields;
    };

    struct CriticalFinalizerObject {
        struct CriticalFinalizerObject__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SafeHandle__Fields {
        void* handle;
        int32_t _state;
        bool _ownsHandle;
        bool _fullyInitialized;
    };

    struct SafeHandle {
        struct SafeHandle__Class* klass;
        MonitorData* monitor;
        struct SafeHandle__Fields fields;
    };

    struct SafeHandleZeroOrMinusOneIsInvalid__Fields {
        struct SafeHandle__Fields _;
    };

    struct SafeHandleZeroOrMinusOneIsInvalid {
        struct SafeHandleZeroOrMinusOneIsInvalid__Class* klass;
        MonitorData* monitor;
        struct SafeHandleZeroOrMinusOneIsInvalid__Fields fields;
    };

    struct SafeWaitHandle__Fields {
        struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
    };

    struct SafeWaitHandle {
        struct SafeWaitHandle__Class* klass;
        MonitorData* monitor;
        struct SafeWaitHandle__Fields fields;
    };

    struct SafeFileHandle__Fields {
        struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
    };

    struct SafeFileHandle {
        struct SafeFileHandle__Class* klass;
        MonitorData* monitor;
        struct SafeFileHandle__Fields fields;
    };

    struct TimeSpan {
        int64_t _ticks;
    };

    struct TimeSpan__Boxed {
        struct TimeSpan__Class* klass;
        MonitorData* monitor;
        struct TimeSpan fields;
    };

    struct __declspec(align(8)) SparselyPopulatedArray_1_CancellationCallbackInfo___Fields {
        struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* m_tail;
    };

    struct SparselyPopulatedArray_1_CancellationCallbackInfo_ {
        struct SparselyPopulatedArray_1_CancellationCallbackInfo___Class* klass;
        MonitorData* monitor;
        struct SparselyPopulatedArray_1_CancellationCallbackInfo___Fields fields;
    };

    struct __declspec(align(8)) SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Fields {
        struct CancellationCallbackInfo__Array* m_elements;
        int32_t m_freeCount;
        struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* m_next;
        struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* m_prev;
    };

    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ {
        struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Class* klass;
        MonitorData* monitor;
        struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Fields fields;
    };

    struct __declspec(align(8)) CancellationCallbackInfo__Fields {
        struct Action_1_Object_* Callback;
        struct Object* StateForCallback;
        struct SynchronizationContext* TargetSyncContext;
        struct ExecutionContext* TargetExecutionContext;
        struct CancellationTokenSource* CancellationTokenSource;
    };

    struct CancellationCallbackInfo {
        struct CancellationCallbackInfo__Class* klass;
        MonitorData* monitor;
        struct CancellationCallbackInfo__Fields fields;
    };

    struct Action_1_Object___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Object_ {
        struct Action_1_Object___Class* klass;
        MonitorData* monitor;
        struct Action_1_Object___Fields fields;
    };

    enum class SynchronizationContextProperties__Enum : int32_t {
        None = 0x00000000,
        RequireWaitNotification = 0x00000001,
    };

    struct SynchronizationContextProperties__Enum__Boxed {
        struct SynchronizationContextProperties__Enum__Class* klass;
        MonitorData* monitor;
        SynchronizationContextProperties__Enum value;
    };

    struct __declspec(align(8)) SynchronizationContext__Fields {
        SynchronizationContextProperties__Enum _props;
    };

    struct SynchronizationContext {
        struct SynchronizationContext__Class* klass;
        MonitorData* monitor;
        struct SynchronizationContext__Fields fields;
    };

    struct SendOrPostCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct SendOrPostCallback {
        struct SendOrPostCallback__Class* klass;
        MonitorData* monitor;
        struct SendOrPostCallback__Fields fields;
    };

    enum class ExecutionContext_Flags__Enum : int32_t {
        None = 0x00000000,
        IsNewCapture = 0x00000001,
        IsFlowSuppressed = 0x00000002,
        IsPreAllocatedDefault = 0x00000004,
    };

    struct ExecutionContext_Flags__Enum__Boxed {
        struct ExecutionContext_Flags__Enum__Class* klass;
        MonitorData* monitor;
        ExecutionContext_Flags__Enum value;
    };

    struct __declspec(align(8)) ExecutionContext__Fields {
        struct SynchronizationContext* _syncContext;
        struct SynchronizationContext* _syncContextNoFlow;
        struct LogicalCallContext* _logicalCallContext;
        struct IllogicalCallContext* _illogicalCallContext;
        ExecutionContext_Flags__Enum _flags;

        struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_* _localValues;
        struct List_1_System_Threading_IAsyncLocal_* _localChangeNotifications;
    };

    struct ExecutionContext {
        struct ExecutionContext__Class* klass;
        MonitorData* monitor;
        struct ExecutionContext__Fields fields;
    };

    struct __declspec(align(8)) LogicalCallContext__Fields {
        struct Hashtable* m_Datastore;
        struct CallContextRemotingData* m_RemotingData;
        struct CallContextSecurityData* m_SecurityData;
        struct Object* m_HostContext;
        bool m_IsCorrelationMgr;
        struct Header__Array* _sendHeaders;
        struct Header__Array* _recvHeaders;
    };

    struct LogicalCallContext {
        struct LogicalCallContext__Class* klass;
        MonitorData* monitor;
        struct LogicalCallContext__Fields fields;
    };

    struct __declspec(align(8)) CallContextRemotingData__Fields {
        struct String* _logicalCallID;
    };

    struct CallContextRemotingData {
        struct CallContextRemotingData__Class* klass;
        MonitorData* monitor;
        struct CallContextRemotingData__Fields fields;
    };

    struct __declspec(align(8)) CallContextSecurityData__Fields {
        struct IPrincipal* _principal;
    };

    struct CallContextSecurityData {
        struct CallContextSecurityData__Class* klass;
        MonitorData* monitor;
        struct CallContextSecurityData__Fields fields;
    };

    struct IPrincipal {
        struct IPrincipal__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Header__Fields {
        struct String* HeaderNamespace;
        bool MustUnderstand;
        struct String* Name;
        struct Object* Value;
    };

    struct Header {
        struct Header__Class* klass;
        MonitorData* monitor;
        struct Header__Fields fields;
    };

    struct Header__Array {
        struct Header__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Header* vector[32];
    };

    struct __declspec(align(8)) IllogicalCallContext__Fields {
        struct Hashtable* m_Datastore;
        struct Object* m_HostContext;
    };

    struct IllogicalCallContext {
        struct IllogicalCallContext__Class* klass;
        MonitorData* monitor;
        struct IllogicalCallContext__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Threading_IAsyncLocal_System_Object___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Threading_IAsyncLocal_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ {
        struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ {
        int32_t hashCode;
        int32_t next;
        struct IAsyncLocal* key;
        struct Object* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ fields;
    };

    struct IAsyncLocal {
        struct IAsyncLocal__Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ vector[32];
    };

    struct IEqualityComparer_1_System_Threading_IAsyncLocal_ {
        struct IEqualityComparer_1_System_Threading_IAsyncLocal___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Fields {
        struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Fields fields;
    };

    struct IAsyncLocal__Array {
        struct IAsyncLocal__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IAsyncLocal* vector[32];
    };

    struct IEnumerator_1_System_Threading_IAsyncLocal_ {
        struct IEnumerator_1_System_Threading_IAsyncLocal___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Fields {
        struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Fields fields;
    };

    struct IEnumerator_1_System_Object_ {
        struct IEnumerator_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Threading_IAsyncLocal_ {
        struct ICollection_1_System_Threading_IAsyncLocal___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Object_ {
        struct ICollection_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ {
        struct IAsyncLocal* key;
        struct Object* value;
    };

    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Boxed {
        struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ fields;
    };

    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array {
        struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ {
        struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Threading_IAsyncLocal_ {
        struct IEnumerable_1_System_Threading_IAsyncLocal___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Object_ {
        struct IEnumerable_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_System_Threading_IAsyncLocal___Fields {
        struct IAsyncLocal__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Threading_IAsyncLocal_ {
        struct List_1_System_Threading_IAsyncLocal___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Threading_IAsyncLocal___Fields fields;
    };

    struct ContextCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct ContextCallback {
        struct ContextCallback__Class* klass;
        MonitorData* monitor;
        struct ContextCallback__Fields fields;
    };

    struct CancellationCallbackInfo__Array {
        struct CancellationCallbackInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CancellationCallbackInfo* vector[32];
    };

    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array {
        struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SparselyPopulatedArray_1_CancellationCallbackInfo_* vector[32];
    };

    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ {
        struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* m_source;
        int32_t m_index;
    };

    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Boxed {
        struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Class* klass;
        MonitorData* monitor;
        struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ fields;
    };

    struct CancellationTokenRegistration {
        struct CancellationCallbackInfo* m_callbackInfo;
        struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ m_registrationInfo;
    };

    struct CancellationTokenRegistration__Boxed {
        struct CancellationTokenRegistration__Class* klass;
        MonitorData* monitor;
        struct CancellationTokenRegistration fields;
    };

    struct CancellationTokenRegistration__Array {
        struct CancellationTokenRegistration__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CancellationTokenRegistration vector[32];
    };

    struct Timer__Fields {
        struct MarshalByRefObject__Fields _;
        struct TimerCallback* callback;
        struct Object* state;
        int64_t due_time_ms;
        int64_t period_ms;
        int64_t next_run;
        bool disposed;
    };

    struct Timer {
        struct Timer__Class* klass;
        MonitorData* monitor;
        struct Timer__Fields fields;
    };

    struct __declspec(align(8)) Timer_Scheduler__Fields {
        struct SortedList* list;
        struct ManualResetEvent* changed;
    };

    struct Timer_Scheduler {
        struct Timer_Scheduler__Class* klass;
        MonitorData* monitor;
        struct Timer_Scheduler__Fields fields;
    };

    struct __declspec(align(8)) SortedList__Fields {
        struct Object__Array* keys;
        struct Object__Array* values;
        int32_t _size;
        int32_t version;
        struct IComparer* comparer;
        struct SortedList_KeyList* keyList;
        struct SortedList_ValueList* valueList;
        struct Object* _syncRoot;
    };

    struct SortedList {
        struct SortedList__Class* klass;
        MonitorData* monitor;
        struct SortedList__Fields fields;
    };

    struct __declspec(align(8)) SortedList_KeyList__Fields {
        struct SortedList* sortedList;
    };

    struct SortedList_KeyList {
        struct SortedList_KeyList__Class* klass;
        MonitorData* monitor;
        struct SortedList_KeyList__Fields fields;
    };

    struct __declspec(align(8)) SortedList_ValueList__Fields {
        struct SortedList* sortedList;
    };

    struct SortedList_ValueList {
        struct SortedList_ValueList__Class* klass;
        MonitorData* monitor;
        struct SortedList_ValueList__Fields fields;
    };

    struct IList {
        struct IList__Class* klass;
        MonitorData* monitor;
    };

    struct TimerCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct TimerCallback {
        struct TimerCallback__Class* klass;
        MonitorData* monitor;
        struct TimerCallback__Fields fields;
    };

    struct __declspec(align(8)) TaskScheduler__Fields {
        int32_t m_taskSchedulerId;
    };

    struct TaskScheduler {
        struct TaskScheduler__Class* klass;
        MonitorData* monitor;
        struct TaskScheduler__Fields fields;
    };

    struct __declspec(align(8)) ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Fields {
        struct Ephemeron__Array* data;
        struct Object* _lock;
        int32_t size;
    };

} // namespace app
