namespace app {
struct KeybindingCommandMapAsset_c_DisplayClass58_0__StaticFields {
};

struct KeybindingCommandMapAsset_c_DisplayClass58_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeybindingCommandMapAsset_c_DisplayClass58_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeybindingCommandMapAsset_c_DisplayClass58_0__VTable vtable;
};

struct __declspec(align(8)) KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Fields {
    int32_t __1__state;
    struct CommandBinding *__2__current;
    int32_t __l__initialThreadId;
    struct KeybindingCommandMapAsset *__4__this;
    struct FieldInfo_1__Array *__7__wrap1;
    int32_t __7__wrap2;
};

struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62 {
    struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class *klass;
    MonitorData *monitor;
    struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Fields fields;
};

struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_CommandBinding__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_CommandBinding__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__StaticFields {
};

struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__VTable vtable;
};

struct __declspec(align(8)) BuilderItem__Fields {
    struct NpcProjectItem *Project;
};

struct BuilderItem {
    struct BuilderItem__Class *klass;
    MonitorData *monitor;
    struct BuilderItem__Fields fields;
};

struct NpcProjectItem__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider *Name;
    struct MessageProvider *DiscoverProjectSiteMessage;
    struct MessageProvider *ProjectFinishedMessage;
    struct Texture2D *Icon;
    struct SerializedByteUberState *UberState;
    struct UpgradableProjectProperties__Array *LevelProperties;
    struct MoonTimeline *Timeline;
};

struct NpcProjectItem {
    struct NpcProjectItem__Class *klass;
    MonitorData *monitor;
    struct NpcProjectItem__Fields fields;
};

struct __declspec(align(8)) UpgradableProjectProperties__Fields {
    struct MessageProvider *Description;
    int32_t Cost;
};

struct UpgradableProjectProperties {
    struct UpgradableProjectProperties__Class *klass;
    MonitorData *monitor;
    struct UpgradableProjectProperties__Fields fields;
};

struct UpgradableProjectProperties__Array {
    struct UpgradableProjectProperties__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UpgradableProjectProperties *vector[32];
};

struct Action_1_MessageProvider___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_MessageProvider_ {
    struct Action_1_MessageProvider___Class *klass;
    MonitorData *monitor;
    struct Action_1_MessageProvider___Fields fields;
};

struct __declspec(align(8)) ShopKeeperHints__Fields {
    struct GameObject *MessagePrefab;
    struct Transform *MessageAnchor;
    float MessageDuration;
    struct MessageProvider *ShardNotDiscovered;
    struct MessageProvider *NoUpgradeAvailable;
    struct MessageProvider *NotEnoughSpiritLight;
    struct MessageProvider *NotEnoughOre;
    struct MessageProvider *IsLocked;
    struct MessageProvider *MaxedOut;
    struct MessageProvider *AlreadyOwned;
    struct MessageProvider *Undiscovered;
    struct MessageProvider *ShardTraderUpgradeRequired;
};

struct ShopKeeperHints {
    struct ShopKeeperHints__Class *klass;
    MonitorData *monitor;
    struct ShopKeeperHints__Fields fields;
};

enum class PurchaseResult__Enum : int32_t {
    None = 0x00000000,
    UsedUpDiscount = 0x00000001,
};

struct PurchaseResult__Enum__Boxed {
    struct PurchaseResult__Enum__Class *klass;
    MonitorData *monitor;
    PurchaseResult__Enum value;
    
};

struct PurchaseContext {
    PurchaseResult__Enum Result;
    
    bool ForceHideScreenOnPurchase;
};

struct PurchaseContext__Boxed {
    struct PurchaseContext__Class *klass;
    MonitorData *monitor;
    struct PurchaseContext fields;
};

struct UpgradableProjectProperties__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpgradableProjectProperties__StaticFields {
};

struct UpgradableProjectProperties__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradableProjectProperties__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradableProjectProperties__VTable vtable;
};

struct UpgradableProjectProperties__Array__VTable {
};

struct UpgradableProjectProperties__Array__StaticFields {
};

