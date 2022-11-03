namespace app {
    struct WeaponMasterEntity__StaticFields {
    };

    struct WeaponMasterEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeaponMasterEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeaponMasterEntity__VTable vtable;
    };

    struct WeaponMasterIdle__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* IdleOnGroundTimeline;
        struct MoonTimeline* IdleInTreeTimeline;
        struct EventTriggerAnimator__Array* NoLongerInTreeTriggerEvent;
        struct MoonTimeline* m_currentTimeline;
    };

    struct WeaponMasterIdle {
        struct WeaponMasterIdle__Class* klass;
        MonitorData* monitor;
        struct WeaponMasterIdle__Fields fields;
    };

    struct WeaponMasterIdle__VTable {
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

    struct WeaponMasterIdle__StaticFields {
    };

    struct WeaponMasterIdle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeaponMasterIdle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeaponMasterIdle__VTable vtable;
    };

    struct WeaponMasterIdle_c {
        struct WeaponMasterIdle_c__Class* klass;
        MonitorData* monitor;
    };

    struct WeaponMasterIdle_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WeaponMasterIdle_c__StaticFields {
        struct WeaponMasterIdle_c* __9;
        struct Action* __9__11_0;
        struct Action* __9__13_0;
    };

    struct WeaponMasterIdle_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeaponMasterIdle_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeaponMasterIdle_c__VTable vtable;
    };

    struct WeaponMasterIntroNode__Fields {
        struct TimelineNode__Fields _;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* InTreeIntro;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnGroundIntro;
    };

    struct WeaponMasterIntroNode {
        struct WeaponMasterIntroNode__Class* klass;
        MonitorData* monitor;
        struct WeaponMasterIntroNode__Fields fields;
    };

    struct WeaponMasterIntroNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Initialize;
        VirtualInvokeData get_Actor;
        VirtualInvokeData get_Transitions;
        VirtualInvokeData get_Decorators;
        VirtualInvokeData get_InteractionNodeStatus;
        VirtualInvokeData get_InteractionSettings;
        VirtualInvokeData get_HasInputTransitions;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData get_OnActivated;
        VirtualInvokeData set_OnActivated;
        VirtualInvokeData get_OnFinished;
        VirtualInvokeData set_OnFinished;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct WeaponMasterIntroNode__StaticFields {
    };

    struct WeaponMasterIntroNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeaponMasterIntroNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeaponMasterIntroNode__VTable vtable;
    };

    struct WeaponMasterPlaceholder__Fields {
        struct NPCEntityPlaceholder__Fields _;
        struct MoonReference_1_ICondition_* ShouldSpawnCondition;
        bool OverrideIdleVariants;
        struct TalkVariant* IdleVariantA;
        struct TalkVariant* IdleVariantB;
        bool OverrideTalkVariants;
        struct TalkVariant* TalkVariantA;
        struct TalkVariant* TalkVariantB;
        struct ICondition* m_resolvedCondition;
    };

    struct WeaponMasterPlaceholder {
        struct WeaponMasterPlaceholder__Class* klass;
        MonitorData* monitor;
        struct WeaponMasterPlaceholder__Fields fields;
    };

    struct WeaponMasterPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
        VirtualInvokeData OnSceneRootPreDisable;
        VirtualInvokeData get_Prefab;
        VirtualInvokeData get_RequiresGroundToSpawn;
        VirtualInvokeData get_CheckForOverlap;
        VirtualInvokeData ClearPrefabLinks;
        VirtualInvokeData get_CanSpawn;
        VirtualInvokeData InstantiateInstance;
        VirtualInvokeData PoolCurrentInstance;
        VirtualInvokeData Spawn;
        VirtualInvokeData OnStart;
        VirtualInvokeData OnPlaceholderEnable;
        VirtualInvokeData OnPlaceholderDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnHealthZero;
        VirtualInvokeData OnDeath;
        VirtualInvokeData UpdateAutoSpawnState;
        VirtualInvokeData UpdateSpawnOnEventState;
        VirtualInvokeData get_IsOnScreenPaddedExtended;
        VirtualInvokeData get_IsOnScreenPadded;
        VirtualInvokeData get_IsOnScreen;
        VirtualInvokeData InstantiateFromPooledObj;
        VirtualInvokeData IsUsingVariations;
        VirtualInvokeData CanUseAutosetupPositionInOnSand;
    };

    struct WeaponMasterPlaceholder__StaticFields {
    };

    struct WeaponMasterPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeaponMasterPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeaponMasterPlaceholder__VTable vtable;
    };

    struct WispTrigger__Fields {
        struct MonoBehaviour__Fields _;
        struct MessageProvider* m_message;
        struct Vector3 Offset;
        struct MoonReference_1_IUberState_* m_state;
        struct DynamicDataResolver* m_dataResolver;
        struct Transform* WispObject;
        struct Transform* FollowedTransform;
        float Speed;
        struct MoonAnimator* m_wisp;
        struct MoonTimeline* m_timeline;
    };

    struct WispTrigger {
        struct WispTrigger__Class* klass;
        MonitorData* monitor;
        struct WispTrigger__Fields fields;
    };

    struct WispTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData OnFixedUpdate;
    };

    struct WispTrigger__StaticFields {
    };

    struct WispTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WispTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WispTrigger__VTable vtable;
    };

    struct AchievementMenuItem__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct AchievementMenuItem {
        struct AchievementMenuItem__Class* klass;
        MonitorData* monitor;
        struct AchievementMenuItem__Fields fields;
    };

    struct AchievementMenuItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementMenuItem__StaticFields {
    };

    struct AchievementMenuItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementMenuItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementMenuItem__VTable vtable;
    };

    struct AchievementScreen__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* LockedAchievementPrefab;
        struct GameObject* SecretAchievementPrefab;
        struct GameObject* EarntAchievementPrefab;
        struct Rect Area;
        int32_t Columns;
    };

    struct AchievementScreen {
        struct AchievementScreen__Class* klass;
        MonitorData* monitor;
        struct AchievementScreen__Fields fields;
    };

    struct AchievementScreen__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementScreen__StaticFields {
    };

    struct AchievementScreen__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementScreen__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementScreen__VTable vtable;
    };

    struct AchievementDatabase__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_AchievementAsset_* m_achievements;
    };

    struct AchievementDatabase {
        struct AchievementDatabase__Class* klass;
        MonitorData* monitor;
        struct AchievementDatabase__Fields fields;
    };

    struct __declspec(align(8)) List_1_AchievementAsset___Fields {
        struct AchievementAsset__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AchievementAsset_ {
        struct List_1_AchievementAsset___Class* klass;
        MonitorData* monitor;
        struct List_1_AchievementAsset___Fields fields;
    };

    struct AchievementAsset__Array {
        struct AchievementAsset__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AchievementAsset* vector[32];
    };

    struct IEnumerator_1_AchievementAsset_ {
        struct IEnumerator_1_AchievementAsset___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ReadOnlyCollection_1_AchievementAsset___Fields {
        struct IList_1_AchievementAsset_* list;
        struct Object* _syncRoot;
    };

    struct ReadOnlyCollection_1_AchievementAsset_ {
        struct ReadOnlyCollection_1_AchievementAsset___Class* klass;
        MonitorData* monitor;
        struct ReadOnlyCollection_1_AchievementAsset___Fields fields;
    };

    struct IList_1_AchievementAsset_ {
        struct IList_1_AchievementAsset___Class* klass;
        MonitorData* monitor;
    };

    struct AchievementAsset__Array__VTable {
    };

    struct AchievementAsset__Array__StaticFields {
    };

    struct AchievementAsset__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementAsset__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementAsset__Array__VTable vtable;
    };

    struct IEnumerator_1_AchievementAsset___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AchievementAsset___StaticFields {
    };

    struct IEnumerator_1_AchievementAsset___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AchievementAsset___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AchievementAsset___VTable vtable;
    };

    struct List_1_AchievementAsset___VTable {
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

    struct List_1_AchievementAsset___StaticFields {
        struct AchievementAsset__Array* _emptyArray;
    };

    struct List_1_AchievementAsset___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AchievementAsset___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AchievementAsset___VTable vtable;
    };

    struct AchievementDatabase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AchievementDatabase__StaticFields {
    };

    struct AchievementDatabase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementDatabase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementDatabase__VTable vtable;
    };

    struct IList_1_AchievementAsset___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_AchievementAsset___StaticFields {
    };

    struct IList_1_AchievementAsset___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_AchievementAsset___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_AchievementAsset___VTable vtable;
    };

    struct ReadOnlyCollection_1_AchievementAsset___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
        VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData System_Collections_Generic_IList_T__Insert;
        VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData System_Collections_IList_Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Count_2;
    };

    struct ReadOnlyCollection_1_AchievementAsset___StaticFields {
    };

    struct ReadOnlyCollection_1_AchievementAsset___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadOnlyCollection_1_AchievementAsset___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadOnlyCollection_1_AchievementAsset___VTable vtable;
    };

    struct CleverMenuOptionsList__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Item;
        float Spacing;
        struct Transform* Origin;
        struct List_1_UnityEngine_GameObject_* m_items;
        struct Transform* ScrollPivot;
        bool Scrollable;
        int32_t OnScreenLimit;
        float m_scrollPosition;
        float m_scrollPositionTarget;
        float ScrollingSpeed;
        struct CleverMenuItemSelectionManager* m_selectionManager;
    };

    struct CleverMenuOptionsList {
        struct CleverMenuOptionsList__Class* klass;
        MonitorData* monitor;
        struct CleverMenuOptionsList__Fields fields;
    };

    struct AlphabetOptions__Fields {
        struct CleverMenuOptionsList__Fields _;
        struct String* m_currentlySelected;
        uint16_t m_firstFilter;
        uint16_t m_secondFilter;
        struct Boolean__Array* m_filtering;
    };

    struct AlphabetOptions {
        struct AlphabetOptions__Class* klass;
        MonitorData* monitor;
        struct AlphabetOptions__Fields fields;
    };

    struct CleverMenuOptionsList__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
    };

    struct CleverMenuOptionsList__StaticFields {
    };

    struct CleverMenuOptionsList__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CleverMenuOptionsList__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CleverMenuOptionsList__VTable vtable;
    };

    struct AlphabetOptions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
    };

    struct AlphabetOptions__StaticFields {
    };

    struct AlphabetOptions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AlphabetOptions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AlphabetOptions__VTable vtable;
    };

    struct __declspec(align(8)) AlphabetOptions_c_DisplayClass11_0__Fields {
        struct String* s;
        struct AlphabetOptions* __4__this;
    };

    struct AlphabetOptions_c_DisplayClass11_0 {
        struct AlphabetOptions_c_DisplayClass11_0__Class* klass;
        MonitorData* monitor;
        struct AlphabetOptions_c_DisplayClass11_0__Fields fields;
    };

    struct AlphabetOptions_c_DisplayClass11_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AlphabetOptions_c_DisplayClass11_0__StaticFields {
    };

    struct AlphabetOptions_c_DisplayClass11_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AlphabetOptions_c_DisplayClass11_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AlphabetOptions_c_DisplayClass11_0__VTable vtable;
    };

    struct AudioAPIOptions__Fields {
        struct CleverMenuOptionsList__Fields _;
        struct CleverMenuItemSelectionManager* SelectionManager;
        struct MessageProvider* Wasapi;
        struct MessageProvider* XAudio2;
        struct MessageProvider* DirectSound;
        struct MessageProvider* Default;
        struct GameObject* PromptPrefab;
    };

    struct AudioAPIOptions {
        struct AudioAPIOptions__Class* klass;
        MonitorData* monitor;
        struct AudioAPIOptions__Fields fields;
    };

    struct AudioAPIOptions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
    };

    struct AudioAPIOptions__StaticFields {
    };

    struct AudioAPIOptions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioAPIOptions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioAPIOptions__VTable vtable;
    };

    struct AudioDeviceOptions__Fields {
        struct CleverMenuOptionsList__Fields _;
        struct TextBox* LabelTextBox;
        int32_t LabelMaxChars;
        int32_t ListItemMaxChars;
    };

    struct AudioDeviceOptions {
        struct AudioDeviceOptions__Class* klass;
        MonitorData* monitor;
        struct AudioDeviceOptions__Fields fields;
    };

    struct AudioDeviceOptions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
    };

    struct AudioDeviceOptions__StaticFields {
    };

    struct AudioDeviceOptions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioDeviceOptions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioDeviceOptions__VTable vtable;
    };

    struct __declspec(align(8)) AudioDeviceOptions_c_DisplayClass4_0__Fields {
        struct String* deviceName;
        uint32_t deviceId;
        struct AudioDeviceOptions* __4__this;
    };

    struct AudioDeviceOptions_c_DisplayClass4_0 {
        struct AudioDeviceOptions_c_DisplayClass4_0__Class* klass;
        MonitorData* monitor;
        struct AudioDeviceOptions_c_DisplayClass4_0__Fields fields;
    };

    struct AudioDeviceOptions_c_DisplayClass4_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AudioDeviceOptions_c_DisplayClass4_0__StaticFields {
    };

    struct AudioDeviceOptions_c_DisplayClass4_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioDeviceOptions_c_DisplayClass4_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioDeviceOptions_c_DisplayClass4_0__VTable vtable;
    };

    struct CleverMenuItemGroupBase__Fields {
        struct MonoBehaviour__Fields _;
        struct Action* OnBackPressed;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct CleverMenuItemGroupBase {
        struct CleverMenuItemGroupBase__Class* klass;
        MonitorData* monitor;
        struct CleverMenuItemGroupBase__Fields fields;
    };

    struct CleverValueSlider__Fields {
        struct CleverMenuItemGroupBase__Fields _;
        struct CleverMenuItem* CleverMenuItem;
        struct SoundProvider* ChangeVolumeUpSound;
        struct SoundProvider* ChangeVolumeDownSound;
        float MinValue;
        float MaxValue;
        float DefaultValue;
        float m_step;
        struct MessageBox__Array* NavigateMessageBoxes;
        struct MessageProvider* ActivateNavigateMessageProvider;
        struct MessageProvider* DeactivateNavigateMessageProvider;
        struct BaseAnimator* HighlightAnimator;
        struct Transform* SliderDot;
        struct Transform* SliderBackground;
        struct Transform* SliderDefaultValueBar;
        float MinX;
        float MaxX;
        bool SnapSliderAroundDefault;
        bool ForceDefaultToCenter;
        struct SoundPlayer* m_soundPlayer;
        struct TextBox* ValueTextBox;
        struct Rect m_sliderRect;
        float m_defaultValueSnapRange;
        bool m_isActive;
        bool _IsVisible_k__BackingField;
        bool m_isHighlightVisible;
        float m_holdRemainingTime;
        float m_holdAccelerationTime;
        bool m_isDragged;
    };

    struct CleverValueSlider {
        struct CleverValueSlider__Class* klass;
        MonitorData* monitor;
        struct CleverValueSlider__Fields fields;
    };

    enum class MenuTabBackground__Enum : int32_t {
        Dark = 0x00000000,
        Clear = 0x00000001,
        Black = 0x00000002,
    };

    struct MenuTabBackground__Enum__Boxed {
        struct MenuTabBackground__Enum__Class* klass;
        MonitorData* monitor;
        MenuTabBackground__Enum value;
    };

    struct CleverValueSliderHideMenu__Fields {
        struct CleverValueSlider__Fields _;
        struct List_1_LegacyTransparencyAnimator_* ItemsToHide;
        struct LegacyTransparencyAnimator* ExternalTransparencyAnimator;
        struct CleverValueSlider* PairedSlider;
        struct CleverMenuItemSelectionManager* SelectionManager;
        bool m_backgroundDisabled;
        float m_backgroundFadeTimer;
        bool DisableInput;
        MenuTabBackground__Enum m_originalBackgroundMode;
    };

    struct CleverValueSliderHideMenu {
        struct CleverValueSliderHideMenu__Class* klass;
        MonitorData* monitor;
        struct CleverValueSliderHideMenu__Fields fields;
    };

    struct BrightnessVolumeSlider__Fields {
        struct CleverValueSliderHideMenu__Fields _;
    };

    struct BrightnessVolumeSlider {
        struct BrightnessVolumeSlider__Class* klass;
        MonitorData* monitor;
        struct BrightnessVolumeSlider__Fields fields;
    };

    struct CleverMenuItemGroup__Fields {
        struct CleverMenuItemGroupBase__Fields _;
        struct CleverMenuItemGroup* Root;
        struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem_* Options;
        struct CleverMenuItemSelectionManager* SelectionManager;
        struct Event_1* OnExpandSound;
        struct Event_1* OnCollapseSound;
        struct Event_1* OnChangeSelectionSound;
        bool ExpandOnHighlight;
        struct Condition_1* CanBeEnteredCondition;
        struct LegacyTransparencyAnimator* HighlightAnimator;
        bool SuspendOnActivated;
        bool SelectOnEnable;
        bool m_playChangeSound;
        bool m_isFrozen;
        struct HashSet_1_Moon_ISuspendable_* m_suspendablesIgnore;
    };

    struct CleverMenuItemGroup {
        struct CleverMenuItemGroup__Class* klass;
        MonitorData* monitor;
        struct CleverMenuItemGroup__Fields fields;
    };

    struct __declspec(align(8)) List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Fields {
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem_ {
        struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class* klass;
        MonitorData* monitor;
        struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Fields fields;
    };

    struct __declspec(align(8)) CleverMenuItemGroup_CleverMenuItemGroupItem__Fields {
        struct CleverMenuItem* MenuItem;
        struct CleverMenuItemGroupBase* ItemGroup;
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem {
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__Class* klass;
        MonitorData* monitor;
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__Fields fields;
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array {
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CleverMenuItemGroup_CleverMenuItemGroupItem* vector[32];
    };

    struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem_ {
        struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class* klass;
        MonitorData* monitor;
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem__StaticFields {
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__VTable vtable;
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array__VTable {
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array__StaticFields {
    };

    struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array__VTable vtable;
    };

    struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields {
    };

    struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable vtable;
    };

    struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable {
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

    struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields {
        struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array* _emptyArray;
    };

    struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable vtable;
    };

    struct CleverMenuItemGroup__VTable {
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
    };

} // namespace app
