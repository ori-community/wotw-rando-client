namespace app {
struct UISoundSettingsAsset {
    struct UISoundSettingsAsset__Class *klass;
    MonitorData *monitor;
    struct UISoundSettingsAsset__Fields fields;
};

struct VerticalSpacer__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_VerticalSpacer_Item_ *Items;
};

struct VerticalSpacer {
    struct VerticalSpacer__Class *klass;
    MonitorData *monitor;
    struct VerticalSpacer__Fields fields;
};

struct __declspec(align(8)) List_1_VerticalSpacer_Item___Fields {
    struct VerticalSpacer_Item__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_VerticalSpacer_Item_ {
    struct List_1_VerticalSpacer_Item___Class *klass;
    MonitorData *monitor;
    struct List_1_VerticalSpacer_Item___Fields fields;
};

struct VerticalSpacer_Item {
    struct Transform *Anchor;
    struct GameObject *AlignableGO;
    float SpaceAbove;
    float SpaceBelow;
    bool SkipIfInactive;
};

struct VerticalSpacer_Item__Boxed {
    struct VerticalSpacer_Item__Class *klass;
    MonitorData *monitor;
    struct VerticalSpacer_Item fields;
};

struct VerticalSpacer_Item__Array {
    struct VerticalSpacer_Item__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerticalSpacer_Item vector[32];
};

struct IEnumerator_1_VerticalSpacer_Item_ {
    struct IEnumerator_1_VerticalSpacer_Item___Class *klass;
    MonitorData *monitor;
};

struct Action_1_BuyMapUIConfirmationOverlay_Selection___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_BuyMapUIConfirmationOverlay_Selection_ {
    struct Action_1_BuyMapUIConfirmationOverlay_Selection___Class *klass;
    MonitorData *monitor;
    struct Action_1_BuyMapUIConfirmationOverlay_Selection___Fields fields;
};

enum class BuyMapUIConfirmationOverlay_Selection__Enum : int32_t {
    OK = 0x00000000,
    Cancel = 0x00000001,
};

struct BuyMapUIConfirmationOverlay_Selection__Enum__Boxed {
    struct BuyMapUIConfirmationOverlay_Selection__Enum__Class *klass;
    MonitorData *monitor;
    BuyMapUIConfirmationOverlay_Selection__Enum value;
    
};

struct UISoundSettingsAsset__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UISoundSettingsAsset__StaticFields {
};

struct UISoundSettingsAsset__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UISoundSettingsAsset__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UISoundSettingsAsset__VTable vtable;
};

struct MenuScreen__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData PlaySoundEvent;
};

struct MenuScreen__StaticFields {
};

struct MenuScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MenuScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MenuScreen__VTable vtable;
};

struct VerticalSpacer_Item__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerticalSpacer_Item__StaticFields {
};

struct VerticalSpacer_Item__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalSpacer_Item__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalSpacer_Item__VTable vtable;
};

struct VerticalSpacer_Item__Array__VTable {
};

struct VerticalSpacer_Item__Array__StaticFields {
};

struct VerticalSpacer_Item__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalSpacer_Item__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalSpacer_Item__Array__VTable vtable;
};

struct IEnumerator_1_VerticalSpacer_Item___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_VerticalSpacer_Item___StaticFields {
};

struct IEnumerator_1_VerticalSpacer_Item___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_VerticalSpacer_Item___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_VerticalSpacer_Item___VTable vtable;
};

struct List_1_VerticalSpacer_Item___VTable {
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

struct List_1_VerticalSpacer_Item___StaticFields {
    struct VerticalSpacer_Item__Array *_emptyArray;
};

struct List_1_VerticalSpacer_Item___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_VerticalSpacer_Item___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_VerticalSpacer_Item___VTable vtable;
};

struct VerticalSpacer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerticalSpacer__StaticFields {
};

struct VerticalSpacer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalSpacer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalSpacer__VTable vtable;
};

struct BuyMapUIConfirmationOverlay_Selection__Enum__VTable {
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

struct BuyMapUIConfirmationOverlay_Selection__Enum__StaticFields {
};

struct BuyMapUIConfirmationOverlay_Selection__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuyMapUIConfirmationOverlay_Selection__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuyMapUIConfirmationOverlay_Selection__Enum__VTable vtable;
};