struct UpgradableProjectProperties__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradableProjectProperties__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradableProjectProperties__Array__VTable vtable;
};

struct NpcProjectItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NpcProjectItem__StaticFields {
};

struct NpcProjectItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NpcProjectItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NpcProjectItem__VTable vtable;
};

struct Action_1_MessageProvider___VTable {
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

struct Action_1_MessageProvider___StaticFields {
};

struct Action_1_MessageProvider___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_MessageProvider___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_MessageProvider___VTable vtable;
};

struct ShopKeeperHints__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShopKeeperHints__StaticFields {
};

struct ShopKeeperHints__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShopKeeperHints__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShopKeeperHints__VTable vtable;
};

struct PurchaseResult__Enum__VTable {
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

struct PurchaseResult__Enum__StaticFields {
};

struct PurchaseResult__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PurchaseResult__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PurchaseResult__Enum__VTable vtable;
};

struct PurchaseContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PurchaseContext__StaticFields {
};

struct PurchaseContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PurchaseContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PurchaseContext__VTable vtable;
};

struct PurchaseContext___VTable {
};

struct PurchaseContext___StaticFields {
};

struct PurchaseContext___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PurchaseContext___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PurchaseContext___VTable vtable;
};

struct BuilderItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ItemName;
    VirtualInvokeData get_ItemDescription;
    VirtualInvokeData get_ItemNextLevelDescription;
    VirtualInvokeData get_ItemIcon;
    VirtualInvokeData get_ShowNextLevel;
    VirtualInvokeData get_GameModeBasedCostMultiplier;
    VirtualInvokeData GetCostForLevel;
    VirtualInvokeData get_DisplayLevel;
    VirtualInvokeData get_ItemCurrentLevel;
    VirtualInvokeData get_ItemMaxLevel;
    VirtualInvokeData get_IsVisible;
    VirtualInvokeData get_IsLocked;
    VirtualInvokeData get_IsOwned;
    VirtualInvokeData get_IsAffordable;
    VirtualInvokeData get_IsMaxLevel;
    VirtualInvokeData get_UsesEnergy;
    VirtualInvokeData get_IsUpgradable;
    VirtualInvokeData TryPurchase;
    VirtualInvokeData DoPurchase;
};

struct BuilderItem__StaticFields {
};

struct BuilderItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuilderItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuilderItem__VTable vtable;
};

struct BuilderItem_c {
    struct BuilderItem_c__Class *klass;
    MonitorData *monitor;
};

struct BuilderItem_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BuilderItem_c__StaticFields {
    struct BuilderItem_c *__9;
    struct DelayedAction_Action *__9__36_0;
};

struct BuilderItem_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuilderItem_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuilderItem_c__VTable vtable;
};

