namespace app {
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SelectorNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SelectorNode__VTable vtable;
};

struct SequenceNode_1__Fields {
  struct CompositeNode__Fields _;
  bool IsRandom;
  bool CancelSequenceOnFailure;
};
struct SequenceNode_1 {
  struct SequenceNode_1__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SequenceNode_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SequenceNode_1__VTable vtable;
};

struct TaskNode__Fields {
  struct BehaviourNode__Fields _;
  struct MoonReference_1_Moon_BehaviourSystem_ITask_ * m_task;
  struct ITask * m_resolvedTask;
};
struct TaskNode {
  struct TaskNode__Class *klass;
  struct MonitorData *monitor;
  struct TaskNode__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_BehaviourSystem_ITask___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_BehaviourSystem_ITask_ * m_cachedProxyType;
  struct ITask * m_volatileValue;
};
struct MoonReference_1_Moon_BehaviourSystem_ITask_ {
  struct MoonReference_1_Moon_BehaviourSystem_ITask___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_BehaviourSystem_ITask___Fields fields;
};
struct IMoonType_1_Moon_BehaviourSystem_ITask_ {
  struct IMoonType_1_Moon_BehaviourSystem_ITask___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_Moon_BehaviourSystem_ITask___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_BehaviourSystem_ITask___StaticFields {
};
struct IMoonType_1_Moon_BehaviourSystem_ITask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_BehaviourSystem_ITask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_BehaviourSystem_ITask___VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_BehaviourSystem_ITask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskNode__VTable vtable;
};

enum UtilitySelectorNode_UtilitySelectorMode__Enum : int32_t {
  UtilitySelectorNode_UtilitySelectorMode__Enum_HighestUtility = 0,
  UtilitySelectorNode_UtilitySelectorMode__Enum_WeightedRandom = 1,
};
struct UtilitySelectorNode_UtilitySelectorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UtilitySelectorNode_UtilitySelectorMode__Enum value;
};
struct UtilitySelectorNode__Fields {
  struct CompositeNode__Fields _;
  enum UtilitySelectorNode_UtilitySelectorMode__Enum SelectionMode;
  float SelectionThreshold;
  struct Single__Array * m_utilities;
  struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ * m_nodeUtilities;
  struct List_1_Moon_BehaviourSystem_BehaviourNode_ * m_nodeList;
  struct List_1_System_Single_ * m_utilitiesList;
  struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_ * m_weightedGroup;
  struct List_1_Moon_BehaviourSystem_IUtilityProvider_ * m_utilityDecorators;
};
struct UtilitySelectorNode {
  struct UtilitySelectorNode__Class *klass;
  struct MonitorData *monitor;
  struct UtilitySelectorNode__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Fields {
  struct UtilitySelectorNode_NodeUtility__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
  struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Fields fields;
};
struct UtilitySelectorNode_NodeUtility {
  struct BehaviourNode * Node;
  float Utility;
};
struct UtilitySelectorNode_NodeUtility__Boxed {
  struct UtilitySelectorNode_NodeUtility__Class *klass;
  struct MonitorData *monitor;
  struct UtilitySelectorNode_NodeUtility fields;
};
struct UtilitySelectorNode_NodeUtility__Array {
  struct UtilitySelectorNode_NodeUtility__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UtilitySelectorNode_NodeUtility vector[32];
};
struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
  struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___Fields {
  struct List_1_Moon_BehaviourSystem_BehaviourNode_ * elements;
  struct List_1_System_Single_ * weights;
  float totalWeight;
};
struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_ {
  struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___Class *klass;
  struct MonitorData *monitor;
  struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___Fields fields;
};
struct __declspec(align(8)) List_1_Moon_BehaviourSystem_IUtilityProvider___Fields {
  struct IUtilityProvider__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BehaviourSystem_IUtilityProvider_ {
  struct List_1_Moon_BehaviourSystem_IUtilityProvider___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BehaviourSystem_IUtilityProvider___Fields fields;
};
struct IUtilityProvider {
  struct IUtilityProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IUtilityProvider__Array {
  struct IUtilityProvider__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IUtilityProvider * vector[32];
};
struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider_ {
  struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UtilitySelectorNode_NodeUtility__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UtilitySelectorNode_NodeUtility__VTable vtable;
};
struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___StaticFields {
};
struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct UtilitySelectorNode_NodeUtility__Array * _emptyArray;
};
struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode___VTable vtable;
};
struct IUtilityProvider__VTable {
  VirtualInvokeData GetUtility;
};
struct IUtilityProvider__StaticFields {
};
struct IUtilityProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUtilityProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUtilityProvider__VTable vtable;
};
struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___StaticFields {
};
struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_BehaviourSystem_IUtilityProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct IUtilityProvider__Array * _emptyArray;
};
struct List_1_Moon_BehaviourSystem_IUtilityProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BehaviourSystem_IUtilityProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UtilitySelectorNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UtilitySelectorNode__VTable vtable;
};