struct Action_1_BuyMapUIConfirmationOverlay_Selection___VTable {
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

struct Action_1_BuyMapUIConfirmationOverlay_Selection___StaticFields {
};

struct Action_1_BuyMapUIConfirmationOverlay_Selection___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_BuyMapUIConfirmationOverlay_Selection___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_BuyMapUIConfirmationOverlay_Selection___VTable vtable;
};

struct BuyMapUIConfirmationOverlay__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Show;
    VirtualInvokeData Hide;
    VirtualInvokeData ShowImmediate;
    VirtualInvokeData HideImmediate;
    VirtualInvokeData PlaySoundEvent;
};

struct BuyMapUIConfirmationOverlay__StaticFields {
};

struct BuyMapUIConfirmationOverlay__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuyMapUIConfirmationOverlay__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuyMapUIConfirmationOverlay__VTable vtable;
};

struct BuyMapUIConfirmationOverlay_c {
    struct BuyMapUIConfirmationOverlay_c__Class *klass;
    MonitorData *monitor;
};

struct BuyMapUIConfirmationOverlay_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BuyMapUIConfirmationOverlay_c__StaticFields {
    struct BuyMapUIConfirmationOverlay_c *__9;
    struct Action_1_BuyMapUIConfirmationOverlay_Selection_ *__9__15_0;
};

struct BuyMapUIConfirmationOverlay_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuyMapUIConfirmationOverlay_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuyMapUIConfirmationOverlay_c__VTable vtable;
};

enum class DiscoveredAreaPercentageCondition_ComparisonMode__Enum : int32_t {
    GreaterThanOrEqual = 0x00000000,
    LessThan = 0x00000001,
};

struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Boxed {
    struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class *klass;
    MonitorData *monitor;
    DiscoveredAreaPercentageCondition_ComparisonMode__Enum value;
    
};

struct DiscoveredAreaPercentageCondition__Fields {
    struct Condition_1__Fields _;
    struct MoonFloat *AmountDiscovered;
    GameWorldAreaID__Enum Area;
    
    DiscoveredAreaPercentageCondition_ComparisonMode__Enum Compare;
    
};

struct DiscoveredAreaPercentageCondition {
    struct DiscoveredAreaPercentageCondition__Class *klass;
    MonitorData *monitor;
    struct DiscoveredAreaPercentageCondition__Fields fields;
};

struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__VTable {
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

struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__StaticFields {
};

struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__VTable vtable;
};

struct DiscoveredAreaPercentageCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct DiscoveredAreaPercentageCondition__StaticFields {
};

struct DiscoveredAreaPercentageCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DiscoveredAreaPercentageCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DiscoveredAreaPercentageCondition__VTable vtable;
};

struct DynamicTextProvider__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct DynamicTextProvider_MessageConditionPair__Array *Messages;
};

struct DynamicTextProvider {
    struct DynamicTextProvider__Class *klass;
    MonitorData *monitor;
    struct DynamicTextProvider__Fields fields;
};

struct DynamicTextProvider_MessageConditionPair {
    struct MessageProvider *MessageProvider;
    struct Condition_1 *Condition;
};

struct DynamicTextProvider_MessageConditionPair__Boxed {
    struct DynamicTextProvider_MessageConditionPair__Class *klass;
    MonitorData *monitor;
    struct DynamicTextProvider_MessageConditionPair fields;
};

struct DynamicTextProvider_MessageConditionPair__Array {
    struct DynamicTextProvider_MessageConditionPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DynamicTextProvider_MessageConditionPair vector[32];
};

struct DynamicTextProvider_MessageConditionPair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DynamicTextProvider_MessageConditionPair__StaticFields {
};

struct DynamicTextProvider_MessageConditionPair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicTextProvider_MessageConditionPair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicTextProvider_MessageConditionPair__VTable vtable;
};

struct DynamicTextProvider_MessageConditionPair__Array__VTable {
};

