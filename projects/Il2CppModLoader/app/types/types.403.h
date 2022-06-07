namespace app {
struct InteractionTransition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct InteractionTransition__StaticFields {
};

struct InteractionTransition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InteractionTransition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InteractionTransition__VTable vtable;
};

struct PlayTimelineInteractionNodeDecorator__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *Timeline;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *ChainedTimeline;
    struct MoonTimeline *m_resolvedTimeline;
    struct MoonTimeline *m_resolvedChainedTimeline;
};

struct PlayTimelineInteractionNodeDecorator {
    struct PlayTimelineInteractionNodeDecorator__Class *klass;
    MonitorData *monitor;
    struct PlayTimelineInteractionNodeDecorator__Fields fields;
};

struct PlayTimelineInteractionNodeDecorator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnDecoratedNodeEnter;
    VirtualInvokeData OnDecoratedNodeExit;
};

struct PlayTimelineInteractionNodeDecorator__StaticFields {
};

struct PlayTimelineInteractionNodeDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayTimelineInteractionNodeDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayTimelineInteractionNodeDecorator__VTable vtable;
};

struct __declspec(align(8)) StateConfigurator__Fields {
    struct StateMachine_1 *m_stateMachine;
    struct IState_1 *m_state;
};

struct StateConfigurator {
    struct StateConfigurator__Class *klass;
    MonitorData *monitor;
    struct StateConfigurator__Fields fields;
};

struct StateConfigurator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StateConfigurator__StaticFields {
};

struct StateConfigurator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateConfigurator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateConfigurator__VTable vtable;
};

struct __declspec(align(8)) StateMachine_c_DisplayClass31_0__Fields {
    struct IState_1 *state;
};

struct StateMachine_c_DisplayClass31_0 {
    struct StateMachine_c_DisplayClass31_0__Class *klass;
    MonitorData *monitor;
    struct StateMachine_c_DisplayClass31_0__Fields fields;
};

struct StateMachine_c_DisplayClass31_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StateMachine_c_DisplayClass31_0__StaticFields {
};

struct StateMachine_c_DisplayClass31_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateMachine_c_DisplayClass31_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateMachine_c_DisplayClass31_0__VTable vtable;
};

struct StateMachine_c {
    struct StateMachine_c__Class *klass;
    MonitorData *monitor;
};

struct StateMachine_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StateMachine_c__StaticFields {
    struct StateMachine_c *__9;
    struct Action_1_Moon_InteractionGraph_StateMachine_ *__9__35_0;
    struct Action_2_Moon_InteractionGraph_StateMachine_Int32_ *__9__35_1;
};

struct StateMachine_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateMachine_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateMachine_c__VTable vtable;
};

struct OnFixedUpdate {
    struct OnFixedUpdate__Class *klass;
    MonitorData *monitor;
};

struct OnFixedUpdate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OnFixedUpdate__StaticFields {
};

struct OnFixedUpdate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OnFixedUpdate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OnFixedUpdate__VTable vtable;
};

struct __declspec(align(8)) State_1__Fields {
    int32_t m_id;
    struct Action *UpdateStateEvent;
    struct Action *OnEnterEvent;
    struct Action *OnExitEvent;
};

struct State_1 {
    struct State_1__Class *klass;
    MonitorData *monitor;
    struct State_1__Fields fields;
};

struct State_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
};

struct State_1__StaticFields {
};

struct State_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct State_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct State_1__VTable vtable;
};

struct State_c {
    struct State_c__Class *klass;
    MonitorData *monitor;
};

struct State_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct State_c__StaticFields {
    struct State_c *__9;
    struct Action *__9__4_0;
    struct Action *__9__4_1;
    struct Action *__9__4_2;
    struct Action *__9__5_0;
    struct Action *__9__5_1;
    struct Action *__9__5_2;
};

struct State_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct State_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct State_c__VTable vtable;
};

struct __declspec(align(8)) CallbackState__Fields {
    struct IState_1 *m_state;
    struct Action *UpdateStateEvent;
    struct Action *OnEnterEvent;
    struct Action *OnExitEvent;
};

struct CallbackState {
    struct CallbackState__Class *klass;
    MonitorData *monitor;
    struct CallbackState__Fields fields;
};

struct CallbackState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
};

struct CallbackState__StaticFields {
};

struct CallbackState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallbackState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallbackState__VTable vtable;
};

struct CallbackState_c {
    struct CallbackState_c__Class *klass;
    MonitorData *monitor;
};

struct CallbackState_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CallbackState_c__StaticFields {
    struct CallbackState_c *__9;
    struct Action *__9__2_0;
    struct Action *__9__2_1;
    struct Action *__9__2_2;
};

struct CallbackState_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallbackState_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallbackState_c__VTable vtable;
};

struct __declspec(align(8)) CompoundState__Fields {
    struct IState_1__Array *m_states;
    struct Action *OnUpdateEvent;
    struct Action *OnEnterEvent;
    struct Action *OnExitEvent;
};