struct ShopkeeperScreen__Fields {
    struct PurchaseThingScreen__Fields _;
    struct ShopkeeperScreen *_ShopInstance_k__BackingField;
    bool HideScreenAfterPurchase;
    struct LegacyTransparencyAnimator *FadeAnimator;
    struct GameObject *m_bindingsCanvas;
    struct GameObject *DetailsCanvasPrefab;
    struct Transform *AnchorItemDetails;
    struct ShopkeeperUIDetails *m_detailsCanvas;
    struct GameObject *ItemPrefab;
    struct GameObject *ItemHighlightGO;
    struct EquipmentUIInventoryGrid *Grid;
    bool SortedByCost;
    bool _PurchasedItem_k__BackingField;
    struct PurchaseContext PurchaseContext;
    bool m_isHiding;
    struct ShopKeeperHints *Hints2;
    struct MessageBox *m_currentHint;
    bool m_isInitiated;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct ShopkeeperScreen {
    struct ShopkeeperScreen__Class *klass;
    MonitorData *monitor;
    struct ShopkeeperScreen__Fields fields;
};

struct BuilderScreen__Fields {
    struct ShopkeeperScreen__Fields _;
    struct NpcProjectItem__Array *Projects;
    struct BuilderItem__Array *BuilderItems;
    struct NpcProjectItem *m_lastProject;
};

struct BuilderScreen {
    struct BuilderScreen__Class *klass;
    MonitorData *monitor;
    struct BuilderScreen__Fields fields;
};

struct ShopkeeperUIDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *IconGO;
    struct GameObject *NameGO;
    struct GameObject *DescriptionGO;
    struct GameObject *LockedGO;
    struct GameObject *UpgradableGO;
    struct GameObject *NotUpgradableGO;
    struct GameObject *TooExpensiveGO;
    struct GameObject *UpgradeGO;
    struct GameObject *UpgradeAmountGO;
    struct GameObject *UpgradeSpiritLightGO;
    struct GameObject *LevelGO;
    struct GameObject *LevelNextGO;
    struct GameObject *LevelNextDescriptionGO;
    struct GameObject *UsesEnergyGO;
    struct SpiritShardUIShardBackdrop *Background;
    struct SpiritShardUIShardFloatingTooltip *Tooltip;
    struct GameObject *EquipStatusPrefab;
    struct Transform *AnchorEquipStatus;
    struct SpellUIShardEquipStatus *m_equipStatus;
    struct MessageProvider *UpgradeHeaderMessage;
    struct MessageProvider *UpgradeAmountMessage;
    struct Color UpgradeTextColor;
    struct Color TooExpensiveColor;
    bool ShowEquipStatus;
    bool RequireOwned;
    bool ShowUpgradeCost;
    bool ColorByPurchasable;
    struct MessageProvider *Level;
    struct MessageProvider *NextLevel;
    struct MessageProvider *MaxLevel;
    struct MessageProvider *LockedName;
    struct MessageProvider *LockedDescription;
    struct ShopkeeperItem *m_item;
    bool m_dirty;
};

struct ShopkeeperUIDetails {
    struct ShopkeeperUIDetails__Class *klass;
    MonitorData *monitor;
    struct ShopkeeperUIDetails__Fields fields;
};

struct ShopkeeperItem {
    struct ShopkeeperItem__Class *klass;
    MonitorData *monitor;
};

struct ShopkeeperItem__Array {
    struct ShopkeeperItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ShopkeeperItem *vector[32];
};

struct NpcProjectItem__Array {
    struct NpcProjectItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NpcProjectItem *vector[32];
};

struct BuilderItem__Array {
    struct BuilderItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BuilderItem *vector[32];
};

struct ShopkeeperItem__VTable {
    VirtualInvokeData get_ItemName;
    VirtualInvokeData get_ItemDescription;
    VirtualInvokeData get_ItemNextLevelDescription;
    VirtualInvokeData get_ItemIcon;
    VirtualInvokeData get_ShowNextLevel;
    VirtualInvokeData get_GameModeBasedCostMultiplier;
    VirtualInvokeData GetCostForLevel;
    VirtualInvokeData get_DisplayLevel;
    VirtualInvokeData get_ItemCurrentLevel;
    VirtualInvokeData get_ItemMaxLevel;
    VirtualInvokeData get_IsVisible;
    VirtualInvokeData get_IsLocked;
    VirtualInvokeData get_IsOwned;
    VirtualInvokeData get_IsAffordable;
    VirtualInvokeData get_IsMaxLevel;
    VirtualInvokeData get_UsesEnergy;
    VirtualInvokeData get_IsUpgradable;
    VirtualInvokeData TryPurchase;
    VirtualInvokeData DoPurchase;
};

struct ShopkeeperItem__StaticFields {
};

struct ShopkeeperItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShopkeeperItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShopkeeperItem__VTable vtable;
};

struct ShopkeeperUIDetails__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShopkeeperUIDetails__StaticFields {
};

struct ShopkeeperUIDetails__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShopkeeperUIDetails__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShopkeeperUIDetails__VTable vtable;
};

struct ShopkeeperItem__Array__VTable {
};

struct ShopkeeperItem__Array__StaticFields {
};

struct ShopkeeperItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShopkeeperItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShopkeeperItem__Array__VTable vtable;
};

