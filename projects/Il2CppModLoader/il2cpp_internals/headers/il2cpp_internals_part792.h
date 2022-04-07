namespace app {
struct DestroyMistTorchAction__StaticFields {
};
struct DestroyMistTorchAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DestroyMistTorchAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DestroyMistTorchAction__VTable vtable;
};

struct DestroyNightBerryAction__Fields {
  struct ActionMethod__Fields _;
};
struct DestroyNightBerryAction {
  struct DestroyNightBerryAction__Class *klass;
  struct MonitorData *monitor;
  struct DestroyNightBerryAction__Fields fields;
};
struct DestroyNightBerryAction__VTable {
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
struct DestroyNightBerryAction__StaticFields {
};
struct DestroyNightBerryAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DestroyNightBerryAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DestroyNightBerryAction__VTable vtable;
};

struct HoldingLightTorchCondition__Fields {
  struct Condition_1__Fields _;
  bool IsHolding;
};
struct HoldingLightTorchCondition {
  struct HoldingLightTorchCondition__Class *klass;
  struct MonitorData *monitor;
  struct HoldingLightTorchCondition__Fields fields;
};
struct HoldingLightTorchCondition__VTable {
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
struct HoldingLightTorchCondition__StaticFields {
};
struct HoldingLightTorchCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HoldingLightTorchCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HoldingLightTorchCondition__VTable vtable;
};

struct HoldingTorchCondition__Fields {
  struct Condition_1__Fields _;
  bool IsHolding;
};
struct HoldingTorchCondition {
  struct HoldingTorchCondition__Class *klass;
  struct MonitorData *monitor;
  struct HoldingTorchCondition__Fields fields;
};
struct HoldingTorchCondition__VTable {
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
struct HoldingTorchCondition__StaticFields {
};
struct HoldingTorchCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HoldingTorchCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HoldingTorchCondition__VTable vtable;
};

enum MistAction_ActionType__Enum : int32_t {
  MistAction_ActionType__Enum_ShowMist = 0,
  MistAction_ActionType__Enum_HideMist = 1,
};
struct MistAction_ActionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MistAction_ActionType__Enum value;
};
struct MistAction__Fields {
  struct ActionMethod__Fields _;
  enum MistAction_ActionType__Enum Action;
};
struct MistAction {
  struct MistAction__Class *klass;
  struct MonitorData *monitor;
  struct MistAction__Fields fields;
};
struct MistAction__VTable {
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
struct MistAction__StaticFields {
};
struct MistAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistAction__VTable vtable;
};

struct MistController__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTransparancyAnimator * MistAnimator;
};
struct MistController {
  struct MistController__Class *klass;
  struct MonitorData *monitor;
  struct MistController__Fields fields;
};
struct MistController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MistController__StaticFields {
};
struct MistController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistController__VTable vtable;
};

