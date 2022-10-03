namespace app {
    struct CreepDamageReceiver__StaticFields {
    };

    struct CreepDamageReceiver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CreepDamageReceiver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CreepDamageReceiver__VTable vtable;
    };

    struct DamagePrefabSpawner__Fields {
        struct MonoBehaviour__Fields _;
        struct DamageBasedPrefabProvider* DamagePrefab;
        bool UseRotation;
    };

    struct DamagePrefabSpawner {
        struct DamagePrefabSpawner__Class* klass;
        MonitorData* monitor;
        struct DamagePrefabSpawner__Fields fields;
    };

    struct DamagePrefabSpawner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
    };

    struct DamagePrefabSpawner__StaticFields {
    };

    struct DamagePrefabSpawner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamagePrefabSpawner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamagePrefabSpawner__VTable vtable;
    };

    struct DamageReceiverForwarder__Fields {
        struct LegacyEntityDamageReciever__Fields _;
        struct Action_1_Damage_* DamageReceived;
    };

    struct DamageReceiverForwarder {
        struct DamageReceiverForwarder__Class* klass;
        MonitorData* monitor;
        struct DamageReceiverForwarder__Fields fields;
    };

    struct DamageReceiverForwarder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData get_DisableTarget;
        VirtualInvokeData OnRecieveDamage_1;
        VirtualInvokeData StressTestUpdate_1;
        VirtualInvokeData CanDetonateProjectiles;
    };

    struct DamageReceiverForwarder__StaticFields {
    };

    struct DamageReceiverForwarder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageReceiverForwarder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageReceiverForwarder__VTable vtable;
    };

    struct DamageReceiverForwarder_c {
        struct DamageReceiverForwarder_c__Class* klass;
        MonitorData* monitor;
    };

    struct DamageReceiverForwarder_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DamageReceiverForwarder_c__StaticFields {
        struct DamageReceiverForwarder_c* __9;
        struct Action_1_Damage_* __9__2_0;
    };

    struct DamageReceiverForwarder_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageReceiverForwarder_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageReceiverForwarder_c__VTable vtable;
    };

    struct __declspec(align(8)) DamageRecieverSettings__Fields {
        struct DamageBasedPrefabProvider* DamageEffect;
        struct DamageBasedPrefabProvider* DeathEffect;
    };

    struct DamageRecieverSettings {
        struct DamageRecieverSettings__Class* klass;
        MonitorData* monitor;
        struct DamageRecieverSettings__Fields fields;
    };

    struct DamageRecieverSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DamageRecieverSettings__StaticFields {
    };

    struct DamageRecieverSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageRecieverSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageRecieverSettings__VTable vtable;
    };

    struct DamageSoundSource__Fields {
        struct MonoBehaviour__Fields _;
        struct DamageBasedSoundProvider* DamageSound;
        struct SoundPlayer* m_lastDamageSound;
        bool OneSoundOnly;
    };

    struct DamageSoundSource {
        struct DamageSoundSource__Class* klass;
        MonitorData* monitor;
        struct DamageSoundSource__Fields fields;
    };

    struct DamageSoundSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
    };

    struct DamageSoundSource__StaticFields {
    };

    struct DamageSoundSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageSoundSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageSoundSource__VTable vtable;
    };

    struct EnemyStopper__Fields {
        struct MonoBehaviour__Fields _;
        struct Rect m_bounds;
    };

    struct EnemyStopper {
        struct EnemyStopper__Class* klass;
        MonitorData* monitor;
        struct EnemyStopper__Fields fields;
    };

    struct __declspec(align(8)) AllContainer_1_EnemyStopper___Fields {
        struct List_1_EnemyStopper_* m_objects;
    };

    struct AllContainer_1_EnemyStopper_ {
        struct AllContainer_1_EnemyStopper___Class* klass;
        MonitorData* monitor;
        struct AllContainer_1_EnemyStopper___Fields fields;
    };

    struct __declspec(align(8)) List_1_EnemyStopper___Fields {
        struct EnemyStopper__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EnemyStopper_ {
        struct List_1_EnemyStopper___Class* klass;
        MonitorData* monitor;
        struct List_1_EnemyStopper___Fields fields;
    };

    struct EnemyStopper__Array {
        struct EnemyStopper__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnemyStopper* vector[32];
    };

    struct IEnumerator_1_EnemyStopper_ {
        struct IEnumerator_1_EnemyStopper___Class* klass;
        MonitorData* monitor;
    };

    struct EnemyStopper__Array__VTable {
    };

    struct EnemyStopper__Array__StaticFields {
    };

    struct EnemyStopper__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyStopper__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyStopper__Array__VTable vtable;
    };

    struct IEnumerator_1_EnemyStopper___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_EnemyStopper___StaticFields {
    };

    struct IEnumerator_1_EnemyStopper___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_EnemyStopper___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_EnemyStopper___VTable vtable;
    };

    struct List_1_EnemyStopper___VTable {
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

    struct List_1_EnemyStopper___StaticFields {
        struct EnemyStopper__Array* _emptyArray;
    };

    struct List_1_EnemyStopper___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_EnemyStopper___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_EnemyStopper___VTable vtable;
    };

    struct AllContainer_1_EnemyStopper___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AllContainer_1_EnemyStopper___StaticFields {
    };

    struct AllContainer_1_EnemyStopper___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AllContainer_1_EnemyStopper___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AllContainer_1_EnemyStopper___VTable vtable;
    };

    struct EnemyStopper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct EnemyStopper__StaticFields {
        struct AllContainer_1_EnemyStopper_* m_all;
    };

    struct EnemyStopper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyStopper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyStopper__VTable vtable;
    };

    struct EntityControllerSM__Fields {
        struct EntityController__Fields _;
        struct StateMachine_2* StateMachine;
        struct TransitionManager_1* m_transManager;
    };

    struct EntityControllerSM {
        struct EntityControllerSM__Class* klass;
        MonitorData* monitor;
        struct EntityControllerSM__Fields fields;
    };

    struct EntityControllerSM__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData OnNearSeinEnter;
        VirtualInvokeData OnNearSeinExit;
        VirtualInvokeData OnSeinNearStay;
        VirtualInvokeData OnAnimationEnd;
        VirtualInvokeData OnRecieveDamage_1;
        VirtualInvokeData OnSpiritLeached;
    };

    struct EntityControllerSM__StaticFields {
    };

    struct EntityControllerSM__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityControllerSM__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityControllerSM__VTable vtable;
    };

    struct EntityNestedPrefab__Fields {
        struct MonoBehaviour__Fields _;
        struct LegacyEntity* Entity;
        struct GameObject* Prefab;
    };

    struct EntityNestedPrefab {
        struct EntityNestedPrefab__Class* klass;
        MonitorData* monitor;
        struct EntityNestedPrefab__Fields fields;
    };

    struct EntityNestedPrefab__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EntityNestedPrefab__StaticFields {
    };

    struct EntityNestedPrefab__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityNestedPrefab__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityNestedPrefab__VTable vtable;
    };

    struct EntityTargetting_c {
        struct EntityTargetting_c__Class* klass;
        MonitorData* monitor;
    };

    struct EntityTargetting_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EntityTargetting_c__StaticFields {
        struct EntityTargetting_c* __9;
        struct Action* __9__194_0;
    };

    struct EntityTargetting_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityTargetting_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityTargetting_c__VTable vtable;
    };

    struct __declspec(align(8)) GroundEnemy3DState__Fields {
        struct GroundEnemy3D* GroundEnemy3D;
    };

    struct GroundEnemy3DState {
        struct GroundEnemy3DState__Class* klass;
        MonitorData* monitor;
        struct GroundEnemy3DState__Fields fields;
    };

    struct RockyEnemyState__Fields {
        struct GroundEnemy3DState__Fields _;
        struct RockyEnemy* RockyEnemy;
    };

    struct RockyEnemyState {
        struct RockyEnemyState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyState__Fields fields;
    };

    struct RockyEnemyAnticipatingState__Fields {
        struct RockyEnemyState__Fields _;
    };

    struct RockyEnemyAnticipatingState {
        struct RockyEnemyAnticipatingState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyAnticipatingState__Fields fields;
    };

    struct RockyEnemy__Fields {
        struct GroundEnemy3D__Fields _;
        struct PrefabSpawner* SpitEffect;
        struct PrefabSpawner* ProjectileSpawner;
        struct RockyEnemySettings* Settings;
        struct SoundSource* IdleSound;
        struct SoundSource* WalkSound;
        struct SoundSource* RunAwaySound;
        struct SoundSource* AttackSound;
        struct SoundSource* LandSound;
        struct ActionMethod* EnterZoneAction;
        struct Transform__Array* ActionZones;
        bool m_hasEnteredZone;
        struct RockyEnemy_States* State;
        struct Vector2 _ThrownDirection_k__BackingField;
        float m_timeSinceDamage;
        float m_laserHitTimeout;
        struct Rigidbody* m_rigidbody;
        struct PushPullBlockTest* m_pushBlock;
        float m_capsuleColliderHeight;
        struct IPressurePlate* m_pressurePlate;
    };

    struct RockyEnemy {
        struct RockyEnemy__Class* klass;
        MonitorData* monitor;
        struct RockyEnemy__Fields fields;
    };

    struct __declspec(align(8)) RockyEnemySettings__Fields {
        float Acceleration;
        float Deceleration;
        float WalkSpeed;
        float RunSpeed;
        float AlertDuration;
        float IdleDuration;
        float WalkDuration;
        float SeePlayerDistance;
        float MinChargeDistance;
        float ChargeDuration;
        float ShootingDuration;
        float StunnedDuration;
        float ThrownDrag;
        float ProjectileSpeed;
        float Gravity;
        float ProjectileGravity;
        float ProjectileDamage;
        bool SpreadShot;
        float CloseDistance;
        float OpenDistance;
        float AnticipationDuration;
        float OpeningDuration;
        float ClosingDuration;
        float OnDamageCloseDuration;
        float MinimumClosedDuration;
        float TurnToEnemyTimeOffsetSinceOpening;
        float AlmostStillSensitivity;
        struct ActionMethod* OnClosedDamageAction;
        struct ActionMethod* OnClosedDeathAction;
        struct ActionMethod* OnOpenDamageAction;
        struct ActionMethod* OnOpenDeathAction;
    };

    struct RockyEnemySettings {
        struct RockyEnemySettings__Class* klass;
        MonitorData* monitor;
        struct RockyEnemySettings__Fields fields;
    };

    struct __declspec(align(8)) RockyEnemy_States__Fields {
        struct RockyEnemyIdleState* Idle;
        struct RockyEnemyWalkState* Walk;
        struct RockyEnemyChargingState* Charging;
        struct RockyEnemyShootingState* Shooting;
        struct RockyEnemyAnticipatingState* Anticipating;
        struct RockyEnemyClosingState* Closing;
        struct RockyEnemyClosedState* Closed;
        struct RockyEnemyOpeningState* Opening;
        struct RockyEnemyThrownState* Thrown;
    };

    struct RockyEnemy_States {
        struct RockyEnemy_States__Class* klass;
        MonitorData* monitor;
        struct RockyEnemy_States__Fields fields;
    };

    struct RockyEnemyIdleState__Fields {
        struct RockyEnemyState__Fields _;
    };

    struct RockyEnemyIdleState {
        struct RockyEnemyIdleState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyIdleState__Fields fields;
    };

    struct RockyEnemyWalkState__Fields {
        struct RockyEnemyState__Fields _;
    };

    struct RockyEnemyWalkState {
        struct RockyEnemyWalkState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyWalkState__Fields fields;
    };

    struct RockyEnemyChargingState__Fields {
        struct RockyEnemyState__Fields _;
    };

    struct RockyEnemyChargingState {
        struct RockyEnemyChargingState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyChargingState__Fields fields;
    };

    struct RockyEnemyShootingState__Fields {
        struct RockyEnemyState__Fields _;
    };

    struct RockyEnemyShootingState {
        struct RockyEnemyShootingState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyShootingState__Fields fields;
    };

    struct RockyEnemyClosingState__Fields {
        struct RockyEnemyState__Fields _;
        struct PushPullBlockTest* m_pushBlock;
    };

    struct RockyEnemyClosingState {
        struct RockyEnemyClosingState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyClosingState__Fields fields;
    };

    struct PushPullBlockTest__Fields {
        struct MonoBehaviour__Fields _;
        struct LegacyAnimator__Array* HighlightAnimators;
        struct SoundSource* HighlightSound;
        struct SoundSource* DehighlightSound;
        float MoveSpeedMultiplier;
        bool KeepAwake;
        bool IsBashable;
        bool StrongFrictionWhenReleased;
        bool CanBeGrabbed;
        struct PhysicMaterial* PushPullMaterial;
        struct PhysicMaterial* PushPullMaterialMoving;
        struct PlatformMovement* PlatformMovement;
        struct Rigidbody* m_rigidbody;
        struct Transform* m_transform;
        struct List_1_UnityEngine_Collider_* m_colliders;
        struct Vector3 m_originalPosition;
        float m_ignoreCollisionRemainingTime;
        int32_t m_angleFixHack;
        bool _IsGrabbed_k__BackingField;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct IPressurePlate* m_pressurePlate;
    };

    struct PushPullBlockTest {
        struct PushPullBlockTest__Class* klass;
        MonitorData* monitor;
        struct PushPullBlockTest__Fields fields;
    };

    struct RockyEnemyClosedState__Fields {
        struct RockyEnemyState__Fields _;
    };

    struct RockyEnemyClosedState {
        struct RockyEnemyClosedState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyClosedState__Fields fields;
    };

    struct RockyEnemyOpeningState__Fields {
        struct RockyEnemyState__Fields _;
        struct PushPullBlockTest* m_pushBlock;
        bool m_colliderAdjusted;
    };

    struct RockyEnemyOpeningState {
        struct RockyEnemyOpeningState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyOpeningState__Fields fields;
    };

    struct RockyEnemyThrownState__Fields {
        struct RockyEnemyState__Fields _;
        struct Rigidbody* m_rigidbody;
    };

    struct RockyEnemyThrownState {
        struct RockyEnemyThrownState__Class* klass;
        MonitorData* monitor;
        struct RockyEnemyThrownState__Fields fields;
    };

    struct RockyEnemySettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RockyEnemySettings__StaticFields {
    };

    struct RockyEnemySettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemySettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemySettings__VTable vtable;
    };

    struct RockyEnemyIdleState__VTable {
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

    struct RockyEnemyIdleState__StaticFields {
    };

    struct RockyEnemyIdleState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyIdleState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyIdleState__VTable vtable;
    };

    struct RockyEnemyWalkState__VTable {
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

    struct RockyEnemyWalkState__StaticFields {
    };

    struct RockyEnemyWalkState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyWalkState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyWalkState__VTable vtable;
    };

    struct RockyEnemyChargingState__VTable {
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

    struct RockyEnemyChargingState__StaticFields {
    };

    struct RockyEnemyChargingState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyChargingState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyChargingState__VTable vtable;
    };

    struct RockyEnemyShootingState__VTable {
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

    struct RockyEnemyShootingState__StaticFields {
    };

    struct RockyEnemyShootingState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyShootingState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyShootingState__VTable vtable;
    };

    struct PushPullBlockTest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsGrabbable;
        VirtualInvokeData get_IsGrabbed;
        VirtualInvokeData OnPushOrPull;
        VirtualInvokeData OnGrabbed;
        VirtualInvokeData OnReleased;
        VirtualInvokeData OnHighlight;
        VirtualInvokeData OnDehighlight;
        VirtualInvokeData CanBeBashed;
        VirtualInvokeData PushableSpeedRatio;
        VirtualInvokeData GetPosition;
        VirtualInvokeData SetPosition;
        VirtualInvokeData GetRigidbody;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData ICanActivatePressurePlate_OnPressed;
        VirtualInvokeData ICanActivatePressurePlate_OnReleased;
    };

    struct PushPullBlockTest__StaticFields {
    };

    struct PushPullBlockTest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PushPullBlockTest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PushPullBlockTest__VTable vtable;
    };

    struct RockyEnemyClosingState__VTable {
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

    struct RockyEnemyClosingState__StaticFields {
    };

    struct RockyEnemyClosingState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyClosingState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyClosingState__VTable vtable;
    };

    struct RockyEnemyClosedState__VTable {
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

    struct RockyEnemyClosedState__StaticFields {
    };

    struct RockyEnemyClosedState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyClosedState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyClosedState__VTable vtable;
    };

    struct RockyEnemyOpeningState__VTable {
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

    struct RockyEnemyOpeningState__StaticFields {
    };

    struct RockyEnemyOpeningState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyOpeningState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyOpeningState__VTable vtable;
    };

    struct RockyEnemyThrownState__VTable {
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

    struct RockyEnemyThrownState__StaticFields {
    };

    struct RockyEnemyThrownState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemyThrownState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemyThrownState__VTable vtable;
    };

    struct RockyEnemy_States__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RockyEnemy_States__StaticFields {
    };

    struct RockyEnemy_States__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockyEnemy_States__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockyEnemy_States__VTable vtable;
    };

    struct RockyEnemy__VTable {
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
        VirtualInvokeData OnPressed;
        VirtualInvokeData OnReleased;
    };

} // namespace app
