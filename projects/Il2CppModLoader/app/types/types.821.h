namespace app {
struct SpikeProjectile__StaticFields {
};

struct SpikeProjectile__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpikeProjectile__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpikeProjectile__VTable vtable;
};

struct StarSlugEnemy__Fields {
    struct SlugEnemy__Fields _;
    struct SoundSource *ChargingSoundSource;
    struct SoundSource *ShootingSoundSource;
    struct SoundSource *CrawlingSoundSource;
    struct SurfaceBasedSoundProvider *CrawlingSoundProvider;
    struct StarSlugEnemyAnimations *Animations;
    struct StarSlugEnemySettings *Settings;
    struct GameObject *AttackSphere;
    struct StarSlugEnemy_States *State;
};

struct StarSlugEnemy {
    struct StarSlugEnemy__Class *klass;
    MonitorData *monitor;
    struct StarSlugEnemy__Fields fields;
};

struct SurfaceBasedSoundProvider__Fields {
    struct SoundProvider__Fields _;
    struct SurfaceProvider *SurfaceProvider;
    struct SurfaceToSoundProviderMap *SoundProviderMap;
};

struct SurfaceBasedSoundProvider {
    struct SurfaceBasedSoundProvider__Class *klass;
    MonitorData *monitor;
    struct SurfaceBasedSoundProvider__Fields fields;
};

struct __declspec(align(8)) StarSlugEnemyAnimations__Fields {
    struct TwistAnimationSet *Crawling;
    struct TextureAnimationWithTransitions *Charging;
    struct TextureAnimationWithTransitions *Shooting;
};

struct StarSlugEnemyAnimations {
    struct StarSlugEnemyAnimations__Class *klass;
    MonitorData *monitor;
    struct StarSlugEnemyAnimations__Fields fields;
};

struct __declspec(align(8)) StarSlugEnemySettings__Fields {
    float WalkSpeed;
    struct AnimationCurve *WalkSpeedMultiplier;
    float ProjectileSpeed;
    struct GameObject *Projectile;
    float BashedSlugSpeed;
    struct GameObject *ShootEffect;
    bool SpawnProjectileOnDeath;
};

struct StarSlugEnemySettings {
    struct StarSlugEnemySettings__Class *klass;
    MonitorData *monitor;
    struct StarSlugEnemySettings__Fields fields;
};

struct __declspec(align(8)) StarSlugEnemy_States__Fields {
    struct StarSlugCrawlingState *Crawl;
    struct StarSlugChargingState *Charging;
    struct StarSlugShootingState *Shooting;
};

struct StarSlugEnemy_States {
    struct StarSlugEnemy_States__Class *klass;
    MonitorData *monitor;
    struct StarSlugEnemy_States__Fields fields;
};

struct StarSlugState__Fields {
    struct SlugState__Fields _;
    struct StarSlugEnemy *StarSlugEnemy;
};

struct StarSlugState {
    struct StarSlugState__Class *klass;
    MonitorData *monitor;
    struct StarSlugState__Fields fields;
};

struct StarSlugCrawlingState__Fields {
    struct StarSlugState__Fields _;
};

struct StarSlugCrawlingState {
    struct StarSlugCrawlingState__Class *klass;
    MonitorData *monitor;
    struct StarSlugCrawlingState__Fields fields;
};

struct StarSlugChargingState__Fields {
    struct StarSlugState__Fields _;
};

struct StarSlugChargingState {
    struct StarSlugChargingState__Class *klass;
    MonitorData *monitor;
    struct StarSlugChargingState__Fields fields;
};

struct StarSlugShootingState__Fields {
    struct StarSlugState__Fields _;
};

struct StarSlugShootingState {
    struct StarSlugShootingState__Class *klass;
    MonitorData *monitor;
    struct StarSlugShootingState__Fields fields;
};

struct SurfaceBasedSoundProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSound;
};

struct SurfaceBasedSoundProvider__StaticFields {
};

