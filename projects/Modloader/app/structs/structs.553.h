namespace app {
    struct __declspec(align(8)) Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_LimitedLifetime_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
        struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
        int32_t hashCode;
        int32_t next;
        struct LimitedLifetime* key;
        struct MoonTimeline* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Array {
        struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline_ vector[32];
    };

    struct IEqualityComparer_1_LimitedLifetime_ {
        struct IEqualityComparer_1_LimitedLifetime___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields {
        struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields {
        struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields fields;
    };

    struct ICollection_1_LimitedLifetime_ {
        struct ICollection_1_LimitedLifetime___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
        struct LimitedLifetime* key;
        struct MoonTimeline* value;
    };

    struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Boxed {
        struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ fields;
    };

    struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Array {
        struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
        struct IEnumerator_1_KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_LimitedLifetime_ {
        struct IEnumerable_1_LimitedLifetime___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_IVitalsDeathListener___Fields {
        struct IVitalsDeathListener__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IVitalsDeathListener_ {
        struct List_1_Moon_IVitalsDeathListener___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IVitalsDeathListener___Fields fields;
    };

    struct IVitalsDeathListener {
        struct IVitalsDeathListener__Class* klass;
        MonitorData* monitor;
    };

    struct IVitalsDeathListener__Array {
        struct IVitalsDeathListener__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IVitalsDeathListener* vector[32];
    };

    struct IEnumerator_1_Moon_IVitalsDeathListener_ {
        struct IEnumerator_1_Moon_IVitalsDeathListener___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Vitals_DamageProcessHelper__Fields {
        struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* m_sortedDamageEntries;
        struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* m_damageBucketPerID;
        struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* m_damageDistanceComparer;
    };

    struct Vitals_DamageProcessHelper {
        struct Vitals_DamageProcessHelper__Class* klass;
        MonitorData* monitor;
        struct Vitals_DamageProcessHelper__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields {
        struct Vitals_DamageProcessHelper_SortedDamageEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
        struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields fields;
    };

    struct Vitals_DamageProcessHelper_SortedDamageEntry {
        struct DamageReceiver* receiver;
        struct DamageReceiver_DamageEntry* damageEntry;
        float dist;
    };

    struct Vitals_DamageProcessHelper_SortedDamageEntry__Boxed {
        struct Vitals_DamageProcessHelper_SortedDamageEntry__Class* klass;
        MonitorData* monitor;
        struct Vitals_DamageProcessHelper_SortedDamageEntry fields;
    };

    struct Vitals_DamageProcessHelper_SortedDamageEntry__Array {
        struct Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Vitals_DamageProcessHelper_SortedDamageEntry vector[32];
    };

    struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
        struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Fields {
        struct Vitals_DamageProcessHelper_DamageBucket__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
        struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Fields fields;
    };

    struct Vitals_DamageProcessHelper_DamageBucket {
        int32_t id;
        int32_t start;
        int32_t count;
    };

    struct Vitals_DamageProcessHelper_DamageBucket__Boxed {
        struct Vitals_DamageProcessHelper_DamageBucket__Class* klass;
        MonitorData* monitor;
        struct Vitals_DamageProcessHelper_DamageBucket fields;
    };

    struct Vitals_DamageProcessHelper_DamageBucket__Array {
        struct Vitals_DamageProcessHelper_DamageBucket__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Vitals_DamageProcessHelper_DamageBucket vector[32];
    };

    struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
        struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Class* klass;
        MonitorData* monitor;
    };

    struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
        struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) TargetSpheres__Fields {
        struct List_1_TargetSpheres_SphereGroup_* SphereGroups;
    };

    struct TargetSpheres {
        struct TargetSpheres__Class* klass;
        MonitorData* monitor;
        struct TargetSpheres__Fields fields;
    };

    struct SpiritFlameProjectileOffsetGenerator__Fields {
        struct TargetSpheres__Fields _;
    };

    struct SpiritFlameProjectileOffsetGenerator {
        struct SpiritFlameProjectileOffsetGenerator__Class* klass;
        MonitorData* monitor;
        struct SpiritFlameProjectileOffsetGenerator__Fields fields;
    };

    struct __declspec(align(8)) List_1_TargetSpheres_SphereGroup___Fields {
        struct TargetSpheres_SphereGroup__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TargetSpheres_SphereGroup_ {
        struct List_1_TargetSpheres_SphereGroup___Class* klass;
        MonitorData* monitor;
        struct List_1_TargetSpheres_SphereGroup___Fields fields;
    };

    struct __declspec(align(8)) TargetSpheres_SphereGroup__Fields {
        struct List_1_TargetSpheres_Sphere_* Spheres;
    };

    struct TargetSpheres_SphereGroup {
        struct TargetSpheres_SphereGroup__Class* klass;
        MonitorData* monitor;
        struct TargetSpheres_SphereGroup__Fields fields;
    };

    struct __declspec(align(8)) List_1_TargetSpheres_Sphere___Fields {
        struct TargetSpheres_Sphere__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TargetSpheres_Sphere_ {
        struct List_1_TargetSpheres_Sphere___Class* klass;
        MonitorData* monitor;
        struct List_1_TargetSpheres_Sphere___Fields fields;
    };

    struct __declspec(align(8)) TargetSpheres_Sphere__Fields {
        struct Vector2 Position;
        float Radius;
    };

    struct TargetSpheres_Sphere {
        struct TargetSpheres_Sphere__Class* klass;
        MonitorData* monitor;
        struct TargetSpheres_Sphere__Fields fields;
    };

    struct TargetSpheres_Sphere__Array {
        struct TargetSpheres_Sphere__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TargetSpheres_Sphere* vector[32];
    };

    struct IEnumerator_1_TargetSpheres_Sphere_ {
        struct IEnumerator_1_TargetSpheres_Sphere___Class* klass;
        MonitorData* monitor;
    };

    struct TargetSpheres_SphereGroup__Array {
        struct TargetSpheres_SphereGroup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TargetSpheres_SphereGroup* vector[32];
    };

    struct IEnumerator_1_TargetSpheres_SphereGroup_ {
        struct IEnumerator_1_TargetSpheres_SphereGroup___Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_ArrowHitData_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_ArrowHitData_Boolean_ {
        struct Func_2_ArrowHitData_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_ArrowHitData_Boolean___Fields fields;
    };

    struct ArrowHitData {
        struct Vector3 CollisionNormal;
        struct Vector3 CollisionPoint;
    };

    struct ArrowHitData__Boxed {
        struct ArrowHitData__Class* klass;
        MonitorData* monitor;
        struct ArrowHitData fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinSpiritFlameAbility___Fields {
        bool HasState;
        struct SeinSpiritFlameAbility* State;
    };

    struct CharacterStateWrapper_1_SeinSpiritFlameAbility_ {
        struct CharacterStateWrapper_1_SeinSpiritFlameAbility___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinSpiritFlameAbility___Fields fields;
    };

    struct SeinSpiritFlameAbility__Fields {
        struct CharacterState__Fields _;
        struct GameObject* TempTarget;
        struct HashSet_1_System_String_* m_lockShootingSpiritFlameLocks;
        bool ShootWhenNoTarget;
    };

    struct SeinSpiritFlameAbility {
        struct SeinSpiritFlameAbility__Class* klass;
        MonitorData* monitor;
        struct SeinSpiritFlameAbility__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinStandardSpiritFlameAbility___Fields {
        bool HasState;
        struct SeinStandardSpiritFlameAbility* State;
    };

    struct CharacterStateWrapper_1_SeinStandardSpiritFlameAbility_ {
        struct CharacterStateWrapper_1_SeinStandardSpiritFlameAbility___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinStandardSpiritFlameAbility___Fields fields;
    };

    struct SeinStandardSpiritFlameAbility__Fields {
        struct CharacterState__Fields _;
        struct ShotCombo* StandardSpiritFlameShotCombo;
        struct SeinStandardSpiritFlameAbility_PoisonSettings* Poison;
        struct SpiritFlame__Array* StandardSpiritFlames;
        float SpiritFlameRange;
        bool CanDamageOverTime;
        float m_timeOfLastShot;
        float m_timeOfBeforeLastShot;
        bool m_isSpamming;
        float m_timeOfLastSpam;
        float SpamShotSpeed;
    };

    struct SeinStandardSpiritFlameAbility {
        struct SeinStandardSpiritFlameAbility__Class* klass;
        MonitorData* monitor;
        struct SeinStandardSpiritFlameAbility__Fields fields;
    };

    struct __declspec(align(8)) ShotCombo__Fields {
        int32_t NumberOfShotsPerCombo;
        float CooldownTimeForIncompleteCombo;
        float CooldownTimeForCompletedCombo;
        float ShotDelay;
        bool UseShotDelay;
        float m_timeSinceLastShot;
        bool m_canShoot;
        int32_t m_currentShot;
    };

    struct ShotCombo {
        struct ShotCombo__Class* klass;
        MonitorData* monitor;
        struct ShotCombo__Fields fields;
    };

    struct __declspec(align(8)) SeinStandardSpiritFlameAbility_PoisonSettings__Fields {
        float DamageAmount;
        int32_t DamageDuration;
        struct GameObject* PoisonEffect;
    };

    struct SeinStandardSpiritFlameAbility_PoisonSettings {
        struct SeinStandardSpiritFlameAbility_PoisonSettings__Class* klass;
        MonitorData* monitor;
        struct SeinStandardSpiritFlameAbility_PoisonSettings__Fields fields;
    };

    struct SpiritFlame__Fields {
        struct ScriptableObject__Fields _;
        struct GameObject* Projectile;
        float Damage;
    };

    struct SpiritFlame {
        struct SpiritFlame__Class* klass;
        MonitorData* monitor;
        struct SpiritFlame__Fields fields;
    };

    struct SpiritFlame__Array {
        struct SpiritFlame__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SpiritFlame* vector[32];
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinCarry___Fields {
        bool HasState;
        struct SeinCarry* State;
    };

    struct CharacterStateWrapper_1_SeinCarry_ {
        struct CharacterStateWrapper_1_SeinCarry___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinCarry___Fields fields;
    };

    struct SeinCarry__Fields {
        struct CharacterState__Fields _;
        struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* AirMultiplier;
        struct SeinCarry_CarryAnimations* Animations;
        float CarryRange;
        struct SurfaceToSoundProviderMap* FootstepsSoundProvider;
        struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* GroundMultiplier;
        struct StateMachine_2* Logic;
        struct Varying2DSoundProvider* OnPickupSoundProvider;
        struct SeinCarry_States* State;
        float WalkSoundsPerSecond;
        bool _LockDroppingObject_k__BackingField;
        bool m_lastButtonOverrideActive;
        struct Transform* m_crossHair;
        struct ICarryable* m_currentCarryable;
        bool m_lockPlayer;
        float m_nextWalkTime;
        float m_pressedXTime;
        bool m_buttonOverrideActive;
    };

    struct SeinCarry {
        struct SeinCarry__Class* klass;
        MonitorData* monitor;
        struct SeinCarry__Fields fields;
    };

    struct __declspec(align(8)) SeinCarry_CarryAnimations__Fields {
        struct MoonAnimation* Drop;
        struct MoonAnimation* FallIdle;
        struct MoonAnimation* FallMoving;
        struct MoonAnimation* JumpIdle;
        struct MoonAnimation* JumpMoving;
        struct MoonAnimation* Pickup;
        struct MoonAnimation* RunIdle;
        struct MoonAnimation* RunMoving;
    };

    struct SeinCarry_CarryAnimations {
        struct SeinCarry_CarryAnimations__Class* klass;
        MonitorData* monitor;
        struct SeinCarry_CarryAnimations__Fields fields;
    };

    struct Varying2DSoundProvider__Fields {
        struct SoundProvider__Fields _;
        struct Byte__Array* valueGuid;
        uint32_t hash;
        bool hashed;
        struct Trigger* TriggerOnPlay;
        struct List_1_UnityEngine_AudioClip_* AudioClips;
        int32_t m_index;
        float ProviderVolume;
        float MinPitch;
        float MaxPitch;
        struct SoundSize* SoundSize;
        bool ShouldBePanned;
        struct LowPassFilterSettings* LowPassFilterSettings;
        bool SyncToTime;
        MixerGroupType__Enum MixerGroup;
    };

    struct Varying2DSoundProvider {
        struct Varying2DSoundProvider__Class* klass;
        MonitorData* monitor;
        struct Varying2DSoundProvider__Fields fields;
    };

    struct __declspec(align(8)) List_1_UnityEngine_AudioClip___Fields {
        struct AudioClip__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_AudioClip_ {
        struct List_1_UnityEngine_AudioClip___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_AudioClip___Fields fields;
    };

    struct AudioClip__Array {
        struct AudioClip__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AudioClip* vector[32];
    };

    struct IEnumerator_1_UnityEngine_AudioClip_ {
        struct IEnumerator_1_UnityEngine_AudioClip___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SeinCarry_States__Fields {
        struct IState_2* Carry;
        struct IState_2* Dropping;
        struct IState_2* Inactive;
        struct IState_2* Pickup;
    };

    struct SeinCarry_States {
        struct SeinCarry_States__Class* klass;
        MonitorData* monitor;
        struct SeinCarry_States__Fields fields;
    };

    struct ICarryable {
        struct ICarryable__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinHold___Fields {
        bool HasState;
        struct SeinHold* State;
    };

    struct CharacterStateWrapper_1_SeinHold_ {
        struct CharacterStateWrapper_1_SeinHold___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinHold___Fields fields;
    };

    struct SeinHold__Fields {
        struct CharacterState__Fields _;
        bool m_preventTorchPose;
        bool m_isUsing;
        struct IHoldable* m_currentHoldable;
        struct IThrowable* m_throwable;
        bool m_spriteMirrorLock;
        bool m_dropButtonActive;
        float m_dropButtonDownTime;
        struct SeinHold_States* State;
        struct StateMachine_2* Logic;
        float PickupRadius;
        float PickupRadiusAir;
        float PickupMovingObjectsCheckRadius;
        float DropButtonMaxTime;
        struct LayerMask PickupCheckLayerMask;
        struct LayerMask EndDropCollisionLayerMask;
        struct MoonAnimation* PickupTorch;
        struct MoonAnimation* PickupTorchFinish;
        struct MoonAnimation* DropTorch;
        struct MessageProvider* PickupHintMessage;
        float AimSpeed;
        float AimSmoothDamp;
        float FlipCharacterThresholdZone;
        float FlipZoneSpeed;
        float ClampBelowYCord;
        struct AnimationCurve* VelocityCurve;
        float MinThrowVelocity;
        float MaxThrowVelocity;
        struct SeinGrenadeTrajectory* Trajectory;
        float ThrowInAirButtonMaxTime;
        float AirThrowVelocityMultiplier;
        float ThrowStartingMagnitude;
        float ThrowStartingAngle;
        struct SeinHold_ThrowAnimationSet__Array* ThrowAnimationSets;
        struct Action_1_IHoldable_* OnPickUp;
        struct Action* OnDrop;
        struct Action* m_finishThrowAction;
        struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_* m_throwAnimationSets;
        bool m_dropImmediate;
        struct Vector2 m_aimerVelocity;
        struct Vector2 m_aimerPos;
        struct Vector2 m_targetAimerPos;
        struct Vector2 m_throwVelocity;
        bool m_playingThrowAnimation;
        bool m_shouldThrow;
        struct MessageBox* m_messageBox;
        float m_hintTimeout;
    };

    struct SeinHold {
        struct SeinHold__Class* klass;
        MonitorData* monitor;
        struct SeinHold__Fields fields;
    };

    struct IHoldable {
        struct IHoldable__Class* klass;
        MonitorData* monitor;
    };

    struct IThrowable {
        struct IThrowable__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SeinHold_States__Fields {
        struct IState_2* Inactive;
        struct IState_2* Pickup;
        struct IState_2* Holding;
        struct IState_2* Dropping;
        struct IState_2* Throwing;
    };

    struct SeinHold_States {
        struct SeinHold_States__Class* klass;
        MonitorData* monitor;
        struct SeinHold_States__Fields fields;
    };

    struct SeinGrenadeTrajectory__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 StartPosition;
        struct Vector2 InitialVelocity;
        float Gravity;
        struct LineRenderer* LineRenderer;
        int32_t LinePoints;
        bool StopLineOnMaxima;
        struct LegacyTransparencyAnimator* FadeIn;
        struct LayerMask LayerMask;
        struct List_1_UnityEngine_Vector3_* m_trajectoryPoints;
    };

    struct SeinGrenadeTrajectory {
        struct SeinGrenadeTrajectory__Class* klass;
        MonitorData* monitor;
        struct SeinGrenadeTrajectory__Fields fields;
    };

    enum class LegacyTransparencyAnimator_AnimateMode__Enum : int32_t {
        Color = 0x00000000,
        Dissolve = 0x00000001,
        Additive = 0x00000002,
    };

    struct LegacyTransparencyAnimator_AnimateMode__Enum__Boxed {
        struct LegacyTransparencyAnimator_AnimateMode__Enum__Class* klass;
        MonitorData* monitor;
        LegacyTransparencyAnimator_AnimateMode__Enum value;
    };

    enum class LegacyActivateAnimator_TargetMode__Enum : int32_t {
        UseDefinedTarget = 0x00000000,
        GameplayOri = 0x00000001,
        GameplayKu = 0x00000002,
        Current = 0x00000003,
    };

    struct LegacyActivateAnimator_TargetMode__Enum__Boxed {
        struct LegacyActivateAnimator_TargetMode__Enum__Class* klass;
        MonitorData* monitor;
        LegacyActivateAnimator_TargetMode__Enum value;
    };

    struct LegacyTransparencyAnimator__Fields {
        struct BaseAnimator__Fields _;
        struct AnimationCurve* AnimationCurve;
        bool AnimateChildren;
        LegacyTransparencyAnimator_AnimateMode__Enum Mode;

        struct GameObject* AnimationTarget;
        LegacyActivateAnimator_TargetMode__Enum TargetType;

        bool IgnoreChildTransparencyAnimators;
        bool IgnoreInactiveChildObjs;
        bool AutoEnableTargets;
        struct List_1_LegacyTransparencyAnimator_RendererData_* m_rendererData;
        struct List_1_LegacyTransparencyAnimator_* m_childTransparencyAnimators;
        struct List_1_CleverMenuItem_* m_cleverMenuItems;
        bool m_forceUseRendererMaterial;
        float m_opacity;
        struct Transform* m_target;
        struct List_1_UnityEngine_GameObject_* m_objectsToEnable;
        struct HashSet_1_UnityEngine_Renderer_* m_renderers;
        float m_lastFinalOpacity;
        struct Single__Array* ParentOpacityByMode;
    };

    struct LegacyTransparencyAnimator {
        struct LegacyTransparencyAnimator__Class* klass;
        MonitorData* monitor;
        struct LegacyTransparencyAnimator__Fields fields;
    };

    enum class UberShaderProperty_Color__Enum : int32_t {
        MainColor = 0x00000000,
        TintColor = 0x00000001,
        AdditiveLayerColor = 0x00000002,
        AdditiveLayerDistortColor = 0x00000003,
        AdditiveLayerExtraColor = 0x00000004,
        AdditiveTintColor = 0x00000005,
        MultiplyLayerColor = 0x00000006,
        MultiplyLayerExtraColor = 0x00000007,
        MultiplyLayerThirdColor = 0x00000008,
        MultiplyLayerDistortColor = 0x00000009,
        BackgroundColor = 0x0000000a,
        OutlineColor = 0x0000000b,
        MaskDissolveColor = 0x0000000c,
        DirectionalLightColor = 0x0000000d,
        DirectionalLightColorExtra = 0x0000000e,
        DecalLayerColor = 0x0000000f,
        EmissivityColor = 0x00000010,
        EmissivityProps = 0x00000011,
        LigthCanvasFrontLayerColor = 0x00000012,
        LigthCanvasMiddleLayerColor = 0x00000013,
        LigthCanvasBackLayerColor = 0x00000014,
        TotalColorProperties = 0x00000015,
    };

    struct UberShaderProperty_Color__Enum__Boxed {
        struct UberShaderProperty_Color__Enum__Class* klass;
        MonitorData* monitor;
        UberShaderProperty_Color__Enum value;
    };

    struct UberShaderProperty_Color__Enum__Array {
        struct UberShaderProperty_Color__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        UberShaderProperty_Color__Enum vector[32];
    };

    struct __declspec(align(8)) List_1_LegacyTransparencyAnimator_RendererData___Fields {
        struct LegacyTransparencyAnimator_RendererData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LegacyTransparencyAnimator_RendererData_ {
        struct List_1_LegacyTransparencyAnimator_RendererData___Class* klass;
        MonitorData* monitor;
        struct List_1_LegacyTransparencyAnimator_RendererData___Fields fields;
    };

    struct LegacyTransparencyAnimator_RendererData {
        float OriginalAlpha;
        struct Renderer* Renderer;
    };

    struct LegacyTransparencyAnimator_RendererData__Boxed {
        struct LegacyTransparencyAnimator_RendererData__Class* klass;
        MonitorData* monitor;
        struct LegacyTransparencyAnimator_RendererData fields;
    };

    struct LegacyTransparencyAnimator_RendererData__Array {
        struct LegacyTransparencyAnimator_RendererData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LegacyTransparencyAnimator_RendererData vector[32];
    };

    struct IEnumerator_1_LegacyTransparencyAnimator_RendererData_ {
        struct IEnumerator_1_LegacyTransparencyAnimator_RendererData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_LegacyTransparencyAnimator___Fields {
        struct LegacyTransparencyAnimator__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LegacyTransparencyAnimator_ {
        struct List_1_LegacyTransparencyAnimator___Class* klass;
        MonitorData* monitor;
        struct List_1_LegacyTransparencyAnimator___Fields fields;
    };

    struct LegacyTransparencyAnimator__Array {
        struct LegacyTransparencyAnimator__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LegacyTransparencyAnimator* vector[32];
    };

    struct IEnumerator_1_LegacyTransparencyAnimator_ {
        struct IEnumerator_1_LegacyTransparencyAnimator___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_CleverMenuItem___Fields {
        struct CleverMenuItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CleverMenuItem_ {
        struct List_1_CleverMenuItem___Class* klass;
        MonitorData* monitor;
        struct List_1_CleverMenuItem___Fields fields;
    };

    struct CleverMenuItem__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* m_transform;
        struct ActionMethod* Highlight;
        struct ActionMethod* Unhighlight;
        struct ActionMethod* Pressed;
        struct Condition_1* Activated;
        struct Condition_1* Visible;
        struct Color m_tweenLastColor;
        struct Color m_tweenNextColor;
        struct Vector2 Size;
        struct Vector2 Center;
        struct Action* HighlightCallback;
        struct Action_1_Boolean_* HighlightBCallback;
        struct Action* UnhighlightCallback;
        struct Action* PressedCallback;
        bool UseNewTimelineForHightlight;
        struct BaseAnimator* HighlightAnimator;
        struct MoonTimelineUiFader* HighlightFader;
        struct LegacyTransparencyAnimator* ActiveAnimator;
        struct GameObject* ColorTarget;
        struct CleverMenuItem_TransitionSettings* Transition;
        bool AnimateColors;
        bool AnimateAlphaOnly;
        float Space;
        struct List_1_CleverMenuItem_ExtraNavigationButton_* ExtraSelectionInput;
        struct List_1_CleverMenuItem_ExtraNavigationButton_* ExtraDeselectionInput;
        bool DefaultSelection;
        bool RunHighlightActionsOnce;
        bool m_isHighlighted;
        float m_tweenTime;
        bool m_tweenPlay;
        bool m_boundsInitialized;
        struct Rect m_bounds;
        float m_parentOpacity;
        float m_opacity;
        struct Renderer__Array* m_renderers;
        struct Vector3 m_cachedPosition;
        bool m_isActive;
        bool m_wasActivated;
        bool m_isDisabled;
        struct CleverMenuItemSelectionManager* m_selectionManager;
    };

    struct CleverMenuItem {
        struct CleverMenuItem__Class* klass;
        MonitorData* monitor;
        struct CleverMenuItem__Fields fields;
    };

    struct __declspec(align(8)) MoonTimelineUiFader__Fields {
        struct MoonTimeline* FadeOutTimeline;
        struct MoonTimeline* FadeInTimeline;
        struct GameObject* FadeGroup;
        struct GameObject* BlackFadeObject;
        bool RefreshTargetsEveryFade;
        struct ForceRefreshAnimatorContext* m_forceRefreshAnimatorContext;
    };

    struct MoonTimelineUiFader {
        struct MoonTimelineUiFader__Class* klass;
        MonitorData* monitor;
        struct MoonTimelineUiFader__Fields fields;
    };

    struct ForceRefreshAnimatorContext {
        struct ForceRefreshAnimatorContext__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CleverMenuItem_TransitionSettings__Fields {
        UberShaderProperty_Color__Enum ColorProperty;

        struct Color NormalColor;
        struct Color HighlightedColor;
        struct Color DisabledColor;
        float TweenDuration;
    };

    struct CleverMenuItem_TransitionSettings {
        struct CleverMenuItem_TransitionSettings__Class* klass;
        MonitorData* monitor;
        struct CleverMenuItem_TransitionSettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_CleverMenuItem_ExtraNavigationButton___Fields {
        struct CleverMenuItem_ExtraNavigationButton__Enum__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CleverMenuItem_ExtraNavigationButton_ {
        struct List_1_CleverMenuItem_ExtraNavigationButton___Class* klass;
        MonitorData* monitor;
        struct List_1_CleverMenuItem_ExtraNavigationButton___Fields fields;
    };

    enum class CleverMenuItem_ExtraNavigationButton__Enum : int32_t {
        Left = 0x00000000,
        Right = 0x00000001,
    };

    struct CleverMenuItem_ExtraNavigationButton__Enum__Boxed {
        struct CleverMenuItem_ExtraNavigationButton__Enum__Class* klass;
        MonitorData* monitor;
        CleverMenuItem_ExtraNavigationButton__Enum value;
    };

    struct CleverMenuItem_ExtraNavigationButton__Enum__Array {
        struct CleverMenuItem_ExtraNavigationButton__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        CleverMenuItem_ExtraNavigationButton__Enum vector[32];
    };

    struct IEnumerator_1_CleverMenuItem_ExtraNavigationButton_ {
        struct IEnumerator_1_CleverMenuItem_ExtraNavigationButton___Class* klass;
        MonitorData* monitor;
    };

    enum class CleverMenuItemSelectionManager_Direction__Enum : int32_t {
        LeftToRight = 0x00000000,
        TopToBottom = 0x00000001,
        NavigationCage = 0x00000002,
        RadialNavigation = 0x00000003,
        FiveColumns = 0x00000004,
        None = 0x00000005,
    };

    struct CleverMenuItemSelectionManager_Direction__Enum__Boxed {
        struct CleverMenuItemSelectionManager_Direction__Enum__Class* klass;
        MonitorData* monitor;
        CleverMenuItemSelectionManager_Direction__Enum value;
    };

    struct CleverMenuItemSelectionManager__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_CleverMenuItemSelectionManager_NavigationData_* Navigation;
        struct CageStructureTool* CopyFromCage;
        struct List_1_CleverMenuItem_* m_menuItems;
        CleverMenuItemSelectionManager_Direction__Enum ItemDirection;

        struct ActionMethod* OptionChangeAction;
        struct Action* OptionChangeCallback;
        struct Action* OptionPressedCallback;
        struct Action* OnBackPressedCallback;
        struct Action* OnXPressedCallback;
        struct Action* OnYPressedCallback;
        struct Action* OnBPressedCallback;
        struct Action* OnVisibilityChangedCallback;
        struct Action* OnRadialItemChanged;
        bool HighlightOnMouseOver;
        bool UnhighlightOnMouseLeave;
        bool DisableAudioTriggering;
        bool UseNewTimeline;
        struct LegacyTransparencyAnimator* FadeAnimator;
        struct MoonTimelineUiFader* Fader;
        bool AlwaysForceInitializeFade;
        bool KeepSelectedItemActiveWhenInactive;
        bool KeepMouseInteractionsWhenInactive;
        bool AlwaysHighlightCurrentMenuItem;
        bool HighlightOnEnable;
        int32_t Index;
        int32_t m_defaultIndex;
        struct CleverMenuItem* BackItem;
        struct ActionMethod* BackAction;
        float ButtonPressDelay;
        float AngleTolerance;
        bool m_isVisible;
        bool m_isActive;
        float m_buttonPressDelay;
        float m_nextPressDelay;
        float m_holdDelayDuration;
        float m_holdRemainingTime;
        float m_lastRadialClick;
        bool m_initialRadialDelay;
        struct Vector2 m_lastMenuAxis;
        int32_t m_menuAxisAngleDeltaDir;
        int32_t m_itemsPerCicle;
        bool OnlyDigipad;
        bool NoDiaganals;
        bool WrapAround;
        bool PlayDefaultNavigateSound;
        bool CheckIfActiveWhenSettingIndexToFirst;
        bool DisableKeyboardScrolling;
        bool UnhighlightOnBackPressed;
        bool m_ignoreRefreshVisible;
        struct List_1_Moon_MoonReference_1__6* FaderObservers;
        struct List_1_ICleverMenuFadeObserver_* m_resolvedFaderObservers;
        bool m_isHighlightVisible;
        bool _IsLocked_k__BackingField;
        bool m_waitForRelease;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct Func_1_UnityEngine_Vector2_* MenuItemAxisOverride;
        struct Int32__Array* kGridDirections;
        struct Int32__Array* kGridDirectionsNoDiaganals;
    };

} // namespace app