struct ShopkeeperScreen__VTable {
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
    VirtualInvokeData get_ShopInstance;
    VirtualInvokeData set_ShopInstance;
    VirtualInvokeData get_Items;
    VirtualInvokeData get_NeedsExperienceUI_1;
    VirtualInvokeData get_NeedOreUI_1;
    VirtualInvokeData AdditionalUpdate;
    VirtualInvokeData Init;
};

struct ShopkeeperScreen__StaticFields {
};

struct ShopkeeperScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShopkeeperScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShopkeeperScreen__VTable vtable;
};

struct NpcProjectItem__Array__VTable {
};

struct NpcProjectItem__Array__StaticFields {
};

struct NpcProjectItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NpcProjectItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NpcProjectItem__Array__VTable vtable;
};

struct BuilderItem__Array__VTable {
};

struct BuilderItem__Array__StaticFields {
};

struct BuilderItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuilderItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuilderItem__Array__VTable vtable;
};

struct BuilderScreen__VTable {
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
    VirtualInvokeData get_ShopInstance;
    VirtualInvokeData set_ShopInstance;
    VirtualInvokeData get_Items;
    VirtualInvokeData get_NeedsExperienceUI_1;
    VirtualInvokeData get_NeedOreUI_1;
    VirtualInvokeData AdditionalUpdate;
    VirtualInvokeData Init;
};

struct BuilderScreen__StaticFields {
    struct BuilderScreen *_Instance_k__BackingField;
};

struct BuilderScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuilderScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuilderScreen__VTable vtable;
};

struct NpcProject__Fields {
    struct MonoBehaviour__Fields _;
    struct NpcProjectItem *Project;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *Timeline;
};

struct NpcProject {
    struct NpcProject__Class *klass;
    MonitorData *monitor;
    struct NpcProject__Fields fields;
};

struct NpcProject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NpcProject__StaticFields {
};

struct NpcProject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NpcProject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NpcProject__VTable vtable;
};

struct __declspec(align(8)) GardenerItem__Fields {
    struct NpcProjectItem *Project;
};

struct GardenerItem {
    struct GardenerItem__Class *klass;
    MonitorData *monitor;
    struct GardenerItem__Fields fields;
};

struct GardenerItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ItemName;
    VirtualInvokeData get_ItemDescription;
    VirtualInvokeData get_ItemNextLevelDescription;
    VirtualInvokeData get_ItemIcon;
    VirtualInvokeData get_ShowNextLevel;
    VirtualInvokeData get_GameModeBasedCostMultiplier;
    VirtualInvokeData GetCostForLevel;
    VirtualInvokeData get_DisplayLevel;
    VirtualInvokeData get_ItemCurrentLevel;
    VirtualInvokeData get_ItemMaxLevel;
    VirtualInvokeData get_IsVisible;
    VirtualInvokeData get_IsLocked;
    VirtualInvokeData get_IsOwned;
    VirtualInvokeData get_IsAffordable;
    VirtualInvokeData get_IsMaxLevel;
    VirtualInvokeData get_UsesEnergy;
    VirtualInvokeData get_IsUpgradable;
    VirtualInvokeData TryPurchase;
    VirtualInvokeData DoPurchase;
};

struct GardenerItem__StaticFields {
};

struct GardenerItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GardenerItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GardenerItem__VTable vtable;
};

struct GardenerItem_c {
    struct GardenerItem_c__Class *klass;
    MonitorData *monitor;
};

struct GardenerItem_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GardenerItem_c__StaticFields {
    struct GardenerItem_c *__9;
    struct DelayedAction_Action *__9__36_0;
};

struct GardenerItem_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GardenerItem_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GardenerItem_c__VTable vtable;
};

struct GardenerScreen__Fields {
    struct ShopkeeperScreen__Fields _;
    struct NpcProjectItem__Array *Projects;
    struct GardenerItem__Array *GardenerItems;
    struct NpcProjectItem *m_lastProject;
};

struct GardenerScreen {
    struct GardenerScreen__Class *klass;
    MonitorData *monitor;
    struct GardenerScreen__Fields fields;
};

