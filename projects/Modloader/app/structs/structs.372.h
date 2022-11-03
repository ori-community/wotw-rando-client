namespace app {
    struct LoopDecorator__StaticFields {
    };

    struct LoopDecorator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoopDecorator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoopDecorator__VTable vtable;
    };

    struct RemapDecorator__Fields {
        struct DecoratorNode__Fields _;
        BehaviourStatus__Enum Success;

        BehaviourStatus__Enum Failure;

        BehaviourStatus__Enum Running;

        BehaviourStatus__Enum Blocking;
    };

    struct RemapDecorator {
        struct RemapDecorator__Class* klass;
        MonitorData* monitor;
        struct RemapDecorator__Fields fields;
    };

    struct RemapDecorator__VTable {
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

    struct RemapDecorator__StaticFields {
    };

    struct RemapDecorator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RemapDecorator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RemapDecorator__VTable vtable;
    };

    struct TimeLimitDecorator__Fields {
        struct DecoratorNode__Fields _;
        struct MoonFloat* TimeLimit;
        BehaviourStatus__Enum StatusWhenLimited;

        float m_timeEntered;
    };

    struct TimeLimitDecorator {
        struct TimeLimitDecorator__Class* klass;
        MonitorData* monitor;
        struct TimeLimitDecorator__Fields fields;
    };

    struct TimeLimitDecorator__VTable {
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

    struct TimeLimitDecorator__StaticFields {
    };

    struct TimeLimitDecorator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeLimitDecorator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeLimitDecorator__VTable vtable;
    };

    struct UtilityDecorator__Fields {
        struct DecoratorNode__Fields _;
        struct MoonFloat* UtilityParameter;
        struct AnimationCurve* ResponseCurve;
    };

    struct UtilityDecorator {
        struct UtilityDecorator__Class* klass;
        MonitorData* monitor;
        struct UtilityDecorator__Fields fields;
    };

    struct UtilityDecorator__VTable {
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

    struct UtilityDecorator__StaticFields {
    };

    struct UtilityDecorator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UtilityDecorator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UtilityDecorator__VTable vtable;
    };

    struct SelectorNode__Fields {
        struct CompositeNode__Fields _;
        bool IsRandom;
    };

    struct SelectorNode {
        struct SelectorNode__Class* klass;
        MonitorData* monitor;
        struct SelectorNode__Fields fields;
    };

    struct SelectorNode__VTable {
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
        VirtualInvokeData AddChild;
    };

    struct SelectorNode__StaticFields {
    };

    struct SelectorNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SelectorNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SelectorNode__VTable vtable;
    };

    struct SequenceNode_1__Fields {
        struct CompositeNode__Fields _;
        bool IsRandom;
        bool CancelSequenceOnFailure;
    };

    struct SequenceNode_1 {
        struct SequenceNode_1__Class* klass;
        MonitorData* monitor;
        struct SequenceNode_1__Fields fields;
    };

    struct SequenceNode_1__VTable {
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
        VirtualInvokeData AddChild;
    };

    struct SequenceNode_1__StaticFields {
    };

    struct SequenceNode_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SequenceNode_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SequenceNode_1__VTable vtable;
    };

    struct TaskNode__Fields {
        struct BehaviourNode__Fields _;
        struct MoonReference_1_Moon_BehaviourSystem_ITask_* m_task;
        struct ITask* m_resolvedTask;
    };

    struct TaskNode {
        struct TaskNode__Class* klass;
        MonitorData* monitor;
        struct TaskNode__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_Moon_BehaviourSystem_ITask___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_Moon_BehaviourSystem_ITask_* m_cachedProxyType;
        struct ITask* m_volatileValue;
    };

    struct MoonReference_1_Moon_BehaviourSystem_ITask_ {
        struct MoonReference_1_Moon_BehaviourSystem_ITask___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_Moon_BehaviourSystem_ITask___Fields fields;
    };

    struct IMoonType_1_Moon_BehaviourSystem_ITask_ {
        struct IMoonType_1_Moon_BehaviourSystem_ITask___Class* klass;
        MonitorData* monitor;
    };

    struct IMoonType_1_Moon_BehaviourSystem_ITask___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_Moon_BehaviourSystem_ITask___StaticFields {
    };

    struct IMoonType_1_Moon_BehaviourSystem_ITask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_Moon_BehaviourSystem_ITask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_Moon_BehaviourSystem_ITask___VTable vtable;
    };

    struct ITask___VTable {
    };

    struct ITask___StaticFields {
    };

    struct ITask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ITask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ITask___VTable vtable;
    };

    struct MoonReference_1_Moon_BehaviourSystem_ITask___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
        VirtualInvokeData get_IsStaticValue;
        VirtualInvokeData GetTypeData;
        VirtualInvokeData CanResolve;
        VirtualInvokeData get_IsCrossSceneReference;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct MoonReference_1_Moon_BehaviourSystem_ITask___StaticFields {
    };

    struct MoonReference_1_Moon_BehaviourSystem_ITask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_Moon_BehaviourSystem_ITask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_Moon_BehaviourSystem_ITask___VTable vtable;
    };

    struct TaskNode__VTable {
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
    };

    struct TaskNode__StaticFields {
    };

    struct TaskNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskNode__VTable vtable;
    };

    enum class UtilitySelectorNode_UtilitySelectorMode__Enum : int32_t {
        HighestUtility = 0x00000000,
        WeightedRandom = 0x00000001,
    };

    struct UtilitySelectorNode_UtilitySelectorMode__Enum__Boxed {
        struct UtilitySelectorNode_UtilitySelectorMode__Enum__Class* klass;
        MonitorData* monitor;
        UtilitySelectorNode_UtilitySelectorMode__Enum value;
    };

    struct UtilitySelectorNode__Fields {
        struct CompositeNode__Fields _;
        UtilitySelectorNode_UtilitySelectorMode__Enum SelectionMode;

        float SelectionThreshold;
        struct Single__Array* m_utilities;
        struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* m_nodeUtilities;
        struct List_1_Moon_BehaviourSystem_BehaviourNode_* m_nodeList;
        struct List_1_System_Single_* m_utilitiesList;
        struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_* m_weightedGroup;
        struct List_1_Moon_BehaviourSystem_IUtilityProvider_* m_utilityDecorators;
    };

    struct UtilitySelectorNode {
        struct UtilitySelectorNode__Class* klass;
        MonitorData* monitor;
        struct UtilitySelectorNode__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Fields {
        struct UtilitySelectorNode_NodeUtility__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
        struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Fields fields;
    };

    struct UtilitySelectorNode_NodeUtility {
        struct BehaviourNode* Node;
        float Utility;
    };

    struct UtilitySelectorNode_NodeUtility__Boxed {
        struct UtilitySelectorNode_NodeUtility__Class* klass;
        MonitorData* monitor;
        struct UtilitySelectorNode_NodeUtility fields;
    };

    struct UtilitySelectorNode_NodeUtility__Array {
        struct UtilitySelectorNode_NodeUtility__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UtilitySelectorNode_NodeUtility vector[32];
    };

    struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
        struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___Fields {
        struct List_1_Moon_BehaviourSystem_BehaviourNode_* elements;
        struct List_1_System_Single_* weights;
        float totalWeight;
    };

    struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_ {
        struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___Class* klass;
        MonitorData* monitor;
        struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_BehaviourSystem_IUtilityProvider___Fields {
        struct IUtilityProvider__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_BehaviourSystem_IUtilityProvider_ {
        struct List_1_Moon_BehaviourSystem_IUtilityProvider___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_BehaviourSystem_IUtilityProvider___Fields fields;
    };

    struct IUtilityProvider {
        struct IUtilityProvider__Class* klass;
        MonitorData* monitor;
    };

    struct IUtilityProvider__Array {
        struct IUtilityProvider__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IUtilityProvider* vector[32];
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider_ {
        struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___Class* klass;
        MonitorData* monitor;
    };

    struct UtilitySelectorNode_UtilitySelectorMode__Enum__VTable {
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

    struct UtilitySelectorNode_UtilitySelectorMode__Enum__StaticFields {
    };

    struct UtilitySelectorNode_UtilitySelectorMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UtilitySelectorNode_UtilitySelectorMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UtilitySelectorNode_UtilitySelectorMode__Enum__VTable vtable;
    };

    struct UtilitySelectorNode_NodeUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UtilitySelectorNode_NodeUtility__StaticFields {
    };

    struct UtilitySelectorNode_NodeUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UtilitySelectorNode_NodeUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UtilitySelectorNode_NodeUtility__VTable vtable;
    };

    struct UtilitySelectorNode_NodeUtility__Array__VTable {
    };

    struct UtilitySelectorNode_NodeUtility__Array__StaticFields {
    };

    struct UtilitySelectorNode_NodeUtility__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UtilitySelectorNode_NodeUtility__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UtilitySelectorNode_NodeUtility__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___StaticFields {
    };

    struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___VTable vtable;
    };

    struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___VTable {
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

    struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___StaticFields {
        struct UtilitySelectorNode_NodeUtility__Array* _emptyArray;
    };

    struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___VTable vtable;
    };

    struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___StaticFields {
    };

    struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___VTable vtable;
    };

    struct IUtilityProvider__VTable {
        VirtualInvokeData GetUtility;
    };

    struct IUtilityProvider__StaticFields {
    };

    struct IUtilityProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IUtilityProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IUtilityProvider__VTable vtable;
    };

    struct IUtilityProvider__Array__VTable {
    };

    struct IUtilityProvider__Array__StaticFields {
    };

    struct IUtilityProvider__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IUtilityProvider__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IUtilityProvider__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___StaticFields {
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___VTable vtable;
    };

    struct List_1_Moon_BehaviourSystem_IUtilityProvider___VTable {
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

    struct List_1_Moon_BehaviourSystem_IUtilityProvider___StaticFields {
        struct IUtilityProvider__Array* _emptyArray;
    };

    struct List_1_Moon_BehaviourSystem_IUtilityProvider___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_BehaviourSystem_IUtilityProvider___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_BehaviourSystem_IUtilityProvider___VTable vtable;
    };

    struct UtilitySelectorNode__VTable {
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
        VirtualInvokeData AddChild;
    };

    struct UtilitySelectorNode__StaticFields {
    };

    struct UtilitySelectorNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UtilitySelectorNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UtilitySelectorNode__VTable vtable;
    };

    enum class WaitNode_WaitNodeReturnType__Enum : int32_t {
        Running = 0x00000000,
        Blocking = 0x00000001,
    };

    struct WaitNode_WaitNodeReturnType__Enum__Boxed {
        struct WaitNode_WaitNodeReturnType__Enum__Class* klass;
        MonitorData* monitor;
        WaitNode_WaitNodeReturnType__Enum value;
    };

    struct WaitNode__Fields {
        struct BehaviourNode__Fields _;
        struct MoonFloat* WaitTime;
        bool RandomValue;
        bool UsePositionBasedRandomValue;
        struct MoonFloat* MinTime;
        struct MoonFloat* MaxTime;
        WaitNode_WaitNodeReturnType__Enum ReturnStatus;

        float m_timeEntered;
        float m_waitTime;
    };

    struct WaitNode {
        struct WaitNode__Class* klass;
        MonitorData* monitor;
        struct WaitNode__Fields fields;
    };

    struct WaitNode_WaitNodeReturnType__Enum__VTable {
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

    struct WaitNode_WaitNodeReturnType__Enum__StaticFields {
    };

    struct WaitNode_WaitNodeReturnType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitNode_WaitNodeReturnType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitNode_WaitNodeReturnType__Enum__VTable vtable;
    };

    struct WaitNode__VTable {
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
    };

    struct WaitNode__StaticFields {
    };

    struct WaitNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitNode__VTable vtable;
    };

    struct BaseEffect__Fields {
        struct MonoBehaviour__Fields _;
        struct Shader* Shader;
        struct Material* m_Material;
    };

} // namespace app