struct DynamicTextProvider_MessageConditionPair__Array__StaticFields {
};

struct DynamicTextProvider_MessageConditionPair__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicTextProvider_MessageConditionPair__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicTextProvider_MessageConditionPair__Array__VTable vtable;
};

struct DynamicTextProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetResolverForType;
};

struct DynamicTextProvider__StaticFields {
};

struct DynamicTextProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicTextProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicTextProvider__VTable vtable;
};

struct HasAreaMapCondition__Fields {
    struct Condition_1__Fields _;
    bool Inverse;
};

struct HasAreaMapCondition {
    struct HasAreaMapCondition__Class *klass;
    MonitorData *monitor;
    struct HasAreaMapCondition__Fields fields;
};

struct HasAreaMapCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct HasAreaMapCondition__StaticFields {
};

struct HasAreaMapCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HasAreaMapCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HasAreaMapCondition__VTable vtable;
};

struct IsInSceneCondition__Fields {
    struct Condition_1__Fields _;
    struct SceneMetaData *SceneMetaData;
    struct MoonReference_1_UnityEngine_Transform_ *Target;
    bool Inverse;
};

struct IsInSceneCondition {
    struct IsInSceneCondition__Class *klass;
    MonitorData *monitor;
    struct IsInSceneCondition__Fields fields;
};

struct IsInSceneCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct IsInSceneCondition__StaticFields {
};

struct IsInSceneCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IsInSceneCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IsInSceneCondition__VTable vtable;
};

enum class MinerIdle_IdleStates__Enum : int32_t {
    TransitioningToSharpen = 0x00000000,
    SharpenAxe = 0x00000001,
    SharpenAxeLookAround = 0x00000002,
    Last = 0x00000003,
};

struct MinerIdle_IdleStates__Enum__Boxed {
    struct MinerIdle_IdleStates__Enum__Class *klass;
    MonitorData *monitor;
    MinerIdle_IdleStates__Enum value;
    
};

struct MinerIdle__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline *TransitioningToSharpenTimeline;
    struct MoonTimeline *TransitioningFromSharpenTimeline;
    struct MoonTimeline *SharpenAxeTimeline;
    struct MoonTimeline *SharpenAxeLookAroundTimeline;
    float TransitionInDuration;
    float ChanceOfPlayingSharpeningVariation;
    MinerIdle_IdleStates__Enum m_currentState;
    
    struct MoonTimeline *m_currentTimeline;
    struct NPCEntity *m_npcEntity;
};

struct MinerIdle {
    struct MinerIdle__Class *klass;
    MonitorData *monitor;
    struct MinerIdle__Fields fields;
};

struct MinerIdle_IdleStates__Enum__VTable {
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

struct MinerIdle_IdleStates__Enum__StaticFields {
};

struct MinerIdle_IdleStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MinerIdle_IdleStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MinerIdle_IdleStates__Enum__VTable vtable;
};

struct MinerIdle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData get_Entity;
    VirtualInvokeData OnExecuteTask_1;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
};

struct MinerIdle__StaticFields {
};

struct MinerIdle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MinerIdle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MinerIdle__VTable vtable;
};

enum class MinerInteractionBehaviour_InteractionStates__Enum : int32_t {
    Idle = 0x00000000,
    WaitingForInTransition = 0x00000001,
    Talking = 0x00000002,
    Farewell = 0x00000003,
};

struct MinerInteractionBehaviour_InteractionStates__Enum__Boxed {
    struct MinerInteractionBehaviour_InteractionStates__Enum__Class *klass;
    MonitorData *monitor;
    MinerInteractionBehaviour_InteractionStates__Enum value;
    
};

