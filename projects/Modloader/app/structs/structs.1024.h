namespace app {
    struct SetToGameTime {
        struct SetToGameTime__Class* klass;
        MonitorData* monitor;
        struct SetToGameTime__Fields fields;
    };

    struct SetToGameTime__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetToGameTime__StaticFields {
    };

    struct SetToGameTime__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetToGameTime__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetToGameTime__VTable vtable;
    };

    struct MoonTimelineUiFaderOnEnable__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimelineUiFader* Fader;
        bool FadeInOnEnable;
        bool FadeOutOnDisable;
        bool m_targetEnabled;
    };

    struct MoonTimelineUiFaderOnEnable {
        struct MoonTimelineUiFaderOnEnable__Class* klass;
        MonitorData* monitor;
        struct MoonTimelineUiFaderOnEnable__Fields fields;
    };

    struct MoonTimelineUiFaderOnEnable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTimelineUiFaderOnEnable__StaticFields {
    };

    struct MoonTimelineUiFaderOnEnable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTimelineUiFaderOnEnable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTimelineUiFaderOnEnable__VTable vtable;
    };

    struct ShardUpgradeScreen__Fields {
        struct ShopkeeperScreen__Fields _;
        struct UpgradableShardItem__Array* ShardUpgrades;
    };

    struct ShardUpgradeScreen {
        struct ShardUpgradeScreen__Class* klass;
        MonitorData* monitor;
        struct ShardUpgradeScreen__Fields fields;
    };

    struct __declspec(align(8)) UpgradableShardItem__Fields {
        SpiritShardType__Enum Shard;
    };

    struct UpgradableShardItem {
        struct UpgradableShardItem__Class* klass;
        MonitorData* monitor;
        struct UpgradableShardItem__Fields fields;
    };

    struct UpgradableShardItem__Array {
        struct UpgradableShardItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UpgradableShardItem* vector[32];
    };

    struct UpgradableShardItem__VTable {
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

    struct UpgradableShardItem__StaticFields {
    };

    struct UpgradableShardItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UpgradableShardItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UpgradableShardItem__VTable vtable;
    };

    struct UpgradableShardItem__Array__VTable {
    };

    struct UpgradableShardItem__Array__StaticFields {
    };

    struct UpgradableShardItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UpgradableShardItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UpgradableShardItem__Array__VTable vtable;
    };

    struct ShardUpgradeScreen__VTable {
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

    struct ShardUpgradeScreen__StaticFields {
        struct ShardUpgradeScreen* _Instance_k__BackingField;
    };

    struct ShardUpgradeScreen__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShardUpgradeScreen__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShardUpgradeScreen__VTable vtable;
    };

    struct ShardUpgradeScreen_c {
        struct ShardUpgradeScreen_c__Class* klass;
        MonitorData* monitor;
    };

    struct ShardUpgradeScreen_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShardUpgradeScreen_c__StaticFields {
        struct ShardUpgradeScreen_c* __9;
        struct Func_2_SpiritShardType_Boolean_* __9__17_0;
    };

    struct ShardUpgradeScreen_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShardUpgradeScreen_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShardUpgradeScreen_c__VTable vtable;
    };

    struct ShopkeeperUIItem__Fields {
        struct EquipmentUIInventoryItem__Fields _;
        struct GameObject* AvailableToBuyGO;
        struct GameObject* AlreadyOwnedGO;
        struct GameObject* TooExpensiveGO;
        struct GameObject* LockedGO;
        struct SpiritShardUIShardUpgradeFill* Fill;
        struct ShopkeeperItem* m_upgradeItem;
    };

    struct ShopkeeperUIItem {
        struct ShopkeeperUIItem__Class* klass;
        MonitorData* monitor;
        struct ShopkeeperUIItem__Fields fields;
    };

    struct ShopkeeperUIItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetItemContext;
        VirtualInvokeData OnItemContextDirty;
        VirtualInvokeData SetSelected;
    };

    struct ShopkeeperUIItem__StaticFields {
    };

    struct ShopkeeperUIItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShopkeeperUIItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShopkeeperUIItem__VTable vtable;
    };

    struct ShopkeeperScreen_c {
        struct ShopkeeperScreen_c__Class* klass;
        MonitorData* monitor;
    };

    struct ShopkeeperScreen_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShopkeeperScreen_c__StaticFields {
        struct ShopkeeperScreen_c* __9;
        struct Predicate_1_CleverMenuItem_* __9__58_0;
        struct Comparison_1_Object_* __9__63_0;
    };

    struct ShopkeeperScreen_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShopkeeperScreen_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShopkeeperScreen_c__VTable vtable;
    };

    struct ShopkeeperUISubItem__Fields {
        struct EquipmentUIInventoryItem__Fields _;
        struct GameObject* IconGO;
        struct GameObject* CostGO;
        struct GameObject* SpiritLightGO;
        struct GameObject* OreGO;
        bool ShowOre;
        struct SpiritShardUIShardBackdrop* Backdrop;
        struct ShopkeeperItem* m_item;
    };

    struct ShopkeeperUISubItem {
        struct ShopkeeperUISubItem__Class* klass;
        MonitorData* monitor;
        struct ShopkeeperUISubItem__Fields fields;
    };

    struct ShopkeeperUISubItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetItemContext;
        VirtualInvokeData OnItemContextDirty;
        VirtualInvokeData SetSelected;
    };

    struct ShopkeeperUISubItem__StaticFields {
    };

    struct ShopkeeperUISubItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShopkeeperUISubItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShopkeeperUISubItem__VTable vtable;
    };

    struct MemoryUISlot__Fields {
        struct EquipmentUIInventoryItem__Fields _;
        struct GameObject* SelectionHighlight;
        struct GameObject* WatchIcon;
        struct GameObject* PlayIcon;
        struct GameObject* LockImage;
        struct Renderer* Image;
        struct ReplaySetting* m_replaySetting;
    };

    struct MemoryUISlot {
        struct MemoryUISlot__Class* klass;
        MonitorData* monitor;
        struct MemoryUISlot__Fields fields;
    };

    struct MemoryUISlot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetItemContext;
        VirtualInvokeData OnItemContextDirty;
        VirtualInvokeData SetSelected;
    };

    struct MemoryUISlot__StaticFields {
    };

    struct MemoryUISlot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MemoryUISlot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MemoryUISlot__VTable vtable;
    };

    struct RaceMenuScreen__Fields {
        struct MenuScreen__Fields _;
        struct RaceSettings__Array* SpiritTrialsRaceSettings;
        struct RaceSettings__Array* TimeTrialsRaceSettings;
        struct GameObject* RaceItemPrefab;
        struct GameObject* ItemRoot;
        struct EquipmentUIInventoryGrid* Grid;
        struct MessageBox* LeftTab;
        struct MessageBox* RightTab;
        struct GameObject* LoremasterScreen;
        struct GameObject* RaceLegend;
        struct GameObject* MemoriesLegend;
        struct MessageProvider* SpiritTrialsTabMessageProvider;
        struct MessageProvider* TimeTrialsTabMessageProvider;
        struct MessageProvider* MemoriesTabMessageProvider;
        struct MessageProvider* BossTabMessageProvider;
        struct MessageProvider* RaceTabMessageProvider;
        struct MessageProvider* ShrineMessageProvider;
        struct MessageProvider* EscapeMessageProvider;
        struct LeaderboardsB* Board;
        struct GameObject* RacePlayIcon;
        struct MessageBox* RaceSelectedFilter;
        struct GameObject* BeatenIcon;
        struct MessageProvider* DefaultLockedMessage;
        struct RaceLeaderboardsTitlescreenController* LeaderboardController;
        bool _IsFadingOut_k__BackingField;
        struct CleverMenuItemSelectionManager* RaceItemsSelectionManager;
        struct CleverMenuItemSelectionManager* MemoriesItemsSelectionManager;
        struct RaceMenuScreenDifficultyLabel* DifficultyLabel;
        struct MoonReference_1_ISerializedUberState_* DifficultyState;
        struct LegacyTransparencyAnimator* ScreenLegacyTransparencyAnimator;
        struct RaceMenuScreenNotificationSystem__Array* m_notificationSystems;
        struct MoonTimeline* FadeOutTimeline;
        struct MoonTimeline* GridFaderTimeline;
        struct TransparencyAnimator* FadeTransparencyAnimator;
        struct TransparencyAnimator* GridFadeTransparencyAnimator;
        bool m_wasEnabledInTitlescreen;
        struct RaceMenuScreenUISlot* m_SelectedItem;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct CleverMenuItem* m_lastItem;
    };

    struct RaceMenuScreen {
        struct RaceMenuScreen__Class* klass;
        MonitorData* monitor;
        struct RaceMenuScreen__Fields fields;
    };

    enum class RaceManuPage__Enum : int32_t {
        SpiritTrials = 0x00000000,
        TimeTrials = 0x00000001,
        Memories = 0x00000002,
    };

    struct RaceManuPage__Enum__Boxed {
        struct RaceManuPage__Enum__Class* klass;
        MonitorData* monitor;
        RaceManuPage__Enum value;
    };

    struct RaceMenuScreenDifficultyLabel__Fields {
        struct MonoBehaviour__Fields _;
        struct MessageBox* DifficultyMessageBox;
        struct MessageProvider* DifficultyMessageProvider;
        struct MessageProvider* EasyMessageProvider;
        struct MessageProvider* NormalMessageProvider;
        struct MessageProvider* HardMessageProvider;
    };

    struct RaceMenuScreenDifficultyLabel {
        struct RaceMenuScreenDifficultyLabel__Class* klass;
        MonitorData* monitor;
        struct RaceMenuScreenDifficultyLabel__Fields fields;
    };

    struct __declspec(align(8)) RaceMenuScreenNotificationSystem__Fields {
        struct List_1_NotificationChecker_* m_notificationCheckers;
        struct LeaderBoardService* m_leaderBoardService;
    };

    struct RaceMenuScreenNotificationSystem {
        struct RaceMenuScreenNotificationSystem__Class* klass;
        MonitorData* monitor;
        struct RaceMenuScreenNotificationSystem__Fields fields;
    };

    struct __declspec(align(8)) List_1_NotificationChecker___Fields {
        struct NotificationChecker__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_NotificationChecker_ {
        struct List_1_NotificationChecker___Class* klass;
        MonitorData* monitor;
        struct List_1_NotificationChecker___Fields fields;
    };

    struct __declspec(align(8)) NotificationChecker__Fields {
        struct String* LeaderBoardsID;
        bool NotificationSeen;
        struct Action_1_Boolean_* ShowNotificationAction;
        struct RaceSettings* m_raceSettings;
        int32_t m_currentLeaderboardsPlace;
        struct LeaderBoardService* m_leaderBoardService;
        bool m_notificationSeen;
        int32_t m_originalRank;
        int32_t m_saveSlotIndex;
        bool m_isSyncing;
        bool m_raceBeaten;
    };

    struct NotificationChecker {
        struct NotificationChecker__Class* klass;
        MonitorData* monitor;
        struct NotificationChecker__Fields fields;
    };

    struct NotificationChecker__Array {
        struct NotificationChecker__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct NotificationChecker* vector[32];
    };

    struct IEnumerator_1_NotificationChecker_ {
        struct IEnumerator_1_NotificationChecker___Class* klass;
        MonitorData* monitor;
    };

    struct RaceMenuScreenNotificationSystem__Array {
        struct RaceMenuScreenNotificationSystem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RaceMenuScreenNotificationSystem* vector[32];
    };

    enum class TransparencyAnimator_AnimateMode__Enum : int32_t {
        Color = 0x00000000,
        Dissolve = 0x0000000c,
        Additive = 0x00000002,
    };

    struct TransparencyAnimator_AnimateMode__Enum__Boxed {
        struct TransparencyAnimator_AnimateMode__Enum__Class* klass;
        MonitorData* monitor;
        TransparencyAnimator_AnimateMode__Enum value;
    };

    enum class TransparencyMode__Enum : int32_t {
        Relative = 0x00000000,
        Absolute = 0x00000001,
    };

    struct TransparencyMode__Enum__Boxed {
        struct TransparencyMode__Enum__Class* klass;
        MonitorData* monitor;
        TransparencyMode__Enum value;
    };

    struct TransparencyAnimator__Fields {
        struct TimelineEntity__Fields _;
        struct MoonReference_1_UnityEngine_GameObject_* Target;
        struct GameObject__Array* AdditionalTargets;
        bool AnimateChildren;
        TransparencyAnimator_AnimateMode__Enum Mode;

        struct AnimationCurve* Curve;
        bool AutoEnableDisable;
        bool Allow0AlphaHierarchyOptimization;
        TransparencyMode__Enum TransparencyMode;

        bool ClampTopValue;
        float m_time;
        struct GameObject* m_target;
        struct List_1_UnityEngine_Transform_* m_earlyZTransforms;
        struct List_1_UnityEngine_Renderer_* m_renderers;
        bool m_initialized;
        bool m_isPooled;
    };

    struct TransparencyAnimator {
        struct TransparencyAnimator__Class* klass;
        MonitorData* monitor;
        struct TransparencyAnimator__Fields fields;
    };

    struct RaceMenuScreenUISlot__Fields {
        struct EquipmentUIInventoryItem__Fields _;
        struct GameObject* SelectionHighlight;
        struct GameObject* LockImage;
        struct GameObject* BeatenIcon;
        struct Renderer* Image;
        struct RaceSettings* m_RaceSetting;
        bool m_isHighlighted;
        float m_highlightTimer;
    };

    struct RaceMenuScreenUISlot {
        struct RaceMenuScreenUISlot__Class* klass;
        MonitorData* monitor;
        struct RaceMenuScreenUISlot__Fields fields;
    };

    struct RaceManuPage__Enum__VTable {
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

    struct RaceManuPage__Enum__StaticFields {
    };

    struct RaceManuPage__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceManuPage__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceManuPage__Enum__VTable vtable;
    };

    struct RaceMenuScreenDifficultyLabel__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceMenuScreenDifficultyLabel__StaticFields {
    };

    struct RaceMenuScreenDifficultyLabel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceMenuScreenDifficultyLabel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceMenuScreenDifficultyLabel__VTable vtable;
    };

    struct NotificationChecker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NotificationChecker__StaticFields {
    };

    struct NotificationChecker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NotificationChecker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NotificationChecker__VTable vtable;
    };

    struct NotificationChecker__Array__VTable {
    };

    struct NotificationChecker__Array__StaticFields {
    };

    struct NotificationChecker__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NotificationChecker__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NotificationChecker__Array__VTable vtable;
    };

    struct IEnumerator_1_NotificationChecker___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_NotificationChecker___StaticFields {
    };

    struct IEnumerator_1_NotificationChecker___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_NotificationChecker___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_NotificationChecker___VTable vtable;
    };

    struct List_1_NotificationChecker___VTable {
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

    struct List_1_NotificationChecker___StaticFields {
        struct NotificationChecker__Array* _emptyArray;
    };

    struct List_1_NotificationChecker___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_NotificationChecker___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_NotificationChecker___VTable vtable;
    };

    struct RaceMenuScreenNotificationSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceMenuScreenNotificationSystem__StaticFields {
    };

    struct RaceMenuScreenNotificationSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceMenuScreenNotificationSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceMenuScreenNotificationSystem__VTable vtable;
    };

    struct RaceMenuScreenNotificationSystem__Array__VTable {
    };

    struct RaceMenuScreenNotificationSystem__Array__StaticFields {
    };

    struct RaceMenuScreenNotificationSystem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceMenuScreenNotificationSystem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceMenuScreenNotificationSystem__Array__VTable vtable;
    };

    struct TransparencyAnimator_AnimateMode__Enum__VTable {
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

    struct TransparencyAnimator_AnimateMode__Enum__StaticFields {
    };

    struct TransparencyAnimator_AnimateMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimator_AnimateMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimator_AnimateMode__Enum__VTable vtable;
    };

    struct TransparencyMode__Enum__VTable {
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

    struct TransparencyMode__Enum__StaticFields {
    };

    struct TransparencyMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyMode__Enum__VTable vtable;
    };

    struct TransparencyAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
        VirtualInvokeData get_ShouldUpdateWhileDisabled;
        VirtualInvokeData OnEarlyZBuilt;
        VirtualInvokeData GetManagedEarlyZDynamicGraphicTargets;
        VirtualInvokeData OnEntityCreated;
        VirtualInvokeData get_ExternalTarget;
    };

    struct TransparencyAnimator__StaticFields {
        bool DontSubmitOnHierarchyWith0Alpha;
        bool FrameQuantizationEnabled;
        bool ForceFrameQuantization;
        bool UseTARenderCaching;
    };

    struct TransparencyAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimator__VTable vtable;
    };

    struct RaceMenuScreenUISlot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetItemContext;
        VirtualInvokeData OnItemContextDirty;
        VirtualInvokeData SetSelected;
    };

    struct RaceMenuScreenUISlot__StaticFields {
        float m_timeToHideNotification;
    };

    struct RaceMenuScreenUISlot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceMenuScreenUISlot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceMenuScreenUISlot__VTable vtable;
    };

    struct RaceMenuScreen__VTable {
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
    };

    struct RaceMenuScreen__StaticFields {
        RaceManuPage__Enum CurrentRaceFilter;

        struct RaceMenuScreen* Instance;
        int32_t m_lastSelectedSlotIndex;
        int32_t m_lastSelectedRaceIndex;
        int32_t m_lastSelectedMemoryIndex;
    };

    struct RaceMenuScreen__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceMenuScreen__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceMenuScreen__VTable vtable;
    };

    struct RaceMenuScreenMemoriesPage__Fields {
        struct MonoBehaviour__Fields _;
        struct UISoundSettingsAsset* Sounds;
        struct ReplaySetting__Array* ReplaySettings;
        struct GameObject* LoremasterReplayItemPrefab;
        struct GameObject* ItemRoot;
        struct EquipmentUIInventoryGrid* Grid;
        struct GameObject* LoremasterWatchIcon;
        struct GameObject* LoremasterPlayIcon;
        struct MessageBox* LoremasterSelectedLabel;
        struct MessageProvider* DefaultLockedMessage;
        struct MemoryUISlot* m_SelectedItem;
        struct CleverMenuItem* m_lastItem;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct RaceMenuScreenMemoriesPage {
        struct RaceMenuScreenMemoriesPage__Class* klass;
        MonitorData* monitor;
        struct RaceMenuScreenMemoriesPage__Fields fields;
    };

    struct RaceMenuScreenMemoriesPage__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnPostTimeSlicedEnable;
    };

} // namespace app
