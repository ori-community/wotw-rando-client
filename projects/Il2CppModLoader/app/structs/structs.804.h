namespace app {
    struct CollisionStayTrigger__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObjectFilter* Filter;
        struct Condition_1* Condition;
        struct LegacyAnimator__Array* Animators;
        struct BaseAnimator__Array* BaseAnimators;
        struct SoundSource* EnterSound;
        struct SoundSource* ExitSound;
        struct Rect m_bounds;
        bool m_hasCollider;
        bool m_isInside;
    };

    struct CollisionStayTrigger {
        struct CollisionStayTrigger__Class* klass;
        MonitorData* monitor;
        struct CollisionStayTrigger__Fields fields;
    };

    struct CollisionStayTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct CollisionStayTrigger__StaticFields {
    };

    struct CollisionStayTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionStayTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionStayTrigger__VTable vtable;
    };

    struct EnterExitActionsExecutor_c {
        struct EnterExitActionsExecutor_c__Class* klass;
        MonitorData* monitor;
    };

    struct EnterExitActionsExecutor_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnterExitActionsExecutor_c__StaticFields {
        struct EnterExitActionsExecutor_c* __9;
        struct Action* __9__15_0;
    };

    struct EnterExitActionsExecutor_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterExitActionsExecutor_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterExitActionsExecutor_c__VTable vtable;
    };

    struct GainMaxEnergyContainerTrigger__Fields {
        struct LegacyTrigger__Fields _;
    };

    struct GainMaxEnergyContainerTrigger {
        struct GainMaxEnergyContainerTrigger__Class* klass;
        MonitorData* monitor;
        struct GainMaxEnergyContainerTrigger__Fields fields;
    };

    struct GainMaxEnergyContainerTrigger__VTable {
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
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
    };

    struct GainMaxEnergyContainerTrigger__StaticFields {
    };

    struct GainMaxEnergyContainerTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GainMaxEnergyContainerTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GainMaxEnergyContainerTrigger__VTable vtable;
    };

    struct StateHolder_1_CollisionTriggerSetupData___Fields {
        struct StateHolder__Fields _;
        struct List_1_CollisionTriggerSetupData_* StateData;
        struct List_1_IIndexedItem_* m_cachedStates;
    };

    struct StateHolder_1_CollisionTriggerSetupData_ {
        struct StateHolder_1_CollisionTriggerSetupData___Class* klass;
        MonitorData* monitor;
        struct StateHolder_1_CollisionTriggerSetupData___Fields fields;
    };

    struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___Fields {
        struct StateHolder_1_CollisionTriggerSetupData___Fields _;
    };

    struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData_ {
        struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___Class* klass;
        MonitorData* monitor;
        struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___Fields fields;
    };

    struct CollisionTriggerSetupHolder__Fields {
        struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___Fields _;
    };

    struct CollisionTriggerSetupHolder {
        struct CollisionTriggerSetupHolder__Class* klass;
        MonitorData* monitor;
        struct CollisionTriggerSetupHolder__Fields fields;
    };

    struct __declspec(align(8)) List_1_CollisionTriggerSetupData___Fields {
        struct CollisionTriggerSetupData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CollisionTriggerSetupData_ {
        struct List_1_CollisionTriggerSetupData___Class* klass;
        MonitorData* monitor;
        struct List_1_CollisionTriggerSetupData___Fields fields;
    };

    struct __declspec(align(8)) CollisionTriggerSetupData__Fields {
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* m_transition;
        float m_desiredValue;
    };

    struct CollisionTriggerSetupData {
        struct CollisionTriggerSetupData__Class* klass;
        MonitorData* monitor;
        struct CollisionTriggerSetupData__Fields fields;
    };

    struct CollisionTriggerSetupData__Array {
        struct CollisionTriggerSetupData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CollisionTriggerSetupData* vector[32];
    };

    struct IEnumerator_1_CollisionTriggerSetupData_ {
        struct IEnumerator_1_CollisionTriggerSetupData___Class* klass;
        MonitorData* monitor;
    };

    struct CollisionTriggerSetupData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Transition;
        VirtualInvokeData get_DesiredValue;
    };

    struct CollisionTriggerSetupData__StaticFields {
    };

    struct CollisionTriggerSetupData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionTriggerSetupData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionTriggerSetupData__VTable vtable;
    };

    struct CollisionTriggerSetupData__Array__VTable {
    };

    struct CollisionTriggerSetupData__Array__StaticFields {
    };

    struct CollisionTriggerSetupData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionTriggerSetupData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionTriggerSetupData__Array__VTable vtable;
    };

    struct IEnumerator_1_CollisionTriggerSetupData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CollisionTriggerSetupData___StaticFields {
    };

    struct IEnumerator_1_CollisionTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CollisionTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CollisionTriggerSetupData___VTable vtable;
    };

    struct List_1_CollisionTriggerSetupData___VTable {
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

    struct List_1_CollisionTriggerSetupData___StaticFields {
        struct CollisionTriggerSetupData__Array* _emptyArray;
    };

    struct List_1_CollisionTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CollisionTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CollisionTriggerSetupData___VTable vtable;
    };

    struct StateHolder_1_CollisionTriggerSetupData___VTable {
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

    struct StateHolder_1_CollisionTriggerSetupData___StaticFields {
    };

    struct StateHolder_1_CollisionTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StateHolder_1_CollisionTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StateHolder_1_CollisionTriggerSetupData___VTable vtable;
    };

    struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___VTable {
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

    struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___StaticFields {
    };

    struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransitionBasedSetupHolder_1_CollisionTriggerSetupData___VTable vtable;
    };

    struct CollisionTriggerSetupHolder__VTable {
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

    struct CollisionTriggerSetupHolder__StaticFields {
    };

    struct CollisionTriggerSetupHolder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionTriggerSetupHolder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionTriggerSetupHolder__VTable vtable;
    };

    struct GenericCollisionTrigger__Fields {
        struct LegacyTrigger__Fields _;
        struct CollisionTriggerSetupHolder* Setup;
        struct List_1_UnityEngine_GameObject_* TriggeringObjects;
        struct List_1_UnityEngine_Collider_* IgnoreColliders;
        bool OnTrigger;
        bool OnCollision;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct GenericCollisionTrigger {
        struct GenericCollisionTrigger__Class* klass;
        MonitorData* monitor;
        struct GenericCollisionTrigger__Fields fields;
    };

    struct GenericCollisionTrigger__VTable {
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
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData StopTransitions;
    };

    struct GenericCollisionTrigger__StaticFields {
    };

    struct GenericCollisionTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericCollisionTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericCollisionTrigger__VTable vtable;
    };

    struct GenericDamageTrigger__Fields {
        struct MonoBehaviour__Fields _;
        bool HammerStompOnly;
        int32_t _HammerPriority_k__BackingField;
        bool _HammerEnableAutoTarget_k__BackingField;
        struct GenericDamageTrigger_DamageTriggerSetupHolder* Setup;
        struct Condition_1* Condition;
        DamageType__Enum DamageType;

        struct MoonTimeline* DestructionTimeline;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
        struct IUberState__Array* m_affectingUberStates;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct GenericDamageTrigger {
        struct GenericDamageTrigger__Class* klass;
        MonitorData* monitor;
        struct GenericDamageTrigger__Fields fields;
    };

    struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Fields {
        struct StateHolder__Fields _;
        struct List_1_GenericDamageTrigger_DamageTriggerSetupData_* StateData;
        struct List_1_IIndexedItem_* m_cachedStates;
    };

    struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData_ {
        struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Class* klass;
        MonitorData* monitor;
        struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Fields fields;
    };

    struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Fields {
        struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Fields _;
    };

    struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData_ {
        struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Class* klass;
        MonitorData* monitor;
        struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Fields fields;
    };

    struct GenericDamageTrigger_DamageTriggerSetupHolder__Fields {
        struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Fields _;
    };

    struct GenericDamageTrigger_DamageTriggerSetupHolder {
        struct GenericDamageTrigger_DamageTriggerSetupHolder__Class* klass;
        MonitorData* monitor;
        struct GenericDamageTrigger_DamageTriggerSetupHolder__Fields fields;
    };

    struct __declspec(align(8)) List_1_GenericDamageTrigger_DamageTriggerSetupData___Fields {
        struct GenericDamageTrigger_DamageTriggerSetupData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_GenericDamageTrigger_DamageTriggerSetupData_ {
        struct List_1_GenericDamageTrigger_DamageTriggerSetupData___Class* klass;
        MonitorData* monitor;
        struct List_1_GenericDamageTrigger_DamageTriggerSetupData___Fields fields;
    };

    struct __declspec(align(8)) GenericDamageTrigger_DamageTriggerSetupData__Fields {
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* m_transition;
        float m_desiredValue;
    };

    struct GenericDamageTrigger_DamageTriggerSetupData {
        struct GenericDamageTrigger_DamageTriggerSetupData__Class* klass;
        MonitorData* monitor;
        struct GenericDamageTrigger_DamageTriggerSetupData__Fields fields;
    };

    struct GenericDamageTrigger_DamageTriggerSetupData__Array {
        struct GenericDamageTrigger_DamageTriggerSetupData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GenericDamageTrigger_DamageTriggerSetupData* vector[32];
    };

    struct IEnumerator_1_GenericDamageTrigger_DamageTriggerSetupData_ {
        struct IEnumerator_1_GenericDamageTrigger_DamageTriggerSetupData___Class* klass;
        MonitorData* monitor;
    };

    struct GenericDamageTrigger_DamageTriggerSetupData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Transition;
        VirtualInvokeData get_DesiredValue;
    };

    struct GenericDamageTrigger_DamageTriggerSetupData__StaticFields {
    };

    struct GenericDamageTrigger_DamageTriggerSetupData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericDamageTrigger_DamageTriggerSetupData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericDamageTrigger_DamageTriggerSetupData__VTable vtable;
    };

    struct GenericDamageTrigger_DamageTriggerSetupData__Array__VTable {
    };

    struct GenericDamageTrigger_DamageTriggerSetupData__Array__StaticFields {
    };

    struct GenericDamageTrigger_DamageTriggerSetupData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericDamageTrigger_DamageTriggerSetupData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericDamageTrigger_DamageTriggerSetupData__Array__VTable vtable;
    };

    struct IEnumerator_1_GenericDamageTrigger_DamageTriggerSetupData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields {
    };

    struct IEnumerator_1_GenericDamageTrigger_DamageTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_GenericDamageTrigger_DamageTriggerSetupData___VTable vtable;
    };

    struct List_1_GenericDamageTrigger_DamageTriggerSetupData___VTable {
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

    struct List_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields {
        struct GenericDamageTrigger_DamageTriggerSetupData__Array* _emptyArray;
    };

    struct List_1_GenericDamageTrigger_DamageTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_GenericDamageTrigger_DamageTriggerSetupData___VTable vtable;
    };

    struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___VTable {
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

    struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields {
    };

    struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StateHolder_1_GenericDamageTrigger_DamageTriggerSetupData___VTable vtable;
    };

    struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___VTable {
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

    struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields {
    };

    struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData___VTable vtable;
    };

    struct GenericDamageTrigger_DamageTriggerSetupHolder__VTable {
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

    struct GenericDamageTrigger_DamageTriggerSetupHolder__StaticFields {
    };

    struct GenericDamageTrigger_DamageTriggerSetupHolder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericDamageTrigger_DamageTriggerSetupHolder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericDamageTrigger_DamageTriggerSetupHolder__VTable vtable;
    };

    struct GenericDamageTrigger__VTable {
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
        VirtualInvokeData get_HammerPriority;
        VirtualInvokeData get_HammerEnableAutoTarget;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData StopTransitions;
    };

    struct GenericDamageTrigger__StaticFields {
    };

    struct GenericDamageTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericDamageTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericDamageTrigger__VTable vtable;
    };

    struct LagoonBubble__Fields {
        struct MonoBehaviour__Fields _;
        SuspendableMask__Enum m_suspensionMask;

        struct LayerMask DestroyMask;
        float MaxLifeTime;
        float InstantVelocityFromOriTouch;
        float MinAngleForAboveAction;
        struct ActionMethod* OnOriLandAbove;
        struct ActionMethod* OnOtherOriCollision;
        struct ActionMethod* OnOriCollisionUnderWater;
        struct ActionMethod* OnOtherCollision;
        struct ActionMethod* OnDestroyAction;
        struct String__Array* IgnoreBubblePhysicsLayers;
        float AccelerationY;
        float MaxSpeedY;
        float TurbulencePeriod;
        float TurbulenceAcceleration;
        float OriInteractionCooldown;
        float m_lastOriEnterTime;
        struct Rigidbody* m_rigidbody;
        struct Transform* m_transform;
        float m_timeUntilDeath;
        float m_timeUntilDirectionFlip;
        int32_t m_direction;
        struct DamageReceiver* m_damageReceiver;
        struct Vector2 m_externalForce;
        struct Vector2 m_velocityLastFrame;
        bool m_isSuspended;
    };

    struct LagoonBubble {
        struct LagoonBubble__Class* klass;
        MonitorData* monitor;
        struct LagoonBubble__Fields fields;
    };

    struct LagoonBubble__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnReceiveWindFromPipe;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnDestroy;
    };

    struct LagoonBubble__StaticFields {
    };

    struct LagoonBubble__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LagoonBubble__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LagoonBubble__VTable vtable;
    };

    struct LegacyPlayerCollisionTrigger__Fields {
        struct LegacyTrigger__Fields _;
        bool UseTrigger;
        struct Rect m_bounds;
        bool m_hasCollided;
        struct Vector3 m_position;
        struct ActionSequence* m_stressTestAction;
        bool m_actionStartedStressTest;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;
    };

    struct LegacyPlayerCollisionTrigger {
        struct LegacyPlayerCollisionTrigger__Class* klass;
        MonitorData* monitor;
        struct LegacyPlayerCollisionTrigger__Fields fields;
    };

    struct LegacyPlayerCollisionTrigger__VTable {
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
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
    };

    struct LegacyPlayerCollisionTrigger__StaticFields {
    };

    struct LegacyPlayerCollisionTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyPlayerCollisionTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyPlayerCollisionTrigger__VTable vtable;
    };

    enum class LegacyPressurePlate_Target__Enum : int32_t {
        Ori = 0x00000001,
        PushPullBlock = 0x00000002,
        Interface = 0x00000004,
        InterfaceExceptOri = 0x00000008,
        All = 0x0000000f,
    };

    struct LegacyPressurePlate_Target__Enum__Boxed {
        struct LegacyPressurePlate_Target__Enum__Class* klass;
        MonitorData* monitor;
        LegacyPressurePlate_Target__Enum value;
    };

    struct LegacyPressurePlate__Fields {
        struct MonoBehaviour__Fields _;
        LegacyPressurePlate_Target__Enum Targets;

        struct ActionMethod* OnPressed;
        struct ActionMethod* OnReleased;
        struct List_1_ICanActivatePressurePlate_* m_pressing;
    };

    struct LegacyPressurePlate {
        struct LegacyPressurePlate__Class* klass;
        MonitorData* monitor;
        struct LegacyPressurePlate__Fields fields;
    };

    struct __declspec(align(8)) List_1_ICanActivatePressurePlate___Fields {
        struct ICanActivatePressurePlate__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ICanActivatePressurePlate_ {
        struct List_1_ICanActivatePressurePlate___Class* klass;
        MonitorData* monitor;
        struct List_1_ICanActivatePressurePlate___Fields fields;
    };

    struct ICanActivatePressurePlate {
        struct ICanActivatePressurePlate__Class* klass;
        MonitorData* monitor;
    };

    struct ICanActivatePressurePlate__Array {
        struct ICanActivatePressurePlate__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ICanActivatePressurePlate* vector[32];
    };

    struct IEnumerator_1_ICanActivatePressurePlate_ {
        struct IEnumerator_1_ICanActivatePressurePlate___Class* klass;
        MonitorData* monitor;
    };

    struct LegacyPressurePlate_Target__Enum__VTable {
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

    struct LegacyPressurePlate_Target__Enum__StaticFields {
    };

    struct LegacyPressurePlate_Target__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyPressurePlate_Target__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyPressurePlate_Target__Enum__VTable vtable;
    };

    struct ICanActivatePressurePlate__VTable {
        VirtualInvokeData OnPressed;
        VirtualInvokeData OnReleased;
    };

    struct ICanActivatePressurePlate__StaticFields {
    };

    struct ICanActivatePressurePlate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICanActivatePressurePlate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICanActivatePressurePlate__VTable vtable;
    };

    struct ICanActivatePressurePlate__Array__VTable {
    };

    struct ICanActivatePressurePlate__Array__StaticFields {
    };

    struct ICanActivatePressurePlate__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICanActivatePressurePlate__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICanActivatePressurePlate__Array__VTable vtable;
    };

    struct IEnumerator_1_ICanActivatePressurePlate___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ICanActivatePressurePlate___StaticFields {
    };

    struct IEnumerator_1_ICanActivatePressurePlate___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ICanActivatePressurePlate___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ICanActivatePressurePlate___VTable vtable;
    };

    struct List_1_ICanActivatePressurePlate___VTable {
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

} // namespace app
