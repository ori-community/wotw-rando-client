namespace app {
struct Iterator_1_System_Object___StaticFields {
};

struct Iterator_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Iterator_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Iterator_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) SparselyPopulatedArray_1_System_Object___Fields {
    struct SparselyPopulatedArrayFragment_1_System_Object_ *m_tail;
};

struct SparselyPopulatedArray_1_System_Object_ {
    struct SparselyPopulatedArray_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct SparselyPopulatedArray_1_System_Object___Fields fields;
};

struct __declspec(align(8)) SparselyPopulatedArrayFragment_1_System_Object___Fields {
    struct Object__Array *m_elements;
    int32_t m_freeCount;
    struct SparselyPopulatedArrayFragment_1_System_Object_ *m_next;
    struct SparselyPopulatedArrayFragment_1_System_Object_ *m_prev;
};

struct SparselyPopulatedArrayFragment_1_System_Object_ {
    struct SparselyPopulatedArrayFragment_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct SparselyPopulatedArrayFragment_1_System_Object___Fields fields;
};

struct SparselyPopulatedArrayFragment_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SparselyPopulatedArrayFragment_1_System_Object___StaticFields {
};

struct SparselyPopulatedArrayFragment_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SparselyPopulatedArrayFragment_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SparselyPopulatedArrayFragment_1_System_Object___VTable vtable;
};

struct SparselyPopulatedArray_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SparselyPopulatedArray_1_System_Object___StaticFields {
};

struct SparselyPopulatedArray_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SparselyPopulatedArray_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SparselyPopulatedArray_1_System_Object___VTable vtable;
};

struct SparselyPopulatedArrayAddInfo_1_System_Object_ {
    struct SparselyPopulatedArrayFragment_1_System_Object_ *m_source;
    int32_t m_index;
};

struct SparselyPopulatedArrayAddInfo_1_System_Object___Boxed {
    struct SparselyPopulatedArrayAddInfo_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct SparselyPopulatedArrayAddInfo_1_System_Object_ fields;
};

struct SparselyPopulatedArrayAddInfo_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SparselyPopulatedArrayAddInfo_1_System_Object___StaticFields {
};

struct SparselyPopulatedArrayAddInfo_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SparselyPopulatedArrayAddInfo_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SparselyPopulatedArrayAddInfo_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) ThreadLocal_1_System_Object___Fields {
    struct Func_1_Object_ *m_valueFactory;
    int32_t m_idComplement;
    bool m_initialized;
    struct ThreadLocal_1_T_LinkedSlot_System_Object_ *m_linkedSlot;
    bool m_trackAllValues;
};

