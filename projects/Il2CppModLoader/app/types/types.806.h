namespace app {
struct PressurePlateSetupHolder {
    struct PressurePlateSetupHolder__Class *klass;
    MonitorData *monitor;
    struct PressurePlateSetupHolder__Fields fields;
};

struct __declspec(align(8)) List_1_PressurePlateSetupData___Fields {
    struct PressurePlateSetupData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PressurePlateSetupData_ {
    struct List_1_PressurePlateSetupData___Class *klass;
    MonitorData *monitor;
    struct List_1_PressurePlateSetupData___Fields fields;
};

struct __declspec(align(8)) TransitionSetupData__Fields {
    struct MoonTimeline *m_transition;
    float m_desiredValue;
};

struct TransitionSetupData {
    struct TransitionSetupData__Class *klass;
    MonitorData *monitor;
    struct TransitionSetupData__Fields fields;
};

struct PressurePlateSetupData__Fields {
    struct TransitionSetupData__Fields _;
    struct Vector3 PlatePosition;
};

struct PressurePlateSetupData {
    struct PressurePlateSetupData__Class *klass;
    MonitorData *monitor;
    struct PressurePlateSetupData__Fields fields;
};

struct PressurePlateSetupData__Array {
    struct PressurePlateSetupData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PressurePlateSetupData *vector[32];
};

struct IEnumerator_1_PressurePlateSetupData_ {
    struct IEnumerator_1_PressurePlateSetupData___Class *klass;
    MonitorData *monitor;
};

struct TransitionSetupData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Transition;
    VirtualInvokeData get_DesiredValue;
};

struct TransitionSetupData__StaticFields {
};

struct TransitionSetupData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransitionSetupData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransitionSetupData__VTable vtable;
};

struct PressurePlateSetupData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Transition;
    VirtualInvokeData get_DesiredValue;
};

struct PressurePlateSetupData__StaticFields {
};

struct PressurePlateSetupData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PressurePlateSetupData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PressurePlateSetupData__VTable vtable;
};

struct PressurePlateSetupData__Array__VTable {
};

struct PressurePlateSetupData__Array__StaticFields {
};

struct PressurePlateSetupData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PressurePlateSetupData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PressurePlateSetupData__Array__VTable vtable;
};

struct IEnumerator_1_PressurePlateSetupData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PressurePlateSetupData___StaticFields {
};

struct IEnumerator_1_PressurePlateSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PressurePlateSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PressurePlateSetupData___VTable vtable;
};

struct List_1_PressurePlateSetupData___VTable {
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

struct List_1_PressurePlateSetupData___StaticFields {
    struct PressurePlateSetupData__Array *_emptyArray;
};

struct List_1_PressurePlateSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PressurePlateSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PressurePlateSetupData___VTable vtable;
};

struct StateHolder_1_PressurePlateSetupData___VTable {
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

struct StateHolder_1_PressurePlateSetupData___StaticFields {
};

struct StateHolder_1_PressurePlateSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateHolder_1_PressurePlateSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateHolder_1_PressurePlateSetupData___VTable vtable;
};

struct TransitionBasedSetupHolder_1_PressurePlateSetupData___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
    VirtualInvokeData GetRequirementsForTimeline;
};

struct TransitionBasedSetupHolder_1_PressurePlateSetupData___StaticFields {
};

struct TransitionBasedSetupHolder_1_PressurePlateSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransitionBasedSetupHolder_1_PressurePlateSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransitionBasedSetupHolder_1_PressurePlateSetupData___VTable vtable;
};

struct PressurePlateSetupHolder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
    VirtualInvokeData GetRequirementsForTimeline;
};

struct PressurePlateSetupHolder__StaticFields {
};

struct PressurePlateSetupHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PressurePlateSetupHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PressurePlateSetupHolder__VTable vtable;
};

enum class PressurePlate_Target__Enum : int32_t {
    Ori = 0x00000001,
    PushPullBlock = 0x00000002,
    Interface = 0x00000004,
    InterfaceExceptOri = 0x00000008,
    All = 0x0000000f,
};

struct PressurePlate_Target__Enum__Boxed {
    struct PressurePlate_Target__Enum__Class *klass;
    MonitorData *monitor;
    PressurePlate_Target__Enum value;
    
};

struct PressurePlate__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    PressurePlate_Target__Enum Targets;
    
    struct Transform *PlateTransform;
    bool DisableOffScreen;
    bool LockPuzzleSolvedState;
    struct PressurePlateSetupHolder *Setup;
    struct MoonReference_1_IStateTransitionHolder_ *LinkedSetup;
    struct List_1_ICanActivatePressurePlate_ *m_pressing;
    struct CollisionEventHandler__Array *m_collisionHandlers;
    struct IUberState__Array *m_affectingUberStates;
};

