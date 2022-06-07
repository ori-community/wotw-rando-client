namespace app {
struct ReplaySetting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReplaySetting__StaticFields {
};

struct ReplaySetting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplaySetting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplaySetting__VTable vtable;
};

struct LoremasterReplayController_State__Enum__VTable {
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

struct LoremasterReplayController_State__Enum__StaticFields {
};

struct LoremasterReplayController_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoremasterReplayController_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoremasterReplayController_State__Enum__VTable vtable;
};

struct LoremasterReplayController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnFixedUpdate;
};

struct LoremasterReplayController__StaticFields {
    struct LoremasterReplayController *Instance;
};

struct LoremasterReplayController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoremasterReplayController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoremasterReplayController__VTable vtable;
};

struct __declspec(align(8)) LoremasterReplayController_c_DisplayClass48_0__Fields {
    bool shouldCacheUberstates;
    struct LoremasterReplayController *__4__this;
};

struct LoremasterReplayController_c_DisplayClass48_0 {
    struct LoremasterReplayController_c_DisplayClass48_0__Class *klass;
    MonitorData *monitor;
    struct LoremasterReplayController_c_DisplayClass48_0__Fields fields;
};

struct LoremasterReplayController_c_DisplayClass48_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LoremasterReplayController_c_DisplayClass48_0__StaticFields {
};

struct LoremasterReplayController_c_DisplayClass48_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoremasterReplayController_c_DisplayClass48_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoremasterReplayController_c_DisplayClass48_0__VTable vtable;
};

struct LoremasterScreen__Fields {
    struct MenuScreen__Fields _;
    struct ReplaySetting__Array *ReplaySettings;
    struct GameObject *LoremasterReplayItemPrefab;
    struct GameObject *ItemRoot;
    struct EquipmentUIInventoryGrid *Grid;
    struct GameObject *LoremasterWatchIcon;
    struct GameObject *LoremasterPlayIcon;
    struct MessageBox *LoremasterSelectedLabel;
    struct MessageProvider *DefaultLockedMessage;
    struct LoremasterUISlot *m_SelectedItem;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct LoremasterScreen {
    struct LoremasterScreen__Class *klass;
    MonitorData *monitor;
    struct LoremasterScreen__Fields fields;
};

struct ReplaySetting__Array {
    struct ReplaySetting__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ReplaySetting *vector[32];
};

struct LoremasterUISlot__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject *SelectionHighlight;
    struct GameObject *WatchIcon;
    struct GameObject *PlayIcon;
    struct GameObject *LockImage;
    struct Renderer *Image;
    struct ReplaySetting *m_replaySetting;
};

struct LoremasterUISlot {
    struct LoremasterUISlot__Class *klass;
    MonitorData *monitor;
    struct LoremasterUISlot__Fields fields;
};

struct ReplaySetting__Array__VTable {
};

struct ReplaySetting__Array__StaticFields {
};

struct ReplaySetting__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplaySetting__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplaySetting__Array__VTable vtable;
};

struct LoremasterUISlot__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetItemContext;
    VirtualInvokeData OnItemContextDirty;
    VirtualInvokeData SetSelected;
};

struct LoremasterUISlot__StaticFields {
};

struct LoremasterUISlot__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoremasterUISlot__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoremasterUISlot__VTable vtable;
};

struct LoremasterScreen__VTable {
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
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnInstantiate;
    VirtualInvokeData get_CanInterruptTab;
    VirtualInvokeData get_BackgroundMode;
    VirtualInvokeData get_NeedsExperienceUI;
    VirtualInvokeData get_NeedOreUI;
};

struct LoremasterScreen__StaticFields {
    struct LoremasterScreen *Instance;
};

struct LoremasterScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoremasterScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoremasterScreen__VTable vtable;
};

struct LoremasterScreen_c {
    struct LoremasterScreen_c__Class *klass;
    MonitorData *monitor;
};

struct LoremasterScreen_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LoremasterScreen_c__StaticFields {
    struct LoremasterScreen_c *__9;
    struct Action_1_UnityEngine_GameObject_ *__9__42_0;
};

struct LoremasterScreen_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoremasterScreen_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoremasterScreen_c__VTable vtable;
};