struct GardenerItem__Array {
    struct GardenerItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GardenerItem *vector[32];
};

struct GardenerItem__Array__VTable {
};

struct GardenerItem__Array__StaticFields {
};

struct GardenerItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GardenerItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GardenerItem__Array__VTable vtable;
};

struct GardenerScreen__VTable {
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
    VirtualInvokeData get_ShopInstance;
    VirtualInvokeData set_ShopInstance;
    VirtualInvokeData get_Items;
    VirtualInvokeData get_NeedsExperienceUI_1;
    VirtualInvokeData get_NeedOreUI_1;
    VirtualInvokeData AdditionalUpdate;
    VirtualInvokeData Init;
};

struct GardenerScreen__StaticFields {
    struct GardenerScreen *_Instance_k__BackingField;
};

struct GardenerScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GardenerScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GardenerScreen__VTable vtable;
};

struct GUIHelper {
    struct GUIHelper__Class *klass;
    MonitorData *monitor;
};

struct GUIHelper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GUIHelper__StaticFields {
    struct GUIStyle *m_bigText;
    struct GUIStyle *m_mediumText;
};

struct GUIHelper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUIHelper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUIHelper__VTable vtable;
};

enum class LoremasterReplayController_State__Enum : int32_t {
    OutsideReplayMode = 0x00000000,
    InsideReplayMode = 0x00000001,
    WaitingToApply = 0x00000002,
    Applying = 0x00000003,
    WaitingToExit = 0x00000004,
    Exitting = 0x00000005,
    WaitingToRestart = 0x00000006,
    FadeOutAfterReplayExit = 0x00000007,
    FadeOutAfterApplied = 0x00000008,
};

struct LoremasterReplayController_State__Enum__Boxed {
    struct LoremasterReplayController_State__Enum__Class *klass;
    MonitorData *monitor;
    LoremasterReplayController_State__Enum value;
    
};

struct LoremasterReplayController__Fields {
    struct MonoBehaviour__Fields _;
    struct ReplaySetting *m_currentSetting;
    LoremasterReplayController_State__Enum m_state;
    
    struct Nullable_1_UnityEngine_Vector3_ CachedSeinPosition;
    bool m_isMasterScene;
    struct MoonTimeline *m_masterTimeline;
    struct EventTriggerAnimator *m_overrideEndTimelineTrigger;
    bool m_masterTimelineFinished;
    bool ReplayStartedFromMainMenu;
    struct Byte__Array *UberStateValueStoreData;
    DifficultyMode__Enum m_currentDificulty;
    
};

struct LoremasterReplayController {
    struct LoremasterReplayController__Class *klass;
    MonitorData *monitor;
    struct LoremasterReplayController__Fields fields;
};

struct ReplaySetting__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider *Description;
    SkipCutscene_GameplayMode__Enum GameplayMode;
    
    struct Texture2D *LoremasterIcon;
    bool IsPlayable;
    struct SceneMetaData *LoremasterScene;
    struct ConditionUberState *ReplayUnlocked;
    struct ConditionUberState *ReplayCompleted;
    struct DesiredUberStateComposite *StateOverride;
    struct SceneMetaData *Scene;
    struct List_1_SceneMetaData_ *Preloads;
    bool UseTriggerToEndReplay;
    struct Byte__Array *UberStateValueStoreData;
    bool OverrideEquipmentAndAbilities;
    struct SceneMetaData_SeinAbilitiesWotW *Abilities;
    struct SceneMetaData_SeinAbilitiesWotW *m_cachedAbilities;
    struct SceneMetaData_SeinEquipmentWotW__Array *Equipment;
    struct SceneMetaData_SeinEquipmentWotW__Array *m_cachedEquipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultBButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *m_cachedDefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *m_cachedDefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *m_cachedDefaultBButtonEquipment;
    bool ShouldOverridePosition;
    struct Vector2 OverridePosition;
};

struct ReplaySetting {
    struct ReplaySetting__Class *klass;
    MonitorData *monitor;
    struct ReplaySetting__Fields fields;
};

}