enum MistyWoodsKuroController_State__Enum : int32_t {
  MistyWoodsKuroController_State__Enum_Hidden = 0,
  MistyWoodsKuroController_State__Enum_Visible = 1,
  MistyWoodsKuroController_State__Enum_Hunting = 2,
  MistyWoodsKuroController_State__Enum_KillPlayer = 3,
  MistyWoodsKuroController_State__Enum_Returning = 4,
  MistyWoodsKuroController_State__Enum_SequenceFinished = 5,
};
struct MistyWoodsKuroController_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MistyWoodsKuroController_State__Enum value;
};
struct MistyWoodsKuroController__Fields {
  struct SaveSerialize__Fields _;
  struct MistyWoodsKuroGameplayController * GameplayController;
  struct SpriteAnimatorWithTransitions * KuroAnimator;
  struct MistyWoodsKuroController_Animations * KuroAnimations;
  struct SoundSource * IdleSound;
  struct SoundSource * ReturningSound;
  enum MistyWoodsKuroController_State__Enum CurrentState;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct MistyWoodsKuroController {
  struct MistyWoodsKuroController__Class *klass;
  struct MonitorData *monitor;
  struct MistyWoodsKuroController__Fields fields;
};
enum MistyWoodsKuroGameplayController_State__Enum : int32_t {
  MistyWoodsKuroGameplayController_State__Enum_Hidden = 0,
  MistyWoodsKuroGameplayController_State__Enum_Visible = 1,
  MistyWoodsKuroGameplayController_State__Enum_HiddenInDanger = 2,
  MistyWoodsKuroGameplayController_State__Enum_Killed = 3,
};
struct MistyWoodsKuroGameplayController_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MistyWoodsKuroGameplayController_State__Enum value;
};
struct MistyWoodsKuroGameplayController__Fields {
  struct SaveSerialize__Fields _;
  struct MistyWoodsKuroController * MistyWoodsKuroController;
  struct ActionMethod * OnHideAction;
  struct ActionMethod * OnVisibleAction;
  struct BaseAnimator * VisibilityAnimator;
  float HiddenSoundFadeOutDuration;
  struct SoundProvider * HiddenSoundProvider;
  float VisibleSoundFadeOutDuration;
  struct SoundProvider * VisibleSoundProvider;
  float TimeToHide;
  struct SoundPlayer * m_previousSound;
  float m_currentTime;
  struct SoundProvider * LandKillSound;
  struct SoundProvider * FlyKillSound;
  struct GameObject * KuroFlyAttack;
  struct CatAndMouseKuroLandZone__Array * m_zones;
  struct Transform__Array * InstaKillZones;
  enum MistyWoodsKuroGameplayController_State__Enum m_currentState;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct MistyWoodsKuroGameplayController {
  struct MistyWoodsKuroGameplayController__Class *klass;
  struct MonitorData *monitor;
  struct MistyWoodsKuroGameplayController__Fields fields;
};
struct __declspec(align(8)) MistyWoodsKuroController_Animations__Fields {
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Notice;
  struct TextureAnimationWithTransitions * FlyUp;
  struct TextureAnimationWithTransitions * Returning;
};
struct MistyWoodsKuroController_Animations {
  struct MistyWoodsKuroController_Animations__Class *klass;
  struct MonitorData *monitor;
  struct MistyWoodsKuroController_Animations__Fields fields;
};
struct MistyWoodsKuroGameplayController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct MistyWoodsKuroGameplayController__StaticFields {
};
struct MistyWoodsKuroGameplayController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistyWoodsKuroGameplayController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistyWoodsKuroGameplayController__VTable vtable;
};
struct MistyWoodsKuroController_Animations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MistyWoodsKuroController_Animations__StaticFields {
};
struct MistyWoodsKuroController_Animations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistyWoodsKuroController_Animations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistyWoodsKuroController_Animations__VTable vtable;
};
struct MistyWoodsKuroController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct MistyWoodsKuroController__StaticFields {
};
struct MistyWoodsKuroController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistyWoodsKuroController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistyWoodsKuroController__VTable vtable;
};

struct MistyWoodsKuroGameplayHideZone__Fields {
  struct SaveSerialize__Fields _;
  struct Bounds Bounds;
  bool Active;
};
struct MistyWoodsKuroGameplayHideZone {
  struct MistyWoodsKuroGameplayHideZone__Class *klass;
  struct MonitorData *monitor;
  struct MistyWoodsKuroGameplayHideZone__Fields fields;
};
struct __declspec(align(8)) List_1_MistyWoodsKuroGameplayHideZone___Fields {
  struct MistyWoodsKuroGameplayHideZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MistyWoodsKuroGameplayHideZone_ {
  struct List_1_MistyWoodsKuroGameplayHideZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MistyWoodsKuroGameplayHideZone___Fields fields;
};
struct MistyWoodsKuroGameplayHideZone__Array {
  struct MistyWoodsKuroGameplayHideZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MistyWoodsKuroGameplayHideZone * vector[32];
};
struct IEnumerator_1_MistyWoodsKuroGameplayHideZone_ {
  struct IEnumerator_1_MistyWoodsKuroGameplayHideZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_MistyWoodsKuroGameplayHideZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MistyWoodsKuroGameplayHideZone___StaticFields {
};
struct IEnumerator_1_MistyWoodsKuroGameplayHideZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MistyWoodsKuroGameplayHideZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MistyWoodsKuroGameplayHideZone___VTable vtable;
};
struct List_1_MistyWoodsKuroGameplayHideZone___VTable {
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
struct List_1_MistyWoodsKuroGameplayHideZone___StaticFields {
  struct MistyWoodsKuroGameplayHideZone__Array * _emptyArray;
};
struct List_1_MistyWoodsKuroGameplayHideZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MistyWoodsKuroGameplayHideZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MistyWoodsKuroGameplayHideZone___VTable vtable;
};
struct MistyWoodsKuroGameplayHideZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct MistyWoodsKuroGameplayHideZone__StaticFields {
  struct List_1_MistyWoodsKuroGameplayHideZone_ * All;
};
struct MistyWoodsKuroGameplayHideZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistyWoodsKuroGameplayHideZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistyWoodsKuroGameplayHideZone__VTable vtable;
};

