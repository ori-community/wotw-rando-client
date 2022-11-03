namespace app {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Fields fields;
    };

    struct BlockDamageInterruptionHandler__Array {
        struct BlockDamageInterruptionHandler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BlockDamageInterruptionHandler* vector[32];
    };

    struct IEnumerator_1_Moon_BlockDamageInterruptionHandler_ {
        struct IEnumerator_1_Moon_BlockDamageInterruptionHandler___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Moon_BlockDamageInterruptionHandler_ {
        struct ICollection_1_Moon_BlockDamageInterruptionHandler___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_ {
        struct MoonTimeline* key;
        struct BlockDamageInterruptionHandler* value;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Boxed {
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_ fields;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array {
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_ {
        struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_BlockDamageInterruptionHandler_ {
        struct IEnumerable_1_Moon_BlockDamageInterruptionHandler___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) RammingBehaviour_States__Fields {
        struct RammingBehaviour_RamState* ChargeSlamState;
        struct RammingBehaviour_RamState* TurnChargeSlamState;
        struct RammingBehaviour_RamState* ChaseState;
        struct RammingBehaviour_RamState* ExhaustState;
        struct RammingBehaviour_RamState* KnockbackState;
    };

    struct RammingBehaviour_States {
        struct RammingBehaviour_States__Class* klass;
        MonitorData* monitor;
        struct RammingBehaviour_States__Fields fields;
    };

    struct __declspec(align(8)) RammingBehaviour_RamState__Fields {
        struct RammingBehaviour* m_behaviour;
        struct SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_* m_vfxHandler;
    };

    struct RammingBehaviour_RamState {
        struct RammingBehaviour_RamState__Class* klass;
        MonitorData* monitor;
        struct RammingBehaviour_RamState__Fields fields;
    };

    struct __declspec(align(8)) SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects___Fields {
        struct MaterialBasedHornBugEffectsMap* m_effectMap;
        struct Func_2_HornBugMovementEffects_UnityEngine_GameObject_* m_getEffectsPrefab;
        struct Transform* m_vfxHodler;
        struct String* m_stateName;
        struct ParticleSystem* m_currentlyPlayingEffect;
        SurfaceMaterialType__Enum m_currentlyPlayingEffectSurface;

        struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_* m_effects;
        struct HashSet_1_SurfaceMaterialType_* m_customSurfaces;
    };

    struct SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_ {
        struct SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects___Class* klass;
        MonitorData* monitor;
        struct SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects___Fields fields;
    };

    struct MaterialBasedHornBugEffectsMap__Fields {
        struct MaterialBasedResourceMap__Fields _;
        struct HornBugMovementEffects* DefaultMovementEffects;
        struct MaterialBasedHornBugMovementEffects__Array* MovementEffects;
        struct HornBugSlamEffects* DefaultSlamEffects;
        struct MaterialBasedHornBugSlamEffects__Array* SlamEffects;
    };

    struct MaterialBasedHornBugEffectsMap {
        struct MaterialBasedHornBugEffectsMap__Class* klass;
        MonitorData* monitor;
        struct MaterialBasedHornBugEffectsMap__Fields fields;
    };

    struct MaterialBasedHornBugMovementEffects__Fields {
        struct MaterialBasedResourceMapEntry_1_HornBugMovementEffects___Fields _;
    };

    struct MaterialBasedHornBugMovementEffects {
        struct MaterialBasedHornBugMovementEffects__Class* klass;
        MonitorData* monitor;
        struct MaterialBasedHornBugMovementEffects__Fields fields;
    };

    struct MaterialBasedHornBugMovementEffects__Array {
        struct MaterialBasedHornBugMovementEffects__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MaterialBasedHornBugMovementEffects* vector[32];
    };

    struct __declspec(align(8)) HornBugSlamEffects__Fields {
        struct GameObject* SlamChargeSingle;
        struct GameObject* SlamChargeMultiple;
        struct GameObject* SlamChargeMultipleCenter;
        struct GameObject* HitWallVFXEffect;
    };

    struct HornBugSlamEffects {
        struct HornBugSlamEffects__Class* klass;
        MonitorData* monitor;
        struct HornBugSlamEffects__Fields fields;
    };

    struct MaterialBasedResourceMapEntry_1_HornBugSlamEffects___Fields {
        struct MaterialBasedResourceMapEntry__Fields _;
        struct HornBugSlamEffects* Resource;
    };

    struct MaterialBasedResourceMapEntry_1_HornBugSlamEffects_ {
        struct MaterialBasedResourceMapEntry_1_HornBugSlamEffects___Class* klass;
        MonitorData* monitor;
        struct MaterialBasedResourceMapEntry_1_HornBugSlamEffects___Fields fields;
    };

    struct MaterialBasedHornBugSlamEffects__Fields {
        struct MaterialBasedResourceMapEntry_1_HornBugSlamEffects___Fields _;
    };

    struct MaterialBasedHornBugSlamEffects {
        struct MaterialBasedHornBugSlamEffects__Class* klass;
        MonitorData* monitor;
        struct MaterialBasedHornBugSlamEffects__Fields fields;
    };

    struct MaterialBasedHornBugSlamEffects__Array {
        struct MaterialBasedHornBugSlamEffects__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MaterialBasedHornBugSlamEffects* vector[32];
    };

    struct Func_2_HornBugMovementEffects_UnityEngine_GameObject___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_HornBugMovementEffects_UnityEngine_GameObject_ {
        struct Func_2_HornBugMovementEffects_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct Func_2_HornBugMovementEffects_UnityEngine_GameObject___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_SurfaceMaterialType_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_UnityEngine_ParticleSystem_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_UnityEngine_ParticleSystem_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
        struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
        int32_t hashCode;
        int32_t next;
        SurfaceMaterialType__Enum key;

        struct ParticleSystem* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem___Array {
        struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_UnityEngine_ParticleSystem_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_UnityEngine_ParticleSystem___Fields {
        struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_UnityEngine_ParticleSystem___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_UnityEngine_ParticleSystem___Fields {
        struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_UnityEngine_ParticleSystem___Fields fields;
    };

    struct KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
        SurfaceMaterialType__Enum key;

        struct ParticleSystem* value;
    };

    struct KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Boxed {
        struct KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ fields;
    };

    struct KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Array {
        struct KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
        struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HashSet_1_SurfaceMaterialType___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_SurfaceMaterialType___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_SurfaceMaterialType_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_SurfaceMaterialType_ {
        struct HashSet_1_SurfaceMaterialType___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_SurfaceMaterialType___Fields fields;
    };

    struct HashSet_1_T_Slot_SurfaceMaterialType_ {
        int32_t hashCode;
        int32_t next;
        SurfaceMaterialType__Enum value;
    };

    struct HashSet_1_T_Slot_SurfaceMaterialType___Boxed {
        struct HashSet_1_T_Slot_SurfaceMaterialType___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_SurfaceMaterialType_ fields;
    };

    struct HashSet_1_T_Slot_SurfaceMaterialType___Array {
        struct HashSet_1_T_Slot_SurfaceMaterialType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_SurfaceMaterialType_ vector[32];
    };

    struct FlutteringProjectileDropBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonVector3* TargetPosition;
        struct MoonTimeline* FlutteringLoopTimeline;
        struct MoonTimeline* FlutteringTurnTimeline;
        struct EventTriggerAnimator* FlutteringTurnTrigger;
        float MaxSpeed;
        float Acceleration;
        float BrakingDeceleration;
        float MaxSpeedTurningAllowed;
        float FlutteringHeight;
        float FloatingRate;
        float FloatingDistance;
        float FloatingAcceleration;
        float FloatingBrakingDeceleration;
        float FloatingMaxSpeed;
        float DistanceMarginWithAllowedArea;
        struct PrefabSpawner* ProjectilePrefabSpawner;
        float ProjectileDamage;
        DamageWeight__Enum ProjectileDamageWeight;

        float ProjectileDropRateMin;
        float ProjectileDropRateMax;
        float ProjectileInitialSpeed;
        struct Transform* ProjectileOrigin;
        struct MoonTimeline* ShootTimeline;
        float FlutteringEnduranceDuration;
        float MaxTimeFlyingOverCharacter;
        float FlyOverCheckRangeX;
        struct CharacterPlatformMovement* m_platformMovement;
        struct AirEntityMovementProcessor* m_airMovement;
        struct AirEntityLocomotion* m_airLocomotion;
        struct MoonTimeline* m_currentTimeline;
        float m_flyOverTimer;
        float m_projectileTimer;
        float m_behaviourTimer;
        float m_initialPositionY;
        struct Vector3 m_brakingPos;
    };

    struct FlutteringProjectileDropBehaviour {
        struct FlutteringProjectileDropBehaviour__Class* klass;
        MonitorData* monitor;
        struct FlutteringProjectileDropBehaviour__Fields fields;
    };

    struct FlutteringSlamBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonTimeline* StartTimeline;
        struct MoonTimeline* LoopTimeline;
        struct MoonTimeline* EndTimeline;
        struct RootMotionProcessorData* StartRootMotion;
        struct RootMotionProcessorData* EndRootMotion;
        float StunDuration;
        float DescentSpeed;
        int32_t SlamChargeDamage;
        DamageWeight__Enum SlamChargeWeight;

        struct StateMachine_2* m_stateMachine;
        struct FlutteringSlamBehaviour_States* m_states;
        struct MoonTimeline* m_currentTimeline;
        struct AirEntityLocomotion* m_airLocomotion;
        struct GroundEntityLocomotion* m_groundLocomotion;
    };

    struct FlutteringSlamBehaviour {
        struct FlutteringSlamBehaviour__Class* klass;
        MonitorData* monitor;
        struct FlutteringSlamBehaviour__Fields fields;
    };

    struct __declspec(align(8)) FlutteringSlamBehaviour_States__Fields {
        struct FlutteringSlamBehaviour_FlutterSlamState* StartState;
        struct FlutteringSlamBehaviour_FlutterSlamState* LoopState;
        struct FlutteringSlamBehaviour_FlutterSlamState* EndState;
    };

    struct FlutteringSlamBehaviour_States {
        struct FlutteringSlamBehaviour_States__Class* klass;
        MonitorData* monitor;
        struct FlutteringSlamBehaviour_States__Fields fields;
    };

    struct __declspec(align(8)) FlutteringSlamBehaviour_FlutterSlamState__Fields {
        struct FlutteringSlamBehaviour* m_behaviour;
    };

    struct FlutteringSlamBehaviour_FlutterSlamState {
        struct FlutteringSlamBehaviour_FlutterSlamState__Class* klass;
        MonitorData* monitor;
        struct FlutteringSlamBehaviour_FlutterSlamState__Fields fields;
    };

    enum class EnemyShield_State__Enum : int32_t {
        NoShield = 0x00000000,
        Protecting = 0x00000001,
        NotProtecting = 0x00000002,
    };

    struct EnemyShield_State__Enum__Boxed {
        struct EnemyShield_State__Enum__Class* klass;
        MonitorData* monitor;
        EnemyShield_State__Enum value;
    };

    enum class EnemyShield_ShieldForwardMode__Enum : int32_t {
        Right = 0x00000000,
        OriginRight = 0x00000001,
        OriginForward = 0x00000002,
    };

    struct EnemyShield_ShieldForwardMode__Enum__Boxed {
        struct EnemyShield_ShieldForwardMode__Enum__Class* klass;
        MonitorData* monitor;
        EnemyShield_ShieldForwardMode__Enum value;
    };

    struct EnemyShield__Fields {
        struct MonoBehaviour__Fields _;
        struct Action* OnShieldShatteredEvent;
        struct EnemyEntity* Entity;
        struct List_1_UnityEngine_GameObject_* ModelsActiveOnlyWithShield;
        struct GameObject* HitBox;
        struct MoonTimeline* ShatterShieldEffectTimeline;
        struct Transform* ShatterEffectSpawnLocation;
        EnemyShield_State__Enum InitialState;

        struct Transform* ProtectionConeOrigin;
        EnemyShield_ShieldForwardMode__Enum ShieldForward;

        float ProtectionConeLookAngle;
        float ProtectionConeAngle;
        bool ApplyLookDirectionToShieldDirection;
        bool ApplyLookDirectionToShieldRotation;
        float DrawGizmoRadius;
        float ShieldDirectionTreshold;
        struct GroundEntityLocomotion* m_locomotion;
        EnemyShield_State__Enum m_state;

        struct List_1_EntityTargetting_* m_arrowReflectingColliders;
        struct SphereCollider* ImpenetrableRange;
        struct EntityTargetting* m_entityTargetting;
        struct DamageReceiver* m_damageReceiver;
        struct DamageDealer* m_damageDealer;
        float m_sqrShieldDirectionTreshold;
        struct Vector2 m_fallbackShieldDirection;
    };

    struct EnemyShield {
        struct EnemyShield__Class* klass;
        MonitorData* monitor;
        struct EnemyShield__Fields fields;
    };

    struct __declspec(align(8)) List_1_EntityTargetting___Fields {
        struct EntityTargetting__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EntityTargetting_ {
        struct List_1_EntityTargetting___Class* klass;
        MonitorData* monitor;
        struct List_1_EntityTargetting___Fields fields;
    };

    struct EntityTargetting__Array {
        struct EntityTargetting__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityTargetting* vector[32];
    };

    struct IEnumerator_1_EntityTargetting_ {
        struct IEnumerator_1_EntityTargetting___Class* klass;
        MonitorData* monitor;
    };

    struct DamageWeightMask__Enum__VTable {
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

    struct DamageWeightMask__Enum__StaticFields {
    };

    struct DamageWeightMask__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageWeightMask__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageWeightMask__Enum__VTable vtable;
    };

    struct Action_1_DamageWeightMask___VTable {
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

    struct Action_1_DamageWeightMask___StaticFields {
    };

    struct Action_1_DamageWeightMask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_DamageWeightMask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_DamageWeightMask___VTable vtable;
    };

    struct BlockDamageInterruption__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
    };

    struct BlockDamageInterruption__StaticFields {
    };

    struct BlockDamageInterruption__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockDamageInterruption__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockDamageInterruption__VTable vtable;
    };

    struct BlockDamageInterruption__Array__VTable {
    };

    struct BlockDamageInterruption__Array__StaticFields {
    };

    struct BlockDamageInterruption__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockDamageInterruption__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockDamageInterruption__Array__VTable vtable;
    };

    struct BlockDamageInterruptionHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnDamageBlockingStart;
        VirtualInvokeData OnDamageBlockingEnd;
    };

    struct BlockDamageInterruptionHandler__StaticFields {
    };

    struct BlockDamageInterruptionHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockDamageInterruptionHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockDamageInterruptionHandler__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct BlockDamageInterruptionHandler__Array__VTable {
    };

    struct BlockDamageInterruptionHandler__Array__StaticFields {
    };

    struct BlockDamageInterruptionHandler__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockDamageInterruptionHandler__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockDamageInterruptionHandler__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_BlockDamageInterruptionHandler___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct IEnumerator_1_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct ICollection_1_Moon_BlockDamageInterruptionHandler___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct ICollection_1_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct BlockDamageInterruptionHandler___VTable {
    };

    struct BlockDamageInterruptionHandler___StaticFields {
    };

    struct BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockDamageInterruptionHandler___VTable vtable;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__VTable {
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__StaticFields {
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct IEnumerable_1_Moon_BlockDamageInterruptionHandler___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct IEnumerable_1_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields {
    };

    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___VTable vtable;
    };

    struct MaterialBasedHornBugMovementEffects__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ResourceType;
        VirtualInvokeData get_ResourceObject;
    };

    struct MaterialBasedHornBugMovementEffects__StaticFields {
    };

    struct MaterialBasedHornBugMovementEffects__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MaterialBasedHornBugMovementEffects__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MaterialBasedHornBugMovementEffects__VTable vtable;
    };

    struct MaterialBasedHornBugMovementEffects__Array__VTable {
    };

    struct MaterialBasedHornBugMovementEffects__Array__StaticFields {
    };

    struct MaterialBasedHornBugMovementEffects__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MaterialBasedHornBugMovementEffects__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MaterialBasedHornBugMovementEffects__Array__VTable vtable;
    };

    struct HornBugSlamEffects__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetAllPrefabs;
    };

    struct HornBugSlamEffects__StaticFields {
    };

    struct HornBugSlamEffects__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugSlamEffects__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugSlamEffects__VTable vtable;
    };

    struct MaterialBasedResourceMapEntry_1_HornBugSlamEffects___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ResourceType;
        VirtualInvokeData get_ResourceObject;
    };

} // namespace app