struct CompoundState {
    struct CompoundState__Class *klass;
    MonitorData *monitor;
    struct CompoundState__Fields fields;
};

struct CompoundState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
};

struct CompoundState__StaticFields {
};

struct CompoundState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompoundState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompoundState__VTable vtable;
};

struct CompoundState_c {
    struct CompoundState_c__Class *klass;
    MonitorData *monitor;
};

struct CompoundState_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CompoundState_c__StaticFields {
    struct CompoundState_c *__9;
    struct Action *__9__4_0;
    struct Action *__9__4_1;
    struct Action *__9__4_2;
};

struct CompoundState_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompoundState_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompoundState_c__VTable vtable;
};

struct AlwaysTrueCondition {
    struct AlwaysTrueCondition__Class *klass;
    MonitorData *monitor;
};

struct AlwaysTrueCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct AlwaysTrueCondition__StaticFields {
};

struct AlwaysTrueCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AlwaysTrueCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AlwaysTrueCondition__VTable vtable;
};

struct __declspec(align(8)) AllConditions__Fields {
    struct IEnumerable_1_ICondition_ *m_conditions;
};

struct AllConditions {
    struct AllConditions__Class *klass;
    MonitorData *monitor;
    struct AllConditions__Fields fields;
};

struct IEnumerable_1_ICondition_ {
    struct IEnumerable_1_ICondition___Class *klass;
    MonitorData *monitor;
};

struct ICondition__Array {
    struct ICondition__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ICondition *vector[32];
};

struct IEnumerable_1_ICondition___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_ICondition___StaticFields {
};

struct IEnumerable_1_ICondition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_ICondition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_ICondition___VTable vtable;
};

struct AllConditions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct AllConditions__StaticFields {
};

struct AllConditions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AllConditions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AllConditions__VTable vtable;
};

struct ICondition__Array__VTable {
};

struct ICondition__Array__StaticFields {
};

struct ICondition__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICondition__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICondition__Array__VTable vtable;
};

struct Func_1_Boolean___Array {
    struct Func_1_Boolean___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Func_1_Boolean_ *vector[32];
};

struct Func_1_Boolean___Array__VTable {
};

struct Func_1_Boolean___Array__StaticFields {
};

struct Func_1_Boolean___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_1_Boolean___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_1_Boolean___Array__VTable vtable;
};

struct __declspec(align(8)) AnyConditions__Fields {
    struct IEnumerable_1_ICondition_ *m_conditions;
};

struct AnyConditions {
    struct AnyConditions__Class *klass;
    MonitorData *monitor;
    struct AnyConditions__Fields fields;
};

struct AnyConditions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct AnyConditions__StaticFields {
};

struct AnyConditions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnyConditions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnyConditions__VTable vtable;
};

struct __declspec(align(8)) FuncCondition__Fields {
    struct Func_1_Boolean_ *m_function;
};

struct FuncCondition {
    struct FuncCondition__Class *klass;
    MonitorData *monitor;
    struct FuncCondition__Fields fields;
};

struct FuncCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct FuncCondition__StaticFields {
};

struct FuncCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FuncCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FuncCondition__VTable vtable;
};

enum class TimelineNodeMode__Enum : int32_t {
    Sequence = 0x00000000,
    Random = 0x00000001,
};

struct TimelineNodeMode__Enum__Boxed {
    struct TimelineNodeMode__Enum__Class *klass;
    MonitorData *monitor;
    TimelineNodeMode__Enum value;
    
};

struct TimelineNode__Fields {
    struct InteractionNode__Fields _;
    struct List_1_Moon_MoonReference_1__5 *Timelines;
    TimelineNodeMode__Enum Mode;
    
    struct EventTriggerAnimator *InterruptionTrigger;
    bool ClearResolvedTimelinesOnEnter;
    struct List_1_Moon_Timeline_MoonTimeline_ *m_resolvedTimelines;
    int32_t m_timelineIndx;
};

struct TimelineNode {
    struct TimelineNode__Class *klass;
    MonitorData *monitor;
    struct TimelineNode__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_MoonReference_1__5__Fields {
    struct MoonReference_1_Moon_Timeline_MoonTimeline___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonReference_1__5 {
    struct List_1_Moon_MoonReference_1__5__Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonReference_1__5__Fields fields;
};

struct MoonReference_1_Moon_Timeline_MoonTimeline___Array {
    struct MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *vector[32];
};

struct IEnumerator_1_Moon_MoonReference_1__5 {
    struct IEnumerator_1_Moon_MoonReference_1__5__Class *klass;
    MonitorData *monitor;
};

struct MoonReference_1_Moon_Timeline_MoonTimeline___Array__VTable {
};

struct MoonReference_1_Moon_Timeline_MoonTimeline___Array__StaticFields {
};

struct MoonReference_1_Moon_Timeline_MoonTimeline___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_Moon_Timeline_MoonTimeline___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_Moon_Timeline_MoonTimeline___Array__VTable vtable;
};

struct IEnumerator_1_Moon_MoonReference_1__5__VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_MoonReference_1__5__StaticFields {
};

struct IEnumerator_1_Moon_MoonReference_1__5__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_MoonReference_1__5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_MoonReference_1__5__VTable vtable;
};

