namespace app {
struct ModularZoneActiveCondition {
    struct ModularZoneActiveCondition__Class *klass;
    MonitorData *monitor;
    struct ModularZoneActiveCondition__Fields fields;
};

struct ModularZoneActiveCondition__VTable {
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

struct ModularZoneActiveCondition__StaticFields {
};

struct ModularZoneActiveCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ModularZoneActiveCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ModularZoneActiveCondition__VTable vtable;
};

struct MoveWithCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1 *Condition;
    struct Transform *Target;
    struct Vector3 Amount;
    float Duration;
    float SpeedSmoothingTime;
    bool InvertIfConditionNotMet;
    struct Vector3 m_startPos;
    struct Vector3 m_endPos;
    float m_ratio;
    float m_currentSpeed;
};

struct MoveWithCondition {
    struct MoveWithCondition__Class *klass;
    MonitorData *monitor;
    struct MoveWithCondition__Fields fields;
};

struct MoveWithCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetTweenNormalizedValue;
};

struct MoveWithCondition__StaticFields {
};

struct MoveWithCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoveWithCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoveWithCondition__VTable vtable;
};

struct PlayerPositionOverride__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Target;
    struct Rect m_bounds;
    bool m_active;
};

struct PlayerPositionOverride {
    struct PlayerPositionOverride__Class *klass;
    MonitorData *monitor;
    struct PlayerPositionOverride__Fields fields;
};

struct PlayerPositionOverride__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Category;
};

struct PlayerPositionOverride__StaticFields {
    bool Active;
    struct Vector3 Position;
};

struct PlayerPositionOverride__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerPositionOverride__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerPositionOverride__VTable vtable;
};

struct GetAbilityAction__Fields {
    struct ActionMethod__Fields _;
    AbilityType__Enum Ability;
    
    bool Gain;
};

struct GetAbilityAction {
    struct GetAbilityAction__Class *klass;
    MonitorData *monitor;
    struct GetAbilityAction__Fields fields;
};

struct GetAbilityAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct GetAbilityAction__StaticFields {
};

struct GetAbilityAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetAbilityAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetAbilityAction__VTable vtable;
};

enum class LegacyGetAbilityPedestal_States__Enum : int32_t {
    OutOfRange = 0x00000000,
    InRange = 0x00000001,
    Completed = 0x00000002,
};

struct LegacyGetAbilityPedestal_States__Enum__Boxed {
    struct LegacyGetAbilityPedestal_States__Enum__Class *klass;
    MonitorData *monitor;
    LegacyGetAbilityPedestal_States__Enum value;
    
};

struct LegacyGetAbilityPedestal__Fields {
    struct SaveSerialize__Fields _;
    LegacyGetAbilityPedestal_States__Enum CurrentState;
    
    AbilityType__Enum Ability;
    
    struct PerformingAction *ActivatePedestalSequence;
    struct IContext *ActivatePedestalSequenceContext;
    float ActivationDuration;
    struct MoonAnimation *GetAbility;
    struct Texture2D *PressUpToActivatePedestal;
    struct MessageProvider *PressUpToActivatePedestalMessage;
    struct MessageBox *m_message;
    float Radius;
    struct Transform *m_transform;
    struct Action *OnGetAbilityFinished;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
    
};

struct LegacyGetAbilityPedestal {
    struct LegacyGetAbilityPedestal__Class *klass;
    MonitorData *monitor;
    struct LegacyGetAbilityPedestal__Fields fields;
};

struct __declspec(align(8)) List_1_LegacyGetAbilityPedestal___Fields {
    struct LegacyGetAbilityPedestal__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyGetAbilityPedestal_ {
    struct List_1_LegacyGetAbilityPedestal___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyGetAbilityPedestal___Fields fields;
};

struct LegacyGetAbilityPedestal__Array {
    struct LegacyGetAbilityPedestal__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyGetAbilityPedestal *vector[32];
};

struct IEnumerator_1_LegacyGetAbilityPedestal_ {
    struct IEnumerator_1_LegacyGetAbilityPedestal___Class *klass;
    MonitorData *monitor;
};

struct LegacyGetAbilityPedestal__Array__VTable {
};

struct LegacyGetAbilityPedestal__Array__StaticFields {
};

struct LegacyGetAbilityPedestal__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyGetAbilityPedestal__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyGetAbilityPedestal__Array__VTable vtable;
};

struct IEnumerator_1_LegacyGetAbilityPedestal___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LegacyGetAbilityPedestal___StaticFields {
};