struct SurfaceBasedSoundProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SurfaceBasedSoundProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SurfaceBasedSoundProvider__VTable vtable;
};

struct StarSlugEnemyAnimations__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StarSlugEnemyAnimations__StaticFields {
};

struct StarSlugEnemyAnimations__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugEnemyAnimations__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugEnemyAnimations__VTable vtable;
};

struct StarSlugEnemySettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StarSlugEnemySettings__StaticFields {
};

struct StarSlugEnemySettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugEnemySettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugEnemySettings__VTable vtable;
};

struct StarSlugState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct StarSlugState__StaticFields {
};

struct StarSlugState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugState__VTable vtable;
};

struct StarSlugCrawlingState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct StarSlugCrawlingState__StaticFields {
};

struct StarSlugCrawlingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugCrawlingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugCrawlingState__VTable vtable;
};

struct StarSlugChargingState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct StarSlugChargingState__StaticFields {
};

struct StarSlugChargingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugChargingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugChargingState__VTable vtable;
};

struct StarSlugShootingState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct StarSlugShootingState__StaticFields {
};

struct StarSlugShootingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugShootingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugShootingState__VTable vtable;
};

struct StarSlugEnemy_States__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StarSlugEnemy_States__StaticFields {
};

struct StarSlugEnemy_States__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugEnemy_States__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugEnemy_States__VTable vtable;
};

struct StarSlugEnemy__VTable {
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

struct StarSlugEnemy__StaticFields {
};

struct StarSlugEnemy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugEnemy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugEnemy__VTable vtable;
};

struct StarSlugEnemy_c {
    struct StarSlugEnemy_c__Class *klass;
    MonitorData *monitor;
};

struct StarSlugEnemy_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StarSlugEnemy_c__StaticFields {
    struct StarSlugEnemy_c *__9;
    struct Func_1_Boolean_ *__9__12_1;
};

struct StarSlugEnemy_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugEnemy_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugEnemy_c__VTable vtable;
};

struct StarSlugEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings *Settings;
    struct GameObject *StarSlugEnemy;
};

struct StarSlugEnemyPlaceholder {
    struct StarSlugEnemyPlaceholder__Class *klass;
    MonitorData *monitor;
    struct StarSlugEnemyPlaceholder__Fields fields;
};

struct __declspec(align(8)) StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings *LootSettings;
    float WalkSpeed;
    float ProjectileSpeed;
    struct GameObject *Projectile;
    bool SpawnProjectileOnDeath;
};

struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings {
    struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class *klass;
    MonitorData *monitor;
    struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields fields;
};

struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__StaticFields {
};

struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__VTable vtable;
};

struct StarSlugEnemyPlaceholder__VTable {
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

struct StarSlugEnemyPlaceholder__StaticFields {
};

struct StarSlugEnemyPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StarSlugEnemyPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StarSlugEnemyPlaceholder__VTable vtable;
};

struct SeekerSlugShootingState__Fields {
    struct SlugState__Fields _;
    struct SlugDirectionalAnimationPicker *m_animation;
    struct GameObject *m_spikePrefab;
    struct SoundSource *m_shootingSound;
    float m_numberOfShots;
    float m_delayBetweenShots;
    float m_timeSinceLastShot;
    int32_t m_shotCount;
};

struct SeekerSlugShootingState {
    struct SeekerSlugShootingState__Class *klass;
    MonitorData *monitor;
    struct SeekerSlugShootingState__Fields fields;
};

struct SeekerSlugShootingState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct SeekerSlugShootingState__StaticFields {
};

struct SeekerSlugShootingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeekerSlugShootingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeekerSlugShootingState__VTable vtable;
};

struct SlugFallingState__Fields {
    struct SlugState__Fields _;
};

struct SlugFallingState {
    struct SlugFallingState__Class *klass;
    MonitorData *monitor;
    struct SlugFallingState__Fields fields;
};

struct SlugFallingState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct SlugFallingState__StaticFields {
};

