namespace app {
struct NameOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameOptions__VTable vtable;
};

struct __declspec(align(8)) NameOptions_c_DisplayClass19_0__Fields {
  struct NameOptions * __4__this;
  struct String * filterString;
};
struct NameOptions_c_DisplayClass19_0 {
  struct NameOptions_c_DisplayClass19_0__Class *klass;
  struct MonitorData *monitor;
  struct NameOptions_c_DisplayClass19_0__Fields fields;
};
struct NameOptions_c_DisplayClass19_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NameOptions_c_DisplayClass19_0__StaticFields {
};
struct NameOptions_c_DisplayClass19_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameOptions_c_DisplayClass19_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameOptions_c_DisplayClass19_0__VTable vtable;
};

struct __declspec(align(8)) NameOptions_c_DisplayClass19_1__Fields {
  struct String * n1;
  struct NameOptions_c_DisplayClass19_0 * CS___8__locals1;
};
struct NameOptions_c_DisplayClass19_1 {
  struct NameOptions_c_DisplayClass19_1__Class *klass;
  struct MonitorData *monitor;
  struct NameOptions_c_DisplayClass19_1__Fields fields;
};
struct NameOptions_c_DisplayClass19_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NameOptions_c_DisplayClass19_1__StaticFields {
};
struct NameOptions_c_DisplayClass19_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameOptions_c_DisplayClass19_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameOptions_c_DisplayClass19_1__VTable vtable;
};

struct OptionsScreen__Fields {
  struct MenuScreen__Fields _;
  enum MenuTabBackground__Enum m_backgroundMode;
  struct Action * OnRefreshCallback;
  bool m_optionsScreenNeedRefresh;
  struct CleverMenuItemSelectionManager * Navigation;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct OptionsScreen {
  struct OptionsScreen__Class *klass;
  struct MonitorData *monitor;
  struct OptionsScreen__Fields fields;
};
struct OptionsScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
};
struct OptionsScreen__StaticFields {
  struct OptionsScreen * Instance;
};
struct OptionsScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OptionsScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OptionsScreen__VTable vtable;
};

struct OptionsScreen_c {
  struct OptionsScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct OptionsScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OptionsScreen_c__StaticFields {
  struct OptionsScreen_c * __9;
  struct Action * __9__40_0;
};
struct OptionsScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OptionsScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OptionsScreen_c__VTable vtable;
};

struct OptionsScreenLegendController__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTransparencyAnimator * GeneralLegend;
};
struct OptionsScreenLegendController {
  struct OptionsScreenLegendController__Class *klass;
  struct MonitorData *monitor;
  struct OptionsScreenLegendController__Fields fields;
};
struct OptionsScreenLegendController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OptionsScreenLegendController__StaticFields {
};
struct OptionsScreenLegendController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OptionsScreenLegendController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OptionsScreenLegendController__VTable vtable;
};

