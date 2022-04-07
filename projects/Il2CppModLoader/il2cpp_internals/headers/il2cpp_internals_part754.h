namespace app {

struct SnapTrapHookPlaceholder__Fields {
  struct PrefabPlaceholder__Fields _;
  struct SnapTrapEntity_SnapTrapParameters SnapTrapEntityParameters;
};
struct SnapTrapHookPlaceholder {
  struct SnapTrapHookPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SnapTrapHookPlaceholder__Fields fields;
};
struct SnapTrapHookPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Initialize;
  VirtualInvokeData Prewarm;
  VirtualInvokeData PoolCurrentInstance;
};
struct SnapTrapHookPlaceholder__StaticFields {
};
struct SnapTrapHookPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnapTrapHookPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnapTrapHookPlaceholder__VTable vtable;
};

struct SnapTrapHookAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct SnapTrapHookVisuals * Visuals;
  struct MoonTimeline * IdleAnimatorTimeline;
  struct MoonTimeline * WarnAnimatorTimeline;
  struct MoonTimeline * ClosingAnimatorTimeline;
  struct MoonTimeline * ClosedLoopAnimatorTimeline;
  struct MoonTimeline * ChewingAnimatorTimeline;
  struct MoonTimeline * OpeningAfterMissedAnimatorTimeline;
  struct MoonTimeline * OpeningAfterCaughtAnimatorTimeline;
};
struct SnapTrapHookAnimator {
  struct SnapTrapHookAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SnapTrapHookAnimator__Fields fields;
};
struct SnapTrapHookVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * IdleTimeline;
  struct MoonTimeline * WarnTimeline;
  struct MoonTimeline * ClosingTimeline;
  struct MoonTimeline * ClosedLoopTimeline;
  struct MoonTimeline * ChewingTimeline;
  struct MoonTimeline * OpeningAfterMissedTimeline;
  struct MoonTimeline * OpeningAfterCaughtTimeline;
  struct EventTriggerAnimator * CheckTrapTrigger;
  struct EventTriggerAnimator * ChewingDoDamageEvent;
  struct EventTriggerAnimator * ActivateOriAfterCaughtEvent;
  struct BoxCollider * CatchBoundsCollider;
  struct BoxCollider * ActivationTrigger;
  struct EventTriggerAnimator * ReleaseLeashTrigger;
  struct EventTriggerAnimator * DisableLeashTrigger;
  struct EventTriggerAnimator * EnableLeashTrigger;
  struct Transform * AfterCatchSeinPosition;
};
struct SnapTrapHookVisuals {
  struct SnapTrapHookVisuals__Class *klass;
  struct MonitorData *monitor;
  struct SnapTrapHookVisuals__Fields fields;
};
struct SnapTrapHookVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SnapTrapHookVisuals__StaticFields {
};
struct SnapTrapHookVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnapTrapHookVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnapTrapHookVisuals__VTable vtable;
};
struct SnapTrapHookAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_MoonSetupVisuals;
};
struct SnapTrapHookAnimator__StaticFields {
};
struct SnapTrapHookAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnapTrapHookAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnapTrapHookAnimator__VTable vtable;
};

struct SnapTrapHookLogic__Fields {
  struct SnapTrapEntity__Fields _;
  struct SnapTrapHookAnimator * Animator;
  struct LeashHookLogic * LeashHookLogic;
  struct EventTriggerAnimator * ReleaseLeashTrigger;
  struct EventTriggerAnimator * DisableLeashTrigger;
  struct EventTriggerAnimator * EnableLeashTrigger;
};
struct SnapTrapHookLogic {
  struct SnapTrapHookLogic__Class *klass;
  struct MonitorData *monitor;
  struct SnapTrapHookLogic__Fields fields;
};
struct SnapTrapHookLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_TrackTranformChangesForRecording;
  VirtualInvokeData get_TrackingExclusions;
  VirtualInvokeData get_ParsingGroup;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnEnable;
  VirtualInvokeData FixedUpdate;
  VirtualInvokeData Suspend;
  VirtualInvokeData Resume;
  VirtualInvokeData Freeze;
  VirtualInvokeData Closed;
  VirtualInvokeData ReactivateOri;
  VirtualInvokeData DoneChewing;
  VirtualInvokeData OpenedAfterCatch;
  VirtualInvokeData OpenedAfterMiss;
  VirtualInvokeData get_MoonSetupAnimator;
};
struct SnapTrapHookLogic__StaticFields {
};
struct SnapTrapHookLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnapTrapHookLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnapTrapHookLogic__VTable vtable;
};

