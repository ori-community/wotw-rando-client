namespace app {
struct IntCondition__Fields {
    struct Condition__Fields _;
    struct MoonInt *Value;
    CompareMethod__Enum CheckType;
    
    struct MoonInt *CompareValue;
};

struct IntCondition {
    struct IntCondition__Class *klass;
    MonitorData *monitor;
    struct IntCondition__Fields fields;
};

struct IntCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData OnCheck;
};

struct IntCondition__StaticFields {
};

struct IntCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IntCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IntCondition__VTable vtable;
};

struct ProbabilityCondition__Fields {
    struct Condition__Fields _;
    struct MoonFloat *Probability;
};

struct ProbabilityCondition {
    struct ProbabilityCondition__Class *klass;
    MonitorData *monitor;
    struct ProbabilityCondition__Fields fields;
};

struct ProbabilityCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData OnCheck;
};

struct ProbabilityCondition__StaticFields {
};

struct ProbabilityCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProbabilityCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProbabilityCondition__VTable vtable;
};

struct CooldownDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct MoonFloat *CooldownTime;
    struct MoonFloat *StartingWaitTime;
    BehaviourStatus__Enum StatusWhenLimited;
    
    float m_lastTimeExited;
};

struct CooldownDecorator {
    struct CooldownDecorator__Class *klass;
    MonitorData *monitor;
    struct CooldownDecorator__Fields fields;
};

struct CooldownDecorator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData ExecuteDecorator;
    VirtualInvokeData ShouldEvaluateEachTick;
    VirtualInvokeData GetUtility;
};

struct CooldownDecorator__StaticFields {
};

struct CooldownDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CooldownDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CooldownDecorator__VTable vtable;
};

struct DebugDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct String *Message;
    BehaviourStatus__Enum ReturnStatus;
    
    bool BreakOnEnter;
};

struct DebugDecorator {
    struct DebugDecorator__Class *klass;
    MonitorData *monitor;
    struct DebugDecorator__Fields fields;
};

struct DebugDecorator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData ExecuteDecorator;
    VirtualInvokeData ShouldEvaluateEachTick;
};

struct DebugDecorator__StaticFields {
};

struct DebugDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DebugDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DebugDecorator__VTable vtable;
};

struct ForceSuccessDecorator__Fields {
    struct DecoratorNode__Fields _;
};

struct ForceSuccessDecorator {
    struct ForceSuccessDecorator__Class *klass;
    MonitorData *monitor;
    struct ForceSuccessDecorator__Fields fields;
};

struct ForceSuccessDecorator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData ExecuteDecorator;
    VirtualInvokeData ShouldEvaluateEachTick;
};

struct ForceSuccessDecorator__StaticFields {
};

struct ForceSuccessDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ForceSuccessDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ForceSuccessDecorator__VTable vtable;
};

struct __declspec(align(8)) List_1_Moon_BehaviourSystem_GuardDecorator___Fields {
    struct GuardDecorator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_BehaviourSystem_GuardDecorator___Fields fields;
};

enum class GuardDecorator_GuardModeType__Enum : int32_t {
    ReturnFailure = 0x00000000,
    WaitUntilReleased = 0x00000001,
};

struct GuardDecorator_GuardModeType__Enum__Boxed {
    struct GuardDecorator_GuardModeType__Enum__Class *klass;
    MonitorData *monitor;
    GuardDecorator_GuardModeType__Enum value;
    
};

struct GuardDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct MoonString *Token;
    struct Component_1 *m_ownerAgent;
    GuardDecorator_GuardModeType__Enum IfGuarded;
    
    bool m_isGuarding;
};

struct GuardDecorator {
    struct GuardDecorator__Class *klass;
    MonitorData *monitor;
    struct GuardDecorator__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_GameObject_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    int32_t hashCode;
    int32_t next;
    struct GameObject *key;
    struct List_1_Moon_BehaviourSystem_GuardDecorator_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ vector[32];
};