struct OptionsScreenTextsManager__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * ResolutionMessageBox;
  struct MessageBox * FullScreenMessageBox;
  struct MessageBox * SoundVolumeMessageBox;
  struct MessageBox * MusicVolumeMessageBox;
  struct MessageBox * ControlStyleMessageBox;
  struct MessageBox * KeyboardLayoutMessageBox;
  struct MessageBox * VibrationMessageBox;
  struct MessageBox * DamageTextsMessageBox;
  struct MessageBox * MapTrailTextsMessageBox;
  struct MessageBox * LanguageMessageBox;
  struct MessageBox * VSyncMessageBox;
  struct MessageBox * ShowHudMessageBox;
  struct MessageBox * HDRMessageBox;
  struct MessageBox * SpeakerSetupMessageBox;
  struct MessageBox * SpeakerSetupMessageBoxConsoles;
  struct MessageBox * WindowsSpatialMessageBox;
  struct MessageBox * ExternalHDRMessageBox;
  struct MessageBox * AudioAPIMessageBox;
  struct MessageBox * DynamicGraphicsToggleMessageBox;
  struct MessageBox * QualityToggleSMessageBox;
  struct MessageBox * QualityToggleXMessageBox;
  struct MessageBox * QualityTogglePCMessageBox;
  struct MessageBox * ExternalQualityToggleSMessageBox;
  struct MessageBox * ExternalQualityToggleXMessageBox;
  struct MessageBox * ExternalQualityTogglePCMessageBox;
  struct MessageBox * AchievementToastEnabledMessageBox;
  struct MessageBox * AudioQualityMessageBox;
  struct TranslatedMessageProvider * BorderlessMessageProvider;
  struct TranslatedMessageProvider * WindowedMessageProvider;
  struct TranslatedMessageProvider * ExclusiveMessageProvider;
  struct TranslatedMessageProvider * OnMessageProvider;
  struct TranslatedMessageProvider * OnForDamageValuesMessageProvider;
  struct TranslatedMessageProvider * DynamicMessageProvider;
  struct TranslatedMessageProvider * OffMessageProvider;
  struct TranslatedMessageProvider * SoundVolumeMessageProvider;
  struct TranslatedMessageProvider * MusicVolumeMessageProvider;
  struct TranslatedMessageProvider * SpeakerSetupSpeakersMessageProvider;
  struct TranslatedMessageProvider * SpeakerSetupHeadphonesMessageProvider;
  struct TranslatedMessageProvider * NotActiveMessageProvider;
  struct TranslatedMessageProvider * AudioQualityEfficientMessageProvider;
  struct TranslatedMessageProvider * AudioQualityBalancedMessageProvider;
  struct TranslatedMessageProvider * AudioQualityMaximumMessageProvider;
  struct TranslatedMessageProvider * HUDOnMessageProvider;
  struct TranslatedMessageProvider * HUDOffMessageProvider;
  struct TranslatedMessageProvider * QualityToggleEnabledSMessageProvider;
  struct TranslatedMessageProvider * QualityToggleEnabledXMessageProvider;
  struct TranslatedMessageProvider * QualityToggleEnabledPCMessageProvider;
  struct TranslatedMessageProvider * QualityToggleDisabledSMessageProvider;
  struct TranslatedMessageProvider * QualityToggleDisabledXMessageProvider;
  struct TranslatedMessageProvider * QualityToggleDisabledPCMessageProvider;
  struct TranslatedMessageProvider * ControlStyleControllerMessageProvider;
  struct TranslatedMessageProvider * ControlStyleKeyboardMessageProvider;
  struct TranslatedMessageProvider * ControlStyleKeyboardAndMouseMessageProvider;
  struct TranslatedMessageProvider * KeyboardLayoutQwertyMessageProvider;
  struct TranslatedMessageProvider * KeyboardLayoutAzertyMessageProvider;
  struct TranslatedMessageProvider * EnglishMessageProvider;
  struct TranslatedMessageProvider * FrenchMessageProvider;
  struct TranslatedMessageProvider * ItalianMessageProvider;
  struct TranslatedMessageProvider * GermanMessageProvider;
  struct TranslatedMessageProvider * SpanishMessageProvider;
  struct TranslatedMessageProvider * JapaneseMessageProvider;
  struct TranslatedMessageProvider * PortugueseMessageProvider;
  struct TranslatedMessageProvider * ChineseMessageProvider;
  struct TranslatedMessageProvider * RussianMessageProvider;
  struct TranslatedMessageProvider * TraditionalChineseMessageProvider;
  struct TranslatedMessageProvider * CzechMessageProvider;
  struct TranslatedMessageProvider * DanishMessageProvider;
  struct TranslatedMessageProvider * DutchMessageProvider;
  struct TranslatedMessageProvider * FinnishMessageProvider;
  struct TranslatedMessageProvider * HungarianMessageProvider;
  struct TranslatedMessageProvider * KoreanMessageProvider;
  struct TranslatedMessageProvider * NorwegianMessageProvider;
  struct TranslatedMessageProvider * PolishMessageProvider;
  struct TranslatedMessageProvider * SpanishSpainMessageProvider;
  struct TranslatedMessageProvider * SwedishMessageProvider;
  struct TranslatedMessageProvider * TurkishMessageProvider;
  struct MessageProvider * AudioAPIWasapiMessageProvider;
  struct MessageProvider * AudioAPIXAudio2MessageProvider;
  struct MessageProvider * AudioAPIDirectSoundMessageProvider;
  struct MessageProvider * AudioAPIDefaultMessageProvider;
  struct MessageProvider * StaticMessageProvider;
  bool m_IsHDRCompatibleAndAllowed;
  bool m_IsHDRCompatibleAndEnabled;
};
struct OptionsScreenTextsManager {
  struct OptionsScreenTextsManager__Class *klass;
  struct MonitorData *monitor;
  struct OptionsScreenTextsManager__Fields fields;
};
struct TranslatedMessageProvider__Fields {
  struct MessageProvider__Fields _;
  struct List_1_TranslatedMessageProvider_MessageItem_ * Messages;
};
struct TranslatedMessageProvider {
  struct TranslatedMessageProvider__Class *klass;
  struct MonitorData *monitor;
  struct TranslatedMessageProvider__Fields fields;
};
struct __declspec(align(8)) List_1_TranslatedMessageProvider_MessageItem___Fields {
  struct TranslatedMessageProvider_MessageItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TranslatedMessageProvider_MessageItem_ {
  struct List_1_TranslatedMessageProvider_MessageItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TranslatedMessageProvider_MessageItem___Fields fields;
};
struct __declspec(align(8)) TranslatedMessageProvider_MessageItem__Fields {
  struct String * English;
  struct String * French;
  struct String * Italian;
  struct String * German;
  struct String * Spanish;
  struct String * Japanese;
  struct String * Portuguese;
  struct String * Chinese;
  struct String * Russian;
  struct String * TraditionalChinese;
  struct String * Czech;
  struct String * Danish;
  struct String * Dutch;
  struct String * Finnish;
  struct String * Hungarian;
  struct String * Korean;
  struct String * Norwegian;
  struct String * Polish;
  struct String * SpanishSpain;
  struct String * Swedish;
  struct String * Turkish;
  enum EmotionType__Enum Emotion;
  struct SoundProvider * Sound;
  struct Event_1 * WWiseEvent;
};
struct TranslatedMessageProvider_MessageItem {
  struct TranslatedMessageProvider_MessageItem__Class *klass;
  struct MonitorData *monitor;
  struct TranslatedMessageProvider_MessageItem__Fields fields;
};
struct TranslatedMessageProvider_MessageItem__Array {
  struct TranslatedMessageProvider_MessageItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TranslatedMessageProvider_MessageItem * vector[32];
};
struct IEnumerator_1_TranslatedMessageProvider_MessageItem_ {
  struct IEnumerator_1_TranslatedMessageProvider_MessageItem___Class *klass;
  struct MonitorData *monitor;
};
struct TranslatedMessageProvider_MessageItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TranslatedMessageProvider_MessageItem__StaticFields {
};
struct TranslatedMessageProvider_MessageItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TranslatedMessageProvider_MessageItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TranslatedMessageProvider_MessageItem__VTable vtable;
};
struct IEnumerator_1_TranslatedMessageProvider_MessageItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TranslatedMessageProvider_MessageItem___StaticFields {
};
struct IEnumerator_1_TranslatedMessageProvider_MessageItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TranslatedMessageProvider_MessageItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TranslatedMessageProvider_MessageItem___VTable vtable;
};
struct List_1_TranslatedMessageProvider_MessageItem___VTable {
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
struct List_1_TranslatedMessageProvider_MessageItem___StaticFields {
  struct TranslatedMessageProvider_MessageItem__Array * _emptyArray;
};
struct List_1_TranslatedMessageProvider_MessageItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TranslatedMessageProvider_MessageItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TranslatedMessageProvider_MessageItem___VTable vtable;
};
struct TranslatedMessageProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetAllMessages;
  VirtualInvokeData GetMessages;
};
struct TranslatedMessageProvider__StaticFields {
};
struct TranslatedMessageProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TranslatedMessageProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TranslatedMessageProvider__VTable vtable;
};
struct OptionsScreenTextsManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OptionsScreenTextsManager__StaticFields {
  struct OptionsScreenTextsManager * Instance;
};
struct OptionsScreenTextsManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OptionsScreenTextsManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OptionsScreenTextsManager__VTable vtable;
};