struct PressurePlate {
    struct PressurePlate__Class *klass;
    MonitorData *monitor;
    struct PressurePlate__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_IStateTransitionHolder___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_IStateTransitionHolder_ *m_cachedProxyType;
    struct IStateTransitionHolder *m_volatileValue;
};

struct MoonReference_1_IStateTransitionHolder_ {
    struct MoonReference_1_IStateTransitionHolder___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_IStateTransitionHolder___Fields fields;
};

struct IMoonType_1_IStateTransitionHolder_ {
    struct IMoonType_1_IStateTransitionHolder___Class *klass;
    MonitorData *monitor;
};

struct IStateTransitionHolder {
    struct IStateTransitionHolder__Class *klass;
    MonitorData *monitor;
};

struct CollisionEventHandler__Array {
    struct CollisionEventHandler__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CollisionEventHandler *vector[32];
};

struct PressurePlate_Target__Enum__VTable {
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

struct PressurePlate_Target__Enum__StaticFields {
};

struct PressurePlate_Target__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PressurePlate_Target__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PressurePlate_Target__Enum__VTable vtable;
};

struct IMoonType_1_IStateTransitionHolder___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_IStateTransitionHolder___StaticFields {
};

struct IMoonType_1_IStateTransitionHolder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_IStateTransitionHolder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_IStateTransitionHolder___VTable vtable;
};

struct IStateTransitionHolder__VTable {
    VirtualInvokeData PerformStateTransition;
};

struct IStateTransitionHolder__StaticFields {
};

struct IStateTransitionHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IStateTransitionHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IStateTransitionHolder__VTable vtable;
};

struct IStateTransitionHolder___VTable {
};

struct IStateTransitionHolder___StaticFields {
};

struct IStateTransitionHolder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IStateTransitionHolder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IStateTransitionHolder___VTable vtable;
};

struct MoonReference_1_IStateTransitionHolder___VTable {
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

struct MoonReference_1_IStateTransitionHolder___StaticFields {
};

struct MoonReference_1_IStateTransitionHolder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IStateTransitionHolder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IStateTransitionHolder___VTable vtable;
};

struct CollisionEventHandler__Array__VTable {
};

struct CollisionEventHandler__Array__StaticFields {
};

struct CollisionEventHandler__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CollisionEventHandler__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CollisionEventHandler__Array__VTable vtable;
};

struct PressurePlate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData RemovePressing;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData StopTransitions;
};

struct PressurePlate__StaticFields {
};

struct PressurePlate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PressurePlate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PressurePlate__VTable vtable;
};

struct __declspec(align(8)) PressurePlate_c_DisplayClass28_0__Fields {
    struct ICanActivatePressurePlate *target;
};

struct PressurePlate_c_DisplayClass28_0 {
    struct PressurePlate_c_DisplayClass28_0__Class *klass;
    MonitorData *monitor;
    struct PressurePlate_c_DisplayClass28_0__Fields fields;
};

struct PressurePlate_c_DisplayClass28_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PressurePlate_c_DisplayClass28_0__StaticFields {
};

struct PressurePlate_c_DisplayClass28_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PressurePlate_c_DisplayClass28_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PressurePlate_c_DisplayClass28_0__VTable vtable;
};

enum class ReadyForAnimationTrigger_State__Enum : int32_t {
    Inactive = 0x00000000,
    Waiting = 0x00000001,
    Started = 0x00000002,
    Finished = 0x00000003,
};

struct ReadyForAnimationTrigger_State__Enum__Boxed {
    struct ReadyForAnimationTrigger_State__Enum__Class *klass;
    MonitorData *monitor;
    ReadyForAnimationTrigger_State__Enum value;
    
};

struct ReadyForAnimationTrigger__Fields {
    struct PlayerInsideZoneChecker__Fields _;
    struct MoonAnimation *Animation;
    struct Vector3 Offset;
    struct AnimationCurve *SpeedByDistanceTraveledNormalized;
    float m_distance;
    float m_startDistance;
    ReadyForAnimationTrigger_State__Enum m_state;
    
    struct Vector3 m_initPos;
    struct GameObject *m_instance;
    struct Condition_1 *ActiveCondition;
    bool OnlyTurnToDestination;
    bool ClampPositionToTarget;
    struct AnimationCurve *AnimationCurveX;
    struct AnimationCurve *AnimationCurveY;
    struct Vector3 m_destination;
};