struct IEnumerator_1_LegacyGetAbilityPedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LegacyGetAbilityPedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LegacyGetAbilityPedestal___VTable vtable;
};

struct List_1_LegacyGetAbilityPedestal___VTable {
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

struct List_1_LegacyGetAbilityPedestal___StaticFields {
    struct LegacyGetAbilityPedestal__Array *_emptyArray;
};

struct List_1_LegacyGetAbilityPedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LegacyGetAbilityPedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LegacyGetAbilityPedestal___VTable vtable;
};

struct LegacyGetAbilityPedestal_States__Enum__VTable {
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

struct LegacyGetAbilityPedestal_States__Enum__StaticFields {
};

struct LegacyGetAbilityPedestal_States__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyGetAbilityPedestal_States__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyGetAbilityPedestal_States__Enum__VTable vtable;
};

struct LegacyGetAbilityPedestal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_StressTestName;
    VirtualInvokeData StartStressTest;
    VirtualInvokeData StressTestUpdate;
    VirtualInvokeData EndStressTest;
    VirtualInvokeData get_StressTestStatus;
    VirtualInvokeData set_StressTestStatus;
    VirtualInvokeData get_CanExecuteStressTest;
    VirtualInvokeData get_StopMovingPlayerWhilePerforming;
};

struct LegacyGetAbilityPedestal__StaticFields {
    struct List_1_LegacyGetAbilityPedestal_ *All;
};

struct LegacyGetAbilityPedestal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyGetAbilityPedestal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyGetAbilityPedestal__VTable vtable;
};

enum class MoonGetAbilityPedestal_States__Enum : int32_t {
    OutOfRange = 0x00000000,
    InRange = 0x00000001,
    Completed = 0x00000002,
};

struct MoonGetAbilityPedestal_States__Enum__Boxed {
    struct MoonGetAbilityPedestal_States__Enum__Class *klass;
    MonitorData *monitor;
    MoonGetAbilityPedestal_States__Enum value;
    
};

struct MoonGetAbilityPedestal__Fields {
    struct MonoBehaviour__Fields _;
    struct Action *OnCollectEvent;
    MoonGetAbilityPedestal_States__Enum CurrentState;
    
    AbilityType__Enum Ability;
    
    struct DesiredPlayerAbilityState *HasAbility;
    struct MoonTimeline *ActivatePedestalTimeline;
    struct EventTriggerAnimator *OnCollectTrigger;
    struct EventTriggerAnimator *OnSequenceCompleted;
    struct IContext *ActivatePedestalSequenceContext;
    float ActivationDuration;
    struct MoonAnimation *GetAbility;
    struct Texture2D *PressUpToActivatePedestal;
    struct MessageProvider *PressUpToActivatePedestalMessage;
    struct MessageBox *m_message;
    float Radius;
    struct Transform *m_transform;
    struct Action *OnGetAbilityFinished;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
    
    struct IUberState__Array *m_affectingUberStates;
};

struct MoonGetAbilityPedestal {
    struct MoonGetAbilityPedestal__Class *klass;
    MonitorData *monitor;
    struct MoonGetAbilityPedestal__Fields fields;
};

struct __declspec(align(8)) List_1_MoonGetAbilityPedestal___Fields {
    struct MoonGetAbilityPedestal__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MoonGetAbilityPedestal_ {
    struct List_1_MoonGetAbilityPedestal___Class *klass;
    MonitorData *monitor;
    struct List_1_MoonGetAbilityPedestal___Fields fields;
};

struct MoonGetAbilityPedestal__Array {
    struct MoonGetAbilityPedestal__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonGetAbilityPedestal *vector[32];
};

struct IEnumerator_1_MoonGetAbilityPedestal_ {
    struct IEnumerator_1_MoonGetAbilityPedestal___Class *klass;
    MonitorData *monitor;
};

struct MoonGetAbilityPedestal__Array__VTable {
};

struct MoonGetAbilityPedestal__Array__StaticFields {
};

struct MoonGetAbilityPedestal__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonGetAbilityPedestal__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonGetAbilityPedestal__Array__VTable vtable;
};

struct IEnumerator_1_MoonGetAbilityPedestal___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MoonGetAbilityPedestal___StaticFields {
};

struct IEnumerator_1_MoonGetAbilityPedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MoonGetAbilityPedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_MoonGetAbilityPedestal___VTable vtable;
};