struct SpringAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct SpringVisuals * Visuals;
};
struct SpringAnimator {
  struct SpringAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SpringAnimator__Fields fields;
};
struct SpringVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_ * JumpedOn;
  struct MoonTimeline * OnLandCharacter;
  struct MoonTimeline * OnLandGrenade;
  struct MoonTimeline * OnLandCommon;
  struct MoonTimeline * OnLaunchCharacter;
};
struct SpringVisuals {
  struct SpringVisuals__Class *klass;
  struct MonitorData *monitor;
  struct SpringVisuals__Fields fields;
};
struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_ {
  struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Fields fields;
};
struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___VTable {
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
struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___StaticFields {
};
struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___VTable vtable;
};
struct SpringVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpringVisuals__StaticFields {
};
struct SpringVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringVisuals__VTable vtable;
};
struct SpringAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_MoonSetupVisuals;
};
struct SpringAnimator__StaticFields {
};
struct SpringAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringAnimator__VTable vtable;
};

struct SpringLogic__Fields {
  struct MonoBehaviour__Fields _;
  float Height;
  float StopDecelerationMultiplier;
  struct SpringAnimator * Animator;
};
struct SpringLogic {
  struct SpringLogic__Class *klass;
  struct MonitorData *monitor;
  struct SpringLogic__Fields fields;
};
struct SpringLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_MoonSetupAnimator;
};
struct SpringLogic__StaticFields {
};
struct SpringLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringLogic__VTable vtable;
};

enum StomperVisuals_SoundEvent__Enum : int32_t {
  StomperVisuals_SoundEvent__Enum_Stomp = 0,
  StomperVisuals_SoundEvent__Enum_StompStart = 1,
  StomperVisuals_SoundEvent__Enum_StompReset = 2,
  StomperVisuals_SoundEvent__Enum_StompReelIn = 3,
};
struct StomperVisuals_SoundEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StomperVisuals_SoundEvent__Enum value;
};

struct StateHolder_1_AttackableSwitchSetupData___Fields {
  struct StateHolder__Fields _;
  struct List_1_AttackableSwitchSetupData_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_AttackableSwitchSetupData_ {
  struct StateHolder_1_AttackableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_AttackableSwitchSetupData___Fields fields;
};
struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Fields {
  struct StateHolder_1_AttackableSwitchSetupData___Fields _;
};
struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData_ {
  struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
  struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Fields fields;
};
struct AttackableSwitchSetupHolder__Fields {
  struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Fields _;
};
struct AttackableSwitchSetupHolder {
  struct AttackableSwitchSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct AttackableSwitchSetupHolder__Fields fields;
};
struct __declspec(align(8)) List_1_AttackableSwitchSetupData___Fields {
  struct AttackableSwitchSetupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AttackableSwitchSetupData_ {
  struct List_1_AttackableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AttackableSwitchSetupData___Fields fields;
};
struct __declspec(align(8)) AttackableSwitchSetupData__Fields {
  struct MoonTimeline * m_transition;
  bool m_desiredValue;
};
struct AttackableSwitchSetupData {
  struct AttackableSwitchSetupData__Class *klass;
  struct MonitorData *monitor;
  struct AttackableSwitchSetupData__Fields fields;
};
struct AttackableSwitchSetupData__Array {
  struct AttackableSwitchSetupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AttackableSwitchSetupData * vector[32];
};
struct IEnumerator_1_AttackableSwitchSetupData_ {
  struct IEnumerator_1_AttackableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
};
struct AttackableSwitchSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Transition;
  VirtualInvokeData get_DesiredValue;
};
struct AttackableSwitchSetupData__StaticFields {
};
struct AttackableSwitchSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttackableSwitchSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttackableSwitchSetupData__VTable vtable;
};
struct IEnumerator_1_AttackableSwitchSetupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AttackableSwitchSetupData___StaticFields {
};
struct IEnumerator_1_AttackableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AttackableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AttackableSwitchSetupData___VTable vtable;
};
struct List_1_AttackableSwitchSetupData___VTable {
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
struct List_1_AttackableSwitchSetupData___StaticFields {
  struct AttackableSwitchSetupData__Array * _emptyArray;
};
struct List_1_AttackableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AttackableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AttackableSwitchSetupData___VTable vtable;
};
struct StateHolder_1_AttackableSwitchSetupData___VTable {
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
struct StateHolder_1_AttackableSwitchSetupData___StaticFields {
};
struct StateHolder_1_AttackableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_AttackableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_AttackableSwitchSetupData___VTable vtable;
};
struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___VTable {
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
struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___StaticFields {
};
struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___VTable vtable;
};
struct AttackableSwitchSetupHolder__VTable {
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
struct AttackableSwitchSetupHolder__StaticFields {
};
struct AttackableSwitchSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttackableSwitchSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttackableSwitchSetupHolder__VTable vtable;
};

