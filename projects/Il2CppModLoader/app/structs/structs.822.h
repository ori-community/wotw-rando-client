namespace app {
    struct LegacySwarmEnemy {
        struct LegacySwarmEnemy__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemy__Fields fields;
    };

    struct __declspec(align(8)) LegacySwarmEnemyAnimations__Fields {
        struct TextureAnimationWithTransitions* Idle;
        struct TextureAnimationWithTransitions* RunLeft;
        struct TextureAnimationWithTransitions* RunRight;
        struct TextureAnimationWithTransitions* Spawned;
        struct TextureAnimationWithTransitions* Jump;
        struct TextureAnimationWithTransitions* Fall;
    };

    struct LegacySwarmEnemyAnimations {
        struct LegacySwarmEnemyAnimations__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemyAnimations__Fields fields;
    };

    struct __declspec(align(8)) LegacySwarmEnemySettings__Fields {
        float Acceleration;
        float Decceleration;
        float Speed;
        struct GameObject* Child;
        float AlertRange;
        float Gravity;
        float JumpDelay;
        float JumpStrength;
        struct AnimationCurve* MoveCurve;
        float MaxFallSpeed;
    };

    struct LegacySwarmEnemySettings {
        struct LegacySwarmEnemySettings__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemySettings__Fields fields;
    };

    struct __declspec(align(8)) LegacySwarmEnemy_States__Fields {
        struct State_2* Idle;
        struct State_2* Run;
        struct State_2* Spawned;
        struct State_2* Thrown;
        struct State_2* Frozen;
    };

    struct LegacySwarmEnemy_States {
        struct LegacySwarmEnemy_States__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemy_States__Fields fields;
    };

    struct LegacySwarmEnemyPlaceholder__Fields {
        struct RespawningPlaceholder__Fields _;
        struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings* Settings;
        struct GameObject* SwarmEnemy;
        struct List_1_System_Int32_* m_childComponentEnemies;
    };

    struct LegacySwarmEnemyPlaceholder {
        struct LegacySwarmEnemyPlaceholder__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemyPlaceholder__Fields fields;
    };

    struct __declspec(align(8)) LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Fields {
        float Health;
        int32_t TotalExpOrbsToDrop;
        float DamageOnTouch;
        struct DropLootSettings* LootSettings;
    };

    struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings {
        struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Fields fields;
    };

    struct LegacySwarmEnemyAnimations__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacySwarmEnemyAnimations__StaticFields {
    };

    struct LegacySwarmEnemyAnimations__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemyAnimations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemyAnimations__VTable vtable;
    };

    struct LegacySwarmEnemySettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacySwarmEnemySettings__StaticFields {
    };

    struct LegacySwarmEnemySettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemySettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemySettings__VTable vtable;
    };

    struct LegacySwarmEnemy_States__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacySwarmEnemy_States__StaticFields {
    };

    struct LegacySwarmEnemy_States__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemy_States__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemy_States__VTable vtable;
    };

    struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__StaticFields {
    };

    struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__VTable vtable;
    };

    struct LegacySwarmEnemyPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_CheckForOverlap;
        VirtualInvokeData get_CanSpawn;
        VirtualInvokeData get_NeedsToRespawn;
        VirtualInvokeData UpdateSpawnState;
        VirtualInvokeData Instantiate;
    };

    struct LegacySwarmEnemyPlaceholder__StaticFields {
    };

    struct LegacySwarmEnemyPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemyPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemyPlaceholder__VTable vtable;
    };

    struct LegacySwarmEnemy__VTable {
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
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData CanBeOptimized;
        VirtualInvokeData get_Position;
        VirtualInvokeData OnFreeze;
        VirtualInvokeData OnUnfreeze;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData IPuppetBase_get_Animation;
        VirtualInvokeData get_Animator;
        VirtualInvokeData get_SoundHost;
    };

    struct LegacySwarmEnemy__StaticFields {
    };

    struct LegacySwarmEnemy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemy__VTable vtable;
    };

    struct LegacySwarmEnemyManager__Fields {
        struct MonoBehaviour__Fields _;
        struct Queue_1_LegacySwarmEnemyManager_SpawnInfo_* m_spawnQueue;
    };

    struct LegacySwarmEnemyManager {
        struct LegacySwarmEnemyManager__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemyManager__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_LegacySwarmEnemyManager_SpawnInfo___Fields {
        struct LegacySwarmEnemyManager_SpawnInfo__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_LegacySwarmEnemyManager_SpawnInfo_ {
        struct Queue_1_LegacySwarmEnemyManager_SpawnInfo___Class* klass;
        MonitorData* monitor;
        struct Queue_1_LegacySwarmEnemyManager_SpawnInfo___Fields fields;
    };

    struct LegacySwarmEnemyManager_SpawnInfo {
        struct Vector3 Pos;
        struct Vector3 Velocity;
        struct MoonGuid* SceneRoot;
        int32_t LootAmount;
        struct OrbSpawner* OrbSpawner;
        struct GameObject* Child;
        float DamageOnTouch;
        struct LegacySwarmEnemyPlaceholder* Owner;
    };

    struct LegacySwarmEnemyManager_SpawnInfo__Boxed {
        struct LegacySwarmEnemyManager_SpawnInfo__Class* klass;
        MonitorData* monitor;
        struct LegacySwarmEnemyManager_SpawnInfo fields;
    };

    struct LegacySwarmEnemyManager_SpawnInfo__Array {
        struct LegacySwarmEnemyManager_SpawnInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LegacySwarmEnemyManager_SpawnInfo vector[32];
    };

    struct IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo_ {
        struct IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo___Class* klass;
        MonitorData* monitor;
    };

    struct LegacySwarmEnemyManager_SpawnInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacySwarmEnemyManager_SpawnInfo__StaticFields {
    };

    struct LegacySwarmEnemyManager_SpawnInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemyManager_SpawnInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemyManager_SpawnInfo__VTable vtable;
    };

    struct LegacySwarmEnemyManager_SpawnInfo__Array__VTable {
    };

    struct LegacySwarmEnemyManager_SpawnInfo__Array__StaticFields {
    };

    struct LegacySwarmEnemyManager_SpawnInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemyManager_SpawnInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemyManager_SpawnInfo__Array__VTable vtable;
    };

    struct IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo___StaticFields {
    };

    struct IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LegacySwarmEnemyManager_SpawnInfo___VTable vtable;
    };

    struct Queue_1_LegacySwarmEnemyManager_SpawnInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_1;
    };

    struct Queue_1_LegacySwarmEnemyManager_SpawnInfo___StaticFields {
    };

    struct Queue_1_LegacySwarmEnemyManager_SpawnInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_LegacySwarmEnemyManager_SpawnInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_LegacySwarmEnemyManager_SpawnInfo___VTable vtable;
    };

    struct LegacySwarmEnemyManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacySwarmEnemyManager__StaticFields {
        struct LegacySwarmEnemyManager* Instance;
    };

    struct LegacySwarmEnemyManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacySwarmEnemyManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacySwarmEnemyManager__VTable vtable;
    };

    struct AcidBlob__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* SplatMark;
        struct SphereCollider* HitRadius;
        bool m_hasSplat;
        bool _Active_k__BackingField;
    };

    struct AcidBlob {
        struct AcidBlob__Class* klass;
        MonitorData* monitor;
        struct AcidBlob__Fields fields;
    };

    struct AcidBlob__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
    };

    struct AcidBlob__StaticFields {
    };

    struct AcidBlob__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AcidBlob__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AcidBlob__VTable vtable;
    };

    struct DisableTargetForSeconds__Fields {
        struct MonoBehaviour__Fields _;
        float Duration;
        struct GameObject* Target;
        float m_timer;
    };

    struct DisableTargetForSeconds {
        struct DisableTargetForSeconds__Class* klass;
        MonitorData* monitor;
        struct DisableTargetForSeconds__Fields fields;
    };

    struct DisableTargetForSeconds__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DisableTargetForSeconds__StaticFields {
    };

    struct DisableTargetForSeconds__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DisableTargetForSeconds__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DisableTargetForSeconds__VTable vtable;
    };

    struct SelfDestruct__Fields {
        struct Suspendable__Fields _;
        float WaitTime;
        struct LegacyEntity* Entity;
        bool HalfTimeOnEasy;
        float m_timeRemaining;
        bool _IsSuspended_k__BackingField;
    };

    struct SelfDestruct {
        struct SelfDestruct__Class* klass;
        MonitorData* monitor;
        struct SelfDestruct__Fields fields;
    };

    struct SelfDestruct__VTable {
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

    struct SelfDestruct__StaticFields {
    };

    struct SelfDestruct__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SelfDestruct__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SelfDestruct__VTable vtable;
    };

    struct WormEnemy__Fields {
        struct Enemy2D__Fields _;
    };

    struct WormEnemy {
        struct WormEnemy__Class* klass;
        MonitorData* monitor;
        struct WormEnemy__Fields fields;
    };

    struct WormEnemy__VTable {
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
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData CanBeOptimized;
        VirtualInvokeData get_Position;
        VirtualInvokeData OnFreeze;
        VirtualInvokeData OnUnfreeze;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData IPuppetBase_get_Animation;
        VirtualInvokeData get_Animator;
        VirtualInvokeData get_SoundHost;
    };

    struct WormEnemy__StaticFields {
    };

    struct WormEnemy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WormEnemy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WormEnemy__VTable vtable;
    };

    struct WormHole__Fields {
        struct SaveSerialize__Fields _;
        bool HiddenAtStart;
    };

    struct WormHole {
        struct WormHole__Class* klass;
        MonitorData* monitor;
        struct WormHole__Fields fields;
    };

    struct WormHole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct WormHole__StaticFields {
    };

    struct WormHole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WormHole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WormHole__VTable vtable;
    };

    struct WormHoleManager__Fields {
        struct MonoBehaviour__Fields _;
        struct WormHole__Array* m_wormHoles;
        struct MortarWormEnemy* _mMortarWormEnemy;
        float m_timeBetweenHolesRemaining;
        bool IsAggressive;
        struct WormHole* m_lastHole;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct WormHoleManager {
        struct WormHoleManager__Class* klass;
        MonitorData* monitor;
        struct WormHoleManager__Fields fields;
    };

    struct WormHole__Array {
        struct WormHole__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WormHole* vector[32];
    };

    struct MortarWormEnemy__Fields {
        struct WormEnemy__Fields _;
        struct MortarWormSettings* Settings;
        struct MortarWormEnemyAnimations* Animations;
        struct PrefabSpawner* ChargingEffect;
        struct PrefabSpawner* EmergingEffect;
        struct PrefabSpawner* HidingEffect;
        struct PrefabSpawner* ShootingEffect;
        struct SoundSource* ChargingSound;
        struct SoundSource* EmergingSound;
        struct SoundSource* HidingSound;
        struct SoundSource* ShootingSound;
        struct MortarWormEnemyProjectileSpawnerTransform* Spawn;
        struct WormHole* WormHole;
        bool IsBlocked;
        struct Transform* ProjectileTrajectorySpawnPoint;
        struct GameObject* HideGroup;
        struct MortarWormEnemy_States* State;
        struct ProjectileSpawner* ProjectileSpawner;
        struct LayerMask RayTestLayerMask;
        struct MortarWormTrajectoryHelper* m_wormTrajectoryHelper;
    };

    struct MortarWormEnemy {
        struct MortarWormEnemy__Class* klass;
        MonitorData* monitor;
        struct MortarWormEnemy__Fields fields;
    };

    struct __declspec(align(8)) MortarWormSettings__Fields {
        float HideDistance;
        float ShootDelay;
        float MinHideTime;
        float ProjectileSpeed;
        float ProjectileGravity;
        float ProjectileDamage;
        bool CanTurnAround;
        float ChargingDuration;
        float ShootingDuration;
        float WaitBetweenShots;
    };

    struct MortarWormSettings {
        struct MortarWormSettings__Class* klass;
        MonitorData* monitor;
        struct MortarWormSettings__Fields fields;
    };

    struct __declspec(align(8)) MortarWormEnemyAnimations__Fields {
        struct TextureAnimationWithTransitions* Idle;
        struct TextureAnimationWithTransitions* Charging;
        struct MortarWormDirectionalAnimations* Shooting;
        struct TextureAnimationWithTransitions* Hidden;
        struct TextureAnimationWithTransitions* Hiding;
        struct TextureAnimationWithTransitions* Emerging;
    };

    struct MortarWormEnemyAnimations {
        struct MortarWormEnemyAnimations__Class* klass;
        MonitorData* monitor;
        struct MortarWormEnemyAnimations__Fields fields;
    };

    struct __declspec(align(8)) MortarWormDirectionalAnimations__Fields {
        struct TextureAnimationWithTransitions* Left;
        struct TextureAnimationWithTransitions* UpLeft;
        struct TextureAnimationWithTransitions* Up;
        struct TextureAnimationWithTransitions* UpRight;
        struct TextureAnimationWithTransitions* Right;
    };

    struct MortarWormDirectionalAnimations {
        struct MortarWormDirectionalAnimations__Class* klass;
        MonitorData* monitor;
        struct MortarWormDirectionalAnimations__Fields fields;
    };

    struct __declspec(align(8)) MortarWormEnemyProjectileSpawnerTransform__Fields {
        struct Transform* Left;
        struct Transform* UpLeft;
        struct Transform* Up;
        struct Transform* UpRight;
        struct Transform* Right;
    };

    struct MortarWormEnemyProjectileSpawnerTransform {
        struct MortarWormEnemyProjectileSpawnerTransform__Class* klass;
        MonitorData* monitor;
        struct MortarWormEnemyProjectileSpawnerTransform__Fields fields;
    };

    struct Action_1_MortarWormEnemy___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_MortarWormEnemy_ {
        struct Action_1_MortarWormEnemy___Class* klass;
        MonitorData* monitor;
        struct Action_1_MortarWormEnemy___Fields fields;
    };

    struct __declspec(align(8)) MortarWormEnemy_States__Fields {
        struct IState_2* Idle;
        struct IState_2* Charging;
        struct IState_2* Shooting;
        struct IState_2* Hidden;
        struct IState_2* Hiding;
        struct IState_2* Emerging;
        struct IState_2* Frozen;
    };

    struct MortarWormEnemy_States {
        struct MortarWormEnemy_States__Class* klass;
        MonitorData* monitor;
        struct MortarWormEnemy_States__Fields fields;
    };

    struct __declspec(align(8)) MortarWormTrajectoryHelper__Fields {
        struct MortarWormEnemy* _mMortarWormEnemy;
        float _RemainingWaitTime_k__BackingField;
        bool _CanHitTarget_k__BackingField;
    };

    struct MortarWormTrajectoryHelper {
        struct MortarWormTrajectoryHelper__Class* klass;
        MonitorData* monitor;
        struct MortarWormTrajectoryHelper__Fields fields;
    };

    struct WormHole__Array__VTable {
    };

    struct WormHole__Array__StaticFields {
    };

    struct WormHole__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WormHole__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WormHole__Array__VTable vtable;
    };

    struct MortarWormSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MortarWormSettings__StaticFields {
    };

    struct MortarWormSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormSettings__VTable vtable;
    };

    struct MortarWormDirectionalAnimations__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MortarWormDirectionalAnimations__StaticFields {
    };

    struct MortarWormDirectionalAnimations__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormDirectionalAnimations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormDirectionalAnimations__VTable vtable;
    };

    struct MortarWormEnemyAnimations__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MortarWormEnemyAnimations__StaticFields {
    };

    struct MortarWormEnemyAnimations__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormEnemyAnimations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormEnemyAnimations__VTable vtable;
    };

    struct MortarWormEnemyProjectileSpawnerTransform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MortarWormEnemyProjectileSpawnerTransform__StaticFields {
    };

    struct MortarWormEnemyProjectileSpawnerTransform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormEnemyProjectileSpawnerTransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormEnemyProjectileSpawnerTransform__VTable vtable;
    };

    struct Action_1_MortarWormEnemy___VTable {
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

    struct Action_1_MortarWormEnemy___StaticFields {
    };

    struct Action_1_MortarWormEnemy___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_MortarWormEnemy___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_MortarWormEnemy___VTable vtable;
    };

    struct MortarWormEnemy_States__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MortarWormEnemy_States__StaticFields {
    };

    struct MortarWormEnemy_States__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormEnemy_States__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormEnemy_States__VTable vtable;
    };

    struct MortarWormTrajectoryHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MortarWormTrajectoryHelper__StaticFields {
    };

    struct MortarWormTrajectoryHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormTrajectoryHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormTrajectoryHelper__VTable vtable;
    };

    struct MortarWormEnemy__VTable {
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
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData CanBeOptimized;
        VirtualInvokeData get_Position;
        VirtualInvokeData OnFreeze;
        VirtualInvokeData OnUnfreeze;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData IPuppetBase_get_Animation;
        VirtualInvokeData get_Animator;
        VirtualInvokeData get_SoundHost;
    };

    struct MortarWormEnemy__StaticFields {
        struct Action_1_MortarWormEnemy_* OnMortarHide;
    };

    struct MortarWormEnemy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormEnemy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormEnemy__VTable vtable;
    };

    struct WormHoleManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct WormHoleManager__StaticFields {
    };

    struct WormHoleManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WormHoleManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WormHoleManager__VTable vtable;
    };

    struct MortarWormBlockedDetector__Fields {
        struct MonoBehaviour__Fields _;
        struct MortarWormEnemy* Mortar;
        bool m_isBlocked;
    };

    struct MortarWormBlockedDetector {
        struct MortarWormBlockedDetector__Class* klass;
        MonitorData* monitor;
        struct MortarWormBlockedDetector__Fields fields;
    };

    struct MortarWormBlockedDetector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MortarWormBlockedDetector__StaticFields {
    };

    struct MortarWormBlockedDetector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MortarWormBlockedDetector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MortarWormBlockedDetector__VTable vtable;
    };

} // namespace app
