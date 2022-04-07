namespace app {

enum InteractionBidingButton__Enum : int32_t {
  InteractionBidingButton__Enum_X = 0,
  InteractionBidingButton__Enum_Y = 1,
  InteractionBidingButton__Enum_A = 2,
  InteractionBidingButton__Enum_B = 3,
};
struct InteractionBidingButton__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InteractionBidingButton__Enum value;
};
struct ButtonInteractionTransition__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_ * Destination;
  enum InteractionBidingButton__Enum InteractionButton;
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_ * m_message;
  struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_ * m_resolvedMessage;
  struct InteractionBinding * m_interactionBiding;
  struct IInteractionNode * m_resolvedDialogNode;
  bool m_buttonPressed;
  struct Action_1_IContext_ * _OnActivated_k__BackingField;
  struct Action_1_IContext_ * _OnFinished_k__BackingField;
};
struct ButtonInteractionTransition {
  struct ButtonInteractionTransition__Class *klass;
  struct MonitorData *monitor;
  struct ButtonInteractionTransition__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_InteractionGraph_IInteractionNode___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionNode_ * m_cachedProxyType;
  struct IInteractionNode * m_volatileValue;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_ {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNode___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNode___Fields fields;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionNode_ {
  struct IMoonType_1_Moon_InteractionGraph_IInteractionNode___Class *klass;
  struct MonitorData *monitor;
};
struct IInteractionNode {
  struct IInteractionNode__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonReference_1_Moon_InteractionGraph_IMessageProvider___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_InteractionGraph_IMessageProvider_ * m_cachedProxyType;
  struct IMessageProvider * m_volatileValue;
};
struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_ {
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider___Fields fields;
};
struct IMoonType_1_Moon_InteractionGraph_IMessageProvider_ {
  struct IMoonType_1_Moon_InteractionGraph_IMessageProvider___Class *klass;
  struct MonitorData *monitor;
};
struct IMessageProvider {
  struct IMessageProvider__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___Fields {
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_ * m_moonRef;
  struct IMessageProvider * m_resolvedRef;
  bool m_alwaysResolveOnEditor;
};
struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_ {
  struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___Class *klass;
  struct MonitorData *monitor;
  struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___Fields fields;
};
struct __declspec(align(8)) InteractionBinding__Fields {
  struct Action * Action;
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_ * m_messageProvider;
  float Cost;
  bool m_active;
  struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_ * m_resolvedMessageProvider;
};
struct InteractionBinding {
  struct InteractionBinding__Class *klass;
  struct MonitorData *monitor;
  struct InteractionBinding__Fields fields;
};
struct Action_1_IContext___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_IContext_ {
  struct Action_1_IContext___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_IContext___Fields fields;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionNode___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionNode___StaticFields {
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionNode___VTable vtable;
};
struct IInteractionNode__VTable {
  VirtualInvokeData Initialize;
  VirtualInvokeData get_Actor;
  VirtualInvokeData get_Transitions;
  VirtualInvokeData get_Decorators;
  VirtualInvokeData get_InteractionNodeStatus;
  VirtualInvokeData get_InteractionSettings;
  VirtualInvokeData get_HasInputTransitions;
};
struct IInteractionNode__StaticFields {
};
struct IInteractionNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IInteractionNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IInteractionNode__VTable vtable;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode___VTable {
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
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode___StaticFields {
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNode___VTable vtable;
};
struct IMoonType_1_Moon_InteractionGraph_IMessageProvider___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_InteractionGraph_IMessageProvider___StaticFields {
};
struct IMoonType_1_Moon_InteractionGraph_IMessageProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_InteractionGraph_IMessageProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_InteractionGraph_IMessageProvider___VTable vtable;
};
struct IMessageProvider__VTable {
  VirtualInvokeData GetAllMessages;
};
struct IMessageProvider__StaticFields {
};
struct IMessageProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMessageProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMessageProvider__VTable vtable;
};
struct MoonReference_1_Moon_InteractionGraph_IMessageProvider___VTable {
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
struct MoonReference_1_Moon_InteractionGraph_IMessageProvider___StaticFields {
};
struct MoonReference_1_Moon_InteractionGraph_IMessageProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider___VTable vtable;
};
struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___StaticFields {
};
struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider___VTable vtable;
};
struct InteractionBinding__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionBinding__StaticFields {
};
struct InteractionBinding__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionBinding__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionBinding__VTable vtable;
};
struct Action_1_IContext___VTable {
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
struct Action_1_IContext___StaticFields {
};
struct Action_1_IContext___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_IContext___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_IContext___VTable vtable;
};
struct ButtonInteractionTransition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Button;
  VirtualInvokeData get_InteractionBinding;
  VirtualInvokeData get_TransitionDestination;
  VirtualInvokeData OnOwnerEnter;
  VirtualInvokeData OnOwnerExit;
  VirtualInvokeData Validate;
  VirtualInvokeData get_OnActivated;
  VirtualInvokeData set_OnActivated;
  VirtualInvokeData get_OnFinished;
  VirtualInvokeData set_OnFinished;
};
struct ButtonInteractionTransition__StaticFields {
};
struct ButtonInteractionTransition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ButtonInteractionTransition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ButtonInteractionTransition__VTable vtable;
};

