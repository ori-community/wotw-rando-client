namespace app {
struct Dictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___StaticFields {
};

struct Dictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___VTable vtable;
};

struct EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData EnsureListMatchesEnum;
};

struct EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___StaticFields {
};

struct EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons___VTable vtable;
};

struct SpiritShardIconsCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData EnsureListMatchesEnum;
};

struct SpiritShardIconsCollection__StaticFields {
};

struct SpiritShardIconsCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardIconsCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardIconsCollection__VTable vtable;
};

struct SpiritShardPickupPlaceholder__Fields {
    struct CollectablePlaceholder__Fields _;
    SpiritShardType__Enum SpiritShardType;
    
};

struct SpiritShardPickupPlaceholder {
    struct SpiritShardPickupPlaceholder__Class *klass;
    MonitorData *monitor;
    struct SpiritShardPickupPlaceholder__Fields fields;
};

struct SpiritShardPickupPlaceholder__VTable {
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
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData OnInstantiate;
};

struct SpiritShardPickupPlaceholder__StaticFields {
};

struct SpiritShardPickupPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardPickupPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardPickupPlaceholder__VTable vtable;
};

struct SpiritShardPrefabs__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *FireShardEffect;
    struct GameObject *ExplosionEffect;
    struct GameObject *HealthOrb;
    struct GameObject *CounterstrikeEffectPrefab;
    struct GameObject *ChainLightningEffectPrefab;
    struct GameObject *UltraLeashDamageEffectPrefab;
    struct GameObject *MirrorStrikeEffectPrefab;
    struct GameObject *RickochetBounceFX;
    struct GameObject *RickochetBonusDamageHitFX;
    struct GameObject *LastResortActivateFX;
    struct GameObject *RecklessActivateFX;
    struct GameObject *UntouchableActivateFX;
    struct GameObject *ChainLightningControllerPrefab;
    struct EffectSpawn RecklessReceiveDamageEffect;
    struct EffectSpawn DamageBoostEffect;
    struct EffectSpawn CombatLuck;
    struct GameObject *RecklessDealDamageFX;
};

struct SpiritShardPrefabs {
    struct SpiritShardPrefabs__Class *klass;
    MonitorData *monitor;
    struct SpiritShardPrefabs__Fields fields;
};

struct SpiritShardPrefabs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardPrefabs__StaticFields {
};

struct SpiritShardPrefabs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardPrefabs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardPrefabs__VTable vtable;
};

struct SpiritShardSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct SpiritShardIconsCollection *Icons;
    struct SpiritShardDescriptionCollection *Descriptions;
    struct SpiritShardPrefabs *Prefabs;
    struct MessageProvider *AlreadyOwnedText;
};

struct SpiritShardSettings {
    struct SpiritShardSettings__Class *klass;
    MonitorData *monitor;
    struct SpiritShardSettings__Fields fields;
};

struct SpiritShardSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardSettings__StaticFields {
    struct SpiritShardSettings *Instance;
    bool s_combatShardVFXEnabled;
    bool HasInstance;
};

struct SpiritShardSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardSettings__VTable vtable;
};

struct SpiritShardTypeListProvider {
    struct SpiritShardTypeListProvider__Class *klass;
    MonitorData *monitor;
};

struct SpiritShardTypeListProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardTypeListProvider__StaticFields {
    struct SpiritShardType__Enum__Array *m_shardsList;
};

struct SpiritShardTypeListProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardTypeListProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardTypeListProvider__VTable vtable;
};

struct SpiritShardTypeListProvider_c {
    struct SpiritShardTypeListProvider_c__Class *klass;
    MonitorData *monitor;
};

struct Func_2_SpiritShardType_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_SpiritShardType_Boolean_ {
    struct Func_2_SpiritShardType_Boolean___Class *klass;
    MonitorData *monitor;
    struct Func_2_SpiritShardType_Boolean___Fields fields;
};