struct ReplayScreen__Fields {
    struct MenuScreen__Fields _;
    struct SoundProvider *OpenSound;
    struct SoundProvider *CloseSound;
    struct ReplaySetting__Array *BossReplaySettings;
    struct ReplaySetting__Array *EscapeReplaySettings;
    struct ReplaySetting__Array *CutsceneReplaySettings;
    struct ReplaySetting__Array *RaceReplaySettings;
    struct CleverMenuItemGroup *BossGroup;
    struct CleverMenuItemGroup *EscapeGroup;
    struct CleverMenuItemGroup *CutsceneGroup;
    struct CleverMenuItemGroup *RaceGroup;
    struct GameObject *LoremasterReplayItemPrefab;
    struct CleverMenuItemSelectionManager *Navigation;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct ReplayScreen {
    struct ReplayScreen__Class *klass;
    MonitorData *monitor;
    struct ReplayScreen__Fields fields;
};

struct ReplayScreen__VTable {
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
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnInstantiate;
};

struct ReplayScreen__StaticFields {
    struct ReplayScreen *Instance;
};

struct ReplayScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplayScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplayScreen__VTable vtable;
};

struct __declspec(align(8)) ReplayScreen_c_DisplayClass22_0__Fields {
    struct ReplaySetting *setting;
};

struct ReplayScreen_c_DisplayClass22_0 {
    struct ReplayScreen_c_DisplayClass22_0__Class *klass;
    MonitorData *monitor;
    struct ReplayScreen_c_DisplayClass22_0__Fields fields;
};

struct ReplayScreen_c_DisplayClass22_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReplayScreen_c_DisplayClass22_0__StaticFields {
};

struct ReplayScreen_c_DisplayClass22_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplayScreen_c_DisplayClass22_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplayScreen_c_DisplayClass22_0__VTable vtable;
};

struct __declspec(align(8)) ReplaySetting_ApplyRoutine_d_34__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct ReplaySetting *__4__this;
};

struct ReplaySetting_ApplyRoutine_d_34 {
    struct ReplaySetting_ApplyRoutine_d_34__Class *klass;
    MonitorData *monitor;
    struct ReplaySetting_ApplyRoutine_d_34__Fields fields;
};

struct ReplaySetting_ApplyRoutine_d_34__VTable {
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

struct ReplaySetting_ApplyRoutine_d_34__StaticFields {
};

struct ReplaySetting_ApplyRoutine_d_34__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplaySetting_ApplyRoutine_d_34__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplaySetting_ApplyRoutine_d_34__VTable vtable;
};

struct __declspec(align(8)) ReplaySetting_GoToSceneRoutine_d_37__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct String *sceneName;
    bool exit;
    struct Action *onComplete;
    struct Vector3 position;
    struct SceneMetaData *metaData;
};

struct ReplaySetting_GoToSceneRoutine_d_37 {
    struct ReplaySetting_GoToSceneRoutine_d_37__Class *klass;
    MonitorData *monitor;
    struct ReplaySetting_GoToSceneRoutine_d_37__Fields fields;
};

struct ReplaySetting_GoToSceneRoutine_d_37__VTable {
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

struct ReplaySetting_GoToSceneRoutine_d_37__StaticFields {
};

struct ReplaySetting_GoToSceneRoutine_d_37__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplaySetting_GoToSceneRoutine_d_37__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplaySetting_GoToSceneRoutine_d_37__VTable vtable;
};

struct MapmakerItem__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider *Name;
    struct MessageProvider *Description;
    struct Texture2D *Icon;
    struct SerializedByteUberState *UberState;
    int32_t Cost;
    int32_t MaxLevel;
};

struct MapmakerItem {
    struct MapmakerItem__Class *klass;
    MonitorData *monitor;
    struct MapmakerItem__Fields fields;
};

struct MapmakerItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MapmakerItem__StaticFields {
};

struct MapmakerItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerItem__VTable vtable;
};

struct MapmakerScreen_HintsSettings {
    struct GameObject *MessagePrefab;
    struct Transform *MessageAnchor;
    float MessageDuration;
    struct MessageProvider *NotEnoughSpiritLight;
    struct MessageProvider *MaxedOut;
};

