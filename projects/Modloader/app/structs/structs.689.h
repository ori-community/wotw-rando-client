namespace app {
    struct LaserShooterEntityPlaceholder__StaticFields {
    };

    struct LaserShooterEntityPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterEntityPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterEntityPlaceholder__VTable vtable;
    };

    struct LaserShieldCircleSetting__Fields {
        struct MonoBehaviour__Fields _;
        float HealthPoints;
        float ContactDamage;
        float PieceKickbackStrenght;
        float MaxPieceKickbackStrenght;
        float PieceKickbackDampRate;
        struct GameObject* DamageEffectPrefab;
        struct GameObject* DestroyEffectPrefab;
        struct GameObject* RepairEffectPrefab;
        struct GameObject* HeavyDamageEffectPrefab;
        struct GameObject* IdleEffectPrefab;
    };

    struct LaserShieldCircleSetting {
        struct LaserShieldCircleSetting__Class* klass;
        MonitorData* monitor;
        struct LaserShieldCircleSetting__Fields fields;
    };

    struct LaserShieldCircleSetting__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LaserShieldCircleSetting__StaticFields {
    };

    struct LaserShieldCircleSetting__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShieldCircleSetting__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShieldCircleSetting__VTable vtable;
    };

    struct LaserShieldDamageReceiver_FollowingEffect {
        struct GameObject* GameObject;
        struct MoonTimeline* Timeline;
        struct UberTransformFollow* Follower;
    };

    struct LaserShieldDamageReceiver_FollowingEffect__Boxed {
        struct LaserShieldDamageReceiver_FollowingEffect__Class* klass;
        MonitorData* monitor;
        struct LaserShieldDamageReceiver_FollowingEffect fields;
    };

    struct LaserShieldDamageReceiver__Fields {
        struct DamageReceiver__Fields _;
        struct LaserShieldCircleSetting* Settings;
        struct LaserShieldRotationController* ShieldController;
        struct DamageTextSpawner* DamageText;
        struct DamageDealer* ContactDamage;
        struct MoonTimeline* HitFlashTimeline;
        float LocalInitialAngle;
        int32_t CircleIndex;
        int32_t PieceModelIndex;
        float m_hp;
        bool m_isDestoyed;
        struct Vector3 m_anchorLocalPosition;
        struct Quaternion m_anchorLocalRotation;
        struct LaserShieldDamageReceiver_FollowingEffect m_heavilyDamagedEffect;
        bool m_initialized;
        struct List_1_UnityEngine_MeshRenderer_* m_meshes;
        struct List_1_LaserShieldDamageReceiver_FollowingEffect_* m_idleEffects;
        struct Vector3 _IndividualHitLocalPositionOffset_k__BackingField;
        struct Vector3 _SharedLocalPositionOffset_k__BackingField;
        struct Vector3 _SharedWorldPositionOffset_k__BackingField;
        int32_t _Index_k__BackingField;
    };

    struct LaserShieldDamageReceiver {
        struct LaserShieldDamageReceiver__Class* klass;
        MonitorData* monitor;
        struct LaserShieldDamageReceiver__Fields fields;
    };

    enum class LaserShieldRotationController_RotationType__Enum : int32_t {
        FullRotation = 0x00000000,
        PingPong = 0x00000001,
        Manual = 0x00000002,
    };

    struct LaserShieldRotationController_RotationType__Enum__Boxed {
        struct LaserShieldRotationController_RotationType__Enum__Class* klass;
        MonitorData* monitor;
        LaserShieldRotationController_RotationType__Enum value;
    };

    struct LaserShieldRotationController__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_UnityEngine_Transform_* CirclePivots;
        struct Transform* CorePivot;
        struct LaserShieldCircleSetting* Settings;
        float BaseRotationSpeed;
        float m_defaultRotationSpeedMultiplierTweenSpeed;
        float PingPongInterval;
        LaserShieldRotationController_RotationType__Enum StartingRotationType;

        float ShieldOpeningSize;
        struct LaserShieldPieceProjectile* ProjectilePrefab;
        float ProjectileSpeedForRepair;
        float ProjectileSpeedForAttack;
        LaserShieldRotationController_RotationType__Enum m_currentRotationType;

        float m_rotationSpeedMultiplier;
        float m_rotationDirection;
        float m_timeToPingPong;
        struct List_1_LaserShieldDamageReceiver_* m_shieldPieces;
        bool m_rotateCore;
        bool m_alternateCircleRotations;
        float m_currentMaxPieceProjectileShake;
        bool m_playSoundOnPieceProjectileReturnStart;
        bool m_playSoundOnPieceProjectileShakeStart;
        int32_t m_lastDamageID;
        float m_rotationSpeedMultiplierTweenSpeed;
        float m_targetSpeedMultiplier;
        int32_t AimDirectionCount;
        float CurrentOpeningStrength;
        float PieceKickbackDampRate;
        struct Vector3 _PieceLocalPositionOffset_k__BackingField;
        struct Vector3 _PieceWorldOffset_k__BackingField;
        float _ManualTargetAngle_k__BackingField;
        struct LaserShooterMinibossEntity* _Entity_k__BackingField;
    };

    struct LaserShieldRotationController {
        struct LaserShieldRotationController__Class* klass;
        MonitorData* monitor;
        struct LaserShieldRotationController__Fields fields;
    };

    enum class LaserShieldPieceProjectile_Mode__Enum : int32_t {
        ShootFromShield = 0x00000000,
        ReturnsToShield = 0x00000001,
        StuckInEnvironment = 0x00000002,
    };

    struct LaserShieldPieceProjectile_Mode__Enum__Boxed {
        struct LaserShieldPieceProjectile_Mode__Enum__Class* klass;
        MonitorData* monitor;
        LaserShieldPieceProjectile_Mode__Enum value;
    };

    struct LaserShieldPieceProjectile__Fields {
        struct Projectile__Fields _;
        struct Transform* OscilationPivot;
        struct HealthController* Health;
        float RotationRate;
        float TurningSpeed;
        float TimeToReachFullRotation;
        float InitSpeed;
        float TargetSpeed;
        float SlowDownTime;
        struct AnimationCurve* SlowDownCurve;
        float ReturnInitSpeed;
        float ReturnTargetSpeed;
        float ReturnSlowDownTime;
        struct AnimationCurve* ReturnSlowDownCurve;
        struct Vector2 StuckTimeRange;
        struct Vector2 StuckShakeAmplitude;
        struct Vector2 StuckShakeFrequency;
        struct AnimationCurve* StuckShakeCurve;
        float TargetPositionDistanceToRepair;
        struct List_1_System_Single_* OrbitDistances;
        struct Transform* m_meshesRoot;
        struct LaserShieldPieceProjectile_Ring__Array* m_rings;
        struct MoonTimeline* HitTimeline;
        struct GameObject* ImpactEffectPrefab;
        struct GameObject* DamageEffectPrefab;
        struct GameObject* DestroyEffectPrefab;
        struct Transform* m_target;
        int32_t m_connectedPieceIndex;
        int32_t m_ringIndex;
        int32_t m_pieceModelIndex;
        bool m_initialized;
        float m_initialRotation;
        float m_currentTimeInMode;
        LaserShieldPieceProjectile_Mode__Enum m_mode;

        float m_targetPositionDistanceToRepairSqr;
        float m_prevOscilationStrength;
        struct LaserShieldRotationController* m_shieldController;
        float m_targetStuckTime;
    };

    struct LaserShieldPieceProjectile {
        struct LaserShieldPieceProjectile__Class* klass;
        MonitorData* monitor;
        struct LaserShieldPieceProjectile__Fields fields;
    };

    struct __declspec(align(8)) List_1_LaserShieldPieceProjectile___Fields {
        struct LaserShieldPieceProjectile__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LaserShieldPieceProjectile_ {
        struct List_1_LaserShieldPieceProjectile___Class* klass;
        MonitorData* monitor;
        struct List_1_LaserShieldPieceProjectile___Fields fields;
    };

    struct LaserShieldPieceProjectile__Array {
        struct LaserShieldPieceProjectile__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LaserShieldPieceProjectile* vector[32];
    };

    struct IEnumerator_1_LaserShieldPieceProjectile_ {
        struct IEnumerator_1_LaserShieldPieceProjectile___Class* klass;
        MonitorData* monitor;
    };

    struct ValueWithMaxValue__Fields {
        struct SaveSerialize__Fields _;
        float MaxValue;
        struct Action* ValueChanged;
        float m_value;
        float StartValue;
    };

    struct ValueWithMaxValue {
        struct ValueWithMaxValue__Class* klass;
        MonitorData* monitor;
        struct ValueWithMaxValue__Fields fields;
    };

    struct HealthController__Fields {
        struct ValueWithMaxValue__Fields _;
        struct Action* OnHealthDepletedEvent;
    };

    struct HealthController {
        struct HealthController__Class* klass;
        MonitorData* monitor;
        struct HealthController__Fields fields;
    };

    struct LaserShieldPieceProjectile_Ring {
        struct Transform__Array* Pieces;
    };

    struct LaserShieldPieceProjectile_Ring__Boxed {
        struct LaserShieldPieceProjectile_Ring__Class* klass;
        MonitorData* monitor;
        struct LaserShieldPieceProjectile_Ring fields;
    };

    struct LaserShieldPieceProjectile_Ring__Array {
        struct LaserShieldPieceProjectile_Ring__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LaserShieldPieceProjectile_Ring vector[32];
    };

    struct __declspec(align(8)) List_1_LaserShieldDamageReceiver___Fields {
        struct LaserShieldDamageReceiver__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LaserShieldDamageReceiver_ {
        struct List_1_LaserShieldDamageReceiver___Class* klass;
        MonitorData* monitor;
        struct List_1_LaserShieldDamageReceiver___Fields fields;
    };

    struct LaserShieldDamageReceiver__Array {
        struct LaserShieldDamageReceiver__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LaserShieldDamageReceiver* vector[32];
    };

    struct IEnumerator_1_LaserShieldDamageReceiver_ {
        struct IEnumerator_1_LaserShieldDamageReceiver___Class* klass;
        MonitorData* monitor;
    };

    struct LaserShooterMinibossEntity__Fields {
        struct LaserShooterEntity__Fields _;
        struct DamageReceiver* MainHitBox;
        struct BlockableLaser* MainLaser;
        struct Transform* MainOscilator;
        float ForceDampening;
        float SelfSpringStrenght;
        float MinSpringSpeed;
        float SecondPhaseTriggerTreshold;
        float ThirdPhaseTriggerTreshold;
        struct MoonBool* HasPhaseChanged;
        struct RTPC* WwiseShieldPercentage;
        struct Event_1* WwisePartialRepairStartEvent;
        struct Event_1* WwisePartialRepairStopEvent;
        struct Event_1* WwiseFullRepairStartEvent;
        struct Event_1* WwiseFullRepairStopEvent;
        struct RTPC* WwiseRepairCountPercentage;
        struct Event_1* WwiseShieldAttackPullStartEvent;
        struct Event_1* WwiseShieldAttackHoldStartEvent;
        struct Event_1* WwiseShieldAttackShootStartEvent;
        struct Event_1* WwiseShieldAttackShakeStartEvent;
        struct RTPC* WwiseShieldAttackPiecesShakeStrength;
        struct Event_1* WwiseShieldAttackSuckPiecesBackEvent;
        struct List_1_BlockableLaser_* m_laserBeams;
        struct LaserShooterMinibossPathMover* m_pathMover;
        struct List_1_LaserShooterRockSpawnPoint_* m_rockSpawnPositions;
        struct LaserShieldRotationController* m_shieldController;
        int32_t m_phase;
        struct EntityTargetting* m_targettingComp;
        int32_t m_randomIndex;
        int32_t _CurrentBeamCount_k__BackingField;
        struct Vector3 _AccumulatedForce_k__BackingField;
        struct LaserShooterMinibossPath* _Paths_k__BackingField;
    };

    struct LaserShooterMinibossEntity {
        struct LaserShooterMinibossEntity__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossEntity__Fields fields;
    };

    struct BlockableLaser__Fields {
        struct GuidOwner__Fields _;
        bool OptimizeStaticSetupAndOri;
        float LaserMaxDistance;
        struct LayerMask BlockingLayers;
        struct Vector3 LaserDirection;
        float LaserBeamForce;
        bool CanBeBlockedByEnemies;
        struct LaserBeam* LaserBeam;
        struct Transform* BeamRotationPivot;
        struct DamageOwner* DamageOwner;
        struct RaycastHit__Array* m_hits;
        float LaserActiveOffscreenPadding;
        float BurstSpawnOffcreenPadding;
        float MinScaleToDealDamage;
        float MinScaleToSpawnImpactFX;
        float DamagingRadius;
        bool m_inSand;
        struct MoonTimeline* LoopingVFX;
        struct SoundHost* m_soundHost;
        struct ArtificialSoundHostReference m_laserLoopSoundHost;
        struct ArtificialSoundHostReference m_impactSoundHost;
        uint32_t m_laserLoopEventPlayingID;
        uint32_t m_laserImpactLoopEventPlayingID;
        struct Collider__Array* m_ignoredColliders;
        struct List_1_UnityEngine_Collider_* RuntimeIgnoredColliders;
        struct Collider* m_damageCollider;
        struct Collider* SocketDamageCollider;
        float m_originalScaleX;
        int32_t m_sphereCastClientID;
        bool m_impactFxTriggerEnabled;
        struct List_1_UnityEngine_ParticleSystem_* s_particleSystemList;
        struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_* m_ImpactEffectPerSurface;
        struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_* m_ImpactPointLoopEffectPerSurface;
        struct Vector3 m_transformedLaserDirection;
        struct RaycastHit m_cachedEnvHit;
        bool m_cachedEnvHitValid;
        float _CurrentLaserLength_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct TextureTilingAdjuster__Array* m_laserBeamTilingAdjusters;
        bool m_activated;
        bool m_isSuspended;
        struct SoundPlayer* m_loopSoundPlayer;
        struct Collider* m_previousHitCollider;
        struct Vector3 m_lastImpactPosition;
        struct GameObject* m_lastLaserImpactLoopEffectPrefab;
        struct GameObject* m_laserImpactLoopEffect;
        struct GameObject* m_laserImpactPointLight;
        bool m_wasVisibleOnScreen;
    };

    struct BlockableLaser {
        struct BlockableLaser__Class* klass;
        MonitorData* monitor;
        struct BlockableLaser__Fields fields;
    };

    struct __declspec(align(8)) BlockableLaser_ActivationTimeslicer__Fields {
        struct List_1_BlockableLaser_ActivationTimeslicer_Request_* queue;
    };

    struct BlockableLaser_ActivationTimeslicer {
        struct BlockableLaser_ActivationTimeslicer__Class* klass;
        MonitorData* monitor;
        struct BlockableLaser_ActivationTimeslicer__Fields fields;
    };

    struct __declspec(align(8)) List_1_BlockableLaser_ActivationTimeslicer_Request___Fields {
        struct BlockableLaser_ActivationTimeslicer_Request__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_BlockableLaser_ActivationTimeslicer_Request_ {
        struct List_1_BlockableLaser_ActivationTimeslicer_Request___Class* klass;
        MonitorData* monitor;
        struct List_1_BlockableLaser_ActivationTimeslicer_Request___Fields fields;
    };

    struct BlockableLaser_ActivationTimeslicer_Request {
        bool activate;
        struct BlockableLaser* laser;
        int32_t frame;
    };

    struct BlockableLaser_ActivationTimeslicer_Request__Boxed {
        struct BlockableLaser_ActivationTimeslicer_Request__Class* klass;
        MonitorData* monitor;
        struct BlockableLaser_ActivationTimeslicer_Request fields;
    };

    struct BlockableLaser_ActivationTimeslicer_Request__Array {
        struct BlockableLaser_ActivationTimeslicer_Request__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BlockableLaser_ActivationTimeslicer_Request vector[32];
    };

    struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request_ {
        struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_UnityEngine_Collider_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ {
        struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject_ {
        int32_t hashCode;
        int32_t next;
        struct Collider* key;
        struct GameObject* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Array {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields {
        struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields {
        struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields fields;
    };

    struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ {
        struct Collider* key;
        struct GameObject* value;
    };

    struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Boxed {
        struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ fields;
    };

    struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Array {
        struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ {
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
    };

    struct TextureTilingAdjuster__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 ScaleMultiplier;
        struct List_1_TextureTilingAdjuster_AdjustedTexture_* m_adjustedTextures;
        struct Vector2 m_prevScale;
        struct Renderer* m_renderer;
        int32_t m_frame;
    };

    struct TextureTilingAdjuster {
        struct TextureTilingAdjuster__Class* klass;
        MonitorData* monitor;
        struct TextureTilingAdjuster__Fields fields;
    };

    enum class UberShaderProperty_Texture__Enum : int32_t {
        MainTexture = 0x00000000,
        MaskTexture = 0x00000001,
        MaskTextureExtra = 0x00000002,
        DistortionTexture = 0x00000003,
        DistortionMaskTexture = 0x00000004,
        DistortionExtraTexture = 0x00000005,
        DistortionExtraMaskTexture = 0x00000006,
        MultiplyLayerTexture = 0x00000007,
        MultiplyLayerMaskTexture = 0x00000008,
        MultiplyLayerExtraTexture = 0x00000009,
        MultiplyLayerExtraMaskTexture = 0x0000000a,
        MultiplyLayerThirdTexture = 0x0000000b,
        MultiplyLayerThirdMaskTexture = 0x0000000c,
        DodgeLayerTexture = 0x0000000d,
        AdditiveLayerTexture = 0x0000000e,
        AdditiveLayerMaskTexture = 0x0000000f,
        AdditiveLayerExtraTexture = 0x00000010,
        AdditiveLayerExtraMaskTexture = 0x00000011,
        Textify_TextTexture = 0x00000012,
        WorldMap_MaskA = 0x00000013,
        WorldMap_MaskB = 0x00000014,
        MaskDissolveTexture = 0x00000015,
        WaterFallMaskTexture = 0x00000016,
        DecalLayerTexture = 0x00000017,
        DecalLayerMaskTexture = 0x00000018,
        DirLightMask = 0x00000019,
        DirLightTextureExtra = 0x0000001a,
        CubeReflMask = 0x0000001b,
        LightCanvasTexture = 0x0000001c,
        DynamicLightCanvasTextureA = 0x0000001d,
        MultiplyLayerDistortMaskTexture = 0x0000001e,
        MultiplyLayerDistortDistortTexture = 0x0000001f,
        DodgeLayerMaskTexture = 0x00000020,
        DirLightTexture = 0x00000021,
        EmissivityColorTex = 0x00000022,
        EmissivitySpreadTex = 0x00000023,
        MaskDissolveTextureSecondary = 0x00000024,
        MultiplyLayerDistortTexture = 0x00000025,
        TurbulenceTranslationAnimMask = 0x00000026,
        TurbulenceRotationAnimMask = 0x00000027,
        TurbulenceRotationAnimMask2 = 0x00000028,
        TurbulenceScaleAnimMask = 0x00000029,
        OffsetTexture = 0x0000002a,
        DirLightRoughness = 0x0000002b,
        TotalTextureProperties = 0x0000002c,
    };

    struct UberShaderProperty_Texture__Enum__Boxed {
        struct UberShaderProperty_Texture__Enum__Class* klass;
        MonitorData* monitor;
        UberShaderProperty_Texture__Enum value;
    };

    struct UberShaderProperty_Texture__Enum__Array {
        struct UberShaderProperty_Texture__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        UberShaderProperty_Texture__Enum vector[32];
    };

    struct __declspec(align(8)) List_1_TextureTilingAdjuster_AdjustedTexture___Fields {
        struct TextureTilingAdjuster_AdjustedTexture__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TextureTilingAdjuster_AdjustedTexture_ {
        struct List_1_TextureTilingAdjuster_AdjustedTexture___Class* klass;
        MonitorData* monitor;
        struct List_1_TextureTilingAdjuster_AdjustedTexture___Fields fields;
    };

    struct TextureTilingAdjuster_AdjustedTexture {
        UberShaderProperty_Texture__Enum TextureProperty;

        struct Vector2 OriginaTextureScale;
    };

    struct TextureTilingAdjuster_AdjustedTexture__Boxed {
        struct TextureTilingAdjuster_AdjustedTexture__Class* klass;
        MonitorData* monitor;
        struct TextureTilingAdjuster_AdjustedTexture fields;
    };

    struct TextureTilingAdjuster_AdjustedTexture__Array {
        struct TextureTilingAdjuster_AdjustedTexture__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TextureTilingAdjuster_AdjustedTexture vector[32];
    };

    struct IEnumerator_1_TextureTilingAdjuster_AdjustedTexture_ {
        struct IEnumerator_1_TextureTilingAdjuster_AdjustedTexture___Class* klass;
        MonitorData* monitor;
    };

    struct TextureTilingAdjuster__Array {
        struct TextureTilingAdjuster__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TextureTilingAdjuster* vector[32];
    };

    struct __declspec(align(8)) List_1_BlockableLaser___Fields {
        struct BlockableLaser__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_BlockableLaser_ {
        struct List_1_BlockableLaser___Class* klass;
        MonitorData* monitor;
        struct List_1_BlockableLaser___Fields fields;
    };

    struct BlockableLaser__Array {
        struct BlockableLaser__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BlockableLaser* vector[32];
    };

    struct IEnumerator_1_BlockableLaser_ {
        struct IEnumerator_1_BlockableLaser___Class* klass;
        MonitorData* monitor;
    };

    enum class LaserShooterMinibossPathMover_State__Enum : int32_t {
        Idle = 0x00000000,
        ReturnToCenter = 0x00000001,
        MoveBetweenWaypoints = 0x00000002,
        MoveFromCenterToWaypoint = 0x00000003,
    };

    struct LaserShooterMinibossPathMover_State__Enum__Boxed {
        struct LaserShooterMinibossPathMover_State__Enum__Class* klass;
        MonitorData* monitor;
        LaserShooterMinibossPathMover_State__Enum value;
    };

    struct LaserShooterMinibossPathMover__Fields {
        struct MonoBehaviour__Fields _;
        float MinSpeed;
        float MaxSpeed;
        float AccelerationDiscance;
        struct AnimationCurve* AccelerationCurve;
        struct LaserShooterMinibossEntity* _Entity_k__BackingField;
        struct BaseSpline_SplineIterator* m_splineIterator;
        LaserShooterMinibossPathMover_State__Enum m_state;

        struct LaserShooterMinibossWaypoint* m_targetWaypoint;
        struct LaserShooterMinibossWaypoint* m_currentWaypoint;
        struct Vector3 m_startMovePosition;
        struct Vector3 m_endMovePosition;
        bool _IsAtCenter_k__BackingField;
    };

    struct LaserShooterMinibossPathMover {
        struct LaserShooterMinibossPathMover__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossPathMover__Fields fields;
    };

    struct LaserShooterMinibossWaypoint__Fields {
        struct MonoBehaviour__Fields _;
        struct LaserShooterMinibossWaypoint_Connection* NextPoint;
        struct LaserShooterMinibossWaypoint* PreviousPoint;
    };

    struct LaserShooterMinibossWaypoint {
        struct LaserShooterMinibossWaypoint__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossWaypoint__Fields fields;
    };

    struct __declspec(align(8)) LaserShooterMinibossWaypoint_Connection__Fields {
        struct LaserShooterMinibossWaypoint* Waypoint;
        struct VelocityBezierSplineComponent* Edge;
        float DirectionToConnectedWaypoint;
    };

    struct LaserShooterMinibossWaypoint_Connection {
        struct LaserShooterMinibossWaypoint_Connection__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossWaypoint_Connection__Fields fields;
    };

    struct __declspec(align(8)) List_1_LaserShooterRockSpawnPoint___Fields {
        struct LaserShooterRockSpawnPoint__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LaserShooterRockSpawnPoint_ {
        struct List_1_LaserShooterRockSpawnPoint___Class* klass;
        MonitorData* monitor;
        struct List_1_LaserShooterRockSpawnPoint___Fields fields;
    };

    struct LaserShooterRockSpawnPoint__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* EffectTimeline;
        struct EventTriggerAnimator* SpawnTrigger;
        struct LaserShieldDamageReceiver* m_piece;
        float m_projectileSpeed;
        struct LaserShieldPieceProjectile* m_prefab;
        struct LaserShieldRotationController* m_shieldController;
    };

    struct LaserShooterRockSpawnPoint {
        struct LaserShooterRockSpawnPoint__Class* klass;
        MonitorData* monitor;
        struct LaserShooterRockSpawnPoint__Fields fields;
    };

    struct LaserShooterRockSpawnPoint__Array {
        struct LaserShooterRockSpawnPoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LaserShooterRockSpawnPoint* vector[32];
    };

    struct IEnumerator_1_LaserShooterRockSpawnPoint_ {
        struct IEnumerator_1_LaserShooterRockSpawnPoint___Class* klass;
        MonitorData* monitor;
    };

    struct LaserShooterMinibossPath__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_LaserShooterMinibossWaypoint_* Waypoints;
    };

    struct LaserShooterMinibossPath {
        struct LaserShooterMinibossPath__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossPath__Fields fields;
    };

    struct __declspec(align(8)) List_1_LaserShooterMinibossWaypoint___Fields {
        struct LaserShooterMinibossWaypoint__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LaserShooterMinibossWaypoint_ {
        struct List_1_LaserShooterMinibossWaypoint___Class* klass;
        MonitorData* monitor;
        struct List_1_LaserShooterMinibossWaypoint___Fields fields;
    };

    struct LaserShooterMinibossWaypoint__Array {
        struct LaserShooterMinibossWaypoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LaserShooterMinibossWaypoint* vector[32];
    };

    struct IEnumerator_1_LaserShooterMinibossWaypoint_ {
        struct IEnumerator_1_LaserShooterMinibossWaypoint___Class* klass;
        MonitorData* monitor;
    };

    struct DamageTextSpawner__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct DamageTextSpawner {
        struct DamageTextSpawner__Class* klass;
        MonitorData* monitor;
        struct DamageTextSpawner__Fields fields;
    };

    struct __declspec(align(8)) List_1_UnityEngine_MeshRenderer___Fields {
        struct MeshRenderer__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_MeshRenderer_ {
        struct List_1_UnityEngine_MeshRenderer___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_MeshRenderer___Fields fields;
    };

    struct MeshRenderer__Array {
        struct MeshRenderer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MeshRenderer* vector[32];
    };

    struct IEnumerator_1_UnityEngine_MeshRenderer_ {
        struct IEnumerator_1_UnityEngine_MeshRenderer___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_LaserShieldDamageReceiver_FollowingEffect___Fields {
        struct LaserShieldDamageReceiver_FollowingEffect__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LaserShieldDamageReceiver_FollowingEffect_ {
        struct List_1_LaserShieldDamageReceiver_FollowingEffect___Class* klass;
        MonitorData* monitor;
        struct List_1_LaserShieldDamageReceiver_FollowingEffect___Fields fields;
    };

    struct LaserShieldDamageReceiver_FollowingEffect__Array {
        struct LaserShieldDamageReceiver_FollowingEffect__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LaserShieldDamageReceiver_FollowingEffect vector[32];
    };

    struct IEnumerator_1_LaserShieldDamageReceiver_FollowingEffect_ {
        struct IEnumerator_1_LaserShieldDamageReceiver_FollowingEffect___Class* klass;
        MonitorData* monitor;
    };

    struct LaserShieldRotationController_RotationType__Enum__VTable {
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

    struct LaserShieldRotationController_RotationType__Enum__StaticFields {
    };

    struct LaserShieldRotationController_RotationType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShieldRotationController_RotationType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShieldRotationController_RotationType__Enum__VTable vtable;
    };

    struct LaserShieldPieceProjectile__Array__VTable {
    };

    struct LaserShieldPieceProjectile__Array__StaticFields {
    };

    struct LaserShieldPieceProjectile__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShieldPieceProjectile__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShieldPieceProjectile__Array__VTable vtable;
    };

    struct IEnumerator_1_LaserShieldPieceProjectile___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LaserShieldPieceProjectile___StaticFields {
    };

    struct IEnumerator_1_LaserShieldPieceProjectile___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LaserShieldPieceProjectile___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LaserShieldPieceProjectile___VTable vtable;
    };

    struct List_1_LaserShieldPieceProjectile___VTable {
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

    struct List_1_LaserShieldPieceProjectile___StaticFields {
        struct LaserShieldPieceProjectile__Array* _emptyArray;
    };

    struct List_1_LaserShieldPieceProjectile___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LaserShieldPieceProjectile___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LaserShieldPieceProjectile___VTable vtable;
    };

} // namespace app
