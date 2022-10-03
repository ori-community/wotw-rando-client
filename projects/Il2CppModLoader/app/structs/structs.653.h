namespace app {
    struct SeinSwimmingPuppet__StaticFields {
    };

    struct SeinSwimmingPuppet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinSwimmingPuppet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinSwimmingPuppet__VTable vtable;
    };

    struct SeinDamageReceiverPuppet__Fields {
        struct CharacterStatePuppet__Fields _;
        struct DamageBasedSoundProvider* SeinDeathSound;
        struct DamageBasedSoundProvider* SeinHurtSound;
        struct DamageBasedSoundProvider* SeinBadlyHurtSound;
        struct MoonAnimation* Hurt;
        struct MoonAnimation* HurtLightGround;
        struct MoonAnimation* HurtMidGround;
        struct MoonAnimation* HurtHeavyGround;
        struct MoonAnimation* HurtLightAir;
        struct MoonAnimation* HurtMidAir;
        struct MoonAnimation* HurtHeavyAir;
        struct MoonAnimation* Drown;
        struct Event_1* DrownInTarSoundEvent;
        struct Event_1* DrownInTarTandemSoundEvent;
        struct MoonAnimation* DrownInTar;
        struct MoonAnimation* DrownInTarTandem;
        struct MoonAnimation* DrownInTarKuTandem;
        struct MoonAnimation* HurtLightGroundBack;
        struct MoonAnimation* HurtMidGroundBack;
        struct MoonAnimation* HurtHeavyGroundBack;
        struct MoonAnimation* HurtLightAirBack;
        struct MoonAnimation* HurtMidAirBack;
        struct MoonAnimation* HurtHeavyAirBack;
    };

    struct SeinDamageReceiverPuppet {
        struct SeinDamageReceiverPuppet__Class* klass;
        MonitorData* monitor;
        struct SeinDamageReceiverPuppet__Fields fields;
    };

    struct DamageBasedSoundProvider__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_DamageTypeSoundPair_* SoundPairs;
        struct SoundProvider* DefaultSoundProvider;
        struct Switch_1* FallBackSwitch;
        struct SoundProvider* WWiseSoundProvider;
    };

    struct DamageBasedSoundProvider {
        struct DamageBasedSoundProvider__Class* klass;
        MonitorData* monitor;
        struct DamageBasedSoundProvider__Fields fields;
    };

    struct __declspec(align(8)) List_1_DamageTypeSoundPair___Fields {
        struct DamageTypeSoundPair__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DamageTypeSoundPair_ {
        struct List_1_DamageTypeSoundPair___Class* klass;
        MonitorData* monitor;
        struct List_1_DamageTypeSoundPair___Fields fields;
    };

    enum class SoundDamageType__Enum : int32_t {
        Water = 0x00000000,
        Lava = 0x00000001,
        Ice = 0x00000002,
        Spikes = 0x00000003,
        Laser = 0x00000004,
        Projectile = 0x00000005,
        Acid = 0x00000006,
        SlugSpike = 0x00000007,
        RegularSpiritFlame = 0x00000008,
        RegularSpiritFlameThirdShot = 0x00000009,
        IceSpiritFlame = 0x0000000a,
        ChargeFlame = 0x0000000b,
        Bash = 0x0000000c,
        Grenade = 0x0000000d,
        GrenadeSplatter = 0x0000000e,
        UndergroundSpiritFlame = 0x0000000f,
        Dash = 0x00000010,
        Stomp = 0x00000011,
        StompBlast = 0x00000012,
        NightBerryDied = 0x00000013,
        Drowning = 0x00000014,
        Tar = 0x00000015,
        DeadlyDarkness = 0x00000016,
    };

    struct SoundDamageType__Enum__Boxed {
        struct SoundDamageType__Enum__Class* klass;
        MonitorData* monitor;
        SoundDamageType__Enum value;
    };

    struct __declspec(align(8)) DamageTypeSoundPair__Fields {
        struct Switch_1* Switch;
        SoundDamageType__Enum DamageType;

        struct SoundProvider* IndependantSoundProvider;
    };

    struct DamageTypeSoundPair {
        struct DamageTypeSoundPair__Class* klass;
        MonitorData* monitor;
        struct DamageTypeSoundPair__Fields fields;
    };

    struct DamageTypeSoundPair__Array {
        struct DamageTypeSoundPair__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageTypeSoundPair* vector[32];
    };

    struct IEnumerator_1_DamageTypeSoundPair_ {
        struct IEnumerator_1_DamageTypeSoundPair___Class* klass;
        MonitorData* monitor;
    };

    struct DamageBasedSoundProvider_CallbackFunction__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DamageBasedSoundProvider_CallbackFunction {
        struct DamageBasedSoundProvider_CallbackFunction__Class* klass;
        MonitorData* monitor;
        struct DamageBasedSoundProvider_CallbackFunction__Fields fields;
    };

    struct SoundDamageType__Enum__VTable {
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

    struct SoundDamageType__Enum__StaticFields {
    };

    struct SoundDamageType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundDamageType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundDamageType__Enum__VTable vtable;
    };

    struct DamageTypeSoundPair__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DamageTypeSoundPair__StaticFields {
    };

    struct DamageTypeSoundPair__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageTypeSoundPair__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageTypeSoundPair__VTable vtable;
    };

    struct DamageTypeSoundPair__Array__VTable {
    };

    struct DamageTypeSoundPair__Array__StaticFields {
    };

    struct DamageTypeSoundPair__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageTypeSoundPair__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageTypeSoundPair__Array__VTable vtable;
    };

    struct IEnumerator_1_DamageTypeSoundPair___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DamageTypeSoundPair___StaticFields {
    };

    struct IEnumerator_1_DamageTypeSoundPair___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DamageTypeSoundPair___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DamageTypeSoundPair___VTable vtable;
    };

    struct List_1_DamageTypeSoundPair___VTable {
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

    struct List_1_DamageTypeSoundPair___StaticFields {
        struct DamageTypeSoundPair__Array* _emptyArray;
    };

    struct List_1_DamageTypeSoundPair___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DamageTypeSoundPair___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DamageTypeSoundPair___VTable vtable;
    };

    struct DamageBasedSoundProvider_CallbackFunction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct DamageBasedSoundProvider_CallbackFunction__StaticFields {
    };

    struct DamageBasedSoundProvider_CallbackFunction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageBasedSoundProvider_CallbackFunction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageBasedSoundProvider_CallbackFunction__VTable vtable;
    };

    struct DamageBasedSoundProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetGenericResource;
        VirtualInvokeData GetGenericResourceId;
    };

    struct DamageBasedSoundProvider__StaticFields {
        struct DamageBasedSoundProvider_CallbackFunction* OnGetSoundForDamage;
    };

    struct DamageBasedSoundProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageBasedSoundProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageBasedSoundProvider__VTable vtable;
    };

    struct SeinDamageReceiverPuppet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_Id;
        VirtualInvokeData get_UniqueRecordingId;
        VirtualInvokeData get_IsRecording;
        VirtualInvokeData OnInitializeGhostRecorder;
        VirtualInvokeData OnFinishedRecording;
        VirtualInvokeData OnFinishedPlayback;
        VirtualInvokeData OnPerform;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnPoolDespawned_1;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData OnInitializeLivePuppetMaster;
        VirtualInvokeData OnInitializeGhostPuppetMaster;
    };

    struct SeinDamageReceiverPuppet__StaticFields {
    };

    struct SeinDamageReceiverPuppet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinDamageReceiverPuppet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinDamageReceiverPuppet__VTable vtable;
    };

    struct SpellSwitcher__Fields {
        struct MonoBehaviour__Fields _;
        struct AbilityType__Enum__Array* Spells;
        struct SoundProvider* ChangeSound;
        int32_t m_currentSpellIndex;
        float m_spellDisplayTimeLeft;
        bool m_checkpointRestored;
        bool m_restoreState;
        int32_t m_prevHorizontalDigipad;
    };

    struct SpellSwitcher {
        struct SpellSwitcher__Class* klass;
        MonitorData* monitor;
        struct SpellSwitcher__Fields fields;
    };

    struct SpellSwitcher__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpellSwitcher__StaticFields {
    };

    struct SpellSwitcher__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpellSwitcher__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpellSwitcher__VTable vtable;
    };

    struct ChargeShotCollider__Fields {
        struct MonoBehaviour__Fields _;
        struct Action_1_UnityEngine_Collider_* OnTriggerEnterEvent;
        struct Action_1_UnityEngine_Collider_* OnTriggerStayEvent;
    };

    struct ChargeShotCollider {
        struct ChargeShotCollider__Class* klass;
        MonitorData* monitor;
        struct ChargeShotCollider__Fields fields;
    };

    struct Action_1_UnityEngine_Collider___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_UnityEngine_Collider_ {
        struct Action_1_UnityEngine_Collider___Class* klass;
        MonitorData* monitor;
        struct Action_1_UnityEngine_Collider___Fields fields;
    };

    struct Action_1_UnityEngine_Collider___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Action_1_UnityEngine_Collider___StaticFields {
    };

    struct Action_1_UnityEngine_Collider___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_UnityEngine_Collider___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_UnityEngine_Collider___VTable vtable;
    };

    struct ChargeShotCollider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Reflectable;
    };

    struct ChargeShotCollider__StaticFields {
    };

    struct ChargeShotCollider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChargeShotCollider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChargeShotCollider__VTable vtable;
    };

    struct ChargeShotCollider_c {
        struct ChargeShotCollider_c__Class* klass;
        MonitorData* monitor;
    };

    struct ChargeShotCollider_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChargeShotCollider_c__StaticFields {
        struct ChargeShotCollider_c* __9;
        struct Action_1_UnityEngine_Collider_* __9__10_0;
        struct Action_1_UnityEngine_Collider_* __9__10_1;
    };

    struct ChargeShotCollider_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChargeShotCollider_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChargeShotCollider_c__VTable vtable;
    };

    struct ChargeShotProjectile__Fields {
        struct MonoBehaviour__Fields _;
        float Speed;
        float MaxLifetime;
        struct GameObject* Explosion;
        struct GameObject* ExplosionFire;
        struct GameObject* ExplosionFrost;
        float m_timeAlive;
        float m_damage;
        float m_explosionScale;
        float m_explosionCameraShakeStrength;
        struct Rigidbody* m_rigidbody;
        bool m_released;
        bool m_suspended;
        struct ChargeShotCollider* m_wallCollider;
        struct ChargeShotCollider* m_enemyCollider;
        bool m_reflected;
        SuspendableMask__Enum m_suspensionMask;

        struct GameObject* _IReflectable_LastReflector_k__BackingField;
        int32_t m_piercingCount;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct ChargeShotProjectile {
        struct ChargeShotProjectile__Class* klass;
        MonitorData* monitor;
        struct ChargeShotProjectile__Fields fields;
    };

    struct ChargeShotProjectile__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_Direction;
        VirtualInvokeData set_Direction;
        VirtualInvokeData IReflectable_get_Speed;
        VirtualInvokeData IReflectable_set_Speed;
        VirtualInvokeData IReflectable_get_LastReflector;
        VirtualInvokeData IReflectable_set_LastReflector;
        VirtualInvokeData IReflectable_CanBeReflected;
        VirtualInvokeData IReflectable_OnGrabbed;
        VirtualInvokeData IReflectable_OnReleased;
        VirtualInvokeData IReflectable_OnReflected;
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
        VirtualInvokeData IBashAttackable_get_BashPriority;
        VirtualInvokeData IBashAttackable_OnEnterBash;
        VirtualInvokeData IBashAttackable_OnBashHighlight;
        VirtualInvokeData IBashAttackable_OnBashDehighlight;
        VirtualInvokeData get_Position_1;
        VirtualInvokeData set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData IPortalVisitor_OnGoThroughPortal;
        VirtualInvokeData IPortalVisitor_OnPortalOverlapEnter;
        VirtualInvokeData IPortalVisitor_OnPortalOverlapExit;
    };

    struct ChargeShotProjectile__StaticFields {
    };

    struct ChargeShotProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChargeShotProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChargeShotProjectile__VTable vtable;
    };

    struct FirewhirlBeamSpawner_c {
        struct FirewhirlBeamSpawner_c__Class* klass;
        MonitorData* monitor;
    };

    struct Predicate_1_FirewhirlBeam___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Predicate_1_FirewhirlBeam_ {
        struct Predicate_1_FirewhirlBeam___Class* klass;
        MonitorData* monitor;
        struct Predicate_1_FirewhirlBeam___Fields fields;
    };

    struct Predicate_1_FirewhirlBeam___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Predicate_1_FirewhirlBeam___StaticFields {
    };

    struct Predicate_1_FirewhirlBeam___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Predicate_1_FirewhirlBeam___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Predicate_1_FirewhirlBeam___VTable vtable;
    };

    struct FirewhirlBeamSpawner_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FirewhirlBeamSpawner_c__StaticFields {
        struct FirewhirlBeamSpawner_c* __9;
        struct Predicate_1_FirewhirlBeam_* __9__57_0;
    };

    struct FirewhirlBeamSpawner_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FirewhirlBeamSpawner_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FirewhirlBeamSpawner_c__VTable vtable;
    };

    struct ChangeProtectiveLightRadius__Fields {
        struct MonoBehaviour__Fields _;
        struct ProtectiveLightRadial* ProtectiveLightRadial;
        struct FloatAnimator* FloatAnimator;
    };

    struct ChangeProtectiveLightRadius {
        struct ChangeProtectiveLightRadius__Class* klass;
        MonitorData* monitor;
        struct ChangeProtectiveLightRadius__Fields fields;
    };

    struct ChangeProtectiveLightRadius__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChangeProtectiveLightRadius__StaticFields {
    };

    struct ChangeProtectiveLightRadius__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChangeProtectiveLightRadius__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChangeProtectiveLightRadius__VTable vtable;
    };

    struct DestroyOnEventTriggerAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct EventTriggerAnimator* DestroyTrigger;
    };

    struct DestroyOnEventTriggerAnimator {
        struct DestroyOnEventTriggerAnimator__Class* klass;
        MonitorData* monitor;
        struct DestroyOnEventTriggerAnimator__Fields fields;
    };

    struct DestroyOnEventTriggerAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DestroyOnEventTriggerAnimator__StaticFields {
    };

    struct DestroyOnEventTriggerAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestroyOnEventTriggerAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestroyOnEventTriggerAnimator__VTable vtable;
    };

    struct DestroyOnTimelineStopEvent__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* MoonTimeline;
    };

    struct DestroyOnTimelineStopEvent {
        struct DestroyOnTimelineStopEvent__Class* klass;
        MonitorData* monitor;
        struct DestroyOnTimelineStopEvent__Fields fields;
    };

    struct DestroyOnTimelineStopEvent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DestroyOnTimelineStopEvent__StaticFields {
    };

    struct DestroyOnTimelineStopEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestroyOnTimelineStopEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestroyOnTimelineStopEvent__VTable vtable;
    };

    struct __declspec(align(8)) GoldenSein_UndrainRoutine_d_60__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct GoldenSein* __4__this;
        float _timeSoFar_5__2;
    };

    struct GoldenSein_UndrainRoutine_d_60 {
        struct GoldenSein_UndrainRoutine_d_60__Class* klass;
        MonitorData* monitor;
        struct GoldenSein_UndrainRoutine_d_60__Fields fields;
    };

    struct GoldenSein_UndrainRoutine_d_60__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct GoldenSein_UndrainRoutine_d_60__StaticFields {
    };

    struct GoldenSein_UndrainRoutine_d_60__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GoldenSein_UndrainRoutine_d_60__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GoldenSein_UndrainRoutine_d_60__VTable vtable;
    };

    struct HomingMissile__Fields {
        struct MonoBehaviour__Fields _;
        struct AnimationCurve* Speed;
        struct GameObject* ExplosionGameObject;
        float DamageAmount;
        struct IAttackable* m_target;
        float m_duration;
        struct Vector3 m_startSpeed;
        float m_currentTime;
        bool m_hitTarget;
        struct Rigidbody* m_rigidbody;
        struct Transform* m_transform;
        struct DamageOwner* m_damageOwner;
    };

    struct HomingMissile {
        struct HomingMissile__Class* klass;
        MonitorData* monitor;
        struct HomingMissile__Fields fields;
    };

    struct HomingMissile__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HomingMissile__StaticFields {
    };

    struct HomingMissile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HomingMissile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HomingMissile__VTable vtable;
    };

    struct JumpShotProjectile__Fields {
        struct MonoBehaviour__Fields _;
        float Gravity;
        float InitialSpeed;
        float MaximumLiveTime;
        float DirectHitDamage;
        struct GameObject* Explosion;
        float m_currentTime;
        struct Rigidbody* m_rigidbody;
    };

    struct JumpShotProjectile {
        struct JumpShotProjectile__Class* klass;
        MonitorData* monitor;
        struct JumpShotProjectile__Fields fields;
    };

    struct JumpShotProjectile__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData FixedUpdate;
    };

    struct JumpShotProjectile__StaticFields {
    };

    struct JumpShotProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpShotProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpShotProjectile__VTable vtable;
    };

    struct JumpShotShield__Fields {
        struct MonoBehaviour__Fields _;
        struct Action_1_UnityEngine_Collider_* OnCollision;
    };

    struct JumpShotShield {
        struct JumpShotShield__Class* klass;
        MonitorData* monitor;
        struct JumpShotShield__Fields fields;
    };

    struct JumpShotShield__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JumpShotShield__StaticFields {
    };

    struct JumpShotShield__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpShotShield__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpShotShield__VTable vtable;
    };

    struct JumpShotShield_c {
        struct JumpShotShield_c__Class* klass;
        MonitorData* monitor;
    };

    struct JumpShotShield_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JumpShotShield_c__StaticFields {
        struct JumpShotShield_c* __9;
        struct Action_1_UnityEngine_Collider_* __9__4_0;
    };

    struct JumpShotShield_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpShotShield_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpShotShield_c__VTable vtable;
    };

    struct LightSpear__Fields {
        struct MonoBehaviour__Fields _;
        struct Rigidbody* m_rigidbody;
        int32_t m_hits;
        float Speed;
        struct GameObject* ImpactEffect;
        float Damage;
    };

    struct LightSpear {
        struct LightSpear__Class* klass;
        MonitorData* monitor;
        struct LightSpear__Fields fields;
    };

    struct LightSpear__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LightSpear__StaticFields {
    };

    struct LightSpear__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LightSpear__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LightSpear__VTable vtable;
    };

    struct LockOnTargetProjectile__Fields {
        struct MonoBehaviour__Fields _;
        struct LockOnTarget* LockOnTarget;
        float StartSpeedMultiplier;
        float Speed;
        float Damage;
        float AccelerationDuration;
        float HomingDuration;
        struct GameObject* ImpactEffect;
        struct Vector3 m_startSpeed;
        float m_currentTime;
        bool m_hasDetonated;
        struct Rigidbody* m_rigidbody;
        struct Transform* m_transform;
    };

    struct LockOnTargetProjectile {
        struct LockOnTargetProjectile__Class* klass;
        MonitorData* monitor;
        struct LockOnTargetProjectile__Fields fields;
    };

    struct LockOnTargetProjectile__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LockOnTargetProjectile__StaticFields {
    };

    struct LockOnTargetProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LockOnTargetProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LockOnTargetProjectile__VTable vtable;
    };

    struct Mine__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Explosion;
        float Timeout;
        float BlinkingInitialValue;
        float BlinkDuration;
        struct AnimationCurve* BlinkCurve;
        float Damage;
        struct SoundProvider* DropMineSoundProvider;
        struct SoundProvider* BlinkingSoundProvider;
        float Gravity;
        float MaxFallSpeed;
        bool InAir;
        struct BaseAnimator* BlinkAnimator;
        float m_currentTime;
        struct Rigidbody* m_rigidbody;
        float m_currentBlinkTime;
        float m_currentFallSpeed;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct IDamageReciever__Array* m_damageReceivers;
    };

} // namespace app