struct List_1_MoonGetAbilityPedestal___VTable {
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

struct List_1_MoonGetAbilityPedestal___StaticFields {
    struct MoonGetAbilityPedestal__Array *_emptyArray;
};

struct List_1_MoonGetAbilityPedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MoonGetAbilityPedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_MoonGetAbilityPedestal___VTable vtable;
};

struct MoonGetAbilityPedestal_States__Enum__VTable {
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

struct MoonGetAbilityPedestal_States__Enum__StaticFields {
};

struct MoonGetAbilityPedestal_States__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonGetAbilityPedestal_States__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonGetAbilityPedestal_States__Enum__VTable vtable;
};

struct MoonGetAbilityPedestal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_StressTestName;
    VirtualInvokeData StartStressTest;
    VirtualInvokeData StressTestUpdate;
    VirtualInvokeData EndStressTest;
    VirtualInvokeData get_StressTestStatus;
    VirtualInvokeData set_StressTestStatus;
    VirtualInvokeData get_CanExecuteStressTest;
    VirtualInvokeData get_StopMovingPlayerWhilePerforming;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
};

struct MoonGetAbilityPedestal__StaticFields {
    struct List_1_MoonGetAbilityPedestal_ *All;
};

struct MoonGetAbilityPedestal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonGetAbilityPedestal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonGetAbilityPedestal__VTable vtable;
};

struct GlowChargeEffect_c {
    struct GlowChargeEffect_c__Class *klass;
    MonitorData *monitor;
};

struct GlowChargeEffect_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GlowChargeEffect_c__StaticFields {
    struct GlowChargeEffect_c *__9;
    struct Action *__9__16_0;
};

struct GlowChargeEffect_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GlowChargeEffect_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GlowChargeEffect_c__VTable vtable;
};

struct GoThroughPlatformGrenade__Fields {
    struct Suspendable__Fields _;
    struct Collider *Collider;
    struct Rigidbody *Rigidbody;
    bool _IsSuspended_k__BackingField;
    bool m_wasFalling;
};

struct GoThroughPlatformGrenade {
    struct GoThroughPlatformGrenade__Class *klass;
    MonitorData *monitor;
    struct GoThroughPlatformGrenade__Fields fields;
};

struct GoThroughPlatformGrenade__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
};

struct GoThroughPlatformGrenade__StaticFields {
};

struct GoThroughPlatformGrenade__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GoThroughPlatformGrenade__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GoThroughPlatformGrenade__VTable vtable;
};

struct GoThroughPlatformHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct IGoThroughPlatformTester *m_tester;
    int32_t m_playerLayer;
    int32_t m_platformLayer;
    struct ICharacter *m_character;
    float m_disabledTimeRemaing;
};

struct GoThroughPlatformHandler {
    struct GoThroughPlatformHandler__Class *klass;
    MonitorData *monitor;
    struct GoThroughPlatformHandler__Fields fields;
};

struct IGoThroughPlatformTester {
    struct IGoThroughPlatformTester__Class *klass;
    MonitorData *monitor;
};

struct IGoThroughPlatformTester__VTable {
    VirtualInvokeData get_GoThroughPlatformTestingRayLeft;
    VirtualInvokeData get_GoThroughPlatformTestingRayRight;
    VirtualInvokeData GoThroughPlatformTestingRayLeftRight;
    VirtualInvokeData get_GoThroughPlatformTesterCollider;
    VirtualInvokeData get_GoThroughPlatformTestingRayRadius;
};

struct IGoThroughPlatformTester__StaticFields {
};

struct IGoThroughPlatformTester__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IGoThroughPlatformTester__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IGoThroughPlatformTester__VTable vtable;
};

struct GoThroughPlatformHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GoThroughPlatformHandler__StaticFields {
    bool OptimizedGoThrough;
    bool m_ignore;
};

struct GoThroughPlatformHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GoThroughPlatformHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GoThroughPlatformHandler__VTable vtable;
};

struct GravityDirectionChangerZone__Fields {
    struct MonoBehaviour__Fields _;
};

struct GravityDirectionChangerZone {
    struct GravityDirectionChangerZone__Class *klass;
    MonitorData *monitor;
    struct GravityDirectionChangerZone__Fields fields;
};

struct GravityDirectionChangerZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GravityDirectionChangerZone__StaticFields {
};

struct GravityDirectionChangerZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GravityDirectionChangerZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GravityDirectionChangerZone__VTable vtable;
};

struct ShorterHintZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Rect m_bounds;
};