struct IEqualityComparer_1_UnityEngine_GameObject_ {
    struct IEqualityComparer_1_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Fields {
    struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Fields {
    struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Fields fields;
};

struct List_1_Moon_BehaviourSystem_GuardDecorator___Array {
    struct List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_Moon_BehaviourSystem_GuardDecorator_ *vector[32];
};

struct IEnumerator_1_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct IEnumerator_1_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_UnityEngine_GameObject_ {
    struct ICollection_1_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct ICollection_1_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct GameObject *key;
    struct List_1_Moon_BehaviourSystem_GuardDecorator_ *value;
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Boxed {
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ fields;
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array {
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UnityEngine_GameObject_ {
    struct IEnumerable_1_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct IEnumerable_1_List_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
};

struct GuardDecorator__Array {
    struct GuardDecorator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GuardDecorator *vector[32];
};

struct IEnumerator_1_Moon_BehaviourSystem_GuardDecorator_ {
    struct IEnumerator_1_Moon_BehaviourSystem_GuardDecorator___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__VTable vtable;
};

struct IEqualityComparer_1_UnityEngine_GameObject___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_UnityEngine_GameObject___StaticFields {
};

struct IEqualityComparer_1_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_UnityEngine_GameObject___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct List_1_Moon_BehaviourSystem_GuardDecorator___Array__VTable {
};

struct List_1_Moon_BehaviourSystem_GuardDecorator___Array__StaticFields {
};

struct List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_BehaviourSystem_GuardDecorator___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_BehaviourSystem_GuardDecorator___Array__VTable vtable;
};

struct IEnumerator_1_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct IEnumerator_1_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct ICollection_1_UnityEngine_GameObject___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_UnityEngine_GameObject___StaticFields {
};

struct ICollection_1_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_UnityEngine_GameObject___VTable vtable;
};

struct ICollection_1_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct ICollection_1_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct List_1_Moon_BehaviourSystem_GuardDecorator__1__VTable {
};

struct List_1_Moon_BehaviourSystem_GuardDecorator__1__StaticFields {
};

struct List_1_Moon_BehaviourSystem_GuardDecorator__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_BehaviourSystem_GuardDecorator__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_BehaviourSystem_GuardDecorator__1__VTable vtable;
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__VTable {
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__StaticFields {
};

struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct IEnumerable_1_UnityEngine_GameObject___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_UnityEngine_GameObject___StaticFields {
};

struct IEnumerable_1_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_UnityEngine_GameObject___VTable vtable;
};

struct IEnumerable_1_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct IEnumerable_1_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct GuardDecorator_GuardModeType__Enum__VTable {
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

struct GuardDecorator_GuardModeType__Enum__StaticFields {
};

struct GuardDecorator_GuardModeType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuardDecorator_GuardModeType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuardDecorator_GuardModeType__Enum__VTable vtable;
};

struct GuardDecorator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData ExecuteDecorator;
    VirtualInvokeData ShouldEvaluateEachTick;
};

struct GuardDecorator__StaticFields {
    struct Dictionary_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator_ *m_guards;
};

struct GuardDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuardDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuardDecorator__VTable vtable;
};

struct GuardDecorator__Array__VTable {
};

struct GuardDecorator__Array__StaticFields {
};

struct GuardDecorator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuardDecorator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuardDecorator__Array__VTable vtable;
};

struct IEnumerator_1_Moon_BehaviourSystem_GuardDecorator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
};

struct IEnumerator_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct List_1_Moon_BehaviourSystem_GuardDecorator___VTable {
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

struct List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields {
    struct GuardDecorator__Array *_emptyArray;
};

struct List_1_Moon_BehaviourSystem_GuardDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_BehaviourSystem_GuardDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_BehaviourSystem_GuardDecorator___VTable vtable;
};

struct LoopDecorator__Fields {
    struct DecoratorNode__Fields _;
    bool StopWhenMaxLoopsExceeded;
    struct MoonInt *MaxNumberOfLoops;
    int32_t m_numLoops;
};

struct LoopDecorator {
    struct LoopDecorator__Class *klass;
    MonitorData *monitor;
    struct LoopDecorator__Fields fields;
};

struct LoopDecorator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData ExecuteDecorator;
    VirtualInvokeData ShouldEvaluateEachTick;
};

}
