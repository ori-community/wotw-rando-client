namespace app {
    struct Dictionary_2_IAttackable_LockOnTarget_ {
        struct Dictionary_2_IAttackable_LockOnTarget___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_IAttackable_LockOnTarget___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget_ {
        int32_t hashCode;
        int32_t next;
        struct IAttackable* key;
        struct LockOnTarget* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget_ fields;
    };

    struct LockOnTarget__Fields {
        struct MonoBehaviour__Fields _;
        struct IAttackable* Target;
        int32_t NumberOfLocks;
    };

    struct LockOnTarget {
        struct LockOnTarget__Class* klass;
        MonitorData* monitor;
        struct LockOnTarget__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Array {
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget___Fields {
        struct Dictionary_2_IAttackable_LockOnTarget_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget___Fields {
        struct Dictionary_2_IAttackable_LockOnTarget_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget___Fields fields;
    };

    struct LockOnTarget__Array {
        struct LockOnTarget__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LockOnTarget* vector[32];
    };

    struct IEnumerator_1_LockOnTarget_ {
        struct IEnumerator_1_LockOnTarget___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_IAttackable_ {
        struct ICollection_1_IAttackable___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_LockOnTarget_ {
        struct ICollection_1_LockOnTarget___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_IAttackable_LockOnTarget_ {
        struct IAttackable* key;
        struct LockOnTarget* value;
    };

    struct KeyValuePair_2_IAttackable_LockOnTarget___Boxed {
        struct KeyValuePair_2_IAttackable_LockOnTarget___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_IAttackable_LockOnTarget_ fields;
    };

    struct KeyValuePair_2_IAttackable_LockOnTarget___Array {
        struct KeyValuePair_2_IAttackable_LockOnTarget___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_IAttackable_LockOnTarget_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_IAttackable_LockOnTarget_ {
        struct IEnumerator_1_KeyValuePair_2_IAttackable_LockOnTarget___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_LockOnTarget_ {
        struct IEnumerable_1_LockOnTarget___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Stack_1_LockOnTarget___Fields {
        struct LockOnTarget__Array* _array;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Stack_1_LockOnTarget_ {
        struct Stack_1_LockOnTarget___Class* klass;
        MonitorData* monitor;
        struct Stack_1_LockOnTarget___Fields fields;
    };

    struct SeinTimeWarpSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinTimeWarpSpell {
        struct SeinTimeWarpSpell__Class* klass;
        MonitorData* monitor;
        struct SeinTimeWarpSpell__Fields fields;
    };

    struct SeinShieldSpell__Fields {
        struct CharacterState__Fields _;
        struct FloatAnimationParameter* AimAngle;
        struct MoonAnimation* Cast;
        struct MoonAnimation* Loop;
        struct GameObject* Shield;
        bool m_isCasting;
        float m_shieldAngle;
    };

    struct SeinShieldSpell {
        struct SeinShieldSpell__Class* klass;
        MonitorData* monitor;
        struct SeinShieldSpell__Fields fields;
    };

    struct SeinEnergyWallSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinEnergyWallSpell {
        struct SeinEnergyWallSpell__Class* klass;
        MonitorData* monitor;
        struct SeinEnergyWallSpell__Fields fields;
    };

    struct SeinTrapSpell__Fields {
        struct CharacterState__Fields _;
        struct GameObject* Trap;
        float EnergyCost;
        struct SoundProvider* NotEnoughEnergySoundProvider;
        struct Trap* m_currentTrap;
    };

    struct SeinTrapSpell {
        struct SeinTrapSpell__Class* klass;
        MonitorData* monitor;
        struct SeinTrapSpell__Fields fields;
    };

    struct Trap__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Explosion;
        float Timeout;
        float Range;
        float DamageDuration;
        DamageType__Enum DamageType;

        float DamagePerSecond;
        struct AnimationCurve* TrapTimeoutBlinkingCurve;
        bool m_triggered;
        float m_currentTime;
        float m_trapTime;
        struct Renderer* m_renderer;
        struct IAttackable* m_trappedTarget;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct Trap {
        struct Trap__Class* klass;
        MonitorData* monitor;
        struct Trap__Fields fields;
    };

    struct SeinWarpSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinWarpSpell {
        struct SeinWarpSpell__Class* klass;
        MonitorData* monitor;
        struct SeinWarpSpell__Fields fields;
    };

    struct SeinLightSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinLightSpell {
        struct SeinLightSpell__Class* klass;
        MonitorData* monitor;
        struct SeinLightSpell__Fields fields;
    };

    struct SeinMindControlSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinMindControlSpell {
        struct SeinMindControlSpell__Class* klass;
        MonitorData* monitor;
        struct SeinMindControlSpell__Fields fields;
    };

    struct SeinMirageSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinMirageSpell {
        struct SeinMirageSpell__Class* klass;
        MonitorData* monitor;
        struct SeinMirageSpell__Fields fields;
    };

    struct SeinLightSpearSpell__Fields {
        struct CharacterState__Fields _;
        struct GameObject* Spear;
        float SpawnDistance;
        float CoolDown;
        float EnergyCost;
        struct GameObject* ShootEffect;
        struct SoundProvider* ShootSound;
        float m_coolDownTimeRemaing;
    };

    struct SeinLightSpearSpell {
        struct SeinLightSpearSpell__Class* klass;
        MonitorData* monitor;
        struct SeinLightSpearSpell__Fields fields;
    };

    enum class SeinSpiritShardsSpell_State__Enum : int32_t {
        Normal = 0x00000000,
        Charging = 0x00000001,
        Charged = 0x00000002,
    };

    struct SeinSpiritShardsSpell_State__Enum__Boxed {
        struct SeinSpiritShardsSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinSpiritShardsSpell_State__Enum value;
    };

    struct SeinSpiritShardsSpell__Fields {
        struct CharacterState__Fields _;
        struct GameObject* Shard;
        struct SoundProvider* ShotSound;
        struct SoundProvider* NotEnoughEnergySound;
        struct SoundProvider* ChargingSound;
        struct SoundPlayer* m_lastChargingSound;
        float EnergyCost;
        float ShardLifeTime;
        float ShardDamage;
        float ShardScale;
        float ChargedEnergyCost;
        float ChargedShardLifeTime;
        float ChargedShardDamage;
        float ChargedShardScale;
        float Speed;
        int32_t Count;
        float ChargeAfter;
        float ChargeDuration;
        struct AnimationMontage* GroundMontage;
        struct AnimationMontage* AirMontage;
        SeinSpiritShardsSpell_State__Enum m_state;

        float m_time;
        bool m_allowShot;
        bool m_chargedShot;
        struct AnimationMontage* m_currentMontage;
        struct GameObject* ChargingEffectToSpawn;
        struct GameObject* ChargedEffectToSpawn;
        struct GameObject* m_chargingEffect;
        struct GameObject* m_chargedEffect;
    };

    struct SeinSpiritShardsSpell {
        struct SeinSpiritShardsSpell__Class* klass;
        MonitorData* monitor;
        struct SeinSpiritShardsSpell__Fields fields;
    };

    struct AnimationMontage__Fields {
        struct BaseAnimator__Fields _;
        struct MoonAnimation* Animation;
        struct GameObject* PreviewRig;
        struct String* ParentedMontageSocketPath;
        struct GameObject* EventHandlerObject;
        int32_t AnimationPriority;
        struct List_1_Moon_AnimationMontage_Entry_* m_entries;
        struct MoonAnimator* m_currentTarget;
        struct ActiveAnimationHandle m_currentAnimationState;
        struct Action* m_currentStopPlayingAction;
        bool m_animationPlaying;
        float m_currentTime;
        struct List_1_SoundPlayer_* m_activeSoundPlayers;
        struct Dictionary_2_System_String_Moon_MoonAnimator_* m_subMontagesByName;
        struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_* m_animatedValueListeners;
        struct Dictionary_2_System_String_IMontageEventProvider_* m_eventProviders;
        struct List_1_Moon_AnimationMontage_TimelineEventSubscription_* m_eventSubscriptions;
        bool m_isParented;
        struct Transform* m_initialTargetParent;
        struct Vector3 m_initialTargetScale;
        struct Vector3 m_initialTargetPosition;
        struct Quaternion m_initialTargetRotation;
    };

    struct AnimationMontage {
        struct AnimationMontage__Class* klass;
        MonitorData* monitor;
        struct AnimationMontage__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_AnimationMontage_Entry___Fields {
        struct AnimationMontage_Entry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_AnimationMontage_Entry_ {
        struct List_1_Moon_AnimationMontage_Entry___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_AnimationMontage_Entry___Fields fields;
    };

    struct __declspec(align(8)) AnimationMontage_Entry__Fields {
        bool IsPlaying;
        float m_startTime;
        struct BaseAnimator* m_animator;
    };

    struct AnimationMontage_Entry {
        struct AnimationMontage_Entry__Class* klass;
        MonitorData* monitor;
        struct AnimationMontage_Entry__Fields fields;
    };

    struct AnimationMontage_Entry__Array {
        struct AnimationMontage_Entry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AnimationMontage_Entry* vector[32];
    };

    struct IEnumerator_1_Moon_AnimationMontage_Entry_ {
        struct IEnumerator_1_Moon_AnimationMontage_Entry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_SoundPlayer___Fields {
        struct SoundPlayer__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SoundPlayer_ {
        struct List_1_SoundPlayer___Class* klass;
        MonitorData* monitor;
        struct List_1_SoundPlayer___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_Moon_MoonAnimator___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_MoonAnimator_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_MoonAnimator_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_Moon_MoonAnimator_ {
        struct Dictionary_2_System_String_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_Moon_MoonAnimator___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct MoonAnimator* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_MoonAnimator_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_MoonAnimator___Fields {
        struct Dictionary_2_System_String_Moon_MoonAnimator_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_MoonAnimator_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_MoonAnimator___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_MoonAnimator___Fields {
        struct Dictionary_2_System_String_Moon_MoonAnimator_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_MoonAnimator_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_MoonAnimator___Fields fields;
    };

    struct ICollection_1_Moon_MoonAnimator_ {
        struct ICollection_1_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_Moon_MoonAnimator_ {
        struct String* key;
        struct MoonAnimator* value;
    };

    struct KeyValuePair_2_System_String_Moon_MoonAnimator___Boxed {
        struct KeyValuePair_2_System_String_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_Moon_MoonAnimator_ fields;
    };

    struct KeyValuePair_2_System_String_Moon_MoonAnimator___Array {
        struct KeyValuePair_2_System_String_Moon_MoonAnimator___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_Moon_MoonAnimator_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_Moon_MoonAnimator_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_MoonAnimator_ {
        struct IEnumerable_1_Moon_MoonAnimator___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_Moon_IAnimatedValueListener_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_Moon_IAnimatedValueListener_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_ {
        struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct List_1_Moon_IAnimatedValueListener_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener_ fields;
    };

    struct __declspec(align(8)) List_1_Moon_IAnimatedValueListener___Fields {
        struct IAnimatedValueListener__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IAnimatedValueListener_ {
        struct List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IAnimatedValueListener___Fields fields;
    };

    struct IAnimatedValueListener {
        struct IAnimatedValueListener__Class* klass;
        MonitorData* monitor;
    };

    struct IAnimatedValueListener__Array {
        struct IAnimatedValueListener__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IAnimatedValueListener* vector[32];
    };

    struct IEnumerator_1_Moon_IAnimatedValueListener_ {
        struct IEnumerator_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_Moon_IAnimatedValueListener_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_Moon_IAnimatedValueListener___Fields {
        struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_Moon_IAnimatedValueListener_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_Moon_IAnimatedValueListener___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_Moon_IAnimatedValueListener___Fields {
        struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_Moon_IAnimatedValueListener_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_Moon_IAnimatedValueListener___Fields fields;
    };

    struct List_1_Moon_IAnimatedValueListener___Array {
        struct List_1_Moon_IAnimatedValueListener___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_Moon_IAnimatedValueListener_* vector[32];
    };

    struct IEnumerator_1_List_1_Moon_IAnimatedValueListener_ {
        struct IEnumerator_1_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_List_1_Moon_IAnimatedValueListener_ {
        struct ICollection_1_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener_ {
        struct String* key;
        struct List_1_Moon_IAnimatedValueListener_* value;
    };

    struct KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener___Boxed {
        struct KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener_ fields;
    };

    struct KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener___Array {
        struct KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_List_1_Moon_IAnimatedValueListener_ {
        struct IEnumerable_1_List_1_Moon_IAnimatedValueListener___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_IMontageEventProvider___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IMontageEventProvider_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IMontageEventProvider_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_IMontageEventProvider_ {
        struct Dictionary_2_System_String_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_IMontageEventProvider___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct IMontageEventProvider* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider_ fields;
    };

    struct IMontageEventProvider {
        struct IMontageEventProvider__Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_IMontageEventProvider_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_IMontageEventProvider___Fields {
        struct Dictionary_2_System_String_IMontageEventProvider_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IMontageEventProvider_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IMontageEventProvider___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_IMontageEventProvider___Fields {
        struct Dictionary_2_System_String_IMontageEventProvider_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IMontageEventProvider_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IMontageEventProvider___Fields fields;
    };

    struct IMontageEventProvider__Array {
        struct IMontageEventProvider__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IMontageEventProvider* vector[32];
    };

    struct IEnumerator_1_IMontageEventProvider_ {
        struct IEnumerator_1_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_IMontageEventProvider_ {
        struct ICollection_1_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_IMontageEventProvider_ {
        struct String* key;
        struct IMontageEventProvider* value;
    };

    struct KeyValuePair_2_System_String_IMontageEventProvider___Boxed {
        struct KeyValuePair_2_System_String_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_IMontageEventProvider_ fields;
    };

    struct KeyValuePair_2_System_String_IMontageEventProvider___Array {
        struct KeyValuePair_2_System_String_IMontageEventProvider___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_IMontageEventProvider_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_IMontageEventProvider_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_IMontageEventProvider_ {
        struct IEnumerable_1_IMontageEventProvider___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_AnimationMontage_TimelineEventSubscription___Fields {
        struct AnimationMontage_TimelineEventSubscription__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_AnimationMontage_TimelineEventSubscription_ {
        struct List_1_Moon_AnimationMontage_TimelineEventSubscription___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_AnimationMontage_TimelineEventSubscription___Fields fields;
    };

    struct __declspec(align(8)) AnimationMontage_TimelineEventSubscription__Fields {
        struct IMontageEventProvider* Provider;
        struct String* EventId;
        struct AnimationMontage* Montage;
    };

    struct AnimationMontage_TimelineEventSubscription {
        struct AnimationMontage_TimelineEventSubscription__Class* klass;
        MonitorData* monitor;
        struct AnimationMontage_TimelineEventSubscription__Fields fields;
    };

    struct AnimationMontage_TimelineEventSubscription__Array {
        struct AnimationMontage_TimelineEventSubscription__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AnimationMontage_TimelineEventSubscription* vector[32];
    };

    struct IEnumerator_1_Moon_AnimationMontage_TimelineEventSubscription_ {
        struct IEnumerator_1_Moon_AnimationMontage_TimelineEventSubscription___Class* klass;
        MonitorData* monitor;
    };

    struct AnimationMontageEventContext {
        struct Vector3 Position;
    };

    struct AnimationMontageEventContext__Boxed {
        struct AnimationMontageEventContext__Class* klass;
        MonitorData* monitor;
        struct AnimationMontageEventContext fields;
    };

    struct SeinSpiritSentrySpell__Fields {
        struct CharacterState__Fields _;
        struct SeinSpiritSentrySpell_BalancingData* Balancing;
        struct GameObject* SpiritSentryPrefab;
        struct SoundProvider* NotEnoughEnergySound;
        struct SoundProvider* EnableSound;
        float ExpirationTwinkleDuration;
        float MultiSpawnDelay;
        int32_t SentryLimit;
    };

    struct SeinSpiritSentrySpell {
        struct SeinSpiritSentrySpell__Class* klass;
        MonitorData* monitor;
        struct SeinSpiritSentrySpell__Fields fields;
    };

    struct SeinSpiritSentrySpell_BalancingData__Fields {
        struct OriAttackBalancingData__Fields _;
        float EnergyCost;
        float Duration;
        float Damage;
        float AttackDistance;
        float ShotCooldownMin;
        float ShotCooldownMax;
    };

    struct SeinSpiritSentrySpell_BalancingData {
        struct SeinSpiritSentrySpell_BalancingData__Class* klass;
        MonitorData* monitor;
        struct SeinSpiritSentrySpell_BalancingData__Fields fields;
    };

    enum class SeinTurretSpell_State__Enum : int32_t {
        Idle = 0x00000000,
        StartReleasing = 0x00000001,
        Releasing = 0x00000002,
    };

    struct SeinTurretSpell_State__Enum__Boxed {
        struct SeinTurretSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinTurretSpell_State__Enum value;
    };

    struct SeinTurretSpell__Fields {
        struct CharacterState__Fields _;
        struct SeinTurretSpell_BalancingData* BalancingData;
        struct GameObject* SpiritTurretPrefab;
        struct Event_1* NotEnoughEnergyEvent;
        struct Event_1* EnableSoundEvent;
        float MultiSpawnDelay;
        float HorizontalAirMaxSpeed;
        float HorizontalAirDeceleration;
        float WaterMaxSpeed;
        float WaterDeceleration;
        struct MoonTimeline* GroundTimeline;
        struct EventTriggerAnimator* GroundReleaseTrigger;
        struct MoonTimeline* AirTimeline;
        struct EventTriggerAnimator* AirReleaseTrigger;
        struct MoonTimeline* WaterTimeline;
        struct EventTriggerAnimator* WaterReleaseTrigger;
        bool m_hasReleasedTurret;
        SeinTurretSpell_State__Enum m_state;
    };

    struct SeinTurretSpell {
        struct SeinTurretSpell__Class* klass;
        MonitorData* monitor;
        struct SeinTurretSpell__Fields fields;
    };

    struct SeinTurretSpell_BalancingData__Fields {
        struct OriAttackBalancingData__Fields _;
        struct SerializedByteUberState* SpeedUpgradeLevel;
        float EnergyCost;
        float TurretLifetime;
        float TurretExplosionWarningDuration;
        int32_t MaxTurretsAtOnce;
        int32_t ShotsInBurst;
        float m_timeBetweenBurstShots;
        float m_delayBeforeNextBurst;
        float DamagePerShot;
        float ExplosionDamage;
        float UpgradedSpeedMultiplier;
    };

    struct SeinTurretSpell_BalancingData {
        struct SeinTurretSpell_BalancingData__Class* klass;
        MonitorData* monitor;
        struct SeinTurretSpell_BalancingData__Fields fields;
    };

    enum class SeinPowerslideSpell_State__Enum : int32_t {
        Normal = 0x00000000,
        Powersliding = 0x00000001,
    };

    struct SeinPowerslideSpell_State__Enum__Boxed {
        struct SeinPowerslideSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinPowerslideSpell_State__Enum value;
    };

    struct SeinPowerslideSpell__Fields {
        struct CharacterState__Fields _;
        struct AnimationCurve* SpeedOverTime;
        float PowerslideDuration;
        float FireTrailDuration;
        float EnergyCost;
        float Cooldown;
        float KickUpStrength;
        float KickUpDamage;
        float DamagePerSecond;
        float FireDamageRadius;
        struct SoundProvider* PowerslideSound;
        struct SoundProvider* NotEnoughEnergySound;
        struct GameObject* FireSoundLoop;
        struct MoonAnimation* Powerslide;
        struct GameObject* FireEffect;
        float m_fireDamageRadiusSqr;
        float m_distanceBetweenFirePoints;
        SeinPowerslideSpell_State__Enum m_state;

        float m_timeInCurrentState;
        bool m_stopAnimation;
        struct HashSet_1_IAttackable_* m_attackablesIgnore;
        float m_distanceToNextFirePoint;
        struct Vector3 m_lastPostion;
        struct Vector3 m_powerslideStartPosition;
        struct List_1_SeinPowerslideSpell_FireTrailPoint_* m_fireTrail;
        struct LayerMask m_solidsLayer;
        float m_timeOfLastDealDamage;
        float m_dealDamageInterval;
        int32_t m_firePointCountToSoundEffect;
        struct DamageOwner* m_damageOwner;
    };

    struct SeinPowerslideSpell {
        struct SeinPowerslideSpell__Class* klass;
        MonitorData* monitor;
        struct SeinPowerslideSpell__Fields fields;
    };

    struct __declspec(align(8)) List_1_SeinPowerslideSpell_FireTrailPoint___Fields {
        struct SeinPowerslideSpell_FireTrailPoint__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SeinPowerslideSpell_FireTrailPoint_ {
        struct List_1_SeinPowerslideSpell_FireTrailPoint___Class* klass;
        MonitorData* monitor;
        struct List_1_SeinPowerslideSpell_FireTrailPoint___Fields fields;
    };

    struct __declspec(align(8)) SeinPowerslideSpell_FireTrailPoint__Fields {
        struct GameObject* Effect;
        struct GameObject* SoundEffect;
        float TimeLeft;
        struct Vector3 Position;
    };

    struct SeinPowerslideSpell_FireTrailPoint {
        struct SeinPowerslideSpell_FireTrailPoint__Class* klass;
        MonitorData* monitor;
        struct SeinPowerslideSpell_FireTrailPoint__Fields fields;
    };

    struct SeinPowerslideSpell_FireTrailPoint__Array {
        struct SeinPowerslideSpell_FireTrailPoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SeinPowerslideSpell_FireTrailPoint* vector[32];
    };

    struct IEnumerator_1_SeinPowerslideSpell_FireTrailPoint_ {
        struct IEnumerator_1_SeinPowerslideSpell_FireTrailPoint___Class* klass;
        MonitorData* monitor;
    };

    struct SeinEarthShatterSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinEarthShatterSpell {
        struct SeinEarthShatterSpell__Class* klass;
        MonitorData* monitor;
        struct SeinEarthShatterSpell__Fields fields;
    };

    struct SeinRoundupLeashSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinRoundupLeashSpell {
        struct SeinRoundupLeashSpell__Class* klass;
        MonitorData* monitor;
        struct SeinRoundupLeashSpell__Fields fields;
    };

    struct SeinBurrowSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinBurrowSpell {
        struct SeinBurrowSpell__Class* klass;
        MonitorData* monitor;
        struct SeinBurrowSpell__Fields fields;
    };

    struct SeinPowerOfFriendshipSpell__Fields {
        struct CharacterState__Fields _;
    };

} // namespace app
