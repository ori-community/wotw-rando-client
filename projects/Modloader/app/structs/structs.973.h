namespace app {
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
        struct AttackableSwitchSetupData__Array* _emptyArray;
    };

    struct List_1_AttackableSwitchSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AttackableSwitchSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StateHolder_1_AttackableSwitchSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackableSwitchSetupHolder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackableSwitchSetupHolder__VTable vtable;
    };

    struct AttackableSwitch__Fields {
        struct GuidOwner__Fields _;
        struct AttackableSwitchSetupHolder* SetupStates;
        struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
        struct StateChangeDefinition* OnActivate;
        struct StateChangeDefinition* OnDeactivate;
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
        struct MoonTimeline* m_activateTransition;
        struct MoonTimeline* m_deactivateTransition;
        struct List_1_AttackableSwitch_AttackTypes_* Attacks;
        bool m_useNewDataStructure;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct Action_1_Damage_* m_damageReceived;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct AttackableSwitch {
        struct AttackableSwitch__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackableSwitch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackableSwitch__VTable vtable;
    };

    struct AttackableSwitch_c {
        struct AttackableSwitch_c__Class* klass;
        MonitorData* monitor;
    };

    struct AttackableSwitch_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AttackableSwitch_c__StaticFields {
        struct AttackableSwitch_c* __9;
        struct Action_1_Damage_* __9__106_0;
    };

    struct AttackableSwitch_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackableSwitch_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackableSwitch_c__VTable vtable;
    };

    struct StateHolder_1_SwitchSeriesPuzzleSetupData___Fields {
        struct StateHolder__Fields _;
        struct List_1_SwitchSeriesPuzzleSetupData_* StateData;
        struct List_1_IIndexedItem_* m_cachedStates;
    };

    struct StateHolder_1_SwitchSeriesPuzzleSetupData_ {
        struct StateHolder_1_SwitchSeriesPuzzleSetupData___Class* klass;
        MonitorData* monitor;
        struct StateHolder_1_SwitchSeriesPuzzleSetupData___Fields fields;
    };

    struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Fields {
        struct StateHolder_1_SwitchSeriesPuzzleSetupData___Fields _;
    };

    struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData_ {
        struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Class* klass;
        MonitorData* monitor;
        struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Fields fields;
    };

    struct SwitchSeriesPuzzleSwitchSetupHolder__Fields {
        struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___Fields _;
    };

    struct SwitchSeriesPuzzleSwitchSetupHolder {
        struct SwitchSeriesPuzzleSwitchSetupHolder__Class* klass;
        MonitorData* monitor;
        struct SwitchSeriesPuzzleSwitchSetupHolder__Fields fields;
    };

    struct __declspec(align(8)) List_1_SwitchSeriesPuzzleSetupData___Fields {
        struct SwitchSeriesPuzzleSetupData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SwitchSeriesPuzzleSetupData_ {
        struct List_1_SwitchSeriesPuzzleSetupData___Class* klass;
        MonitorData* monitor;
        struct List_1_SwitchSeriesPuzzleSetupData___Fields fields;
    };

    struct __declspec(align(8)) SwitchSeriesPuzzleSetupData__Fields {
        struct MoonTimeline* m_transition;
        bool m_desiredValue;
    };

    struct SwitchSeriesPuzzleSetupData {
        struct SwitchSeriesPuzzleSetupData__Class* klass;
        MonitorData* monitor;
        struct SwitchSeriesPuzzleSetupData__Fields fields;
    };

    struct SwitchSeriesPuzzleSetupData__Array {
        struct SwitchSeriesPuzzleSetupData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SwitchSeriesPuzzleSetupData* vector[32];
    };

    struct IEnumerator_1_SwitchSeriesPuzzleSetupData_ {
        struct IEnumerator_1_SwitchSeriesPuzzleSetupData___Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwitchSeriesPuzzleSetupData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwitchSeriesPuzzleSetupData__VTable vtable;
    };

    struct SwitchSeriesPuzzleSetupData__Array__VTable {
    };

    struct SwitchSeriesPuzzleSetupData__Array__StaticFields {
    };

    struct SwitchSeriesPuzzleSetupData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwitchSeriesPuzzleSetupData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwitchSeriesPuzzleSetupData__Array__VTable vtable;
    };

    struct IEnumerator_1_SwitchSeriesPuzzleSetupData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SwitchSeriesPuzzleSetupData___StaticFields {
    };

    struct IEnumerator_1_SwitchSeriesPuzzleSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SwitchSeriesPuzzleSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct SwitchSeriesPuzzleSetupData__Array* _emptyArray;
    };

    struct List_1_SwitchSeriesPuzzleSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_SwitchSeriesPuzzleSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StateHolder_1_SwitchSeriesPuzzleSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransitionBasedSetupHolder_1_SwitchSeriesPuzzleSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwitchSeriesPuzzleSwitchSetupHolder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwitchSeriesPuzzleSwitchSetupHolder__VTable vtable;
    };

    struct SwitchSeriesPuzzle__Fields {
        struct MonoBehaviour__Fields _;
        struct SwitchSeriesPuzzleSwitchSetupHolder* SetupStates;
        struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
        struct List_1_Moon_MoonReference_1__14* TriggerOrder;
        struct IUberState__Array* States;
        struct Single__Array* m_prevValues;
        int32_t m_step;
    };

    struct SwitchSeriesPuzzle {
        struct SwitchSeriesPuzzle__Class* klass;
        MonitorData* monitor;
        struct SwitchSeriesPuzzle__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_MoonReference_1__14__Fields {
        struct MoonReference_1_IGenericUberState___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_MoonReference_1__14 {
        struct List_1_Moon_MoonReference_1__14__Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_MoonReference_1__14__Fields fields;
    };

    struct MoonReference_1_IGenericUberState___Array {
        struct MoonReference_1_IGenericUberState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonReference_1_IGenericUberState_* vector[32];
    };

    struct IEnumerator_1_Moon_MoonReference_1__14 {
        struct IEnumerator_1_Moon_MoonReference_1__14__Class* klass;
        MonitorData* monitor;
    };

    struct MoonReference_1_IGenericUberState___Array__VTable {
    };

    struct MoonReference_1_IGenericUberState___Array__StaticFields {
    };

    struct MoonReference_1_IGenericUberState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_IGenericUberState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_IGenericUberState___Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_MoonReference_1__14__VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_MoonReference_1__14__StaticFields {
    };

    struct IEnumerator_1_Moon_MoonReference_1__14__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_MoonReference_1__14__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct MoonReference_1_IGenericUberState___Array* _emptyArray;
    };

    struct List_1_Moon_MoonReference_1__14__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_MoonReference_1__14__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwitchSeriesPuzzle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwitchSeriesPuzzle__VTable vtable;
    };

    struct TeleportPlayerOnTimelineEvent__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_UnityEngine_Transform_* Destination;
        bool PlaceOnGround;
        struct EventTriggerAnimator* Event;
        bool CreateCheckpoint;
    };

    struct TeleportPlayerOnTimelineEvent {
        struct TeleportPlayerOnTimelineEvent__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TeleportPlayerOnTimelineEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TeleportPlayerOnTimelineEvent__VTable vtable;
    };

    struct TransparentWallAnimator_c {
        struct TransparentWallAnimator_c__Class* klass;
        MonitorData* monitor;
    };

    struct TransparentWallAnimator_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TransparentWallAnimator_c__StaticFields {
        struct TransparentWallAnimator_c* __9;
        struct Action* __9__15_0;
    };

    struct TransparentWallAnimator_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparentWallAnimator_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparentWallAnimator_c__VTable vtable;
    };

    enum class BugReporter_State__Enum : int32_t {
        Idle = 0x00000000,
        Connecting = 0x00000001,
        Sending = 0x00000002,
        WaitingForAck = 0x00000003,
        Closing = 0x00000004,
    };

    struct BugReporter_State__Enum__Boxed {
        struct BugReporter_State__Enum__Class* klass;
        MonitorData* monitor;
        BugReporter_State__Enum value;
    };

    struct BugReporter__Fields {
        struct MonoBehaviour__Fields _;
        bool ShowStatusOverlay;
        struct VideoEditor* VideoEditor;
        struct String* Server;
        struct GameObject* VideoEditorPrefab;
        struct Queue_1_List_1_System_Byte_* m_messageQueue;
        struct Thread* m_connectThread;
        bool m_status;
        bool m_attemptSend;
        bool m_connected;
        float m_updateInterval;
        float m_updateTime;
        float m_currentStateTime;
        struct TcpClient* m_client;
        struct NetworkStream* m_stream;
        int32_t m_messageIndex;
        struct List_1_System_Byte__1* m_messages;
        bool Active;
        float m_activeTime;
        struct BugReporter_BugReport* m_bug;
        struct List_1_System_String_* m_attachments;
        struct List_1_System_String_* m_dropboxAttachments;
        struct String* m_date;
        struct String* m_bugPath;
        struct String* m_bugContents;
        struct List_1_BugReporter_Attachment_* m_attachmentsGUI;
        struct String* m_replay;
        struct List_1_BugReporter_Attachment_* m_screenshots;
        struct Dictionary_2_System_String_System_Boolean_* m_recordings;
        bool m_attachReplay;
        bool m_attachLog;
        bool m_attachTrim;
        bool m_attachSave;
        bool m_attachOutputDir;
        bool m_defaultAttachments;
        bool m_submissionPrepared;
        bool RecordingActive;
        float RecordTime;
        int32_t RecordingCount;
        bool QueueRecordingUpdate;
        bool m_replayReady;
        bool m_recordingAvailable;
        struct String* m_recordingType;
        bool m_showAdvancedControls;
        struct String__Array* m_controls;
        struct String__Array* m_defaultControls;
        struct String__Array* m_advancedControls;
        int32_t m_controlIndex;
        int32_t m_previousControlIndex;
        bool m_doKeyboardFocus;
        bool m_queueImGuiUnregister;
        struct Vector2 m_scrollPosition;
        bool m_collapseUI;
        float m_preparationTime;
        float m_submissionQueueTime;
        bool m_replayLoaded;
        bool m_submissionQueued;
        bool SwitchHost;
        struct String* m_recordingDirectory;
        struct String* m_dataDirectory;
        bool m_dataDirectoryReceived;
        bool m_setDataDirectory;
        bool m_activationAttempted;
        bool m_showShortcuts;
        struct Texture2D* m_recordingTexture;
        struct GUIStyle* m_errorStyle;
        struct String* m_errorText;
        float m_errorTime;
        struct GUIStyle* m_exceptionStyle;
        struct String* m_exceptionText;
        float m_exceptionTime;
        bool m_fastReport;
        bool m_recordingWarmup;
        int32_t m_recordingCount;
        float m_lastDirectoryCheck;
        bool m_obsStarted;
        struct String* m_obsDirectory;
        struct String* m_obsCommand;
        struct String* m_obsScene;
        struct String* m_ffmpegPath;
        int32_t m_replayCount;
        struct ConsoleConnection* ConsoleConnection;
        int32_t m_stuckReports;
        BugReporter_State__Enum m_state;

        bool m_simpleFps;
        bool m_instantiation;
        bool m_microProfiler;
    };

    struct BugReporter {
        struct BugReporter__Class* klass;
        MonitorData* monitor;
        struct BugReporter__Fields fields;
    };

    struct VideoEditor__Fields {
        struct MonoBehaviour__Fields _;
        struct Button* m_recordButton;
        struct Button* m_playButton;
        struct Canvas* m_canvas;
        struct EventSystem* m_eventSystem;
        struct List_1_UnityEngine_UI_Button_* m_buttonsToDestroyOnSwitch;
        struct VideoPlayer* m_videoPlayer;
        struct AudioSource* m_audioSource;
        struct VideoProgressBar* m_progressBar;
        struct VideoTrimMarker* m_start;
        struct VideoTrimMarker* m_end;
        struct Image* segment;
        struct RawImage* m_image;
        struct RectTransform* m_imageTransform;
        bool m_playing;
        float m_playTime;
        struct List_1_UnityEngine_GameObject_* m_segments;
        struct Vector3 m_mousePosition;
        bool m_recording;
        struct ColorBlock m_activeColor;
        struct ColorBlock m_inactiveColor;
        bool DoTrim;
        bool TrimReady;
        bool DoneSeeking;
        struct GUIStyle* m_labelStyle;
    };

    struct VideoEditor {
        struct VideoEditor__Class* klass;
        MonitorData* monitor;
        struct VideoEditor__Fields fields;
    };

    struct __declspec(align(8)) List_1_UnityEngine_UI_Button___Fields {
        struct Button__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_UI_Button_ {
        struct List_1_UnityEngine_UI_Button___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_UI_Button___Fields fields;
    };

    struct Button__Array {
        struct Button__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Button* vector[32];
    };

    struct IEnumerator_1_UnityEngine_UI_Button_ {
        struct IEnumerator_1_UnityEngine_UI_Button___Class* klass;
        MonitorData* monitor;
    };

    struct VideoProgressBar__Fields {
        struct MonoBehaviour__Fields _;
        struct VideoEditor* videoEditor;
        struct Image* progress;
        struct PointerEventData* m_lastEvent;
        bool m_seekRequested;
        float m_skipDelay;
    };

    struct VideoProgressBar {
        struct VideoProgressBar__Class* klass;
        MonitorData* monitor;
        struct VideoProgressBar__Fields fields;
    };

    struct VideoTrimMarker__Fields {
        struct MonoBehaviour__Fields _;
        struct VideoProgressBar* m_progressBar;
        bool end;
        struct VideoTrimMarker* m_marker;
        struct VideoEditor* m_videoEditor;
        bool Dragging;
        bool m_timeCached;
        double m_time;
    };

    struct VideoTrimMarker {
        struct VideoTrimMarker__Class* klass;
        MonitorData* monitor;
        struct VideoTrimMarker__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_List_1_System_Byte___Fields {
        struct List_1_System_Byte__1__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_List_1_System_Byte_ {
        struct Queue_1_List_1_System_Byte___Class* klass;
        MonitorData* monitor;
        struct Queue_1_List_1_System_Byte___Fields fields;
    };

    struct List_1_System_Byte__1__Array {
        struct List_1_System_Byte__1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_System_Byte__1* vector[32];
    };

    struct IEnumerator_1_List_1_System_Byte__1 {
        struct IEnumerator_1_List_1_System_Byte__1__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) BugReporter_BugReport__Fields {
        struct String* description;
        struct String* detailedDescription;
        struct String* projectName;
        struct String* scene;
        struct String__Array* attachments;
        struct String__Array* dropboxAttachments;
        struct String__Array* directoryAttachments;
        float trimStart;
        float trimEnd;
        bool switchNoHost;
        struct String* buildId;
        struct String* assignee;
        struct String* priority;
        int32_t exceptionHash;
        struct String* topic;
    };

    struct BugReporter_BugReport {
        struct BugReporter_BugReport__Class* klass;
        MonitorData* monitor;
        struct BugReporter_BugReport__Fields fields;
    };

    struct __declspec(align(8)) List_1_BugReporter_Attachment___Fields {
        struct BugReporter_Attachment__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_BugReporter_Attachment_ {
        struct List_1_BugReporter_Attachment___Class* klass;
        MonitorData* monitor;
        struct List_1_BugReporter_Attachment___Fields fields;
    };

    struct __declspec(align(8)) BugReporter_Attachment__Fields {
        struct String* Path;
        bool Included;
    };

    struct BugReporter_Attachment {
        struct BugReporter_Attachment__Class* klass;
        MonitorData* monitor;
        struct BugReporter_Attachment__Fields fields;
    };

    struct BugReporter_Attachment__Array {
        struct BugReporter_Attachment__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BugReporter_Attachment* vector[32];
    };

    struct IEnumerator_1_BugReporter_Attachment_ {
        struct IEnumerator_1_BugReporter_Attachment___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ConcurrentQueue_1_System_String___Fields {
        struct Object* _crossSegmentLock;
        struct ConcurrentQueue_1_T_Segment_System_String_* _tail;
        struct ConcurrentQueue_1_T_Segment_System_String_* _head;
    };

} // namespace app