struct ThreadLocal_1_System_Object_ {
    struct ThreadLocal_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct ThreadLocal_1_System_Object___Fields fields;
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object_ {
    struct ThreadLocal_1_T_LinkedSlot_System_Object_ *Value;
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Boxed {
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Class *klass;
    MonitorData *monitor;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object_ fields;
};

struct __declspec(align(8)) ThreadLocal_1_T_LinkedSlot_System_Object___Fields {
    struct ThreadLocal_1_T_LinkedSlot_System_Object_ *Next;
    struct ThreadLocal_1_T_LinkedSlot_System_Object_ *Previous;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array *SlotArray;
    struct Object *Value;
};

struct ThreadLocal_1_T_LinkedSlot_System_Object_ {
    struct ThreadLocal_1_T_LinkedSlot_System_Object___Class *klass;
    MonitorData *monitor;
    struct ThreadLocal_1_T_LinkedSlot_System_Object___Fields fields;
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array {
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object_ vector[32];
};

struct __declspec(align(8)) ThreadLocal_1_T_FinalizationHelper_System_Object___Fields {
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array *SlotArray;
    bool m_trackAllValues;
};

struct ThreadLocal_1_T_FinalizationHelper_System_Object_ {
    struct ThreadLocal_1_T_FinalizationHelper_System_Object___Class *klass;
    MonitorData *monitor;
    struct ThreadLocal_1_T_FinalizationHelper_System_Object___Fields fields;
};

struct __declspec(align(8)) ThreadLocal_1_T_IdManager_System_Object___Fields {
    int32_t m_nextIdToTry;
    struct List_1_System_Boolean_ *m_freeIds;
};

struct ThreadLocal_1_T_IdManager_System_Object_ {
    struct ThreadLocal_1_T_IdManager_System_Object___Class *klass;
    MonitorData *monitor;
    struct ThreadLocal_1_T_IdManager_System_Object___Fields fields;
};

struct ThreadLocal_1_T_LinkedSlot_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ThreadLocal_1_T_LinkedSlot_System_Object___StaticFields {
};

struct ThreadLocal_1_T_LinkedSlot_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadLocal_1_T_LinkedSlot_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadLocal_1_T_LinkedSlot_System_Object___VTable vtable;
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___StaticFields {
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___VTable vtable;
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__VTable {
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__StaticFields {
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__VTable vtable;
};

struct ThreadLocal_1_T_FinalizationHelper_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ThreadLocal_1_T_FinalizationHelper_System_Object___StaticFields {
};

struct ThreadLocal_1_T_FinalizationHelper_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadLocal_1_T_FinalizationHelper_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadLocal_1_T_FinalizationHelper_System_Object___VTable vtable;
};

struct ThreadLocal_1_T_IdManager_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ThreadLocal_1_T_IdManager_System_Object___StaticFields {
};

struct ThreadLocal_1_T_IdManager_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadLocal_1_T_IdManager_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadLocal_1_T_IdManager_System_Object___VTable vtable;
};

struct ThreadLocal_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
};

struct ThreadLocal_1_System_Object___StaticFields {
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array *ts_slotArray;
    struct ThreadLocal_1_T_FinalizationHelper_System_Object_ *ts_finalizationHelper;
    struct ThreadLocal_1_T_IdManager_System_Object_ *s_idManager;
};

struct ThreadLocal_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadLocal_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadLocal_1_System_Object___VTable vtable;
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object__1__VTable {
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object__1__StaticFields {
};

struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadLocal_1_T_LinkedSlotVolatile_System_Object__1__VTable vtable;
};

struct __declspec(align(8)) SystemThreading_ThreadLocalDebugView_1_System_Object___Fields {
    struct ThreadLocal_1_System_Object_ *m_tlocal;
};

struct SystemThreading_ThreadLocalDebugView_1_System_Object_ {
    struct SystemThreading_ThreadLocalDebugView_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct SystemThreading_ThreadLocalDebugView_1_System_Object___Fields fields;
};

struct SystemThreading_ThreadLocalDebugView_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SystemThreading_ThreadLocalDebugView_1_System_Object___StaticFields {
};

struct SystemThreading_ThreadLocalDebugView_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SystemThreading_ThreadLocalDebugView_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SystemThreading_ThreadLocalDebugView_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) AsyncLocal_1_System_Object___Fields {
    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 *m_valueChangedHandler;
};

struct AsyncLocal_1_System_Object_ {
    struct AsyncLocal_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct AsyncLocal_1_System_Object___Fields fields;
};

struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 {
    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__Class *klass;
    MonitorData *monitor;
    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__Fields fields;
};

struct AsyncLocalValueChangedArgs_1_System_Object_ {
    struct Object *_PreviousValue_k__BackingField;
    struct Object *_CurrentValue_k__BackingField;
    bool _ThreadContextChanged_k__BackingField;
};

struct AsyncLocalValueChangedArgs_1_System_Object___Boxed {
    struct AsyncLocalValueChangedArgs_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct AsyncLocalValueChangedArgs_1_System_Object_ fields;
};

struct AsyncLocalValueChangedArgs_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncLocalValueChangedArgs_1_System_Object___StaticFields {
};

struct AsyncLocalValueChangedArgs_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncLocalValueChangedArgs_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncLocalValueChangedArgs_1_System_Object___VTable vtable;
};

struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__VTable {
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

struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__StaticFields {
};

struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2__VTable vtable;
};

struct AsyncLocal_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Threading_IAsyncLocal_OnValueChanged;
};

struct AsyncLocal_1_System_Object___StaticFields {
};

