namespace app {
    struct TraceGroundMovementSurfaceProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetSurfaceType;
    };

    struct TraceGroundMovementSurfaceProvider__StaticFields {
    };

    struct TraceGroundMovementSurfaceProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TraceGroundMovementSurfaceProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TraceGroundMovementSurfaceProvider__VTable vtable;
    };

    struct NotCondition__Fields {
        struct Condition_1__Fields _;
        struct Condition_1* Condition;
    };

    struct NotCondition {
        struct NotCondition__Class* klass;
        MonitorData* monitor;
        struct NotCondition__Fields fields;
    };

    struct NotCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
    };

    struct NotCondition__StaticFields {
    };

    struct NotCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NotCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NotCondition__VTable vtable;
    };

    struct PetrifiedPlant__Fields {
        struct LegacyEntity__Fields _;
        struct SoundProvider* Deflected;
    };

    struct PetrifiedPlant {
        struct PetrifiedPlant__Class* klass;
        MonitorData* monitor;
        struct PetrifiedPlant__Fields fields;
    };

    struct PetrifiedPlant__VTable {
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
    };

    struct PetrifiedPlant__StaticFields {
    };

    struct PetrifiedPlant__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedPlant__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedPlant__VTable vtable;
    };

    struct ProjectileExplodeWall__Fields {
        struct LegacyEntity__Fields _;
        struct SoundProvider* Deflected;
    };

    struct ProjectileExplodeWall {
        struct ProjectileExplodeWall__Class* klass;
        MonitorData* monitor;
        struct ProjectileExplodeWall__Fields fields;
    };

    struct ProjectileExplodeWall__VTable {
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
    };

    struct ProjectileExplodeWall__StaticFields {
    };

    struct ProjectileExplodeWall__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProjectileExplodeWall__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProjectileExplodeWall__VTable vtable;
    };

    struct Respawner__Fields {
        struct MonoBehaviour__Fields _;
        struct SerializedFloatUberState* TimerUberState;
        struct GameObject* RespawnTarget;
        bool RespawnOnTimeout;
        bool RespawnOnScreen;
        float RespawnTime;
        float MinDistanceFromPlayer;
        struct MoonTimeline* RespawnTimeline;
        struct MoonTimeline* DestroyedTimeline;
        float m_timer;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct IUberState__Array* _AffectingUberStates_k__BackingField;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
        bool _InvalidateParentTimelineCache_k__BackingField;
    };

    struct Respawner {
        struct Respawner__Class* klass;
        MonitorData* monitor;
        struct Respawner__Fields fields;
    };

    struct Respawner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
    };

    struct Respawner__StaticFields {
    };

    struct Respawner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Respawner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Respawner__VTable vtable;
    };

    struct RespawningPlaceholderSpawnAction__Fields {
        struct ActionMethod__Fields _;
        struct RespawningPlaceholder* Placeholder;
    };

    struct RespawningPlaceholderSpawnAction {
        struct RespawningPlaceholderSpawnAction__Class* klass;
        MonitorData* monitor;
        struct RespawningPlaceholderSpawnAction__Fields fields;
    };

    struct RespawningPlaceholderSpawnAction__VTable {
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

    struct RespawningPlaceholderSpawnAction__StaticFields {
    };

    struct RespawningPlaceholderSpawnAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RespawningPlaceholderSpawnAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RespawningPlaceholderSpawnAction__VTable vtable;
    };

    struct SpawnPrefabAction__Fields {
        struct ActionMethod__Fields _;
        struct PrefabSpawner* PrefabSource;
    };

    struct SpawnPrefabAction {
        struct SpawnPrefabAction__Class* klass;
        MonitorData* monitor;
        struct SpawnPrefabAction__Fields fields;
    };

    struct SpawnPrefabAction__VTable {
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

    struct SpawnPrefabAction__StaticFields {
    };

    struct SpawnPrefabAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpawnPrefabAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpawnPrefabAction__VTable vtable;
    };

    struct TextureBasedOnHealth__Fields {
        struct MonoBehaviour__Fields _;
        struct LegacyEntity* Entity;
        struct Texture__Array* Textures;
        struct AnimationCurve* HealthToIndex;
        struct Renderer* m_renderer;
    };

    struct TextureBasedOnHealth {
        struct TextureBasedOnHealth__Class* klass;
        MonitorData* monitor;
        struct TextureBasedOnHealth__Fields fields;
    };

    struct TextureBasedOnHealth__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TextureBasedOnHealth__StaticFields {
    };

    struct TextureBasedOnHealth__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextureBasedOnHealth__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextureBasedOnHealth__VTable vtable;
    };

    enum class DeadEnemyRagdoll_State__Enum : int32_t {
        Plummit = 0x00000000,
        PlummitLand = 0x00000001,
        Bounce = 0x00000002,
        Drown = 0x00000003,
    };

    struct DeadEnemyRagdoll_State__Enum__Boxed {
        struct DeadEnemyRagdoll_State__Enum__Class* klass;
        MonitorData* monitor;
        DeadEnemyRagdoll_State__Enum value;
    };

    struct DeadEnemyRagdoll__Fields {
        struct MonoBehaviour__Fields _;
        struct CharacterAnimationSystem* Animation;
        struct DeadEnemyRagdoll_RagdollAnimations* Animations;
        struct BaseAnimator* FadeOutAnimator;
        struct SoundProvider* HitGroundSoundProvider;
        struct DeadEnemyRagdoll_EnemyPlumetSettings* PlumetSettings;
        struct GameObject* LandOnGroundImpactEffect;
        struct Transform* Sprite;
        struct CharacterSpriteMirror* SpriteMirror;
        bool ExplodeOnGround;
        bool ExplodeUnlessBashed;
        struct GameObject* ExplodeEffect;
        struct Vector3 m_startVelocity;
        struct Vector3 m_gravityVelocity;
        struct Rigidbody* m_rigidbody;
        float m_currentStateTime;
        DeadEnemyRagdoll_State__Enum m_currentState;

        struct Vector3 m_thrownDirection;
        struct Vector3 m_actualVelocity;
        struct SphereCollider* m_sphereCollider;
        float StartSpeed;
        float DamageForceSpeed;
        bool UseRange;
        float DamageForceSpeedMinX;
        float DamageForceSpeedMaxX;
        float DamageForceSpeedMinY;
        float DamageForceSpeedMaxY;
        float DirectionRandomness;
        float BounceMin;
        float BounceMax;
        float BounceX;
        float BounceSpeedThreshold;
        float RayDistance;
        struct LayerMask RayMask;
        bool m_drownAnimationPlaying;
        float m_lifeTime;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        float NoiseScale;
        float NoiseVarScale;
        float BounceGravity;
    };

    struct DeadEnemyRagdoll {
        struct DeadEnemyRagdoll__Class* klass;
        MonitorData* monitor;
        struct DeadEnemyRagdoll__Fields fields;
    };

    struct __declspec(align(8)) DeadEnemyRagdoll_RagdollAnimations__Fields {
        struct TextureAnimationWithTransitions* DeathPlummet;
        struct TextureAnimationWithTransitions* DeathPlummetLoop;
        struct TextureAnimationWithTransitions* DeathPlummetFlatLand;
        struct TextureAnimationWithTransitions* DeathPlummetEdgeLand;
        struct TextureAnimationWithTransitions* Drown;
    };

    struct DeadEnemyRagdoll_RagdollAnimations {
        struct DeadEnemyRagdoll_RagdollAnimations__Class* klass;
        MonitorData* monitor;
        struct DeadEnemyRagdoll_RagdollAnimations__Fields fields;
    };

    struct __declspec(align(8)) DeadEnemyRagdoll_EnemyPlumetSettings__Fields {
        struct AnimationCurve* RotationCurve;
        struct AnimationCurve* SpeedCurve;
        struct AnimationCurve* GravityCurve;
        float Gravity;
        struct AnimationCurve* WaterFrictionCurve;
        float DrownDelay;
    };

    struct DeadEnemyRagdoll_EnemyPlumetSettings {
        struct DeadEnemyRagdoll_EnemyPlumetSettings__Class* klass;
        MonitorData* monitor;
        struct DeadEnemyRagdoll_EnemyPlumetSettings__Fields fields;
    };

    struct DeadEnemyRagdoll_RagdollAnimations__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DeadEnemyRagdoll_RagdollAnimations__StaticFields {
    };

    struct DeadEnemyRagdoll_RagdollAnimations__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadEnemyRagdoll_RagdollAnimations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadEnemyRagdoll_RagdollAnimations__VTable vtable;
    };

    struct DeadEnemyRagdoll_EnemyPlumetSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DeadEnemyRagdoll_EnemyPlumetSettings__StaticFields {
    };

    struct DeadEnemyRagdoll_EnemyPlumetSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadEnemyRagdoll_EnemyPlumetSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadEnemyRagdoll_EnemyPlumetSettings__VTable vtable;
    };

    struct DeadEnemyRagdoll_State__Enum__VTable {
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

    struct DeadEnemyRagdoll_State__Enum__StaticFields {
    };

    struct DeadEnemyRagdoll_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadEnemyRagdoll_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadEnemyRagdoll_State__Enum__VTable vtable;
    };

    struct DeadEnemyRagdoll__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData OnReceiveContext;
    };

    struct DeadEnemyRagdoll__StaticFields {
    };

    struct DeadEnemyRagdoll__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadEnemyRagdoll__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadEnemyRagdoll__VTable vtable;
    };

    enum class DeadJumpingSootEnemy_State__Enum : int32_t {
        Plummit = 0x00000000,
        PlummitLand = 0x00000001,
    };

    struct DeadJumpingSootEnemy_State__Enum__Boxed {
        struct DeadJumpingSootEnemy_State__Enum__Class* klass;
        MonitorData* monitor;
        DeadJumpingSootEnemy_State__Enum value;
    };

    struct DeadJumpingSootEnemy__Fields {
        struct MonoBehaviour__Fields _;
        struct CharacterAnimationSystem* Animation;
        struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations* Animations;
        DeadJumpingSootEnemy_State__Enum CurrentState;

        struct LegacyAnimator* FadeOutAnimator;
        float Gravity;
        struct SoundProvider* HitGroundSoundProvider;
        float KnockedBackDuration;
        struct AnimationCurve* KnockedBackGravityCurve;
        struct AnimationCurve* KnockedBackRotationCurve;
        struct AnimationCurve* KnockedBackSpeedCurve;
        struct GameObject* LandOnGroundImpactEffect;
        struct Transform* Sprite;
        struct CharacterSpriteMirror* SpriteMirror;
        struct Vector3 Velocity;
        struct Vector3 m_gravityVelocity;
        struct Rigidbody* m_rigidbody;
        float m_stateCurrentTime;
        struct Transform* m_transform;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct Vector3 m_thrownDirection;
    };

    struct DeadJumpingSootEnemy {
        struct DeadJumpingSootEnemy__Class* klass;
        MonitorData* monitor;
        struct DeadJumpingSootEnemy__Fields fields;
    };

    struct __declspec(align(8)) DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Fields {
        struct TextureAnimationWithTransitions* DeathPlummet;
        struct TextureAnimationWithTransitions* DeathPlummetLand;
    };

    struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations {
        struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class* klass;
        MonitorData* monitor;
        struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Fields fields;
    };

    struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__StaticFields {
    };

    struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__VTable vtable;
    };

    struct DeadJumpingSootEnemy_State__Enum__VTable {
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

    struct DeadJumpingSootEnemy_State__Enum__StaticFields {
    };

    struct DeadJumpingSootEnemy_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadJumpingSootEnemy_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadJumpingSootEnemy_State__Enum__VTable vtable;
    };

    struct DeadJumpingSootEnemy__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData OnReceiveContext;
    };

    struct DeadJumpingSootEnemy__StaticFields {
    };

    struct DeadJumpingSootEnemy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadJumpingSootEnemy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadJumpingSootEnemy__VTable vtable;
    };

    struct JumperEnemyPlaceholder__Fields {
        struct RespawningPlaceholder__Fields _;
        struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings* Settings;
        struct GameObject* JumpingSootEnemy;
        struct Transform* JumpingZone;
    };

    struct JumperEnemyPlaceholder {
        struct JumperEnemyPlaceholder__Class* klass;
        MonitorData* monitor;
        struct JumperEnemyPlaceholder__Fields fields;
    };

    struct __declspec(align(8)) JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields {
        float Health;
        float DamageOnTouch;
        int32_t NumberOfExpOrbsToDrop;
        struct DropLootSettings* LootSettings;
        float ChargeRange;
        float JumpHeight;
        float ShortJumpHeight;
        float JumpDistance;
        float Gravity;
        float ChargingDuration;
        float ExplosionDamage;
        int32_t GroundStompDamage;
        bool HasStompExplosion;
    };

    struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings {
        struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class* klass;
        MonitorData* monitor;
        struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields fields;
    };

    struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__StaticFields {
    };

    struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__VTable vtable;
    };

    struct JumperEnemyPlaceholder__VTable {
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

    struct JumperEnemyPlaceholder__StaticFields {
    };

    struct JumperEnemyPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumperEnemyPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumperEnemyPlaceholder__VTable vtable;
    };

    struct __declspec(align(8)) JumpingSootEnemyAnimations__Fields {
        struct TextureAnimationWithTransitions* Respawn;
        struct TextureAnimationWithTransitions* Idle;
        struct TextureAnimationWithTransitions* JumpCharge;
        struct TextureAnimationWithTransitions* Jump;
        struct TextureAnimationWithTransitions* ShortJump;
        struct TextureAnimationWithTransitions* JumpFlip;
        struct TextureAnimationWithTransitions* Fall;
        struct TextureAnimationWithTransitions* Confused;
        struct TextureAnimationWithTransitions* Thrown;
        struct TextureAnimationWithTransitions* Stomped;
    };

    struct JumpingSootEnemyAnimations {
        struct JumpingSootEnemyAnimations__Class* klass;
        MonitorData* monitor;
        struct JumpingSootEnemyAnimations__Fields fields;
    };

    struct JumpingSootEnemyAnimations__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JumpingSootEnemyAnimations__StaticFields {
    };

    struct JumpingSootEnemyAnimations__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpingSootEnemyAnimations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpingSootEnemyAnimations__VTable vtable;
    };

    struct EnemyZone__Fields {
        struct MonoBehaviour__Fields _;
        struct Rect m_bounds;
        struct Rect__Array* m_childBounds;
    };

    struct EnemyZone {
        struct EnemyZone__Class* klass;
        MonitorData* monitor;
        struct EnemyZone__Fields fields;
    };

    struct __declspec(align(8)) List_1_EnemyZone___Fields {
        struct EnemyZone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EnemyZone_ {
        struct List_1_EnemyZone___Class* klass;
        MonitorData* monitor;
        struct List_1_EnemyZone___Fields fields;
    };

    struct EnemyZone__Array {
        struct EnemyZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnemyZone* vector[32];
    };

    struct IEnumerator_1_EnemyZone_ {
        struct IEnumerator_1_EnemyZone___Class* klass;
        MonitorData* monitor;
    };

    struct EnemyZone__Array__VTable {
    };

    struct EnemyZone__Array__StaticFields {
    };

    struct EnemyZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyZone__Array__VTable vtable;
    };

    struct IEnumerator_1_EnemyZone___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_EnemyZone___StaticFields {
    };

    struct IEnumerator_1_EnemyZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_EnemyZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_EnemyZone___VTable vtable;
    };

    struct List_1_EnemyZone___VTable {
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

    struct List_1_EnemyZone___StaticFields {
        struct EnemyZone__Array* _emptyArray;
    };

    struct List_1_EnemyZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_EnemyZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_EnemyZone___VTable vtable;
    };

    struct EnemyZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct EnemyZone__StaticFields {
        struct List_1_EnemyZone_* All;
    };

    struct EnemyZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyZone__VTable vtable;
    };

    struct KamikazeSootEnemy__Fields {
        struct GroundEnemy__Fields _;
        struct KamikazeSootEnemyAnimations* Animations;
        struct KamikazeSootEnemySettings* Settings;
        struct KamikazeSootEnemy_States* State;
        struct RollingMovement* RollingMovement;
        struct SoundSource* IdleSound;
        struct SoundSource* AlertSound;
        struct SoundSource* RollingSound;
        struct SoundSource* StartRollingSound;
        struct SoundSource* HitGroundSound;
        struct GameObject* KamikazeExplosion;
        bool m_timedRespawn;
        bool m_isSelfDestructing;
    };

    struct KamikazeSootEnemy {
        struct KamikazeSootEnemy__Class* klass;
        MonitorData* monitor;
        struct KamikazeSootEnemy__Fields fields;
    };

    struct __declspec(align(8)) KamikazeSootEnemyAnimations__Fields {
        struct TextureAnimationWithTransitions* Respawn;
        struct TextureAnimationWithTransitions* Idle;
        struct TextureAnimationWithTransitions* Rolling;
        struct TextureAnimationWithTransitions* Drop;
        struct TextureAnimationWithTransitions* Run;
        struct TextureAnimationWithTransitions* Alert;
    };

    struct KamikazeSootEnemyAnimations {
        struct KamikazeSootEnemyAnimations__Class* klass;
        MonitorData* monitor;
        struct KamikazeSootEnemyAnimations__Fields fields;
    };

    struct __declspec(align(8)) KamikazeSootEnemySettings__Fields {
        float InRange;
        float OutRange;
        float RollAcceleration;
        float RollDecceleration;
        float MaxRollSpeed;
        float RunAcceleration;
        float MaxRunSpeed;
        float WalkAcceleration;
        float MaxWalkSpeed;
        float Decceleration;
        float Gravity;
        float MaxFallSpeed;
        float AlertDuration;
        float RunDuration;
        float AirDeceleration;
        int32_t ExplosionDamage;
        struct GameObject* RespawnEffect;
    };

    struct KamikazeSootEnemySettings {
        struct KamikazeSootEnemySettings__Class* klass;
        MonitorData* monitor;
        struct KamikazeSootEnemySettings__Fields fields;
    };

    struct __declspec(align(8)) KamikazeSootEnemy_States__Fields {
        struct State_2* Respawn;
        struct KamikazeSootEnemyDropState* Drop;
        struct KamikazeSootEnemyIdleState* Idle;
        struct KamikazeSootEnemyAlertState* Alert;
        struct KamikazeSootEnemyRollingState* Rolling;
    };

    struct KamikazeSootEnemy_States {
        struct KamikazeSootEnemy_States__Class* klass;
        MonitorData* monitor;
        struct KamikazeSootEnemy_States__Fields fields;
    };

} // namespace app