struct Func_2_SpiritShardType_Boolean___VTable {
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

struct Func_2_SpiritShardType_Boolean___StaticFields {
};

struct Func_2_SpiritShardType_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_SpiritShardType_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_SpiritShardType_Boolean___VTable vtable;
};

struct SpiritShardTypeListProvider_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardTypeListProvider_c__StaticFields {
    struct SpiritShardTypeListProvider_c *__9;
    struct Func_2_SpiritShardType_Boolean_ *__9__1_0;
};

struct SpiritShardTypeListProvider_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardTypeListProvider_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardTypeListProvider_c__VTable vtable;
};

struct SpiritShardShopUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject *CostGO;
    struct GameObject *SpiritLightGO;
    struct SpiritShardUIItem *Shard;
    struct GameObject *AlreadyOwnedGO;
    struct GameObject *PurchasableGO;
    struct GameObject *NotPurchasableGO;
    struct Color UnpurchaseableColor;
    struct Color PurchasableColor;
    struct MessageProvider *PriceMessageProvider;
    struct PlayerUberStateShards_Shard *m_spiritShard;
};

struct SpiritShardShopUIItem {
    struct SpiritShardShopUIItem__Class *klass;
    MonitorData *monitor;
    struct SpiritShardShopUIItem__Fields fields;
};

struct SpiritShardShopUIItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetItemContext;
    VirtualInvokeData OnItemContextDirty;
    VirtualInvokeData SetSelected;
};

struct SpiritShardShopUIItem__StaticFields {
};

struct SpiritShardShopUIItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardShopUIItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardShopUIItem__VTable vtable;
};

struct SpiritShardShopUIShardDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *IconGO;
    struct GameObject *NameGO;
    struct GameObject *DescriptionGO;
    struct GameObject *UpgradableGO;
    struct GameObject *TooExpensiveGO;
    struct GameObject *EquipStatusPrefab;
    struct Transform *AnchorEquipStatus;
    struct SpellUIShardEquipStatus *m_equipStatus;
    struct MessageProvider *UpgradeHeaderMessage;
    struct Color UpgradeTextColor;
    struct Color TooExpensiveTextColor;
    bool ShowUpgradeRow;
    bool ShowEquipStatus;
    struct MessageProvider *LockedName;
    struct MessageProvider *LockedDescription;
    struct PlayerUberStateShards_Shard *m_item;
    bool m_dirty;
};

struct SpiritShardShopUIShardDetails {
    struct SpiritShardShopUIShardDetails__Class *klass;
    MonitorData *monitor;
    struct SpiritShardShopUIShardDetails__Fields fields;
};

struct SpiritShardShopUIShardDetails__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardShopUIShardDetails__StaticFields {
};

struct SpiritShardShopUIShardDetails__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardShopUIShardDetails__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardShopUIShardDetails__VTable vtable;
};

struct SpiritShardShopUISubItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject *IconGO;
    struct GameObject *CostGO;
    struct PlayerUberStateShards_Shard *m_spiritShard;
};

struct SpiritShardShopUISubItem {
    struct SpiritShardShopUISubItem__Class *klass;
    MonitorData *monitor;
    struct SpiritShardShopUISubItem__Fields fields;
};

struct SpiritShardShopUISubItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetItemContext;
    VirtualInvokeData OnItemContextDirty;
    VirtualInvokeData SetSelected;
};

struct SpiritShardShopUISubItem__StaticFields {
};

struct SpiritShardShopUISubItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardShopUISubItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardShopUISubItem__VTable vtable;
};

struct __declspec(align(8)) SpiritShardShopUISubItem_Context__Fields {
    bool Passive;
    EquipmentType__Enum CompatibleEquipment;
    
};

struct SpiritShardShopUISubItem_Context {
    struct SpiritShardShopUISubItem_Context__Class *klass;
    MonitorData *monitor;
    struct SpiritShardShopUISubItem_Context__Fields fields;
};

struct SpiritShardShopUISubItem_Context__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardShopUISubItem_Context__StaticFields {
};

struct SpiritShardShopUISubItem_Context__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardShopUISubItem_Context__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardShopUISubItem_Context__VTable vtable;
};

