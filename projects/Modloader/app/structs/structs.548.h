namespace app {
    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface___Fields {
        struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface___Fields fields;
    };

    struct GrabbableSurface__Array {
        struct GrabbableSurface__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GrabbableSurface* vector[32];
    };

    struct IEnumerator_1_GrabbableSurface_ {
        struct IEnumerator_1_GrabbableSurface___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_GrabbableSurface_ {
        struct ICollection_1_GrabbableSurface___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ {
        struct GameObject* key;
        struct GrabbableSurface* value;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Boxed {
        struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ fields;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Array {
        struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface_ {
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_GrabbableSurface___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_GrabbableSurface_ {
        struct IEnumerable_1_GrabbableSurface___Class* klass;
        MonitorData* monitor;
    };

    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ {
        struct Action_2_UnityEngine_Vector3_UnityEngine_Collider___Class* klass;
        MonitorData* monitor;
        struct Action_2_UnityEngine_Vector3_UnityEngine_Collider___Fields fields;
    };

    struct CharacterPlatformMovement__Fields {
        struct PlatformMovement__Fields _;
        float ForceStickKeepToSurfaceDistance;
        bool HeadAgainstWall;
        bool FeetAgainstWall;
        struct Vector3 HeadWallNormal;
        struct Vector3 FeetWallNormal;
        bool KinematicMode;
        bool UseCenterRayForGroundAngle;
        float ClimbWallExtraTime;
        bool CeilingRayHit;
        bool GroundRayHit;
        bool WallLeftRayHit;
        bool WallRightRayHit;
        struct Vector3 GroundRayNormal;
        struct Vector3 GroundRayPoint;
        bool GainHorizontalSpeedOffWall;
        float InheritVelocityMultiplier;
        bool Enabled;
        bool OnlyGroundMovement;
        bool SlowOnCollisionWithWall;
        bool ShouldStickToPlatforms;
        float LandAnticipationTime;
        bool feetLandAnticipationCheck;
        struct Action_1_MoonControllerColliderHit_* OnMoonControllerCollision;
        struct Action_1_UnityEngine_Collision_* OnNativeCollision;
        struct Action* OnPostUpdateCollision;
        bool m_collisionThisFrame;
        struct MoonCharacterController* m_characterController;
        struct Vector2 m_groundContactNormal;
        struct Vector2 m_ceilingContactNormal;
        struct Vector2 m_wallLeftContactNormal;
        struct Vector2 m_wallRightContactNormal;
        struct Collider* m_groundCollider;
        struct Collider* m_ceilingCollider;
        struct Collider* m_wallLeftCollider;
        struct Collider* m_wallRightCollider;
        struct DamageDealer* m_groundDamageDealer;
        struct DamageDealer* m_ceilingDamageDealer;
        struct DamageDealer* m_wallLeftDamageDealer;
        struct DamageDealer* m_wallRightDamageDealer;
        bool ApplyGroundPenetrationPrevention;
        bool _UseSafeMovementCode_k__BackingField;
        bool m_movingPlatfromsNeedUpdate;
        bool m_isSuspended;
        bool m_anticipatingLanding;
        struct RaycastHit m_antecipationRayCastHit;
        struct IKLimb__Array* FeetIK;
        bool m_feetAnticipatingLanding;
        struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve_* m_scheduledSpeedCurves;
        struct CharacterPlatformMovement_KickbackEntry* m_kickback;
        struct CharacterPlatformMovement_AirSuspension* m_airSuspension;
        struct PlatformingFXFunctionality* PlatformingFxFunctionality;
        int32_t m_placeOnGroundRequestId;
        float m_climbableWallTimer;
        struct Action* OnPreApplySpeed;
        struct Action* OnPostAdjustSpeedBasedOnCollisions;
        struct Vector2 m_externalForce;
        struct Vector3 m_oldPosition;
        bool ForceStick;
        struct Vector2 AdditiveSpeed;
        struct Vector2 AdditiveLocalSpeed;
        struct Vector2 LastAdditiveSpeed;
        struct List_1_ExternalForceEntry_* m_externalForceEntries;
        float InheritedVelocityDeceleration;
        struct JobHandle m_handle;
        bool m_jobsExecuting;
        struct NativeArray_1_UnityEngine_RaycastHit_ m_raycastResults;
        struct NativeArray_1_UnityEngine_RaycastCommand_ m_raycastCommands;
        bool m_hasCreatedNativeArrays;
        struct RaycastHit__Array* m_tempResults;
        struct RaycastCommand__Array* m_cmds;
        struct Boolean__Array* m_hitResults;
        int32_t m_hitReqId;
        bool _GroundNormalIsValid_k__BackingField;
        float m_Gravity;
        bool EnableDebugDraw;
        struct Vector2 m_prevWorldSpeed;
    };

    struct CharacterPlatformMovement {
        struct CharacterPlatformMovement__Class* klass;
        MonitorData* monitor;
        struct CharacterPlatformMovement__Fields fields;
    };

    struct Action_1_MoonControllerColliderHit___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_MoonControllerColliderHit_ {
        struct Action_1_MoonControllerColliderHit___Class* klass;
        MonitorData* monitor;
        struct Action_1_MoonControllerColliderHit___Fields fields;
    };

    struct MoonControllerColliderHit {
        struct Collider* Collider;
        struct MoonCharacterController* Controller;
        struct Vector3 MoveDirection;
        float MoveLength;
        struct Vector3 Normal;
        struct Vector3 Point;
        float Distance;
        float ContinueMoveLength;
        struct Vector3 ContinueMoveDirection;
    };

    struct MoonControllerColliderHit__Boxed {
        struct MoonControllerColliderHit__Class* klass;
        MonitorData* monitor;
        struct MoonControllerColliderHit fields;
    };

    struct MoonCharacterController__Fields {
        struct MonoBehaviour__Fields _;
        float MinPenetration;
        int32_t m_safeRecursion;
        struct Rigidbody* m_rigidbody;
        struct CharacterPlatformMovement* m_controllerPenetrate;
        struct CapsuleCollider* m_capsule;
        bool m_isPrewarmed;
        struct Material* mat;
        float range;
        struct Transform* shape;
    };

    struct MoonCharacterController {
        struct MoonCharacterController__Class* klass;
        MonitorData* monitor;
        struct MoonCharacterController__Fields fields;
    };

    enum class DamageDealer_DamageDirectionMode__Enum : int32_t {
        PositionBased = 0x00000000,
        VelocityBased = 0x00000001,
        Constant = 0x00000002,
    };

    struct DamageDealer_DamageDirectionMode__Enum__Boxed {
        struct DamageDealer_DamageDirectionMode__Enum__Class* klass;
        MonitorData* monitor;
        DamageDealer_DamageDirectionMode__Enum value;
    };

    struct DamageDealer__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_DamageDealer_OverrideInfo_* m_overrides;
        bool UseDamageByAreaResolver;
        GameWorldAreaID__Enum AreaResolverOverride;

        float m_damageAmount;
        DamageType__Enum DamageType;

        DamageWeight__Enum DamageWeight;

        DamageLayerMask__Enum DamageLayerMask;

        struct DamageOwner* DamageOwner;
        bool ActiveOnlyWithEntity;
        struct Entity* OwningEntity;
        struct Nullable_1_Boolean_ m_initActivated;
        bool m_activated;
        bool m_isKillSurface;
        bool PlayerOnly;
        bool AlwaysIncludeMinecarts;
        AbilityType__Enum AbilityType;

        float TickRate;
        float KickbackForce;
        DamageDealer_DamageDirectionMode__Enum DamageForceDirection;

        struct Transform* ForceDirectionPosition;
        float SpeedTransfer;
        float DamageForceInheritVelocity;
        struct MoonVector3* ConstantForceDirection;
        bool IsContinuousDamage;
        float ContinuousDamageTickRate;
        struct Action_2_DamageDealer_DamageResult_* OnDamageDealt;
        struct Func_2_UnityEngine_GameObject_Boolean_* ShouldDealDamage;
        struct DamageDealer_TweakDamageDelegate* TweakDamage;
        struct Condition_1* Condition;
        bool RequireRigidbody;
        bool UsePlatformMovementForKickbackDirection;
        struct Rigidbody* PushBackBody;
        float PushBackForce;
        bool m_overrideDamageLayerMask;
        DamageLayerMask__Enum m_damageLayerMaskOverride;

        struct Vector3 m_prevPosition;
        struct Vector3 m_currentVelocity;
        struct AnimationCurve* m_defaultKickbackCurve;
        float m_continuousDamageTimer;
        struct List_1_UnityEngine_Collider_* m_insideColliders;
        struct Damage* m_damage;
        struct Collider* m_collider;
        struct Polygon_1* m_polygon;
        bool m_hasPolygon;
        bool m_hasCollider;
        bool m_hasMeshCollider;
        bool m_cachedComponents;
        bool m_concaveMeshCollider;
        bool m_isRegisterdWithDriver;
        struct String* m_clipTittle;
    };

    struct DamageDealer {
        struct DamageDealer__Class* klass;
        MonitorData* monitor;
        struct DamageDealer__Fields fields;
    };

    struct __declspec(align(8)) List_1_DamageDealer_OverrideInfo___Fields {
        struct DamageDealer_OverrideInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DamageDealer_OverrideInfo_ {
        struct List_1_DamageDealer_OverrideInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_DamageDealer_OverrideInfo___Fields fields;
    };

    struct __declspec(align(8)) DamageDealer_OverrideInfo__Fields {
        bool IsEnabled;
        bool ShouldOverrideDamage;
        float AmountOverride;
    };

    struct DamageDealer_OverrideInfo {
        struct DamageDealer_OverrideInfo__Class* klass;
        MonitorData* monitor;
        struct DamageDealer_OverrideInfo__Fields fields;
    };

    struct DamageDealer_OverrideInfo__Array {
        struct DamageDealer_OverrideInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageDealer_OverrideInfo* vector[32];
    };

    struct IEnumerator_1_DamageDealer_OverrideInfo_ {
        struct IEnumerator_1_DamageDealer_OverrideInfo___Class* klass;
        MonitorData* monitor;
    };

    struct Action_2_DamageDealer_DamageResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_DamageDealer_DamageResult_ {
        struct Action_2_DamageDealer_DamageResult___Class* klass;
        MonitorData* monitor;
        struct Action_2_DamageDealer_DamageResult___Fields fields;
    };

    struct Func_2_UnityEngine_GameObject_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_UnityEngine_GameObject_Boolean_ {
        struct Func_2_UnityEngine_GameObject_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_UnityEngine_GameObject_Boolean___Fields fields;
    };

    struct DamageDealer_TweakDamageDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DamageDealer_TweakDamageDelegate {
        struct DamageDealer_TweakDamageDelegate__Class* klass;
        MonitorData* monitor;
        struct DamageDealer_TweakDamageDelegate__Fields fields;
    };

    struct Polygon_1__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_UnityEngine_Vector2_* Points;
        struct HashSet_1_System_Int32_* Selected;
        float SmoothAngle;
        struct Vector2 FrontUVScale;
        struct Vector2 FrontUVOffset;
        struct Vector2 BackUVScale;
        struct Vector2 BackUVOffset;
        struct Vector2 SideUVScale;
        struct Vector2 SideUVOffset;
        struct Polygon_ShapeData* PolygonMesh;
        struct Polygon_ShapeData* PolygonCollider;
        bool ClosedShape;
        bool Invert;
        int32_t InsertBefore;
        struct Action* OnPolygonUpdateComponents;
    };

    struct Polygon_1 {
        struct Polygon_1__Class* klass;
        MonitorData* monitor;
        struct Polygon_1__Fields fields;
    };

    struct __declspec(align(8)) Polygon_ShapeData__Fields {
        bool GenerateFront;
        bool GenerateBack;
        bool GenerateSides;
        float Extrude;
        float Elevation;
        bool Enabled;
    };

    struct Polygon_ShapeData {
        struct Polygon_ShapeData__Class* klass;
        MonitorData* monitor;
        struct Polygon_ShapeData__Fields fields;
    };

    struct IKPostprocess__Fields {
        struct AnimationPostprocess__Fields _;
        int32_t OrderNumber;
        struct IK* IK;
        struct Transform* Root;
        struct Transform* endBone;
        struct Transform* startBone;
        struct IKSolverHeuristic* solver;
        bool boneScalingRequired;
        struct Vector3 ResultEndPos;
    };

    struct IKPostprocess {
        struct IKPostprocess__Class* klass;
        MonitorData* monitor;
        struct IKPostprocess__Fields fields;
    };

    struct IKLimb__Fields {
        struct IKPostprocess__Fields _;
        float Radius;
        struct Vector3 Anchor;
        struct Vector3 RaycastAxis;
        float InnerDistance;
        float OuterDistance;
        float GroundHigh;
        float GroundTarget;
        float GroundLow;
        struct LayerMask LayerMask;
        bool Raycast3D;
        float AlignFootToGround;
        bool UseOptimizedSolver;
        float OptimizedSolverTolerance;
        int32_t m_layer_mask;
        struct IkChainSolver* m_ikChainSolver;
        struct Vector3 m_groundNormal;
    };

    struct IKLimb {
        struct IKLimb__Class* klass;
        MonitorData* monitor;
        struct IKLimb__Fields fields;
    };

    struct IKLimb__Array {
        struct IKLimb__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IKLimb* vector[32];
    };

    struct __declspec(align(8)) List_1_CharacterPlatformMovement_ScheduledSpeedCurve___Fields {
        struct CharacterPlatformMovement_ScheduledSpeedCurve__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve_ {
        struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve___Class* klass;
        MonitorData* monitor;
        struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve___Fields fields;
    };

    struct CharacterPlatformMovement_ScheduledSpeedCurve__Array {
        struct CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CharacterPlatformMovement_ScheduledSpeedCurve* vector[32];
    };

    struct IEnumerator_1_CharacterPlatformMovement_ScheduledSpeedCurve_ {
        struct IEnumerator_1_CharacterPlatformMovement_ScheduledSpeedCurve___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CharacterPlatformMovement_KickbackEntry__Fields {
        struct AnimationCurve* Curve;
        struct Vector2 KickbackDirection;
        float KickbackMultiplier;
        float CurrentTime;
        float Duration;
        float AirHangTime;
        bool AirHangStarted;
        bool ApplyForceAlongTheGround;
    };

    struct CharacterPlatformMovement_KickbackEntry {
        struct CharacterPlatformMovement_KickbackEntry__Class* klass;
        MonitorData* monitor;
        struct CharacterPlatformMovement_KickbackEntry__Fields fields;
    };

    struct __declspec(align(8)) CharacterPlatformMovement_AirSuspension__Fields {
        float CurrentTime;
        float Duration;
        float ForceX;
    };

    struct CharacterPlatformMovement_AirSuspension {
        struct CharacterPlatformMovement_AirSuspension__Class* klass;
        MonitorData* monitor;
        struct CharacterPlatformMovement_AirSuspension__Fields fields;
    };

    struct __declspec(align(8)) PlatformingFXFunctionality__Fields {
        float DistanceCooldown;
        float TimeCooldown;
        struct TimeDistanceGate* m_cooldownGate;
        struct TimeDistanceGate* m_footstepDetailsCooldownGate;
    };

    struct PlatformingFXFunctionality {
        struct PlatformingFXFunctionality__Class* klass;
        MonitorData* monitor;
        struct PlatformingFXFunctionality__Fields fields;
    };

    struct __declspec(align(8)) TimeDistanceGate__Fields {
        float m_lastTime;
        float m_timeCooldownOriginal;
        float m_timeCooldown;
        float m_distanceCooldownOriginal;
        float m_distanceCooldown;
        struct Vector3 m_lastPosition;
    };

    struct TimeDistanceGate {
        struct TimeDistanceGate__Class* klass;
        MonitorData* monitor;
        struct TimeDistanceGate__Fields fields;
    };

    struct __declspec(align(8)) List_1_ExternalForceEntry___Fields {
        struct ExternalForceEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ExternalForceEntry_ {
        struct List_1_ExternalForceEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_ExternalForceEntry___Fields fields;
    };

    struct ExternalForceEntry {
        struct Vector2 Force;
        float Duration;
        float Dampening;
        float CurrentTime;
        struct AnimationCurve* DampeningOverTime;
        struct Object_1* Source;
    };

    struct ExternalForceEntry__Boxed {
        struct ExternalForceEntry__Class* klass;
        MonitorData* monitor;
        struct ExternalForceEntry fields;
    };

    struct ExternalForceEntry__Array {
        struct ExternalForceEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ExternalForceEntry vector[32];
    };

    struct IEnumerator_1_ExternalForceEntry_ {
        struct IEnumerator_1_ExternalForceEntry___Class* klass;
        MonitorData* monitor;
    };

    struct RaycastCommand__Array {
        struct RaycastCommand__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RaycastCommand vector[32];
    };

    struct Action_1_UnityEngine_RaycastHit___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_UnityEngine_RaycastHit_ {
        struct Action_1_UnityEngine_RaycastHit___Class* klass;
        MonitorData* monitor;
        struct Action_1_UnityEngine_RaycastHit___Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinRun___Fields {
        bool HasState;
        struct SeinRun* State;
    };

    struct CharacterStateWrapper_1_SeinRun_ {
        struct CharacterStateWrapper_1_SeinRun___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinRun___Fields fields;
    };

    enum class SeinRun_State__Enum : int32_t {
        Run = 0x00000000,
        Jog = 0x00000001,
        Walk = 0x00000002,
    };

    struct SeinRun_State__Enum__Boxed {
        struct SeinRun_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinRun_State__Enum value;
    };

    struct SeinRun__Fields {
        struct CharacterState__Fields _;
        float JogThreshold;
        float WalkThreshold;
        struct AnimationCurve* InputCurve;
        struct AnimationCurve* RunAnimationSpeed;
        struct AnimationCurve* JogAnimationSpeed;
        struct AnimationCurve* WalkAnimationSpeed;
        float m_horizontalInputDelay;
        float m_SharpTurnTimer;
        float m_lastInputDirection;
        bool m_wasFacingLeft;
        SeinRun_State__Enum CurrentState;

        struct Func_1_Boolean_* m_shouldRunPlay;
        struct Func_1_Boolean_* m_shouldJogPlay;
        struct Func_1_Boolean_* m_shouldWalkPlay;
    };

    struct SeinRun {
        struct SeinRun__Class* klass;
        MonitorData* monitor;
        struct SeinRun__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinIdle___Fields {
        bool HasState;
        struct SeinIdle* State;
    };

    struct CharacterStateWrapper_1_SeinIdle_ {
        struct CharacterStateWrapper_1_SeinIdle___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinIdle___Fields fields;
    };

    struct SeinIdle__Fields {
        struct CharacterState__Fields _;
        bool m_wasIdling;
        float m_idleTime;
        float YawnAnimationDelay;
        struct ActiveAnimationHandle m_activeAnimation;
        struct MoonAnimation* m_lastAnimation;
        struct Func_1_Boolean_* m_shouldIdleKeepPlayingDelegate;
    };

    struct SeinIdle {
        struct SeinIdle__Class* klass;
        MonitorData* monitor;
        struct SeinIdle__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinLookUp___Fields {
        bool HasState;
        struct SeinLookUp* State;
    };

    struct CharacterStateWrapper_1_SeinLookUp_ {
        struct CharacterStateWrapper_1_SeinLookUp___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinLookUp___Fields fields;
    };

    struct SeinLookUp__Fields {
        struct CharacterState__Fields _;
        float Drag;
        float LookDelay;
        struct MoonAnimation* LookUp;
        float LookUpDuration;
        float LookUpHeight;
        float m_height;
        bool m_isLookingDown;
        bool m_isLookingUp;
        float m_lookDelay;
    };

    struct SeinLookUp {
        struct SeinLookUp__Class* klass;
        MonitorData* monitor;
        struct SeinLookUp__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinBashAttack___Fields {
        bool HasState;
        struct SeinBashAttack* State;
    };

    struct CharacterStateWrapper_1_SeinBashAttack_ {
        struct CharacterStateWrapper_1_SeinBashAttack___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinBashAttack___Fields fields;
    };

    struct SeinBashAttack__Fields {
        struct CharacterState__Fields _;
        struct GameObject* BashAttackGamePrefab;
        float BashVelocity;
        float ThrowForce;
        float EnemyThrowForce;
        float DelayTillNextBash;
        float DelayTillGlide;
        float DelayTillSpiritLeash;
        struct AnimationCurve* FrictionCurve;
        float FrictionDuration;
        float NoAirDecelerationDuration;
        float Range;
        float BashedProjectileDamageMultiplier;
        float AllowTurnNormalizedTimeLowerThreshold;
        float AllowTurnNormalizedTimeUpperThreshold;
        struct IBashAttackable* Target;
        struct IBashAttackable* m_potentialFutureTarget;
        bool LookForFutureTargets;
        struct Vector3 m_directionToTarget;
        float m_bashAngle;
        struct Vector3 m_playerTargetPosition;
        struct BashAttackGame* m_bashAttackGame;
        float m_frictionTimeRemaining;
        struct IBashAttackable* m_lastTarget;
        struct Transform* m_seinTransform;
        bool m_spriteMirrorLock;
        float m_timeRemainingTillNextBash;
        float m_timeRemainingTillGlideAllowed;
        float m_timeRemainingTillSpiritLeashAllowed;
        float m_timeRemainingOfBashButtonPress;
        float m_timeSinceBash;
        struct HashSet_1_Moon_ISuspendable_* m_bashSuspendables;
        struct ActiveAnimationHandle m_jumpActiveAnimation;
        struct ActiveAnimationHandle m_jumpTurnActiveAnimation;
        struct MoonAnimation__Array* m_lastJumpSet;
        int32_t m_lastJumpIndex;
        bool IsBashing;
        struct SeinBashVersionAsset* BashVersionAsset;
        float m_bashThroughEnemiesRemainingTime;
        struct HashSet_1_IAttackable_* m_enemiesBashedThrough;
        struct HashSet_1_Moon_Entity_* m_entitiesBashedThrough;
        bool m_hasStarted;
        float BackFlipSpeed;
        bool m_usingJumpToBash;
        float m_jumpBashHoldRemaining;
        float m_timeSinceJump;
        float HoldJumpToBashTime;
        float HoldJumpToBashPadding;
        float HoldJumpTimeUntilBashOverride;
        float DoubleTapJumpWindow;
        float GlideIgnoreBashTime;
        float HoldUpAngleRange;
        bool m_fromGround;
        float m_holdAirTime;
        struct Guid _AttackableConsumerID_k__BackingField;
    };

    struct SeinBashAttack {
        struct SeinBashAttack__Class* klass;
        MonitorData* monitor;
        struct SeinBashAttack__Fields fields;
    };

    struct IBashAttackable {
        struct IBashAttackable__Class* klass;
        MonitorData* monitor;
    };

    enum class BashAttackGame_State__Enum : int32_t {
        None = -1,
        Appearing = 0x00000000,
        Playing = 0x00000001,
        Disappearing = 0x00000002,
    };

    struct BashAttackGame_State__Enum__Boxed {
        struct BashAttackGame_State__Enum__Class* klass;
        MonitorData* monitor;
        BashAttackGame_State__Enum value;
    };

    struct BashAttackGame__Fields {
        struct Suspendable__Fields _;
        float Angle;
        struct Transform* ArrowSprite;
        struct BashAttackCritical* BashAttackCritical;
        struct MoonTimeline* AppearingTimeline;
        struct MoonTimeline* PlayingTimeline;
        struct MoonTimeline* DisappearingTimeline;
        BashAttackGame_State__Enum m_currentState;

        float m_stateCurrentTime;
        float m_nextBashLoopPlayedTime;
        struct SoundPlayer* m_bashLoopingAudioSource;
        struct Action_1_Single_* BashGameComplete;
        float m_keyboardSpeed;
        float m_keyboardAngle;
        bool _UsingJumpToBash_k__BackingField;
        bool m_keyboardClockwise;
        BashAttackGame_Modes__Enum m_mode;

        bool _IsSuspended_k__BackingField;
    };

    struct BashAttackGame {
        struct BashAttackGame__Class* klass;
        MonitorData* monitor;
        struct BashAttackGame__Fields fields;
    };

    enum class BashAttackCritical_State__Enum : int32_t {
        Charging = 0x00000000,
        Critical = 0x00000001,
        Failed = 0x00000002,
        Finished = 0x00000003,
    };

    struct BashAttackCritical_State__Enum__Boxed {
        struct BashAttackCritical_State__Enum__Class* klass;
        MonitorData* monitor;
        BashAttackCritical_State__Enum value;
    };

    struct BashAttackCritical__Fields {
        struct Suspendable__Fields _;
        float ChargingDuration;
        float CriticalDuration;
        float FailedDuration;
        float ShakePeriod;
        float ShakeAmount;
        struct Vector3 m_localScale;
        BashAttackCritical_State__Enum CurrentState;

        bool m_suspended;
        float m_stateCurrentTime;
        struct Texture2D* BashAttackArrow;
        struct Texture2D* RedirectArrow;
    };

    struct BashAttackCritical {
        struct BashAttackCritical__Class* klass;
        MonitorData* monitor;
        struct BashAttackCritical__Fields fields;
    };

    enum class SeinBashVersionAsset_BashVersion__Enum : int32_t {
        NotOnA = 0x00000000,
        DoubleTapA = 0x00000001,
        HoldA = 0x00000002,
        UpPlusA = 0x00000003,
        LeftShoulder = 0x00000004,
    };

    struct SeinBashVersionAsset_BashVersion__Enum__Boxed {
        struct SeinBashVersionAsset_BashVersion__Enum__Class* klass;
        MonitorData* monitor;
        SeinBashVersionAsset_BashVersion__Enum value;
    };

    struct SeinBashVersionAsset__Fields {
        struct ScriptableObject__Fields _;
        SeinBashVersionAsset_BashVersion__Enum Version;
    };

    struct SeinBashVersionAsset {
        struct SeinBashVersionAsset__Class* klass;
        MonitorData* monitor;
        struct SeinBashVersionAsset__Fields fields;
    };

    struct __declspec(align(8)) HashSet_1_Moon_Entity___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_Moon_Entity___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_Moon_Entity_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_Moon_Entity_ {
        struct HashSet_1_Moon_Entity___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_Moon_Entity___Fields fields;
    };

    struct HashSet_1_T_Slot_Moon_Entity_ {
        int32_t hashCode;
        int32_t next;
        struct Entity* value;
    };

    struct HashSet_1_T_Slot_Moon_Entity___Boxed {
        struct HashSet_1_T_Slot_Moon_Entity___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_Moon_Entity_ fields;
    };

    struct HashSet_1_T_Slot_Moon_Entity___Array {
        struct HashSet_1_T_Slot_Moon_Entity___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_Moon_Entity_ vector[32];
    };

    struct IEqualityComparer_1_Moon_Entity_ {
        struct IEqualityComparer_1_Moon_Entity___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_Entity_ {
        struct IEnumerable_1_Moon_Entity___Class* klass;
        MonitorData* monitor;
    };

    struct Action_1_EntityTargetting___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_EntityTargetting_ {
        struct Action_1_EntityTargetting___Class* klass;
        MonitorData* monitor;
        struct Action_1_EntityTargetting___Fields fields;
    };

    struct EntityTargetting__Fields {
        struct MonoBehaviour__Fields _;
        struct Action* OnBashEnter;
        struct LegacyEntity* LegacyEntity;
        struct Entity* Entity;
        struct Component_1__Array* m_highlightColors;
        struct Vitals* m_vitals;
        bool Activated;
        bool CanSpiritFlame;
        bool CanBash;
        bool CanChargeFlame;
        bool CanStomp;
        bool CanLevelUpBlast;
        bool Trappable;
        bool CanMeleeHit;
        bool CanBowHit;
        bool SearchHiglightsOnSelf;
        bool CanBeLeashed;
        bool CanFireShardAttack;
        bool CanDigDash;
        bool CanTeleport;
        bool CanGlowHit;
        bool SpiritSentryTarget;
        bool CanBeTargettedBySpear;
        bool UsesTargettingProxyForSpear;
        struct GameObject* SpearTargettingProxy;
        int32_t SpiritFlamePriorityNumber;
        struct SpiritFlameProjectileOffsetGenerator* SpiritFlameProjectileOffsetGenerator;
        struct TargetSpheres* BashTargetSpheres;
        struct TargetSpheres* LeashTargetSpheres;
        bool _IsSpiritFlameHighlighted_k__BackingField;
        bool _IsSpiritSlashHighlighted_k__BackingField;
        bool _IsHeavySpiritSlashHighlighted_k__BackingField;
        bool _IsBashHighlighted_k__BackingField;
        bool _IsChargeDashHighlighted_k__BackingField;
        struct Vector3 m_previousPos;
        struct Vector3 m_velocity;
        int32_t _HeavySpiritSlashPriority_k__BackingField;
        int32_t m_spiritSlashPriority;
        int32_t m_bowPriority;
        struct Transform* BowAttackTarget;
        struct Transform* LeashAttackTarget;
        bool m_bowEnableAutoTarget;
        bool ShouldReflectArrows;
        struct Func_2_ArrowHitData_Boolean_* ShouldReflectArrowsOverride;
        bool m_grenadeEnableAutoTarget;
        int32_t m_hammerPriority;
        bool m_hammerEnableAutoTarget;
        bool m_isRegistered;
        bool m_isFrustumSuspended;
        struct InterfaceCache* m_damageReceivers;
        bool m_componentsCached;
    };

    struct EntityTargetting {
        struct EntityTargetting__Class* klass;
        MonitorData* monitor;
        struct EntityTargetting__Fields fields;
    };

    struct LegacyEntity__Fields {
        struct SaveSerialize__Fields _;
        struct EntityController* Controller;
        struct LegacyEntityDamageReciever* DamageReciever;
        struct LegacyEntityDamageDealer* DamageDealer;
        struct EntityTargetting* Targetting;
        struct MoonGuid* SceneRootGUID;
        struct Rect BoundingBox;
        bool FrustrumOptimized;
        bool m_registeredToSceneRootDisabled;
        bool ShouldBeSerialized;
        struct List_1_Moon_ISuspendable_* m_suspendables;
        struct Vector3 _StartPosition_k__BackingField;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        bool m_insideFrustum;
    };

} // namespace app
