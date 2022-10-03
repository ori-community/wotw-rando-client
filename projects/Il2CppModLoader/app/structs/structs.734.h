namespace app {
    struct TentacleDeath {
        struct TentacleDeath__Class* klass;
        MonitorData* monitor;
        struct TentacleDeath__Fields fields;
    };

    struct TentacleEntity__Fields {
        struct EnemyEntity__Fields _;
        struct Transform* head;
        struct Transform* targetPoint;
        struct Transform* targetingCenter;
        struct Transform* feet;
        struct TentaclePhysicsController* physicsController;
        struct CageStructureTool* targetBounds;
        struct GameObject* CriticalDamageEffect;
        float damageForce;
        float ContactDamage;
        DamageWeight__Enum ContactDamageWeight;

        struct FloatAnimationParameter* missParameter;
        struct FloatAnimationParameter* targetingDirectionParameter;
        bool targetingDirectionSnap;
        float targetingDirectionScale;
        struct FloatAnimationParameter* hitSideParameter;
        struct FloatAnimationParameter* TargetDistanceParameter;
        float MaxDistance;
        float MinDistanceForShortAttack;
        bool gonnaMiss;
        bool forceMiss;
        bool targetAtBoundsEdge;
        struct LayerMask DefaultSegmentLayer;
        struct LayerMask DefaultHeadLayer;
        struct TentacleInterestPoint__Array* InterestPoints;
        int32_t m_defaultSegmentLayerInt;
        int32_t m_defaultHeadLayerInt;
        float m_directionParameterValue;
        float m_directionParameterTargetValue;
        float m_distanceParameterValue;
        float m_distanceParameterTargetValue;
        float DirectionSnapCoeff;
        float DirectionSnapSpeed;
        float BaseShotCooldown;
        struct RTPC* UnderWaterRTPC;
        bool m_isUnderWater;
        float m_shotCooldown;
        float m_missParameterValue;
    };

    struct TentacleEntity {
        struct TentacleEntity__Class* klass;
        MonitorData* monitor;
        struct TentacleEntity__Fields fields;
    };

    struct TentaclePhysicsController_RigidBodyPropertiesCache {
        struct Vector3__Array* position;
        struct Quaternion__Array* rotation;
        struct Vector3__Array* velocity;
        struct Vector3__Array* angVelocity;
        struct Single__Array* eulerZ;
    };

    struct TentaclePhysicsController_RigidBodyPropertiesCache__Boxed {
        struct TentaclePhysicsController_RigidBodyPropertiesCache__Class* klass;
        MonitorData* monitor;
        struct TentaclePhysicsController_RigidBodyPropertiesCache fields;
    };

    struct TentacleAnimatedSettings {
        float PositionAlignmentP;
        float PositionAlignmentPCoeff;
        float AngularAlignmentP;
        float ReferenceOverrideForce;
        float AnimationStretching;
        bool AlignmentOff;
        float RigidAlignToAnimation;
        float HeadPositionAlignmentToAnimation;
        float HeadRotationAlignmentToTarget;
        float HeadAlignmentMinDistance;
    };

    struct TentacleAnimatedSettings__Boxed {
        struct TentacleAnimatedSettings__Class* klass;
        MonitorData* monitor;
        struct TentacleAnimatedSettings fields;
    };

    struct TentaclePhysicsController__Fields {
        struct MonoBehaviour__Fields _;
        bool InstanceEnabled;
        struct TentacleEntity* m_tentacleEntity;
        struct Transform__Array* boneTransforms;
        struct Rigidbody__Array* damageReceiverBodies;
        struct Collider__Array* CachedColliders;
        struct Vector3__Array* m_forces;
        struct Vector3__Array* m_torques;
        struct TentaclePhysicsController_RigidBodyPropertiesCache rbCache;
        struct TentacleAnimationPostprocess* animationPostprocess;
        struct Transform* referenceOriginPoint;
        struct Transform* referenceTargetPoint;
        struct Transform* targetPoint;
        struct Transform* jawEnd;
        struct TentacleAnimatedSettings DefaultSettings;
        float CapsuleRadius;
        struct AttachJointSettings* JointSettings;
        struct ConfigurableJoint__Array* CachedJoints;
        struct Vector3__Array* InitialJointAnchors;
        struct Vector3__Array* InitialJointConnectedAnchors;
        struct Vector3__Array* m_stretchedAnchors;
        int32_t Iterations;
        float pressure;
        float waterFriction;
        float startTimeout;
        struct Transform__Array* startTimeoutObjects;
        struct Vector3 ReferenceOverridePosition;
        struct Single__Array* m_initialBoneLengths;
        struct Vector3__Array* m_reprojectedPositions;
        struct Rigidbody* headRigidbody;
        float headPositionAlignmentToAnimation;
        struct Vector3 m_startPos;
        struct Vector3 m_targetPos;
        struct Vector3 m_referenceTangent;
        struct Vector3 m_referenceNormal;
        struct Vector3 m_targetTangent;
        struct Vector3 m_targetNormal;
        float m_targetTangentScaling;
        float m_headTargetAngle;
        bool m_headSticked;
        struct Vector3 m_headStickPosition;
        float m_headStickAngle;
        struct Vector3 m_LockedReferencePosition;
        struct Vector3 m_oldReferenceTarget;
        struct Vector3 m_referenceTarget;
        bool attachToPhysics;
        struct AttachJointSettings* stickSettings;
        float physicsUnstickDelay;
        float stickPushForce;
        float stickedSpeedLimit;
        float stickedAngularFrictionK;
        float stickDepth;
        struct TentacleInterestPoint* m_interestPoint;
        float m_ignoreStickCollisionsDelay;
        struct AnimationCurve* kickbackCurve;
        struct Vector3 m_kickbackVector;
        float kickbackHeadDistance;
        float kickbackSegmentDistance;
        float kickbackSegmentForce;
        float m_kickbackTime;
        int32_t m_kickbackJoint;
        struct Single__Array* m_kickbackCoeffs;
        float m_unStickTime;
        struct Transform* m_stickTransform;
        struct Vector3 m_stickAnchor;
        struct Rigidbody* m_stickRigidbody;
        struct ConfigurableJoint* m_stickJoint;
        struct Collider__Array* m_stickColliders;
        bool m_activated1;
        struct WaterZone* m_water;
        struct TentacleAnimatedSettings CurrentSettings;
        struct Vector3 m_headAnimatedStickDirection;
        int32_t KickbackJointFalloff;
        bool DebugKickback;
        bool m_isKinematic;
    };

    struct TentaclePhysicsController {
        struct TentaclePhysicsController__Class* klass;
        MonitorData* monitor;
        struct TentaclePhysicsController__Fields fields;
    };

    struct TentacleAnimationPostprocess__Fields {
        struct AnimationPostprocess__Fields _;
        int32_t OrderNumber;
        struct Transform* Root;
        struct Transform__Array* boneTransforms;
        struct Transform* headTransform;
        struct TentaclePhysicsController* PhysicsController;
        struct Vector3__Array* animatedPositions;
        struct Vector3__Array* animatedDirections;
        struct Quaternion__Array* animatedRotations;
        bool initialised;
    };

    struct TentacleAnimationPostprocess {
        struct TentacleAnimationPostprocess__Class* klass;
        MonitorData* monitor;
        struct TentacleAnimationPostprocess__Fields fields;
    };

    struct TentacleInterestPoint__Fields {
        struct MonoBehaviour__Fields _;
        float Radius;
        bool ArcThrow;
        float ArcHeigth;
        float OverrideJointMassScale;
        bool ResetAnchor;
    };

    struct TentacleInterestPoint {
        struct TentacleInterestPoint__Class* klass;
        MonitorData* monitor;
        struct TentacleInterestPoint__Fields fields;
    };

    struct TentacleInterestPoint__Array {
        struct TentacleInterestPoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TentacleInterestPoint* vector[32];
    };

    struct EntityReactionBehaviour_1_TentacleEntity___Fields {
        struct EntityReactionBehaviour__Fields _;
    };

    struct EntityReactionBehaviour_1_TentacleEntity_ {
        struct EntityReactionBehaviour_1_TentacleEntity___Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour_1_TentacleEntity___Fields fields;
    };

    struct TentacleHitReaction__Fields {
        struct EntityReactionBehaviour_1_TentacleEntity___Fields _;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        int32_t NearestSegmentsAffected;
        float NearestSegmentsAffectedDecay;
        float segmentDamageForce;
        float AirComboPullInDistanceY;
        float AirComboPullInValue;
        float GroundHorizontalKnockbackMultiplier;
        float KickbackMultiplier;
        float KnockupMultiplier;
        float KnockupMax;
        float KickbackMax;
        struct Event_1* OnAnyHitEvent;
        float m_timer;
        bool m_exitEarly;
    };

    struct TentacleHitReaction {
        struct TentacleHitReaction__Class* klass;
        MonitorData* monitor;
        struct TentacleHitReaction__Fields fields;
    };

    struct TentaclePhysicsController_RigidBodyPropertiesCache__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TentaclePhysicsController_RigidBodyPropertiesCache__StaticFields {
    };

    struct TentaclePhysicsController_RigidBodyPropertiesCache__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentaclePhysicsController_RigidBodyPropertiesCache__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentaclePhysicsController_RigidBodyPropertiesCache__VTable vtable;
    };

    struct TentacleAnimationPostprocess__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_RequiresOnUpdate;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData get_TotalWeight;
        VirtualInvokeData get_HasFinished;
        VirtualInvokeData get_Order;
        VirtualInvokeData OnPostEnable;
        VirtualInvokeData OnPostDisable;
        VirtualInvokeData OnAddedToAnimator;
        VirtualInvokeData OnRemovedFromAnimator;
        VirtualInvokeData OnActivated;
        VirtualInvokeData OnDeactivated;
        VirtualInvokeData Process;
        VirtualInvokeData OnSceneGui;
    };

    struct TentacleAnimationPostprocess__StaticFields {
        struct Quaternion RotZ90;
    };

    struct TentacleAnimationPostprocess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleAnimationPostprocess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleAnimationPostprocess__VTable vtable;
    };

    struct TentacleAnimatedSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TentacleAnimatedSettings__StaticFields {
    };

    struct TentacleAnimatedSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleAnimatedSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleAnimatedSettings__VTable vtable;
    };

    struct TentacleInterestPoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TentacleInterestPoint__StaticFields {
    };

    struct TentacleInterestPoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleInterestPoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleInterestPoint__VTable vtable;
    };

    struct TentaclePhysicsController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TentaclePhysicsController__StaticFields {
        bool ClassEnabled;
        bool TentacleOptimizations;
    };

    struct TentaclePhysicsController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentaclePhysicsController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentaclePhysicsController__VTable vtable;
    };

    struct TentacleInterestPoint__Array__VTable {
    };

    struct TentacleInterestPoint__Array__StaticFields {
    };

    struct TentacleInterestPoint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleInterestPoint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleInterestPoint__Array__VTable vtable;
    };

    struct TentacleEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_BehaviourTree;
        VirtualInvokeData ResolveDamage;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData ShouldKillBubble;
        VirtualInvokeData CreateTimelineParentEntity;
        VirtualInvokeData get_AddChildren;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
        VirtualInvokeData get_ExternalID;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_CameraTargetActive;
        VirtualInvokeData get_CameraTargetPosition;
        VirtualInvokeData get_CameraTargetPadding;
        VirtualInvokeData get_CameraInfluencePosition;
        VirtualInvokeData AdjustCameraTargetWeight;
        VirtualInvokeData get_CameraInfluenceMinDist;
        VirtualInvokeData get_CameraInfluenceMaxDist;
        VirtualInvokeData get_CameraZoomFactor;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData GetTargetData;
        VirtualInvokeData IPortalVisitor_get_Position;
        VirtualInvokeData IPortalVisitor_set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
        VirtualInvokeData get_IsFacingTarget;
        VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
        VirtualInvokeData get_ScreenPadding;
        VirtualInvokeData IsBehaviourTreePaused;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnAwake;
        VirtualInvokeData GetBehaviourTree;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData UnserializedInitialization;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
        VirtualInvokeData OnSuspendedStay;
        VirtualInvokeData OnUpdate_2;
        VirtualInvokeData EnterSpawningState;
        VirtualInvokeData UpdateSpawningState;
        VirtualInvokeData ExitSpawningState;
        VirtualInvokeData EnterDecisionMakingState;
        VirtualInvokeData UpdateDecisionMakingState;
        VirtualInvokeData ExitDecisionMakingState;
        VirtualInvokeData EnterReactionState;
        VirtualInvokeData UpdateReactionState;
        VirtualInvokeData ExitReactionState;
        VirtualInvokeData EnterCinematicState;
        VirtualInvokeData UpdateCinematicState;
        VirtualInvokeData ExitCinematicState;
        VirtualInvokeData GetActiveLocomotion;
        VirtualInvokeData OnContactDamageDealt;
        VirtualInvokeData OnHandleFireDamage;
        VirtualInvokeData OnHandleIceDamage;
        VirtualInvokeData OnDamageReceived;
        VirtualInvokeData OnDamageBlocked;
        VirtualInvokeData DeactivateDamageReceivers;
        VirtualInvokeData InstantKill;
        VirtualInvokeData OnDied;
        VirtualInvokeData SpawnOrbs;
        VirtualInvokeData OnDiedOutOfBounds;
        VirtualInvokeData OnEndDeathBehaviour;
        VirtualInvokeData OnPostRestoreCheckpoint;
        VirtualInvokeData ResetEntity;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData IsFacingPoint;
        VirtualInvokeData ResolveDamage_1;
        VirtualInvokeData get_CameraTargetActive_1;
        VirtualInvokeData get_CameraTargetPosition_1;
        VirtualInvokeData get_CameraTargetPadding_1;
        VirtualInvokeData get_CameraInfluenceMinDist_1;
        VirtualInvokeData get_CameraInfluenceMaxDist_1;
        VirtualInvokeData get_CameraZoomFactor_1;
        VirtualInvokeData get_TargetType_1;
        VirtualInvokeData AdjustCameraTargetWeight_1;
        VirtualInvokeData get_IsAggroed;
        VirtualInvokeData get_CanAttackTokenBeStolen;
        VirtualInvokeData OnAttackTokenStolen;
        VirtualInvokeData get_UsesHealthbar;
        VirtualInvokeData get_ShouldApplySpawnPopFix;
        VirtualInvokeData get_IsFlyingEnemy;
        VirtualInvokeData get_UseDeathLoopTimeLimit;
        VirtualInvokeData get_CanAttackTokenBeStolen_1;
        VirtualInvokeData get_AutoResetSpotOriBool;
        VirtualInvokeData TryGetPlatformMovement;
        VirtualInvokeData ModifyKickbackForce;
    };

    struct TentacleEntity__StaticFields {
    };

    struct TentacleEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleEntity__VTable vtable;
    };

    struct EntityReactionBehaviour_1_TentacleEntity___VTable {
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
        VirtualInvokeData __unknown;
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

    struct EntityReactionBehaviour_1_TentacleEntity___StaticFields {
    };

    struct EntityReactionBehaviour_1_TentacleEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityReactionBehaviour_1_TentacleEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityReactionBehaviour_1_TentacleEntity___VTable vtable;
    };

    struct TentacleHitReaction__VTable {
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

    struct TentacleHitReaction__StaticFields {
    };

    struct TentacleHitReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleHitReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleHitReaction__VTable vtable;
    };

    struct TentacleDeath__VTable {
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

    struct TentacleDeath__StaticFields {
    };

    struct TentacleDeath__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleDeath__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleDeath__VTable vtable;
    };

    struct TentacleDeathBehaviour__Fields {
        struct EntityReactionBehaviour__Fields _;
        float DeathKickbackMinMagnitude;
        float DeathKickbackMinBoost;
        float DeathKickbackMinUpDirection;
        struct DeathStartEffectSpawnSetting* DeathStartEffect;
        struct CharacterPlatformMovement* m_platformMovement;
        struct Locomotion* m_locomotion;
        bool m_waitingForDeath;
        struct TentacleEntity* m_tentacleEntity;
        struct TentacleHitReaction* m_hitReaction;
        bool m_wasCacheSerialized;
    };

    struct TentacleDeathBehaviour {
        struct TentacleDeathBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleDeathBehaviour__Fields fields;
    };

    struct TentacleDeathBehaviour__VTable {
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

    struct TentacleDeathBehaviour__StaticFields {
    };

    struct TentacleDeathBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleDeathBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleDeathBehaviour__VTable vtable;
    };

    struct __declspec(align(8)) EnvTopology__Fields {
        struct Vector2 origin;
        float safeRange;
        struct Vector3__Array* points;
        struct Vector3__Array* normals;
        struct Vector3__Array* tangentsCCW;
    };

    struct EnvTopology {
        struct EnvTopology__Class* klass;
        MonitorData* monitor;
        struct EnvTopology__Fields fields;
    };

    struct EnvTopology__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnvTopology__StaticFields {
    };

    struct EnvTopology__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnvTopology__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnvTopology__VTable vtable;
    };

    struct TentaclePlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct TentacleInterestPoint__Array* InterestPoints;
        float SpawnDelay;
        struct GameObject* TentaclePrefab;
    };

    struct TentaclePlaceholder {
        struct TentaclePlaceholder__Class* klass;
        MonitorData* monitor;
        struct TentaclePlaceholder__Fields fields;
    };

    struct TentaclePlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
        VirtualInvokeData OnSceneRootPreDisable;
        VirtualInvokeData get_Prefab;
        VirtualInvokeData get_RequiresGroundToSpawn;
        VirtualInvokeData get_CheckForOverlap;
        VirtualInvokeData ClearPrefabLinks;
        VirtualInvokeData get_CanSpawn;
        VirtualInvokeData InstantiateInstance;
        VirtualInvokeData PoolCurrentInstance;
        VirtualInvokeData Spawn;
        VirtualInvokeData OnStart;
        VirtualInvokeData OnPlaceholderEnable;
        VirtualInvokeData OnPlaceholderDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnHealthZero;
        VirtualInvokeData OnDeath;
        VirtualInvokeData UpdateAutoSpawnState;
        VirtualInvokeData UpdateSpawnOnEventState;
        VirtualInvokeData get_IsOnScreenPaddedExtended;
        VirtualInvokeData get_IsOnScreenPadded;
        VirtualInvokeData get_IsOnScreen;
        VirtualInvokeData InstantiateFromPooledObj;
        VirtualInvokeData IsUsingVariations;
        VirtualInvokeData CanUseAutosetupPositionInOnSand;
    };

    struct TentaclePlaceholder__StaticFields {
    };

    struct TentaclePlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentaclePlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentaclePlaceholder__VTable vtable;
    };

    struct LizardLocomotion__Fields {
        struct GroundEntityLocomotion__Fields _;
        float Deceleration;
    };

    struct LizardLocomotion {
        struct LizardLocomotion__Class* klass;
        MonitorData* monitor;
        struct LizardLocomotion__Fields fields;
    };

    struct LizardLocomotion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveToPoint;
        VirtualInvokeData MoveInTheDirection;
        VirtualInvokeData Stop;
        VirtualInvokeData get_TraversalTier;
        VirtualInvokeData set_TraversalTier;
        VirtualInvokeData get_FeetPosition;
        VirtualInvokeData get_HasArrivedAtTarget;
        VirtualInvokeData get_IsMovingToTarget;
        VirtualInvokeData get_GravityDirection;
        VirtualInvokeData OnEntityReset;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
        VirtualInvokeData get_PositionForWaterfallInteraction;
        VirtualInvokeData get_SpeedForWaterfallInteraction;
        VirtualInvokeData set_SpeedForWaterfallInteraction;
        VirtualInvokeData get_BoundsForWaterfallInteraction;
        VirtualInvokeData get_WaterfallIntersectionMode;
        VirtualInvokeData get_RigidbodyForWaterfallInteraction;
        VirtualInvokeData get_IsFlamable;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_FeetTransform;
        VirtualInvokeData get_FeetPosition_1;
        VirtualInvokeData get_HasArrivedAtTarget_1;
        VirtualInvokeData get_Gravity;
        VirtualInvokeData set_Gravity;
        VirtualInvokeData get_Weight;
        VirtualInvokeData set_Weight;
        VirtualInvokeData get_Entity;
        VirtualInvokeData get_ShouldReset;
        VirtualInvokeData get_IsMovingToTarget_1;
        VirtualInvokeData get_GravityDirection_1;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnPrewarm;
        VirtualInvokeData OnEntityInitialization_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData ConfigureStateMachine;
        VirtualInvokeData get_DefaultFSMState;
        VirtualInvokeData OnEntityReset_1;
        VirtualInvokeData ResetLocomotion;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData UpdateLocomotionBehaviours;
        VirtualInvokeData GetNextBehaviour;
        VirtualInvokeData MoveToPoint_1;
        VirtualInvokeData MoveInTheDirection_1;
        VirtualInvokeData Stop_1;
        VirtualInvokeData SetLookDirectionX;
        VirtualInvokeData SetLookDirection;
        VirtualInvokeData SetLookDirectionTowardsPoint;
        VirtualInvokeData get_LookDirection;
        VirtualInvokeData get_IsFacingLeft;
        VirtualInvokeData get_IsTurning;
        VirtualInvokeData get_MovementProcessor;
        VirtualInvokeData get_UsesSeparateTurningBehaviour;
        VirtualInvokeData ShouldStartFalling;
        VirtualInvokeData PropagateTargetPoint;
        VirtualInvokeData InstantFlip;
        VirtualInvokeData get_LookDirection_1;
        VirtualInvokeData get_LookDirectionXYNormalized;
        VirtualInvokeData get_IsFacingLeft_1;
    };

    struct LizardLocomotion__StaticFields {
    };

    struct LizardLocomotion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardLocomotion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardLocomotion__VTable vtable;
    };

    struct LizardLocomotionBehaviour__Fields {
        struct LocomotionGroundMoveTimelineBehaviour__Fields _;
        struct LizardEntity* m_lizard;
        struct ParticleSystem* m_runningEffect;
        bool m_hasRunningEffectSpawned;
        struct CharacterPlatformMovement* m_platformMovement;
    };

    struct LizardLocomotionBehaviour {
        struct LizardLocomotionBehaviour__Class* klass;
        MonitorData* monitor;
        struct LizardLocomotionBehaviour__Fields fields;
    };

    enum class LizardSpawnType__Enum : int32_t {
        Instant = 0x00000000,
        FromForeground = 0x00000001,
        FromBackground = 0x00000002,
    };

    struct LizardSpawnType__Enum__Boxed {
        struct LizardSpawnType__Enum__Class* klass;
        MonitorData* monitor;
        LizardSpawnType__Enum value;
    };

    struct LizardEntity__Fields {
        struct EnemyEntity__Fields _;
        struct PlayerInsideZoneChecker* OneTwoThreeAttackRange;
        struct PlayerInsideZoneChecker* QuickAttackRange;
        struct PlayerInsideZoneChecker* PounceAttackRange;
        struct PlayerInsideZoneChecker* OneTwoThreeCounterattackRange;
        struct PlayerInsideZoneChecker* QuickBiteCounterattackRange;
        float MinAttackCooldown;
        struct Transform* VFXHolder;
        struct RetaliationRuleHandler* RetaliationRule;
        float OtherLizardHitReactionTimeWindow;
        float m_minAttackCooldown;
        bool _IsRolling_k__BackingField;
        LizardSpawnType__Enum _SpawnType_k__BackingField;

        struct MaterialBasedLizardEffectsMap* Effects;
        float m_groupBehaviourBaseAttackCooldown;
        float m_lastTimeOtherLizardIsHit;
        struct GroundEntityLocomotion* m_groundEntityLocomotion;
        struct CharacterPlatformMovement* m_platformMovement;
        struct SimpleGoThroughPlatformHandler* m_goThroughPlatformHandler;
    };

    struct LizardEntity {
        struct LizardEntity__Class* klass;
        MonitorData* monitor;
        struct LizardEntity__Fields fields;
    };

    struct Action_1_LizardEntity___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_LizardEntity_ {
        struct Action_1_LizardEntity___Class* klass;
        MonitorData* monitor;
        struct Action_1_LizardEntity___Fields fields;
    };

    struct MaterialBasedLizardEffectsMap__Fields {
        struct MaterialBasedResourceMap__Fields _;
        struct LizardMovementEffects* DefaultMovementEffects;
        struct MaterialBasedLizardMovementEffects__Array* MovementEffects;
        struct LizardAttackEffects* DefaultAttackEffects;
        struct MaterialBasedLizardAttackEffects__Array* AttackEffects;
    };

    struct MaterialBasedLizardEffectsMap {
        struct MaterialBasedLizardEffectsMap__Class* klass;
        MonitorData* monitor;
        struct MaterialBasedLizardEffectsMap__Fields fields;
    };

    struct __declspec(align(8)) LizardMovementEffects__Fields {
        struct GameObject* Running;
    };

    struct LizardMovementEffects {
        struct LizardMovementEffects__Class* klass;
        MonitorData* monitor;
        struct LizardMovementEffects__Fields fields;
    };

    struct MaterialBasedResourceMapEntry_1_LizardMovementEffects___Fields {
        struct MaterialBasedResourceMapEntry__Fields _;
        struct LizardMovementEffects* Resource;
    };

    struct MaterialBasedResourceMapEntry_1_LizardMovementEffects_ {
        struct MaterialBasedResourceMapEntry_1_LizardMovementEffects___Class* klass;
        MonitorData* monitor;
        struct MaterialBasedResourceMapEntry_1_LizardMovementEffects___Fields fields;
    };

    struct MaterialBasedLizardMovementEffects__Fields {
        struct MaterialBasedResourceMapEntry_1_LizardMovementEffects___Fields _;
    };

    struct MaterialBasedLizardMovementEffects {
        struct MaterialBasedLizardMovementEffects__Class* klass;
        MonitorData* monitor;
        struct MaterialBasedLizardMovementEffects__Fields fields;
    };

} // namespace app
