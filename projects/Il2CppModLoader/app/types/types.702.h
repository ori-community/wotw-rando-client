namespace app {
struct AirLocomotion__StaticFields {
};

struct AirLocomotion__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AirLocomotion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AirLocomotion__VTable vtable;
};

enum class MothAggroState__Enum : int32_t {
    Idle = 0x00000000,
    Aggrod = 0x00000001,
    LostAggro = 0x00000002,
};

struct MothAggroState__Enum__Boxed {
    struct MothAggroState__Enum__Class *klass;
    MonitorData *monitor;
    MothAggroState__Enum value;
    
};

struct __declspec(align(8)) MothAgroSelector__Fields {
    MothAggroState__Enum m_previusState;
    
};

struct MothAgroSelector {
    struct MothAgroSelector__Class *klass;
    MonitorData *monitor;
    struct MothAgroSelector__Fields fields;
};

struct MothAggroState__Enum__VTable {
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

struct MothAggroState__Enum__StaticFields {
};

struct MothAggroState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothAggroState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothAggroState__Enum__VTable vtable;
};

struct MothAgroSelector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MothAgroSelector__StaticFields {
};

struct MothAgroSelector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothAgroSelector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothAgroSelector__VTable vtable;
};

struct MothEnemy__Fields {
    struct EnemyEntity__Fields _;
    struct MothSwarmer *m_swarmer;
    float m_frozenTimer;
    bool m_isCarryingStickyMine;
    float MainPOIRadiusIdle;
    float MainPOIRadiusSeek;
    float ImmunityToDamageTimer;
    struct Transform *LeftWing;
    struct Transform *RightWing;
    struct AnimationCurve *WingFlapingCurve;
    float WingFlapingScale;
    float WingFlapingSpeed;
    float LandedWingFlapingSpeed;
    float RotationMultiplier;
    float RotationOffset;
    float m_wingTimer;
    struct Vector3 m_wingRotationBuffer;
    struct Transform *m_transform;
    bool _ShouldFlock_k__BackingField;
    bool _IsLanded_k__BackingField;
    struct Vector3 _PathTarget_k__BackingField;
    float _ReactionTime_k__BackingField;
};

struct MothEnemy {
    struct MothEnemy__Class *klass;
    MonitorData *monitor;
    struct MothEnemy__Fields fields;
};

struct __declspec(align(8)) UberSwarmer__Fields {
    struct UberSwarmerSettings *Settings;
    struct UberSwarm *m_swarm;
    struct Vector2 m_separation;
    struct Vector2 m_alignment;
    struct Vector2 m_cohesion;
    struct Vector2 m_wander;
    struct Vector2 m_obstacleAvoidance;
    struct Vector2 m_globalPOI;
    float m_wanderAngle;
    float m_noiseTimer;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct UberSwarmer {
    struct UberSwarmer__Class *klass;
    MonitorData *monitor;
    struct UberSwarmer__Fields fields;
};

struct MothSwarmer__Fields {
    struct UberSwarmer__Fields _;
    struct Vector2 MainPOI;
    float MainPOIRadius;
    bool Avoid;
    struct MothEnemy *m_enemy;
    struct Transform *m_transform;
    struct Rigidbody *m_rigidbody;
    struct Vector2 m_poiInfluence;
};

struct MothSwarmer {
    struct MothSwarmer__Class *klass;
    MonitorData *monitor;
    struct MothSwarmer__Fields fields;
};

struct UberSwarmerSettings__Fields {
    struct ScriptableObject__Fields _;
    float SeparationWeight;
    float AlignmentWeight;
    float CohesionWeight;
    float WanderWeight;
    float ObstacleAvoidanceWeight;
    float GlobalPOIWeight;
    float Speed;
    float Acceleration;
    float MinSpeed;
    float MaxSpeed;
    float MaxSteer;
    float NeighbourRadiusAlignment;
    float NeighbourRadiusCohesion;
    float DesiredSeparation;
    float MaxObstacleLookupDistance;
    float MaxObstacleLookupDistance45;
    float MaxObstacleLookupDistance90;
    float DistanceWeightThreshold;
    float WanderCircleRadius;
    float WanderCircleOffset;
    float WanderRateInDegrees;
    float NoiseForce;
    float NoiseFrequency;
    struct LayerMask RaycastLayerMask;
};

struct UberSwarmerSettings {
    struct UberSwarmerSettings__Class *klass;
    MonitorData *monitor;
    struct UberSwarmerSettings__Fields fields;
};

struct UberSwarm__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UberSwarmer_ *Swarmers;
    struct LayerMask RaycastLayerMask;
    bool DebugShowVectorAlignment;
    bool DebugShowVectorSeparation;
    bool DebugShowVectorCohesion;
    bool DebugShowVectorAvoidance;
    bool DebugShowVectorGlobalPOI;
    bool DebugShowVectorWander;
    bool DebugShowRaysAvoidance;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct UberSwarm {
    struct UberSwarm__Class *klass;
    MonitorData *monitor;
    struct UberSwarm__Fields fields;
};

struct __declspec(align(8)) List_1_UberSwarmer___Fields {
    struct UberSwarmer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberSwarmer_ {
    struct List_1_UberSwarmer___Class *klass;
    MonitorData *monitor;
    struct List_1_UberSwarmer___Fields fields;
};

struct UberSwarmer__Array {
    struct UberSwarmer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberSwarmer *vector[32];
};

struct IEnumerator_1_UberSwarmer_ {
    struct IEnumerator_1_UberSwarmer___Class *klass;
    MonitorData *monitor;
};

enum class UberSwarm_SwarmerEvent__Enum : int32_t {
    Hit = 0x00000000,
    Killed = 0x00000001,
    StickyMineStuck = 0x00000002,
};

struct UberSwarm_SwarmerEvent__Enum__Boxed {
    struct UberSwarm_SwarmerEvent__Enum__Class *klass;
    MonitorData *monitor;
    UberSwarm_SwarmerEvent__Enum value;
    
};

struct MothSwarm__Fields {
    struct UberSwarm__Fields _;
};

struct MothSwarm {
    struct MothSwarm__Class *klass;
    MonitorData *monitor;
    struct MothSwarm__Fields fields;
};

struct UberSwarmerSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberSwarmerSettings__StaticFields {
};

struct UberSwarmerSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberSwarmerSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberSwarmerSettings__VTable vtable;
};

struct UberSwarmer__Array__VTable {
};

struct UberSwarmer__Array__StaticFields {
};

struct UberSwarmer__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberSwarmer__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberSwarmer__Array__VTable vtable;
};

