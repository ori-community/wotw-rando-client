namespace app {
struct Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable___StaticFields {
};
struct Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable___VTable vtable;
};
struct List_1_Moon_BehaviourSystem_BlackboardVariable___VTable {
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
struct List_1_Moon_BehaviourSystem_BlackboardVariable___StaticFields {
  struct BlackboardVariable__Array * _emptyArray;
};
struct List_1_Moon_BehaviourSystem_BlackboardVariable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BehaviourSystem_BlackboardVariable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_BehaviourSystem_BlackboardVariable___VTable vtable;
};
struct Blackboard__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData AddVariable;
  VirtualInvokeData RemoveVariable;
  VirtualInvokeData GetValue;
  VirtualInvokeData SetValue;
  VirtualInvokeData SetValue_1;
  VirtualInvokeData Merge;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData SetValueOnSource;
  VirtualInvokeData ResolveSource;
  VirtualInvokeData CanResolveSource;
  VirtualInvokeData IsMoonTypeProxy;
  VirtualInvokeData GetProxyType;
};
struct Blackboard__StaticFields {
  struct Dictionary_2_System_String_System_Type_ * s_stringToTypeDict;
};
struct Blackboard__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Blackboard__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Blackboard__VTable vtable;
};

struct ActionNode_c {
  struct ActionNode_c__Class *klass;
  struct MonitorData *monitor;
};
struct ActionNode_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActionNode_c__StaticFields {
  struct ActionNode_c * __9;
  struct Action_1_Moon_BehaviourSystem_Action_ * __9__17_0;
  struct Action * __9__17_1;
};
struct ActionNode_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionNode_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionNode_c__VTable vtable;
};

struct SetFloatAction__Fields {
  struct Action_1__Fields _;
  struct MoonFloat * Variable;
  enum OperationMethod__Enum Operation;
  struct MoonFloat * Value;
  bool RandomValue;
  struct MoonFloat * Min;
  struct MoonFloat * Max;
};
struct SetFloatAction {
  struct SetFloatAction__Class *klass;
  struct MonitorData *monitor;
  struct SetFloatAction__Fields fields;
};
struct SetFloatAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnExecute;
};
struct SetFloatAction__StaticFields {
};
struct SetFloatAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetFloatAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetFloatAction__VTable vtable;
};

struct SetGameObjectAction__Fields {
  struct Action_1__Fields _;
  struct MoonReference_1_UnityEngine_GameObject_ * Variable;
  struct MoonReference_1_UnityEngine_GameObject_ * Value;
};
struct SetGameObjectAction {
  struct SetGameObjectAction__Class *klass;
  struct MonitorData *monitor;
  struct SetGameObjectAction__Fields fields;
};
struct SetGameObjectAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnExecute;
};
struct SetGameObjectAction__StaticFields {
};
struct SetGameObjectAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetGameObjectAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetGameObjectAction__VTable vtable;
};

struct SetIntAction__Fields {
  struct Action_1__Fields _;
  struct MoonInt * Variable;
  enum OperationMethod__Enum Operation;
  struct MoonInt * Value;
  bool RandomValue;
  struct MoonInt * Min;
  struct MoonInt * Max;
};
struct SetIntAction {
  struct SetIntAction__Class *klass;
  struct MonitorData *monitor;
  struct SetIntAction__Fields fields;
};
struct SetIntAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnExecute;
};
struct SetIntAction__StaticFields {
};
struct SetIntAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetIntAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetIntAction__VTable vtable;
};

struct SetVector3Action__Fields {
  struct Action_1__Fields _;
  struct MoonVector3 * Variable;
  enum OperationMethod__Enum Operation;
  struct MoonVector3 * Value;
  bool RandomValue;
  struct MoonVector3 * Min;
  struct MoonVector3 * Max;
};
struct SetVector3Action {
  struct SetVector3Action__Class *klass;
  struct MonitorData *monitor;
  struct SetVector3Action__Fields fields;
};
struct SetVector3Action__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnExecute;
};
struct SetVector3Action__StaticFields {
};
struct SetVector3Action__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetVector3Action__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetVector3Action__VTable vtable;
};

struct BehaviourNode_c {
  struct BehaviourNode_c__Class *klass;
  struct MonitorData *monitor;
};
struct BehaviourNode_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BehaviourNode_c__StaticFields {
  struct BehaviourNode_c * __9;
  struct Action_1_Moon_BehaviourSystem_DecoratorNode_ * __9__61_0;
  struct Action * __9__61_1;
  struct Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_ * __9__61_2;
  struct Action * __9__61_3;
};
struct BehaviourNode_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BehaviourNode_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BehaviourNode_c__VTable vtable;
};

