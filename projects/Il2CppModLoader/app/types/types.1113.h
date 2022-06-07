namespace app {
struct CrashContext_Flags__Enum__Boxed {
    struct CrashContext_Flags__Enum__Class *klass;
    MonitorData *monitor;
    CrashContext_Flags__Enum value;
    
};

struct CrashContext_Data {
    uint32_t Counter;
    float RealtimeSinceStartup;
    float PositionX;
    float PositionY;
    uint64_t UserID1;
    uint64_t UserID2;
    uint64_t GcHeapSize;
    uint64_t GcUsedSize;
    int32_t UnloadsSinceLastResourceCollect;
    CrashContext_Flags__Enum Flags;
    
};

struct CrashContext_Data__Boxed {
    struct CrashContext_Data__Class *klass;
    MonitorData *monitor;
    struct CrashContext_Data fields;
};

struct CrashContext_Flags__Enum__VTable {
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

struct CrashContext_Flags__Enum__StaticFields {
};

struct CrashContext_Flags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrashContext_Flags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrashContext_Flags__Enum__VTable vtable;
};

struct CrashContext_Data__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CrashContext_Data__StaticFields {
};

struct CrashContext_Data__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrashContext_Data__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrashContext_Data__VTable vtable;
};

struct CrashContext_Callback {
    struct CrashContext_Callback__Class *klass;
    MonitorData *monitor;
};

struct CrashContext_Callback__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnLateUpdate;
};

struct CrashContext_Callback__StaticFields {
};

struct CrashContext_Callback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrashContext_Callback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrashContext_Callback__VTable vtable;
};

struct FilterCollisionsByContactNormals__Fields {
    struct MonoBehaviour__Fields _;
    bool ClearFlag;
};

struct FilterCollisionsByContactNormals {
    struct FilterCollisionsByContactNormals__Class *klass;
    MonitorData *monitor;
    struct FilterCollisionsByContactNormals__Fields fields;
};

struct FilterCollisionsByContactNormals__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IStrippable_DoStrip;
};

struct FilterCollisionsByContactNormals__StaticFields {
};

struct FilterCollisionsByContactNormals__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FilterCollisionsByContactNormals__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FilterCollisionsByContactNormals__VTable vtable;
};

struct __declspec(align(8)) TimeSlicedActivationTask_TimeSlicedActivation_d_25__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TimeSlicedActivationTask *__4__this;
    int32_t _taskCount_5__2;
    float _startTime_5__3;
    float _budgetInSeconds_5__4;
    int32_t _i_5__5;
};

struct TimeSlicedActivationTask_TimeSlicedActivation_d_25 {
    struct TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedActivationTask_TimeSlicedActivation_d_25__Fields fields;
};

struct TimeSlicedActivationTask_TimeSlicedActivation_d_25__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TimeSlicedActivationTask_TimeSlicedActivation_d_25__StaticFields {
};

struct TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSlicedActivationTask_TimeSlicedActivation_d_25__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSlicedActivationTask_TimeSlicedActivation_d_25__VTable vtable;
};

struct TimeSlicedHeirarchyEnablingTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct List_1_UnityEngine_GameObject_ *m_objectsToTimeSliceEnable;
    struct HashSet_1_Moon_ISuspendable_ *m_suspendables;
    struct ITimeSlicedPostEnableObserver__Array *m_postEnabledObservers;
    struct Transform *m_root;
    bool m_reenableRoot;
};

struct TimeSlicedHeirarchyEnablingTask {
    struct TimeSlicedHeirarchyEnablingTask__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedHeirarchyEnablingTask__Fields fields;
};

struct TimeSlicedHeirarchyEnablingTask__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUpdateBeat;
    VirtualInvokeData Pause;
    VirtualInvokeData Resume;
    VirtualInvokeData OnJobFinished;
    VirtualInvokeData get_IsFinished;
    VirtualInvokeData get_JobName;
    VirtualInvokeData get_TimesliceJobOwnerName;
    VirtualInvokeData get_CustomTimeBudget;
    VirtualInvokeData set_CustomTimeBudget;
    VirtualInvokeData get_ContextualDebugData;
    VirtualInvokeData get_EnqueuedTime;
    VirtualInvokeData set_EnqueuedTime;
    VirtualInvokeData get_AvailableBudget;
    VirtualInvokeData set_AvailableBudget;
    VirtualInvokeData Resume_1;
    VirtualInvokeData CancelJob;
    VirtualInvokeData Reset;
    VirtualInvokeData get_JobName_1;
    VirtualInvokeData get_TimesliceJobOwnerName_1;
    VirtualInvokeData get_ContextualDebugData_1;
};