struct PaperwhiteVolumeSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct PaperwhiteVolumeSlider {
  struct PaperwhiteVolumeSlider__Class *klass;
  struct MonitorData *monitor;
  struct PaperwhiteVolumeSlider__Fields fields;
};
struct PaperwhiteVolumeSlider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_IsVisible;
  VirtualInvokeData set_IsVisible;
  VirtualInvokeData get_CanBeEntered;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData set_IsActive;
  VirtualInvokeData get_IsHighlightVisible;
  VirtualInvokeData set_IsHighlightVisible;
  VirtualInvokeData Awake;
  VirtualInvokeData EnterInGroup;
  VirtualInvokeData OnMenuItemChangedInGroup;
  VirtualInvokeData get_Value;
  VirtualInvokeData set_Value;
  VirtualInvokeData get_NormalizedValue;
  VirtualInvokeData set_NormalizedValue;
  VirtualInvokeData get_NormalizedDefaultValue;
  VirtualInvokeData get_MouseDragStepParameter;
  VirtualInvokeData GetValueToDisplay;
  VirtualInvokeData ApplyValueOnSliderReleased;
  VirtualInvokeData UpdateStep;
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
  VirtualInvokeData UpdateValue;
  VirtualInvokeData OnBackgroundEnabled;
  VirtualInvokeData OnBackgroundDisabled;
};
struct PaperwhiteVolumeSlider__StaticFields {
};
struct PaperwhiteVolumeSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PaperwhiteVolumeSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PaperwhiteVolumeSlider__VTable vtable;
};

