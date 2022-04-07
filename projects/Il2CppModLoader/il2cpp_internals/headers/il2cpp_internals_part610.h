namespace app {

struct __declspec(align(8)) TimedActionSequence_RunSequence_d_23__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct TimedActionSequence * __4__this;
  struct IContext * context;
  int32_t _i_5__2;
  struct TimedActionExecuter * _timedActionExecuter_5__3;
};
struct TimedActionSequence_RunSequence_d_23 {
  struct TimedActionSequence_RunSequence_d_23__Class *klass;
  struct MonitorData *monitor;
  struct TimedActionSequence_RunSequence_d_23__Fields fields;
};
struct TimedActionSequence_RunSequence_d_23__VTable {
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
struct TimedActionSequence_RunSequence_d_23__StaticFields {
};
struct TimedActionSequence_RunSequence_d_23__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimedActionSequence_RunSequence_d_23__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimedActionSequence_RunSequence_d_23__VTable vtable;
};

struct TriggeredActionSequence__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_ActionMethod_ * ActionsWithDuration;
  int32_t m_count;
};
struct TriggeredActionSequence {
  struct TriggeredActionSequence__Class *klass;
  struct MonitorData *monitor;
  struct TriggeredActionSequence__Fields fields;
};
struct TriggeredActionSequence__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriggeredActionSequence__StaticFields {
};
struct TriggeredActionSequence__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggeredActionSequence__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggeredActionSequence__VTable vtable;
};

struct UnlockFinishLoadingAction__Fields {
  struct ActionMethod__Fields _;
};
struct UnlockFinishLoadingAction {
  struct UnlockFinishLoadingAction__Class *klass;
  struct MonitorData *monitor;
  struct UnlockFinishLoadingAction__Fields fields;
};
struct UnlockFinishLoadingAction__VTable {
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
struct UnlockFinishLoadingAction__StaticFields {
};
struct UnlockFinishLoadingAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnlockFinishLoadingAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnlockFinishLoadingAction__VTable vtable;
};

struct WaitForActionToFinishAction__Fields {
  struct PerformingAction__Fields _;
  struct PerformingAction * TargetAction;
};
struct WaitForActionToFinishAction {
  struct WaitForActionToFinishAction__Class *klass;
  struct MonitorData *monitor;
  struct WaitForActionToFinishAction__Fields fields;
};
struct WaitForActionToFinishAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct WaitForActionToFinishAction__StaticFields {
};
struct WaitForActionToFinishAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForActionToFinishAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForActionToFinishAction__VTable vtable;
};

struct WaitForAnimationEvent__Fields {
  struct PerformingAction__Fields _;
  struct StateMachineBehaviourProxy * EventSource;
  struct String * EventId;
  struct String * LoopAnimation;
  bool m_eventReceived;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct WaitForAnimationEvent {
  struct WaitForAnimationEvent__Class *klass;
  struct MonitorData *monitor;
  struct WaitForAnimationEvent__Fields fields;
};
struct WaitForAnimationEvent__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct WaitForAnimationEvent__StaticFields {
};
struct WaitForAnimationEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForAnimationEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForAnimationEvent__VTable vtable;
};

struct WaitForConditionAction__Fields {
  struct ActionMethod__Fields _;
  struct ActionMethod * Action;
  struct Condition_1 * Condition;
  float MaxWaitTime;
};
struct WaitForConditionAction {
  struct WaitForConditionAction__Class *klass;
  struct MonitorData *monitor;
  struct WaitForConditionAction__Fields fields;
};
struct WaitForConditionAction__VTable {
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
struct WaitForConditionAction__StaticFields {
};
struct WaitForConditionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForConditionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForConditionAction__VTable vtable;
};