struct IEnumerator_1_UberSwarmer___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberSwarmer___StaticFields {
};

struct IEnumerator_1_UberSwarmer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberSwarmer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberSwarmer___VTable vtable;
};

struct List_1_UberSwarmer___VTable {
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

struct List_1_UberSwarmer___StaticFields {
    struct UberSwarmer__Array *_emptyArray;
};

struct List_1_UberSwarmer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberSwarmer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberSwarmer___VTable vtable;
};

struct UberSwarm_SwarmerEvent__Enum__VTable {
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

struct UberSwarm_SwarmerEvent__Enum__StaticFields {
};

struct UberSwarm_SwarmerEvent__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberSwarm_SwarmerEvent__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberSwarm_SwarmerEvent__Enum__VTable vtable;
};

struct UberSwarm__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnSwarmerEvent;
};

struct UberSwarm__StaticFields {
};

struct UberSwarm__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberSwarm__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberSwarm__VTable vtable;
};

struct UberSwarmer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_Velocity;
    VirtualInvokeData set_Velocity;
    VirtualInvokeData ISwarmer_get_IsActive;
    VirtualInvokeData ISwarmer_set_IsActive;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData CalculateExtraVelocities;
};

struct UberSwarmer__StaticFields {
};

struct UberSwarmer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberSwarmer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberSwarmer__VTable vtable;
};

struct MothSwarmer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_Velocity;
    VirtualInvokeData set_Velocity;
    VirtualInvokeData ISwarmer_get_IsActive;
    VirtualInvokeData ISwarmer_set_IsActive;
    VirtualInvokeData get_Position_1;
    VirtualInvokeData set_Position_1;
    VirtualInvokeData get_Velocity_1;
    VirtualInvokeData set_Velocity_1;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData CalculateExtraVelocities;
};

struct MothSwarmer__StaticFields {
};

struct MothSwarmer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothSwarmer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothSwarmer__VTable vtable;
};

struct MothEnemy__VTable {
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

struct MothEnemy__StaticFields {
};

struct MothEnemy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothEnemy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothEnemy__VTable vtable;
};

struct MothSwarm__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnSwarmerEvent;
};

struct MothSwarm__StaticFields {
};

struct MothSwarm__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothSwarm__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothSwarm__VTable vtable;
};

struct MothLandBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    float _LandRadius_k__BackingField;
    struct LayerMask LandLayer;
    struct MothEnemy *m_mothEnemy;
    struct Vector2 m_pointToLand;
    struct Vector2 m_pointToLandNormal;
    struct RaycastHit m_hit;
    bool m_spotFound;
};

struct MothLandBehaviour {
    struct MothLandBehaviour__Class *klass;
    MonitorData *monitor;
    struct MothLandBehaviour__Fields fields;
};

struct MothLandBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct MothLandBehaviour__StaticFields {
};

struct MothLandBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothLandBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothLandBehaviour__VTable vtable;
};

struct MothSeekBehaviour__Fields {
    struct EntityBehaviour__Fields _;
};