struct ShorterHintZone {
    struct ShorterHintZone__Class *klass;
    MonitorData *monitor;
    struct ShorterHintZone__Fields fields;
};

struct ShorterHintZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShorterHintZone__StaticFields {
};

struct ShorterHintZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShorterHintZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShorterHintZone__VTable vtable;
};

struct IceWall__Fields {
    struct MonoBehaviour__Fields _;
};

struct IceWall {
    struct IceWall__Class *klass;
    MonitorData *monitor;
    struct IceWall__Fields fields;
};

struct IceWall__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IceWall__StaticFields {
};

struct IceWall__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IceWall__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IceWall__VTable vtable;
};

struct KillPlayer__Fields {
    struct MonoBehaviour__Fields _;
    bool KillEnemiesToo;
};

struct KillPlayer {
    struct KillPlayer__Class *klass;
    MonitorData *monitor;
    struct KillPlayer__Fields fields;
};

struct KillPlayer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KillPlayer__StaticFields {
};

struct KillPlayer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KillPlayer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KillPlayer__VTable vtable;
};

struct Larva__Fields {
    struct MonoBehaviour__Fields _;
};

struct Larva {
    struct Larva__Class *klass;
    MonitorData *monitor;
    struct Larva__Fields fields;
};

struct Larva__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Larva__StaticFields {
};

struct Larva__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Larva__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Larva__VTable vtable;
};

struct LegacyActionLeverSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod *LeverEnterAction;
    struct ActionMethod *LeverExitAction;
    struct ActionMethod *LeverGrabbedAction;
    struct ActionMethod *LeverReleasedAction;
    struct ActionMethod *LeverLeftAction;
    struct MoonTimeline *LeverLeftTimeline;
    struct ActionMethod *LeverRightAction;
    struct MoonTimeline *LeverRightTimeline;
    struct ActionMethod *LeverLeftFailedAction;
    struct ActionMethod *LeverRightFailedAction;
    struct ActionMethod *LeverMiddleAction;
    struct Condition_1 *CanLeverLeft;
    struct Condition_1 *CanLeverRight;
    struct ILever *m_lever;
};

struct LegacyActionLeverSystem {
    struct LegacyActionLeverSystem__Class *klass;
    MonitorData *monitor;
    struct LegacyActionLeverSystem__Fields fields;
};

struct LegacyActionLeverSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetRequirementsForTimeline;
};

struct LegacyActionLeverSystem__StaticFields {
};

struct LegacyActionLeverSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyActionLeverSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyActionLeverSystem__VTable vtable;
};

struct LegacyLever_c {
    struct LegacyLever_c__Class *klass;
    MonitorData *monitor;
};

struct LegacyLever_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LegacyLever_c__StaticFields {
    struct LegacyLever_c *__9;
    struct Action *__9__131_0;
    struct Action *__9__131_1;
    struct Action *__9__131_2;
    struct Action *__9__131_3;
    struct Action *__9__131_4;
    struct Action *__9__131_5;
    struct Action *__9__131_6;
    struct Action *__9__131_7;
    struct Action *__9__131_8;
    struct Func_1_Boolean_ *__9__131_9;
    struct Func_1_Boolean_ *__9__131_10;
};

struct LegacyLever_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyLever_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyLever_c__VTable vtable;
};

struct LocationChanger__Fields {
    struct MonoBehaviour__Fields _;
    struct String *Target;
    struct String *Scene;
    bool UseFade;
    bool UsePostionZ;
    bool MaintainOffsetOfPlayer;
    struct Transform *m_target;
    struct Vector3 Offset;
};

struct LocationChanger {
    struct LocationChanger__Class *klass;
    MonitorData *monitor;
    struct LocationChanger__Fields fields;
};

struct LocationChanger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_SceneName;
    VirtualInvokeData get_TargetName;
    VirtualInvokeData get_TargetTransform;
    VirtualInvokeData TargetOffset;
    VirtualInvokeData get_UseFader;
};

struct LocationChanger__StaticFields {
};

struct LocationChanger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LocationChanger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LocationChanger__VTable vtable;
};

struct MapStoneActivatedCondition__Fields {
    struct Condition_1__Fields _;
    struct MapStone *MapStone;
    bool Activated;
};

struct MapStoneActivatedCondition {
    struct MapStoneActivatedCondition__Class *klass;
    MonitorData *monitor;
    struct MapStoneActivatedCondition__Fields fields;
};

struct MapStoneActivatedCondition__VTable {
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

}