struct ChangeStateInteractionNodeDecorator__Fields {
  struct MonoBehaviour__Fields _;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * StateSetup;
};
struct ChangeStateInteractionNodeDecorator {
  struct ChangeStateInteractionNodeDecorator__Class *klass;
  struct MonitorData *monitor;
  struct ChangeStateInteractionNodeDecorator__Fields fields;
};
struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Fields {
  struct StateHolder__Fields _;
  struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData_ {
  struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Fields fields;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Fields {
  struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Fields _;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder {
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Fields {
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData_ {
  struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Fields fields;
};
struct __declspec(align(8)) ChangeStateInteractionNodeDecorator_StateConditionSetupData__Fields {
  float m_desiredValue;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupData {
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class *klass;
  struct MonitorData *monitor;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__Fields fields;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array {
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData * vector[32];
};
struct IEnumerator_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData_ {
  struct IEnumerator_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Class *klass;
  struct MonitorData *monitor;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__StaticFields {
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__VTable vtable;
};
struct IEnumerator_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___StaticFields {
};
struct IEnumerator_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___VTable vtable;
};
struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___VTable {
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
struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___StaticFields {
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array * _emptyArray;
};
struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___VTable vtable;
};
struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___StaticFields {
};
struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_Moon_InteractionGraph_ChangeStateInteractionNodeDecorator_StateConditionSetupData___VTable vtable;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__StaticFields {
};
struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__VTable vtable;
};
struct ChangeStateInteractionNodeDecorator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnDecoratedNodeEnter;
  VirtualInvokeData OnDecoratedNodeExit;
  VirtualInvokeData OnDecoratedNodeEnter_1;
};
struct ChangeStateInteractionNodeDecorator__StaticFields {
};
struct ChangeStateInteractionNodeDecorator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeStateInteractionNodeDecorator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeStateInteractionNodeDecorator__VTable vtable;
};

struct ConditionalInteractionTransition__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_ * Destination;
  struct MoonReference_1_ICondition_ * Condition;
  bool WaitForNodeToFinish;
  struct IInteractionNode * m_resolvedDialogNode;
  struct ICondition * m_resolvedCondition;
};
struct ConditionalInteractionTransition {
  struct ConditionalInteractionTransition__Class *klass;
  struct MonitorData *monitor;
  struct ConditionalInteractionTransition__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_ICondition___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ICondition_ * m_cachedProxyType;
  struct ICondition * m_volatileValue;
};
struct MoonReference_1_ICondition_ {
  struct MoonReference_1_ICondition___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ICondition___Fields fields;
};
struct IMoonType_1_ICondition_ {
  struct IMoonType_1_ICondition___Class *klass;
  struct MonitorData *monitor;
};
struct ICondition {
  struct ICondition__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_ICondition___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ICondition___StaticFields {
};
struct IMoonType_1_ICondition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ICondition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ICondition___VTable vtable;
};
struct ICondition__VTable {
  VirtualInvokeData Validate;
};
struct ICondition__StaticFields {
};
struct ICondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICondition__VTable vtable;
};
struct MoonReference_1_ICondition___VTable {
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
struct MoonReference_1_ICondition___StaticFields {
};
struct MoonReference_1_ICondition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ICondition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ICondition___VTable vtable;
};
struct ConditionalInteractionTransition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TransitionDestination;
  VirtualInvokeData OnOwnerEnter;
  VirtualInvokeData OnOwnerExit;
  VirtualInvokeData Validate;
};
struct ConditionalInteractionTransition__StaticFields {
};
struct ConditionalInteractionTransition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConditionalInteractionTransition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConditionalInteractionTransition__VTable vtable;
};

