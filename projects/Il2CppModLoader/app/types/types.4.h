namespace app {
struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_ {
    struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Class *klass;
    MonitorData *monitor;
    struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Fields fields;
};

struct Ephemeron {
    struct Object *key;
    struct Object *value;
};

struct Ephemeron__Boxed {
    struct Ephemeron__Class *klass;
    MonitorData *monitor;
    struct Ephemeron fields;
};

struct Ephemeron__Array {
    struct Ephemeron__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Ephemeron vector[32];
};

struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_ {
    struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Class *klass;
    MonitorData *monitor;
    struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Fields fields;
};

struct EventArgs {
    struct EventArgs__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) UnobservedTaskExceptionEventArgs__Fields {
    struct AggregateException *m_exception;
    bool m_observed;
};

struct UnobservedTaskExceptionEventArgs {
    struct UnobservedTaskExceptionEventArgs__Class *klass;
    MonitorData *monitor;
    struct UnobservedTaskExceptionEventArgs__Fields fields;
};

struct __declspec(align(8)) Exception__Fields {
    struct String *_className;
    struct String *_message;
    struct IDictionary *_data;
    struct Exception *_innerException;
    struct String *_helpURL;
    struct Object *_stackTrace;
    struct String *_stackTraceString;
    struct String *_remoteStackTraceString;
    int32_t _remoteStackIndex;
    struct Object *_dynamicMethods;
    int32_t _HResult;
    struct String *_source;
    struct SafeSerializationManager *_safeSerializationManager;
    struct StackTrace__Array *captured_traces;
    struct IntPtr__Array *native_trace_ips;
};

struct Exception {
    struct Exception__Class *klass;
    MonitorData *monitor;
    struct Exception__Fields fields;
};

struct AggregateException__Fields {
    struct Exception__Fields _;
    struct ReadOnlyCollection_1_System_Exception_ *m_innerExceptions;
};

struct AggregateException {
    struct AggregateException__Class *klass;
    MonitorData *monitor;
    struct AggregateException__Fields fields;
};

struct IDictionary {
    struct IDictionary__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SafeSerializationManager__Fields {
    struct IList_1_System_Object_ *m_serializedStates;
    struct SerializationInfo *m_savedSerializationInfo;
    struct Object *m_realObject;
    struct RuntimeType *m_realType;
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_ *SerializeObjectState;
};

struct SafeSerializationManager {
    struct SafeSerializationManager__Class *klass;
    MonitorData *monitor;
    struct SafeSerializationManager__Fields fields;
};

struct IList_1_System_Object_ {
    struct IList_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_ {
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Class *klass;
    MonitorData *monitor;
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Fields fields;
};

struct __declspec(align(8)) SafeSerializationEventArgs__Fields {
    struct StreamingContext m_streamingContext;
    struct List_1_System_Object_ *m_serializedStates;
};

struct SafeSerializationEventArgs {
    struct SafeSerializationEventArgs__Class *klass;
    MonitorData *monitor;
    struct SafeSerializationEventArgs__Fields fields;
};

struct __declspec(align(8)) List_1_System_Object___Fields {
    struct Object__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Object_ {
    struct List_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Object___Fields fields;
};

struct __declspec(align(8)) StackTrace__Fields {
    struct StackFrame__Array *frames;
    struct StackTrace__Array *captured_traces;
    bool debug_info;
};

struct StackTrace {
    struct StackTrace__Class *klass;
    MonitorData *monitor;
    struct StackTrace__Fields fields;
};

struct __declspec(align(8)) StackFrame__Fields {
    int32_t ilOffset;
    int32_t nativeOffset;
    int64_t methodAddress;
    uint32_t methodIndex;
    struct MethodBase *methodBase;
    struct String *fileName;
    int32_t lineNumber;
    int32_t columnNumber;
    struct String *internalMethodName;
};

struct StackFrame {
    struct StackFrame__Class *klass;
    MonitorData *monitor;
    struct StackFrame__Fields fields;
};

struct StackFrame__Array {
    struct StackFrame__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StackFrame *vector[32];
};

struct StackTrace__Array {
    struct StackTrace__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StackTrace *vector[32];
};

struct IntPtr__Array {
    struct IntPtr__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    void *vector[32];
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Exception___Fields {
    struct IList_1_System_Exception_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Exception_ {
    struct ReadOnlyCollection_1_System_Exception___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Exception___Fields fields;
};

struct IList_1_System_Exception_ {
    struct IList_1_System_Exception___Class *klass;
    MonitorData *monitor;
};

struct Exception__Array {
    struct Exception__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Exception *vector[32];
};

struct IEnumerator_1_System_Exception_ {
    struct IEnumerator_1_System_Exception___Class *klass;
    MonitorData *monitor;
};

struct ThreadPoolTaskScheduler__Fields {
    struct TaskScheduler__Fields _;
};

struct ThreadPoolTaskScheduler {
    struct ThreadPoolTaskScheduler__Class *klass;
    MonitorData *monitor;
    struct ThreadPoolTaskScheduler__Fields fields;
};

struct ParameterizedThreadStart__Fields {
    struct MulticastDelegate__Fields _;
};

struct ParameterizedThreadStart {
    struct ParameterizedThreadStart__Class *klass;
    MonitorData *monitor;
    struct ParameterizedThreadStart__Fields fields;
};

struct IEnumerable_1_System_Threading_Tasks_Task_ {
    struct IEnumerable_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_System_Threading_Tasks_Task___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ {
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct Task *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Fields {
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Fields {
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Fields fields;
};

struct Task__Array {
    struct Task__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Task *vector[32];
};

struct IEnumerator_1_System_Threading_Tasks_Task_ {
    struct IEnumerator_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Threading_Tasks_Task_ {
    struct ICollection_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ {
    int32_t key;
    struct Task *value;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Boxed {
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ fields;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Array {
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Task_ContingentProperties__Fields {
    struct ExecutionContext *m_capturedContext;
    struct ManualResetEventSlim *m_completionEvent;
    struct TaskExceptionHolder *m_exceptionsHolder;
    struct CancellationToken m_cancellationToken;
    struct Shared_1_System_Threading_CancellationTokenRegistration_ *m_cancellationRegistration;
    int32_t m_internalCancellationRequested;
    int32_t m_completionCountdown;
    struct List_1_System_Threading_Tasks_Task_ *m_exceptionalChildren;
};

struct Task_ContingentProperties {
    struct Task_ContingentProperties__Class *klass;
    MonitorData *monitor;
    struct Task_ContingentProperties__Fields fields;
};

struct __declspec(align(8)) ManualResetEventSlim__Fields {
    struct Object *m_lock;
    struct ManualResetEvent *m_eventObj;
    int32_t m_combinedState;
};

struct ManualResetEventSlim {
    struct ManualResetEventSlim__Class *klass;
    MonitorData *monitor;
    struct ManualResetEventSlim__Fields fields;
};

struct __declspec(align(8)) TaskExceptionHolder__Fields {
    struct Task *m_task;
    struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ *m_faultExceptions;
    struct ExceptionDispatchInfo *m_cancellationException;
    bool m_isHandled;
};

struct TaskExceptionHolder {
    struct TaskExceptionHolder__Class *klass;
    MonitorData *monitor;
    struct TaskExceptionHolder__Fields fields;
};

struct EventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler {
    struct EventHandler__Class *klass;
    MonitorData *monitor;
    struct EventHandler__Fields fields;
};

struct __declspec(align(8)) List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields {
    struct ExceptionDispatchInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
    struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields fields;
};

struct __declspec(align(8)) ExceptionDispatchInfo__Fields {
    struct Exception *m_Exception;
    struct Object *m_stackTrace;
};

struct ExceptionDispatchInfo {
    struct ExceptionDispatchInfo__Class *klass;
    MonitorData *monitor;
    struct ExceptionDispatchInfo__Fields fields;
};

struct ExceptionDispatchInfo__Array {
    struct ExceptionDispatchInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExceptionDispatchInfo *vector[32];
};

struct IEnumerator_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
    struct IEnumerator_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Shared_1_System_Threading_CancellationTokenRegistration___Fields {
    struct CancellationTokenRegistration Value;
};

struct Shared_1_System_Threading_CancellationTokenRegistration_ {
    struct Shared_1_System_Threading_CancellationTokenRegistration___Class *klass;
    MonitorData *monitor;
    struct Shared_1_System_Threading_CancellationTokenRegistration___Fields fields;
};

struct __declspec(align(8)) List_1_System_Threading_Tasks_Task___Fields {
    struct Task__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Threading_Tasks_Task_ {
    struct List_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Threading_Tasks_Task___Fields fields;
};

struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_System_Threading_Tasks_Task_ContingentProperties_ {
    struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Class *klass;
    MonitorData *monitor;
    struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Fields fields;
};

struct Predicate_1_System_Threading_Tasks_Task___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_System_Threading_Tasks_Task_ {
    struct Predicate_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_System_Threading_Tasks_Task___Fields fields;
};

struct Predicate_1_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_Object_ {
    struct Predicate_1_Object___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_Object___Fields fields;
};

struct SystemException__Fields {
    struct Exception__Fields _;
};

struct SystemException {
    struct SystemException__Class *klass;
    MonitorData *monitor;
    struct SystemException__Fields fields;
};

struct ThreadAbortException__Fields {
    struct SystemException__Fields _;
};

struct ThreadAbortException {
    struct ThreadAbortException__Class *klass;
    MonitorData *monitor;
    struct ThreadAbortException__Fields fields;
};

enum class InternalTaskOptions__Enum : int32_t {
    None = 0x00000000,
    InternalOptionsMask = 0x0000ff00,
    ChildReplica = 0x00000100,
    ContinuationTask = 0x00000200,
    PromiseTask = 0x00000400,
    SelfReplicating = 0x00000800,
    LazyCancellation = 0x00001000,
    QueuedByRuntime = 0x00002000,
    DoNotDispose = 0x00004000,
};

struct InternalTaskOptions__Enum__Boxed {
    struct InternalTaskOptions__Enum__Class *klass;
    MonitorData *monitor;
    InternalTaskOptions__Enum value;
    
};

struct __declspec(align(8)) TaskFactory_1_System_Int32___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_Int32_ {
    struct TaskFactory_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Int32___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1_ {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Fields fields;
};

struct Task_1_Task___Fields {
    struct Task__Fields _;
    struct Task *m_result;
};

struct Task_1_Task_ {
    struct Task_1_Task___Class *klass;
    MonitorData *monitor;
    struct Task_1_Task___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_Task___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_Task_ {
    struct TaskFactory_1_Task___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_Task___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Fields fields;
};

struct __declspec(align(8)) SemaphoreSlim__Fields {
    int32_t m_currentCount;
    int32_t m_maxCount;
    int32_t m_waitCount;
    struct Object *m_lockObj;
    struct ManualResetEvent *m_waitHandle;
    struct SemaphoreSlim_TaskNode *m_asyncHead;
    struct SemaphoreSlim_TaskNode *m_asyncTail;
};

struct SemaphoreSlim {
    struct SemaphoreSlim__Class *klass;
    MonitorData *monitor;
    struct SemaphoreSlim__Fields fields;
};

struct Task_1_System_Boolean___Fields {
    struct Task__Fields _;
    bool m_result;
};

struct Task_1_System_Boolean_ {
    struct Task_1_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Boolean___Fields fields;
};

struct SemaphoreSlim_TaskNode__Fields {
    struct Task_1_System_Boolean___Fields _;
    struct SemaphoreSlim_TaskNode *Prev;
    struct SemaphoreSlim_TaskNode *Next;
};

struct SemaphoreSlim_TaskNode {
    struct SemaphoreSlim_TaskNode__Class *klass;
    MonitorData *monitor;
    struct SemaphoreSlim_TaskNode__Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_Boolean___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_Boolean_ {
    struct TaskFactory_1_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Boolean___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Fields fields;
};

enum class FileAccess__Enum : int32_t {
    Read = 0x00000001,
    Write = 0x00000002,
    ReadWrite = 0x00000003,
};

struct FileAccess__Enum__Boxed {
    struct FileAccess__Enum__Class *klass;
    MonitorData *monitor;
    FileAccess__Enum value;
    
};

struct UnmanagedMemoryStream__Fields {
    struct Stream__Fields _;
    struct SafeBuffer *_buffer;
    uint8_t *_mem;
    int64_t _length;
    int64_t _capacity;
    int64_t _position;
    int64_t _offset;
    FileAccess__Enum _access;
    
    bool _isOpen;
    struct Task_1_System_Int32_ *_lastReadTask;
};

struct UnmanagedMemoryStream {
    struct UnmanagedMemoryStream__Class *klass;
    MonitorData *monitor;
    struct UnmanagedMemoryStream__Fields fields;
};

struct SafeBuffer__Fields {
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
    bool inited;
};

struct SafeBuffer {
    struct SafeBuffer__Class *klass;
    MonitorData *monitor;
    struct SafeBuffer__Fields fields;
};

enum class SeekOrigin__Enum : int32_t {
    Begin = 0x00000000,
    Current = 0x00000001,
    End = 0x00000002,
};

struct SeekOrigin__Enum__Boxed {
    struct SeekOrigin__Enum__Class *klass;
    MonitorData *monitor;
    SeekOrigin__Enum value;
    
};

enum class AssemblyNameFlags__Enum : int32_t {
    None = 0x00000000,
    PublicKey = 0x00000001,
    EnableJITcompileOptimizer = 0x00004000,
    EnableJITcompileTracking = 0x00008000,
    Retargetable = 0x00000100,
};

struct AssemblyNameFlags__Enum__Boxed {
    struct AssemblyNameFlags__Enum__Class *klass;
    MonitorData *monitor;
    AssemblyNameFlags__Enum value;
    
};

enum class AssemblyHashAlgorithm__Enum : int32_t {
    None = 0x00000000,
    MD5 = 0x00008003,
    SHA1 = 0x00008004,
    SHA256 = 0x0000800c,
    SHA384 = 0x0000800d,
    SHA512 = 0x0000800e,
};

struct AssemblyHashAlgorithm__Enum__Boxed {
    struct AssemblyHashAlgorithm__Enum__Class *klass;
    MonitorData *monitor;
    AssemblyHashAlgorithm__Enum value;
    
};

enum class AssemblyVersionCompatibility__Enum : int32_t {
    SameMachine = 0x00000001,
    SameProcess = 0x00000002,
    SameDomain = 0x00000003,
};

struct AssemblyVersionCompatibility__Enum__Boxed {
    struct AssemblyVersionCompatibility__Enum__Class *klass;
    MonitorData *monitor;
    AssemblyVersionCompatibility__Enum value;
    
};

enum class ProcessorArchitecture__Enum : int32_t {
    None = 0x00000000,
    MSIL = 0x00000001,
    X86 = 0x00000002,
    IA64 = 0x00000003,
    Amd64 = 0x00000004,
    Arm = 0x00000005,
};

struct ProcessorArchitecture__Enum__Boxed {
    struct ProcessorArchitecture__Enum__Class *klass;
    MonitorData *monitor;
    ProcessorArchitecture__Enum value;
    
};

enum class AssemblyContentType__Enum : int32_t {
    Default = 0x00000000,
    WindowsRuntime = 0x00000001,
};

struct AssemblyContentType__Enum__Boxed {
    struct AssemblyContentType__Enum__Class *klass;
    MonitorData *monitor;
    AssemblyContentType__Enum value;
    
};

struct __declspec(align(8)) AssemblyName__Fields {
    struct String *name;
    struct String *codebase;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    struct CultureInfo *cultureinfo;
    AssemblyNameFlags__Enum flags;
    
    AssemblyHashAlgorithm__Enum hashalg;
    
    struct StrongNameKeyPair *keypair;
    struct Byte__Array *publicKey;
    struct Byte__Array *keyToken;
    AssemblyVersionCompatibility__Enum versioncompat;
    
    struct Version *version;
    ProcessorArchitecture__Enum processor_architecture;
    
    AssemblyContentType__Enum contentType;
    
};

struct AssemblyName {
    struct AssemblyName__Class *klass;
    MonitorData *monitor;
    struct AssemblyName__Fields fields;
};

struct __declspec(align(8)) StrongNameKeyPair__Fields {
    struct Byte__Array *_publicKey;
    struct String *_keyPairContainer;
    bool _keyPairExported;
    struct Byte__Array *_keyPairArray;
};

struct StrongNameKeyPair {
    struct StrongNameKeyPair__Class *klass;
    MonitorData *monitor;
    struct StrongNameKeyPair__Fields fields;
};

struct __declspec(align(8)) Version__Fields {
    int32_t _Major;
    int32_t _Minor;
    int32_t _Build;
    int32_t _Revision;
};

struct Version {
    struct Version__Class *klass;
    MonitorData *monitor;
    struct Version__Fields fields;
};

struct Module__Array {
    struct Module__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Module *vector[32];
};

enum class ResourceLocation__Enum : int32_t {
    Embedded = 0x00000001,
    ContainedInAnotherAssembly = 0x00000002,
    ContainedInManifestFile = 0x00000004,
};

struct ResourceLocation__Enum__Boxed {
    struct ResourceLocation__Enum__Class *klass;
    MonitorData *monitor;
    ResourceLocation__Enum value;
    
};

struct __declspec(align(8)) ManifestResourceInfo__Fields {
    struct Assembly *_containingAssembly;
    struct String *_containingFileName;
    ResourceLocation__Enum _resourceLocation;
    
};

struct ManifestResourceInfo {
    struct ManifestResourceInfo__Class *klass;
    MonitorData *monitor;
    struct ManifestResourceInfo__Fields fields;
};

struct ConstructorInfo {
    struct ConstructorInfo__Class *klass;
    MonitorData *monitor;
};

struct RuntimeConstructorInfo {
    struct RuntimeConstructorInfo__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MonoCMethod__Fields {
    void *mhandle;
    struct String *name;
    struct Type *reftype;
};

struct MonoCMethod {
    struct MonoCMethod__Class *klass;
    MonitorData *monitor;
    struct MonoCMethod__Fields fields;
};

struct ConstructorInfo__Array {
    struct ConstructorInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConstructorInfo *vector[32];
};

struct __declspec(align(8)) EventInfo_1__Fields {
    struct EventInfo_AddEventAdapter *cached_add_event;
};

struct EventInfo_1 {
    struct EventInfo_1__Class *klass;
    MonitorData *monitor;
    struct EventInfo_1__Fields fields;
};

struct EventInfo_AddEventAdapter__Fields {
    struct MulticastDelegate__Fields _;
};

struct EventInfo_AddEventAdapter {
    struct EventInfo_AddEventAdapter__Class *klass;
    MonitorData *monitor;
    struct EventInfo_AddEventAdapter__Fields fields;
};

struct RuntimeEventInfo__Fields {
    struct EventInfo_1__Fields _;
};

struct RuntimeEventInfo {
    struct RuntimeEventInfo__Class *klass;
    MonitorData *monitor;
    struct RuntimeEventInfo__Fields fields;
};

struct MonoEvent__Fields {
    struct RuntimeEventInfo__Fields _;
    void *klass;
    void *handle;
};

struct MonoEvent {
    struct MonoEvent__Class *klass;
    MonitorData *monitor;
    struct MonoEvent__Fields fields;
};

struct EventInfo_1__Array {
    struct EventInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EventInfo_1 *vector[32];
};

struct MemberInfo_1__Array {
    struct MemberInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MemberInfo_1 *vector[32];
};

enum class TypeAttributes__Enum : int32_t {
    VisibilityMask = 0x00000007,
    NotPublic = 0x00000000,
    Public = 0x00000001,
    NestedPublic = 0x00000002,
    NestedPrivate = 0x00000003,
    NestedFamily = 0x00000004,
    NestedAssembly = 0x00000005,
    NestedFamANDAssem = 0x00000006,
    NestedFamORAssem = 0x00000007,
    LayoutMask = 0x00000018,
    AutoLayout = 0x00000000,
    SequentialLayout = 0x00000008,
    ExplicitLayout = 0x00000010,
    ClassSemanticsMask = 0x00000020,
    Class = 0x00000000,
    Interface = 0x00000020,
    Abstract = 0x00000080,
    Sealed = 0x00000100,
    SpecialName = 0x00000400,
    Import = 0x00001000,
    Serializable = 0x00002000,
    WindowsRuntime = 0x00004000,
    StringFormatMask = 0x00030000,
    AnsiClass = 0x00000000,
    UnicodeClass = 0x00010000,
    AutoClass = 0x00020000,
    CustomFormatClass = 0x00030000,
    CustomFormatMask = 0x00c00000,
    BeforeFieldInit = 0x00100000,
    ReservedMask = 0x00040800,
    RTSpecialName = 0x00000800,
    HasSecurity = 0x00040000,
};

}