enum WaitNode_WaitNodeReturnType__Enum : int32_t {
  WaitNode_WaitNodeReturnType__Enum_Running = 0,
  WaitNode_WaitNodeReturnType__Enum_Blocking = 1,
};
struct WaitNode_WaitNodeReturnType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WaitNode_WaitNodeReturnType__Enum value;
};
struct WaitNode__Fields {
  struct BehaviourNode__Fields _;
  struct MoonFloat * WaitTime;
  bool RandomValue;
  bool UsePositionBasedRandomValue;
  struct MoonFloat * MinTime;
  struct MoonFloat * MaxTime;
  enum WaitNode_WaitNodeReturnType__Enum ReturnStatus;
  float m_timeEntered;
  float m_waitTime;
};
struct WaitNode {
  struct WaitNode__Class *klass;
  struct MonitorData *monitor;
  struct WaitNode__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitNode__VTable vtable;
};

struct BaseEffect__Fields {
  struct MonoBehaviour__Fields _;
  struct Shader * Shader;
  struct Material * m_Material;
};
struct BaseEffect {
  struct BaseEffect__Class *klass;
  struct MonitorData *monitor;
  struct BaseEffect__Fields fields;
};
struct BaseEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct BaseEffect__StaticFields {
};
struct BaseEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseEffect__VTable vtable;
};

struct AnalogTV__Fields {
  struct BaseEffect__Fields _;
  bool AutomaticPhase;
  float Phase;
  bool ConvertToGrayscale;
  float NoiseIntensity;
  float ScanlinesIntensity;
  int32_t ScanlinesCount;
  float ScanlinesOffset;
  bool VerticalScanlines;
  float Distortion;
  float CubicDistortion;
  float Scale;
};
struct AnalogTV {
  struct AnalogTV__Class *klass;
  struct MonitorData *monitor;
  struct AnalogTV__Fields fields;
};
struct AnalogTV__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData Update;
};
struct AnalogTV__StaticFields {
};
struct AnalogTV__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnalogTV__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnalogTV__VTable vtable;
};

struct BilateralGaussianBlur__Fields {
  struct BaseEffect__Fields _;
  int32_t Passes;
  float Threshold;
  float Amount;
};
struct BilateralGaussianBlur {
  struct BilateralGaussianBlur__Class *klass;
  struct MonitorData *monitor;
  struct BilateralGaussianBlur__Fields fields;
};
struct BilateralGaussianBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
  VirtualInvokeData OnePassBlur;
  VirtualInvokeData MultiPassBlur;
};
struct BilateralGaussianBlur__StaticFields {
};
struct BilateralGaussianBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BilateralGaussianBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BilateralGaussianBlur__VTable vtable;
};

struct BleachBypass__Fields {
  struct BaseEffect__Fields _;
  float Amount;
};
struct BleachBypass {
  struct BleachBypass__Class *klass;
  struct MonitorData *monitor;
  struct BleachBypass__Fields fields;
};
struct BleachBypass__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct BleachBypass__StaticFields {
};
struct BleachBypass__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BleachBypass__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BleachBypass__VTable vtable;
};

enum Blend_BlendingMode__Enum : int32_t {
  Blend_BlendingMode__Enum_Darken = 0,
  Blend_BlendingMode__Enum_Multiply = 1,
  Blend_BlendingMode__Enum_ColorBurn = 2,
  Blend_BlendingMode__Enum_LinearBurn = 3,
  Blend_BlendingMode__Enum_DarkerColor = 4,
  Blend_BlendingMode__Enum_Lighten = 6,
  Blend_BlendingMode__Enum_Screen = 7,
  Blend_BlendingMode__Enum_ColorDodge = 8,
  Blend_BlendingMode__Enum_LinearDodge = 9,
  Blend_BlendingMode__Enum_LighterColor = 10,
  Blend_BlendingMode__Enum_Overlay = 12,
  Blend_BlendingMode__Enum_SoftLight = 13,
  Blend_BlendingMode__Enum_HardLight = 14,
  Blend_BlendingMode__Enum_VividLight = 15,
  Blend_BlendingMode__Enum_LinearLight = 16,
  Blend_BlendingMode__Enum_PinLight = 17,
  Blend_BlendingMode__Enum_HardMix = 18,
  Blend_BlendingMode__Enum_Difference = 20,
  Blend_BlendingMode__Enum_Exclusion = 21,
  Blend_BlendingMode__Enum_Subtract = 22,
  Blend_BlendingMode__Enum_Divide = 23,
};
struct Blend_BlendingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Blend_BlendingMode__Enum value;
};
struct Blend__Fields {
  struct BaseEffect__Fields _;
  struct Texture * Texture;
  float Amount;
  enum Blend_BlendingMode__Enum Mode;
};
struct Blend {
  struct Blend__Class *klass;
  struct MonitorData *monitor;
  struct Blend__Fields fields;
};
struct Blend__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct Blend__StaticFields {
};
struct Blend__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Blend__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Blend__VTable vtable;
};

