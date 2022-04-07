namespace app {

enum KwolokNpcEntity_CleanseWellspringState__Enum : int32_t {
  KwolokNpcEntity_CleanseWellspringState__Enum_Unassigned = 0,
  KwolokNpcEntity_CleanseWellspringState__Enum_InvestigateWatermill = 1,
  KwolokNpcEntity_CleanseWellspringState__Enum_InvestigateBreakage = 2,
  KwolokNpcEntity_CleanseWellspringState__Enum_ReturnToKwolok = 3,
  KwolokNpcEntity_CleanseWellspringState__Enum_Completed = 4,
};
struct KwolokNpcEntity_CleanseWellspringState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokNpcEntity_CleanseWellspringState__Enum value;
};

struct KwolokNpcEntity_c {
  struct KwolokNpcEntity_c__Class *klass;
  struct MonitorData *monitor;
};
struct KwolokNpcEntity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KwolokNpcEntity_c__StaticFields {
  struct KwolokNpcEntity_c * __9;
  struct Func_1_Boolean_ * __9__34_0;
  struct Action * __9__36_0;
};
struct KwolokNpcEntity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokNpcEntity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokNpcEntity_c__VTable vtable;
};

struct AsymLocomotionIdleBehaviour__Fields {
  struct LocomotionIdleBehaviour__Fields _;
  struct MoonTimeline * idleMoonTimelineLeft;
  struct MoonTimeline * idleMoonTimelineRight;
};
struct AsymLocomotionIdleBehaviour {
  struct AsymLocomotionIdleBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct AsymLocomotionIdleBehaviour__Fields fields;
};
struct AsymLocomotionIdleBehaviour__VTable {
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
struct AsymLocomotionIdleBehaviour__StaticFields {
};
struct AsymLocomotionIdleBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymLocomotionIdleBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymLocomotionIdleBehaviour__VTable vtable;
};

struct AsymLocomotionGroundMoveBehaviour__Fields {
  struct LocomotionGroundMoveBehaviour__Fields _;
  struct LocomotionAnimation__Array * MovementAnimationsFacingLeft;
  struct LocomotionAnimation__Array * MovementAnimationsFacingRight;
};
struct AsymLocomotionGroundMoveBehaviour {
  struct AsymLocomotionGroundMoveBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct AsymLocomotionGroundMoveBehaviour__Fields fields;
};
struct AsymLocomotionGroundMoveBehaviour__VTable {
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
  VirtualInvokeData get_TargetPosition;
  VirtualInvokeData set_TargetPosition;
  VirtualInvokeData get_TraversalSpeed;
  VirtualInvokeData set_TraversalSpeed;
  VirtualInvokeData get_EffectiveMinSpeed;
  VirtualInvokeData get_EffectiveMaxSpeed;
  VirtualInvokeData get_IsAnimationPlaying;
  VirtualInvokeData DeltaToPoint;
  VirtualInvokeData PlayAnimationIfNotPlaying;
  VirtualInvokeData SetAnimationSpeed;
  VirtualInvokeData PlayAnimation;
  VirtualInvokeData OnMovementStoppedPlaying;
  VirtualInvokeData OnTraversalSpeedChange;
};
struct AsymLocomotionGroundMoveBehaviour__StaticFields {
};
struct AsymLocomotionGroundMoveBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymLocomotionGroundMoveBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymLocomotionGroundMoveBehaviour__VTable vtable;
};

struct AsymLocomotionTurningTimelineBehaviour__Fields {
  struct BaseLocomotionTurningBehaviour__Fields _;
  struct SplitTurnAnimationMoonTimeline__Array * TurnAnimationsLeft;
  struct SplitTurnAnimationMoonTimeline__Array * TurnAnimationsRight;
  struct SplitTurnAnimationMoonTimeline * m_currentTurnAnimation;
  bool m_facingLeft;
};
struct AsymLocomotionTurningTimelineBehaviour {
  struct AsymLocomotionTurningTimelineBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct AsymLocomotionTurningTimelineBehaviour__Fields fields;
};
struct AsymLocomotionTurningTimelineBehaviour__VTable {
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
  VirtualInvokeData get_TargetLookDirectionX;
  VirtualInvokeData set_TargetLookDirectionX;
  VirtualInvokeData PlayAnimation;
  VirtualInvokeData ShouldEndBehaviour;
  VirtualInvokeData get_IsPlaying;
  VirtualInvokeData CanCancel;
};
struct AsymLocomotionTurningTimelineBehaviour__StaticFields {
};
struct AsymLocomotionTurningTimelineBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsymLocomotionTurningTimelineBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsymLocomotionTurningTimelineBehaviour__VTable vtable;
};

