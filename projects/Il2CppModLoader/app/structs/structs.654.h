namespace app {
    struct Mine {
        struct Mine__Class* klass;
        MonitorData* monitor;
        struct Mine__Fields fields;
    };

    struct __declspec(align(8)) List_1_Mine___Fields {
        struct Mine__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Mine_ {
        struct List_1_Mine___Class* klass;
        MonitorData* monitor;
        struct List_1_Mine___Fields fields;
    };

    struct Mine__Array {
        struct Mine__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Mine* vector[32];
    };

    struct IEnumerator_1_Mine_ {
        struct IEnumerator_1_Mine___Class* klass;
        MonitorData* monitor;
    };

    struct Mine__Array__VTable {
    };

    struct Mine__Array__StaticFields {
    };

    struct Mine__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Mine__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Mine__Array__VTable vtable;
    };

    struct IEnumerator_1_Mine___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Mine___StaticFields {
    };

    struct IEnumerator_1_Mine___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Mine___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Mine___VTable vtable;
    };

    struct List_1_Mine___VTable {
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

    struct List_1_Mine___StaticFields {
        struct Mine__Array* _emptyArray;
    };

    struct List_1_Mine___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Mine___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Mine___VTable vtable;
    };

    struct Mine__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
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
        VirtualInvokeData get_BashPriority;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnBashHighlight;
        VirtualInvokeData OnBashDehighlight;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
    };

    struct Mine__StaticFields {
        struct List_1_Mine_* All;
    };

    struct Mine__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Mine__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Mine__VTable vtable;
    };

    struct ShieldCollision__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct ShieldCollision {
        struct ShieldCollision__Class* klass;
        MonitorData* monitor;
        struct ShieldCollision__Fields fields;
    };

    struct ShieldCollision__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShieldCollision__StaticFields {
    };

    struct ShieldCollision__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShieldCollision__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShieldCollision__VTable vtable;
    };

    enum class SpiritCrescent_State__Enum : int32_t {
        Init = 0x00000000,
        Flying = 0x00000001,
        Returning = 0x00000002,
        Homing = 0x00000003,
    };

    struct SpiritCrescent_State__Enum__Boxed {
        struct SpiritCrescent_State__Enum__Class* klass;
        MonitorData* monitor;
        SpiritCrescent_State__Enum value;
    };

    struct SpiritCrescent__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* ImpactEffect;
        float TimeBeforeReturning;
        float TurnAroundDuration;
        float MaxReturnOffset;
        float CatchDistance;
        float HomingMinSpeed;
        SpiritCrescent_State__Enum m_State;

        struct SeinSpiritCrescentSpell* m_spell;
        struct Vector3 m_throwPosition;
        struct Vector3 m_velocity;
        bool m_upgraded;
        float m_stateTime;
        bool m_explode;
        float m_homingSpeed;
        float m_homingDuration;
        struct Vector3 m_homingStart;
        struct Rigidbody* m_rigidbody;
        struct DamageDealer* m_damageDealer;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        float Radius;
    };

    struct SpiritCrescent {
        struct SpiritCrescent__Class* klass;
        MonitorData* monitor;
        struct SpiritCrescent__Fields fields;
    };

    struct SpiritCrescent_State__Enum__VTable {
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

    struct SpiritCrescent_State__Enum__StaticFields {
    };

    struct SpiritCrescent_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritCrescent_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritCrescent_State__Enum__VTable vtable;
    };

    struct SpiritCrescent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct SpiritCrescent__StaticFields {
    };

    struct SpiritCrescent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritCrescent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritCrescent__VTable vtable;
    };

    struct SpiritSentry__Fields {
        struct MonoBehaviour__Fields _;
        struct AnimationCurve* DistanceToSpeedCurve;
        struct ScaleAnimator* TwinkleAnimator;
        struct LegacyTransparencyAnimator* TwinkleAnimator2;
        struct SoundProvider* TwinkleSound;
        struct Vector3 TargetOffset;
        float AttackDistance;
        float ShotCooldownMin;
        float ShotCooldownMax;
        float Damage;
        struct GameObject* Projectile;
        struct GameObject* DespawnEffect;
        struct SoundProvider* DisableSound;
        bool TowerMode;
        float _Duration_k__BackingField;
        float _ExpirationTwinkleDuration_k__BackingField;
        struct Transform* m_transform;
        float m_time;
        float m_cooldown;
        bool m_isTwinkling;
        struct SoundPlayer* m_twinkleSoundPlayer;
        float m_hoverTime;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct SpiritSentry {
        struct SpiritSentry__Class* klass;
        MonitorData* monitor;
        struct SpiritSentry__Fields fields;
    };

    struct __declspec(align(8)) List_1_SpiritSentry___Fields {
        struct SpiritSentry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SpiritSentry_ {
        struct List_1_SpiritSentry___Class* klass;
        MonitorData* monitor;
        struct List_1_SpiritSentry___Fields fields;
    };

    struct SpiritSentry__Array {
        struct SpiritSentry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SpiritSentry* vector[32];
    };

    struct IEnumerator_1_SpiritSentry_ {
        struct IEnumerator_1_SpiritSentry___Class* klass;
        MonitorData* monitor;
    };

    struct ScaleAnimator__Fields {
        struct BaseAnimator__Fields _;
        struct AnimationCurve* AnimationCurve;
        struct Transform* Target;
        struct Vector3 m_originalScale;
        struct Renderer* m_renderer;
        struct Transform* m_transform;
    };

    struct ScaleAnimator {
        struct ScaleAnimator__Class* klass;
        MonitorData* monitor;
        struct ScaleAnimator__Fields fields;
    };

    struct SpiritSentry__Array__VTable {
    };

    struct SpiritSentry__Array__StaticFields {
    };

    struct SpiritSentry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritSentry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritSentry__Array__VTable vtable;
    };

    struct IEnumerator_1_SpiritSentry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SpiritSentry___StaticFields {
    };

    struct IEnumerator_1_SpiritSentry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SpiritSentry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SpiritSentry___VTable vtable;
    };

    struct List_1_SpiritSentry___VTable {
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

    struct List_1_SpiritSentry___StaticFields {
        struct SpiritSentry__Array* _emptyArray;
    };

    struct List_1_SpiritSentry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_SpiritSentry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_SpiritSentry___VTable vtable;
    };

    struct ScaleAnimator__VTable {
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
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct ScaleAnimator__StaticFields {
    };

    struct ScaleAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScaleAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScaleAnimator__VTable vtable;
    };

    struct SpiritSentry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct SpiritSentry__StaticFields {
        struct List_1_SpiritSentry_* All;
    };

    struct SpiritSentry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritSentry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritSentry__VTable vtable;
    };

    enum class SpiritTurret_FireState__Enum : int32_t {
        Burst = 0x00000000,
        Resting = 0x00000001,
    };

    struct SpiritTurret_FireState__Enum__Boxed {
        struct SpiritTurret_FireState__Enum__Class* klass;
        MonitorData* monitor;
        SpiritTurret_FireState__Enum value;
    };

    struct SpiritTurret_AttackableRayHandle {
        int32_t id;
        float time;
    };

    struct SpiritTurret_AttackableRayHandle__Boxed {
        struct SpiritTurret_AttackableRayHandle__Class* klass;
        MonitorData* monitor;
        struct SpiritTurret_AttackableRayHandle fields;
    };

    struct SpiritTurret__Fields {
        struct MonoBehaviour__Fields _;
        struct SeinTurretSpell_BalancingData* BalancingData;
        struct AnimationCurve* DistanceToSpeedCurve;
        struct ScaleAnimator* TwinkleAnimator;
        struct LegacyTransparencyAnimator* TwinkleAnimator2;
        struct Vector3 TargetOffset;
        float AttackDistance;
        struct GameObject* Projectile;
        struct GameObject* ExplosionPrefab;
        bool TowerMode;
        float _Lifetime_k__BackingField;
        float _ExpirationTwinkleDuration_k__BackingField;
        struct Event_1* ExistLoopSoundEvent;
        struct Event_1* DisableSoundEvent;
        struct Event_1* TwinkleSoundEvent;
        struct Transform* m_transform;
        float m_time;
        float m_cooldown;
        bool m_isTwinkling;
        float m_hoverTime;
        struct Vector3 m_targetPosition;
        float m_gravityAngle;
        struct WwiseEventSystem_SoundHandle m_twinkleSoundHandler;
        struct WwiseEventSystem_SoundHandle m_existLoopSoundHandler;
        struct SoundHost* m_soundHost;
        SpiritTurret_FireState__Enum m_fireState;

        int32_t m_numberOfBurstShots;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct Guid _AttackableConsumerID_k__BackingField;
        struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* m_rays;
        struct RaycastCommand cmd;
        struct SpiritTurret_AttackableRayHandle handle;
    };

    struct SpiritTurret {
        struct SpiritTurret__Class* klass;
        MonitorData* monitor;
        struct SpiritTurret__Fields fields;
    };

    struct __declspec(align(8)) List_1_SpiritTurret___Fields {
        struct SpiritTurret__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SpiritTurret_ {
        struct List_1_SpiritTurret___Class* klass;
        MonitorData* monitor;
        struct List_1_SpiritTurret___Fields fields;
    };

    struct SpiritTurret__Array {
        struct SpiritTurret__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SpiritTurret* vector[32];
    };

    struct IEnumerator_1_SpiritTurret_ {
        struct IEnumerator_1_SpiritTurret___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_IAttackable_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_ {
        struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle_ {
        int32_t hashCode;
        int32_t next;
        struct IAttackable* key;
        struct SpiritTurret_AttackableRayHandle value;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array {
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___Fields {
        struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___Fields {
        struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___Fields fields;
    };

    struct SpiritTurret_AttackableRayHandle__Array {
        struct SpiritTurret_AttackableRayHandle__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SpiritTurret_AttackableRayHandle vector[32];
    };

    struct IEnumerator_1_SpiritTurret_AttackableRayHandle_ {
        struct IEnumerator_1_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_SpiritTurret_AttackableRayHandle_ {
        struct ICollection_1_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle_ {
        struct IAttackable* key;
        struct SpiritTurret_AttackableRayHandle value;
    };

    struct KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle___Boxed {
        struct KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle_ fields;
    };

    struct KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle___Array {
        struct KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle_ {
        struct IEnumerator_1_KeyValuePair_2_IAttackable_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_SpiritTurret_AttackableRayHandle_ {
        struct IEnumerable_1_SpiritTurret_AttackableRayHandle___Class* klass;
        MonitorData* monitor;
    };

    struct SpiritTurret__Array__VTable {
    };

    struct SpiritTurret__Array__StaticFields {
    };

    struct SpiritTurret__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritTurret__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritTurret__Array__VTable vtable;
    };

    struct IEnumerator_1_SpiritTurret___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SpiritTurret___StaticFields {
    };

    struct IEnumerator_1_SpiritTurret___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SpiritTurret___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SpiritTurret___VTable vtable;
    };

    struct List_1_SpiritTurret___VTable {
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

    struct List_1_SpiritTurret___StaticFields {
        struct SpiritTurret__Array* _emptyArray;
    };

    struct List_1_SpiritTurret___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_SpiritTurret___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_SpiritTurret___VTable vtable;
    };

    struct SpiritTurret_FireState__Enum__VTable {
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

    struct SpiritTurret_FireState__Enum__StaticFields {
    };

    struct SpiritTurret_FireState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritTurret_FireState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritTurret_FireState__Enum__VTable vtable;
    };

    struct SpiritTurret_AttackableRayHandle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiritTurret_AttackableRayHandle__StaticFields {
    };

    struct SpiritTurret_AttackableRayHandle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritTurret_AttackableRayHandle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritTurret_AttackableRayHandle__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_SpiritTurret_AttackableRayHandle___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_SpiritTurret_AttackableRayHandle___VTable vtable;
    };

    struct SpiritTurret_AttackableRayHandle__Array__VTable {
    };

    struct SpiritTurret_AttackableRayHandle__Array__StaticFields {
    };

    struct SpiritTurret_AttackableRayHandle__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritTurret_AttackableRayHandle__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritTurret_AttackableRayHandle__Array__VTable vtable;
    };

    struct IEnumerator_1_SpiritTurret_AttackableRayHandle___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SpiritTurret_AttackableRayHandle___StaticFields {
    };

    struct IEnumerator_1_SpiritTurret_AttackableRayHandle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SpiritTurret_AttackableRayHandle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SpiritTurret_AttackableRayHandle___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_SpiritTurret_AttackableRayHandle___VTable vtable;
    };

} // namespace app
