namespace app {
    struct DamageText {
        struct DamageText__Class* klass;
        MonitorData* monitor;
        struct DamageText__Fields fields;
    };

    struct DamageText__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
    };

    struct DamageText__StaticFields {
    };

    struct DamageText__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageText__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageText__VTable vtable;
    };

    struct EnemyArenaController__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_ICondition_* StartCondition;
        struct SerializedBooleanUberState* CompletedState;
        bool IsReplayable;
        struct IntUberState* OptionalWaveState;
        struct List_1_EnemyArenaController_EnemyWave_* m_waves;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnArenaEndTimeline;
        bool CreateCheckpointOnArenaCompleted;
        struct CheckpointFunctionality Checkpoint;
        int32_t m_noStateWaveIndex;
        struct MoonTimeline* m_onArenaEndTimeline;
        struct ICondition* m_startConditionResolved;
        struct List_1_Moon_Entity_* m_entitiesAlive;
        struct IUberState__Array* m_states;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
        bool _InvalidateParentTimelineCache_k__BackingField;
        struct Dictionary_2_System_Int32_System_String_* m_conditionNameMap;
    };

    struct EnemyArenaController {
        struct EnemyArenaController__Class* klass;
        MonitorData* monitor;
        struct EnemyArenaController__Fields fields;
    };

    struct __declspec(align(8)) List_1_EnemyArenaController_EnemyWave___Fields {
        struct EnemyArenaController_EnemyWave__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EnemyArenaController_EnemyWave_ {
        struct List_1_EnemyArenaController_EnemyWave___Class* klass;
        MonitorData* monitor;
        struct List_1_EnemyArenaController_EnemyWave___Fields fields;
    };

    enum class EnemyArenaController_WaveStatus__Enum : int32_t {
        ReadyToStart = 0x00000000,
        Running = 0x00000001,
        Finished = 0x00000002,
        Disabled = 0x00000003,
    };

    struct EnemyArenaController_WaveStatus__Enum__Boxed {
        struct EnemyArenaController_WaveStatus__Enum__Class* klass;
        MonitorData* monitor;
        EnemyArenaController_WaveStatus__Enum value;
    };

    struct __declspec(align(8)) EnemyArenaController_EnemyWave__Fields {
        int32_t m_deathCount;
        struct List_1_EntityPlaceholder_* Placeholders;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnStartTimeline;
        struct MoonReference_1_ICondition_* ExtraCondition;
        EnemyArenaController_WaveStatus__Enum Status;

        struct MoonTimeline* m_onStartTimeline;
        struct ICondition* m_resolvedExtraCondition;
    };

    struct EnemyArenaController_EnemyWave {
        struct EnemyArenaController_EnemyWave__Class* klass;
        MonitorData* monitor;
        struct EnemyArenaController_EnemyWave__Fields fields;
    };

    struct EnemyArenaController_EnemyWave__Array {
        struct EnemyArenaController_EnemyWave__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnemyArenaController_EnemyWave* vector[32];
    };

    struct IEnumerator_1_EnemyArenaController_EnemyWave_ {
        struct IEnumerator_1_EnemyArenaController_EnemyWave___Class* klass;
        MonitorData* monitor;
    };

    struct EnemyArenaController_WaveStatus__Enum__VTable {
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

    struct EnemyArenaController_WaveStatus__Enum__StaticFields {
    };

    struct EnemyArenaController_WaveStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyArenaController_WaveStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyArenaController_WaveStatus__Enum__VTable vtable;
    };

    struct EnemyArenaController_EnemyWave__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnemyArenaController_EnemyWave__StaticFields {
    };

    struct EnemyArenaController_EnemyWave__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyArenaController_EnemyWave__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyArenaController_EnemyWave__VTable vtable;
    };

    struct EnemyArenaController_EnemyWave__Array__VTable {
    };

    struct EnemyArenaController_EnemyWave__Array__StaticFields {
    };

    struct EnemyArenaController_EnemyWave__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyArenaController_EnemyWave__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyArenaController_EnemyWave__Array__VTable vtable;
    };

    struct IEnumerator_1_EnemyArenaController_EnemyWave___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_EnemyArenaController_EnemyWave___StaticFields {
    };

    struct IEnumerator_1_EnemyArenaController_EnemyWave___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_EnemyArenaController_EnemyWave___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_EnemyArenaController_EnemyWave___VTable vtable;
    };

    struct List_1_EnemyArenaController_EnemyWave___VTable {
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

    struct List_1_EnemyArenaController_EnemyWave___StaticFields {
        struct EnemyArenaController_EnemyWave__Array* _emptyArray;
    };

    struct List_1_EnemyArenaController_EnemyWave___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_EnemyArenaController_EnemyWave___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_EnemyArenaController_EnemyWave___VTable vtable;
    };

    struct EnemyArenaController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData CreateTimelineParentEntity;
        VirtualInvokeData get_AddChildren;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData GetAllConditionNames;
        VirtualInvokeData GetAllConditionGuids;
        VirtualInvokeData GetConditionNameFromGuid;
        VirtualInvokeData IsConditionGuidValid;
        VirtualInvokeData Validate;
    };

    struct EnemyArenaController__StaticFields {
    };

    struct EnemyArenaController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyArenaController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyArenaController__VTable vtable;
    };

    struct EnemyArenaController_ConditionGuidType {
        struct EnemyArenaController_ConditionGuidType__Class* klass;
        MonitorData* monitor;
    };

    struct EnemyArenaController_ConditionGuidType__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnemyArenaController_ConditionGuidType__StaticFields {
    };

    struct EnemyArenaController_ConditionGuidType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyArenaController_ConditionGuidType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyArenaController_ConditionGuidType__VTable vtable;
    };

    struct __declspec(align(8)) AttackAcceptInfo__Fields {
        bool CanAttack;
        int32_t DamageAmount;
    };

    struct AttackAcceptInfo {
        struct AttackAcceptInfo__Class* klass;
        MonitorData* monitor;
        struct AttackAcceptInfo__Fields fields;
    };

    struct AttackAcceptInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AttackAcceptInfo__StaticFields {
    };

    struct AttackAcceptInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackAcceptInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackAcceptInfo__VTable vtable;
    };

    struct ProjectileDamageDealer__Fields {
        struct DamageDealer__Fields _;
        struct Projectile* m_projectile;
        float EnemyMultiplier;
    };

    struct ProjectileDamageDealer {
        struct ProjectileDamageDealer__Class* klass;
        MonitorData* monitor;
        struct ProjectileDamageDealer__Fields fields;
    };

    struct ProjectileDamageDealer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEnterPhysicsTrigger;
        VirtualInvokeData get_VirtualTimelineTarget;
        VirtualInvokeData get_VirtualTimelineGroup;
        VirtualInvokeData get_NameDisplayedOnClip;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_BypassPlayerInvincibility;
        VirtualInvokeData AmountOfDamage;
        VirtualInvokeData Awake;
        VirtualInvokeData ApplyDamageToCollider;
        VirtualInvokeData DealDamage;
    };

    struct ProjectileDamageDealer__StaticFields {
    };

    struct ProjectileDamageDealer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProjectileDamageDealer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProjectileDamageDealer__VTable vtable;
    };

    struct RigidbodyReactToDamage__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_DamageReactionSettings_* DamageReactionSettings;
    };

    struct RigidbodyReactToDamage {
        struct RigidbodyReactToDamage__Class* klass;
        MonitorData* monitor;
        struct RigidbodyReactToDamage__Fields fields;
    };

    struct __declspec(align(8)) List_1_DamageReactionSettings___Fields {
        struct DamageReactionSettings__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DamageReactionSettings_ {
        struct List_1_DamageReactionSettings___Class* klass;
        MonitorData* monitor;
        struct List_1_DamageReactionSettings___Fields fields;
    };

    struct __declspec(align(8)) DamageReactionSettings__Fields {
        DamageType__Enum DamageType;

        float ForceMultiplier;
    };

    struct DamageReactionSettings {
        struct DamageReactionSettings__Class* klass;
        MonitorData* monitor;
        struct DamageReactionSettings__Fields fields;
    };

    struct DamageReactionSettings__Array {
        struct DamageReactionSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageReactionSettings* vector[32];
    };

    struct IEnumerator_1_DamageReactionSettings_ {
        struct IEnumerator_1_DamageReactionSettings___Class* klass;
        MonitorData* monitor;
    };

    struct DamageReactionSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DamageReactionSettings__StaticFields {
    };

    struct DamageReactionSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageReactionSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageReactionSettings__VTable vtable;
    };

    struct DamageReactionSettings__Array__VTable {
    };

    struct DamageReactionSettings__Array__StaticFields {
    };

    struct DamageReactionSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageReactionSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageReactionSettings__Array__VTable vtable;
    };

    struct IEnumerator_1_DamageReactionSettings___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DamageReactionSettings___StaticFields {
    };

    struct IEnumerator_1_DamageReactionSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DamageReactionSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DamageReactionSettings___VTable vtable;
    };

    struct List_1_DamageReactionSettings___VTable {
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

    struct List_1_DamageReactionSettings___StaticFields {
        struct DamageReactionSettings__Array* _emptyArray;
    };

    struct List_1_DamageReactionSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DamageReactionSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DamageReactionSettings___VTable vtable;
    };

    struct RigidbodyReactToDamage__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
    };

    struct RigidbodyReactToDamage__StaticFields {
    };

    struct RigidbodyReactToDamage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyReactToDamage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyReactToDamage__VTable vtable;
    };

    struct SetSpriteAnimatorAction__Fields {
        struct ActionMethod__Fields _;
        struct SpriteAnimator* SpriteAnimator;
        struct TextureAnimation* AnimationToSet;
        struct ActionMethod* OnAnimationEndedAction;
        bool PerformIfSameAnimationIsPlaying;
    };

    struct SetSpriteAnimatorAction {
        struct SetSpriteAnimatorAction__Class* klass;
        MonitorData* monitor;
        struct SetSpriteAnimatorAction__Fields fields;
    };

    struct SetSpriteAnimatorAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

    struct SetSpriteAnimatorAction__StaticFields {
    };

    struct SetSpriteAnimatorAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetSpriteAnimatorAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetSpriteAnimatorAction__VTable vtable;
    };

    struct SpriteAnimator_c {
        struct SpriteAnimator_c__Class* klass;
        MonitorData* monitor;
    };

    struct SpriteAnimator_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpriteAnimator_c__StaticFields {
        struct SpriteAnimator_c* __9;
        struct Action* __9__59_0;
    };

    struct SpriteAnimator_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteAnimator_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteAnimator_c__VTable vtable;
    };

    struct SpriteAnimatorSerializer__Fields {
        struct SaveSerialize__Fields _;
        struct SpriteAnimator* m_spriteAnimator;
    };

    struct SpriteAnimatorSerializer {
        struct SpriteAnimatorSerializer__Class* klass;
        MonitorData* monitor;
        struct SpriteAnimatorSerializer__Fields fields;
    };

    struct SpriteAnimatorSerializer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct SpriteAnimatorSerializer__StaticFields {
    };

    struct SpriteAnimatorSerializer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteAnimatorSerializer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteAnimatorSerializer__VTable vtable;
    };

    struct SpriteAnimatorWithTransitions_c {
        struct SpriteAnimatorWithTransitions_c__Class* klass;
        MonitorData* monitor;
    };

    struct SpriteAnimatorWithTransitions_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpriteAnimatorWithTransitions_c__StaticFields {
        struct SpriteAnimatorWithTransitions_c* __9;
        struct Action_1_TextureAnimation_* __9__65_0;
        struct Action_1_TextureAnimation_* __9__65_1;
    };

    struct SpriteAnimatorWithTransitions_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteAnimatorWithTransitions_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteAnimatorWithTransitions_c__VTable vtable;
    };

    struct Atlas___VTable {
    };

    struct Atlas___StaticFields {
    };

    struct Atlas___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Atlas___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Atlas___VTable vtable;
    };

    struct __declspec(align(8)) TextureAnimation_c_DisplayClass15_0__Fields {
        struct TextureAnimation* __4__this;
        struct Atlas* at;
    };

    struct TextureAnimation_c_DisplayClass15_0 {
        struct TextureAnimation_c_DisplayClass15_0__Class* klass;
        MonitorData* monitor;
        struct TextureAnimation_c_DisplayClass15_0__Fields fields;
    };

    struct TextureAnimation_c_DisplayClass15_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TextureAnimation_c_DisplayClass15_0__StaticFields {
    };

    struct TextureAnimation_c_DisplayClass15_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextureAnimation_c_DisplayClass15_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextureAnimation_c_DisplayClass15_0__VTable vtable;
    };

    struct TextureAnimator_c {
        struct TextureAnimator_c__Class* klass;
        MonitorData* monitor;
    };

    struct TextureAnimator_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TextureAnimator_c__StaticFields {
        struct TextureAnimator_c* __9;
        struct Action* __9__6_0;
    };

    struct TextureAnimator_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextureAnimator_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextureAnimator_c__VTable vtable;
    };

    struct __declspec(align(8)) DashOwlState__Fields {
        struct DashOwlEnemy* DashOwl;
    };

    struct DashOwlState {
        struct DashOwlState__Class* klass;
        MonitorData* monitor;
        struct DashOwlState__Fields fields;
    };

    struct DashOwlAlertState__Fields {
        struct DashOwlState__Fields _;
    };

    struct DashOwlAlertState {
        struct DashOwlAlertState__Class* klass;
        MonitorData* monitor;
        struct DashOwlAlertState__Fields fields;
    };

    struct OwlEnemy__Fields {
        struct Enemy2D__Fields _;
        struct FlyMovement* FlyMovement;
        struct SpriteRotationController* SpriteRotation;
    };

    struct OwlEnemy {
        struct OwlEnemy__Class* klass;
        MonitorData* monitor;
        struct OwlEnemy__Fields fields;
    };

    struct DashOwlEnemy__Fields {
        struct OwlEnemy__Fields _;
        struct SoundSource* DashSound;
        struct SoundSource* DashAlertSound;
        struct Varying2DSoundProvider* HitWallSound;
        struct DashOwlEnemyAnimations* Animations;
        struct DashOwlEnemySettings* Settings;
        struct DashOwlEnemy_States* State;
    };

    struct DashOwlEnemy {
        struct DashOwlEnemy__Class* klass;
        MonitorData* monitor;
        struct DashOwlEnemy__Fields fields;
    };

    struct FlyMovement__Fields {
        struct SaveSerialize__Fields _;
        struct Kickback* Kickback;
        bool HasKickback;
        struct Vector2 Velocity;
        struct Rigidbody* m_rigidbody;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct FlyMovement {
        struct FlyMovement__Class* klass;
        MonitorData* monitor;
        struct FlyMovement__Fields fields;
    };

    struct SpriteRotationController__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* m_transform;
        float TargetAngle;
        float RotationMultiplier;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct SpriteRotationController {
        struct SpriteRotationController__Class* klass;
        MonitorData* monitor;
        struct SpriteRotationController__Fields fields;
    };

    struct __declspec(align(8)) DashOwlEnemyAnimations__Fields {
        struct TextureAnimationWithTransitions* Idle;
        struct TextureAnimationWithTransitions* Alert;
        struct TextureAnimationWithTransitions* FlyHome;
        struct TextureAnimationWithTransitions* Bashed;
        struct TextureAnimationWithTransitions* HitWall;
        struct TextureAnimationWithTransitions* HitGround;
        struct TextureAnimationWithTransitions* HitCeiling;
        struct TextureAnimationWithTransitions* Dash;
        struct TextureAnimationWithTransitions* DashAlert;
        struct TextureAnimationWithTransitions* Frozen;
        struct TextureAnimationWithTransitions* HurtFront;
        struct TextureAnimationWithTransitions* HurtBack;
        struct TextureAnimationWithTransitions* Spin;
    };

    struct DashOwlEnemyAnimations {
        struct DashOwlEnemyAnimations__Class* klass;
        MonitorData* monitor;
        struct DashOwlEnemyAnimations__Fields fields;
    };

    struct __declspec(align(8)) DashOwlEnemySettings__Fields {
        struct AnimationCurve* DashCurve;
        struct AnimationCurve* BounceCurve;
        float DashDistance;
        float DashRange;
        float MaxDistanceFromStartPosition;
        float DashAlertDelay;
        float MoveBackSpeed;
        int32_t BashBounceDamage;
        struct AnimationCurve* FlyBackVertical;
        struct AnimationCurve* FlyBackHorizontal;
        bool Perched;
    };

    struct DashOwlEnemySettings {
        struct DashOwlEnemySettings__Class* klass;
        MonitorData* monitor;
        struct DashOwlEnemySettings__Fields fields;
    };

    struct __declspec(align(8)) DashOwlEnemy_States__Fields {
        struct DashOwlIdleState* Idle;
        struct DashOwlFlyHomeState* FlyHome;
        struct DashOwlBashedState* Bashed;
        struct DashOwlBounceState* Bounce;
        struct DashOwlDashState* Dash;
        struct DashOwlDashAlertState* DashAlert;
        struct DashOwlHurtState* Hurt;
        struct DashOwlSpiritLeashedState* SpiritLeashed;
    };

    struct DashOwlEnemy_States {
        struct DashOwlEnemy_States__Class* klass;
        MonitorData* monitor;
        struct DashOwlEnemy_States__Fields fields;
    };

    struct DashOwlIdleState__Fields {
        struct DashOwlState__Fields _;
    };

    struct DashOwlIdleState {
        struct DashOwlIdleState__Class* klass;
        MonitorData* monitor;
        struct DashOwlIdleState__Fields fields;
    };

    struct DashOwlFlyHomeState__Fields {
        struct DashOwlState__Fields _;
        bool m_flyLeft;
        float m_remainingTime;
        float m_duration;
        struct Vector3 m_startPosition;
    };

    struct DashOwlFlyHomeState {
        struct DashOwlFlyHomeState__Class* klass;
        MonitorData* monitor;
        struct DashOwlFlyHomeState__Fields fields;
    };

    struct DashOwlBashedState__Fields {
        struct DashOwlState__Fields _;
    };

    struct DashOwlBashedState {
        struct DashOwlBashedState__Class* klass;
        MonitorData* monitor;
        struct DashOwlBashedState__Fields fields;
    };

    struct DashOwlBounceState__Fields {
        struct DashOwlState__Fields _;
        struct Vector2 m_direction;
    };

    struct DashOwlBounceState {
        struct DashOwlBounceState__Class* klass;
        MonitorData* monitor;
        struct DashOwlBounceState__Fields fields;
    };

    struct DashOwlDashState__Fields {
        struct DashOwlState__Fields _;
        struct Vector3 m_dashTargetOffset;
    };

    struct DashOwlDashState {
        struct DashOwlDashState__Class* klass;
        MonitorData* monitor;
        struct DashOwlDashState__Fields fields;
    };

    struct DashOwlDashAlertState__Fields {
        struct DashOwlState__Fields _;
    };

    struct DashOwlDashAlertState {
        struct DashOwlDashAlertState__Class* klass;
        MonitorData* monitor;
        struct DashOwlDashAlertState__Fields fields;
    };

    struct DashOwlHurtState__Fields {
        struct DashOwlState__Fields _;
        struct TextureAnimationWithTransitions* m_hurtFront;
        struct TextureAnimationWithTransitions* m_hurtBack;
    };

    struct DashOwlHurtState {
        struct DashOwlHurtState__Class* klass;
        MonitorData* monitor;
        struct DashOwlHurtState__Fields fields;
    };

    struct DashOwlSpiritLeashedState__Fields {
        struct DashOwlState__Fields _;
        struct Vector3 m_spiritLeashPosition;
    };

    struct DashOwlSpiritLeashedState {
        struct DashOwlSpiritLeashedState__Class* klass;
        MonitorData* monitor;
        struct DashOwlSpiritLeashedState__Fields fields;
    };

    struct FlyMovement__VTable {
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
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
    };

    struct FlyMovement__StaticFields {
    };

} // namespace app