struct AttackableSwitch__Fields {
  struct GuidOwner__Fields _;
  struct AttackableSwitchSetupHolder * SetupStates;
  struct MoonReference_1_IStateTransitionHolder_ * LinkedSetup;
  struct StateChangeDefinition * OnActivate;
  struct StateChangeDefinition * OnDeactivate;
  float ActiveTimer;
  bool Toggle;
  float ToggleDelay;
  float ActiveDelay;
  bool ButtonMode;
  bool DestroyProjectiles;
  bool CreateCheckpoint;
  struct CheckpointFunctionality Checkpoint;
  bool TriggerOnlyIfUberNotFulfilled;
  bool BowTargetable;
  float m_currentTime;
  bool m_activated;
  bool m_wasPerforming;
  struct MoonTimeline * m_activateTransition;
  struct MoonTimeline * m_deactivateTransition;
  struct List_1_AttackableSwitch_AttackTypes_ * Attacks;
  bool m_useNewDataStructure;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Action_1_Damage_ * m_damageReceived;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct AttackableSwitch {
  struct AttackableSwitch__Class *klass;
  struct MonitorData *monitor;
  struct AttackableSwitch__Fields fields;
};
struct AttackableSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
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
  VirtualInvokeData get_IsOn;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData get_DamageReceived;
  VirtualInvokeData set_DamageReceived;
};
struct AttackableSwitch__StaticFields {
};
struct AttackableSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttackableSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttackableSwitch__VTable vtable;
};

struct AttackableSwitch_c {
  struct AttackableSwitch_c__Class *klass;
  struct MonitorData *monitor;
};
struct AttackableSwitch_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttackableSwitch_c__StaticFields {
  struct AttackableSwitch_c * __9;
  struct Action_1_Damage_ * __9__106_0;
};
struct AttackableSwitch_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttackableSwitch_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttackableSwitch_c__VTable vtable;
};

struct StateHolder_1_SwitchSeriesPuzzleSetupData___Fields {
  struct StateHolder__Fields _;
  struct List_1_SwitchSeriesPuzzleSetupData_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_SwitchSeriesPuzzleSetupData_ {
  struct StateHolder_1_SwitchSeriesPuzzleSetupData___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_SwitchSeriesPuzzleSetupData___Fields fields;
};
struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Fields {
  struct StateHolder_1_SwitchSeriesPuzzleSetupData___Fields _;
};
struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData_ {
  struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Class *klass;
  struct MonitorData *monitor;
  struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Fields fields;
};
struct SwitchSeriesPuzzleSwitchSetupHolder__Fields {
  struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Fields _;
};
struct SwitchSeriesPuzzleSwitchSetupHolder {
  struct SwitchSeriesPuzzleSwitchSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct SwitchSeriesPuzzleSwitchSetupHolder__Fields fields;
};
struct __declspec(align(8)) List_1_SwitchSeriesPuzzleSetupData___Fields {
  struct SwitchSeriesPuzzleSetupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SwitchSeriesPuzzleSetupData_ {
  struct List_1_SwitchSeriesPuzzleSetupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SwitchSeriesPuzzleSetupData___Fields fields;
};
struct __declspec(align(8)) SwitchSeriesPuzzleSetupData__Fields {
  struct MoonTimeline * m_transition;
  bool m_desiredValue;
};
struct SwitchSeriesPuzzleSetupData {
  struct SwitchSeriesPuzzleSetupData__Class *klass;
  struct MonitorData *monitor;
  struct SwitchSeriesPuzzleSetupData__Fields fields;
};
struct SwitchSeriesPuzzleSetupData__Array {
  struct SwitchSeriesPuzzleSetupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SwitchSeriesPuzzleSetupData * vector[32];
};
struct IEnumerator_1_SwitchSeriesPuzzleSetupData_ {
  struct IEnumerator_1_SwitchSeriesPuzzleSetupData___Class *klass;
  struct MonitorData *monitor;
};
struct SwitchSeriesPuzzleSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Transition;
  VirtualInvokeData get_DesiredValue;
};
struct SwitchSeriesPuzzleSetupData__StaticFields {
};
struct SwitchSeriesPuzzleSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchSeriesPuzzleSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchSeriesPuzzleSetupData__VTable vtable;
};
struct IEnumerator_1_SwitchSeriesPuzzleSetupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SwitchSeriesPuzzleSetupData___StaticFields {
};
struct IEnumerator_1_SwitchSeriesPuzzleSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SwitchSeriesPuzzleSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SwitchSeriesPuzzleSetupData___VTable vtable;
};
struct List_1_SwitchSeriesPuzzleSetupData___VTable {
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
struct List_1_SwitchSeriesPuzzleSetupData___StaticFields {
  struct SwitchSeriesPuzzleSetupData__Array * _emptyArray;
};
struct List_1_SwitchSeriesPuzzleSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SwitchSeriesPuzzleSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SwitchSeriesPuzzleSetupData___VTable vtable;
};
struct StateHolder_1_SwitchSeriesPuzzleSetupData___VTable {
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
struct StateHolder_1_SwitchSeriesPuzzleSetupData___StaticFields {
};
struct StateHolder_1_SwitchSeriesPuzzleSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_SwitchSeriesPuzzleSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_SwitchSeriesPuzzleSetupData___VTable vtable;
};
struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___VTable {
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
struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___StaticFields {
};
struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___VTable vtable;
};
struct SwitchSeriesPuzzleSwitchSetupHolder__VTable {
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
struct SwitchSeriesPuzzleSwitchSetupHolder__StaticFields {
};
struct SwitchSeriesPuzzleSwitchSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchSeriesPuzzleSwitchSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchSeriesPuzzleSwitchSetupHolder__VTable vtable;
};