struct List_1_Moon_MoonReference_1__5__VTable {
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

struct List_1_Moon_MoonReference_1__5__StaticFields {
    struct MoonReference_1_Moon_Timeline_MoonTimeline___Array *_emptyArray;
};

struct List_1_Moon_MoonReference_1__5__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_MoonReference_1__5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_MoonReference_1__5__VTable vtable;
};

struct TimelineNodeMode__Enum__VTable {
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

struct TimelineNodeMode__Enum__StaticFields {
};

struct TimelineNodeMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineNodeMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineNodeMode__Enum__VTable vtable;
};

struct TimelineNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData get_Actor;
    VirtualInvokeData get_Transitions;
    VirtualInvokeData get_Decorators;
    VirtualInvokeData get_InteractionNodeStatus;
    VirtualInvokeData get_InteractionSettings;
    VirtualInvokeData get_HasInputTransitions;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData get_OnActivated;
    VirtualInvokeData set_OnActivated;
    VirtualInvokeData get_OnFinished;
    VirtualInvokeData set_OnFinished;
    VirtualInvokeData Initialize_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct TimelineNode__StaticFields {
};

struct TimelineNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineNode__VTable vtable;
};

struct __declspec(align(8)) GizmosChangeColor__Fields {
    struct Color _PreviousColor_k__BackingField;
};

struct GizmosChangeColor {
    struct GizmosChangeColor__Class *klass;
    MonitorData *monitor;
    struct GizmosChangeColor__Fields fields;
};

struct GizmosChangeColor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GizmosChangeColor__StaticFields {
};

struct GizmosChangeColor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GizmosChangeColor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GizmosChangeColor__VTable vtable;
};

struct GuiBeginArea {
    struct GuiBeginArea__Class *klass;
    MonitorData *monitor;
};

struct GuiBeginArea__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiBeginArea__StaticFields {
};

struct GuiBeginArea__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiBeginArea__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiBeginArea__VTable vtable;
};

struct GuiBeginHorizontal {
    struct GuiBeginHorizontal__Class *klass;
    MonitorData *monitor;
};

struct GuiBeginHorizontal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiBeginHorizontal__StaticFields {
};

struct GuiBeginHorizontal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiBeginHorizontal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiBeginHorizontal__VTable vtable;
};

struct __declspec(align(8)) GuiBeginScrollView__Fields {
    struct Vector2 _Scroll_k__BackingField;
};

struct GuiBeginScrollView {
    struct GuiBeginScrollView__Class *klass;
    MonitorData *monitor;
    struct GuiBeginScrollView__Fields fields;
};

struct GuiBeginScrollView__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiBeginScrollView__StaticFields {
};

struct GuiBeginScrollView__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiBeginScrollView__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiBeginScrollView__VTable vtable;
};

struct GuiBeginVertical {
    struct GuiBeginVertical__Class *klass;
    MonitorData *monitor;
};

struct GuiBeginVertical__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiBeginVertical__StaticFields {
};

struct GuiBeginVertical__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiBeginVertical__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiBeginVertical__VTable vtable;
};

struct __declspec(align(8)) GuiChangeBackgroundColor__Fields {
    struct Color _PreviousColor_k__BackingField;
};

struct GuiChangeBackgroundColor {
    struct GuiChangeBackgroundColor__Class *klass;
    MonitorData *monitor;
    struct GuiChangeBackgroundColor__Fields fields;
};

struct GuiChangeBackgroundColor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiChangeBackgroundColor__StaticFields {
};

struct GuiChangeBackgroundColor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiChangeBackgroundColor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiChangeBackgroundColor__VTable vtable;
};

struct __declspec(align(8)) GuiChangeColor__Fields {
    struct Color _PreviousColor_k__BackingField;
};

struct GuiChangeColor {
    struct GuiChangeColor__Class *klass;
    MonitorData *monitor;
    struct GuiChangeColor__Fields fields;
};

struct GuiChangeColor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiChangeColor__StaticFields {
};

struct GuiChangeColor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiChangeColor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiChangeColor__VTable vtable;
};

struct __declspec(align(8)) GuiChangeContentColor__Fields {
    struct Color _PreviousColor_k__BackingField;
};

struct GuiChangeContentColor {
    struct GuiChangeContentColor__Class *klass;
    MonitorData *monitor;
    struct GuiChangeContentColor__Fields fields;
};

struct GuiChangeContentColor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiChangeContentColor__StaticFields {
};

struct GuiChangeContentColor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuiChangeContentColor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuiChangeContentColor__VTable vtable;
};

struct __declspec(align(8)) GuiEnable__Fields {
    bool _PreviousState_k__BackingField;
};

struct GuiEnable {
    struct GuiEnable__Class *klass;
    MonitorData *monitor;
    struct GuiEnable__Fields fields;
};

struct GuiEnable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct GuiEnable__StaticFields {
};

}