struct MenuScreen__Fields {
  struct MonoBehaviour__Fields _;
  struct UISoundSettingsAsset * Sounds;
};
struct MenuScreen {
  struct MenuScreen__Class *klass;
  struct MonitorData *monitor;
  struct MenuScreen__Fields fields;
};
struct BuyMapUIConfirmationOverlay__Fields {
  struct MenuScreen__Fields _;
  struct VerticalSpacer * Spacer;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * TextTitle;
  struct GameObject * TextDescription;
  struct MessageProvider * MessageBuyMapTitle;
  struct Action_1_BuyMapUIConfirmationOverlay_Selection_ * OnSelected;
};
struct BuyMapUIConfirmationOverlay {
  struct BuyMapUIConfirmationOverlay__Class *klass;
  struct MonitorData *monitor;
  struct BuyMapUIConfirmationOverlay__Fields fields;
};
struct UISoundSettingsAsset__Fields {
  struct ScriptableObject__Fields _;
  struct State * NoUIDisplayedState;
  struct Event_1 * MenuOpen;
  struct Event_1 * MenuClose;
  struct Event_1 * ConfirmItem;
  struct Event_1 * CancelItem;
  struct Event_1 * InvalidItem;
  struct Event_1 * Navigate;
  struct Event_1 * Increment;
  struct Event_1 * Decrement;
  struct Event_1 * Place;
  struct Event_1 * Remove;
  struct State * GeneralMenuState;
  struct State * MainMenuState;
  struct Event_1 * ResetMusicStatesEvent;
  struct Event_1 * MapInventoryShardOpen;
  struct Event_1 * MapInventoryShardClose;
  struct Event_1 * SpiritShardScreenOpen;
  struct Event_1 * SpiritShardScreenClose;
  struct Event_1 * SpiritShardNewItemAdded;
  struct Event_1 * SpiritShardSocketAdded;
  struct Event_1 * SpiritShardEquipped;
  struct Event_1 * SpiritShardUnequipped;
  struct Event_1 * SpiritShardInvalid;
  struct Event_1 * SpiritShardBegin;
  struct Event_1 * SpiritShardUpgrade;
  struct Event_1 * SpiritShardLockedNavigate;
  struct Event_1 * SpiritShardUnlockedNavigate;
  struct RTPC * SpiritShardPurchaseRtpc;
  struct State * SpiritShardScreenState;
  struct Event_1 * ShardTraderPurchaseComplete;
  struct Event_1 * ShardTraderPurchaseBegin;
  struct RTPC * ShardTraderRtpc;
  struct State * ShardTraderScreenState;
  struct Event_1 * WeaponWheelOpen;
  struct Event_1 * WeaponWheelClose;
  struct Event_1 * WeaponWheelSelect;
  struct Event_1 * WeaponWheelBind;
  struct State * WeaponWheelScreenState;
  struct Event_1 * SkillUpgradePurchaseCompleted;
  struct Event_1 * SkillUpgradePurchaseBegins;
  struct Event_1 * SkillUpgradePurchaseCancelled;
  struct RTPC * SkillUpgradePurchaseRtpc;
  struct State * SkillUpgradeScreenState;
  struct Event_1 * MapmakerPurchaseCompleted;
  struct Event_1 * MapmakerPurchaseBegins;
  struct Event_1 * MapmakerPurchaseCancelled;
  struct RTPC * MapmakerPurchaseRtpc;
  struct State * MapmakerScreenState;
  struct Event_1 * BuildingCompleted;
  struct Event_1 * BuildingCancelled;
  struct Event_1 * BuildingBegins;
  struct RTPC * BuildingRtpc;
  struct State * BuilderScreenState;
  struct Event_1 * AreaMapOpen;
  struct Event_1 * AreaMapClose;
  struct Event_1 * AreaMapZoomOut;
  struct Event_1 * AreaMapZoomIn;
  struct Event_1 * AreaMapEventStopZoom;
  struct Event_1 * AreaMapPlacePin;
  struct Event_1 * AreaMapDeletePin;
  struct Event_1 * AreaMapChangeSelectedArea;
  struct Event_1 * AreaMapFocus;
  struct Event_1 * AreaMapShowDetails;
  struct Event_1 * AreaMapScrollingBegins;
  struct Event_1 * AreaMapScrollingEnds;
  struct RTPC * AreaMapScrollingRtpc;
  struct State * AreaMapScreenState;
  struct Event_1 * QuestUIOpen;
  struct Event_1 * QuestUIQuestSelected;
  struct Event_1 * QuestUIQuestReceived;
  struct State * QuestUIScreenState;
  struct Event_1 * GardenerPurchaseCompleted;
  struct Event_1 * GardenerPurchaseBegin;
  struct RTPC * GardenerPurchaseRtpc;
  struct State * GardenerScreenState;
  struct Event_1 * TeleportUIOpen;
  struct RTPC * TeleportUIScrollRtpc;
  struct State * TeleportScreenState;
  struct State * LoremasterScreenState;
  struct Event_1 * InventoryOpen;
  struct Event_1 * InventoryClose;
  struct State * RacePauseScreenState;
  struct Event_1 * OptionsSubmenuOpen;
  struct Event_1 * OptionsSubmenuClose;
  struct Event_1 * OptionsBindHotkey;
  struct Event_1 * OptionsBindHotkeySuccess;
  struct Event_1 * OptionsBindHotkeyCancel;
  struct Event_1 * OptionsRemoveHotkey;
  struct Event_1 * OptionsUndoHotkey;
  struct Event_1 * OptionsNavigate;
  struct Event_1 * OptionsChangeController;
  struct Event_1 * OptionsCycleControls;
  struct Event_1 * OptionsResetToDefault;
  struct RTPC * OptionsMasterVolumeRtpc;
  struct RTPC * OptionsMusicVolumeRtpc;
  struct RTPC * OptionsSoundVolumeRtpc;
  struct RTPC * OptionsAmbienceVolumeRtpc;
  struct State * OptionsScreenState;
  struct Event_1 * QuickAccessChangeScreen;
  struct Event_1 * QuickAccessPlay;
  struct Event_1 * QuickAccessPlayLocked;
  struct Event_1 * QuickAccessSelectPopulated;
  struct Event_1 * QuickAccessSelectEmpty;
  struct Event_1 * QuickAccessMemoryPlay;
  struct Event_1 * QuickAccessMemoryPlayLocked;
  struct Event_1 * QuickAccessMemoryPopulated;
  struct Event_1 * QuickAccessMemoryEmpty;
  struct Event_1 * InventoryItemEmptySelected;
  struct Event_1 * InventoryItemPopulatedSelected;
  struct Event_1 * GetWispMessagePopup;
  struct Event_1 * GetAchievementPopup;
};
struct UISoundSettingsAsset {
  struct UISoundSettingsAsset__Class *klass;
  struct MonitorData *monitor;
  struct UISoundSettingsAsset__Fields fields;
};
struct VerticalSpacer__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_VerticalSpacer_Item_ * Items;
};
struct VerticalSpacer {
  struct VerticalSpacer__Class *klass;
  struct MonitorData *monitor;
  struct VerticalSpacer__Fields fields;
};
struct __declspec(align(8)) List_1_VerticalSpacer_Item___Fields {
  struct VerticalSpacer_Item__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_VerticalSpacer_Item_ {
  struct List_1_VerticalSpacer_Item___Class *klass;
  struct MonitorData *monitor;
  struct List_1_VerticalSpacer_Item___Fields fields;
};
struct VerticalSpacer_Item {
  struct Transform * Anchor;
  struct GameObject * AlignableGO;
  float SpaceAbove;
  float SpaceBelow;
  bool SkipIfInactive;
};
struct VerticalSpacer_Item__Boxed {
  struct VerticalSpacer_Item__Class *klass;
  struct MonitorData *monitor;
  struct VerticalSpacer_Item fields;
};
struct VerticalSpacer_Item__Array {
  struct VerticalSpacer_Item__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VerticalSpacer_Item vector[32];
};
struct IEnumerator_1_VerticalSpacer_Item_ {
  struct IEnumerator_1_VerticalSpacer_Item___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_BuyMapUIConfirmationOverlay_Selection___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_BuyMapUIConfirmationOverlay_Selection_ {
  struct Action_1_BuyMapUIConfirmationOverlay_Selection___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_BuyMapUIConfirmationOverlay_Selection___Fields fields;
};
enum BuyMapUIConfirmationOverlay_Selection__Enum : int32_t {
  BuyMapUIConfirmationOverlay_Selection__Enum_OK = 0,
  BuyMapUIConfirmationOverlay_Selection__Enum_Cancel = 1,
};
struct BuyMapUIConfirmationOverlay_Selection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BuyMapUIConfirmationOverlay_Selection__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UISoundSettingsAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MenuScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VerticalSpacer_Item__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VerticalSpacer_Item__VTable vtable;
};
struct IEnumerator_1_VerticalSpacer_Item___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_VerticalSpacer_Item___StaticFields {
};
struct IEnumerator_1_VerticalSpacer_Item___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_VerticalSpacer_Item___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct VerticalSpacer_Item__Array * _emptyArray;
};
struct List_1_VerticalSpacer_Item___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_VerticalSpacer_Item___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VerticalSpacer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VerticalSpacer__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_BuyMapUIConfirmationOverlay_Selection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuyMapUIConfirmationOverlay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuyMapUIConfirmationOverlay__VTable vtable;
};