struct TimeSlicedHeirarchyEnablingTask__StaticFields {
};

struct TimeSlicedHeirarchyEnablingTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSlicedHeirarchyEnablingTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSlicedHeirarchyEnablingTask__VTable vtable;
};

struct __declspec(align(8)) TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TimeSlicedHeirarchyEnablingTask *__4__this;
    int32_t _i_5__2;
};

struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6 {
    struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Fields fields;
};

struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__StaticFields {
};

struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__VTable vtable;
};

struct TimeSlicedHierarchyDisablingTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct List_1_UnityEngine_GameObject_ *m_objectsToTimeSliceDisable;
};

struct TimeSlicedHierarchyDisablingTask {
    struct TimeSlicedHierarchyDisablingTask__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedHierarchyDisablingTask__Fields fields;
};

struct TimeSlicedHierarchyDisablingTask__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUpdateBeat;
    VirtualInvokeData Pause;
    VirtualInvokeData Resume;
    VirtualInvokeData OnJobFinished;
    VirtualInvokeData get_IsFinished;
    VirtualInvokeData get_JobName;
    VirtualInvokeData get_TimesliceJobOwnerName;
    VirtualInvokeData get_CustomTimeBudget;
    VirtualInvokeData set_CustomTimeBudget;
    VirtualInvokeData get_ContextualDebugData;
    VirtualInvokeData get_EnqueuedTime;
    VirtualInvokeData set_EnqueuedTime;
    VirtualInvokeData get_AvailableBudget;
    VirtualInvokeData set_AvailableBudget;
    VirtualInvokeData Resume_1;
    VirtualInvokeData CancelJob;
    VirtualInvokeData Reset;
    VirtualInvokeData get_JobName_1;
    VirtualInvokeData get_TimesliceJobOwnerName_1;
    VirtualInvokeData get_ContextualDebugData_1;
};

struct TimeSlicedHierarchyDisablingTask__StaticFields {
};

struct TimeSlicedHierarchyDisablingTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSlicedHierarchyDisablingTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSlicedHierarchyDisablingTask__VTable vtable;
};

struct __declspec(align(8)) TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TimeSlicedHierarchyDisablingTask *__4__this;
    int32_t _i_5__2;
};

struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2 {
    struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Fields fields;
};

struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__StaticFields {
};

struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__VTable vtable;
};

struct __declspec(align(8)) TimeSlicedSimpleJob__Fields {
    float _EnqueuedTime_k__BackingField;
    struct TimeSlicedSimpleJob_TimeSlicedJobDelegate *m_job;
    bool m_hasFinished;
    int32_t m_index;
    struct String *m_ownerName;
    struct Func_1_String_ *m_contextualDebugData;
    float _CustomTimeBudget_k__BackingField;
    float _AvailableBudget_k__BackingField;
};

struct TimeSlicedSimpleJob {
    struct TimeSlicedSimpleJob__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedSimpleJob__Fields fields;
};

struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct TimeSlicedSimpleJob_TimeSlicedJobDelegate {
    struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__Fields fields;
};

struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__VTable {
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

struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__StaticFields {
};

struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSlicedSimpleJob_TimeSlicedJobDelegate__VTable vtable;
};

struct TimeSlicedSimpleJob__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUpdateBeat;
    VirtualInvokeData Pause;
    VirtualInvokeData Resume;
    VirtualInvokeData OnJobFinished;
    VirtualInvokeData get_IsFinished;
    VirtualInvokeData get_JobName;
    VirtualInvokeData get_TimesliceJobOwnerName;
    VirtualInvokeData get_CustomTimeBudget;
    VirtualInvokeData set_CustomTimeBudget;
    VirtualInvokeData get_ContextualDebugData;
    VirtualInvokeData get_EnqueuedTime;
    VirtualInvokeData set_EnqueuedTime;
    VirtualInvokeData get_AvailableBudget;
    VirtualInvokeData set_AvailableBudget;
};

struct TimeSlicedSimpleJob__StaticFields {
};

struct TimeSlicedSimpleJob__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSlicedSimpleJob__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSlicedSimpleJob__VTable vtable;
};

struct TimesliceResourceDestroyTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct String *_SceneName_k__BackingField;
    struct List_1_UnityEngine_Object_ *m_targetObjects;
};

struct TimesliceResourceDestroyTask {
    struct TimesliceResourceDestroyTask__Class *klass;
    MonitorData *monitor;
    struct TimesliceResourceDestroyTask__Fields fields;
};

struct TimesliceResourceDestroyTask__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUpdateBeat;
    VirtualInvokeData Pause;
    VirtualInvokeData Resume;
    VirtualInvokeData OnJobFinished;
    VirtualInvokeData get_IsFinished;
    VirtualInvokeData get_JobName;
    VirtualInvokeData get_TimesliceJobOwnerName;
    VirtualInvokeData get_CustomTimeBudget;
    VirtualInvokeData set_CustomTimeBudget;
    VirtualInvokeData get_ContextualDebugData;
    VirtualInvokeData get_EnqueuedTime;
    VirtualInvokeData set_EnqueuedTime;
    VirtualInvokeData get_AvailableBudget;
    VirtualInvokeData set_AvailableBudget;
    VirtualInvokeData Resume_1;
    VirtualInvokeData CancelJob;
    VirtualInvokeData Reset;
    VirtualInvokeData get_JobName_1;
    VirtualInvokeData get_TimesliceJobOwnerName_1;
    VirtualInvokeData get_ContextualDebugData_1;
};

struct TimesliceResourceDestroyTask__StaticFields {
    int32_t ResourceDestroyTasksPerBatch;
};

struct TimesliceResourceDestroyTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimesliceResourceDestroyTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimesliceResourceDestroyTask__VTable vtable;
};

struct __declspec(align(8)) TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TimesliceResourceDestroyTask *__4__this;
    int32_t _taskCount_5__2;
    float _startTime_5__3;
    float _budgetInSeconds_5__4;
    int32_t _i_5__5;
};

struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 {
    struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class *klass;
    MonitorData *monitor;
    struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Fields fields;
};

struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__StaticFields {
};

struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__VTable vtable;
};

struct TimesliceResourceUnloadTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct String *_SceneName_k__BackingField;
    struct List_1_UnityEngine_Object_ *m_targetObjects;
};

struct TimesliceResourceUnloadTask {
    struct TimesliceResourceUnloadTask__Class *klass;
    MonitorData *monitor;
    struct TimesliceResourceUnloadTask__Fields fields;
};

struct TimesliceResourceUnloadTask__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUpdateBeat;
    VirtualInvokeData Pause;
    VirtualInvokeData Resume;
    VirtualInvokeData OnJobFinished;
    VirtualInvokeData get_IsFinished;
    VirtualInvokeData get_JobName;
    VirtualInvokeData get_TimesliceJobOwnerName;
    VirtualInvokeData get_CustomTimeBudget;
    VirtualInvokeData set_CustomTimeBudget;
    VirtualInvokeData get_ContextualDebugData;
    VirtualInvokeData get_EnqueuedTime;
    VirtualInvokeData set_EnqueuedTime;
    VirtualInvokeData get_AvailableBudget;
    VirtualInvokeData set_AvailableBudget;
    VirtualInvokeData Resume_1;
    VirtualInvokeData CancelJob;
    VirtualInvokeData Reset;
    VirtualInvokeData get_JobName_1;
    VirtualInvokeData get_TimesliceJobOwnerName_1;
    VirtualInvokeData get_ContextualDebugData_1;
};

struct TimesliceResourceUnloadTask__StaticFields {
    int32_t ResourceUnloadTasksPerBatch;
};

struct TimesliceResourceUnloadTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimesliceResourceUnloadTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimesliceResourceUnloadTask__VTable vtable;
};

struct __declspec(align(8)) TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TimesliceResourceUnloadTask *__4__this;
    int32_t _taskCount_5__2;
    int32_t _i_5__3;
};

struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10 {
    struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class *klass;
    MonitorData *monitor;
    struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Fields fields;
};

struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10__StaticFields {
};

struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimesliceResourceUnloadTask_TimeslicedUnload_d_10__VTable vtable;
};

struct __declspec(align(8)) TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TimesliceSceneUnloadTask *__4__this;
    int32_t _taskCount_5__2;
    int32_t _i_5__3;
    int32_t _j_5__4;
};

struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14 {
    struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class *klass;
    MonitorData *monitor;
    struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Fields fields;
};

struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14__StaticFields {
};

struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimesliceSceneUnloadTask_TimeslicedUnload_d_14__VTable vtable;
};

struct __declspec(align(8)) Queue_1_Moon_TimeSlicer_ITimeSlicedJob___Fields {
    struct ITimeSlicedJob__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_ {
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob___Class *klass;
    MonitorData *monitor;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob___Fields fields;
};

struct ITimeSlicedJob__Array {
    struct ITimeSlicedJob__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ITimeSlicedJob *vector[32];
};

struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedJob_ {
    struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedJob___Class *klass;
    MonitorData *monitor;
};

struct ITimeSlicedJob__Array__VTable {
};

struct ITimeSlicedJob__Array__StaticFields {
};

struct ITimeSlicedJob__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimeSlicedJob__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimeSlicedJob__Array__VTable vtable;
};

struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedJob___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedJob___StaticFields {
};

struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedJob___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedJob___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedJob___VTable vtable;
};

struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_1;
};

struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob___StaticFields {
};

struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob___VTable vtable;
};

struct TimeSliceSystem__Fields {
    struct MonoBehaviour__Fields _;
    bool m_isFillingGaps;
    float TimeBudget;
    struct Action_1_Moon_TimeSlicer_SliceExecutionStats_ *OnSliceExecuted;
    struct Action_1_Double_ *OnReportOverheadPeak;
    struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_ *OnBudgetExceeded;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_ *m_activeQueue;
    int32_t m_amountOfHighToMediumRate;
    int32_t m_amountOfHighJobsExecuted;
    struct String *m_lastJobName;
    double m_lastJobDuration;
    bool m_profileMarkerActive;
    struct Stopwatch *m_stopwatch;
    int32_t NoSlicesProcessed;
};

struct TimeSliceSystem {
    struct TimeSliceSystem__Class *klass;
    MonitorData *monitor;
    struct TimeSliceSystem__Fields fields;
};

struct Action_1_Moon_TimeSlicer_SliceExecutionStats___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Moon_TimeSlicer_SliceExecutionStats_ {
    struct Action_1_Moon_TimeSlicer_SliceExecutionStats___Class *klass;
    MonitorData *monitor;
    struct Action_1_Moon_TimeSlicer_SliceExecutionStats___Fields fields;
};

struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_ {
    struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___Class *klass;
    MonitorData *monitor;
    struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_TimeSlicer_ITimeSlicedJob_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ {
    struct Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ {
    int32_t hashCode;
    int32_t next;
    struct ITimeSlicedJob *key;
    struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ fields;
};

struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_ {
    struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority___Class *klass;
    MonitorData *monitor;
    struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ vector[32];
};

struct IEqualityComparer_1_Moon_TimeSlicer_ITimeSlicedJob_ {
    struct IEqualityComparer_1_Moon_TimeSlicer_ITimeSlicedJob___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Fields {
    struct Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Fields {
    struct Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Fields fields;
};

struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority___Array {
    struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_ *vector[32];
};

struct IEnumerator_1_System_Func_1__1 {
    struct IEnumerator_1_System_Func_1__1__Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_TimeSlicer_ITimeSlicedJob_ {
    struct ICollection_1_Moon_TimeSlicer_ITimeSlicedJob___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Func_1__1 {
    struct ICollection_1_System_Func_1__1__Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ {
    struct ITimeSlicedJob *key;
    struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_ *value;
};

struct KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Boxed {
    struct KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ fields;
};

struct KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Array {
    struct KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob_ {
    struct IEnumerable_1_Moon_TimeSlicer_ITimeSlicedJob___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Func_1__2 {
    struct IEnumerable_1_System_Func_1__2__Class *klass;
    MonitorData *monitor;
};

struct Action_1_Moon_TimeSlicer_SliceExecutionStats___VTable {
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

struct Action_1_Moon_TimeSlicer_SliceExecutionStats___StaticFields {
};

struct Action_1_Moon_TimeSlicer_SliceExecutionStats___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_Moon_TimeSlicer_SliceExecutionStats___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_Moon_TimeSlicer_SliceExecutionStats___VTable vtable;
};

struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___VTable {
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

struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___StaticFields {
};

struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single___VTable vtable;
};

struct Func_1_Moon_TimeSlicer_TimeSlicedJobPriority___VTable {
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

}