struct SpiritShardsScreen_HintsSettings {
    struct GameObject *MessagePrefab;
    struct Transform *MessageAnchor;
    float MessageDuration;
    struct MessageProvider *GlobalShardEquipFailure;
    struct MessageProvider *NoUpgradeAvailable;
    struct MessageProvider *NotEnoughSpiritLight;
    struct MessageProvider *AllSocketsAreFull;
    struct MessageProvider *CantSocketSelectedEquipment;
};

struct SpiritShardsScreen_HintsSettings__Boxed {
    struct SpiritShardsScreen_HintsSettings__Class *klass;
    MonitorData *monitor;
    struct SpiritShardsScreen_HintsSettings fields;
};

struct SpiritShardsScreen__Fields {
    struct MenuScreenStack__Fields _;
    struct MoonTimelineUiFader *UiFader;
    struct EventTriggerAnimator *GCTrigger;
    struct GameObject *ShardSocketCanvas;
    struct Transform *AnchorCategoryContext;
    struct GameObject *m_bindingsCanvas;
    struct SpellUIPassiveShards *m_socketCanvas;
    struct SpiritShardUIShardFloatingTooltip *Tooltip;
    struct GameObject *ShardDetailsCanvasPrefab;
    struct Transform *AnchorItemDetails;
    struct SpiritShardUIShardDetails *m_shardDetailsCanvas;
    struct GameObject *ShardItemPrefab;
    struct GameObject *ItemHighlightGO;
    struct GameObject *ItemHighlightNormalGO;
    struct GameObject *ItemHighlightUpgradableGO;
    struct Transform *AnchorExperience;
    struct SpellUIExperience *m_experience;
    struct GameObject *ConfirmationOverlayPrefab;
    struct SpellUIConfirmationOverlay *m_confirmationOverlay;
    struct EquipmentUIInventoryGrid *Grid;
    MenuTabBackground__Enum Background;
    
    bool m_isHiding;
    struct SpiritShardsScreen_HintsSettings Hints;
    struct SpiritShardUIItem *m_confirmContextShardUIItem;
    struct PlayerUberStateShards_Shard *m_confirmContextShard;
    struct SpiritShardUIItem *m_selectedShard;
    struct SpiritShardUIItem_Context *m_spiritShardUIContext;
    struct MessageBox *m_currentHint;
    struct PlayerUberStateShards_Shard *m_autoFocusShard;
    bool m_isInited;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    float UpgradeTime;
    struct GameObject *UpgradeEffect;
    float UpgradeProgress;
    float m_lastPurchaseTime;
    float UpgradeCooldown;
    struct AnimationCurve *PurchaseAnimationCurve;
};

struct SpiritShardsScreen {
    struct SpiritShardsScreen__Class *klass;
    MonitorData *monitor;
    struct SpiritShardsScreen__Fields fields;
};

struct SpiritShardsScreen_HintsSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardsScreen_HintsSettings__StaticFields {
};

struct SpiritShardsScreen_HintsSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardsScreen_HintsSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardsScreen_HintsSettings__VTable vtable;
};

struct SpiritShardsScreen__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Show;
    VirtualInvokeData Hide;
    VirtualInvokeData ShowImmediate;
    VirtualInvokeData HideImmediate;
    VirtualInvokeData PlaySoundEvent;
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

struct SpiritShardsScreen__StaticFields {
    struct SpiritShardsScreen *Instance;
};

struct SpiritShardsScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardsScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardsScreen__VTable vtable;
};

struct __declspec(align(8)) SpiritShardsScreen_c_DisplayClass77_0__Fields {
    struct PlayerUberStateShards_Shard *item;
};

struct SpiritShardsScreen_c_DisplayClass77_0 {
    struct SpiritShardsScreen_c_DisplayClass77_0__Class *klass;
    MonitorData *monitor;
    struct SpiritShardsScreen_c_DisplayClass77_0__Fields fields;
};