struct __declspec(align(8)) WaitForConditionAction_WaitAndPerform_d_4__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct WaitForConditionAction * __4__this;
  struct IContext * context;
  float _time_5__2;
};
struct WaitForConditionAction_WaitAndPerform_d_4 {
  struct WaitForConditionAction_WaitAndPerform_d_4__Class *klass;
  struct MonitorData *monitor;
  struct WaitForConditionAction_WaitAndPerform_d_4__Fields fields;
};
struct WaitForConditionAction_WaitAndPerform_d_4__VTable {
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
struct WaitForConditionAction_WaitAndPerform_d_4__StaticFields {
};
struct WaitForConditionAction_WaitAndPerform_d_4__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForConditionAction_WaitAndPerform_d_4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForConditionAction_WaitAndPerform_d_4__VTable vtable;
};

struct ActionPerformingCondition__Fields {
  struct Condition_1__Fields _;
  struct PerformingAction * Action;
  bool IsPerforming;
};
struct ActionPerformingCondition {
  struct ActionPerformingCondition__Class *klass;
  struct MonitorData *monitor;
  struct ActionPerformingCondition__Fields fields;
};
struct ActionPerformingCondition__VTable {
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
struct ActionPerformingCondition__StaticFields {
};
struct ActionPerformingCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionPerformingCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionPerformingCondition__VTable vtable;
};

enum ActiveCharacterCondition_Character__Enum : int32_t {
  ActiveCharacterCondition_Character__Enum_Ori = 0,
  ActiveCharacterCondition_Character__Enum_Ku = 1,
};
struct ActiveCharacterCondition_Character__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ActiveCharacterCondition_Character__Enum value;
};
struct ActiveCharacterCondition__Fields {
  struct Condition_1__Fields _;
  enum ActiveCharacterCondition_Character__Enum ActiveCharacter;
};
struct ActiveCharacterCondition {
  struct ActiveCharacterCondition__Class *klass;
  struct MonitorData *monitor;
  struct ActiveCharacterCondition__Fields fields;
};
struct ActiveCharacterCondition__VTable {
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
struct ActiveCharacterCondition__StaticFields {
};
struct ActiveCharacterCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActiveCharacterCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActiveCharacterCondition__VTable vtable;
};

enum AggregateCondition_Mode__Enum : int32_t {
  AggregateCondition_Mode__Enum_AllTrue = 0,
  AggregateCondition_Mode__Enum_AnyTrue = 1,
};
struct AggregateCondition_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AggregateCondition_Mode__Enum value;
};
struct AggregateCondition__Fields {
  struct Condition_1__Fields _;
  enum AggregateCondition_Mode__Enum EvaluationMode;
  struct Condition_1__Array * Conditions;
};
struct AggregateCondition {
  struct AggregateCondition__Class *klass;
  struct MonitorData *monitor;
  struct AggregateCondition__Fields fields;
};
struct AggregateCondition__VTable {
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
struct AggregateCondition__StaticFields {
};
struct AggregateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AggregateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AggregateCondition__VTable vtable;
};

enum AnimatorCondition_AnimatorMode__Enum : int32_t {
  AnimatorCondition_AnimatorMode__Enum_Stopped = 0,
  AnimatorCondition_AnimatorMode__Enum_Playing = 1,
  AnimatorCondition_AnimatorMode__Enum_AtEnd = 2,
  AnimatorCondition_AnimatorMode__Enum_AtStart = 3,
  AnimatorCondition_AnimatorMode__Enum_PlayingForward = 4,
  AnimatorCondition_AnimatorMode__Enum_PlayingBackward = 5,
};
struct AnimatorCondition_AnimatorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimatorCondition_AnimatorMode__Enum value;
};
struct AnimatorCondition__Fields {
  struct Condition_1__Fields _;
  enum AnimatorCondition_AnimatorMode__Enum Mode;
  struct LegacyAnimator * Animator;
};
struct AnimatorCondition {
  struct AnimatorCondition__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorCondition__Fields fields;
};
struct AnimatorCondition__VTable {
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
struct AnimatorCondition__StaticFields {
};
struct AnimatorCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorCondition__VTable vtable;
};

