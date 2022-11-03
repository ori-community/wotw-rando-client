namespace app {
    struct NPCEntityPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_* Interaction;
        struct QuestNodeSetup* OverrideQuestNodeSetup;
        struct MessageProvider* OverrideInteractionHintMessage;
        bool ApplyRigOffset;
        float RigOffsetZ;
        bool OverrideInteractionSettings;
        struct NPCEntityPlaceholder_NPCInteractionSettings InteractionSettings;
        bool AttachToTransform;
        struct Transform* AttachTransform;
        struct Vector3 AttachAnchor;
    };

    struct NPCEntityPlaceholder {
        struct NPCEntityPlaceholder__Class* klass;
        MonitorData* monitor;
        struct NPCEntityPlaceholder__Fields fields;
    };

    struct BuilderPlaceholder__Fields {
        struct NPCEntityPlaceholder__Fields _;
        struct EventTriggerGameplayAnimator* LookEvent;
        bool m_wasLookingLeft;
        bool m_hadInstance;
    };

    struct BuilderPlaceholder {
        struct BuilderPlaceholder__Class* klass;
        MonitorData* monitor;
        struct BuilderPlaceholder__Fields fields;
    };

    struct QuestNodeSetup__Fields {
        struct ScriptableObject__Fields _;
        struct List_1_QuestNodeSetup_QuestInteractionSetup_* QuestInteractionSets;
    };

    struct QuestNodeSetup {
        struct QuestNodeSetup__Class* klass;
        MonitorData* monitor;
        struct QuestNodeSetup__Fields fields;
    };

    struct __declspec(align(8)) List_1_QuestNodeSetup_QuestInteractionSetup___Fields {
        struct QuestNodeSetup_QuestInteractionSetup__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_QuestNodeSetup_QuestInteractionSetup_ {
        struct List_1_QuestNodeSetup_QuestInteractionSetup___Class* klass;
        MonitorData* monitor;
        struct List_1_QuestNodeSetup_QuestInteractionSetup___Fields fields;
    };

    struct __declspec(align(8)) QuestNodeSetup_QuestInteractionSetup__Fields {
        struct SerializedIntUberState* QuestUberState;
        struct SceneMetaData* SceneMetaData;
        struct List_1_QuestNodeSetup_QuestInteractionSet_* InteractionSets;
    };

    struct QuestNodeSetup_QuestInteractionSetup {
        struct QuestNodeSetup_QuestInteractionSetup__Class* klass;
        MonitorData* monitor;
        struct QuestNodeSetup_QuestInteractionSetup__Fields fields;
    };

    struct __declspec(align(8)) List_1_QuestNodeSetup_QuestInteractionSet___Fields {
        struct QuestNodeSetup_QuestInteractionSet__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_QuestNodeSetup_QuestInteractionSet_ {
        struct List_1_QuestNodeSetup_QuestInteractionSet___Class* klass;
        MonitorData* monitor;
        struct List_1_QuestNodeSetup_QuestInteractionSet___Fields fields;
    };

    struct __declspec(align(8)) QuestNodeSetup_QuestInteractionSet__Fields {
        int32_t QuestUberStateValue;
        struct List_1_QuestNodeSetup_QuestInteraction_* Interactions;
    };

    struct QuestNodeSetup_QuestInteractionSet {
        struct QuestNodeSetup_QuestInteractionSet__Class* klass;
        MonitorData* monitor;
        struct QuestNodeSetup_QuestInteractionSet__Fields fields;
    };

    struct __declspec(align(8)) List_1_QuestNodeSetup_QuestInteraction___Fields {
        struct QuestNodeSetup_QuestInteraction__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_QuestNodeSetup_QuestInteraction_ {
        struct List_1_QuestNodeSetup_QuestInteraction___Class* klass;
        MonitorData* monitor;
        struct List_1_QuestNodeSetup_QuestInteraction___Fields fields;
    };

    enum class QuestNodeSetup_RewardType__Enum : int32_t {
        None = 0x00000000,
        CompletedReward = 0x00000001,
        WelcomeReward = 0x00000002,
    };

    struct QuestNodeSetup_RewardType__Enum__Boxed {
        struct QuestNodeSetup_RewardType__Enum__Class* klass;
        MonitorData* monitor;
        QuestNodeSetup_RewardType__Enum value;
    };

    struct __declspec(align(8)) QuestNodeSetup_QuestInteraction__Fields {
        bool LocationIndependent;
        bool TopPriority;
        bool InvertCondition;
        struct ConditionUberState* Condition;
        struct MessageProvider* MessageProvider;
        bool IncrementQuestUberState;
        bool Autocontinue;
        struct DesiredUberStateComposite* StateChange;
        QuestNodeSetup_RewardType__Enum Reward;
    };

    struct QuestNodeSetup_QuestInteraction {
        struct QuestNodeSetup_QuestInteraction__Class* klass;
        MonitorData* monitor;
        struct QuestNodeSetup_QuestInteraction__Fields fields;
    };

    struct QuestNodeSetup_QuestInteraction__Array {
        struct QuestNodeSetup_QuestInteraction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct QuestNodeSetup_QuestInteraction* vector[32];
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteraction_ {
        struct IEnumerator_1_QuestNodeSetup_QuestInteraction___Class* klass;
        MonitorData* monitor;
    };

    struct QuestNodeSetup_QuestInteractionSet__Array {
        struct QuestNodeSetup_QuestInteractionSet__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct QuestNodeSetup_QuestInteractionSet* vector[32];
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet_ {
        struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___Class* klass;
        MonitorData* monitor;
    };

    struct QuestNodeSetup_QuestInteractionSetup__Array {
        struct QuestNodeSetup_QuestInteractionSetup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct QuestNodeSetup_QuestInteractionSetup* vector[32];
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup_ {
        struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___Class* klass;
        MonitorData* monitor;
    };

    struct QuestNodeSetup_RewardType__Enum__VTable {
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

    struct QuestNodeSetup_RewardType__Enum__StaticFields {
    };

    struct QuestNodeSetup_RewardType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup_RewardType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup_RewardType__Enum__VTable vtable;
    };

    struct QuestNodeSetup_QuestInteraction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct QuestNodeSetup_QuestInteraction__StaticFields {
    };

    struct QuestNodeSetup_QuestInteraction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup_QuestInteraction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup_QuestInteraction__VTable vtable;
    };

    struct QuestNodeSetup_QuestInteraction__Array__VTable {
    };

    struct QuestNodeSetup_QuestInteraction__Array__StaticFields {
    };

    struct QuestNodeSetup_QuestInteraction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup_QuestInteraction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup_QuestInteraction__Array__VTable vtable;
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteraction___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteraction___StaticFields {
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteraction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_QuestNodeSetup_QuestInteraction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_QuestNodeSetup_QuestInteraction___VTable vtable;
    };

    struct List_1_QuestNodeSetup_QuestInteraction___VTable {
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

    struct List_1_QuestNodeSetup_QuestInteraction___StaticFields {
        struct QuestNodeSetup_QuestInteraction__Array* _emptyArray;
    };

    struct List_1_QuestNodeSetup_QuestInteraction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_QuestNodeSetup_QuestInteraction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_QuestNodeSetup_QuestInteraction___VTable vtable;
    };

    struct QuestNodeSetup_QuestInteractionSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct QuestNodeSetup_QuestInteractionSet__StaticFields {
    };

    struct QuestNodeSetup_QuestInteractionSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup_QuestInteractionSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup_QuestInteractionSet__VTable vtable;
    };

    struct QuestNodeSetup_QuestInteractionSet__Array__VTable {
    };

    struct QuestNodeSetup_QuestInteractionSet__Array__StaticFields {
    };

    struct QuestNodeSetup_QuestInteractionSet__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup_QuestInteractionSet__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup_QuestInteractionSet__Array__VTable vtable;
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___StaticFields {
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___VTable vtable;
    };

    struct List_1_QuestNodeSetup_QuestInteractionSet___VTable {
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

    struct List_1_QuestNodeSetup_QuestInteractionSet___StaticFields {
        struct QuestNodeSetup_QuestInteractionSet__Array* _emptyArray;
    };

    struct List_1_QuestNodeSetup_QuestInteractionSet___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_QuestNodeSetup_QuestInteractionSet___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_QuestNodeSetup_QuestInteractionSet___VTable vtable;
    };

    struct QuestNodeSetup_QuestInteractionSetup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct QuestNodeSetup_QuestInteractionSetup__StaticFields {
    };

    struct QuestNodeSetup_QuestInteractionSetup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup_QuestInteractionSetup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup_QuestInteractionSetup__VTable vtable;
    };

    struct QuestNodeSetup_QuestInteractionSetup__Array__VTable {
    };

    struct QuestNodeSetup_QuestInteractionSetup__Array__StaticFields {
    };

    struct QuestNodeSetup_QuestInteractionSetup__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup_QuestInteractionSetup__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup_QuestInteractionSetup__Array__VTable vtable;
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___StaticFields {
    };

    struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___VTable vtable;
    };

    struct List_1_QuestNodeSetup_QuestInteractionSetup___VTable {
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

    struct List_1_QuestNodeSetup_QuestInteractionSetup___StaticFields {
        struct QuestNodeSetup_QuestInteractionSetup__Array* _emptyArray;
    };

    struct List_1_QuestNodeSetup_QuestInteractionSetup___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_QuestNodeSetup_QuestInteractionSetup___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_QuestNodeSetup_QuestInteractionSetup___VTable vtable;
    };

    struct QuestNodeSetup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct QuestNodeSetup__StaticFields {
    };

    struct QuestNodeSetup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuestNodeSetup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuestNodeSetup__VTable vtable;
    };

    struct NPCEntityPlaceholder_NPCInteractionSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NPCEntityPlaceholder_NPCInteractionSettings__StaticFields {
    };

    struct NPCEntityPlaceholder_NPCInteractionSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NPCEntityPlaceholder_NPCInteractionSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NPCEntityPlaceholder_NPCInteractionSettings__VTable vtable;
    };

    struct NPCEntityPlaceholder__VTable {
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

    struct NPCEntityPlaceholder__StaticFields {
    };

    struct NPCEntityPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NPCEntityPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NPCEntityPlaceholder__VTable vtable;
    };

    struct BuilderPlaceholder__VTable {
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

    struct BuilderPlaceholder__StaticFields {
    };

    struct BuilderPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuilderPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuilderPlaceholder__VTable vtable;
    };

    enum class HasEnoughExperienceCondition_ComparisonMode__Enum : int32_t {
        GreaterThanOrEqual = 0x00000000,
        LessThan = 0x00000001,
    };

    struct HasEnoughExperienceCondition_ComparisonMode__Enum__Boxed {
        struct HasEnoughExperienceCondition_ComparisonMode__Enum__Class* klass;
        MonitorData* monitor;
        HasEnoughExperienceCondition_ComparisonMode__Enum value;
    };

    struct HasEnoughExperienceCondition__Fields {
        struct Condition_1__Fields _;
        struct MoonInt* Cost;
        HasEnoughExperienceCondition_ComparisonMode__Enum Compare;
    };

    struct HasEnoughExperienceCondition {
        struct HasEnoughExperienceCondition__Class* klass;
        MonitorData* monitor;
        struct HasEnoughExperienceCondition__Fields fields;
    };

    struct HasEnoughExperienceCondition_ComparisonMode__Enum__VTable {
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

    struct HasEnoughExperienceCondition_ComparisonMode__Enum__StaticFields {
    };

    struct HasEnoughExperienceCondition_ComparisonMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasEnoughExperienceCondition_ComparisonMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasEnoughExperienceCondition_ComparisonMode__Enum__VTable vtable;
    };

    struct HasEnoughExperienceCondition__VTable {
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

    struct HasEnoughExperienceCondition__StaticFields {
    };

    struct HasEnoughExperienceCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasEnoughExperienceCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasEnoughExperienceCondition__VTable vtable;
    };

    enum class HasKeystonesCondition_ComparisonMode__Enum : int32_t {
        GreaterThanOrEqual = 0x00000000,
        LessThan = 0x00000001,
        Equal = 0x00000002,
    };

    struct HasKeystonesCondition_ComparisonMode__Enum__Boxed {
        struct HasKeystonesCondition_ComparisonMode__Enum__Class* klass;
        MonitorData* monitor;
        HasKeystonesCondition_ComparisonMode__Enum value;
    };

    struct HasKeystonesCondition__Fields {
        struct Condition_1__Fields _;
        struct MoonInt* Count;
        HasKeystonesCondition_ComparisonMode__Enum Compare;
    };

    struct HasKeystonesCondition {
        struct HasKeystonesCondition__Class* klass;
        MonitorData* monitor;
        struct HasKeystonesCondition__Fields fields;
    };

    struct HasKeystonesCondition_ComparisonMode__Enum__VTable {
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

    struct HasKeystonesCondition_ComparisonMode__Enum__StaticFields {
    };

    struct HasKeystonesCondition_ComparisonMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasKeystonesCondition_ComparisonMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasKeystonesCondition_ComparisonMode__Enum__VTable vtable;
    };

    struct HasKeystonesCondition__VTable {
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

    struct HasKeystonesCondition__StaticFields {
    };

    struct HasKeystonesCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasKeystonesCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasKeystonesCondition__VTable vtable;
    };

    enum class HasOreCondition_ComparisonMode__Enum : int32_t {
        GreaterThanOrEqual = 0x00000000,
        LessThan = 0x00000001,
    };

    struct HasOreCondition_ComparisonMode__Enum__Boxed {
        struct HasOreCondition_ComparisonMode__Enum__Class* klass;
        MonitorData* monitor;
        HasOreCondition_ComparisonMode__Enum value;
    };

    struct HasOreCondition__Fields {
        struct Condition_1__Fields _;
        struct MoonInt* Cost;
        HasOreCondition_ComparisonMode__Enum Compare;
    };

    struct HasOreCondition {
        struct HasOreCondition__Class* klass;
        MonitorData* monitor;
        struct HasOreCondition__Fields fields;
    };

    struct HasOreCondition_ComparisonMode__Enum__VTable {
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

    struct HasOreCondition_ComparisonMode__Enum__StaticFields {
    };

    struct HasOreCondition_ComparisonMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasOreCondition_ComparisonMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasOreCondition_ComparisonMode__Enum__VTable vtable;
    };

    struct HasOreCondition__VTable {
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

    struct HasOreCondition__StaticFields {
    };

    struct HasOreCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasOreCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasOreCondition__VTable vtable;
    };

    struct HasPurchasedBuilderProjectCondition__Fields {
        struct Condition_1__Fields _;
        bool Inverse;
    };

    struct HasPurchasedBuilderProjectCondition {
        struct HasPurchasedBuilderProjectCondition__Class* klass;
        MonitorData* monitor;
        struct HasPurchasedBuilderProjectCondition__Fields fields;
    };

    struct HasPurchasedBuilderProjectCondition__VTable {
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

    struct HasPurchasedBuilderProjectCondition__StaticFields {
    };

    struct HasPurchasedBuilderProjectCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasPurchasedBuilderProjectCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasPurchasedBuilderProjectCondition__VTable vtable;
    };

    struct GardenerEntity__Fields {
        struct NPCEntity__Fields _;
        struct TalkVariant* TalkIdle;
        struct CheckpointFunctionality ProjectPurchasedCheckpoint;
        struct MoonTimeline* DefaultCurrentProjectTimeline;
        bool PurchasedProject;
    };

    struct GardenerEntity {
        struct GardenerEntity__Class* klass;
        MonitorData* monitor;
        struct GardenerEntity__Fields fields;
    };

    struct GardenerEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_BehaviourTree;
        VirtualInvokeData ResolveDamage;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData ShouldKillBubble;
        VirtualInvokeData CreateTimelineParentEntity;
        VirtualInvokeData get_AddChildren;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
        VirtualInvokeData get_ExternalID;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_CameraTargetActive;
        VirtualInvokeData get_CameraTargetPosition;
        VirtualInvokeData get_CameraTargetPadding;
        VirtualInvokeData get_CameraInfluencePosition;
        VirtualInvokeData AdjustCameraTargetWeight;
        VirtualInvokeData get_CameraInfluenceMinDist;
        VirtualInvokeData get_CameraInfluenceMaxDist;
        VirtualInvokeData get_CameraZoomFactor;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData GetTargetData;
        VirtualInvokeData IPortalVisitor_get_Position;
        VirtualInvokeData IPortalVisitor_set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
        VirtualInvokeData get_IsFacingTarget;
        VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
        VirtualInvokeData get_ScreenPadding;
        VirtualInvokeData IsBehaviourTreePaused;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnAwake;
        VirtualInvokeData GetBehaviourTree;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData UnserializedInitialization;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
        VirtualInvokeData OnSuspendedStay;
        VirtualInvokeData OnUpdate_2;
        VirtualInvokeData EnterSpawningState;
        VirtualInvokeData UpdateSpawningState;
        VirtualInvokeData ExitSpawningState;
        VirtualInvokeData EnterDecisionMakingState;
        VirtualInvokeData UpdateDecisionMakingState;
        VirtualInvokeData ExitDecisionMakingState;
        VirtualInvokeData EnterReactionState;
        VirtualInvokeData UpdateReactionState;
        VirtualInvokeData ExitReactionState;
        VirtualInvokeData EnterCinematicState;
        VirtualInvokeData UpdateCinematicState;
        VirtualInvokeData ExitCinematicState;
        VirtualInvokeData GetActiveLocomotion;
        VirtualInvokeData OnContactDamageDealt;
        VirtualInvokeData OnHandleFireDamage;
        VirtualInvokeData OnHandleIceDamage;
        VirtualInvokeData OnDamageReceived;
        VirtualInvokeData OnDamageBlocked;
        VirtualInvokeData DeactivateDamageReceivers;
        VirtualInvokeData InstantKill;
        VirtualInvokeData OnDied;
        VirtualInvokeData SpawnOrbs;
        VirtualInvokeData OnDiedOutOfBounds;
        VirtualInvokeData OnEndDeathBehaviour;
        VirtualInvokeData OnPostRestoreCheckpoint;
        VirtualInvokeData ResetEntity;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData IsFacingPoint;
        VirtualInvokeData ResolveDamage_1;
        VirtualInvokeData get_CameraTargetActive_1;
        VirtualInvokeData get_CameraTargetPosition_1;
        VirtualInvokeData get_CameraTargetPadding_1;
        VirtualInvokeData get_CameraInfluenceMinDist_1;
        VirtualInvokeData get_CameraInfluenceMaxDist_1;
        VirtualInvokeData get_CameraZoomFactor_1;
        VirtualInvokeData get_TargetType_1;
        VirtualInvokeData AdjustCameraTargetWeight_1;
        VirtualInvokeData get_IsAggroed;
        VirtualInvokeData get_InteractableType;
        VirtualInvokeData CanInteractWithCharacter;
        VirtualInvokeData OnInteractionStart;
        VirtualInvokeData InteractionUpdate;
        VirtualInvokeData OnInteractionEnd;
        VirtualInvokeData ShouldFinishInteraction;
        VirtualInvokeData get_ActivationMode;
        VirtualInvokeData get_ActivationButton;
        VirtualInvokeData get_InteractionMessageHint;
        VirtualInvokeData get_DialogActorName;
        VirtualInvokeData get_DialogActorAnimator;
        VirtualInvokeData get_DialogActorPosition;
        VirtualInvokeData get_InteractionActorName;
        VirtualInvokeData get_InteractionActorAnimator;
        VirtualInvokeData get_InteractionActorPosition;
        VirtualInvokeData get_CanEffectivelyStartInteraction;
        VirtualInvokeData get_ActivationButton_1;
        VirtualInvokeData get_DialogActorName_1;
        VirtualInvokeData get_InteractionActorName_1;
        VirtualInvokeData UpdateAnimParameter;
        VirtualInvokeData CanInteractWithCharacter_1;
        VirtualInvokeData OnInteractionStart_1;
        VirtualInvokeData InteractionUpdate_1;
        VirtualInvokeData OnInteractionEnd_1;
        VirtualInvokeData get_ActivationMode_1;
        VirtualInvokeData SetInteractionCameraOffsetZone;
    };

} // namespace app