struct SlugFallingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugFallingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugFallingState__VTable vtable;
};

struct SlugFrozenState__Fields {
    struct SlugState__Fields _;
    struct TextureAnimationWithTransitions *Frozen;
};

struct SlugFrozenState {
    struct SlugFrozenState__Class *klass;
    MonitorData *monitor;
    struct SlugFrozenState__Fields fields;
};

struct SlugFrozenState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct SlugFrozenState__StaticFields {
};

struct SlugFrozenState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugFrozenState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugFrozenState__VTable vtable;
};

struct __declspec(align(8)) ShootingSpiderAnimations__Fields {
    struct TextureAnimationWithTransitions *Respawn;
    struct TextureAnimationWithTransitions *Charging;
    struct TextureAnimationWithTransitions *Idle;
    struct TextureAnimationWithTransitions *Shooting;
    struct TextureAnimationWithTransitions *Hurt;
};

struct ShootingSpiderAnimations {
    struct ShootingSpiderAnimations__Class *klass;
    MonitorData *monitor;
    struct ShootingSpiderAnimations__Fields fields;
};

struct ShootingSpiderAnimations__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShootingSpiderAnimations__StaticFields {
};

struct ShootingSpiderAnimations__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootingSpiderAnimations__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootingSpiderAnimations__VTable vtable;
};

struct __declspec(align(8)) ShootingSpiderSettings__Fields {
    float ChargingDuration;
    float ChargingRange;
    float Gravity;
    struct GameObject *Projectile;
    float ProjectileSpeed;
    float ShootingDuration;
    float ShootingImpulse;
    float ProjectileDamage;
    bool SpreadShot;
    struct GameObject *RespawnEffect;
};

struct ShootingSpiderSettings {
    struct ShootingSpiderSettings__Class *klass;
    MonitorData *monitor;
    struct ShootingSpiderSettings__Fields fields;
};

struct ShootingSpiderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShootingSpiderSettings__StaticFields {
};

struct ShootingSpiderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootingSpiderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootingSpiderSettings__VTable vtable;
};

struct __declspec(align(8)) ShootingSpiderSounds__Fields {
    struct SoundSource *Idle;
    struct SoundProvider *Charge;
    struct SoundProvider *Shoot;
    struct SoundProvider *Hurt;
};

struct ShootingSpiderSounds {
    struct ShootingSpiderSounds__Class *klass;
    MonitorData *monitor;
    struct ShootingSpiderSounds__Fields fields;
};

struct ShootingSpiderSounds__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShootingSpiderSounds__StaticFields {
};

struct ShootingSpiderSounds__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootingSpiderSounds__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootingSpiderSounds__VTable vtable;
};

struct ShootingSpider__Fields {
    struct Enemy2D__Fields _;
    struct ShootingSpiderAnimations *Animations;
    struct ShootingSpiderSounds *Sounds;
    struct PrefabSpawner *ChargingEffect;
    struct GameObject *IceBlock;
    struct Transform *ProjectileSpawner;
    struct ShootingSpiderSettings *Settings;
    struct PrefabSpawner *ShootingEffect;
    bool ShootThree;
    struct ShootingSpider_States *State;
};

struct ShootingSpider {
    struct ShootingSpider__Class *klass;
    MonitorData *monitor;
    struct ShootingSpider__Fields fields;
};

struct __declspec(align(8)) ShootingSpider_States__Fields {
    struct State_2 *Respawn;
    struct State_2 *Charging;
    struct State_2 *Frozen;
    struct State_2 *Idle;
    struct State_2 *Shooting;
    struct State_2 *Hurt;
};

struct ShootingSpider_States {
    struct ShootingSpider_States__Class *klass;
    MonitorData *monitor;
    struct ShootingSpider_States__Fields fields;
};

struct ShootingSpider_States__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShootingSpider_States__StaticFields {
};

struct ShootingSpider_States__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootingSpider_States__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootingSpider_States__VTable vtable;
};

