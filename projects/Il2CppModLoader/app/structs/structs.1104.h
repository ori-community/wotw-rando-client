namespace app {
    struct NPCSettings__Fields {
        struct MonoBehaviour__Fields _;
        struct NPCIconsCollection* Icons;
        struct NPCTypeDictionary* TypeDictionary;
    };

    struct NPCSettings {
        struct NPCSettings__Class* klass;
        MonitorData* monitor;
        struct NPCSettings__Fields fields;
    };

    struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___Fields {
        struct MonoBehaviour__Fields _;
        ScreenshotIcon_NPCType__Enum Missing;

        struct List_1_System_String_* m_keys;
        struct List_1_ScreenshotIcon_NPCType_* m_values;
        struct Dictionary_2_System_Type_ScreenshotIcon_NPCType_* m_dictionary;
    };

    struct EnumTypeDictionary_1_ScreenshotIcon_NPCType_ {
        struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___Class* klass;
        MonitorData* monitor;
        struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___Fields fields;
    };

    struct NPCTypeDictionary__Fields {
        struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___Fields _;
    };

    struct NPCTypeDictionary {
        struct NPCTypeDictionary__Class* klass;
        MonitorData* monitor;
        struct NPCTypeDictionary__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_ScreenshotIcon_NPCType___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_ScreenshotIcon_NPCType_ {
        struct Dictionary_2_System_Type_ScreenshotIcon_NPCType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_ScreenshotIcon_NPCType___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        ScreenshotIcon_NPCType__Enum value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___Fields {
        struct Dictionary_2_System_Type_ScreenshotIcon_NPCType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___Fields {
        struct Dictionary_2_System_Type_ScreenshotIcon_NPCType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___Fields fields;
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType_ {
        struct Type* key;
        ScreenshotIcon_NPCType__Enum value;
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Boxed {
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType_ fields;
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Array {
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_ScreenshotIcon_NPCType_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_ScreenshotIcon_NPCType___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_ScreenshotIcon_NPCType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_ScreenshotIcon_NPCType___VTable vtable;
    };

    struct ScreenshotIcon_NPCType___VTable {
    };

    struct ScreenshotIcon_NPCType___StaticFields {
    };

    struct ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenshotIcon_NPCType___VTable vtable;
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___StaticFields {
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___VTable vtable;
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Array__VTable {
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Type_ScreenshotIcon_NPCType___VTable vtable;
    };

    struct Dictionary_2_System_Type_ScreenshotIcon_NPCType___VTable {
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

    struct Dictionary_2_System_Type_ScreenshotIcon_NPCType___StaticFields {
    };

    struct Dictionary_2_System_Type_ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Type_ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Type_ScreenshotIcon_NPCType___VTable vtable;
    };

    struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___StaticFields {
    };

    struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumTypeDictionary_1_ScreenshotIcon_NPCType___VTable vtable;
    };

    struct NPCTypeDictionary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct NPCTypeDictionary__StaticFields {
    };

    struct NPCTypeDictionary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NPCTypeDictionary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NPCTypeDictionary__VTable vtable;
    };

    struct NPCSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NPCSettings__StaticFields {
    };

    struct NPCSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NPCSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NPCSettings__VTable vtable;
    };

    struct WandererHandRewardBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct WandererEntity* m_wandererEntity;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererTurningBehaviour* m_turningBehaviour;
        struct WandererNPC* m_npc;
        struct MoonTimeline* HandItemStart;
        struct MoonTimeline* HandItemIdle;
        struct MoonTimeline* HandItemEnd;
        struct MoonTimeline* m_currentTimeline;
        float MaxPickupTime;
        float m_pickupTimer;
        struct GameObject* RewardPrefab;
        struct Transform* RewardParent;
        struct GameObject* m_reward;
        bool m_rewardReceived;
    };

    struct WandererHandRewardBehaviour {
        struct WandererHandRewardBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererHandRewardBehaviour__Fields fields;
    };

    struct WandererHandRewardBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct WandererHandRewardBehaviour__StaticFields {
    };

    struct WandererHandRewardBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererHandRewardBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererHandRewardBehaviour__VTable vtable;
    };

    struct WandererHandRewardBehaviour_c {
        struct WandererHandRewardBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct WandererHandRewardBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WandererHandRewardBehaviour_c__StaticFields {
        struct WandererHandRewardBehaviour_c* __9;
        struct Action* __9__16_0;
    };

    struct WandererHandRewardBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererHandRewardBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererHandRewardBehaviour_c__VTable vtable;
    };

    struct WandererPatrolBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct WandererEntity* m_wandererEntity;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererTurningBehaviour* m_turningBehaviour;
        struct WandererNPC* m_npc;
        float m_lookDirection;
    };

    struct WandererPatrolBehaviour {
        struct WandererPatrolBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererPatrolBehaviour__Fields fields;
    };

    struct WandererPatrolBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct WandererPatrolBehaviour__StaticFields {
    };

    struct WandererPatrolBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererPatrolBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererPatrolBehaviour__VTable vtable;
    };

    struct HDRUtils {
        struct HDRUtils__Class* klass;
        MonitorData* monitor;
    };

    struct HDRUtils__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HDRUtils__StaticFields {
        bool ShowActualValuesInOptionsScreen;
        float HDRPaperwhiteDefaultValue;
        float PaperwhiteMinValue;
        float PaperwhiteMaxValue;
        float ReconstructionNitsToPaperwhiteRatioDefaultValue;
        float ContrastMinValue;
        float ContrastMaxValue;
        float UIBrightnessMin;
        float UIBrightnessMax;
        float HDRUIBrightnessDefaultValue;
        bool HDRExtraUIBrightnessMultiplier;
        float RichnessMin;
        float RichnessMax;
        float HDRRichnessDefaultValue;
        float ShadowDetailMin;
        float ShadowDetailMax;
        float ShadowDetailDefaultValue;
        float HDRPaperwhiteUIDefaultValue;
        float HDRBrightnessDefaultValue;
        bool m_isDurango;
        bool m_checkedForDurango;
        bool m_userDesiresHDR;
        float m_HDRMinBrightnessValue;
        float m_sceneLuminance;
        float m_softShoulderNits;
        float m_reconstructionNitsToPaperwhiteRatio;
        float m_HDRMaxBrightnessValue;
        float m_paperwhiteValuePC;
        float m_paperwhiteUIValue;
        float m_colorGamutExpansion;
        float m_UIBrightnessBoost;
    };

    struct HDRUtils__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HDRUtils__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HDRUtils__VTable vtable;
    };

    struct ShardTraderAfterShopBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct ShardTraderNPC* m_npc;
    };

    struct ShardTraderAfterShopBehaviour {
        struct ShardTraderAfterShopBehaviour__Class* klass;
        MonitorData* monitor;
        struct ShardTraderAfterShopBehaviour__Fields fields;
    };

    struct ShardTraderAfterShopBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct ShardTraderAfterShopBehaviour__StaticFields {
    };

    struct ShardTraderAfterShopBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShardTraderAfterShopBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShardTraderAfterShopBehaviour__VTable vtable;
    };

    struct ShardTraderDidNotBuyBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct ShardTraderNPC* m_npc;
    };

    struct ShardTraderDidNotBuyBehaviour {
        struct ShardTraderDidNotBuyBehaviour__Class* klass;
        MonitorData* monitor;
        struct ShardTraderDidNotBuyBehaviour__Fields fields;
    };

    struct ShardTraderDidNotBuyBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct ShardTraderDidNotBuyBehaviour__StaticFields {
    };

    struct ShardTraderDidNotBuyBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShardTraderDidNotBuyBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShardTraderDidNotBuyBehaviour__VTable vtable;
    };

    struct ShardTraderIdleBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct ShardTraderNPC* m_npc;
    };

    struct ShardTraderIdleBehaviour {
        struct ShardTraderIdleBehaviour__Class* klass;
        MonitorData* monitor;
        struct ShardTraderIdleBehaviour__Fields fields;
    };

    struct ShardTraderIdleBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct ShardTraderIdleBehaviour__StaticFields {
    };

    struct ShardTraderIdleBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShardTraderIdleBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShardTraderIdleBehaviour__VTable vtable;
    };

    struct ShardTraderInShopBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct ShardTraderNPC* m_npc;
    };

    struct ShardTraderInShopBehaviour {
        struct ShardTraderInShopBehaviour__Class* klass;
        MonitorData* monitor;
        struct ShardTraderInShopBehaviour__Fields fields;
    };

    struct ShardTraderInShopBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct ShardTraderInShopBehaviour__StaticFields {
    };

    struct ShardTraderInShopBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShardTraderInShopBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShardTraderInShopBehaviour__VTable vtable;
    };

    struct ShardTraderInteractionBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct ShardTraderNPC* m_npc;
    };

    struct ShardTraderInteractionBehaviour {
        struct ShardTraderInteractionBehaviour__Class* klass;
        MonitorData* monitor;
        struct ShardTraderInteractionBehaviour__Fields fields;
    };

    struct ShardTraderInteractionBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct ShardTraderInteractionBehaviour__StaticFields {
    };

    struct ShardTraderInteractionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShardTraderInteractionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShardTraderInteractionBehaviour__VTable vtable;
    };

    struct ShardTraderMoveOriToPositionBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct ShardTraderNPC* m_npc;
    };

    struct ShardTraderMoveOriToPositionBehaviour {
        struct ShardTraderMoveOriToPositionBehaviour__Class* klass;
        MonitorData* monitor;
        struct ShardTraderMoveOriToPositionBehaviour__Fields fields;
    };

    struct ShardTraderMoveOriToPositionBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

} // namespace app