struct CompositeNode__Fields {
  struct BehaviourNode__Fields _;
  struct List_1_Moon_BehaviourSystem_BehaviourNode_ * m_children;
  bool IsDynamic;
  int32_t m_lastRunningNode;
};
struct CompositeNode {
  struct CompositeNode__Class *klass;
  struct MonitorData *monitor;
  struct CompositeNode__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_BehaviourSystem_BehaviourNode___Fields {
  struct BehaviourNode__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BehaviourSystem_BehaviourNode_ {
  struct List_1_Moon_BehaviourSystem_BehaviourNode___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BehaviourSystem_BehaviourNode___Fields fields;
};
struct BehaviourNode__Array {
  struct BehaviourNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BehaviourNode * vector[32];
};
struct IEnumerator_1_Moon_BehaviourSystem_BehaviourNode_ {
  struct IEnumerator_1_Moon_BehaviourSystem_BehaviourNode___Class *klass;
  struct MonitorData *monitor;
};
enum ParallelNode_ParallelPolicy__Enum : int32_t {
  ParallelNode_ParallelPolicy__Enum_FirstSuccess = 0,
  ParallelNode_ParallelPolicy__Enum_FirstFailure = 1,
  ParallelNode_ParallelPolicy__Enum_FirstFailureOrSuccess = 2,
};
struct ParallelNode_ParallelPolicy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParallelNode_ParallelPolicy__Enum value;
};
struct ParallelNode__Fields {
  struct CompositeNode__Fields _;
  enum ParallelNode_ParallelPolicy__Enum Policy;
  struct List_1_System_Int32_ * m_finishedNodeIds;
  int32_t m_blockingNodeIndex;
};
struct ParallelNode {
  struct ParallelNode__Class *klass;
  struct MonitorData *monitor;
  struct ParallelNode__Fields fields;
};
struct IEnumerator_1_Moon_BehaviourSystem_BehaviourNode___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_BehaviourSystem_BehaviourNode___StaticFields {
};
struct IEnumerator_1_Moon_BehaviourSystem_BehaviourNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_BehaviourSystem_BehaviourNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_BehaviourSystem_BehaviourNode___VTable vtable;
};
struct List_1_Moon_BehaviourSystem_BehaviourNode___VTable {
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
struct List_1_Moon_BehaviourSystem_BehaviourNode___StaticFields {
  struct BehaviourNode__Array * _emptyArray;
};
struct List_1_Moon_BehaviourSystem_BehaviourNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BehaviourSystem_BehaviourNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_BehaviourSystem_BehaviourNode___VTable vtable;
};
struct ParallelNode__VTable {
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
struct ParallelNode__StaticFields {
};
struct ParallelNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParallelNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParallelNode__VTable vtable;
};
struct CompositeNode__VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData AddChild;
};
struct CompositeNode__StaticFields {
};
struct CompositeNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompositeNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompositeNode__VTable vtable;
};

struct DebugNode__Fields {
  struct BehaviourNode__Fields _;
  struct String * Message;
  enum BehaviourStatus__Enum ReturnStatus;
  bool IsTimed;
  float TimeValue;
  enum BehaviourStatus__Enum RunningReturnStatus;
  bool BreakOnEnter;
  float m_timeRemaining;
};
struct DebugNode {
  struct DebugNode__Class *klass;
  struct MonitorData *monitor;
  struct DebugNode__Fields fields;
};
struct DebugNode__VTable {
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
struct DebugNode__StaticFields {
};
struct DebugNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugNode__VTable vtable;
};

struct DebugUtilityNode__Fields {
  struct DebugNode__Fields _;
  float Utility;
};
struct DebugUtilityNode {
  struct DebugUtilityNode__Class *klass;
  struct MonitorData *monitor;
  struct DebugUtilityNode__Fields fields;
};
struct DebugUtilityNode__VTable {
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
  VirtualInvokeData GetUtility;
};
struct DebugUtilityNode__StaticFields {
};
struct DebugUtilityNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugUtilityNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugUtilityNode__VTable vtable;
};

struct ActionDecorator_c {
  struct ActionDecorator_c__Class *klass;
  struct MonitorData *monitor;
};
struct ActionDecorator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActionDecorator_c__StaticFields {
  struct ActionDecorator_c * __9;
  struct Action_1_Moon_BehaviourSystem_Action_ * __9__16_0;
  struct Action * __9__16_1;
};
struct ActionDecorator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionDecorator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionDecorator_c__VTable vtable;
};