struct ReadyForAnimationTrigger {
    struct ReadyForAnimationTrigger__Class *klass;
    MonitorData *monitor;
    struct ReadyForAnimationTrigger__Fields fields;
};

struct ReadyForAnimationTrigger_State__Enum__VTable {
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

struct ReadyForAnimationTrigger_State__Enum__StaticFields {
};

struct ReadyForAnimationTrigger_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadyForAnimationTrigger_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadyForAnimationTrigger_State__Enum__VTable vtable;
};

struct ReadyForAnimationTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData get_VirtualTimelineTarget;
    VirtualInvokeData get_VirtualTimelineGroup;
    VirtualInvokeData get_NameDisplayedOnClip;
    VirtualInvokeData get_IsInside;
    VirtualInvokeData FixedUpdate;
    VirtualInvokeData Awake;
};

struct ReadyForAnimationTrigger__StaticFields {
};

struct ReadyForAnimationTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadyForAnimationTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadyForAnimationTrigger__VTable vtable;
};

struct SeeSeinTrigger__Fields {
    struct MonoBehaviour__Fields _;
    float DelayUntilNextTrigger;
    float TriggerDistance;
    float DistanceSmoothFactor;
    struct LayerMask LayerMask;
    float m_time;
    bool m_eventTriggered;
    struct Component_1__Array *m_recievers;
    struct Vector2 RayStartOffset;
    struct Transform *m_transform;
    bool m_canSeeSein;
    struct Ray m_lastRay;
    int32_t m_frame;
};

struct SeeSeinTrigger {
    struct SeeSeinTrigger__Class *klass;
    MonitorData *monitor;
    struct SeeSeinTrigger__Fields fields;
};

struct SeeSeinTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeeSeinTrigger__StaticFields {
};

struct SeeSeinTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeeSeinTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeeSeinTrigger__VTable vtable;
};

struct SeinEnterExitCollision__Fields {
    struct MonoBehaviour__Fields _;
    bool OnTrigger;
    bool OnCollision;
    struct MoonTimeline *OnEnterTimeline;
    struct Condition_1 *OnEnterCondition;
    struct MoonTimeline *OnExitTimeline;
    struct Condition_1 *OnExitCondition;
};

struct SeinEnterExitCollision {
    struct SeinEnterExitCollision__Class *klass;
    MonitorData *monitor;
    struct SeinEnterExitCollision__Fields fields;
};

struct SeinEnterExitCollision__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinEnterExitCollision__StaticFields {
};

struct SeinEnterExitCollision__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinEnterExitCollision__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinEnterExitCollision__VTable vtable;
};

struct SeinEnterExitTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod *OnEnterAction;
    struct Condition_1 *OnEnterCondition;
    struct ActionMethod *OnExitAction;
    struct Condition_1 *OnExitCondition;
};

struct SeinEnterExitTrigger {
    struct SeinEnterExitTrigger__Class *klass;
    MonitorData *monitor;
    struct SeinEnterExitTrigger__Fields fields;
};

struct SeinEnterExitTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinEnterExitTrigger__StaticFields {
};

struct SeinEnterExitTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinEnterExitTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinEnterExitTrigger__VTable vtable;
};

struct SeinHeadBumpTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod *Action;
};

struct SeinHeadBumpTrigger {
    struct SeinHeadBumpTrigger__Class *klass;
    MonitorData *monitor;
    struct SeinHeadBumpTrigger__Fields fields;
};

struct SeinHeadBumpTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinHeadBumpTrigger__StaticFields {
};

struct SeinHeadBumpTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinHeadBumpTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinHeadBumpTrigger__VTable vtable;
};

struct SeinInsideZoneCondition__Fields {
    struct Condition_1__Fields _;
    struct Transform__Array *Zones;
};

struct SeinInsideZoneCondition {
    struct SeinInsideZoneCondition__Class *klass;
    MonitorData *monitor;
    struct SeinInsideZoneCondition__Fields fields;
};

struct SeinInsideZoneCondition__VTable {
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

struct SeinInsideZoneCondition__StaticFields {
};

struct SeinInsideZoneCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinInsideZoneCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinInsideZoneCondition__VTable vtable;
};

struct SeinLandOnTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *OnLandTimeline;
    bool CanBeBrokenByEnemies;
};

struct SeinLandOnTrigger {
    struct SeinLandOnTrigger__Class *klass;
    MonitorData *monitor;
    struct SeinLandOnTrigger__Fields fields;
};

struct SeinLandOnTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinLandOnTrigger__StaticFields {
};

struct SeinLandOnTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinLandOnTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinLandOnTrigger__VTable vtable;
};

