namespace app {
    struct KwolokBossLocomotion__StaticFields {
    };

    struct KwolokBossLocomotion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossLocomotion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossLocomotion__VTable vtable;
    };

    struct KwolokBossButtSlamBehaviour_PositioningState__Fields {
        struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields _;
    };

    struct KwolokBossButtSlamBehaviour_PositioningState {
        struct KwolokBossButtSlamBehaviour_PositioningState__Class* klass;
        MonitorData* monitor;
        struct KwolokBossButtSlamBehaviour_PositioningState__Fields fields;
    };

    struct KwolokBossButtSlamBehaviour_PositioningState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
    };

    struct KwolokBossButtSlamBehaviour_PositioningState__StaticFields {
    };

    struct KwolokBossButtSlamBehaviour_PositioningState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossButtSlamBehaviour_PositioningState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossButtSlamBehaviour_PositioningState__VTable vtable;
    };

    struct KwolokBossButtSlamBehaviour_AttackState__Fields {
        struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields _;
    };

    struct KwolokBossButtSlamBehaviour_AttackState {
        struct KwolokBossButtSlamBehaviour_AttackState__Class* klass;
        MonitorData* monitor;
        struct KwolokBossButtSlamBehaviour_AttackState__Fields fields;
    };

    struct KwolokBossButtSlamBehaviour_AttackState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
    };

    struct KwolokBossButtSlamBehaviour_AttackState__StaticFields {
    };

    struct KwolokBossButtSlamBehaviour_AttackState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossButtSlamBehaviour_AttackState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossButtSlamBehaviour_AttackState__VTable vtable;
    };

    struct CameraTargetsProvider__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct CameraTargetsProvider {
        struct CameraTargetsProvider__Class* klass;
        MonitorData* monitor;
        struct CameraTargetsProvider__Fields fields;
    };

    enum class KwolokBossCameraTargetsProvider_CutoffMode__Enum : int32_t {
        Discard = 0x00000000,
        ClampDistance = 0x00000001,
    };

    struct KwolokBossCameraTargetsProvider_CutoffMode__Enum__Boxed {
        struct KwolokBossCameraTargetsProvider_CutoffMode__Enum__Class* klass;
        MonitorData* monitor;
        KwolokBossCameraTargetsProvider_CutoffMode__Enum value;
    };

    struct KwolokBossCameraTargetsProvider__Fields {
        struct CameraTargetsProvider__Fields _;
        struct KwolokBossEntity* Kwolok;
        struct Transform* KwolokReferenceTransform;
        struct Vector3 KwolokReferenceOffset;
        KwolokBossCameraTargetsProvider_CutoffMode__Enum CutoffLogic;

        struct OriPredictionHelper_Settings* m_oriPredictionSettings;
        struct Vector2 OriPaddingEscape;
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsEscape;
        float KwolokCutoffDistanceEscape;
        struct Vector2 OriPaddingFight;
        struct Transform* GroundPositionFight;
        float KwolokCutoffDistanceFight;
        float MaxGroundDistanceDryPhase;
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsDryPhase;
        float MaxGroundDistanceWaterPhase;
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsWaterPhase;
        struct Vector2 KwolokPaddingDeath;
        struct Vector2 KwolokTargetOffsetDeath;
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsDefeatedPhase;
        float CameraLerpSpeedMultiplierDefeatedPhase;
        struct Vector2 GroundPadding;
        struct Vector2 KwolokPadding;
        float KwolokPositionSmoothTime;
        struct List_1_Moon_CameraTargetSettings_* m_targets;
        struct OriPredictionHelper* m_oriPrediction;
        struct Vector3 m_kwolokSmoothedPosition;
        struct Vector3 m_kwolokPositionDampCurrentSpeed;
        float m_disableTimer;
    };

    struct KwolokBossCameraTargetsProvider {
        struct KwolokBossCameraTargetsProvider__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCameraTargetsProvider__Fields fields;
    };

    struct __declspec(align(8)) OriPredictionHelper_Settings__Fields {
        float OriPredictionTime;
        float OriWorldSpeedSmoothTime;
    };

    struct OriPredictionHelper_Settings {
        struct OriPredictionHelper_Settings__Class* klass;
        MonitorData* monitor;
        struct OriPredictionHelper_Settings__Fields fields;
    };

    struct __declspec(align(8)) KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Fields {
        struct Vector2 ZoomRange;
        struct Vector2 ZoomRangeSwitchAdditive;
        struct Vector2 VerticalPaddings;
        struct Vector2 HorizontalPaddings;
    };

    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings {
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Fields fields;
    };

    struct __declspec(align(8)) OriPredictionHelper__Fields {
        struct OriPredictionHelper_Settings* m_settings;
        struct Vector3 m_oriSmoothedWorldSpeed;
        struct Vector3 m_worldSpeedDampCurrentSpeed;
        struct Vector3 m_oriPredictedPos;
        struct SeinPlaceholder* m_cachedHolder;
    };

    struct OriPredictionHelper {
        struct OriPredictionHelper__Class* klass;
        MonitorData* monitor;
        struct OriPredictionHelper__Fields fields;
    };

    struct CameraTargetsProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetTargets;
        VirtualInvokeData UpdateTargets;
        VirtualInvokeData ModifyZoomRange;
        VirtualInvokeData ModifyPaddings;
        VirtualInvokeData ModifyLerping;
    };

    struct CameraTargetsProvider__StaticFields {
    };

    struct CameraTargetsProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraTargetsProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraTargetsProvider__VTable vtable;
    };

    struct KwolokBossCameraTargetsProvider_CutoffMode__Enum__VTable {
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

    struct KwolokBossCameraTargetsProvider_CutoffMode__Enum__StaticFields {
    };

    struct KwolokBossCameraTargetsProvider_CutoffMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCameraTargetsProvider_CutoffMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCameraTargetsProvider_CutoffMode__Enum__VTable vtable;
    };

    struct OriPredictionHelper_Settings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OriPredictionHelper_Settings__StaticFields {
    };

    struct OriPredictionHelper_Settings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriPredictionHelper_Settings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriPredictionHelper_Settings__VTable vtable;
    };

    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__StaticFields {
    };

    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__VTable vtable;
    };

    struct OriPredictionHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OriPredictionHelper__StaticFields {
    };

    struct OriPredictionHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriPredictionHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriPredictionHelper__VTable vtable;
    };

    struct KwolokBossCameraTargetsProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetTargets;
        VirtualInvokeData UpdateTargets;
        VirtualInvokeData ModifyZoomRange;
        VirtualInvokeData ModifyPaddings;
        VirtualInvokeData ModifyLerping;
    };

    struct KwolokBossCameraTargetsProvider__StaticFields {
    };

    struct KwolokBossCameraTargetsProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCameraTargetsProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCameraTargetsProvider__VTable vtable;
    };

    enum class KwolokBossCannonBehaviour_State__Enum : int32_t {
        Invalid = 0x00000000,
        Positioning = 0x00000001,
        Start = 0x00000002,
        Shoot = 0x00000003,
        End = 0x00000004,
        Done = 0x00000005,
    };

    struct KwolokBossCannonBehaviour_State__Enum__Boxed {
        struct KwolokBossCannonBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        KwolokBossCannonBehaviour_State__Enum value;
    };

    struct KwolokBossCannonBehaviour__Fields {
        struct KwolokBossBaseBehaviour__Fields _;
        struct EventTriggerAnimator* ShootTrigger;
        struct MoonTimeline* StartTimeline;
        struct MoonTimeline* ShootTimeline;
        struct MoonTimeline* EndTimeline;
        struct AnimationCurve* AccelerationMultiplierCurve;
        bool UseAccelerationMultiplierCurve;
        float AccelerationMultiplier;
        float DecelerationMultiplier;
        float MaxMovementSpeed;
        int32_t MaxRepositions;
        struct Transform* ShootPoint;
        struct MoonInt* NumShots;
        struct ProjectileSpawner* Spawner;
        float ProjectileMinFlightTime;
        float ProjectileMaxFlightTime;
        float ProjectileMaxDistance;
        float ProjectileGravity;
        int32_t ProjectileDamage;
        bool ShouldSpawnCreep;
        float MinDistanceBetweenCreep;
        float CreepTime;
        float CreepDamage;
        struct GameObject* CreepPrefab;
        struct List_1_UnityEngine_Vector3_* m_creepPositions;
        struct MoonTimeline* m_currentTimeline;
        bool m_canFinish;
        KwolokBossCannonBehaviour_State__Enum m_state;

        struct List_1_Projectile_* m_shotsFired;
        bool m_shouldCancel;
        struct Vector3 m_cachedVelocity;
        struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
        int32_t m_repositionCount;
        struct Enum__Array* Entries;
    };

    struct KwolokBossCannonBehaviour {
        struct KwolokBossCannonBehaviour__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCannonBehaviour__Fields fields;
    };

    struct ProjectileSpawner__Fields {
        struct MonoBehaviour__Fields _;
        float Speed;
        struct Vector3 Direction;
        float Gravity;
        struct GameObject* Projectile;
        int32_t PrewarmAmount;
        bool IngoreColliders;
        struct Condition_1* ConditionToFire;
        struct List_1_UnityEngine_GameObject_* ParentsOfCollidersToIgnore;
        struct List_1_UnityEngine_Collider_* CollidersToIgnore;
        struct GameObject* Owner;
        struct DamageOwner* DamageOwner;
        bool WaitForProjectileToBeDestroyed;
        struct AudioClip* SpawnSound;
        struct SoundProvider* SpawnSoundProvider;
        float SpawnSoundVolume;
        struct EventTriggerAnimator__Array* SpawnTriggers;
        struct LegacyTimedTrigger* LegacyTimedTrigger;
        struct GameObject* m_lastProjectile;
        struct Transform* m_transform;
        float _TimeSinceLastShot_k__BackingField;
        struct PhysicalSystemManager__Array* WaitForPhysicsManagersToActivate;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct ProjectileSpawner {
        struct ProjectileSpawner__Class* klass;
        MonitorData* monitor;
        struct ProjectileSpawner__Fields fields;
    };

    struct LegacyTimedTrigger__Fields {
        struct SaveSerialize__Fields _;
        float Duration;
        bool Repeat;
        struct ActionMethod* Action;
        struct String* TriggerName;
        struct Component_1* Reciever;
        float StartTime;
        bool Paused;
        float m_time;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct LegacyTimedTrigger {
        struct LegacyTimedTrigger__Class* klass;
        MonitorData* monitor;
        struct LegacyTimedTrigger__Fields fields;
    };

    struct __declspec(align(8)) List_1_Projectile___Fields {
        struct Projectile__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Projectile_ {
        struct List_1_Projectile___Class* klass;
        MonitorData* monitor;
        struct List_1_Projectile___Fields fields;
    };

    struct Projectile__Array {
        struct Projectile__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Projectile* vector[32];
    };

    struct IEnumerator_1_Projectile_ {
        struct IEnumerator_1_Projectile___Class* klass;
        MonitorData* monitor;
    };

    struct LegacyTimedTrigger__VTable {
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
    };

    struct LegacyTimedTrigger__StaticFields {
    };

    struct LegacyTimedTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyTimedTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyTimedTrigger__VTable vtable;
    };

    struct ProjectileSpawner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct ProjectileSpawner__StaticFields {
    };

    struct ProjectileSpawner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProjectileSpawner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProjectileSpawner__VTable vtable;
    };

    struct KwolokBossCannonBehaviour_State__Enum__VTable {
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

    struct KwolokBossCannonBehaviour_State__Enum__StaticFields {
    };

    struct KwolokBossCannonBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCannonBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCannonBehaviour_State__Enum__VTable vtable;
    };

    struct Projectile__Array__VTable {
    };

    struct Projectile__Array__StaticFields {
    };

    struct Projectile__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Projectile__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Projectile__Array__VTable vtable;
    };

    struct IEnumerator_1_Projectile___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Projectile___StaticFields {
    };

    struct IEnumerator_1_Projectile___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Projectile___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Projectile___VTable vtable;
    };

    struct List_1_Projectile___VTable {
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

    struct List_1_Projectile___StaticFields {
        struct Projectile__Array* _emptyArray;
    };

    struct List_1_Projectile___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Projectile___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Projectile___VTable vtable;
    };

    struct KwolokBossCannonBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData IsLocomotionFollowAllowed;
        VirtualInvokeData IsLocomotionStayAtRangeAllowed;
        VirtualInvokeData ModifyPostAttackCooldown;
        VirtualInvokeData ModifyMaxLookAtWeights;
        VirtualInvokeData GetEntries;
        VirtualInvokeData Evaluate;
        VirtualInvokeData get_ShouldSkip;
    };

    struct KwolokBossCannonBehaviour__StaticFields {
    };

    struct KwolokBossCannonBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCannonBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCannonBehaviour__VTable vtable;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour__Fields {
        struct KwolokBossBaseBehaviour__Fields _;
        struct MoonTimeline* KeepWaterLowTimeline;
        struct MoonTimeline* BreakArenaTimeline;
        struct MoonTimeline* HitReactionTimeline;
        struct EventTriggerAnimator* KeepBodyLowWindow;
        struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
        struct StateMachine_2* m_stateMachine;
        struct KwolokBossCleanWaterPhaseStartBehaviour_States* m_states;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour {
        struct KwolokBossCleanWaterPhaseStartBehaviour__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCleanWaterPhaseStartBehaviour__Fields fields;
    };

    struct __declspec(align(8)) KwolokBossCleanWaterPhaseStartBehaviour_States__Fields {
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState* MoveToCenter;
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState* BreakArena;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_States {
        struct KwolokBossCleanWaterPhaseStartBehaviour_States__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCleanWaterPhaseStartBehaviour_States__Fields fields;
    };

    struct __declspec(align(8)) KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Fields {
        struct KwolokBossCleanWaterPhaseStartBehaviour* m_behaviour;
        struct StateMachine_2* m_stateMachine;
        struct KwolokBossCleanWaterPhaseStartBehaviour_States* m_states;
        struct KwolokBossEntity* m_entity;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState {
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Fields fields;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__StaticFields {
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__VTable vtable;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_States__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_States__StaticFields {
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_States__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCleanWaterPhaseStartBehaviour_States__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCleanWaterPhaseStartBehaviour_States__VTable vtable;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData IsLocomotionFollowAllowed;
        VirtualInvokeData IsLocomotionStayAtRangeAllowed;
        VirtualInvokeData ModifyPostAttackCooldown;
        VirtualInvokeData ModifyMaxLookAtWeights;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour__StaticFields {
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCleanWaterPhaseStartBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCleanWaterPhaseStartBehaviour__VTable vtable;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Fields {
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Fields _;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState {
        struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Fields fields;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__StaticFields {
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__VTable vtable;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Fields {
        struct KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Fields _;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState {
        struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class* klass;
        MonitorData* monitor;
        struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Fields fields;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__StaticFields {
    };

    struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__VTable vtable;
    };

    enum class KwolokBossDeathReactionBehaviour_State__Enum : int32_t {
        Invalid = -1,
        Hit = 0x00000000,
        Loop = 0x00000001,
        Escape = 0x00000002,
        Done = 0x00000003,
    };

    struct KwolokBossDeathReactionBehaviour_State__Enum__Boxed {
        struct KwolokBossDeathReactionBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        KwolokBossDeathReactionBehaviour_State__Enum value;
    };

    struct KwolokBossDeathReactionBehaviour__Fields {
        struct EntityReactionBehaviour__Fields _;
        struct MoonTimeline* HitTimeline;
        struct MoonTimeline* LoopTimeline;
        struct MoonTimeline* EscapeTimeline;
        float MaxMovementSpeed;
        struct EventTriggerAnimator* MultiTargetCameraDisabledWindow;
        struct EventTriggerAnimator* MoveAllowedWindow;
        struct CheckpointFunctionality m_checkpoint;
        KwolokBossDeathReactionBehaviour_State__Enum m_currentState;

        struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
        bool m_moveRequestAdded;
    };

    struct KwolokBossDeathReactionBehaviour {
        struct KwolokBossDeathReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct KwolokBossDeathReactionBehaviour__Fields fields;
    };

    struct KwolokBossDeathReactionBehaviour_State__Enum__VTable {
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

    struct KwolokBossDeathReactionBehaviour_State__Enum__StaticFields {
    };

    struct KwolokBossDeathReactionBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokBossDeathReactionBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokBossDeathReactionBehaviour_State__Enum__VTable vtable;
    };

    struct KwolokBossDeathReactionBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData get_RunInParallel;
        VirtualInvokeData get_CanInterruptSelf;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData CanInterrupt;
        VirtualInvokeData HandleReasonToNotInterrupt;
    };

} // namespace app