struct MinerInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline *IdleTimeline;
    struct MoonTimeline *IntroTimeline;
    struct MoonTimeline *FarewellTimeline;
    struct MoonTimeline *TransitionFromIdleTimeline;
    struct MoonTimeline *TransitionFromTalkTimeline;
    struct MoonTimeline *TransitionIdleToTalk;
    struct MoonTimeline *TransitionTalkToIdle;
    float TransitionInDuration;
    struct List_1_Moon_MoonReference_1__10 *TalkDialogNodes;
    struct MoonReference_1_IDialogCallbackNotifier_ *FarewellDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_ *AgreedToMoveToNewSpotDialogNode;
    struct SetWorldEventAction *SetWorldEventToMoveToNewSpot;
    struct MoonTimeline *m_currentTimeline;
    MinerInteractionBehaviour_InteractionStates__Enum m_currentState;
    
    struct IDialogCallbackNotifier *m_resolvedFarewellNode;
    struct IDialogCallbackNotifier *m_resolvedAgreedToMoveToNewSpotNode;
    struct List_1_IDialogCallbackNotifier_ *m_resolvedTalkNodes;
    MinerInteractionBehaviour_InteractionStates__Enum m_newState;
    
    struct NPCEntity *m_npcEntity;
};

struct MinerInteractionBehaviour {
    struct MinerInteractionBehaviour__Class *klass;
    MonitorData *monitor;
    struct MinerInteractionBehaviour__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_MoonReference_1__10__Fields {
    struct MoonReference_1_IDialogCallbackNotifier___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonReference_1__10 {
    struct List_1_Moon_MoonReference_1__10__Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonReference_1__10__Fields fields;
};

struct MoonReference_1_IDialogCallbackNotifier___Array {
    struct MoonReference_1_IDialogCallbackNotifier___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonReference_1_IDialogCallbackNotifier_ *vector[32];
};

struct IEnumerator_1_Moon_MoonReference_1__10 {
    struct IEnumerator_1_Moon_MoonReference_1__10__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_IDialogCallbackNotifier___Fields {
    struct IDialogCallbackNotifier__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IDialogCallbackNotifier_ {
    struct List_1_IDialogCallbackNotifier___Class *klass;
    MonitorData *monitor;
    struct List_1_IDialogCallbackNotifier___Fields fields;
};

struct IDialogCallbackNotifier__Array {
    struct IDialogCallbackNotifier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IDialogCallbackNotifier *vector[32];
};

struct IEnumerator_1_IDialogCallbackNotifier_ {
    struct IEnumerator_1_IDialogCallbackNotifier___Class *klass;
    MonitorData *monitor;
};

struct MoonReference_1_IDialogCallbackNotifier___Array__VTable {
};

struct MoonReference_1_IDialogCallbackNotifier___Array__StaticFields {
};

struct MoonReference_1_IDialogCallbackNotifier___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IDialogCallbackNotifier___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IDialogCallbackNotifier___Array__VTable vtable;
};

struct IEnumerator_1_Moon_MoonReference_1__10__VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_MoonReference_1__10__StaticFields {
};

struct IEnumerator_1_Moon_MoonReference_1__10__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_MoonReference_1__10__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_MoonReference_1__10__VTable vtable;
};

struct List_1_Moon_MoonReference_1__10__VTable {
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

struct List_1_Moon_MoonReference_1__10__StaticFields {
    struct MoonReference_1_IDialogCallbackNotifier___Array *_emptyArray;
};

struct List_1_Moon_MoonReference_1__10__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_MoonReference_1__10__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_MoonReference_1__10__VTable vtable;
};

struct MinerInteractionBehaviour_InteractionStates__Enum__VTable {
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

struct MinerInteractionBehaviour_InteractionStates__Enum__StaticFields {
};

struct MinerInteractionBehaviour_InteractionStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MinerInteractionBehaviour_InteractionStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MinerInteractionBehaviour_InteractionStates__Enum__VTable vtable;
};

struct IDialogCallbackNotifier__Array__VTable {
};

struct IDialogCallbackNotifier__Array__StaticFields {
};

struct IDialogCallbackNotifier__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogCallbackNotifier__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogCallbackNotifier__Array__VTable vtable;
};

struct IEnumerator_1_IDialogCallbackNotifier___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_IDialogCallbackNotifier___StaticFields {
};

struct IEnumerator_1_IDialogCallbackNotifier___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_IDialogCallbackNotifier___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_IDialogCallbackNotifier___VTable vtable;
};

struct List_1_IDialogCallbackNotifier___VTable {
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

}