enum ConditionalDecorator_ConditionsCheckMode__Enum : int32_t {
  ConditionalDecorator_ConditionsCheckMode__Enum_AllTrueRequired = 0,
  ConditionalDecorator_ConditionsCheckMode__Enum_AnyTrueSuffice = 1,
};
struct ConditionalDecorator_ConditionsCheckMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConditionalDecorator_ConditionsCheckMode__Enum value;
};
struct ConditionalDecorator__Fields {
  struct DecoratorNode__Fields _;
  struct Action_1_Moon_BehaviourSystem_Condition_ * OnConditionAdded;
  struct Action * OnConditionRemoved;
  bool m_isDynamic;
  enum ConditionalDecorator_ConditionsCheckMode__Enum m_checkMode;
  struct Condition__Array * m_conditions;
  struct List_1_Moon_BehaviourSystem_Condition_ * m_conditionsList;
};
struct ConditionalDecorator {
  struct ConditionalDecorator__Class *klass;
  struct MonitorData *monitor;
  struct ConditionalDecorator__Fields fields;
};
struct Action_1_Moon_BehaviourSystem_Condition___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_BehaviourSystem_Condition_ {
  struct Action_1_Moon_BehaviourSystem_Condition___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_BehaviourSystem_Condition___Fields fields;
};
struct Condition__Fields {
  struct TreeBehaviour__Fields _;
  bool Invert;
  bool m_state;
};
struct Condition {
  struct Condition__Class *klass;
  struct MonitorData *monitor;
  struct Condition__Fields fields;
};
struct BooleanCondition__Fields {
  struct Condition__Fields _;
  struct MoonBool * ValueA;
  struct MoonBool * ValueB;
};
struct BooleanCondition {
  struct BooleanCondition__Class *klass;
  struct MonitorData *monitor;
  struct BooleanCondition__Fields fields;
};
struct Condition__Array {
  struct Condition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Condition * vector[32];
};
struct __declspec(align(8)) List_1_Moon_BehaviourSystem_Condition___Fields {
  struct Condition__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BehaviourSystem_Condition_ {
  struct List_1_Moon_BehaviourSystem_Condition___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BehaviourSystem_Condition___Fields fields;
};
struct IEnumerator_1_Moon_BehaviourSystem_Condition_ {
  struct IEnumerator_1_Moon_BehaviourSystem_Condition___Class *klass;
  struct MonitorData *monitor;
};
struct BooleanCondition__VTable {
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
struct BooleanCondition__StaticFields {
};
struct BooleanCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BooleanCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BooleanCondition__VTable vtable;
};
struct Condition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData __unknown;
};
struct Condition__StaticFields {
};
struct Condition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Condition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Condition__VTable vtable;
};
struct Action_1_Moon_BehaviourSystem_Condition___VTable {
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
struct Action_1_Moon_BehaviourSystem_Condition___StaticFields {
};
struct Action_1_Moon_BehaviourSystem_Condition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_BehaviourSystem_Condition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_BehaviourSystem_Condition___VTable vtable;
};
struct IEnumerator_1_Moon_BehaviourSystem_Condition___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_BehaviourSystem_Condition___StaticFields {
};
struct IEnumerator_1_Moon_BehaviourSystem_Condition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_BehaviourSystem_Condition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_BehaviourSystem_Condition___VTable vtable;
};
struct List_1_Moon_BehaviourSystem_Condition___VTable {
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
struct List_1_Moon_BehaviourSystem_Condition___StaticFields {
  struct Condition__Array * _emptyArray;
};
struct List_1_Moon_BehaviourSystem_Condition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BehaviourSystem_Condition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_BehaviourSystem_Condition___VTable vtable;
};
struct ConditionalDecorator__VTable {
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
struct ConditionalDecorator__StaticFields {
};
struct ConditionalDecorator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConditionalDecorator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConditionalDecorator__VTable vtable;
};

struct ConditionalDecorator_c {
  struct ConditionalDecorator_c__Class *klass;
  struct MonitorData *monitor;
};
struct ConditionalDecorator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConditionalDecorator_c__StaticFields {
  struct ConditionalDecorator_c * __9;
  struct Action_1_Moon_BehaviourSystem_Condition_ * __9__26_0;
  struct Action * __9__26_1;
};
struct ConditionalDecorator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConditionalDecorator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConditionalDecorator_c__VTable vtable;
};

struct DistanceComparisonCondition__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * TargetA;
  enum CompareMethod__Enum CheckType;
  struct MoonVector3 * TargetB;
  float FloatingPoint;
};
struct DistanceComparisonCondition {
  struct DistanceComparisonCondition__Class *klass;
  struct MonitorData *monitor;
  struct DistanceComparisonCondition__Fields fields;
};
struct DistanceComparisonCondition__VTable {
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
struct DistanceComparisonCondition__StaticFields {
};
struct DistanceComparisonCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistanceComparisonCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistanceComparisonCondition__VTable vtable;
};

struct DistanceToPointCondition__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * Target;
  enum CompareMethod__Enum CheckType;
  struct MoonFloat * Distance;
  float FloatingPoint;
};
struct DistanceToPointCondition {
  struct DistanceToPointCondition__Class *klass;
  struct MonitorData *monitor;
  struct DistanceToPointCondition__Fields fields;
};
struct DistanceToPointCondition__VTable {
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
struct DistanceToPointCondition__StaticFields {
};
struct DistanceToPointCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistanceToPointCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistanceToPointCondition__VTable vtable;
};

struct FloatCondition__Fields {
  struct Condition__Fields _;
  struct MoonFloat * Value;
  enum CompareMethod__Enum CheckType;
  struct MoonFloat * CompareValue;
  float FloatingPointPrecision;
};
struct FloatCondition {
  struct FloatCondition__Class *klass;
  struct MonitorData *monitor;
  struct FloatCondition__Fields fields;
};
struct FloatCondition__VTable {
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
};}