struct PositionAtEndOfTextBox__Fields {
  struct MonoBehaviour__Fields _;
  struct TextBox * TextBox;
};
struct PositionAtEndOfTextBox {
  struct PositionAtEndOfTextBox__Class *klass;
  struct MonitorData *monitor;
  struct PositionAtEndOfTextBox__Fields fields;
};
struct PositionAtEndOfTextBox__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PositionAtEndOfTextBox__StaticFields {
};
struct PositionAtEndOfTextBox__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PositionAtEndOfTextBox__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PositionAtEndOfTextBox__VTable vtable;
};

enum Input_Command__Enum : int32_t {
  Input_Command__Enum_Unassigned = 0,
  Input_Command__Enum_Jump = 1,
  Input_Command__Enum_Interact = 2,
  Input_Command__Enum_Ability1 = 3,
  Input_Command__Enum_Ability2 = 4,
  Input_Command__Enum_Ability3 = 5,
  Input_Command__Enum_Glide = 6,
  Input_Command__Enum_Grab = 7,
  Input_Command__Enum_Dash = 8,
  Input_Command__Enum_Burrow = 9,
  Input_Command__Enum_Bash = 10,
  Input_Command__Enum_Grapple = 11,
  Input_Command__Enum_DialogueAdvance = 12,
  Input_Command__Enum_DialogueOption1 = 13,
  Input_Command__Enum_DialogueOption2 = 14,
  Input_Command__Enum_DialogueOption3 = 15,
  Input_Command__Enum_DialogueExit = 16,
  Input_Command__Enum_OpenLastMapShardsInventory = 17,
  Input_Command__Enum_OpenInventory = 18,
  Input_Command__Enum_OpenWorldMap = 19,
  Input_Command__Enum_OpenAreaMap = 20,
  Input_Command__Enum_OpenShardsScreen = 21,
  Input_Command__Enum_OpenWeaponWheel = 22,
  Input_Command__Enum_OpenPauseScreen = 23,
  Input_Command__Enum_OpenLiveSignIn = 24,
  Input_Command__Enum_MenuSelect = 25,
  Input_Command__Enum_MenuBack = 26,
  Input_Command__Enum_MenuClose = 27,
  Input_Command__Enum_MenuPageLeft = 28,
  Input_Command__Enum_MenuPageRight = 29,
  Input_Command__Enum_LeaderboardCycleFilter = 30,
  Input_Command__Enum_MapZoomIn = 31,
  Input_Command__Enum_MapZoomOut = 32,
  Input_Command__Enum_MapFilter = 33,
  Input_Command__Enum_MapDetails = 34,
  Input_Command__Enum_MapFocusOri = 35,
  Input_Command__Enum_MapFocusObjective = 36,
  Input_Command__Enum_MainMenuSaveCopy = 37,
  Input_Command__Enum_MainMenuSaveDelete = 38,
};
struct Input_Command__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Input_Command__Enum value;
};
struct PurchaseThingScreen__Fields {
  struct MenuScreenStack__Fields _;
  enum Input_Command__Enum PurchaseButton;
  struct AnimationCurve * PurchaseAnimationCurve;
  float PurchaseTime;
  struct GameObject * PurchaseEffect;
  float PurchaseProgress;
  float PurchaseCooldown;
  float m_lastPurchase;
  bool PressFailed;
};
struct PurchaseThingScreen {
  struct PurchaseThingScreen__Class *klass;
  struct MonitorData *monitor;
  struct PurchaseThingScreen__Fields fields;
};
struct SpiritShardsShopScreen_HintsSettings {
  struct GameObject * MessagePrefab;
  struct Transform * MessageAnchor;
  float MessageDuration;
  struct MessageProvider * GlobalShardEquipFailure;
  struct MessageProvider * AlreadyOwnItem;
  struct MessageProvider * NotEnoughSpiritLight;
  struct MessageProvider * Undiscovered;
  struct MessageProvider * ShardTraderUpgradeRequired;
};
struct SpiritShardsShopScreen_HintsSettings__Boxed {
  struct SpiritShardsShopScreen_HintsSettings__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardsShopScreen_HintsSettings fields;
};
struct SpiritShardsShopScreen__Fields {
  struct PurchaseThingScreen__Fields _;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * m_bindingsCanvas;
  struct GameObject * ShardDetailsCanvasPrefab;
  struct Transform * AnchorItemDetails;
  struct SpiritShardUIShardDetails * m_shardDetailsCanvas;
  struct SerializedByteUberState * PurchaseCount;
  struct GameObject * SpellItemPrefab;
  struct GameObject * ShardItemPrefab;
  struct GameObject * ItemHighlightGO;
  struct GameObject * ConfirmationOverlayPrefab;
  struct SpiritShardUIConfirmationOverlay * m_confirmationOverlay;
  struct EquipmentUIInventoryGrid * Grid;
  bool PurchasedShard;
  bool RequireOwned;
  bool m_isHiding;
  struct SpiritShardsShopScreen_HintsSettings Hints;
  struct SpiritShardUIItem * m_confirmContextShard;
  struct SpiritShardShopUIItem_Context * m_spiritShardUIContext;
  struct MessageBox * m_currentHint;
  struct PlayerUberStateShards_Shard * m_autoFocusShard;
  bool m_isInited;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct SpiritShardsShopScreen {
  struct SpiritShardsShopScreen__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardsShopScreen__Fields fields;
};
struct SpiritShardUIShardDetails__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * IconGO;
  struct GameObject * NameGO;
  struct GameObject * DescriptionGO;
  struct GameObject * UpgradableGO;
  struct GameObject * NotUpgradableGO;
  struct GameObject * TooExpensiveGO;
  struct GameObject * UpgradeGO;
  struct GameObject * UpgradeAmountGO;
  struct GameObject * UpgradeSpiritLightGO;
  struct GameObject * LevelGO;
  struct GameObject * LevelNextGO;
  struct GameObject * LevelNextDescriptionGO;
  struct SpiritShardUIShardBackdrop * Background;
  struct SpiritShardUIShardFloatingTooltip * Tooltip;
  struct GameObject * EquipStatusPrefab;
  struct Transform * AnchorEquipStatus;
  struct SpellUIShardEquipStatus * m_equipStatus;
  struct MessageProvider * UpgradeHeaderMessage;
  struct MessageProvider * UpgradeAmountMessage;
  struct Color UpgradeTextColor;
  struct Color TooExpensiveColor;
  bool ShowEquipStatus;
  bool RequireOwned;
  bool ShowUpgradeCost;
  bool ColorByPurchasable;
  struct MessageProvider * Level;
  struct MessageProvider * NextLevel;
  struct MessageProvider * MaxLevel;
  struct MessageProvider * LockedName;
  struct MessageProvider * LockedDescription;
  struct PlayerUberStateShards_Shard * m_item;
  bool m_dirty;
};
struct SpiritShardUIShardDetails {
  struct SpiritShardUIShardDetails__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIShardDetails__Fields fields;
};
struct SpiritShardUIShardBackdrop__Fields {
  struct MonoBehaviour__Fields _;
  struct Texture__Array * Socket_0;
  struct Texture__Array * Socket_1;
  struct Texture__Array * Socket_2;
  struct Texture__Array * Socket_3;
  struct Texture__Array * Socket_4;
  struct Texture__Array * Socket_5;
};
struct SpiritShardUIShardBackdrop {
  struct SpiritShardUIShardBackdrop__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIShardBackdrop__Fields fields;
};
struct Texture__Array {
  struct Texture__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Texture * vector[32];
};
struct SpiritShardUIShardFloatingTooltip__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 Offset;
  struct GameObject * AnchorObject;
  struct GameObject * AmountGO;
  struct MessageProvider * XpFormatMessage;
};
struct SpiritShardUIShardFloatingTooltip {
  struct SpiritShardUIShardFloatingTooltip__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIShardFloatingTooltip__Fields fields;
};
struct SpellUIShardEquipStatus__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Pivot;
  struct GameObject * TextDescription;
  struct GameObject * TextName;
  struct GameObject * Icon;
  struct MessageProvider * Description;
  struct Color ColorDescription;
  struct Color ColorName;
  enum EquipmentType__Enum m_equipment;
};
struct SpellUIShardEquipStatus {
  struct SpellUIShardEquipStatus__Class *klass;
  struct MonitorData *monitor;
  struct SpellUIShardEquipStatus__Fields fields;
};
enum SpiritShardUIConfirmationOverlay_Context__Enum : int32_t {
  SpiritShardUIConfirmationOverlay_Context__Enum_None = 0,
  SpiritShardUIConfirmationOverlay_Context__Enum_UpgradeShard = 1,
  SpiritShardUIConfirmationOverlay_Context__Enum_AddShardSocket = 2,
  SpiritShardUIConfirmationOverlay_Context__Enum_MoveShard = 3,
};
struct SpiritShardUIConfirmationOverlay_Context__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiritShardUIConfirmationOverlay_Context__Enum value;
};
struct SpiritShardUIConfirmationOverlay__Fields {
  struct MenuScreen__Fields _;
  struct VerticalSpacer * Spacer;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * TextTitle;
  struct GameObject * TextDescription;
  struct SpellUIShardEquipStatus * EquipStatus;
  struct MessageProvider * MessagePurchaseShardTitle;
  enum SpiritShardUIConfirmationOverlay_Context__Enum m_context;
  struct Action_1_SpiritShardUIConfirmationOverlay_Selection_ * OnSelected;
};
struct SpiritShardUIConfirmationOverlay {
  struct SpiritShardUIConfirmationOverlay__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIConfirmationOverlay__Fields fields;
};
struct Action_1_SpiritShardUIConfirmationOverlay_Selection___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_SpiritShardUIConfirmationOverlay_Selection_ {
  struct Action_1_SpiritShardUIConfirmationOverlay_Selection___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_SpiritShardUIConfirmationOverlay_Selection___Fields fields;
};
enum SpiritShardUIConfirmationOverlay_Selection__Enum : int32_t {
  SpiritShardUIConfirmationOverlay_Selection__Enum_OK = 0,
  SpiritShardUIConfirmationOverlay_Selection__Enum_Cancel = 1,
};
struct SpiritShardUIConfirmationOverlay_Selection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiritShardUIConfirmationOverlay_Selection__Enum value;
};
struct SpiritShardUIItem__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * IconGO;
  struct GameObject * EquippedGO;
  struct GameObject * NewGO;
  struct GameObject * NotCollectedGO;
  struct GameObject * UpgradableGO;
  struct GameObject * NotUpgradableGO;
  struct SpiritShardUIShardBackdrop * Background;
  struct SpiritShardUIShardUpgradeFill * Fill;
  struct GameObject * UnknownGO;
  struct GameObject * LockedGO;
  struct Color NormalColor;
  struct Color UpgradableColor;
  struct PlayerUberStateShards_Shard * m_spiritShard;
  bool RequireOwned;
  bool PurchaseRules;
};
struct SpiritShardUIItem {
  struct SpiritShardUIItem__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIItem__Fields fields;
};
struct SpiritShardUIShardUpgradeFill__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector2 OffsetMax;
  struct Vector2 OffsetMin;
  float m_lastFill;
  float m_lastTime;
};
struct SpiritShardUIShardUpgradeFill {
  struct SpiritShardUIShardUpgradeFill__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIShardUpgradeFill__Fields fields;
};
struct __declspec(align(8)) SpiritShardShopUIItem_Context__Fields {
  bool Passive;
  enum EquipmentType__Enum CompatibleEquipment;
};
struct SpiritShardShopUIItem_Context {
  struct SpiritShardShopUIItem_Context__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardShopUIItem_Context__Fields fields;
};
struct SpiritShardUIShardBackdrop__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardUIShardBackdrop__StaticFields {
};
struct SpiritShardUIShardBackdrop__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIShardBackdrop__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIShardBackdrop__VTable vtable;
};
struct SpiritShardUIShardFloatingTooltip__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardUIShardFloatingTooltip__StaticFields {
};
struct SpiritShardUIShardFloatingTooltip__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIShardFloatingTooltip__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIShardFloatingTooltip__VTable vtable;
};
struct SpellUIShardEquipStatus__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIShardEquipStatus__StaticFields {
};
struct SpellUIShardEquipStatus__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIShardEquipStatus__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIShardEquipStatus__VTable vtable;
};
struct SpiritShardUIShardDetails__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardUIShardDetails__StaticFields {
};
struct SpiritShardUIShardDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIShardDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIShardDetails__VTable vtable;
};
struct Action_1_SpiritShardUIConfirmationOverlay_Selection___VTable {
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
struct Action_1_SpiritShardUIConfirmationOverlay_Selection___StaticFields {
};
struct Action_1_SpiritShardUIConfirmationOverlay_Selection___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_SpiritShardUIConfirmationOverlay_Selection___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_SpiritShardUIConfirmationOverlay_Selection___VTable vtable;
};
struct SpiritShardUIConfirmationOverlay__VTable {
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
struct SpiritShardUIConfirmationOverlay__StaticFields {
};
struct SpiritShardUIConfirmationOverlay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIConfirmationOverlay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIConfirmationOverlay__VTable vtable;
};
struct SpiritShardsShopScreen_HintsSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardsShopScreen_HintsSettings__StaticFields {
};
struct SpiritShardsShopScreen_HintsSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsShopScreen_HintsSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsShopScreen_HintsSettings__VTable vtable;
};
struct SpiritShardUIShardUpgradeFill__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardUIShardUpgradeFill__StaticFields {
};
struct SpiritShardUIShardUpgradeFill__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIShardUpgradeFill__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIShardUpgradeFill__VTable vtable;
};
struct SpiritShardUIItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct SpiritShardUIItem__StaticFields {
};
struct SpiritShardUIItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIItem__VTable vtable;
};
struct SpiritShardShopUIItem_Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardShopUIItem_Context__StaticFields {
};
struct SpiritShardShopUIItem_Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardShopUIItem_Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardShopUIItem_Context__VTable vtable;
};
struct SpiritShardsShopScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_NavigationManager;
  VirtualInvokeData get_EffectTarget;
  VirtualInvokeData get_PurchaseCompleteSound;
  VirtualInvokeData get_PurchaseBeginSound;
  VirtualInvokeData get_PurchaseRTPC;
  VirtualInvokeData PurchaseInput;
  VirtualInvokeData PurchaseBegin;
  VirtualInvokeData PurchaseUpdate;
  VirtualInvokeData CanPurchase;
  VirtualInvokeData CompletePurchase;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
};
struct SpiritShardsShopScreen__StaticFields {
  struct SpiritShardsShopScreen * Instance;
};
struct SpiritShardsShopScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsShopScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsShopScreen__VTable vtable;
};}