struct AnySaveSlotsFilledCondition__Fields {
  struct Condition_1__Fields _;
};
struct AnySaveSlotsFilledCondition {
  struct AnySaveSlotsFilledCondition__Class *klass;
  struct MonitorData *monitor;
  struct AnySaveSlotsFilledCondition__Fields fields;
};
struct AnySaveSlotsFilledCondition__VTable {
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
struct AnySaveSlotsFilledCondition__StaticFields {
};
struct AnySaveSlotsFilledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnySaveSlotsFilledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnySaveSlotsFilledCondition__VTable vtable;
};

struct AttackedCondition__Fields {
  struct Condition_1__Fields _;
  struct List_1_AttackableSwitch_AttackTypes_ * Attacks;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  bool m_damageReceived;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct AttackedCondition {
  struct AttackedCondition__Class *klass;
  struct MonitorData *monitor;
  struct AttackedCondition__Fields fields;
};
struct __declspec(align(8)) List_1_AttackableSwitch_AttackTypes___Fields {
  struct AttackableSwitch_AttackTypes__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AttackableSwitch_AttackTypes_ {
  struct List_1_AttackableSwitch_AttackTypes___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AttackableSwitch_AttackTypes___Fields fields;
};
enum AttackableSwitch_AttackTypes__Enum : int32_t {
  AttackableSwitch_AttackTypes__Enum_Bash = 0,
  AttackableSwitch_AttackTypes__Enum_SpiritSlash = 1,
  AttackableSwitch_AttackTypes__Enum_HeavySpiritSlash = 2,
  AttackableSwitch_AttackTypes__Enum_HomingMissile = 3,
  AttackableSwitch_AttackTypes__Enum_JumpShot = 4,
  AttackableSwitch_AttackTypes__Enum_LightSpear = 5,
  AttackableSwitch_AttackTypes__Enum_Fireburst = 6,
  AttackableSwitch_AttackTypes__Enum_Firewhirl = 7,
  AttackableSwitch_AttackTypes__Enum_LifeAbsorb = 8,
  AttackableSwitch_AttackTypes__Enum_Powerslide = 9,
  AttackableSwitch_AttackTypes__Enum_SpiritSpear = 10,
  AttackableSwitch_AttackTypes__Enum_SpiritCrescent = 11,
  AttackableSwitch_AttackTypes__Enum_SpiritShards = 12,
  AttackableSwitch_AttackTypes__Enum_Freeze = 13,
  AttackableSwitch_AttackTypes__Enum_LockOn = 14,
  AttackableSwitch_AttackTypes__Enum_SpiritSentry = 15,
  AttackableSwitch_AttackTypes__Enum_Mine = 16,
  AttackableSwitch_AttackTypes__Enum_StickyMineOrGrenade = 17,
  AttackableSwitch_AttackTypes__Enum_ChargeShot = 18,
  AttackableSwitch_AttackTypes__Enum_Bow = 19,
  AttackableSwitch_AttackTypes__Enum_Hammer = 20,
  AttackableSwitch_AttackTypes__Enum_Sword = 21,
  AttackableSwitch_AttackTypes__Enum_Wind = 22,
  AttackableSwitch_AttackTypes__Enum_TorchRed = 23,
  AttackableSwitch_AttackTypes__Enum_TorchBlue = 24,
  AttackableSwitch_AttackTypes__Enum_Explosion = 25,
  AttackableSwitch_AttackTypes__Enum_BashThrough = 26,
};
struct AttackableSwitch_AttackTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AttackableSwitch_AttackTypes__Enum value;
};
struct AttackableSwitch_AttackTypes__Enum__Array {
  struct AttackableSwitch_AttackTypes__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum AttackableSwitch_AttackTypes__Enum vector[32];
};
struct IEnumerator_1_AttackableSwitch_AttackTypes_ {
  struct IEnumerator_1_AttackableSwitch_AttackTypes___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AttackableSwitch_AttackTypes___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AttackableSwitch_AttackTypes___StaticFields {
};
struct IEnumerator_1_AttackableSwitch_AttackTypes___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AttackableSwitch_AttackTypes___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AttackableSwitch_AttackTypes___VTable vtable;
};
struct List_1_AttackableSwitch_AttackTypes___VTable {
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
struct List_1_AttackableSwitch_AttackTypes___StaticFields {
  struct AttackableSwitch_AttackTypes__Enum__Array * _emptyArray;
};
struct List_1_AttackableSwitch_AttackTypes___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AttackableSwitch_AttackTypes___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AttackableSwitch_AttackTypes___VTable vtable;
};
struct AttackedCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
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
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_SpiritSlashPriority;
  VirtualInvokeData OnSpiritSlashHighlight;
  VirtualInvokeData OnSpiritSlashDehighlight;
  VirtualInvokeData GetSpiritSlashDamageAmount;
  VirtualInvokeData get_BashPriority;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnBashHighlight;
  VirtualInvokeData OnBashDehighlight;
  VirtualInvokeData get_BowPriority;
  VirtualInvokeData get_BowEnableAutoTarget;
  VirtualInvokeData ShouldArrowExplode;
  VirtualInvokeData get_BowAutoTargetPosition;
  VirtualInvokeData ShouldArrowBeReflected;
  VirtualInvokeData get_HammerPriority;
  VirtualInvokeData get_HammerEnableAutoTarget;
  VirtualInvokeData CanDetonateProjectiles;
};
struct AttackedCondition__StaticFields {
};
struct AttackedCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttackedCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttackedCondition__VTable vtable;
};