struct SpiritShardsScreen_c_DisplayClass77_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardsScreen_c_DisplayClass77_0__StaticFields {
};

struct SpiritShardsScreen_c_DisplayClass77_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardsScreen_c_DisplayClass77_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardsScreen_c_DisplayClass77_0__VTable vtable;
};

struct SpiritShardsScreen_c {
    struct SpiritShardsScreen_c__Class *klass;
    MonitorData *monitor;
};

struct SpiritShardsScreen_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardsScreen_c__StaticFields {
    struct SpiritShardsScreen_c *__9;
    struct Predicate_1_CleverMenuItem_ *__9__78_0;
};

struct SpiritShardsScreen_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardsScreen_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardsScreen_c__VTable vtable;
};

struct __declspec(align(8)) SpiritShardsShopScreen_c_DisplayClass63_0__Fields {
    struct PlayerUberStateShards_Shard *item;
};

struct SpiritShardsShopScreen_c_DisplayClass63_0 {
    struct SpiritShardsShopScreen_c_DisplayClass63_0__Class *klass;
    MonitorData *monitor;
    struct SpiritShardsShopScreen_c_DisplayClass63_0__Fields fields;
};

struct SpiritShardsShopScreen_c_DisplayClass63_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardsShopScreen_c_DisplayClass63_0__StaticFields {
};

struct SpiritShardsShopScreen_c_DisplayClass63_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardsShopScreen_c_DisplayClass63_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardsShopScreen_c_DisplayClass63_0__VTable vtable;
};

struct SpiritShardsShopScreen_c {
    struct SpiritShardsShopScreen_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_Object_ {
    struct Comparison_1_Object___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_Object___Fields fields;
};

struct Comparison_1_Object___VTable {
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

struct Comparison_1_Object___StaticFields {
};

struct Comparison_1_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_Object___VTable vtable;
};

struct SpiritShardsShopScreen_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardsShopScreen_c__StaticFields {
    struct SpiritShardsShopScreen_c *__9;
    struct Predicate_1_CleverMenuItem_ *__9__64_0;
    struct Comparison_1_Object_ *__9__68_0;
};

struct SpiritShardsShopScreen_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardsShopScreen_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardsShopScreen_c__VTable vtable;
};

struct SpiritShardUIConfirmationOverlay_c {
    struct SpiritShardUIConfirmationOverlay_c__Class *klass;
    MonitorData *monitor;
};

struct SpiritShardUIConfirmationOverlay_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardUIConfirmationOverlay_c__StaticFields {
    struct SpiritShardUIConfirmationOverlay_c *__9;
    struct Action_1_SpiritShardUIConfirmationOverlay_Selection_ *__9__22_0;
};

struct SpiritShardUIConfirmationOverlay_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardUIConfirmationOverlay_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardUIConfirmationOverlay_c__VTable vtable;
};

struct SpiritShardUIStarRow__Fields {
    struct MonoBehaviour__Fields _;
    float StepX;
    struct GameObject *IconTemplate;
};

struct SpiritShardUIStarRow {
    struct SpiritShardUIStarRow__Class *klass;
    MonitorData *monitor;
    struct SpiritShardUIStarRow__Fields fields;
};

struct SpiritShardUIStarRow__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiritShardUIStarRow__StaticFields {
};

struct SpiritShardUIStarRow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritShardUIStarRow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritShardUIStarRow__VTable vtable;
};

struct StatisticsManager__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_StatisticsManager_StatStateEntry_ *m_statEntries;
    struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ *m_quickAccesDictionary;
    struct List_1_StatSetting_ *m_statSettings;
    struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ *m_dirtyStates;
    struct Vector3 m_seinPosition;
    float m_distanceTraveled;
    struct PlayerUberStateDescriptor *PlayerUberStateDescriptor;
    struct UberStateGroup *StatisticsStateGroup;
};

struct StatisticsManager {
    struct StatisticsManager__Class *klass;
    MonitorData *monitor;
    struct StatisticsManager__Fields fields;
};