struct __declspec(align(8)) MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Fields {
  struct Vector3 position;
};
struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0 {
  struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class *klass;
  struct MonitorData *monitor;
  struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Fields fields;
};
struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__StaticFields {
};
struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__VTable vtable;
};

struct MistyWoodsKuroHideZoneAction__Fields {
  struct ActionMethod__Fields _;
  struct MistyWoodsKuroGameplayHideZone * HideZone;
  bool Activate;
};
struct MistyWoodsKuroHideZoneAction {
  struct MistyWoodsKuroHideZoneAction__Class *klass;
  struct MonitorData *monitor;
  struct MistyWoodsKuroHideZoneAction__Fields fields;
};
struct MistyWoodsKuroHideZoneAction__VTable {
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
struct MistyWoodsKuroHideZoneAction__StaticFields {
};
struct MistyWoodsKuroHideZoneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistyWoodsKuroHideZoneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistyWoodsKuroHideZoneAction__VTable vtable;
};

struct PetrifiedOwlFeedingGroundsPlayArea__Fields {
  struct MonoBehaviour__Fields _;
  struct Bounds Bounds;
};
struct PetrifiedOwlFeedingGroundsPlayArea {
  struct PetrifiedOwlFeedingGroundsPlayArea__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlFeedingGroundsPlayArea__Fields fields;
};
struct PetrifiedOwlFeedingGroundsPlayArea__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PetrifiedOwlFeedingGroundsPlayArea__StaticFields {
};
struct PetrifiedOwlFeedingGroundsPlayArea__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlFeedingGroundsPlayArea__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlFeedingGroundsPlayArea__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedBooleanUberState * State;
  struct GameObject * PowlRig;
  struct GameObject * SkeetoRig;
  struct MoonTimeline * StalkALoop;
  struct MoonTimeline * StalkAToB;
  struct MoonTimeline * StalkBLoop;
  struct MoonTimeline * StalkBExit;
  struct MoonTimeline * StalkC;
  struct Condition_1 * AToBCondition;
  struct Condition_1 * BExitCondition;
  struct Condition_1 * CEnterCondition;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates * States;
  struct StateMachine_2 * m_stateMachine;
};
struct PetrifiedOwlSilentWoodsController {
  struct PetrifiedOwlSilentWoodsController__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController__Fields fields;
};
struct __declspec(align(8)) PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState * StalkALoop;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState * StalkAToB;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState * StalkBLoop;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState * StalkBExit;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState * StalkBToCOutOfScreen;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState * StalkC;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState * StalkCompleted;
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Fields fields;
};
struct __declspec(align(8)) PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields {
  struct PetrifiedOwlSilentWoodsController * m_controller;
  struct StateMachine_2 * m_stateMachine;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates * m_states;
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__VTable vtable;
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__VTable vtable;
};
struct PetrifiedOwlSilentWoodsController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnSceneRootPostEnable;
};
struct PetrifiedOwlSilentWoodsController__StaticFields {
};
struct PetrifiedOwlSilentWoodsController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController_StalkALoopState__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields _;
};
struct PetrifiedOwlSilentWoodsController_StalkALoopState {
  struct PetrifiedOwlSilentWoodsController_StalkALoopState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_StalkALoopState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_StalkALoopState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_StalkALoopState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_StalkALoopState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_StalkALoopState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_StalkALoopState__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController_StalkAToBState__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields _;
};
struct PetrifiedOwlSilentWoodsController_StalkAToBState {
  struct PetrifiedOwlSilentWoodsController_StalkAToBState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_StalkAToBState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_StalkAToBState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_StalkAToBState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_StalkAToBState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_StalkAToBState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_StalkAToBState__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController_StalkBLoopState__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields _;
};
struct PetrifiedOwlSilentWoodsController_StalkBLoopState {
  struct PetrifiedOwlSilentWoodsController_StalkBLoopState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_StalkBLoopState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_StalkBLoopState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_StalkBLoopState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_StalkBLoopState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_StalkBLoopState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_StalkBLoopState__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController_StalkBExitState__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields _;
};
struct PetrifiedOwlSilentWoodsController_StalkBExitState {
  struct PetrifiedOwlSilentWoodsController_StalkBExitState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_StalkBExitState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_StalkBExitState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_StalkBExitState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_StalkBExitState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_StalkBExitState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_StalkBExitState__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields _;
};
struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState {
  struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController_StalkCState__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields _;
};
struct PetrifiedOwlSilentWoodsController_StalkCState {
  struct PetrifiedOwlSilentWoodsController_StalkCState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_StalkCState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_StalkCState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_StalkCState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_StalkCState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_StalkCState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_StalkCState__VTable vtable;
};