struct BoolCondition__Fields {
  struct Condition_1__Fields _;
  struct MoonBool * ValueA;
  struct MoonBool * ValueB;
};
struct BoolCondition {
  struct BoolCondition__Class *klass;
  struct MonitorData *monitor;
  struct BoolCondition__Fields fields;
};
struct BoolCondition__VTable {
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
struct BoolCondition__StaticFields {
};
struct BoolCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BoolCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BoolCondition__VTable vtable;
};

struct BuildHasPrologueCondition__Fields {
  struct Condition_1__Fields _;
};
struct BuildHasPrologueCondition {
  struct BuildHasPrologueCondition__Class *klass;
  struct MonitorData *monitor;
  struct BuildHasPrologueCondition__Fields fields;
};
struct BuildHasPrologueCondition__VTable {
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
struct BuildHasPrologueCondition__StaticFields {
};
struct BuildHasPrologueCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuildHasPrologueCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuildHasPrologueCondition__VTable vtable;
};

struct BuildPlatformCondition__Fields {
  struct Condition_1__Fields _;
  bool BuildOnly;
  bool Windows;
  bool Xbox360;
  bool XboxOne;
  bool Switch;
  bool WindowsTen;
  bool XBoxOne_Potato;
  bool Demo;
  bool FullGame;
};
struct BuildPlatformCondition {
  struct BuildPlatformCondition__Class *klass;
  struct MonitorData *monitor;
  struct BuildPlatformCondition__Fields fields;
};
struct BuildPlatformCondition__VTable {
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
struct BuildPlatformCondition__StaticFields {
};
struct BuildPlatformCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuildPlatformCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuildPlatformCondition__VTable vtable;
};

struct CanViewProfilesCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanViewProfilesCondition {
  struct CanViewProfilesCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanViewProfilesCondition__Fields fields;
};
struct CanViewProfilesCondition__VTable {
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
struct CanViewProfilesCondition__StaticFields {
};
struct CanViewProfilesCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanViewProfilesCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanViewProfilesCondition__VTable vtable;
};

struct CharacterStatePerformingCondition__Fields {
  struct Condition_1__Fields _;
  struct CharacterState * State;
  bool Performing;
};
struct CharacterStatePerformingCondition {
  struct CharacterStatePerformingCondition__Class *klass;
  struct MonitorData *monitor;
  struct CharacterStatePerformingCondition__Fields fields;
};
struct CharacterStatePerformingCondition__VTable {
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
struct CharacterStatePerformingCondition__StaticFields {
};
struct CharacterStatePerformingCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterStatePerformingCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterStatePerformingCondition__VTable vtable;
};