struct __declspec(align(8)) List_1_StatisticsManager_StatStateEntry___Fields {
    struct StatisticsManager_StatStateEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_StatisticsManager_StatStateEntry_ {
    struct List_1_StatisticsManager_StatStateEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_StatisticsManager_StatStateEntry___Fields fields;
};

enum class StatisticsManager_StatType__Enum : int32_t {
    TotalPlaytime = 0x00000064,
    Completion = 0x00000065,
    DeathTotalCount = 0x00000066,
    DeathFromDrowningCount = 0x00000067,
    DeathFromEnemiesCount = 0x00000068,
    DeathFromEnviromentCount = 0x00000069,
    TotalDamageTaken = 0x0000006a,
    EnemiesDefeated = 0x000000c8,
    FavoriteCombatSkill = 0x000000c9,
    TotalEnergySpent = 0x000000ca,
    TotalHealthRegenerated = 0x000000cb,
    TopTarget = 0x000000cc,
    TopRival = 0x000000cd,
    EnemyVsEnemyKills = 0x000000ce,
    SkillsUpgrades = 0x000000cf,
    HighestAmountOfDamage = 0x000000d0,
    JumpCount = 0x0000012c,
    WallJumpCount = 0x0000012d,
    DashCount = 0x0000012e,
    BashCount = 0x0000012f,
    BashAirComboCount = 0x00000130,
    LeashesCount = 0x00000131,
    DistanceTraveled = 0x00000132,
    DistanceSwam = 0x00000133,
    DistanceBurrowed = 0x00000134,
    DistanceGliding = 0x00000135,
    DistanceFalling = 0x00000136,
    GlowActiveTime = 0x00000137,
    AirTime = 0x00000138,
    TopAirTime = 0x00000139,
    TopAirDistance = 0x0000013a,
    FastTravelCount = 0x0000013b,
    TotalSpiritLightCollected = 0x00000190,
    TotalSpiritLightSpent = 0x00000191,
    SkillsGathered = 0x00000192,
    LifeCellsCollected = 0x00000193,
    EnergyCellsCollected = 0x00000194,
    ShardSlotExpansionsCollected = 0x00000195,
    ShardsCollected = 0x00000196,
    SpiritWellsDiscovered = 0x00000197,
    RacePedestalsActivated = 0x00000198,
    ShrinesDiscovered = 0x00000199,
    ShrinesCompleated = 0x0000019a,
    RacesCompleated = 0x0000019b,
    ShardsUpgradeProgression = 0x0000019c,
    NPCsInHub = 0x000001f4,
    SideQUestsCompleated = 0x000001f5,
    HubProgression = 0x000001f6,
    GardenerSeedsCollected = 0x000001f7,
};

struct StatisticsManager_StatType__Enum__Boxed {
    struct StatisticsManager_StatType__Enum__Class *klass;
    MonitorData *monitor;
    StatisticsManager_StatType__Enum value;
    
};

struct __declspec(align(8)) StatisticsManager_StatStateEntry__Fields {
    StatisticsManager_StatType__Enum StatType;
    