struct MapmakerScreen_HintsSettings__Boxed {
    struct MapmakerScreen_HintsSettings__Class *klass;
    MonitorData *monitor;
    struct MapmakerScreen_HintsSettings fields;
};

struct MapmakerScreen__Fields {
    struct PurchaseThingScreen__Fields _;
    struct MapmakerItem__Array *Purchases;
    struct SerializedBooleanUberState *MapSecretsRevealedUberState;
    struct LegacyTransparencyAnimator *FadeAnimator;
    struct GameObject *m_bindingsCanvas;
    struct GameObject *UpgradeDetailsCanvasPrefab;
    struct Transform *AnchorItemDetails;
    struct MapmakerUIDetails *m_upgradeDetailsCanvas;
    struct GameObject *UpgradeItemPrefab;
    struct GameObject *ItemHighlightGO;
    struct GameObject *ExperiencePrefab;
    struct Transform *AnchorExperience;
    struct EquipmentUIInventoryGrid *Grid;
    bool _PurchasedSkillUpgrade_k__BackingField;
    bool m_isHiding;
    struct MapmakerScreen_HintsSettings Hints;
    struct MessageBox *m_currentHint;
    bool m_isInitiated;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct MapmakerScreen {
    struct MapmakerScreen__Class *klass;
    MonitorData *monitor;
    struct MapmakerScreen__Fields fields;
};

struct MapmakerItem__Array {
    struct MapmakerItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MapmakerItem *vector[32];
};

struct MapmakerUIDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *IconGO;
    struct GameObject *NameGO;
    struct GameObject *DescriptionGO;
    struct GameObject *StarsGO;
    struct GameObject *PurchasableGO;
    struct GameObject *TooExpensiveGO;
    struct GameObject *OwnedGO;
    struct Color PurchasableColor;
    struct Color NotPurchasableColor;
    struct Color PurchasableDescriptionColor;
    struct MapmakerItem *m_item;
};

struct MapmakerUIDetails {
    struct MapmakerUIDetails__Class *klass;
    MonitorData *monitor;
    struct MapmakerUIDetails__Fields fields;
};

struct MapmakerItem__Array__VTable {
};

struct MapmakerItem__Array__StaticFields {
};

struct MapmakerItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerItem__Array__VTable vtable;
};

struct MapmakerUIDetails__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MapmakerUIDetails__StaticFields {
};

struct MapmakerUIDetails__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerUIDetails__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerUIDetails__VTable vtable;
};

struct MapmakerScreen_HintsSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MapmakerScreen_HintsSettings__StaticFields {
};

struct MapmakerScreen_HintsSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerScreen_HintsSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerScreen_HintsSettings__VTable vtable;
};

struct MapmakerScreen__VTable {
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

struct MapmakerScreen__StaticFields {
    struct MapmakerScreen *Instance;
};

struct MapmakerScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerScreen__VTable vtable;
};

struct MapmakerUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject *AvailableToBuyGO;
    struct GameObject *AlreadyOwnedGO;
    struct GameObject *TooExpensiveGO;
    struct GameObject *LockedGO;
    struct SpiritShardUIShardUpgradeFill *Fill;
    struct MapmakerItem *m_upgradeItem;
};

struct MapmakerUIItem {
    struct MapmakerUIItem__Class *klass;
    MonitorData *monitor;
    struct MapmakerUIItem__Fields fields;
};

struct MapmakerUIItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetItemContext;
    VirtualInvokeData OnItemContextDirty;
    VirtualInvokeData SetSelected;
};

struct MapmakerUIItem__StaticFields {
};

struct MapmakerUIItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerUIItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerUIItem__VTable vtable;
};

struct MapmakerScreen_c {
    struct MapmakerScreen_c__Class *klass;
    MonitorData *monitor;
};

struct MapmakerScreen_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MapmakerScreen_c__StaticFields {
    struct MapmakerScreen_c *__9;
    struct Predicate_1_CleverMenuItem_ *__9__55_0;
    struct Comparison_1_Object_ *__9__59_0;
};

struct MapmakerScreen_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerScreen_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerScreen_c__VTable vtable;
};

