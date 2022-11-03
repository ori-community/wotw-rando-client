namespace app {
    struct IEnumerator_1_KeyValuePair_2_Cart_System_Single_ {
        struct IEnumerator_1_KeyValuePair_2_Cart_System_Single___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Cart_ {
        struct IEnumerable_1_Cart___Class* klass;
        MonitorData* monitor;
    };

    struct Rail__Array {
        struct Rail__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Rail* vector[32];
    };

    struct IEnumerator_1_Rail_ {
        struct IEnumerator_1_Rail___Class* klass;
        MonitorData* monitor;
    };

    struct PushPullBlock__Fields {
        struct MonoBehaviour__Fields _;
        bool TakesDamage;
        struct Rigidbody* m_rigidbody;
        struct Vector3 m_originalPosition;
        struct PhysicMaterial* PushPullMaterial;
        struct PhysicMaterial* PushPullMaterialMoving;
        float m_ignoreCollisionRemainingTime;
        struct LegacyAnimator__Array* HighlightAnimators;
        struct SoundSource* HighlightSound;
        struct SoundSource* DehighlightSound;
        bool StrongFrictionWhenReleased;
        float WindMultiplier;
        struct Transform* m_transform;
        struct Collider__Array* m_colliders;
        struct CollisionSoundSource* m_collisionSoundSource;
        struct BaseAnimator* BashHighlight;
        int32_t BashAttackPriority;
        bool KeepAwake;
        int32_t m_angleFixHack;
        bool IsBashable;
        struct ActionMethod* OnBashAction;
        bool CanTeleport;
        float MoveSpeedMultiplier;
        bool CollideWithPlayer;
        bool ManagedByPhysicsManager;
        bool _IsGrabbed_k__BackingField;
        bool m_isSuspended;
        SuspendableMask__Enum m_suspensionMask;

        bool ForceDontRegisterWithSuspensionManager;
        bool m_hasRegisteredWithSuspensionManager;
        bool m_previousCollideWithPlayer;
        struct Action* OnBashEvent;
        struct IPressurePlate* m_pressurePlate;
        struct TrackingExclusions _TrackingExclusions_k__BackingField;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct PushPullBlock {
        struct PushPullBlock__Class* klass;
        MonitorData* monitor;
        struct PushPullBlock__Fields fields;
    };

    struct __declspec(align(8)) AllContainer_1_IPushable___Fields {
        struct List_1_IPushable_* m_objects;
    };

    struct AllContainer_1_IPushable_ {
        struct AllContainer_1_IPushable___Class* klass;
        MonitorData* monitor;
        struct AllContainer_1_IPushable___Fields fields;
    };

    struct __declspec(align(8)) List_1_IPushable___Fields {
        struct IPushable__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IPushable_ {
        struct List_1_IPushable___Class* klass;
        MonitorData* monitor;
        struct List_1_IPushable___Fields fields;
    };

    struct IPushable__Array {
        struct IPushable__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IPushable* vector[32];
    };

    struct IEnumerator_1_IPushable_ {
        struct IEnumerator_1_IPushable___Class* klass;
        MonitorData* monitor;
    };

    struct CollisionSoundSource__Fields {
        struct MonoBehaviour__Fields _;
        struct CollisionBasedSoundProvider* LegacyCollisionSoundProvider;
        struct SoundSource* LegacyContinuousSoundSource;
        struct Event_1* CollisionSound;
        struct RTPC* CollisionSoundRtpc;
        struct Event_1* ContinuousSound;
        struct RTPC* ContinuousSoundRtpc;
        float MinImpulse;
        bool SilenceContinuousRtpc;
        float RtpcDivisor;
        int32_t m_collisionCount;
        struct Rigidbody* m_rigidbody;
        struct Collider* m_collisionReciever;
        struct SoundHost* m_soundHost;
        struct WwiseEventSystem_SoundHandle m_soundHandle;
        float m_contactTimeout;
        float m_contactTime;
        float m_contactLostTime;
    };

    struct CollisionSoundSource {
        struct CollisionSoundSource__Class* klass;
        MonitorData* monitor;
        struct CollisionSoundSource__Fields fields;
    };

    struct IPressurePlate {
        struct IPressurePlate__Class* klass;
        MonitorData* monitor;
    };

    struct CameraLookAheadController__Fields {
        struct MonoBehaviour__Fields _;
        struct Rigidbody* Rigidbody;
        float XWeight;
        float YWeight;
        struct Vector2 MinOffset;
        struct Vector2 MaxOffset;
        float Speed;
        bool m_active;
    };

    struct CameraLookAheadController {
        struct CameraLookAheadController__Class* klass;
        MonitorData* monitor;
        struct CameraLookAheadController__Fields fields;
    };

    struct CartBouncer__Fields {
        struct MonoBehaviour__Fields _;
        struct ActionSequence* BounceAction;
        struct Collider* m_collider;
    };

    struct CartBouncer {
        struct CartBouncer__Class* klass;
        MonitorData* monitor;
        struct CartBouncer__Fields fields;
    };

    enum class RideableTypes__Enum : int32_t {
        Invalid = -1,
        Cart = 0x00000000,
        Ku = 0x00000001,
    };

    struct RideableTypes__Enum__Boxed {
        struct RideableTypes__Enum__Class* klass;
        MonitorData* monitor;
        RideableTypes__Enum value;
    };

    struct __declspec(align(8)) CameraTargetData__Fields {
        struct Vector3 CameraTargetPosition;
        struct Vector2 CameraTargetPadding;
        struct Vector3 CameraInfluencePosition;
        float CameraInfluenceMinDist;
        float CameraInfluenceMaxDist;
    };

    struct CameraTargetData {
        struct CameraTargetData__Class* klass;
        MonitorData* monitor;
        struct CameraTargetData__Fields fields;
    };

    enum class CameraTargetType__Enum : int32_t {
        InterestPoint = 0x00000000,
        GameplayItem = 0x00000001,
        Enemy = 0x00000002,
        NPC = 0x00000003,
    };

    struct CameraTargetType__Enum__Boxed {
        struct CameraTargetType__Enum__Class* klass;
        MonitorData* monitor;
        CameraTargetType__Enum value;
    };

    struct Locomotion__Fields {
        struct MonoBehaviour__Fields _;
        bool UseStateMachine;
        float _TraversalTier_k__BackingField;
        struct Nullable_1_UnityEngine_Vector3_ _ReplacementRegisteredPoint_k__BackingField;
        struct Entity* m_entity;
        bool m_isNPC;
        struct LocomotionContext* m_locomotionContext;
        struct CharacterPlatformMovement* m_platformMovement;
        bool m_hasPlatformMovement;
        struct Rigidbody* m_rigidbody;
        struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* m_locomotionBehaviours;
        struct EntityLocomotionTask* m_currentBehaviour;
        struct Nullable_1_UnityEngine_Vector3_ m_registeredPoint;
        struct Nullable_1_UnityEngine_Vector2_ m_registeredDirection;
        bool m_executingLocomotionBehaviour;
        int32_t m_frameCountForReset;
        struct StateMachine_2* m_stateMachine;
        struct TransitionManager_1* m_transManager;
        struct Dictionary_2_System_Int32_RootMotionProcessor_* m_rootMotionProcessors;
        struct Queue_1_RootMotionProcessor_* m_rootMotionProcessorPool;
        struct Rect m_bounds;
        bool m_isPrewarmed;
    };

    struct Locomotion {
        struct Locomotion__Class* klass;
        MonitorData* monitor;
        struct Locomotion__Fields fields;
    };

    struct __declspec(align(8)) LocomotionContext__Fields {
        struct Locomotion* Locomotion;
    };

    struct LocomotionContext {
        struct LocomotionContext__Class* klass;
        MonitorData* monitor;
        struct LocomotionContext__Fields fields;
    };

    struct __declspec(align(8)) MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
        struct List_1_Moon_BehaviourSystem_EntityLocomotionTask_* m_values;
        struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_* m_typeToValue;
    };

    struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
        struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
        struct EntityLocomotionTask__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct List_1_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
    };

    struct EntityLocomotionTask__Fields {
        struct EntityTask__Fields _;
        int32_t m_FSMStateID;
        struct Locomotion* m_parentLocomotion;
    };

    struct EntityLocomotionTask {
        struct EntityLocomotionTask__Class* klass;
        MonitorData* monitor;
        struct EntityLocomotionTask__Fields fields;
    };

    enum class EntityOwnedInitOrder__Enum : int32_t {
        Default = 0x00000000,
        EntityTasks = 0x00000001,
        LocomotionManagers = 0x00000002,
        ReactionManagers = 0x00000003,
    };

    struct EntityOwnedInitOrder__Enum__Boxed {
        struct EntityOwnedInitOrder__Enum__Class* klass;
        MonitorData* monitor;
        EntityOwnedInitOrder__Enum value;
    };

    struct FrogLocomotionIdleBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* IdleTimeline;
        struct MoonTimeline* IdleEyecandyTimeline;
        int32_t PlayEyeCandyEveryIdleCount;
        int32_t m_idleCount;
        struct MoonTimeline* m_currentTimeline;
    };

    struct FrogLocomotionIdleBehaviour {
        struct FrogLocomotionIdleBehaviour__Class* klass;
        MonitorData* monitor;
        struct FrogLocomotionIdleBehaviour__Fields fields;
    };

    struct EntityLocomotionTask__Array {
        struct EntityLocomotionTask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityLocomotionTask* vector[32];
    };

    struct IEnumerator_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct IEnumerator_1_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct EntityLocomotionTask* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
        struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
        struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
    };

    struct ICollection_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct ICollection_1_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct Type* key;
        struct EntityLocomotionTask* value;
    };

    struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Boxed {
        struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ fields;
    };

    struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array {
        struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
        struct IEnumerable_1_Moon_BehaviourSystem_EntityLocomotionTask___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_RootMotionProcessor___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_RootMotionProcessor_ {
        struct Dictionary_2_System_Int32_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_RootMotionProcessor___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct RootMotionProcessor* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor_ fields;
    };

    struct __declspec(align(8)) RootMotionProcessor__Fields {
        struct RootMotionProcessorData* m_currentConfigData;
        struct CharacterPlatformMovement* m_platformMovement;
        struct MoonAnimator* m_animator;
        float m_gravity;
        struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_* m_motionModifier;
    };

    struct RootMotionProcessor {
        struct RootMotionProcessor__Class* klass;
        MonitorData* monitor;
        struct RootMotionProcessor__Fields fields;
    };

    struct __declspec(align(8)) RootMotionProcessorData__Fields {
        bool UseRootMotionX;
        bool UseRootMotionY;
        bool DisableGravity;
        bool Additive;
        float Multiplier;
        bool UsePerAxisMultiplier;
        struct Vector2 AxisMultiplier;
        bool WorldSpace;
        float lerpSpeed;
    };

    struct RootMotionProcessorData {
        struct RootMotionProcessorData__Class* klass;
        MonitorData* monitor;
        struct RootMotionProcessorData__Fields fields;
    };

    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ {
        struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3___Class* klass;
        MonitorData* monitor;
        struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor___Fields {
        struct Dictionary_2_System_Int32_RootMotionProcessor_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor___Fields {
        struct Dictionary_2_System_Int32_RootMotionProcessor_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor___Fields fields;
    };

    struct RootMotionProcessor__Array {
        struct RootMotionProcessor__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RootMotionProcessor* vector[32];
    };

    struct IEnumerator_1_RootMotionProcessor_ {
        struct IEnumerator_1_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_RootMotionProcessor_ {
        struct ICollection_1_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_RootMotionProcessor_ {
        int32_t key;
        struct RootMotionProcessor* value;
    };

    struct KeyValuePair_2_System_Int32_RootMotionProcessor___Boxed {
        struct KeyValuePair_2_System_Int32_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_RootMotionProcessor_ fields;
    };

    struct KeyValuePair_2_System_Int32_RootMotionProcessor___Array {
        struct KeyValuePair_2_System_Int32_RootMotionProcessor___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_RootMotionProcessor_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_RootMotionProcessor_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_RootMotionProcessor_ {
        struct IEnumerable_1_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Queue_1_RootMotionProcessor___Fields {
        struct RootMotionProcessor__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_RootMotionProcessor_ {
        struct Queue_1_RootMotionProcessor___Class* klass;
        MonitorData* monitor;
        struct Queue_1_RootMotionProcessor___Fields fields;
    };

    struct EntityBehaviourNode__Fields {
        struct BehaviourNode__Fields _;
        struct Entity* m_entity;
    };

    struct EntityBehaviourNode {
        struct EntityBehaviourNode__Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode__Fields fields;
    };

    struct TimelineBehaviourNew__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonTimeline* Timeline;
        BehaviourStatus__Enum m_statusWhenPlaying;

        struct CancelableAnimator* m_cancelable;
        bool shouldBlockWhileTimelineRunning;
        bool StopLocomotionOnEnter;
        bool shouldPauseLocomotion;
        bool canCancel;
    };

    struct TimelineBehaviourNew {
        struct TimelineBehaviourNew__Class* klass;
        MonitorData* monitor;
        struct TimelineBehaviourNew__Fields fields;
    };

    struct CancelableAnimator__Fields {
        struct EventTriggerAnimator__Fields _;
    };

    struct CancelableAnimator {
        struct CancelableAnimator__Class* klass;
        MonitorData* monitor;
        struct CancelableAnimator__Fields fields;
    };

    enum class WaterfallIntersectionMode__Enum : int32_t {
        Bounds = 0x00000000,
        Raycast = 0x00000001,
    };

    struct WaterfallIntersectionMode__Enum__Boxed {
        struct WaterfallIntersectionMode__Enum__Class* klass;
        MonitorData* monitor;
        WaterfallIntersectionMode__Enum value;
    };

    struct GroundEntityLocomotion__Fields {
        struct Locomotion__Fields _;
        float MinimumFallDistance;
        float TargetPositionGroundSnapDistance;
        bool AdjustLookDirectionToGroundAngle;
        struct GroundEntityMovementProcessor* m_groundMovement;
        struct BaseLocomotionTurningBehaviour* TurningBehaviour;
        struct EntityLocomotionTask* IdleBehaviour;
        bool StopWalkingWhenNearLedge;
        struct LocomotionGroundMoveBehaviour* m_movementBehaviour;
        struct LocomotionGroundMoveTimelineBehaviour* m_timelineMovementBehaviour;
        struct Nullable_1_Single_ m_registeredLookDirection;
        bool m_lookDirectionLocked;
        float m_timeTargetIsOnTheSameArea;
        struct EntityFallEvent* m_fallEventCache;
        EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

        int32_t m_requestId;
        int32_t m_standingOnLedgeReqIds;
        int32_t m_standingOnLedgeReqIds2;
        int32_t m_requestIdForward;
        int32_t m_requestIdBackward;
        int32_t m_groundPositionReqId;
    };

    struct GroundEntityLocomotion {
        struct GroundEntityLocomotion__Class* klass;
        MonitorData* monitor;
        struct GroundEntityLocomotion__Fields fields;
    };

    struct __declspec(align(8)) MovementProcessor__Fields {
        struct Vector2 m_targetVelocity;
        bool _AllowFreeRotation_k__BackingField;
    };

    struct MovementProcessor {
        struct MovementProcessor__Class* klass;
        MonitorData* monitor;
        struct MovementProcessor__Fields fields;
    };

    struct EntityWeightData_EntityWeightSettings {
        float Gravity;
        float MaxFallSpeed;
        float GroundAcceleration;
        float AirAcceleration;
        float Deceleration;
        float AirDrag;
        float KickbackMultiplier;
        float KnockupMultiplier;
        float KickbackInputMultiplier;
        struct Vector2 KickbackInputForceClamp;
        float AirHorizontalKnockbackMultiplier;
        float AirComboPullInValue;
        float AirComboPullInDistanceX;
        float AirComboPullInDistanceY;
        float MinForceWhenJuggling;
        float GroundHorizontalKnockbackMultiplier;
        float KickbackBounceOffGroundMultiplier;
        float KnockupMax;
        float KickbackMax;
        float BashForceMultiplier;
        float DeathKickbackMinBoost;
        float DeathKickbackMinMagnitude;
        float DeathKickbackMinUpDirection;
        float DeathKickbackClampMaxMagnitude;
        float DeathOffGroundBounceMultiplier;
        float BashKickbackMultiplier;
        float DrowningDecelerationTime;
        struct AnimationCurve* DrowningDecelerationCurve;
        float InitialMaxDrowningSpeedPerAxis;
        float InitialSpeedMultiplier;
        float TargetDrowningSpeed;
    };

    struct EntityWeightData_EntityWeightSettings__Boxed {
        struct EntityWeightData_EntityWeightSettings__Class* klass;
        MonitorData* monitor;
        struct EntityWeightData_EntityWeightSettings fields;
    };

    struct GroundEntityMovementProcessor__Fields {
        struct MovementProcessor__Fields _;
        float RotationSpeed;
        float RotationLimit;
        float TargetAirRotation;
        float LedgeDetectionDistance;
        float LedgeDetectionOffsetY;
        float LedgeRayDistance;
        struct Transform* FeetTransform;
        struct LayerMask GroundMask;
        bool m_stickToSurfaces;
        bool AllowStickToSurfaceOnlyWhenLocomotionIsActive;
        float NormalRaysSeparation;
        float MaxSurfaceDistance;
        bool ShouldUpdateRotation;
        bool ShouldUpdateRotationInAir;
        float MinFallTimeToAirDrag;
        bool DebugOn;
        struct LayerMask GroundAndKillMask;
        struct LayerMask KillMask;
        int32_t m_gravityDisableCounter;
        struct Entity* m_entity;
        struct CharacterPlatformMovement* m_platformMovement;
        struct ILocomotionTurningHandler* m_turningHandler;
        struct Vector3 m_initFeetOffset;
        struct Transform* m_rotationTransform;
        struct Vector2 m_surfaceAverageNormal;
        struct Rigidbody* m_rigidbody;
        struct Vector3 m_lastPosition;
        struct EntityWeightData_EntityWeightSettings WeightSettings;
        EntityWeightData_EntityWeight__Enum m_entityWeight;

        int32_t m_continueForwardReqId;
        int32_t m_continueBackReqId;
        int32_t m_surfaceNormalsReqId;
        struct RaycastCommand__Array* m_cmds;
        struct RaycastHit__Array* m_hits;
        struct Boolean__Array* m_hitResults;
        int32_t m_willBeNearLedgeReqId;
    };

    struct GroundEntityMovementProcessor {
        struct GroundEntityMovementProcessor__Class* klass;
        MonitorData* monitor;
        struct GroundEntityMovementProcessor__Fields fields;
    };

    struct ILocomotionTurningHandler {
        struct ILocomotionTurningHandler__Class* klass;
        MonitorData* monitor;
    };

    struct BaseLocomotionTurningBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        float _TargetLookDirectionX_k__BackingField;
        struct ILocomotionTurningHandler* m_turningHandler;
        struct Locomotion* m_locomotion;
    };

    struct BaseLocomotionTurningBehaviour {
        struct BaseLocomotionTurningBehaviour__Class* klass;
        MonitorData* monitor;
        struct BaseLocomotionTurningBehaviour__Fields fields;
    };

    struct LocomotionTurningBehaviour__Fields {
        struct BaseLocomotionTurningBehaviour__Fields _;
        bool GreyboxTurn;
        float GreyboxTurnDuration;
        struct SplitTurnAnimation__Array* MirrorAnimations;
        struct SplitTurnAnimation* m_currentTurnAnimation;
        float m_greyboxTurnProgress;
    };

    struct LocomotionTurningBehaviour {
        struct LocomotionTurningBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionTurningBehaviour__Fields fields;
    };

    struct __declspec(align(8)) RangeAnimationEntry__Fields {
        int32_t Priority;
        float BaseMinSpeed;
        float BaseMaxSpeed;
        float ActivationRangeMin;
        float ActivationRangeMax;
        float AnimationSpeed;
        struct RootMotionProcessorData* RootMotion;
    };

    struct RangeAnimationEntry {
        struct RangeAnimationEntry__Class* klass;
        MonitorData* monitor;
        struct RangeAnimationEntry__Fields fields;
    };

    enum class SplitTurnAnimation_State__Enum : int32_t {
        FirstHalf = 0x00000000,
        SecondHalf = 0x00000001,
    };

    struct SplitTurnAnimation_State__Enum__Boxed {
        struct SplitTurnAnimation_State__Enum__Class* klass;
        MonitorData* monitor;
        SplitTurnAnimation_State__Enum value;
    };

    struct SplitTurnAnimation__Fields {
        struct RangeAnimationEntry__Fields _;
        struct MoonTimeline* turningStartNew;
        struct MoonTimeline* turningEndNew;
        struct LegacyTimelineSequence* turningStart;
        struct LegacyTimelineSequence* turningEnd;
        float m_lookDirection;
        SplitTurnAnimation_State__Enum m_state;

        struct ILocomotionTurningHandler* m_locomotion;
        bool m_isDone;
    };

    struct SplitTurnAnimation {
        struct SplitTurnAnimation__Class* klass;
        MonitorData* monitor;
        struct SplitTurnAnimation__Fields fields;
    };

    struct SplitTurnAnimation__Array {
        struct SplitTurnAnimation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SplitTurnAnimation* vector[32];
    };

    struct LocomotionGroundMoveBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        struct Vector3 _TargetPosition_k__BackingField;
        float ArrivalDistance;
        float SlowDownDistance;
        struct LocomotionAnimation__Array* MovementEntries;
        struct LocomotionAnimation__Array* BackwardMovementEntries;
        float MinSpeed;
        float GreyboxMaxSpeed;
        bool GreyboxMovementOn;
        bool AutoTurn;
        bool CanMoveBackwards;
        float m_arrivalDistance;
        float m_slowDownDistance;
        struct LocomotionAnimation* m_currentAnimation;
        struct GroundEntityLocomotion* m_locomotion;
        struct ActiveAnimationHandle m_activeAnimation;
        struct Vector3 m_lastSearchedTargetPosition;
        float m_previousTraversalSpeed;
        bool m_arrivedAtTarget;
        bool m_isMovingBackwards;
        bool m_canReachTarget;
        int32_t m_canReachTargetFrameUpdated;
        bool StopChasingIntoLedgesAndSpikes;
        int32_t m_requestIdForward;
        int32_t m_requestIdBackward;
    };

    struct LocomotionGroundMoveBehaviour {
        struct LocomotionGroundMoveBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionGroundMoveBehaviour__Fields fields;
    };

    struct LocomotionAnimation__Fields {
        struct RangeAnimationEntry__Fields _;
        struct MoonAnimation* ClipAnimation;
        float Distance;
    };

    struct LocomotionAnimation {
        struct LocomotionAnimation__Class* klass;
        MonitorData* monitor;
        struct LocomotionAnimation__Fields fields;
    };

    struct LocomotionAnimation__Array {
        struct LocomotionAnimation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LocomotionAnimation* vector[32];
    };

    struct LocomotionGroundMoveTimelineBehaviour__Fields {
        struct LocomotionGroundMoveBehaviour__Fields _;
        struct LocomotionTimelineAnimation__Array* TimelineMovementEntries;
        struct LocomotionTimelineAnimation__Array* TimelineBackwardMovementEntries;
        struct LocomotionTimelineAnimation* m_currentTimelineAnimation;
        bool m_isTimelinePlaybackPaused;
    };

    struct LocomotionGroundMoveTimelineBehaviour {
        struct LocomotionGroundMoveTimelineBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionGroundMoveTimelineBehaviour__Fields fields;
    };

    struct LocomotionTimelineAnimation__Fields {
        struct RangeAnimationEntry__Fields _;
        struct MoonTimeline* Timeline;
        float Distance;
    };

    struct LocomotionTimelineAnimation {
        struct LocomotionTimelineAnimation__Class* klass;
        MonitorData* monitor;
        struct LocomotionTimelineAnimation__Fields fields;
    };

    struct LocomotionTimelineAnimation__Array {
        struct LocomotionTimelineAnimation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LocomotionTimelineAnimation* vector[32];
    };

    struct __declspec(align(8)) EntityEvent__Fields {
        struct Entity* Entity;
    };

    struct EntityEvent {
        struct EntityEvent__Class* klass;
        MonitorData* monitor;
        struct EntityEvent__Fields fields;
    };

    struct EntityFallEvent__Fields {
        struct EntityEvent__Fields _;
    };

    struct EntityFallEvent {
        struct EntityFallEvent__Class* klass;
        MonitorData* monitor;
        struct EntityFallEvent__Fields fields;
    };

    struct DamageReceiver__Array {
        struct DamageReceiver__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageReceiver* vector[32];
    };

    struct Action_2_Single_Single___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_Single_Single_ {
        struct Action_2_Single_Single___Class* klass;
        MonitorData* monitor;
        struct Action_2_Single_Single___Fields fields;
    };

    struct __declspec(align(8)) List_1_UnityEngine_SkinnedMeshRenderer___Fields {
        struct SkinnedMeshRenderer__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_SkinnedMeshRenderer_ {
        struct List_1_UnityEngine_SkinnedMeshRenderer___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_SkinnedMeshRenderer___Fields fields;
    };

    struct SkinnedMeshRenderer__Array {
        struct SkinnedMeshRenderer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SkinnedMeshRenderer* vector[32];
    };

    struct IEnumerator_1_UnityEngine_SkinnedMeshRenderer_ {
        struct IEnumerator_1_UnityEngine_SkinnedMeshRenderer___Class* klass;
        MonitorData* monitor;
    };

} // namespace app