struct AsyncLocal_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncLocal_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncLocal_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) ThreadPoolWorkQueue_SparseArray_1_System_Object___Fields {
    struct Object__Array *m_array;
};

struct ThreadPoolWorkQueue_SparseArray_1_System_Object_ {
    struct ThreadPoolWorkQueue_SparseArray_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct ThreadPoolWorkQueue_SparseArray_1_System_Object___Fields fields;
};

struct ThreadPoolWorkQueue_SparseArray_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ThreadPoolWorkQueue_SparseArray_1_System_Object___StaticFields {
};

struct ThreadPoolWorkQueue_SparseArray_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadPoolWorkQueue_SparseArray_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadPoolWorkQueue_SparseArray_1_System_Object___VTable vtable;
};

struct TaskAwaiter_1_System_Object_ {
    struct Task_1_System_Object_ *m_task;
};

struct TaskAwaiter_1_System_Object___Boxed {
    struct TaskAwaiter_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct TaskAwaiter_1_System_Object_ fields;
};

struct TaskAwaiter_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnsafeOnCompleted;
    VirtualInvokeData OnCompleted;
};

struct TaskAwaiter_1_System_Object___StaticFields {
};

struct TaskAwaiter_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskAwaiter_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskAwaiter_1_System_Object___VTable vtable;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_ {
    struct Task_1_System_Object_ *m_task;
    bool m_continueOnCapturedContext;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object___Boxed {
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object___Class *klass;
    MonitorData *monitor;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_ fields;
};

struct ConfiguredTaskAwaitable_1_System_Object_ {
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_ m_configuredTaskAwaiter;
};

struct ConfiguredTaskAwaitable_1_System_Object___Boxed {
    struct ConfiguredTaskAwaitable_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct ConfiguredTaskAwaitable_1_System_Object_ fields;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnsafeOnCompleted;
    VirtualInvokeData OnCompleted;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object___StaticFields {
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object___VTable vtable;
};

struct ConfiguredTaskAwaitable_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConfiguredTaskAwaitable_1_System_Object___StaticFields {
};

struct ConfiguredTaskAwaitable_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfiguredTaskAwaitable_1_System_Object___VTable vtable;
};

struct Action_1_System_Threading_Tasks_Task_1__2__Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_System_Threading_Tasks_Task_1__2 {
    struct Action_1_System_Threading_Tasks_Task_1__2__Class *klass;
    MonitorData *monitor;
    struct Action_1_System_Threading_Tasks_Task_1__2__Fields fields;
};

struct Action_1_System_Threading_Tasks_Task_1__2__VTable {
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

struct Action_1_System_Threading_Tasks_Task_1__2__StaticFields {
};

struct Action_1_System_Threading_Tasks_Task_1__2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_System_Threading_Tasks_Task_1__2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_System_Threading_Tasks_Task_1__2__VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_Object_ {
    struct Func_2_System_Threading_Tasks_Task_1_Object___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_Object___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_Object___VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_Object___StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_Object___VTable vtable;
};

struct Task_1_TResult_c_System_Object_ {
    struct Task_1_TResult_c_System_Object___Class *klass;
    MonitorData *monitor;
};

struct Task_1_TResult_c_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Task_1_TResult_c_System_Object___StaticFields {
    struct Task_1_TResult_c_System_Object_ *__9;
};

struct Task_1_TResult_c_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_TResult_c_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_TResult_c_System_Object___VTable vtable;
};

struct __declspec(align(8)) SystemThreadingTasks_FutureDebugView_1_System_Object___Fields {
    struct Task_1_System_Object_ *m_task;
};

struct SystemThreadingTasks_FutureDebugView_1_System_Object_ {
    struct SystemThreadingTasks_FutureDebugView_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct SystemThreadingTasks_FutureDebugView_1_System_Object___Fields fields;
};

struct SystemThreadingTasks_FutureDebugView_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SystemThreadingTasks_FutureDebugView_1_System_Object___StaticFields {
};

struct SystemThreadingTasks_FutureDebugView_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SystemThreadingTasks_FutureDebugView_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SystemThreadingTasks_FutureDebugView_1_System_Object___VTable vtable;
};