struct MapmakerUISubItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject *IconGO;
    struct GameObject *CostGO;
    struct GameObject *SpiritLightGO;
    struct Color UnpurchaseableColor;
    struct Color PurchasableColor;
    struct MapmakerItem *m_upgradeItem;
};

struct MapmakerUISubItem {
    struct MapmakerUISubItem__Class *klass;
    MonitorData *monitor;
    struct MapmakerUISubItem__Fields fields;
};

struct MapmakerUISubItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetItemContext;
    VirtualInvokeData OnItemContextDirty;
    VirtualInvokeData SetSelected;
};

struct MapmakerUISubItem__StaticFields {
};

struct MapmakerUISubItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MapmakerUISubItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MapmakerUISubItem__VTable vtable;
};

enum class SeinStatusAnimatorDriver_SeinStatus__Enum : int32_t {
    HealthMinVisual = 0x00000000,
    HealthMaxVisual = 0x00000001,
    HealthMax = 0x00000002,
    EnergyMinVisual = 0x00000003,
    EnergyMaxVisual = 0x00000004,
    EnergyMax = 0x00000005,
    Debug = 0x00000006,
    ExtraHealthMinVisual = 0x00000007,
    ExtraHealthMaxVisual = 0x00000008,
};

struct SeinStatusAnimatorDriver_SeinStatus__Enum__Boxed {
    struct SeinStatusAnimatorDriver_SeinStatus__Enum__Class *klass;
    MonitorData *monitor;
    SeinStatusAnimatorDriver_SeinStatus__Enum value;
    
};

struct SeinStatusAnimatorDriver__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator *Animator;
    SeinStatusAnimatorDriver_SeinStatus__Enum StatusType;
    
    float DivideBy;
    float PossibleMax;
    float DebugValue;
    float DebugMax;
    float m_lastValue;
};

struct SeinStatusAnimatorDriver {
    struct SeinStatusAnimatorDriver__Class *klass;
    MonitorData *monitor;
    struct SeinStatusAnimatorDriver__Fields fields;
};

struct SeinStatusAnimatorDriver_SeinStatus__Enum__VTable {
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

struct SeinStatusAnimatorDriver_SeinStatus__Enum__StaticFields {
};

struct SeinStatusAnimatorDriver_SeinStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinStatusAnimatorDriver_SeinStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinStatusAnimatorDriver_SeinStatus__Enum__VTable vtable;
};

struct SeinStatusAnimatorDriver__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinStatusAnimatorDriver__StaticFields {
};

struct SeinStatusAnimatorDriver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinStatusAnimatorDriver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinStatusAnimatorDriver__VTable vtable;
};