struct BuyMapUIConfirmationOverlay_c {
  struct BuyMapUIConfirmationOverlay_c__Class *klass;
  struct MonitorData *monitor;
};
struct BuyMapUIConfirmationOverlay_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuyMapUIConfirmationOverlay_c__StaticFields {
  struct BuyMapUIConfirmationOverlay_c * __9;
  struct Action_1_BuyMapUIConfirmationOverlay_Selection_ * __9__15_0;
};
struct BuyMapUIConfirmationOverlay_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuyMapUIConfirmationOverlay_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuyMapUIConfirmationOverlay_c__VTable vtable;
};

enum DiscoveredAreaPercentageCondition_ComparisonMode__Enum : int32_t {
  DiscoveredAreaPercentageCondition_ComparisonMode__Enum_GreaterThanOrEqual = 0,
  DiscoveredAreaPercentageCondition_ComparisonMode__Enum_LessThan = 1,
};
struct DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DiscoveredAreaPercentageCondition_ComparisonMode__Enum value;
};
struct DiscoveredAreaPercentageCondition__Fields {
  struct Condition_1__Fields _;
  struct MoonFloat * AmountDiscovered;
  enum GameWorldAreaID__Enum Area;
  enum DiscoveredAreaPercentageCondition_ComparisonMode__Enum Compare;
};
struct DiscoveredAreaPercentageCondition {
  struct DiscoveredAreaPercentageCondition__Class *klass;
  struct MonitorData *monitor;
  struct DiscoveredAreaPercentageCondition__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DiscoveredAreaPercentageCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DiscoveredAreaPercentageCondition__VTable vtable;
};

