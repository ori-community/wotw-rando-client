namespace app {
    struct ApplyPhysicalManagerState {
        struct ApplyPhysicalManagerState__Class* klass;
        MonitorData* monitor;
        struct ApplyPhysicalManagerState__Fields fields;
    };

    struct ApplyPhysicalManagerState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

    struct ApplyPhysicalManagerState__StaticFields {
    };

    struct ApplyPhysicalManagerState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ApplyPhysicalManagerState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ApplyPhysicalManagerState__VTable vtable;
    };

    struct BreakableObject__Fields {
        struct MonoBehaviour__Fields _;
        int32_t NumberOfHitsToBreak;
        int32_t m_numberOfHits;
        struct GameObject* ExplosionEffect;
        struct AnimationCurve* ShardsFadeoutCurve;
    };

    struct BreakableObject {
        struct BreakableObject__Class* klass;
        MonitorData* monitor;
        struct BreakableObject__Fields fields;
    };

    struct BreakableObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BreakableObject__StaticFields {
    };

    struct BreakableObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BreakableObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BreakableObject__VTable vtable;
    };

    struct CollisionFilter__Fields {
        struct MonoBehaviour__Fields _;
        struct LayerMask LayersAllowedToCollide;
        struct Collider* m_collider;
    };

    struct CollisionFilter {
        struct CollisionFilter__Class* klass;
        MonitorData* monitor;
        struct CollisionFilter__Fields fields;
    };

    struct CollisionFilter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CollisionFilter__StaticFields {
    };

    struct CollisionFilter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionFilter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionFilter__VTable vtable;
    };

    struct DetachRopeOnStomp__Fields {
        struct MonoBehaviour__Fields _;
        int32_t DetachmentsPerStomp;
        struct AttachToRope__Array* RopeAttachments;
        struct Vector3 _Position_k__BackingField;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct DetachRopeOnStomp {
        struct DetachRopeOnStomp__Class* klass;
        MonitorData* monitor;
        struct DetachRopeOnStomp__Fields fields;
    };

    struct AttachToRope__Array {
        struct AttachToRope__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AttachToRope* vector[32];
    };

    struct AttachToRope__Array__VTable {
    };

    struct AttachToRope__Array__StaticFields {
    };

    struct AttachToRope__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttachToRope__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttachToRope__Array__VTable vtable;
    };

    struct DetachRopeOnStomp__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
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
        VirtualInvokeData CountsTowardsSuperJumpAchievement;
    };

    struct DetachRopeOnStomp__StaticFields {
    };

    struct DetachRopeOnStomp__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DetachRopeOnStomp__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DetachRopeOnStomp__VTable vtable;
    };

    struct ExplodingRigidbody__Fields {
        struct MonoBehaviour__Fields _;
        struct AnimationCurve* ForceOverDistanceCurve;
        float Force;
        float ForceRandom;
        float TorqueRandom;
        bool ExplodeOnStart;
        struct Vector3 ExplodeOnStartDirection;
    };

    struct ExplodingRigidbody {
        struct ExplodingRigidbody__Class* klass;
        MonitorData* monitor;
        struct ExplodingRigidbody__Fields fields;
    };

    struct ExplodingRigidbody__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData OnReceiveContext;
    };

    struct ExplodingRigidbody__StaticFields {
    };

    struct ExplodingRigidbody__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExplodingRigidbody__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExplodingRigidbody__VTable vtable;
    };

    struct ForceBasedFollow__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* Target;
        float FollowTorqueMagnitude;
        float FollowTorqueXMagnitude;
        float FollowTorqueYMagnitude;
        float FollowForceMagnitude;
        float MinAngleDifference;
        bool SupportOppositeRotation;
    };

    struct ForceBasedFollow {
        struct ForceBasedFollow__Class* klass;
        MonitorData* monitor;
        struct ForceBasedFollow__Fields fields;
    };

    struct ForceBasedFollow__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ForceBasedFollow__StaticFields {
    };

    struct ForceBasedFollow__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ForceBasedFollow__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ForceBasedFollow__VTable vtable;
    };

    struct InetractionControllerPassthrough__Fields {
        struct MonoBehaviour__Fields _;
        struct RigidbodyInteractionController* interactionController;
    };

    struct InetractionControllerPassthrough {
        struct InetractionControllerPassthrough__Class* klass;
        MonitorData* monitor;
        struct InetractionControllerPassthrough__Fields fields;
    };

    struct RigidbodyInteractionController_InteractionInformation {
        struct Vector3 Normal;
        struct Vector3 Point;
        struct Vector3 RelativeVelocity;
        bool IsPlayer;
        int32_t Layer;
    };

    struct RigidbodyInteractionController_InteractionInformation__Boxed {
        struct RigidbodyInteractionController_InteractionInformation__Class* klass;
        MonitorData* monitor;
        struct RigidbodyInteractionController_InteractionInformation fields;
    };

    struct RigidbodyInteractionController__Fields {
        struct MonoBehaviour__Fields _;
        float MinTimeBetweenInteractions;
        struct RigidbodyInteractionController_InstanciationInteractionSettings__Array* CollisionEnterInstanciation;
        struct RigidbodyInteractionController_InstanciationInteractionSettings__Array* CollisionExitInstanciation;
        bool IncludeCollisionsOnChildren;
        struct RigidbodyInteractionController_SoundInteractionSettings__Array* CollisionEnterSound;
        struct RigidbodyInteractionController_SoundInteractionSettings__Array* CollisionExitSound;
        float m_lastCollisionTime;
        struct RigidbodyInteractionController_InteractionInformation m_lastInteraction;
    };

    struct RigidbodyInteractionController {
        struct RigidbodyInteractionController__Class* klass;
        MonitorData* monitor;
        struct RigidbodyInteractionController__Fields fields;
    };

    enum class RigidbodyInteractionController_InstanciationPositionModes__Enum : int32_t {
        FirstCollisionContactPoint = 0x00000001,
        AllInteractionPoints = 0x00000014,
        ClosestInteractionPoint = 0x0000001e,
    };

    struct RigidbodyInteractionController_InstanciationPositionModes__Enum__Boxed {
        struct RigidbodyInteractionController_InstanciationPositionModes__Enum__Class* klass;
        MonitorData* monitor;
        RigidbodyInteractionController_InstanciationPositionModes__Enum value;
    };

    struct __declspec(align(8)) RigidbodyInteractionController_InstanciationInteractionSettings__Fields {
        float MinCollisionMagnitude;
        struct LayerMask InteractableLayers;
        struct GameObject* CollisionPrefab;
        RigidbodyInteractionController_InstanciationPositionModes__Enum InstanciationPosition;

        struct LocalSpacePointSet* InteractionPoints;
        struct Rect ParticleEmissionRemapping;
        int32_t PrewarmAmount;
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings {
        struct RigidbodyInteractionController_InstanciationInteractionSettings__Class* klass;
        MonitorData* monitor;
        struct RigidbodyInteractionController_InstanciationInteractionSettings__Fields fields;
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings__Array {
        struct RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RigidbodyInteractionController_InstanciationInteractionSettings* vector[32];
    };

    struct __declspec(align(8)) RigidbodyInteractionController_SoundInteractionSettings__Fields {
        float MinCollisionMagnitude;
        struct LayerMask InteractableLayers;
        struct SoundProvider* SoundProvider;
        struct Rect SoundVolumeRemapping;
        struct Event_1* WiseEvent;
        struct RTPC* ImpactRtpc;
    };

    struct RigidbodyInteractionController_SoundInteractionSettings {
        struct RigidbodyInteractionController_SoundInteractionSettings__Class* klass;
        MonitorData* monitor;
        struct RigidbodyInteractionController_SoundInteractionSettings__Fields fields;
    };

    struct RigidbodyInteractionController_SoundInteractionSettings__Array {
        struct RigidbodyInteractionController_SoundInteractionSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RigidbodyInteractionController_SoundInteractionSettings* vector[32];
    };

    struct RigidbodyInteractionController_InstanciationPositionModes__Enum__VTable {
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

    struct RigidbodyInteractionController_InstanciationPositionModes__Enum__StaticFields {
    };

    struct RigidbodyInteractionController_InstanciationPositionModes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController_InstanciationPositionModes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController_InstanciationPositionModes__Enum__VTable vtable;
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings__StaticFields {
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController_InstanciationInteractionSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController_InstanciationInteractionSettings__VTable vtable;
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings__Array__VTable {
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings__Array__StaticFields {
    };

    struct RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController_InstanciationInteractionSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController_InstanciationInteractionSettings__Array__VTable vtable;
    };

    struct RigidbodyInteractionController_SoundInteractionSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RigidbodyInteractionController_SoundInteractionSettings__StaticFields {
    };

    struct RigidbodyInteractionController_SoundInteractionSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController_SoundInteractionSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController_SoundInteractionSettings__VTable vtable;
    };

    struct RigidbodyInteractionController_SoundInteractionSettings__Array__VTable {
    };

    struct RigidbodyInteractionController_SoundInteractionSettings__Array__StaticFields {
    };

    struct RigidbodyInteractionController_SoundInteractionSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController_SoundInteractionSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController_SoundInteractionSettings__Array__VTable vtable;
    };

    struct RigidbodyInteractionController_InteractionInformation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RigidbodyInteractionController_InteractionInformation__StaticFields {
    };

    struct RigidbodyInteractionController_InteractionInformation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController_InteractionInformation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController_InteractionInformation__VTable vtable;
    };

    struct RigidbodyInteractionController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RigidbodyInteractionController__StaticFields {
        struct List_1_UnityEngine_ParticleSystem_* s_particleSystemList;
        struct List_1_UnityEngine_ParticleSystem_* s_particleSystemListB;
    };

    struct RigidbodyInteractionController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController__VTable vtable;
    };

    struct InetractionControllerPassthrough__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InetractionControllerPassthrough__StaticFields {
    };

    struct InetractionControllerPassthrough__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InetractionControllerPassthrough__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InetractionControllerPassthrough__VTable vtable;
    };

    struct RigidbodyInteractionController_SoundInteractionInfo {
        struct RigidbodyInteractionController_SoundInteractionSettings* CollisionSound;
        float ImpactMagnitude;
    };

    struct RigidbodyInteractionController_SoundInteractionInfo__Boxed {
        struct RigidbodyInteractionController_SoundInteractionInfo__Class* klass;
        MonitorData* monitor;
        struct RigidbodyInteractionController_SoundInteractionInfo fields;
    };

    struct RigidbodyInteractionController_SoundInteractionInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RigidbodyInteractionController_SoundInteractionInfo__StaticFields {
    };

    struct RigidbodyInteractionController_SoundInteractionInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInteractionController_SoundInteractionInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInteractionController_SoundInteractionInfo__VTable vtable;
    };

    struct RopeVisualLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* LeftAttachment;
        struct Transform* RightAttachment;
        struct GameObject* RopeGraphic;
        float m_ropeOriginalScale;
    };

    struct RopeVisualLogic {
        struct RopeVisualLogic__Class* klass;
        MonitorData* monitor;
        struct RopeVisualLogic__Fields fields;
    };

    struct RopeVisualLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RopeVisualLogic__StaticFields {
    };

    struct RopeVisualLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RopeVisualLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RopeVisualLogic__VTable vtable;
    };

    struct SpawnPrefabOnAccelerationChange__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* PrefabToSpawn;
        float MinimalAccelerationToSpawn;
        float CooldownTime;
        float EmissionRatioMultiplier;
        int32_t PrewarmAmount;
        bool LimitAmountOfActiveInstance;
        struct InstantiationRecycleHelper* m_recycleHelper;
        struct Vector3 m_previousPosition;
        float m_lastInstanciationTime;
        float m_previousSpeed;
        SuspendableMask__Enum _Mask_k__BackingField;

        bool _IsSuspended_k__BackingField;
    };

    struct SpawnPrefabOnAccelerationChange {
        struct SpawnPrefabOnAccelerationChange__Class* klass;
        MonitorData* monitor;
        struct SpawnPrefabOnAccelerationChange__Fields fields;
    };

    struct SpawnPrefabOnAccelerationChange__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct SpawnPrefabOnAccelerationChange__StaticFields {
    };

    struct SpawnPrefabOnAccelerationChange__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpawnPrefabOnAccelerationChange__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpawnPrefabOnAccelerationChange__VTable vtable;
    };

    struct EntityPlaceholder_c {
        struct EntityPlaceholder_c__Class* klass;
        MonitorData* monitor;
    };

    struct Predicate_1_Moon_Entity___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Predicate_1_Moon_Entity_ {
        struct Predicate_1_Moon_Entity___Class* klass;
        MonitorData* monitor;
        struct Predicate_1_Moon_Entity___Fields fields;
    };

    struct Predicate_1_Moon_Entity___VTable {
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

    struct Predicate_1_Moon_Entity___StaticFields {
    };

    struct Predicate_1_Moon_Entity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Predicate_1_Moon_Entity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Predicate_1_Moon_Entity___VTable vtable;
    };

    struct EntityPlaceholder_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EntityPlaceholder_c__StaticFields {
        struct EntityPlaceholder_c* __9;
        struct Predicate_1_Moon_Entity_* __9__141_0;
        struct Action_1_Damage_* __9__190_0;
        struct Action_1_DamageResult_* __9__190_1;
    };

    struct EntityPlaceholder_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityPlaceholder_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityPlaceholder_c__VTable vtable;
    };

    struct GlobalPlaceholderCountData__Fields {
        struct ScriptableObject__Fields _;
        struct GlobalPlaceholderCountData_Tally__Array* Totals;
    };

    struct GlobalPlaceholderCountData {
        struct GlobalPlaceholderCountData__Class* klass;
        MonitorData* monitor;
        struct GlobalPlaceholderCountData__Fields fields;
    };

    struct GlobalPlaceholderCountData_Tally {
        ScreenshotIcon_EnemyType__Enum Icon;

        int32_t Count;
        struct Int32__Array* DifficultyCount;
        struct Int32__Array* ZoneCount;
    };

    struct GlobalPlaceholderCountData_Tally__Boxed {
        struct GlobalPlaceholderCountData_Tally__Class* klass;
        MonitorData* monitor;
        struct GlobalPlaceholderCountData_Tally fields;
    };

    struct GlobalPlaceholderCountData_Tally__Array {
        struct GlobalPlaceholderCountData_Tally__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GlobalPlaceholderCountData_Tally vector[32];
    };

    struct GlobalPlaceholderCountData_Tally__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GlobalPlaceholderCountData_Tally__StaticFields {
    };

    struct GlobalPlaceholderCountData_Tally__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlobalPlaceholderCountData_Tally__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlobalPlaceholderCountData_Tally__VTable vtable;
    };

    struct GlobalPlaceholderCountData_Tally__Array__VTable {
    };

    struct GlobalPlaceholderCountData_Tally__Array__StaticFields {
    };

    struct GlobalPlaceholderCountData_Tally__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlobalPlaceholderCountData_Tally__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlobalPlaceholderCountData_Tally__Array__VTable vtable;
    };

    struct GlobalPlaceholderCountData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GlobalPlaceholderCountData__StaticFields {
    };

    struct GlobalPlaceholderCountData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlobalPlaceholderCountData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlobalPlaceholderCountData__VTable vtable;
    };

    struct CapsuleShapeCopier__Fields {
        struct MonoBehaviour__Fields _;
        struct CapsuleCollider* CapsuleTarget;
        float ShrinkDistance;
        float m_oldRadius;
        float m_oldHeight;
        float m_oldShrinkDistance;
        struct Vector3 m_oldCenter;
        struct CapsuleCollider* m_capsuleCollider;
    };

    struct CapsuleShapeCopier {
        struct CapsuleShapeCopier__Class* klass;
        MonitorData* monitor;
        struct CapsuleShapeCopier__Fields fields;
    };

    struct CapsuleShapeCopier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CapsuleShapeCopier__StaticFields {
    };

    struct CapsuleShapeCopier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CapsuleShapeCopier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CapsuleShapeCopier__VTable vtable;
    };

    struct Collider___VTable {
    };

    struct Collider___StaticFields {
    };

    struct Collider___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Collider___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Collider___VTable vtable;
    };

    struct DamageDealer___VTable {
    };

    struct DamageDealer___StaticFields {
    };

    struct DamageDealer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageDealer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageDealer___VTable vtable;
    };

    struct __declspec(align(8)) CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct CharacterPlatformMovement* __4__this;
        float position;
        int32_t frames;
        float _startingPosition_5__2;
        int32_t _i_5__3;
    };

    struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224 {
        struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class* klass;
        MonitorData* monitor;
        struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Fields fields;
    };

    struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__VTable {
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

    struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__StaticFields {
    };

    struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__VTable vtable;
    };

    struct CharacterPlatformMovement_c {
        struct CharacterPlatformMovement_c__Class* klass;
        MonitorData* monitor;
    };

    struct CharacterPlatformMovement_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CharacterPlatformMovement_c__StaticFields {
        struct CharacterPlatformMovement_c* __9;
        struct Action_1_MoonControllerColliderHit_* __9__227_0;
        struct Action_1_UnityEngine_Collision_* __9__227_1;
        struct Action* __9__227_2;
        struct Action* __9__227_3;
        struct Action* __9__227_4;
    };

    struct CharacterPlatformMovement_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterPlatformMovement_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterPlatformMovement_c__VTable vtable;
    };

    struct __declspec(align(8)) CharacterPlatformMovementManager__Fields {
        struct List_1_CharacterPlatformMovement_* m_platformMovements;
        struct List_1_EnemyPlatformMovement_* m_lateUpdateMovements;
        struct CharacterPlatformMovement__Array* m_toUpdate;
        struct Boolean__Array* m_shouldContinueUpdate;
        struct CharacterPlatformMovementManager_LateFrameUpdater* m_lateFrameUpdater;
    };

    struct CharacterPlatformMovementManager {
        struct CharacterPlatformMovementManager__Class* klass;
        MonitorData* monitor;
        struct CharacterPlatformMovementManager__Fields fields;
    };

    struct __declspec(align(8)) List_1_CharacterPlatformMovement___Fields {
        struct CharacterPlatformMovement__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CharacterPlatformMovement_ {
        struct List_1_CharacterPlatformMovement___Class* klass;
        MonitorData* monitor;
        struct List_1_CharacterPlatformMovement___Fields fields;
    };

    struct CharacterPlatformMovement__Array {
        struct CharacterPlatformMovement__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CharacterPlatformMovement* vector[32];
    };

    struct IEnumerator_1_CharacterPlatformMovement_ {
        struct IEnumerator_1_CharacterPlatformMovement___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_EnemyPlatformMovement___Fields {
        struct EnemyPlatformMovement__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EnemyPlatformMovement_ {
        struct List_1_EnemyPlatformMovement___Class* klass;
        MonitorData* monitor;
        struct List_1_EnemyPlatformMovement___Fields fields;
    };

    struct EnemyPlatformMovement__Array {
        struct EnemyPlatformMovement__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnemyPlatformMovement* vector[32];
    };

    struct IEnumerator_1_EnemyPlatformMovement_ {
        struct IEnumerator_1_EnemyPlatformMovement___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CharacterPlatformMovementManager_LateFrameUpdater__Fields {
        struct CharacterPlatformMovementManager* _Owner_k__BackingField;
    };

    struct CharacterPlatformMovementManager_LateFrameUpdater {
        struct CharacterPlatformMovementManager_LateFrameUpdater__Class* klass;
        MonitorData* monitor;
        struct CharacterPlatformMovementManager_LateFrameUpdater__Fields fields;
    };

    struct CharacterPlatformMovement__Array__VTable {
    };

    struct CharacterPlatformMovement__Array__StaticFields {
    };

    struct CharacterPlatformMovement__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterPlatformMovement__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterPlatformMovement__Array__VTable vtable;
    };

} // namespace app