struct SeinUI__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTransparencyAnimator *TransparencyAnimator;
    struct GameObject *UI;
    struct GameObject *HUD;
    struct LegacyTransparencyAnimator *RightTransparencyAnimator;
    struct GameObject *RightUI;
    struct LegacyTransparencyAnimator *LeftTransparencyAnimator;
    struct GameObject *LeftUI;
    struct LegacyTransparencyAnimator *BottomLeftTransparencyAnimator;
    struct GameObject *BottomLeftUI;
    struct LegacyAnimator *ExperienceOrbShake;
    struct LegacyAnimator *EnergyOrbShake;
    struct LegacyAnimator *KeystonesShake;
    struct LegacyTransparencyAnimator *KeystoneTransparencyAnimator;
    struct LegacyAnimator *EyestonesShake;
    struct LegacyTransparencyAnimator *EyestoneTransparencyAnimator;
    struct LegacyAnimator *MapStonesShake;
    struct LegacyAnimator *HealthShake;
    struct LegacyAnimator *SoulFlameNotReadyShake;
    struct LegacyAnimator *SpiritLightShake;
    struct LegacyAnimator *SeedsShake;
    struct MoonTimeline *LowHealthWarningTimeline;
    struct GameObject *EnergyBar;
    struct GameObject *KeystoneUI;
    struct GameObject *EyestoneUI;
    struct GameObject *MapStoneUI;
    struct GameObject *SoulFlameFull;
    struct GameObject *SoulFlameUI;
    struct GameObject *SoulFlameUIFlame;
    struct GameObject *SpiritLightUI;
    struct GameObject *SeedsUI;
    struct GameObject *AbilityBindingUI;
    struct GameObject *HealthContainerUI;
    struct GameObject *EnergyContainerUI;
    float SecondsToShowSavingNotification;
    struct GameObject *SavingNotificationUI;
    struct MessageProvider *SoulFlameReadyMessage;
    float SoulFlameReadyMessageDuration;
    struct BaseAnimator *EnergyBarPulse;
    struct BaseAnimator *HealthPulse;
    struct ParticleSystem *EnergizeParticle;
    struct GameObject *ButtonIconTemplate;
    struct Transform *BindButtonXAnchor;
    struct Transform *BindButtonYAnchor;
    struct Transform *BindButtonBAnchor;
    struct Vector3 AbilityIconScale;
    struct MoonTimeline *HealthContainerShakeTimeline;
    struct MoonTimeline *GetHalfHealthContainerTimeline;
    struct MoonTimeline *GetFullHealthContainerTimeline;
    struct GameObject *FullHealthContainerGroup;
    struct GameObject *HalfHealthContainerGroup;
    struct MoonTimeline *EnergyContainerShakeTimeline;
    struct MoonTimeline *GetHalfEnergyContainerTimeline;
    struct MoonTimeline *GetFullEnergyContainerTimeline;
    struct GameObject *FullEnergyContainerGroup;
    struct GameObject *HalfEnergyContainerGroup;
    float m_timeToShowSavingNotification;
    float m_showSpiritLightTimer;
    float m_showSeedsTimer;
    float m_showHealthContainerTimer;
    float m_showEnergyContainerTimer;
    float ShowSpiritLightTime;
    float ShowSeedsTime;
    float ShowHealthContainerTime;
    float ShowEnergyContainerTime;
    bool KeepActive;
    float m_showKeystonesTimer;
    float m_showEyestonesTimer;
    float ShowKeyStoneTime;
    struct List_1_UnityEngine_Renderer_ *m_iconRenderers;
    bool ShowOnSettingsScreen;
    float FaderTransparency;
    float m_lastHealthPercent;
    float LowHealthWarningPercent;
    float m_rightOpacity;
    float m_lastRightOpacity;
    float m_leftOpacity;
    float m_lastLeftOpacity;
    float m_bottomLeftOpacity;
    float m_lastBottomLeftOpacity;
    float m_keystoneOpacity;
    float m_lastKeystoneOpacity;
    float m_eyestoneOpacity;
    float m_lastEyestoneOpacity;
    float m_opacity;
    float FadeTime;
    bool m_showUI;
    bool ShowOnlyRightUI;
    bool ShowSaveGameNotification;
    bool WasLastKeystoneAnEyestone;
    float m_lastOpacity;
    float m_goalOpacity;
    bool m_wasCompletelyFadedIn;
    bool hasRebinder;
    bool m_buttonsNotEmptyOrTorch;
    struct Renderer__Array *m_cachedAbilityIconRenderer;
    struct AbilityType__Enum__Array *m_cachedAbilityType;
};

struct SeinUI {
    struct SeinUI__Class *klass;
    MonitorData *monitor;
    struct SeinUI__Fields fields;
};

struct SeinUI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinUI__StaticFields {
    float m_lastUpdate;
    bool _ShowSpiritLight_k__BackingField;
    bool OptimizeSeinUI;
};

struct SeinUI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinUI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinUI__VTable vtable;
};

enum class SeinUI_UIZone__Enum : int32_t {
    BottomCenter = 0x00000000,
    BottomLeft = 0x00000001,
    TopLeft = 0x00000002,
    TopRight = 0x00000003,
};

struct SeinUI_UIZone__Enum__Boxed {
    struct SeinUI_UIZone__Enum__Class *klass;
    MonitorData *monitor;
    SeinUI_UIZone__Enum value;
    
};

struct SeinUI_UIZone__Enum__VTable {
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

struct SeinUI_UIZone__Enum__StaticFields {
};

struct SeinUI_UIZone__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinUI_UIZone__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinUI_UIZone__Enum__VTable vtable;
};

struct SetToGameTime__Fields {
    struct MonoBehaviour__Fields _;
    struct TextBox *Text;
};

}
