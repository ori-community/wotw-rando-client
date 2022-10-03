namespace app {
    struct Primitive {
        struct Primitive__Class* klass;
        MonitorData* monitor;
        struct Primitive__Fields fields;
    };

    struct AxisAlignedBox__Fields {
        struct Primitive__Fields _;
        struct Vector3 Min;
        struct Vector3 Max;
    };

    struct AxisAlignedBox {
        struct AxisAlignedBox__Class* klass;
        MonitorData* monitor;
        struct AxisAlignedBox__Fields fields;
    };

    struct AxisAlignedBox__Array {
        struct AxisAlignedBox__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AxisAlignedBox* vector[32];
    };

    struct IEnumerator_1_Moon_AxisAlignedBox_ {
        struct IEnumerator_1_Moon_AxisAlignedBox___Class* klass;
        MonitorData* monitor;
    };

    enum class EntityAvatar_MirrorMode__Enum : int32_t {
        Rotation = 0x00000000,
        Scale = 0x00000001,
    };

    struct EntityAvatar_MirrorMode__Enum__Boxed {
        struct EntityAvatar_MirrorMode__Enum__Class* klass;
        MonitorData* monitor;
        EntityAvatar_MirrorMode__Enum value;
    };

    struct __declspec(align(8)) EntityAvatar__Fields {
        EntityAvatar_MirrorMode__Enum MirrorMethod;

        struct MoonAnimator* Animator;
        struct Transform* Mirror;
        float ModelLookDirection;
        bool Asymetrical;
    };

    struct EntityAvatar {
        struct EntityAvatar__Class* klass;
        MonitorData* monitor;
        struct EntityAvatar__Fields fields;
    };

    struct EntitySpatialData {
        struct EntitySpatialData__Class* klass;
        MonitorData* monitor;
    };

    enum class OrbSpawner_EnergyPlantOverrideType__Enum : int32_t {
        None = 0x00000000,
        Small = 0x00000001,
        Medium = 0x00000002,
        Large = 0x00000003,
    };

    struct OrbSpawner_EnergyPlantOverrideType__Enum__Boxed {
        struct OrbSpawner_EnergyPlantOverrideType__Enum__Class* klass;
        MonitorData* monitor;
        OrbSpawner_EnergyPlantOverrideType__Enum value;
    };

    enum class DropPickup_State__Enum : int32_t {
        Hover = 0x00000000,
        Falling = 0x00000001,
        Flashing = 0x00000002,
    };

    struct DropPickup_State__Enum__Boxed {
        struct DropPickup_State__Enum__Class* klass;
        MonitorData* monitor;
        DropPickup_State__Enum value;
    };

    struct OrbSpawner__Fields {
        struct MonoBehaviour__Fields _;
        struct DropLootSettings* LootSettings;
        bool LootOnHard;
        bool AbundantOrbMode;
        struct Vector2 SpawnOffset;
        bool OverrideGravity;
        struct Vector3 GravityOverride;
        struct Transform* m_transform;
        int32_t IdealOrbCount;
        int32_t NumberOfExpOrbs;
        int32_t NumberOfHealthOrbs;
        int32_t NumberOfEnergyOrbs;
        bool ShouldSpawnExpOrbs;
        bool ShouldSpawnLoot;
        bool HealthPlantOverride;
        OrbSpawner_EnergyPlantOverrideType__Enum EnergyPlantOverride;

        int32_t m_numberOfSmallOrbs;
        int32_t m_numberOfMediumOrbs;
        int32_t m_numberOfLargeOrbs;
        struct AnimationCurve* HorizontalSpeed;
        struct AnimationCurve* VerticalSpeed;
        DropPickup_State__Enum DropPickupState;

        struct EventTriggerAnimator* SpawnOrbsAnimatorTrigger;
    };

    struct OrbSpawner {
        struct OrbSpawner__Class* klass;
        MonitorData* monitor;
        struct OrbSpawner__Fields fields;
    };

    struct __declspec(align(8)) DropLootSettings__Fields {
        float BaseHeartChance;
        float BaseEnergyShardChance;
        int32_t HeartLootCount;
        int32_t EnergyLootCount;
        bool m_isEnemyLoot;
    };

    struct DropLootSettings {
        struct DropLootSettings__Class* klass;
        MonitorData* monitor;
        struct DropLootSettings__Fields fields;
    };

    struct DamageDealer__Array {
        struct DamageDealer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageDealer* vector[32];
    };

    struct Locomotion__Array {
        struct Locomotion__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Locomotion* vector[32];
    };

    struct __declspec(align(8)) EntityContext__Fields {
        struct Entity* _Entity_k__BackingField;
    };

    struct EntityContext {
        struct EntityContext__Class* klass;
        MonitorData* monitor;
        struct EntityContext__Fields fields;
    };

    struct INavigationAgent {
        struct INavigationAgent__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_IEntityOwned___Fields {
        struct IEntityOwned__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IEntityOwned_ {
        struct List_1_Moon_IEntityOwned___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IEntityOwned___Fields fields;
    };

    struct IEntityOwned {
        struct IEntityOwned__Class* klass;
        MonitorData* monitor;
    };

    struct IEntityOwned__Array {
        struct IEntityOwned__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IEntityOwned* vector[32];
    };

    struct IEnumerator_1_Moon_IEntityOwned_ {
        struct IEnumerator_1_Moon_IEntityOwned___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_BehaviourSystem_ITask___Fields {
        struct ITask__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_BehaviourSystem_ITask_ {
        struct List_1_Moon_BehaviourSystem_ITask___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_BehaviourSystem_ITask___Fields fields;
    };

    struct ITask__Array {
        struct ITask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ITask* vector[32];
    };

    struct IEnumerator_1_Moon_BehaviourSystem_ITask_ {
        struct IEnumerator_1_Moon_BehaviourSystem_ITask___Class* klass;
        MonitorData* monitor;
    };

    struct IEntityEventListener {
        struct IEntityEventListener__Class* klass;
        MonitorData* monitor;
    };

    struct IEntityEventListener__Array {
        struct IEntityEventListener__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IEntityEventListener* vector[32];
    };

    struct EntityReactions__Fields {
        struct MonoBehaviour__Fields _;
        struct EntityReactionBehaviour* DeathBehaviour;
        struct HitReactionBehaviour* HitReaction;
        struct EntityReactionBehaviour* SimpleHitReaction;
        struct List_1_EntityReactionBehaviour_* m_reactionBehavioursList;
        struct MoonSet_1_EntityReactionBehaviour_* m_reactionBehaviours;
        struct List_1_EntityReactions_ReactionInterruptionSuspensionEntry_* m_reactionWithSuspendedInterruption;
        bool m_wasCacheSerialized;
    };

    struct EntityReactions {
        struct EntityReactions__Class* klass;
        MonitorData* monitor;
        struct EntityReactions__Fields fields;
    };

    struct EntityReactionBehaviour__Fields {
        struct EntityTask__Fields _;
        struct List_1_Moon_MoonReference_1__7* NonInterruptables;
        struct List_1_Moon_BehaviourSystem_ITask_* m_resolvedNonInterruptables;
        struct EntityEvent* m_reactionEvent;
    };

    struct EntityReactionBehaviour {
        struct EntityReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_MoonReference_1__7__Fields {
        struct MoonReference_1_Moon_BehaviourSystem_ITask___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_MoonReference_1__7 {
        struct List_1_Moon_MoonReference_1__7__Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_MoonReference_1__7__Fields fields;
    };

    struct MoonReference_1_Moon_BehaviourSystem_ITask___Array {
        struct MoonReference_1_Moon_BehaviourSystem_ITask___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonReference_1_Moon_BehaviourSystem_ITask_* vector[32];
    };

    struct IEnumerator_1_Moon_MoonReference_1__7 {
        struct IEnumerator_1_Moon_MoonReference_1__7__Class* klass;
        MonitorData* monitor;
    };

    struct HorizontalKickbackTimelineBehaviour__Fields {
        struct EntityReactionBehaviour__Fields _;
        struct MoonTimeline* KickBackAnimation;
        struct MoonTimeline* KickBackAirAnimation;
        struct MoonTimeline* KickForwardAnimation;
        struct MoonTimeline* KickForwardAirAnimation;
        struct RootMotionProcessorData* RootMotion;
        int32_t AnimationPriority;
        bool RestartAnimationForEachExecution;
        bool m_isInReaction;
        struct Locomotion* m_locomotion;
        struct ILocomotionTurningHandler* m_turningHandler;
        struct IActiveAnimation* m_animationState;
        bool m_playingAirAnimation;
        struct DynamicDataResolver* m_dataResolver;
        struct MoonTimeline* m_currentTimeline;
    };

    struct HorizontalKickbackTimelineBehaviour {
        struct HorizontalKickbackTimelineBehaviour__Class* klass;
        MonitorData* monitor;
        struct HorizontalKickbackTimelineBehaviour__Fields fields;
    };

    struct EntityReactionBehaviour_ReasonWhyReactionWontInterrupt {
        struct ITask* NonInterruptableTask;
        struct Damage* NonInterruptableDamage;
    };

    struct EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Boxed {
        struct EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour_ReasonWhyReactionWontInterrupt fields;
    };

    enum class HitReactionBehaviour_DeathHitReactionMode__Enum : int32_t {
        DefaultReactionHandling = 0x00000000,
        UseCustomHitReaction = 0x00000001,
        Disable = 0x00000002,
    };

    struct HitReactionBehaviour_DeathHitReactionMode__Enum__Boxed {
        struct HitReactionBehaviour_DeathHitReactionMode__Enum__Class* klass;
        MonitorData* monitor;
        HitReactionBehaviour_DeathHitReactionMode__Enum value;
    };

    struct HitReactionBehaviour__Fields {
        struct MonoBehaviour__Fields _;
        struct EntityHitReaction* DefaultHitReaction;
        struct EntityHitReaction* DefaultBlockReaction;
        struct HitReactionBehaviour_HitReactionEntry__Array* CustomHitReactions;
        HitReactionBehaviour_DeathHitReactionMode__Enum DeathReactionMode;

        struct EntityHitReaction* DeathCustomReaction;
        struct StaggerDamageTracker* StaggerTracker;
        struct StaggerSettings* DefaultStaggerSettings;
        struct HitReactionBehaviour_StaggetEntry__Array* CustomStaggerEntries;
        bool DebugStagger;
        struct StaggerSettings* m_currentStaggerSettings;
    };

    struct HitReactionBehaviour {
        struct HitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct HitReactionBehaviour__Fields fields;
    };

    struct __declspec(align(8)) EntityHitReaction__Fields {
        struct AnimationCurve* AnimWeightVsDamageAmountCurve;
        struct MoonAnimation__Array* AnimationPostprocesses;
        struct MoonAnimation* FrontDamagePostprocess;
        struct MoonAnimation* BackDamagePostprocess;
        struct MoonAnimation* FrontDamageAirPostprocess;
        struct MoonAnimation* BackDamageAirPostprocess;
        struct MoonTimeline* UpwardDamagePostprocess;
        float UpwardPostprocessKickbackMultiplier;
        bool StunlockProtectedFront;
        bool StunlockProtectedBack;
        struct AnimationPostprocess__Array* LegacyAnimationPostprocesses;
        struct AnimationPostprocess* LegacyFrontDamagePostprocess;
        struct AnimationPostprocess* LegacyBackDamagePostprocess;
        struct AnimationPostprocess* LegacyFrontDamageAirPostprocess;
        struct AnimationPostprocess* LegacyBackDamageAirPostprocess;
        struct EntityHitReaction_KickbackMultiplierSet* Mulipliers;
        float KickbackMin;
        float KickbackMax;
        struct AnimationCurve* KickbackCurve;
        struct EntityHitReaction_KickbackRuleOverride__Array* KickbackRuleOverrides;
        struct EntityHitReaction_KickbackRuleOverrideForBehaviour__Array* KickbackRuleOverridesForBehaviour;
        struct GameObject* DefaultEffectPrefab;
        struct PrefabProvider* EffectPrefabProvider;
        struct SoundProvider* SoundProvider;
        struct EntityReactionBehaviour* HorizontalKickbackBehaviour;
        struct EntityReactionBehaviour* VerticalKickbackBehaviour;
        struct EntityTask__Array* NonInterruptableBehavioursHorizontal;
        struct EntityTask__Array* NonInterruptableBehavioursVertical;
        struct MoonTimeline__Array* NonInterruptableTimelinesHorizontal;
        struct MoonTimeline__Array* NonInterruptableTimelinesVertical;
        struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesHorizontalFront;
        struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesHorizontalBack;
        struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesVerticalFront;
        struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesVerticalBack;
        float ignoreKickbackBehavioursTimeout;
        bool DirectionRelativeToTransform;
        struct Vector2 direction;
    };

    struct EntityHitReaction {
        struct EntityHitReaction__Class* klass;
        MonitorData* monitor;
        struct EntityHitReaction__Fields fields;
    };

    struct __declspec(align(8)) EntityHitReaction_KickbackMultiplierSet__Fields {
        float KickbackMultiplier;
        float KickbackMultiplierUp;
        float KickbackMultiplierDown;
        float KickbackMultiplierConditional;
        struct Condition_1* MultiplierCondition;
        struct Condition_1* MultiplierUpCondition;
        struct Condition_1* MultiplierDownCondition;
        float FinalHitMultiplier;
        float AirKickbackMultiplier;
        float AirKickbackMultiplierUp;
        float AirKickbackMultiplierDown;
        float AirFinalHitMultiplier;
    };

    struct EntityHitReaction_KickbackMultiplierSet {
        struct EntityHitReaction_KickbackMultiplierSet__Class* klass;
        MonitorData* monitor;
        struct EntityHitReaction_KickbackMultiplierSet__Fields fields;
    };

    struct __declspec(align(8)) EntityHitReaction_KickbackRuleOverride__Fields {
        DamageResultType__Enum DamageResultType;

        DamageType__Enum DamageType;

        struct EntityHitReaction_KickbackMultiplierSet* Mulipliers;
    };

    struct EntityHitReaction_KickbackRuleOverride {
        struct EntityHitReaction_KickbackRuleOverride__Class* klass;
        MonitorData* monitor;
        struct EntityHitReaction_KickbackRuleOverride__Fields fields;
    };

    struct EntityHitReaction_KickbackRuleOverride__Array {
        struct EntityHitReaction_KickbackRuleOverride__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityHitReaction_KickbackRuleOverride* vector[32];
    };

    enum class EntityBehaviourStatus__Enum : int32_t {
        Resting = 0x00000000,
        Running = 0x00000001,
        Success = 0x00000002,
        Failure = 0x00000003,
        Interrupted = 0x00000004,
    };

    struct EntityBehaviourStatus__Enum__Boxed {
        struct EntityBehaviourStatus__Enum__Class* klass;
        MonitorData* monitor;
        EntityBehaviourStatus__Enum value;
    };

    struct __declspec(align(8)) EntityHitReaction_KickbackRuleOverrideForBehaviour__Fields {
        struct EntityBehaviour* Behaviour;
        EntityBehaviourStatus__Enum Status;

        bool SkipKickback;
        struct EntityHitReaction_KickbackMultiplierSet* Multipliers;
        bool ForMeleeDamageOnly;
        bool ApplyForceAlongTheGround;
    };

    struct EntityHitReaction_KickbackRuleOverrideForBehaviour {
        struct EntityHitReaction_KickbackRuleOverrideForBehaviour__Class* klass;
        MonitorData* monitor;
        struct EntityHitReaction_KickbackRuleOverrideForBehaviour__Fields fields;
    };

    struct EntityBehaviour__Fields {
        struct MonoBehaviour__Fields _;
        struct Object* _ExecutingObject_k__BackingField;
        struct Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_* _OnEndBehaviourEvent_k__BackingField;
        float _BehaviourTime_k__BackingField;
        struct List_1_Moon_IEntityBehaviour_* m_children;
        struct Entity* m_entity;
        EntityBehaviourStatus__Enum m_status;

        struct EntityBehaviourDebugData* m_debugData;
    };

    struct EntityBehaviour {
        struct EntityBehaviour__Class* klass;
        MonitorData* monitor;
        struct EntityBehaviour__Fields fields;
    };

    struct Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_ {
        struct Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus___Class* klass;
        MonitorData* monitor;
        struct Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus___Fields fields;
    };

    struct IEntityBehaviour {
        struct IEntityBehaviour__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_IEntityBehaviour___Fields {
        struct IEntityBehaviour__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IEntityBehaviour_ {
        struct List_1_Moon_IEntityBehaviour___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IEntityBehaviour___Fields fields;
    };

    struct IEntityBehaviour__Array {
        struct IEntityBehaviour__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IEntityBehaviour* vector[32];
    };

    struct IEnumerator_1_Moon_IEntityBehaviour_ {
        struct IEnumerator_1_Moon_IEntityBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) EntityBehaviourDebugData__Fields {
        struct String* m_briefInfo;
        struct String* m_detailedInfo;
    };

    struct EntityBehaviourDebugData {
        struct EntityBehaviourDebugData__Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourDebugData__Fields fields;
    };

    struct EntityHitReaction_KickbackRuleOverrideForBehaviour__Array {
        struct EntityHitReaction_KickbackRuleOverrideForBehaviour__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityHitReaction_KickbackRuleOverrideForBehaviour* vector[32];
    };

    struct __declspec(align(8)) HitReactionBehaviour_HitReactionEntry__Fields {
        DamageResultType__Enum DamageResultType;

        DamageType__Enum DamageType;

        struct EntityHitReaction* HitReaction;
    };

    struct HitReactionBehaviour_HitReactionEntry {
        struct HitReactionBehaviour_HitReactionEntry__Class* klass;
        MonitorData* monitor;
        struct HitReactionBehaviour_HitReactionEntry__Fields fields;
    };

    struct HitReactionBehaviour_HitReactionEntry__Array {
        struct HitReactionBehaviour_HitReactionEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HitReactionBehaviour_HitReactionEntry* vector[32];
    };

    struct __declspec(align(8)) StaggerDamageTracker__Fields {
        float StaggerThreshold;
        float TimeToReset;
        float StaggerImmunityDuration;
        float InitialAccumulatorFillPercentage;
        bool m_firstStagger;
        float m_damageAccumulator;
        float m_resetTimer;
        float m_imunityTimer;
    };

    struct StaggerDamageTracker {
        struct StaggerDamageTracker__Class* klass;
        MonitorData* monitor;
        struct StaggerDamageTracker__Fields fields;
    };

    struct __declspec(align(8)) StaggerSettings__Fields {
        struct EntityReactionBehaviour* Stagger;
        struct EntityReactionBehaviour* StaggerBack;
        float DamageMultiplierForStagger;
        struct GameObject* DefaultEffectPrefab;
        struct PrefabProvider* EffectPrefabProvider;
        bool DontPlayDuringKickups;
    };

    struct StaggerSettings {
        struct StaggerSettings__Class* klass;
        MonitorData* monitor;
        struct StaggerSettings__Fields fields;
    };

    struct __declspec(align(8)) HitReactionBehaviour_StaggetEntry__Fields {
        DamageType__Enum DamageType;

        struct StaggerSettings* Settings;
    };

    struct HitReactionBehaviour_StaggetEntry {
        struct HitReactionBehaviour_StaggetEntry__Class* klass;
        MonitorData* monitor;
        struct HitReactionBehaviour_StaggetEntry__Fields fields;
    };

    struct HitReactionBehaviour_StaggetEntry__Array {
        struct HitReactionBehaviour_StaggetEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HitReactionBehaviour_StaggetEntry* vector[32];
    };

    struct EntityDamageEvent__Fields {
        struct EntityEvent__Fields _;
        struct DamageResult DamageResult;
    };

    struct EntityDamageEvent {
        struct EntityDamageEvent__Class* klass;
        MonitorData* monitor;
        struct EntityDamageEvent__Fields fields;
    };

    struct __declspec(align(8)) List_1_EntityReactionBehaviour___Fields {
        struct EntityReactionBehaviour__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EntityReactionBehaviour_ {
        struct List_1_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
        struct List_1_EntityReactionBehaviour___Fields fields;
    };

    struct EntityReactionBehaviour__Array {
        struct EntityReactionBehaviour__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityReactionBehaviour* vector[32];
    };

    struct IEnumerator_1_EntityReactionBehaviour_ {
        struct IEnumerator_1_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) MoonSet_1_EntityReactionBehaviour___Fields {
        struct List_1_EntityReactionBehaviour_* m_values;
        struct Dictionary_2_System_Type_EntityReactionBehaviour_* m_typeToValue;
    };

    struct MoonSet_1_EntityReactionBehaviour_ {
        struct MoonSet_1_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
        struct MoonSet_1_EntityReactionBehaviour___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_EntityReactionBehaviour___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_EntityReactionBehaviour_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_EntityReactionBehaviour_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_EntityReactionBehaviour_ {
        struct Dictionary_2_System_Type_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_EntityReactionBehaviour___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct EntityReactionBehaviour* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_EntityReactionBehaviour_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_EntityReactionBehaviour___Fields {
        struct Dictionary_2_System_Type_EntityReactionBehaviour_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_EntityReactionBehaviour_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_EntityReactionBehaviour___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_EntityReactionBehaviour___Fields {
        struct Dictionary_2_System_Type_EntityReactionBehaviour_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_EntityReactionBehaviour_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_EntityReactionBehaviour___Fields fields;
    };

    struct ICollection_1_EntityReactionBehaviour_ {
        struct ICollection_1_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_EntityReactionBehaviour_ {
        struct Type* key;
        struct EntityReactionBehaviour* value;
    };

    struct KeyValuePair_2_System_Type_EntityReactionBehaviour___Boxed {
        struct KeyValuePair_2_System_Type_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_EntityReactionBehaviour_ fields;
    };

    struct KeyValuePair_2_System_Type_EntityReactionBehaviour___Array {
        struct KeyValuePair_2_System_Type_EntityReactionBehaviour___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_EntityReactionBehaviour_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_EntityReactionBehaviour_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_EntityReactionBehaviour_ {
        struct IEnumerable_1_EntityReactionBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_EntityReactions_ReactionInterruptionSuspensionEntry___Fields {
        struct EntityReactions_ReactionInterruptionSuspensionEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EntityReactions_ReactionInterruptionSuspensionEntry_ {
        struct List_1_EntityReactions_ReactionInterruptionSuspensionEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_EntityReactions_ReactionInterruptionSuspensionEntry___Fields fields;
    };

    struct EntityReactions_ReactionInterruptionSuspensionEntry {
        float Duration;
        struct EntityReactionBehaviour* BehaviourToOverride;
    };

    struct EntityReactions_ReactionInterruptionSuspensionEntry__Boxed {
        struct EntityReactions_ReactionInterruptionSuspensionEntry__Class* klass;
        MonitorData* monitor;
        struct EntityReactions_ReactionInterruptionSuspensionEntry fields;
    };

    struct EntityReactions_ReactionInterruptionSuspensionEntry__Array {
        struct EntityReactions_ReactionInterruptionSuspensionEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityReactions_ReactionInterruptionSuspensionEntry vector[32];
    };

    struct IEnumerator_1_EntityReactions_ReactionInterruptionSuspensionEntry_ {
        struct IEnumerator_1_EntityReactions_ReactionInterruptionSuspensionEntry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_Moon_IEntityOwned_System_String___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_Moon_IEntityOwned_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IEntityOwned_System_String_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IEntityOwned_System_String_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_Moon_IEntityOwned_System_String_ {
        struct Dictionary_2_Moon_IEntityOwned_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_Moon_IEntityOwned_System_String___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String_ {
        int32_t hashCode;
        int32_t next;
        struct IEntityOwned* key;
        struct String* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String___Array {
        struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_Moon_IEntityOwned_System_String_ vector[32];
    };

    struct IEqualityComparer_1_Moon_IEntityOwned_ {
        struct IEqualityComparer_1_Moon_IEntityOwned___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_IEntityOwned_System_String___Fields {
        struct Dictionary_2_Moon_IEntityOwned_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IEntityOwned_System_String_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IEntityOwned_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IEntityOwned_System_String___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_IEntityOwned_System_String___Fields {
        struct Dictionary_2_Moon_IEntityOwned_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IEntityOwned_System_String_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IEntityOwned_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IEntityOwned_System_String___Fields fields;
    };

    struct ICollection_1_Moon_IEntityOwned_ {
        struct ICollection_1_Moon_IEntityOwned___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_Moon_IEntityOwned_System_String_ {
        struct IEntityOwned* key;
        struct String* value;
    };

    struct KeyValuePair_2_Moon_IEntityOwned_System_String___Boxed {
        struct KeyValuePair_2_Moon_IEntityOwned_System_String___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_Moon_IEntityOwned_System_String_ fields;
    };

    struct KeyValuePair_2_Moon_IEntityOwned_System_String___Array {
        struct KeyValuePair_2_Moon_IEntityOwned_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_Moon_IEntityOwned_System_String_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_IEntityOwned_System_String_ {
        struct IEnumerator_1_KeyValuePair_2_Moon_IEntityOwned_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_IEntityOwned_ {
        struct IEnumerable_1_Moon_IEntityOwned___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) EntityCinematicData__Fields {
        struct ActiveAnimationHandle m_activeAnimation;
        struct MoonAnimation* _Animation_k__BackingField;
        bool _Scheduled_k__BackingField;
    };

    struct EntityCinematicData {
        struct EntityCinematicData__Class* klass;
        MonitorData* monitor;
        struct EntityCinematicData__Fields fields;
    };

    struct __declspec(align(8)) EntityCinematicTask__Fields {
        BehaviourStatus__Enum m_status;

        struct Entity* m_entity;
        struct Locomotion* m_locomotion;
        AnimatorCullingMode__Enum m_originalAnimatorCullingMode;

        struct RootMotionProcessorData* m_rootMotion;
        struct EntityCinematicData* _Data_k__BackingField;
        struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnTaskStatus_k__BackingField;
    };

    struct EntityCinematicTask {
        struct EntityCinematicTask__Class* klass;
        MonitorData* monitor;
        struct EntityCinematicTask__Fields fields;
    };

    struct IEntityLocomotion {
        struct IEntityLocomotion__Class* klass;
        MonitorData* monitor;
    };

    struct BaseNPC__Fields {
        struct SaveSerialize__Fields _;
        struct MessageBox* m_messageBox;
        struct Action_1_MessageBox_HideAction_* m_onMessageHide;
        struct MessageBox* m_npcScreen;
        bool m_ignoreOriListenAnimation;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct BaseNPC {
        struct BaseNPC__Class* klass;
        MonitorData* monitor;
        struct BaseNPC__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_BehaviourSystem_EntityBehaviourNode___Fields {
        struct EntityBehaviourNode__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_ {
        struct List_1_Moon_BehaviourSystem_EntityBehaviourNode___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_BehaviourSystem_EntityBehaviourNode___Fields fields;
    };

    struct EntityBehaviourNode__Array {
        struct EntityBehaviourNode__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityBehaviourNode* vector[32];
    };

    struct IEnumerator_1_Moon_BehaviourSystem_EntityBehaviourNode_ {
        struct IEnumerator_1_Moon_BehaviourSystem_EntityBehaviourNode___Class* klass;
        MonitorData* monitor;
    };

    struct EntityTask__Array {
        struct EntityTask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityTask* vector[32];
    };

    struct IEnumerator_1_Moon_BehaviourSystem_EntityTask_ {
        struct IEnumerator_1_Moon_BehaviourSystem_EntityTask___Class* klass;
        MonitorData* monitor;
    };

} // namespace app