struct CompareSeinLevelCondition__Fields {
  struct Condition_1__Fields _;
  int32_t Value;
};
struct CompareSeinLevelCondition {
  struct CompareSeinLevelCondition__Class *klass;
  struct MonitorData *monitor;
  struct CompareSeinLevelCondition__Fields fields;
};
struct CompareSeinLevelCondition__VTable {
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
struct CompareSeinLevelCondition__StaticFields {
};
struct CompareSeinLevelCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompareSeinLevelCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompareSeinLevelCondition__VTable vtable;
};

struct CompoundCondition__Fields {
  struct Condition_1__Fields _;
  struct List_1_CompoundCondition_ConditionInformation_ * Tests;
};
struct CompoundCondition {
  struct CompoundCondition__Class *klass;
  struct MonitorData *monitor;
  struct CompoundCondition__Fields fields;
};
struct __declspec(align(8)) List_1_CompoundCondition_ConditionInformation___Fields {
  struct CompoundCondition_ConditionInformation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CompoundCondition_ConditionInformation_ {
  struct List_1_CompoundCondition_ConditionInformation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CompoundCondition_ConditionInformation___Fields fields;
};
struct __declspec(align(8)) CompoundCondition_ConditionInformation__Fields {
  struct List_1_Condition_ * Conditions;
};
struct CompoundCondition_ConditionInformation {
  struct CompoundCondition_ConditionInformation__Class *klass;
  struct MonitorData *monitor;
  struct CompoundCondition_ConditionInformation__Fields fields;
};
struct CompoundCondition_ConditionInformation__Array {
  struct CompoundCondition_ConditionInformation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CompoundCondition_ConditionInformation * vector[32];
};
struct IEnumerator_1_CompoundCondition_ConditionInformation_ {
  struct IEnumerator_1_CompoundCondition_ConditionInformation___Class *klass;
  struct MonitorData *monitor;
};
struct CompoundCondition_ConditionInformation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CompoundCondition_ConditionInformation__StaticFields {
};
struct CompoundCondition_ConditionInformation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompoundCondition_ConditionInformation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompoundCondition_ConditionInformation__VTable vtable;
};
struct IEnumerator_1_CompoundCondition_ConditionInformation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CompoundCondition_ConditionInformation___StaticFields {
};
struct IEnumerator_1_CompoundCondition_ConditionInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CompoundCondition_ConditionInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CompoundCondition_ConditionInformation___VTable vtable;
};
struct List_1_CompoundCondition_ConditionInformation___VTable {
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
struct List_1_CompoundCondition_ConditionInformation___StaticFields {
  struct CompoundCondition_ConditionInformation__Array * _emptyArray;
};
struct List_1_CompoundCondition_ConditionInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CompoundCondition_ConditionInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CompoundCondition_ConditionInformation___VTable vtable;
};
struct CompoundCondition__VTable {
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
struct CompoundCondition__StaticFields {
};
struct CompoundCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompoundCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompoundCondition__VTable vtable;
};

struct CurrentCharacterFacingCondition__Fields {
  struct Condition_1__Fields _;
  bool FaceLeft;
};
struct CurrentCharacterFacingCondition {
  struct CurrentCharacterFacingCondition__Class *klass;
  struct MonitorData *monitor;
  struct CurrentCharacterFacingCondition__Fields fields;
};
struct CurrentCharacterFacingCondition__VTable {
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
struct CurrentCharacterFacingCondition__StaticFields {
};
struct CurrentCharacterFacingCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CurrentCharacterFacingCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CurrentCharacterFacingCondition__VTable vtable;
};

struct CutsceneItem__Fields {
  struct MonoBehaviour__Fields _;
  enum UnlockedCutscenes__Enum Cutscene;
  struct GameObject * LockTexture;
  struct MessageProvider * TitleMessageProvider;
  struct MessageBox * TitleLabel;
  struct ActionMethod * Pressed;
};
struct CutsceneItem {
  struct CutsceneItem__Class *klass;
  struct MonitorData *monitor;
  struct CutsceneItem__Fields fields;
};}