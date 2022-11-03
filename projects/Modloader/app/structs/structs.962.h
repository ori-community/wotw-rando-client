namespace app {
    struct GetPickupOnCondition__StaticFields {
    };

    struct GetPickupOnCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetPickupOnCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetPickupOnCondition__VTable vtable;
    };

    struct PickupBase_c {
        struct PickupBase_c__Class* klass;
        MonitorData* monitor;
    };

    struct PickupBase_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PickupBase_c__StaticFields {
        struct PickupBase_c* __9;
        struct Action* __9__33_0;
        struct Action* __9__56_0;
    };

    struct PickupBase_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PickupBase_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PickupBase_c__VTable vtable;
    };

    struct PickupCollectedCondition__Fields {
        struct Condition_1__Fields _;
        struct PickupBase* Pickup;
        struct CollectablePlaceholder* Placeholder;
        bool IsCollected;
    };

    struct PickupCollectedCondition {
        struct PickupCollectedCondition__Class* klass;
        MonitorData* monitor;
        struct PickupCollectedCondition__Fields fields;
    };

    struct PickupCollectedCondition__VTable {
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

    struct PickupCollectedCondition__StaticFields {
    };

    struct PickupCollectedCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PickupCollectedCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PickupCollectedCondition__VTable vtable;
    };

    struct SceneBasedUberState__Fields {
        struct MonoBehaviour__Fields _;
        struct UberID* m_id;
        struct IUberStateGroup* m_group;
    };

    struct SceneBasedUberState {
        struct SceneBasedUberState__Class* klass;
        MonitorData* monitor;
        struct SceneBasedUberState__Fields fields;
    };

    enum class CollapsingPlatform_CollapsingPlatformType__Enum : int32_t {
        Sand = 0x00000000,
        Snow = 0x00000001,
    };

    struct CollapsingPlatform_CollapsingPlatformType__Enum__Boxed {
        struct CollapsingPlatform_CollapsingPlatformType__Enum__Class* klass;
        MonitorData* monitor;
        CollapsingPlatform_CollapsingPlatformType__Enum value;
    };

    struct CollapsingPlatform__Fields {
        struct SceneBasedUberState__Fields _;
        struct GameObject* PlatformRoot;
        struct CollapsingPlatformAnimator* Animator;
        bool CanBeDisabledWhenNotVisible;
        CollapsingPlatform_CollapsingPlatformType__Enum PlatformType;

        bool RespawnOnLanding;
        bool CollapseOnDigThrough;
        bool m_isCollapsed;
        float m_maxDelayToPlayFastCollapse;
        struct DamageReceiver* m_damageReceiver;
        struct DigZone* m_digZone;
        struct CageStructureTool* m_cageStructure;
        bool m_stressTested;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;

        struct IUberState__Array* m_affectingUberStates;
        bool _DefaultBooleanValue_k__BackingField;
        struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
    };

    struct CollapsingPlatform {
        struct CollapsingPlatform__Class* klass;
        MonitorData* monitor;
        struct CollapsingPlatform__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_DigZone_CollapsingPlatform___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_DigZone_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_DigZone_CollapsingPlatform_ {
        struct Dictionary_2_DigZone_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_DigZone_CollapsingPlatform___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform_ {
        int32_t hashCode;
        int32_t next;
        struct DigZone* key;
        struct CollapsingPlatform* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array {
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Fields {
        struct Dictionary_2_DigZone_CollapsingPlatform_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Fields {
        struct Dictionary_2_DigZone_CollapsingPlatform_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Fields fields;
    };

    struct CollapsingPlatform__Array {
        struct CollapsingPlatform__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CollapsingPlatform* vector[32];
    };

    struct IEnumerator_1_CollapsingPlatform_ {
        struct IEnumerator_1_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_DigZone_ {
        struct ICollection_1_DigZone___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_CollapsingPlatform_ {
        struct ICollection_1_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform_ {
        struct DigZone* key;
        struct CollapsingPlatform* value;
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___Boxed {
        struct KeyValuePair_2_DigZone_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_DigZone_CollapsingPlatform_ fields;
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___Array {
        struct KeyValuePair_2_DigZone_CollapsingPlatform___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_DigZone_CollapsingPlatform_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform_ {
        struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_CollapsingPlatform_ {
        struct IEnumerable_1_CollapsingPlatform___Class* klass;
        MonitorData* monitor;
    };

    struct CollapsingPlatformAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct Action* OnActivatePlatform;
        struct CollapsingPlatformVisuals* Visuals;
        struct MoonTimeline* CollapseTimeline;
        struct MoonTimeline* CollapseFastTimeline;
        struct MoonTimeline* RespawnTimeline;
        struct EventTriggerAnimator__Array* ActivatePlatformTriggers;
        struct List_1_UnityEngine_Renderer_* m_renderers;
    };

    struct CollapsingPlatformAnimator {
        struct CollapsingPlatformAnimator__Class* klass;
        MonitorData* monitor;
        struct CollapsingPlatformAnimator__Fields fields;
    };

    struct CollapsingPlatformVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Platform;
        struct GameObject* AnimatedVisuals;
        struct ParticleSystem* Particles;
    };

    struct CollapsingPlatformVisuals {
        struct CollapsingPlatformVisuals__Class* klass;
        MonitorData* monitor;
        struct CollapsingPlatformVisuals__Fields fields;
    };

    struct SceneBasedUberState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UberStateGroup;
        VirtualInvokeData get_GroupID;
        VirtualInvokeData get_StateID;
        VirtualInvokeData get_Name;
    };

    struct SceneBasedUberState__StaticFields {
    };

    struct SceneBasedUberState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneBasedUberState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneBasedUberState__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_DigZone_CollapsingPlatform___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_DigZone_CollapsingPlatform___VTable vtable;
    };

    struct CollapsingPlatform__Array__VTable {
    };

    struct CollapsingPlatform__Array__StaticFields {
    };

    struct CollapsingPlatform__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingPlatform__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingPlatform__Array__VTable vtable;
    };

    struct IEnumerator_1_CollapsingPlatform___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CollapsingPlatform___StaticFields {
    };

    struct IEnumerator_1_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CollapsingPlatform___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_DigZone_CollapsingPlatform___VTable vtable;
    };

    struct ICollection_1_DigZone___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_DigZone___StaticFields {
    };

    struct ICollection_1_DigZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_DigZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_DigZone___VTable vtable;
    };

    struct ICollection_1_CollapsingPlatform___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_CollapsingPlatform___StaticFields {
    };

    struct ICollection_1_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_CollapsingPlatform___VTable vtable;
    };

    struct CollapsingPlatform___VTable {
    };

    struct CollapsingPlatform___StaticFields {
    };

    struct CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingPlatform___VTable vtable;
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields {
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_DigZone_CollapsingPlatform___VTable vtable;
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___Array__VTable {
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___Array__StaticFields {
    };

    struct KeyValuePair_2_DigZone_CollapsingPlatform___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_DigZone_CollapsingPlatform___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_DigZone_CollapsingPlatform___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_DigZone_CollapsingPlatform___VTable vtable;
    };

    struct IEnumerable_1_CollapsingPlatform___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_CollapsingPlatform___StaticFields {
    };

    struct IEnumerable_1_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_CollapsingPlatform___VTable vtable;
    };

    struct Dictionary_2_DigZone_CollapsingPlatform___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_DigZone_CollapsingPlatform___StaticFields {
    };

    struct Dictionary_2_DigZone_CollapsingPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_DigZone_CollapsingPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_DigZone_CollapsingPlatform___VTable vtable;
    };

    struct CollapsingPlatformVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CollapsingPlatformVisuals__StaticFields {
    };

    struct CollapsingPlatformVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingPlatformVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingPlatformVisuals__VTable vtable;
    };

    struct CollapsingPlatformAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
    };

    struct CollapsingPlatformAnimator__StaticFields {
    };

    struct CollapsingPlatformAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingPlatformAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingPlatformAnimator__VTable vtable;
    };

    struct CollapsingPlatform_CollapsingPlatformType__Enum__VTable {
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

    struct CollapsingPlatform_CollapsingPlatformType__Enum__StaticFields {
    };

    struct CollapsingPlatform_CollapsingPlatformType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingPlatform_CollapsingPlatformType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingPlatform_CollapsingPlatformType__Enum__VTable vtable;
    };

    struct CollapsingPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UberStateGroup;
        VirtualInvokeData get_GroupID;
        VirtualInvokeData get_StateID;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_DefaultBooleanValue;
        VirtualInvokeData set_DefaultBooleanValue;
        VirtualInvokeData get_Options;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData get_GenericValue;
        VirtualInvokeData set_GenericValue;
        VirtualInvokeData get_VolitileGenericOverrideValue;
        VirtualInvokeData set_VolitileGenericOverrideValue;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData ReceivedOnCollisionEnter;
    };

    struct CollapsingPlatform__StaticFields {
        struct Dictionary_2_DigZone_CollapsingPlatform_* s_digZoneMapping;
    };

    struct CollapsingPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingPlatform__VTable vtable;
    };

    struct CollapsingPlatformAnimator_c {
        struct CollapsingPlatformAnimator_c__Class* klass;
        MonitorData* monitor;
    };

    struct CollapsingPlatformAnimator_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CollapsingPlatformAnimator_c__StaticFields {
        struct CollapsingPlatformAnimator_c* __9;
        struct Action* __9__18_0;
    };

    struct CollapsingPlatformAnimator_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingPlatformAnimator_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingPlatformAnimator_c__VTable vtable;
    };

    struct CollapsingSolid__Fields {
        struct SaveSerialize__Fields _;
        bool m_activated;
        struct BaseAnimator* Animator;
    };

    struct CollapsingSolid {
        struct CollapsingSolid__Class* klass;
        MonitorData* monitor;
        struct CollapsingSolid__Fields fields;
    };

    struct CollapsingSolid__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct CollapsingSolid__StaticFields {
    };

    struct CollapsingSolid__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollapsingSolid__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollapsingSolid__VTable vtable;
    };

    struct LegacyCollapsingPlatform__Fields {
        struct SceneBasedUberState__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct GameObject* ObjectRoot;
        struct GameObject* SceneObject;
        struct GameObject* PlatformObject;
        struct GameObject* VisualsObject;
        struct BaseAnimator* Animator;
        struct MoonTimeline* CollapseTimeline;
        struct MoonTimeline* CollapseFastTimeline;
        bool UseFastCollapse;
        struct MoonTimeline* RespawnTimeline;
        struct ActionSequence* CollapseAction;
        struct ActionSequence* RespawnAction;
        bool RespawnOnLanding;
        bool CollapseOnDigThrough;
        bool m_isCollapsed;
        struct DigZone* m_digZone;
        struct CageStructureTool* m_cageStructure;
        bool ResetStateOnDisable;
        bool DisableWhenOutOfFrustrum;
        bool m_stressTested;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;

        struct List_1_UnityEngine_Renderer_* m_renderers;
        struct IUberState__Array* m_affectingUberStates;
        bool _DefaultBooleanValue_k__BackingField;
        struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
    };

    struct LegacyCollapsingPlatform {
        struct LegacyCollapsingPlatform__Class* klass;
        MonitorData* monitor;
        struct LegacyCollapsingPlatform__Fields fields;
    };

    struct LegacyCollapsingPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UberStateGroup;
        VirtualInvokeData get_GroupID;
        VirtualInvokeData get_StateID;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_DefaultBooleanValue;
        VirtualInvokeData set_DefaultBooleanValue;
        VirtualInvokeData get_Options;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData get_GenericValue;
        VirtualInvokeData set_GenericValue;
        VirtualInvokeData get_VolitileGenericOverrideValue;
        VirtualInvokeData set_VolitileGenericOverrideValue;
        VirtualInvokeData GetResolverForType;
    };

    struct LegacyCollapsingPlatform__StaticFields {
    };

    struct LegacyCollapsingPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyCollapsingPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyCollapsingPlatform__VTable vtable;
    };

    struct OverlapPlatform__Fields {
        struct SaveSerialize__Fields _;
        struct BaseAnimator__Array* BaseAnimators;
        struct FlipPlantLogic__Array* m_flipPlants;
        struct Collider* m_collider;
        bool m_activated;
        bool m_overlap;
        struct AnimatingFloat* m_animatingFloat;
    };

    struct OverlapPlatform {
        struct OverlapPlatform__Class* klass;
        MonitorData* monitor;
        struct OverlapPlatform__Fields fields;
    };

    struct OverlapPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct OverlapPlatform__StaticFields {
    };

    struct OverlapPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OverlapPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OverlapPlatform__VTable vtable;
    };

    struct OverlapPlatformActivator__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct OverlapPlatformActivator {
        struct OverlapPlatformActivator__Class* klass;
        MonitorData* monitor;
        struct OverlapPlatformActivator__Fields fields;
    };

    struct OverlapPlatformActivator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OverlapPlatformActivator__StaticFields {
    };

    struct OverlapPlatformActivator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OverlapPlatformActivator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OverlapPlatformActivator__VTable vtable;
    };

    struct SequencePlatform__Fields {
        struct SaveSerialize__Fields _;
        struct SequencePlatform* NextPlatform;
        bool NextPlatformOnTouch;
        bool VanishOnTouch;
        float DelayToNextPlatformAppear;
        float DelayToVanish;
        bool Vanish;
        bool VisibleAtStart;
        struct Vector3 m_originalScale;
        bool m_activated;
        bool m_hasBeenTouched;
        float m_vanishAmount;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct SequencePlatform {
        struct SequencePlatform__Class* klass;
        MonitorData* monitor;
        struct SequencePlatform__Fields fields;
    };

    struct SequencePlatform__VTable {
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
    };

    struct SequencePlatform__StaticFields {
    };

    struct SequencePlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SequencePlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SequencePlatform__VTable vtable;
    };

    struct __declspec(align(8)) HashSet_1_SequencePlatform___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_SequencePlatform___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_SequencePlatform_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

} // namespace app
