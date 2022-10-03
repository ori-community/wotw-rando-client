namespace app {
    struct LegacyEntity {
        struct LegacyEntity__Class* klass;
        MonitorData* monitor;
        struct LegacyEntity__Fields fields;
    };

    struct EntityController__Fields {
        struct SaveSerialize__Fields _;
        struct LegacyEntity* Entity;
        struct Action_1_Damage_* OnReceiveDamage;
        struct Vector3 _LastSeenSeinPosition_k__BackingField;
        bool m_nearSein;
    };

    struct EntityController {
        struct EntityController__Class* klass;
        MonitorData* monitor;
        struct EntityController__Fields fields;
    };

    struct Action_1_Damage___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Damage_ {
        struct Action_1_Damage___Class* klass;
        MonitorData* monitor;
        struct Action_1_Damage___Fields fields;
    };

    struct EntityControllerBT__Fields {
        struct EntityController__Fields _;
        struct BehaviourTree_1* BehaviourTree;
    };

    struct EntityControllerBT {
        struct EntityControllerBT__Class* klass;
        MonitorData* monitor;
        struct EntityControllerBT__Fields fields;
    };

    struct __declspec(align(8)) BehaviourTree_1__Fields {
        struct IBehaviourTreeNode* Root;
        struct BehaviourStates* States;
        struct BehaviourEvents* Events;
        uint32_t m_tickId;
    };

    struct BehaviourTree_1 {
        struct BehaviourTree_1__Class* klass;
        MonitorData* monitor;
        struct BehaviourTree_1__Fields fields;
    };

    struct __declspec(align(8)) IBehaviourTreeNode__Fields {
        uint32_t m_visitedTickId;
        bool m_isOpen;
    };

    struct IBehaviourTreeNode {
        struct IBehaviourTreeNode__Class* klass;
        MonitorData* monitor;
        struct IBehaviourTreeNode__Fields fields;
    };

    struct ActionNode_1__Fields {
        struct IBehaviourTreeNode__Fields _;
        struct String* name;
        struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* fn;
    };

    struct ActionNode_1 {
        struct ActionNode_1__Class* klass;
        MonitorData* monitor;
        struct ActionNode_1__Fields fields;
    };

    struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_ {
        struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus___Class* klass;
        MonitorData* monitor;
        struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus___Fields fields;
    };

    enum class BehaviourTreeStatus__Enum : int32_t {
        Success = 0x00000000,
        Failure = 0x00000001,
        Running = 0x00000002,
    };

    struct BehaviourTreeStatus__Enum__Boxed {
        struct BehaviourTreeStatus__Enum__Class* klass;
        MonitorData* monitor;
        BehaviourTreeStatus__Enum value;
    };

    struct TickData {
        struct BehaviourTree_1* tree;
        float deltaTime;
    };

    struct TickData__Boxed {
        struct TickData__Class* klass;
        MonitorData* monitor;
        struct TickData fields;
    };

    struct __declspec(align(8)) BehaviourStates__Fields {
        struct IBehaviourState* m_currentState;
        float m_currentStateTime;
    };

    struct BehaviourStates {
        struct BehaviourStates__Class* klass;
        MonitorData* monitor;
        struct BehaviourStates__Fields fields;
    };

    struct IBehaviourState {
        struct IBehaviourState__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) BehaviourEvents__Fields {
        struct Dictionary_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_* Events;
    };

    struct BehaviourEvents {
        struct BehaviourEvents__Class* klass;
        MonitorData* monitor;
        struct BehaviourEvents__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct Dictionary_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct List_1_UberBehaviourTree_IBehaviourEvent_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ fields;
    };

    struct __declspec(align(8)) List_1_UberBehaviourTree_IBehaviourEvent___Fields {
        struct IBehaviourEvent__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
        struct List_1_UberBehaviourTree_IBehaviourEvent___Fields fields;
    };

    struct IBehaviourEvent {
        struct IBehaviourEvent__Class* klass;
        MonitorData* monitor;
    };

    struct IBehaviourEvent__Array {
        struct IBehaviourEvent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IBehaviourEvent* vector[32];
    };

    struct IEnumerator_1_UberBehaviourTree_IBehaviourEvent_ {
        struct IEnumerator_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Fields {
        struct Dictionary_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Fields {
        struct Dictionary_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Fields fields;
    };

    struct List_1_UberBehaviourTree_IBehaviourEvent___Array {
        struct List_1_UberBehaviourTree_IBehaviourEvent___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_UberBehaviourTree_IBehaviourEvent_* vector[32];
    };

    struct IEnumerator_1_List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct IEnumerator_1_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct ICollection_1_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ {
        int32_t key;
        struct List_1_UberBehaviourTree_IBehaviourEvent_* value;
    };

    struct KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Boxed {
        struct KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ fields;
    };

    struct KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Array {
        struct KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_List_1_UberBehaviourTree_IBehaviourEvent_ {
        struct IEnumerable_1_List_1_UberBehaviourTree_IBehaviourEvent___Class* klass;
        MonitorData* monitor;
    };

    struct LegacyDamageReciever__Fields {
        struct SaveSerialize__Fields _;
        bool Activated;
        struct DamageOwner* DamageOwner;
        struct ActionMethod* DamageAction;
        struct ActionMethod* DeathAction;
        struct ActionMethod* HurtAction;
        struct LegacyAnimator* DamageAnimator;
        float MaxHealth;
        float Health;
        bool DisableWhenNoHealthLeft;
        bool DestroyWhenNoHealthLeft;
        struct UberDelegate_1_Damage_* OnDeathEvent;
        struct Func_2_Damage_Boolean_* IgnoreDamageCondition;
        bool BounceOnStomp;
        float m_stressTestDamageInterval;
        struct Damage* m_stressTestDamage;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;
    };

    struct LegacyDamageReciever {
        struct LegacyDamageReciever__Class* klass;
        MonitorData* monitor;
        struct LegacyDamageReciever__Fields fields;
    };

    struct LegacyEntityDamageReciever__Fields {
        struct LegacyDamageReciever__Fields _;
        struct LegacyEntity* Entity;
        struct LegacyEntityDamageReciever_ModifyDamageDelegate* OnModifyDamage;
        bool CanBeCrushed;
        struct Event_1* OnDamageSoundEvent;
        struct Event_1* OnDeathSoundEvent;
        bool IgnoreEnemyTouchDamage;
        struct SoundHost* m_soundHost;
        struct List_1_LimitedLifetime_* m_fireEffects;
    };

    struct LegacyEntityDamageReciever {
        struct LegacyEntityDamageReciever__Class* klass;
        MonitorData* monitor;
        struct LegacyEntityDamageReciever__Fields fields;
    };

    struct ActionMethod__Fields {
        struct SaveSerialize__Fields _;
    };

    struct ActionMethod {
        struct ActionMethod__Class* klass;
        MonitorData* monitor;
        struct ActionMethod__Fields fields;
    };

    struct ActivateRailAction__Fields {
        struct ActionMethod__Fields _;
        struct GameObject* Rail;
        bool Active;
        bool ApplyToHierarchy;
    };

    struct ActivateRailAction {
        struct ActivateRailAction__Class* klass;
        MonitorData* monitor;
        struct ActivateRailAction__Fields fields;
    };

    struct __declspec(align(8)) UberDelegate_1_Damage___Fields {
        struct List_1_System_Action_1_* m_registers;
    };

    struct UberDelegate_1_Damage_ {
        struct UberDelegate_1_Damage___Class* klass;
        MonitorData* monitor;
        struct UberDelegate_1_Damage___Fields fields;
    };

    struct __declspec(align(8)) List_1_System_Action_1___Fields {
        struct Action_1_Damage___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Action_1_ {
        struct List_1_System_Action_1___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Action_1___Fields fields;
    };

    struct Action_1_Damage___Array {
        struct Action_1_Damage___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Action_1_Damage_* vector[32];
    };

    struct IEnumerator_1_System_Action_1_ {
        struct IEnumerator_1_System_Action_1___Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_Damage_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_Damage_Boolean_ {
        struct Func_2_Damage_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_Damage_Boolean___Fields fields;
    };

    struct LegacyEntityDamageReciever_ModifyDamageDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct LegacyEntityDamageReciever_ModifyDamageDelegate {
        struct LegacyEntityDamageReciever_ModifyDamageDelegate__Class* klass;
        MonitorData* monitor;
        struct LegacyEntityDamageReciever_ModifyDamageDelegate__Fields fields;
    };

    struct Action_1_LegacyEntity___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_LegacyEntity_ {
        struct Action_1_LegacyEntity___Class* klass;
        MonitorData* monitor;
        struct Action_1_LegacyEntity___Fields fields;
    };

    struct __declspec(align(8)) List_1_LimitedLifetime___Fields {
        struct LimitedLifetime__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LimitedLifetime_ {
        struct List_1_LimitedLifetime___Class* klass;
        MonitorData* monitor;
        struct List_1_LimitedLifetime___Fields fields;
    };

    struct LimitedLifetime__Fields {
        struct Suspendable__Fields _;
        float Lifetime;
        float m_lifeTimeRemaining;
        struct Func_1_Boolean_* DestructionCondition;
        struct Action_1_LimitedLifetime_* OnBeforeDestroy;
        bool _IsSuspended_k__BackingField;
    };

    struct LimitedLifetime {
        struct LimitedLifetime__Class* klass;
        MonitorData* monitor;
        struct LimitedLifetime__Fields fields;
    };

    struct Action_1_LimitedLifetime___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_LimitedLifetime_ {
        struct Action_1_LimitedLifetime___Class* klass;
        MonitorData* monitor;
        struct Action_1_LimitedLifetime___Fields fields;
    };

    struct LimitedLifetime__Array {
        struct LimitedLifetime__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LimitedLifetime* vector[32];
    };

    struct IEnumerator_1_LimitedLifetime_ {
        struct IEnumerator_1_LimitedLifetime___Class* klass;
        MonitorData* monitor;
    };

    struct LegacyEntityDamageDealer__Fields {
        struct DamageDealer__Fields _;
        struct LegacyEntity* Entity;
    };

    struct LegacyEntityDamageDealer {
        struct LegacyEntityDamageDealer__Class* klass;
        MonitorData* monitor;
        struct LegacyEntityDamageDealer__Fields fields;
    };

    enum class Vitals_SpecialHealthType__Enum : int32_t {
        None = 0x00000000,
        CreepWall = 0x00000001,
        DestructableWall = 0x00000002,
        RedirectEnemyAttackWall = 0x00000003,
    };

    struct Vitals_SpecialHealthType__Enum__Boxed {
        struct Vitals_SpecialHealthType__Enum__Class* klass;
        MonitorData* monitor;
        Vitals_SpecialHealthType__Enum value;
    };

    struct Vitals__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        float m_health;
        float m_maxHealth;
        int32_t m_difficulty;
        bool CombineDamageReceivers;
        struct DamageReceiver__Array* DamageReceivers;
        bool DisableWhenZeroHealth;
        bool textAtDamageReceiver;
        bool PreventResettingHealthOnRestoreCheckpoint;
        struct ActionMethod* DamageReceivedAction;
        struct MoonTimeline* DamageReceivedTimeline;
        struct ActionMethod* ZeroHealthAction;
        struct MoonTimeline* ZeroHealthTimeline;
        bool ExecuteZeroHealthActionOnlyOnce;
        struct Action_1_DamageResult_* DamageResultReceived;
        struct Action_2_Single_Single_* OnHealthChanged;
        struct Action_1_DamageResult_* OnDeath;
        struct Event_1* ExplosionDeathSound;
        struct List_1_UnityEngine_SkinnedMeshRenderer_* FireEffectEmissionMeshes;
        bool Imortal;
        bool ShowDamageText;
        bool ZeroHealthActionExecuted;
        bool m_isEnemyEntityVital;
        struct DamageReceiver* m_fireReceiver;
        struct HashSet_1_System_Int32_* m_processedIDs;
        struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* m_fireEffects;
        struct InterfaceCache* m_deathListenersCache;
        struct List_1_Moon_IVitalsDeathListener_* m_deathListeners;
        bool m_isPrewarmed;
        struct Vitals_DamageProcessHelper* m_damageProcessor;
        bool m_hasFireshardFallbackReceiver;
        struct DamageReceiver* m_fireshardFallbackReceiver;
        float m_stressTestDamageInterval;
        struct Damage* m_stressTestDamage;
        struct DamageResult m_stressTestDamageResult;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;

        Vitals_SpecialHealthType__Enum SpecialHealthRule;

        bool m_affectedByFocusShard;
    };

    struct Vitals {
        struct Vitals__Class* klass;
        MonitorData* monitor;
        struct Vitals__Fields fields;
    };

    enum class DamageLayer__Enum : int32_t {
        Player = 0x00000000,
        Enemy = 0x00000001,
        Environment = 0x00000002,
    };

    struct DamageLayer__Enum__Boxed {
        struct DamageLayer__Enum__Class* klass;
        MonitorData* monitor;
        DamageLayer__Enum value;
    };

    enum class DamageReceiver_DamageFilterType__Enum : int32_t {
        DontFilterByType = 0x00000000,
        IgnoreDamageType = 0x00000001,
        IgnoreAllButThisDamageType = 0x00000002,
    };

    struct DamageReceiver_DamageFilterType__Enum__Boxed {
        struct DamageReceiver_DamageFilterType__Enum__Class* klass;
        MonitorData* monitor;
        DamageReceiver_DamageFilterType__Enum value;
    };

    struct DamageReceiver__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_Moon_DamageReceiver_OverrideInfo_* m_overrides;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct Damage* LastDamageReceived;
        DamageLayer__Enum DamageLayer;

        DamageLayerMask__Enum DamageMask;

        struct DamageOwner* DamageOwner;
        float DamageMultiplier;
        struct ActionMethod* DamageAction;
        bool ProcessDamageManually;
        bool _ShouldSpawnFXWhenDamaged_k__BackingField;
        struct Action_1_DamageResult_* DamageResultReceived;
        bool m_cachedComponents;
        struct List_1_Moon_DamageReceiver_DamageEntry_* m_damageQueue;
        struct HashSet_1_System_Int32_* m_damageIDs;
        struct InterfaceCache* m_damageResolver;
        struct DamageOwner* m_damageOwner;
        bool m_isActive;
        bool IgnoreUntargetedDamage;
        bool IgnoreDamageWithoutOwner;
        DamageReceiver_DamageFilterType__Enum FilterType;

        DamageType__Enum FilteredDamageType;

        bool DestroyProjectiles;
        bool FilterDirection;
        bool UseAttackerDirectionForFilter;
        bool UseDamageDirectionForFilter;
        float AllowedDamageAngle;
        struct Transform* AllowedDamageOriginTransform;
        struct Transform* AllowedDamageTargetTransform;
        struct EntityTargetting* m_targetting;
        struct DealDamageOverTime* m_dealDamageOverTime;
        bool m_hasDealDamageOverTime;
        struct LimitedLifetime* m_limitedLifetime;
        bool m_hasLimitedLifetime;
        struct EnemyEntity* m_enemyEntity;
        struct Collider* m_collider;
        struct Action_1_Damage_* m_damageReceived;
        float m_stressTestTimer;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;

        struct String* m_clipTittle;
    };

    struct DamageReceiver {
        struct DamageReceiver__Class* klass;
        MonitorData* monitor;
        struct DamageReceiver__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_DamageReceiver_OverrideInfo___Fields {
        struct DamageReceiver_OverrideInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_DamageReceiver_OverrideInfo_ {
        struct List_1_Moon_DamageReceiver_OverrideInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_DamageReceiver_OverrideInfo___Fields fields;
    };

    struct __declspec(align(8)) DamageReceiver_OverrideInfo__Fields {
        bool IsEnabled;
    };

    struct DamageReceiver_OverrideInfo {
        struct DamageReceiver_OverrideInfo__Class* klass;
        MonitorData* monitor;
        struct DamageReceiver_OverrideInfo__Fields fields;
    };

    struct DamageReceiver_OverrideInfo__Array {
        struct DamageReceiver_OverrideInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageReceiver_OverrideInfo* vector[32];
    };

    struct IEnumerator_1_Moon_DamageReceiver_OverrideInfo_ {
        struct IEnumerator_1_Moon_DamageReceiver_OverrideInfo___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_DamageReceiver_DamageEntry___Fields {
        struct DamageReceiver_DamageEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_DamageReceiver_DamageEntry_ {
        struct List_1_Moon_DamageReceiver_DamageEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_DamageReceiver_DamageEntry___Fields fields;
    };

    struct Nullable_1_DamageResultType_ {
        DamageResultType__Enum value;

        bool has_value;
    };

    struct Nullable_1_DamageResultType___Boxed {
        struct Nullable_1_DamageResultType___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_DamageResultType_ fields;
    };

    struct __declspec(align(8)) DamageReceiver_DamageEntry__Fields {
        struct Damage* Damage;
        float TimeUntilNextTick;
        int32_t CurrentTick;
        struct Nullable_1_DamageResultType_ ResultOverride;
    };

    struct DamageReceiver_DamageEntry {
        struct DamageReceiver_DamageEntry__Class* klass;
        MonitorData* monitor;
        struct DamageReceiver_DamageEntry__Fields fields;
    };

    struct DamageReceiver_DamageEntry__Array {
        struct DamageReceiver_DamageEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageReceiver_DamageEntry* vector[32];
    };

    struct IEnumerator_1_Moon_DamageReceiver_DamageEntry_ {
        struct IEnumerator_1_Moon_DamageReceiver_DamageEntry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) InterfaceCache__Fields {
        struct Component_1__Array* Components;
    };

    struct InterfaceCache {
        struct InterfaceCache__Class* klass;
        MonitorData* monitor;
        struct InterfaceCache__Fields fields;
    };

    struct DealDamageOverTime__Fields {
        struct MonoBehaviour__Fields _;
        DamageType__Enum DamageType;

        AbilityType__Enum AbilityType;

        float DamageAmount;
        DamageWeight__Enum DamageWeight;

        float DamageInterval;
        float DamageDuration;
        bool DestroyWhenAllDamageDealt;
        SpiritShardType__Enum ShardType;

        float m_remainingInterval;
        float m_remainingTime;
        struct Transform* m_transform;
        struct IDamageReciever__Array* CachedDamageReceivers;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct DealDamageOverTime {
        struct DealDamageOverTime__Class* klass;
        MonitorData* monitor;
        struct DealDamageOverTime__Fields fields;
    };

    struct IDamageReciever__Array {
        struct IDamageReciever__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IDamageReciever* vector[32];
    };

    enum class EnemyEntity_SpawnPopFixState__Enum : int32_t {
        NotApplied = 0x00000000,
        FixPending = 0x00000001,
        FixApplied = 0x00000002,
    };

    struct EnemyEntity_SpawnPopFixState__Enum__Boxed {
        struct EnemyEntity_SpawnPopFixState__Enum__Class* klass;
        MonitorData* monitor;
        EnemyEntity_SpawnPopFixState__Enum value;
    };

    enum class EntityWeightData_EntityWeight__Enum : int32_t {
        Light = 0x0000000a,
        LightAir = 0x0000000b,
        Medium = 0x00000014,
        Heavy = 0x0000001e,
        HeavyAir = 0x0000001f,
    };

    struct EntityWeightData_EntityWeight__Enum__Boxed {
        struct EntityWeightData_EntityWeight__Enum__Class* klass;
        MonitorData* monitor;
        EntityWeightData_EntityWeight__Enum value;
    };

    struct EnemyEntity__Fields {
        struct Entity__Fields _;
        EnemyEntity_SpawnPopFixState__Enum _PopFixState_k__BackingField;

        struct Action* OnAttackTokenStolenCallback;
        bool m_shouldApplyRepelForce;
        float m_repelRange;
        float m_maxRepelForce;
        float m_samePositionError;
        EntityWeightData_EntityWeight__Enum m_weight;

        struct Event_1* DeathEvent;
        struct List_1_MeshTrail_* TrailsToReset;
        struct SuspendWhenOutOfFrustrum* m_frustrumCheck;
        struct HealthBar* m_healthBar;
        struct Vector3 m_colliderCenter;
        struct Type* m_enemyType;
        int32_t m_cachedIndexInGroup;
        int32_t m_indexInGroupCachedFrame;
        float m_timeInBelowMinHealth;
        float m_timeInDeathState;
        struct DamageOwner* m_damageOwner;
    };

    struct EnemyEntity {
        struct EnemyEntity__Class* klass;
        MonitorData* monitor;
        struct EnemyEntity__Fields fields;
    };

    struct __declspec(align(8)) List_1_MeshTrail___Fields {
        struct MeshTrail__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_MeshTrail_ {
        struct List_1_MeshTrail___Class* klass;
        MonitorData* monitor;
        struct List_1_MeshTrail___Fields fields;
    };

    struct MeshTrail__Array {
        struct MeshTrail__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MeshTrail* vector[32];
    };

    struct IEnumerator_1_MeshTrail_ {
        struct IEnumerator_1_MeshTrail___Class* klass;
        MonitorData* monitor;
    };

    struct SuspendWhenOutOfFrustrum__Fields {
        struct MonoBehaviour__Fields _;
        struct HashSet_1_Moon_ISuspendable_* m_suspendables;
        struct Rect BoundingBox;
        struct Action* OnSuspended;
        struct Action* OnResumed;
        bool m_insideFrustum;
        bool m_targetsSuspended;
        struct InterfaceCache* m_frustumSuspendablesCache;
        struct List_1_ICameraFrustumSuspendable_* m_frustumSuspendables;
        struct Renderer__Array* m_cachedRenderers;
        bool m_isPrewarmed;
        bool _CanSuspendResume_k__BackingField;
    };

    struct SuspendWhenOutOfFrustrum {
        struct SuspendWhenOutOfFrustrum__Class* klass;
        MonitorData* monitor;
        struct SuspendWhenOutOfFrustrum__Fields fields;
    };

    struct __declspec(align(8)) List_1_ICameraFrustumSuspendable___Fields {
        struct ICameraFrustumSuspendable__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ICameraFrustumSuspendable_ {
        struct List_1_ICameraFrustumSuspendable___Class* klass;
        MonitorData* monitor;
        struct List_1_ICameraFrustumSuspendable___Fields fields;
    };

    struct ICameraFrustumSuspendable {
        struct ICameraFrustumSuspendable__Class* klass;
        MonitorData* monitor;
    };

    struct ICameraFrustumSuspendable__Array {
        struct ICameraFrustumSuspendable__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ICameraFrustumSuspendable* vector[32];
    };

    struct IEnumerator_1_ICameraFrustumSuspendable_ {
        struct IEnumerator_1_ICameraFrustumSuspendable___Class* klass;
        MonitorData* monitor;
    };

    struct HealthBar__Fields {
        struct MonoBehaviour__Fields _;
        struct AnimationCurve* MinTransitionCurve;
        struct AnimationCurve* MaxTransitionCurve;
        struct FloatValueProvider* ValueProvider;
        struct Renderer* MinBarRenderer;
        struct Renderer* MaxBarRenderer;
        struct Renderer* BackBarRenderer;
        bool AnimateColors;
        struct Color m_MinBarGreenColor;
        struct Color m_MinBarYellowColor;
        struct Color m_MinBarRedColor;
        struct Color m_MaxBarColor;
        struct Color m_BackgroundColor;
        struct Color m_minBarOriginalColor;
        struct Color m_maxBarOriginalColor;
        struct Vector4 m_barMaskOriginalOffset;
        float MaskOffset;
        float MaskMultiplier;
        float m_minTransitionCurveDuration;
        float m_maxTransitionCurveDuration;
        struct Transform* m_myTransform;
        bool m_cachedOriginals;
        float m_displayedValue;
        float m_maxValue;
        float m_time;
        float m_alpha;
        bool m_shouldUpdateColors;
        bool m_showBar;
    };

    struct HealthBar {
        struct HealthBar__Class* klass;
        MonitorData* monitor;
        struct HealthBar__Fields fields;
    };

    struct FloatValueProvider__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct FloatValueProvider {
        struct FloatValueProvider__Class* klass;
        MonitorData* monitor;
        struct FloatValueProvider__Fields fields;
    };

    struct CartBrakeDurationProvider__Fields {
        struct FloatValueProvider__Fields _;
        struct CartController* CartController;
    };

    struct CartBrakeDurationProvider {
        struct CartBrakeDurationProvider__Class* klass;
        MonitorData* monitor;
        struct CartBrakeDurationProvider__Fields fields;
    };

    enum class CartAccelerationInputType__Enum : int32_t {
        ShoulderButtons = 0x00000000,
        AnalogStickFullRange = 0x00000001,
        AnalogStickLeftRight = 0x00000002,
        Custom = 0x00000003,
    };

    struct CartAccelerationInputType__Enum__Boxed {
        struct CartAccelerationInputType__Enum__Class* klass;
        MonitorData* monitor;
        CartAccelerationInputType__Enum value;
    };

    enum class Input_Button__Enum : int32_t {
        ButtonA = 0x00000000,
        ButtonX = 0x00000001,
        ButtonY = 0x00000002,
        ButtonB = 0x00000003,
        LeftTrigger = 0x00000004,
        RightTrigger = 0x00000005,
        LeftShoulder = 0x00000006,
        RightShoulder = 0x00000007,
        Left = 0x00000008,
        Right = 0x00000009,
        Up = 0x0000000a,
        Down = 0x0000000b,
        Unassigned = 0x0000000c,
        Any = 0x0000000d,
        LeftStick = 0x0000000e,
        RightStick = 0x0000000f,
    };

    struct Input_Button__Enum__Boxed {
        struct Input_Button__Enum__Class* klass;
        MonitorData* monitor;
        Input_Button__Enum value;
    };

    struct CartController__Fields {
        struct SaveSerialize__Fields _;
        bool IgnoreControllerInput;
        struct Cart* Cart;
        CartAccelerationInputType__Enum CartAccelerationInputType;

        Input_Button__Enum AccelerateButton;

        Input_Button__Enum DecelerateButton;

        Input_Button__Enum BoostButton;

        Input_Button__Enum FlipButton;

        bool UseStickToFlip;
        bool AllowBash;
        bool LimitBrakeTime;
        bool AutoLeanForward;
        struct AnimationCurve* AutoLeanForwardCurve;
        float JumpOutHeight;
        bool m_hadFlipedWithStick;
        struct Transform* m_transform;
        float m_lastHorizontalRawInput;
        float m_lastInputForce;
        float m_startMovingTimer;
        float m_brakeTimer;
        struct Component_1__Array* m_suspendables;
        float _ControllerExtraSpeed_k__BackingField;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct Action* OnTriggeredAnimationFinished;
        struct IPressurePlate* m_pressurePlate;
    };

} // namespace app