struct ShootingSpider__VTable {
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

struct ShootingSpider__StaticFields {
};

struct ShootingSpider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootingSpider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootingSpider__VTable vtable;
};

struct ShootingSpiderPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings *Settings;
    struct GameObject *ShootingSpider;
};

struct ShootingSpiderPlaceholder {
    struct ShootingSpiderPlaceholder__Class *klass;
    MonitorData *monitor;
    struct ShootingSpiderPlaceholder__Fields fields;
};

struct __declspec(align(8)) ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    float ProjectileDamage;
    float ProjectileSpeed;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings *LootSettings;
    struct Rope *Rope;
    struct PhysicalSystemManager *PhysicalSystem;
    bool SpreadShot;
};

struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings {
    struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class *klass;
    MonitorData *monitor;
    struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields fields;
};

struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__StaticFields {
};

struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__VTable vtable;
};

struct ShootingSpiderPlaceholder__VTable {
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

struct ShootingSpiderPlaceholder__StaticFields {
};

struct ShootingSpiderPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootingSpiderPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootingSpiderPlaceholder__VTable vtable;
};

struct AttackTriggered {
    struct AttackTriggered__Class *klass;
    MonitorData *monitor;
};

struct AttackTriggered__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AttackTriggered__StaticFields {
};

struct AttackTriggered__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttackTriggered__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttackTriggered__VTable vtable;
};

struct SpitterEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings *Settings;
    struct GameObject *ChargingSootEnemy;
};

struct SpitterEnemyPlaceholder {
    struct SpitterEnemyPlaceholder__Class *klass;
    MonitorData *monitor;
    struct SpitterEnemyPlaceholder__Fields fields;
};

struct __declspec(align(8)) SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    float ProjectileDamage;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings *LootSettings;
    float WalkSpeed;
    float RunSpeed;
    float IdleDuration;
    float WalkDuration;
    float SeePlayerDistance;
    float MinChargeDistance;
    float ShootingDuration;
    float ProjectileSpeed;
    float Gravity;
    float ProjectileGravity;
    bool SpreadShot;
    struct Transform__Array *ActionZones;
    struct ActionMethod *EnterZoneAction;
};

struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings {
    struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class *klass;
    MonitorData *monitor;
    struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields fields;
};

struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__StaticFields {
};

struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__VTable vtable;
};

struct SpitterEnemyPlaceholder__VTable {
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

struct SpitterEnemyPlaceholder__StaticFields {
};

struct SpitterEnemyPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpitterEnemyPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpitterEnemyPlaceholder__VTable vtable;
};

struct __declspec(align(8)) LegacySwarmEnemyLootSettings__Fields {
    float LootAmount;
    float LootMultiplier;
};

struct LegacySwarmEnemyLootSettings {
    struct LegacySwarmEnemyLootSettings__Class *klass;
    MonitorData *monitor;
    struct LegacySwarmEnemyLootSettings__Fields fields;
};

struct LegacySwarmEnemyLootSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LegacySwarmEnemyLootSettings__StaticFields {
};

struct LegacySwarmEnemyLootSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacySwarmEnemyLootSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacySwarmEnemyLootSettings__VTable vtable;
};

struct LegacySwarmEnemy__Fields {
    struct GroundEnemy__Fields _;
    struct LegacySwarmEnemyAnimations *Animations;
    struct LegacySwarmEnemySettings *Settings;
    struct LegacySwarmEnemyLootSettings *Loot;
    struct OrbSpawner *OrbSpawner;
    struct SoundSource *Idle;
    struct SoundSource *Walking;
    bool CanFall;
    float Size;
    struct LegacySwarmEnemy_States *State;
    bool m_wasSpawned;
    struct AnimationCurve *SpeedXToRotation;
    struct AnimationCurve *SpeedYToRotation;
    float AirTiltAngle;
    float m_jumpDelay;
    struct LegacySwarmEnemyPlaceholder *Owner;
};

}