struct SeinOutsideZoneCondition__Fields {
    struct Condition_1__Fields _;
    struct Transform__Array *Zones;
};

struct SeinOutsideZoneCondition {
    struct SeinOutsideZoneCondition__Class *klass;
    MonitorData *monitor;
    struct SeinOutsideZoneCondition__Fields fields;
};

struct SeinOutsideZoneCondition__VTable {
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

struct SeinOutsideZoneCondition__StaticFields {
};

struct SeinOutsideZoneCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinOutsideZoneCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinOutsideZoneCondition__VTable vtable;
};

struct Spring__Fields {
    struct MonoBehaviour__Fields _;
    float Height;
    float StopDecelerationMultiplier;
    struct MoonTimeline *OnLandCharacter;
    struct MoonTimeline *OnLandGrenade;
    struct MoonTimeline *OnLandCommon;
    struct MoonTimeline *OnLaunchCharacter;
    struct Func_1_Boolean_ *AllowJumpModifier;
    struct Rigidbody *PushRigidbody;
    float PushForce;
};

struct Spring {
    struct Spring__Class *klass;
    MonitorData *monitor;
    struct Spring__Fields fields;
};

struct Spring__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnCollisionEnter;
};

struct Spring__StaticFields {
};

struct Spring__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Spring__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Spring__VTable vtable;
};

struct SpringSeinTrigger__Fields {
    struct MonoBehaviour__Fields _;
    float Height;
    float StopDecelerationMultiplier;
};

struct SpringSeinTrigger {
    struct SpringSeinTrigger__Class *klass;
    MonitorData *monitor;
    struct SpringSeinTrigger__Fields fields;
};

struct SpringSeinTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpringSeinTrigger__StaticFields {
};

struct SpringSeinTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpringSeinTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpringSeinTrigger__VTable vtable;
};

struct SpringVinedController__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacySpring *Spring;
    struct Condition_1 *AllowJumpCondition;
    struct MoonTimeline *VinesRetractingTimeline;
    struct MoonTimeline *VinesComeBackTimeline;
    struct PlayerInsideZoneChecker *RetractionZone;
    float VinesComeBackDelay;
    float m_timeUntilRetraction;
    bool m_prevRetractVines;
};

struct SpringVinedController {
    struct SpringVinedController__Class *klass;
    MonitorData *monitor;
    struct SpringVinedController__Fields fields;
};

struct SpringVinedController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
};

struct SpringVinedController__StaticFields {
};

struct SpringVinedController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpringVinedController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpringVinedController__VTable vtable;
};

struct StompPost__Fields {
    struct SaveSerialize__Fields _;
    int32_t NumberOfStomps;
    float StompIntoGroundAmount;
    float RisingDelay;
    float RiseSpeed;
    struct SoundProvider *StompSound;
    struct SoundProvider *AllTheWayInSound;
    struct ActionMethod *AllTheWayInAction;
    struct Vector3 m_startLocalPosition;
    struct Transform *m_transform;
    float m_distanceStompedIntoGround;
    float m_remainingRiseDelayTime;
    bool m_activated;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct IDamageReciever__Array *m_damageReceivers;
};

struct StompPost {
    struct StompPost__Class *klass;
    MonitorData *monitor;
    struct StompPost__Fields fields;
};

struct StompPost__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData IDamageReciever_get_gameObject;
    VirtualInvokeData IDamageReciever_get_transform;
    VirtualInvokeData OnRecieveDamage;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData CountsTowardsSuperJumpAchievement;
    VirtualInvokeData get_Position;
    VirtualInvokeData IsDead;
    VirtualInvokeData CanBeChargeFlamed;
    VirtualInvokeData CanBeChargeDashed;
    VirtualInvokeData CanBeGrenaded;
    VirtualInvokeData CanBeStomped;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData CanBeSpiritFlamed;
    VirtualInvokeData IsStompBouncable;
    VirtualInvokeData CanBeLevelUpBlasted;
    VirtualInvokeData CanBeSpiritSlashed;
    VirtualInvokeData CanBeHitByBow;
    VirtualInvokeData CanBeHitByMelee;
    VirtualInvokeData CanBeHitByHammerHandle;
    VirtualInvokeData CanBeHeavySpiritSlashed;
    VirtualInvokeData CanBeSpiritLeashed;
    VirtualInvokeData CanBeHomingMissiled;
    VirtualInvokeData CanBeTrapped;
    VirtualInvokeData CanBeSpiritSpeared;
    VirtualInvokeData CanBeTeleportedByBeacon;
    VirtualInvokeData CanBeGlowed;
    VirtualInvokeData get_AffectedReceivers;
};

}