struct SwitchSeriesPuzzle__Fields {
  struct MonoBehaviour__Fields _;
  struct SwitchSeriesPuzzleSwitchSetupHolder * SetupStates;
  struct MoonReference_1_IStateTransitionHolder_ * LinkedSetup;
  struct List_1_Moon_MoonReference_1__14 * TriggerOrder;
  struct IUberState__Array * States;
  struct Single__Array * m_prevValues;
  int32_t m_step;
};
struct SwitchSeriesPuzzle {
  struct SwitchSeriesPuzzle__Class *klass;
  struct MonitorData *monitor;
  struct SwitchSeriesPuzzle__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__14__Fields {
  struct MoonReference_1_IGenericUberState___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__14 {
  struct List_1_Moon_MoonReference_1__14__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__14__Fields fields;
};
struct MoonReference_1_IGenericUberState___Array {
  struct MoonReference_1_IGenericUberState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_IGenericUberState_ * vector[32];
};
struct IEnumerator_1_Moon_MoonReference_1__14 {
  struct IEnumerator_1_Moon_MoonReference_1__14__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonReference_1__14__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonReference_1__14__StaticFields {
};
struct IEnumerator_1_Moon_MoonReference_1__14__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonReference_1__14__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonReference_1__14__VTable vtable;
};
struct List_1_Moon_MoonReference_1__14__VTable {
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
struct List_1_Moon_MoonReference_1__14__StaticFields {
  struct MoonReference_1_IGenericUberState___Array * _emptyArray;
};
struct List_1_Moon_MoonReference_1__14__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonReference_1__14__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonReference_1__14__VTable vtable;
};
struct SwitchSeriesPuzzle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct SwitchSeriesPuzzle__StaticFields {
};
struct SwitchSeriesPuzzle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchSeriesPuzzle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchSeriesPuzzle__VTable vtable;
};

struct TeleportPlayerOnTimelineEvent__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_UnityEngine_Transform_ * Destination;
  bool PlaceOnGround;
  struct EventTriggerAnimator * Event;
  bool CreateCheckpoint;
};
struct TeleportPlayerOnTimelineEvent {
  struct TeleportPlayerOnTimelineEvent__Class *klass;
  struct MonitorData *monitor;
  struct TeleportPlayerOnTimelineEvent__Fields fields;
};
struct TeleportPlayerOnTimelineEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TeleportPlayerOnTimelineEvent__StaticFields {
};
struct TeleportPlayerOnTimelineEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TeleportPlayerOnTimelineEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TeleportPlayerOnTimelineEvent__VTable vtable;
};

struct TransparentWallAnimator_c {
  struct TransparentWallAnimator_c__Class *klass;
  struct MonitorData *monitor;
};
struct TransparentWallAnimator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TransparentWallAnimator_c__StaticFields {
  struct TransparentWallAnimator_c * __9;
  struct Action * __9__15_0;
};
struct TransparentWallAnimator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransparentWallAnimator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransparentWallAnimator_c__VTable vtable;
};

enum BugReporter_State__Enum : int32_t {
  BugReporter_State__Enum_Idle = 0,
  BugReporter_State__Enum_Connecting = 1,
  BugReporter_State__Enum_Sending = 2,
  BugReporter_State__Enum_WaitingForAck = 3,
  BugReporter_State__Enum_Closing = 4,
};
struct BugReporter_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BugReporter_State__Enum value;
};}