struct DynamicTextProvider__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct DynamicTextProvider_MessageConditionPair__Array * Messages;
};
struct DynamicTextProvider {
  struct DynamicTextProvider__Class *klass;
  struct MonitorData *monitor;
  struct DynamicTextProvider__Fields fields;
};
struct DynamicTextProvider_MessageConditionPair {
  struct MessageProvider * MessageProvider;
  struct Condition_1 * Condition;
};
struct DynamicTextProvider_MessageConditionPair__Boxed {
  struct DynamicTextProvider_MessageConditionPair__Class *klass;
  struct MonitorData *monitor;
  struct DynamicTextProvider_MessageConditionPair fields;
};
struct DynamicTextProvider_MessageConditionPair__Array {
  struct DynamicTextProvider_MessageConditionPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicTextProvider_MessageConditionPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicTextProvider_MessageConditionPair__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicTextProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicTextProvider__VTable vtable;
};

struct HasAreaMapCondition__Fields {
  struct Condition_1__Fields _;
  bool Inverse;
};
struct HasAreaMapCondition {
  struct HasAreaMapCondition__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasAreaMapCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasAreaMapCondition__VTable vtable;
};

struct IsInSceneCondition__Fields {
  struct Condition_1__Fields _;
  struct SceneMetaData * SceneMetaData;
  struct MoonReference_1_UnityEngine_Transform_ * Target;
  bool Inverse;
};
struct IsInSceneCondition {
  struct IsInSceneCondition__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsInSceneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsInSceneCondition__VTable vtable;
};