    struct StatSetting *StatAsset;
};

struct StatisticsManager_StatStateEntry {
    struct StatisticsManager_StatStateEntry__Class *klass;
    MonitorData *monitor;
    struct StatisticsManager_StatStateEntry__Fields fields;
};

enum class StatSetting_StatDisplayCategory__Enum : int32_t {
    General = 0x00000000,
    Combat = 0x00000001,
    Platforming = 0x00000002,
    Collectibles = 0x00000003,
    Story = 0x00000004,
    COUNT = 0x00000005,
};

struct StatSetting_StatDisplayCategory__Enum__Boxed {
    struct StatSetting_StatDisplayCategory__Enum__Class *klass;
    MonitorData *monitor;
    StatSetting_StatDisplayCategory__Enum value;
    
};

enum class StatSetting_StatSource__Enum : int32_t {
    UberState = 0x00000000,
    Condition = 0x00000001,
    Special_Compleation = 0x00000002,
    Special_FavoriteCombatSkill = 0x00000003,
    Special_TopTarget = 0x00000004,
    Special_TopRival = 0x00000005,
    Special_SkillsUpgrades = 0x00000006,
    Special_SkillsGathered = 0x00000007,
    Special_ShardSlotsCollected = 0x00000008,
    Special_ShardsCollected = 0x00000009,
    Special_ShrinesDiscovered = 0x0000000a,
    Special_ShrinesCompleated = 0x0000000b,
    Special_RacesCompleated = 0x0000000c,
    Special_ShardsUpgraded = 0x0000000d,
    Special_TotalPlaytime = 0x0000000e,
    Special_Progression = 0x0000000f,
    Special_HealthContainersProgress = 0x00000010,
    Special_EnergyContainerProgress = 0x00000011,
};

struct StatSetting_StatSource__Enum__Boxed {
    struct StatSetting_StatSource__Enum__Class *klass;
    MonitorData *monitor;
    StatSetting_StatSource__Enum value;
    
};

enum class StatSetting_StatFormat__Enum : int32_t {
    Int = 0x00000000,
    Decimal = 0x00000001,
    Time = 0x00000002,
    Distance = 0x00000003,
    EnemyEnum = 0x00000004,
    SkillEnum = 0x00000005,
    Percentage = 0x00000006,
    Fraction = 0x00000007,
};

struct StatSetting_StatFormat__Enum__Boxed {
    struct StatSetting_StatFormat__Enum__Class *klass;
    MonitorData *monitor;
    StatSetting_StatFormat__Enum value;
    
};

struct StatSetting__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider *Description;
    struct Texture2D *Icon;
    StatSetting_StatDisplayCategory__Enum Category;
    
    StatSetting_StatSource__Enum DataSource;
    
    StatSetting_StatFormat__Enum NumberFormat;
    
    struct MoonReference_1_IGenericUberState_ *UberState;
    struct ConditionUberState *StatUnlocked;
    struct StatSettingStrings *Settings;
};

struct StatSetting {
    struct StatSetting__Class *klass;
    MonitorData *monitor;
    struct StatSetting__Fields fields;
};

struct StatSettingStrings__Fields {
    struct ScriptableObject__Fields _;
    struct StatSettingStrings_EnemyLabels__Array *EnemyEnumLabels;
    struct StatSettingStrings_EquipmentLabels__Array *AbilityEnumLabels;
};

struct StatSettingStrings {
    struct StatSettingStrings__Class *klass;
    MonitorData *monitor;
    struct StatSettingStrings__Fields fields;
};

enum class StatSettingStrings_EnemyEnum__Enum : int32_t {
    Slug = 0x00000000,
    Miner = 0x00000001,
    Mantis = 0x00000002,
};

struct StatSettingStrings_EnemyEnum__Enum__Boxed {
    struct StatSettingStrings_EnemyEnum__Enum__Class *klass;
    MonitorData *monitor;
    StatSettingStrings_EnemyEnum__Enum value;
    
};

struct StatSettingStrings_EnemyLabels {
    StatSettingStrings_EnemyEnum__Enum Enemy;
    
    struct MessageProvider *EnemyName;
};

struct StatSettingStrings_EnemyLabels__Boxed {
    struct StatSettingStrings_EnemyLabels__Class *klass;
    MonitorData *monitor;
    struct StatSettingStrings_EnemyLabels fields;
};

struct StatSettingStrings_EnemyLabels__Array {
    struct StatSettingStrings_EnemyLabels__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StatSettingStrings_EnemyLabels vector[32];
};

struct StatSettingStrings_EquipmentLabels {
    EquipmentType__Enum Ability;
    
    struct MessageProvider *Label;
};

struct StatSettingStrings_EquipmentLabels__Boxed {
    struct StatSettingStrings_EquipmentLabels__Class *klass;
    MonitorData *monitor;
    struct StatSettingStrings_EquipmentLabels fields;
};

struct StatSettingStrings_EquipmentLabels__Array {
    struct StatSettingStrings_EquipmentLabels__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StatSettingStrings_EquipmentLabels vector[32];
};

}