struct MothSeekBehaviour {
    struct MothSeekBehaviour__Class *klass;
    MonitorData *monitor;
    struct MothSeekBehaviour__Fields fields;
};

struct MothSeekBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct MothSeekBehaviour__StaticFields {
};

struct MothSeekBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothSeekBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothSeekBehaviour__VTable vtable;
};

struct MothSwarmPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
};

struct MothSwarmPlaceholder {
    struct MothSwarmPlaceholder__Class *klass;
    MonitorData *monitor;
    struct MothSwarmPlaceholder__Fields fields;
};

struct MothSwarmPlaceholder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MothSwarmPlaceholder__StaticFields {
};

struct MothSwarmPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MothSwarmPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MothSwarmPlaceholder__VTable vtable;
};

enum class PetrifiedOwlAttackCategory__Enum : int32_t {
    Common = 0x00000000,
    Special = 0x00000001,
    NonAttack = 0x00000002,
    Cinematic = 0x00000003,
};

struct PetrifiedOwlAttackCategory__Enum__Boxed {
    struct PetrifiedOwlAttackCategory__Enum__Class *klass;
    MonitorData *monitor;
    PetrifiedOwlAttackCategory__Enum value;
    
};

struct __declspec(align(8)) PetrifiedOwlBehaviourSettings__Fields {
    struct PetrifiedOwlBossEntity_Phases__Enum__Array *AllowedPhases;
    bool IsBlocking;
    PetrifiedOwlAttackCategory__Enum Category;
    
};

struct PetrifiedOwlBehaviourSettings {
    struct PetrifiedOwlBehaviourSettings__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBehaviourSettings__Fields fields;
};

enum class PetrifiedOwlBossEntity_Phases__Enum : int32_t {
    NotStarted = 0x00000000,
    Fight1 = 0x00000001,
    Escape1 = 0x00000002,
    Fight2 = 0x00000003,
    Fight3 = 0x00000004,
    Completed = 0x00000005,
};

struct PetrifiedOwlBossEntity_Phases__Enum__Boxed {
    struct PetrifiedOwlBossEntity_Phases__Enum__Class *klass;
    MonitorData *monitor;
    PetrifiedOwlBossEntity_Phases__Enum value;
    
};

struct PetrifiedOwlBossEntity_Phases__Enum__Array {
    struct PetrifiedOwlBossEntity_Phases__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    PetrifiedOwlBossEntity_Phases__Enum vector[32];
};

struct PetrifiedOwlBossEntity_Phases__Enum__VTable {
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

struct PetrifiedOwlBossEntity_Phases__Enum__StaticFields {
};

struct PetrifiedOwlBossEntity_Phases__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossEntity_Phases__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossEntity_Phases__Enum__VTable vtable;
};

struct PetrifiedOwlBossEntity_Phases__Enum__Array__VTable {
};

struct PetrifiedOwlBossEntity_Phases__Enum__Array__StaticFields {
};

struct PetrifiedOwlBossEntity_Phases__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossEntity_Phases__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossEntity_Phases__Enum__Array__VTable vtable;
};

struct PetrifiedOwlAttackCategory__Enum__VTable {
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

struct PetrifiedOwlAttackCategory__Enum__StaticFields {
};

struct PetrifiedOwlAttackCategory__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlAttackCategory__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlAttackCategory__Enum__VTable vtable;
};

struct PetrifiedOwlBehaviourSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PetrifiedOwlBehaviourSettings__StaticFields {
};

struct PetrifiedOwlBehaviourSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBehaviourSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBehaviourSettings__VTable vtable;
};

struct EntityBehaviourNode_1_PetrifiedOwlBossEntity___Fields {
    struct EntityBehaviourNode__Fields _;
};

struct EntityBehaviourNode_1_PetrifiedOwlBossEntity_ {
    struct EntityBehaviourNode_1_PetrifiedOwlBossEntity___Class *klass;
    MonitorData *monitor;
    struct EntityBehaviourNode_1_PetrifiedOwlBossEntity___Fields fields;
};

struct PetrifiedOwlBossBaseBehaviour__Fields {
    struct EntityBehaviourNode_1_PetrifiedOwlBossEntity___Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct PetrifiedOwlBehaviourSettings *Settings;
    struct PetrifiedOwlBossBaseBehaviour *CopyDataFrom;
    struct CancellableController *m_cancellableController;
    struct HitReactionController *m_hitReactionController;
};

struct PetrifiedOwlBossBaseBehaviour {
    struct PetrifiedOwlBossBaseBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossBaseBehaviour__Fields fields;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *TimelineBackground;
    struct MoonTimeline *TimelineWait;
    struct MoonTimeline *TimelineAttack;
    struct MoonTimeline *TimelineOffScreen;
    float AttackDelay;
    float PostAttackDelay;
    bool m_isMirrored;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates *m_states;
    struct Enum__Array *Entries;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour {
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour__Fields fields;
};

}