enum InteractionNodeStatus__Enum : int32_t {
  InteractionNodeStatus__Enum_Resting = 0,
  InteractionNodeStatus__Enum_Running = 1,
  InteractionNodeStatus__Enum_Finished = 2,
};
struct InteractionNodeStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InteractionNodeStatus__Enum value;
};
struct InteractionNode__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionActor_ * InteractionActor;
  struct List_1_Moon_MoonReference_1__3 * NodeTransitions;
  struct List_1_Moon_MoonReference_1__4 * NodeDecorators;
  struct IInteractionActor * m_resolvedActor;
  struct List_1_Moon_InteractionGraph_IInteractionTransition_ * m_resolvedTransitions;
  struct List_1_Moon_InteractionGraph_IInteractionNodeDecorator_ * m_resolvedDecorators;
  struct InteractionSettings * m_interactionSettings;
  struct List_1_Moon_InteractionGraph_IInputTransition_ * m_inputTransitions;
  struct Action_1_IContext_ * _OnActivated_k__BackingField;
  struct Action_1_IContext_ * _OnFinished_k__BackingField;
  enum InteractionNodeStatus__Enum _InteractionNodeStatus_k__BackingField;
};
struct InteractionNode {
  struct InteractionNode__Class *klass;
  struct MonitorData *monitor;
  struct InteractionNode__Fields fields;
};
struct EmptyInteractionNode__Fields {
  struct InteractionNode__Fields _;
};
struct EmptyInteractionNode {
  struct EmptyInteractionNode__Class *klass;
  struct MonitorData *monitor;
  struct EmptyInteractionNode__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_InteractionGraph_IInteractionActor___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionActor_ * m_cachedProxyType;
  struct IInteractionActor * m_volatileValue;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionActor_ {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionActor___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionActor___Fields fields;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionActor_ {
  struct IMoonType_1_Moon_InteractionGraph_IInteractionActor___Class *klass;
  struct MonitorData *monitor;
};
struct IInteractionActor {
  struct IInteractionActor__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__3__Fields {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__3 {
  struct List_1_Moon_MoonReference_1__3__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__3__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition_ * m_cachedProxyType;
  struct IInteractionTransition * m_volatileValue;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition_ {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Fields fields;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Array {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition_ * vector[32];
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition_ {
  struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition___Class *klass;
  struct MonitorData *monitor;
};
struct IInteractionTransition {
  struct IInteractionTransition__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonReference_1__3 {
  struct IEnumerator_1_Moon_MoonReference_1__3__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__4__Fields {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__4 {
  struct List_1_Moon_MoonReference_1__4__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__4__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionNodeDecorator_ * m_cachedProxyType;
  struct IInteractionNodeDecorator * m_volatileValue;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator_ {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator___Fields fields;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator___Array {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator_ * vector[32];
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionNodeDecorator_ {
  struct IMoonType_1_Moon_InteractionGraph_IInteractionNodeDecorator___Class *klass;
  struct MonitorData *monitor;
};
struct IInteractionNodeDecorator {
  struct IInteractionNodeDecorator__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonReference_1__4 {
  struct IEnumerator_1_Moon_MoonReference_1__4__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_InteractionGraph_IInteractionTransition___Fields {
  struct IInteractionTransition__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_InteractionGraph_IInteractionTransition_ {
  struct List_1_Moon_InteractionGraph_IInteractionTransition___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_InteractionGraph_IInteractionTransition___Fields fields;
};
struct IInteractionTransition__Array {
  struct IInteractionTransition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IInteractionTransition * vector[32];
};
struct IEnumerator_1_Moon_InteractionGraph_IInteractionTransition_ {
  struct IEnumerator_1_Moon_InteractionGraph_IInteractionTransition___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_InteractionGraph_IInteractionNodeDecorator___Fields {
  struct IInteractionNodeDecorator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_InteractionGraph_IInteractionNodeDecorator_ {
  struct List_1_Moon_InteractionGraph_IInteractionNodeDecorator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_InteractionGraph_IInteractionNodeDecorator___Fields fields;
};
struct IInteractionNodeDecorator__Array {
  struct IInteractionNodeDecorator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IInteractionNodeDecorator * vector[32];
};
struct IEnumerator_1_Moon_InteractionGraph_IInteractionNodeDecorator_ {
  struct IEnumerator_1_Moon_InteractionGraph_IInteractionNodeDecorator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) InteractionSettings__Fields {
  struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_ * m_interactctionMessageProvider;
  struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_ * m_resolvedMessageProvider;
  struct InteractionBinding * XInteractionBinding;
  struct InteractionBinding * YInteractionBinding;
  struct InteractionBinding * AInteractionBinding;
  struct InteractionBinding * BInteractionBinding;
};
struct InteractionSettings {
  struct InteractionSettings__Class *klass;
  struct MonitorData *monitor;
  struct InteractionSettings__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_InteractionGraph_IInputTransition___Fields {
  struct IInputTransition__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_InteractionGraph_IInputTransition_ {
  struct List_1_Moon_InteractionGraph_IInputTransition___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_InteractionGraph_IInputTransition___Fields fields;
};
struct IInputTransition {
  struct IInputTransition__Class *klass;
  struct MonitorData *monitor;
};
struct IInputTransition__Array {
  struct IInputTransition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IInputTransition * vector[32];
};
struct IEnumerator_1_Moon_InteractionGraph_IInputTransition_ {
  struct IEnumerator_1_Moon_InteractionGraph_IInputTransition___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionActor___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionActor___StaticFields {
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionActor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionActor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionActor___VTable vtable;
};
struct IInteractionActor__VTable {
  VirtualInvokeData get_InteractionActorName;
  VirtualInvokeData get_InteractionActorAnimator;
  VirtualInvokeData get_InteractionActorPosition;
};
struct IInteractionActor__StaticFields {
};
struct IInteractionActor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IInteractionActor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IInteractionActor__VTable vtable;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionActor___VTable {
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
struct MoonReference_1_Moon_InteractionGraph_IInteractionActor___StaticFields {
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionActor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionActor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionActor___VTable vtable;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition___StaticFields {
};
struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_InteractionGraph_IInteractionTransition___VTable vtable;
};
struct IInteractionTransition__VTable {
  VirtualInvokeData get_TransitionDestination;
  VirtualInvokeData OnOwnerEnter;
  VirtualInvokeData OnOwnerExit;
};
struct IInteractionTransition__StaticFields {
};
struct IInteractionTransition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IInteractionTransition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IInteractionTransition__VTable vtable;
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___VTable {
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
struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___StaticFields {
};
struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___VTable vtable;
};
struct IEnumerator_1_Moon_MoonReference_1__3__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonReference_1__3__StaticFields {
};
struct IEnumerator_1_Moon_MoonReference_1__3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonReference_1__3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonReference_1__3__VTable vtable;
};
struct List_1_Moon_MoonReference_1__3__VTable {
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
struct List_1_Moon_MoonReference_1__3__StaticFields {
  struct MoonReference_1_Moon_InteractionGraph_IInteractionTransition___Array * _emptyArray;
};
struct List_1_Moon_MoonReference_1__3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonReference_1__3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonReference_1__3__VTable vtable;
};}