struct BrightnessContrastGamma__Fields {
  struct BaseEffect__Fields _;
  float Brightness;
  float Contrast;
  struct Vector3 ContrastCoeff;
  float Gamma;
};
struct BrightnessContrastGamma {
  struct BrightnessContrastGamma__Class *klass;
  struct MonitorData *monitor;
  struct BrightnessContrastGamma__Fields fields;
};
struct BrightnessContrastGamma__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct BrightnessContrastGamma__StaticFields {
};
struct BrightnessContrastGamma__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrightnessContrastGamma__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrightnessContrastGamma__VTable vtable;
};

struct ChannelClamper__Fields {
  struct BaseEffect__Fields _;
  struct Vector2 Red;
  struct Vector2 Green;
  struct Vector2 Blue;
};
struct ChannelClamper {
  struct ChannelClamper__Class *klass;
  struct MonitorData *monitor;
  struct ChannelClamper__Fields fields;
};
struct ChannelClamper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct ChannelClamper__StaticFields {
};
struct ChannelClamper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChannelClamper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChannelClamper__VTable vtable;
};

struct ChannelMixer__Fields {
  struct BaseEffect__Fields _;
  struct Vector3 Red;
  struct Vector3 Green;
  struct Vector3 Blue;
  struct Vector3 Constant;
  int32_t e_CurrentChannel;
};
struct ChannelMixer {
  struct ChannelMixer__Class *klass;
  struct MonitorData *monitor;
  struct ChannelMixer__Fields fields;
};
struct ChannelMixer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct ChannelMixer__StaticFields {
};
struct ChannelMixer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChannelMixer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChannelMixer__VTable vtable;
};

enum ChannelSwapper_Channel__Enum : int32_t {
  ChannelSwapper_Channel__Enum_Red = 0,
  ChannelSwapper_Channel__Enum_Green = 1,
  ChannelSwapper_Channel__Enum_Blue = 2,
};
struct ChannelSwapper_Channel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ChannelSwapper_Channel__Enum value;
};
struct ChannelSwapper__Fields {
  struct BaseEffect__Fields _;
  enum ChannelSwapper_Channel__Enum RedSource;
  enum ChannelSwapper_Channel__Enum GreenSource;
  enum ChannelSwapper_Channel__Enum BlueSource;
};
struct ChannelSwapper {
  struct ChannelSwapper__Class *klass;
  struct MonitorData *monitor;
  struct ChannelSwapper__Fields fields;
};
struct ChannelSwapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct ChannelSwapper__StaticFields {
  struct Vector4__Array * m_Channels;
};
struct ChannelSwapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChannelSwapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChannelSwapper__VTable vtable;
};

struct ChromaticAberration__Fields {
  struct BaseEffect__Fields _;
  float RedRefraction;
  float GreenRefraction;
  float BlueRefraction;
  bool PreserveAlpha;
};
struct ChromaticAberration {
  struct ChromaticAberration__Class *klass;
  struct MonitorData *monitor;
  struct ChromaticAberration__Fields fields;
};
struct ChromaticAberration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct ChromaticAberration__StaticFields {
};
struct ChromaticAberration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChromaticAberration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChromaticAberration__VTable vtable;
};

struct ComicBook__Fields {
  struct BaseEffect__Fields _;
  float StripAngle;
  float StripDensity;
  float StripThickness;
  struct Vector2 StripLimits;
  struct Color StripInnerColor;
  struct Color StripOuterColor;
  struct Color FillColor;
  struct Color BackgroundColor;
  bool EdgeDetection;
  float EdgeThreshold;
  struct Color EdgeColor;
  float Amount;
};
struct ComicBook {
  struct ComicBook__Class *klass;
  struct MonitorData *monitor;
  struct ComicBook__Fields fields;
};
struct ComicBook__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData GetShaderName;
};
struct ComicBook__StaticFields {
};
struct ComicBook__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComicBook__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComicBook__VTable vtable;
};}