struct PetrifiedOwlSilentWoodsController_StalkCompletedState__Fields {
  struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Fields _;
};
struct PetrifiedOwlSilentWoodsController_StalkCompletedState {
  struct PetrifiedOwlSilentWoodsController_StalkCompletedState__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSilentWoodsController_StalkCompletedState__Fields fields;
};
struct PetrifiedOwlSilentWoodsController_StalkCompletedState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct PetrifiedOwlSilentWoodsController_StalkCompletedState__StaticFields {
};
struct PetrifiedOwlSilentWoodsController_StalkCompletedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSilentWoodsController_StalkCompletedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSilentWoodsController_StalkCompletedState__VTable vtable;
};

struct RockTreeSetup__Fields {
  struct SaveSerialize__Fields _;
  struct IPushable * PushPullBlock;
  struct Animation * Animation;
  struct Transform * RockHelper;
  struct Vector3 m_rockHelperOffset;
  float m_time;
  float TriggerSequenceTime;
  bool m_hasTriggered;
  struct ActionMethod * Action;
  float ReleaseRockTime;
};
struct RockTreeSetup {
  struct RockTreeSetup__Class *klass;
  struct MonitorData *monitor;
  struct RockTreeSetup__Fields fields;
};
struct RockTreeSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct RockTreeSetup__StaticFields {
};
struct RockTreeSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RockTreeSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RockTreeSetup__VTable vtable;
};

struct RollingRockParticlesController__Fields {
  struct MonoBehaviour__Fields _;
  struct ParticleSystem * ParticleSystem;
  float m_emitterMax;
  float m_emitterMin;
  float m_emitterRate;
  float MinVelocity;
  float MaxVelocity;
  struct Rigidbody * m_rigidbody;
  float m_startTime;
};
struct RollingRockParticlesController {
  struct RollingRockParticlesController__Class *klass;
  struct MonitorData *monitor;
  struct RollingRockParticlesController__Fields fields;
};
struct RollingRockParticlesController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RollingRockParticlesController__StaticFields {
};
struct RollingRockParticlesController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RollingRockParticlesController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RollingRockParticlesController__VTable vtable;
};

struct RotatingMaceRoomCarryable__Fields {
  struct MonoBehaviour__Fields _;
  struct IPressurePlate * m_pressurePlate;
};
struct RotatingMaceRoomCarryable {
  struct RotatingMaceRoomCarryable__Class *klass;
  struct MonitorData *monitor;
  struct RotatingMaceRoomCarryable__Fields fields;
};
struct RotatingMaceRoomCarryable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPressed;
  VirtualInvokeData OnReleased;
};
struct RotatingMaceRoomCarryable__StaticFields {
};
struct RotatingMaceRoomCarryable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotatingMaceRoomCarryable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotatingMaceRoomCarryable__VTable vtable;
};

struct RotatingMaceRoomCarryablePlaceholder__Fields {
  struct SaveSerialize__Fields _;
  struct GameObject * Prefab;
};
struct RotatingMaceRoomCarryablePlaceholder {
  struct RotatingMaceRoomCarryablePlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct RotatingMaceRoomCarryablePlaceholder__Fields fields;
};
struct RotatingMaceRoomCarryablePlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct RotatingMaceRoomCarryablePlaceholder__StaticFields {
  struct GameObject * PrefabInstance;
};
struct RotatingMaceRoomCarryablePlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotatingMaceRoomCarryablePlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotatingMaceRoomCarryablePlaceholder__VTable vtable;
};

struct DropSedgewicksCavernLarvaAction__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Target;
};
struct DropSedgewicksCavernLarvaAction {
  struct DropSedgewicksCavernLarvaAction__Class *klass;
  struct MonitorData *monitor;
  struct DropSedgewicksCavernLarvaAction__Fields fields;
};
struct DropSedgewicksCavernLarvaAction__VTable {
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
struct DropSedgewicksCavernLarvaAction__StaticFields {
};
struct DropSedgewicksCavernLarvaAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSedgewicksCavernLarvaAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSedgewicksCavernLarvaAction__VTable vtable;
};

struct PlayerHoldingLarvaCondition__Fields {
  struct Condition_1__Fields _;
  bool IsHolding;
};}