enum MinerIdle_IdleStates__Enum : int32_t {
  MinerIdle_IdleStates__Enum_TransitioningToSharpen = 0,
  MinerIdle_IdleStates__Enum_SharpenAxe = 1,
  MinerIdle_IdleStates__Enum_SharpenAxeLookAround = 2,
  MinerIdle_IdleStates__Enum_Last = 3,
};
struct MinerIdle_IdleStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MinerIdle_IdleStates__Enum value;
};
struct MinerIdle__Fields {
  struct EntityLocomotionTask__Fields _;
  struct MoonTimeline * TransitioningToSharpenTimeline;
  struct MoonTimeline * TransitioningFromSharpenTimeline;
  struct MoonTimeline * SharpenAxeTimeline;
  struct MoonTimeline * SharpenAxeLookAroundTimeline;
  float TransitionInDuration;
  float ChanceOfPlayingSharpeningVariation;
  enum MinerIdle_IdleStates__Enum m_currentState;
  struct MoonTimeline * m_currentTimeline;
  struct NPCEntity * m_npcEntity;
};
struct MinerIdle {
  struct MinerIdle__Class *klass;
  struct MonitorData *monitor;
  struct MinerIdle__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerIdle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerIdle__VTable vtable;
};

enum MinerInteractionBehaviour_InteractionStates__Enum : int32_t {
  MinerInteractionBehaviour_InteractionStates__Enum_Idle = 0,
  MinerInteractionBehaviour_InteractionStates__Enum_WaitingForInTransition = 1,
  MinerInteractionBehaviour_InteractionStates__Enum_Talking = 2,
  MinerInteractionBehaviour_InteractionStates__Enum_Farewell = 3,
};
struct MinerInteractionBehaviour_InteractionStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MinerInteractionBehaviour_InteractionStates__Enum value;
};
struct MinerInteractionBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
  struct MoonTimeline * IdleTimeline;
  struct MoonTimeline * IntroTimeline;
  struct MoonTimeline * FarewellTimeline;
  struct MoonTimeline * TransitionFromIdleTimeline;
  struct MoonTimeline * TransitionFromTalkTimeline;
  struct MoonTimeline * TransitionIdleToTalk;
  struct MoonTimeline * TransitionTalkToIdle;
  float TransitionInDuration;
  struct List_1_Moon_MoonReference_1__10 * TalkDialogNodes;
  struct MoonReference_1_IDialogCallbackNotifier_ * FarewellDialogNode;
  struct MoonReference_1_IDialogCallbackNotifier_ * AgreedToMoveToNewSpotDialogNode;
  struct SetWorldEventAction * SetWorldEventToMoveToNewSpot;
  struct MoonTimeline * m_currentTimeline;
  enum MinerInteractionBehaviour_InteractionStates__Enum m_currentState;
  struct IDialogCallbackNotifier * m_resolvedFarewellNode;
  struct IDialogCallbackNotifier * m_resolvedAgreedToMoveToNewSpotNode;
  struct List_1_IDialogCallbackNotifier_ * m_resolvedTalkNodes;
  enum MinerInteractionBehaviour_InteractionStates__Enum m_newState;
  struct NPCEntity * m_npcEntity;
};
struct MinerInteractionBehaviour {
  struct MinerInteractionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MinerInteractionBehaviour__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__10__Fields {
  struct MoonReference_1_IDialogCallbackNotifier___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__10 {
  struct List_1_Moon_MoonReference_1__10__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__10__Fields fields;
};
struct MoonReference_1_IDialogCallbackNotifier___Array {
  struct MoonReference_1_IDialogCallbackNotifier___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_IDialogCallbackNotifier_ * vector[32];
};
struct IEnumerator_1_Moon_MoonReference_1__10 {
  struct IEnumerator_1_Moon_MoonReference_1__10__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_IDialogCallbackNotifier___Fields {
  struct IDialogCallbackNotifier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IDialogCallbackNotifier_ {
  struct List_1_IDialogCallbackNotifier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IDialogCallbackNotifier___Fields fields;
};
struct IDialogCallbackNotifier__Array {
  struct IDialogCallbackNotifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDialogCallbackNotifier * vector[32];
};
struct IEnumerator_1_IDialogCallbackNotifier_ {
  struct IEnumerator_1_IDialogCallbackNotifier___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonReference_1__10__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonReference_1__10__StaticFields {
};
struct IEnumerator_1_Moon_MoonReference_1__10__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonReference_1__10__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct MoonReference_1_IDialogCallbackNotifier___Array * _emptyArray;
};
struct List_1_Moon_MoonReference_1__10__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonReference_1__10__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonReference_1__10__VTable vtable;
};
struct IEnumerator_1_IDialogCallbackNotifier___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_IDialogCallbackNotifier___StaticFields {
};
struct IEnumerator_1_IDialogCallbackNotifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_IDialogCallbackNotifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_IDialogCallbackNotifier___VTable vtable;
};}