struct Func_2_IAsyncResult_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_IAsyncResult_Object_ {
    struct Func_2_IAsyncResult_Object___Class *klass;
    MonitorData *monitor;
    struct Func_2_IAsyncResult_Object___Fields fields;
};

struct Action_1_IAsyncResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_IAsyncResult_ {
    struct Action_1_IAsyncResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_IAsyncResult___Fields fields;
};

struct Func_2_IAsyncResult_Object___VTable {
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

struct Func_2_IAsyncResult_Object___StaticFields {
};

struct Func_2_IAsyncResult_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_IAsyncResult_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_IAsyncResult_Object___VTable vtable;
};

struct Action_1_IAsyncResult___VTable {
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

struct Action_1_IAsyncResult___StaticFields {
};

struct Action_1_IAsyncResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_IAsyncResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_IAsyncResult___VTable vtable;
};

struct Func_3_AsyncCallback_Object_IAsyncResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_3_AsyncCallback_Object_IAsyncResult_ {
    struct Func_3_AsyncCallback_Object_IAsyncResult___Class *klass;
    MonitorData *monitor;
    struct Func_3_AsyncCallback_Object_IAsyncResult___Fields fields;
};

struct Func_3_AsyncCallback_Object_IAsyncResult___VTable {
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

struct Func_3_AsyncCallback_Object_IAsyncResult___StaticFields {
};

struct Func_3_AsyncCallback_Object_IAsyncResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_3_AsyncCallback_Object_IAsyncResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_3_AsyncCallback_Object_IAsyncResult___VTable vtable;
};

struct Func_4_Object_AsyncCallback_Object_IAsyncResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_4_Object_AsyncCallback_Object_IAsyncResult_ {
    struct Func_4_Object_AsyncCallback_Object_IAsyncResult___Class *klass;
    MonitorData *monitor;
    struct Func_4_Object_AsyncCallback_Object_IAsyncResult___Fields fields;
};

struct Func_4_Object_AsyncCallback_Object_IAsyncResult___VTable {
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

struct Func_4_Object_AsyncCallback_Object_IAsyncResult___StaticFields {
};

struct Func_4_Object_AsyncCallback_Object_IAsyncResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_4_Object_AsyncCallback_Object_IAsyncResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_4_Object_AsyncCallback_Object_IAsyncResult___VTable vtable;
};

struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult_ {
    struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___Class *klass;
    MonitorData *monitor;
    struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___Fields fields;
};

struct Func_3_Object_IAsyncResult_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_3_Object_IAsyncResult_Object_ {
    struct Func_3_Object_IAsyncResult_Object___Class *klass;
    MonitorData *monitor;
    struct Func_3_Object_IAsyncResult_Object___Fields fields;
};

struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___VTable {
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

struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___StaticFields {
};

struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_5_Object_Object_AsyncCallback_Object_IAsyncResult___VTable vtable;
};

struct Func_3_Object_IAsyncResult_Object___VTable {
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

struct Func_3_Object_IAsyncResult_Object___StaticFields {
};

struct Func_3_Object_IAsyncResult_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_3_Object_IAsyncResult_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_3_Object_IAsyncResult_Object___VTable vtable;
};

struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___Fields {
    struct Task_1_System_Object___Fields _;
    struct Object *m_thisRef;
    struct Func_3_Object_IAsyncResult_Object_ *m_endMethod;
};

struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object_ {
    struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___Fields fields;
};

struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___VTable {
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

struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___StaticFields {
    struct AsyncCallback *s_completeFromAsyncResult;
};

struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_TResult_FromAsyncTrimPromise_1_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___Fields {
    struct Func_2_IAsyncResult_Object_ *endFunction;
    struct Action_1_IAsyncResult_ *endAction;
    struct Task_1_System_Object_ *promise;
};

struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object_ {
    struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___Fields fields;
};

struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___StaticFields {
};

struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_TResult_c_DisplayClass35_0_System_Object___VTable vtable;
};

}
