namespace app {
enum class KwolokBossEntity_Phases__Enum : int32_t {
    Prefight = 0x00000000,
    Intro = 0x00000001,
    Escape = 0x00000002,
    Dry = 0x00000003,
    CleanWater = 0x00000004,
    CorruptedWater = 0x00000005,
    Defeated = 0x00000006,
    WispCollected = 0x00000007,
};

struct KwolokBossEntity_Phases__Enum__Boxed {
    struct KwolokBossEntity_Phases__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossEntity_Phases__Enum value;
    
};

struct KwolokBossEntity_Phases__Enum__Array {
    struct KwolokBossEntity_Phases__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    KwolokBossEntity_Phases__Enum vector[32];
};

struct KwolokBossEntity_Phases__Enum__VTable {
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

struct KwolokBossEntity_Phases__Enum__StaticFields {
};

struct KwolokBossEntity_Phases__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossEntity_Phases__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossEntity_Phases__Enum__VTable vtable;
};

struct KwolokBossEntity_Phases__Enum__Array__VTable {
};

struct KwolokBossEntity_Phases__Enum__Array__StaticFields {
};

struct KwolokBossEntity_Phases__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossEntity_Phases__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossEntity_Phases__Enum__Array__VTable vtable;
};

struct KwolokAttackCategory__Enum__VTable {
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

struct KwolokAttackCategory__Enum__StaticFields {
};

struct KwolokAttackCategory__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokAttackCategory__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokAttackCategory__Enum__VTable vtable;
};

struct KwolokBehaviourSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBehaviourSettings__StaticFields {
};

struct KwolokBehaviourSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBehaviourSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBehaviourSettings__VTable vtable;
};

struct EntityBehaviourNode_1_KwolokBossEntity___Fields {
    struct EntityBehaviourNode__Fields _;
};

struct EntityBehaviourNode_1_KwolokBossEntity_ {
    struct EntityBehaviourNode_1_KwolokBossEntity___Class *klass;
    MonitorData *monitor;
    struct EntityBehaviourNode_1_KwolokBossEntity___Fields fields;
};

struct KwolokBossBaseBehaviour__Fields {
    struct EntityBehaviourNode_1_KwolokBossEntity___Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct KwolokBehaviourSettings *Settings;
    struct CancellableController *m_cancellableController;
    struct HitReactionController *m_hitReactionController;
};

struct KwolokBossBaseBehaviour {
    struct KwolokBossBaseBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossBaseBehaviour__Fields fields;
};

struct KwolokBossButtSlamBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *PositioningLoopTimeline;
    struct MoonTimeline *ButtSlamTimeline;
    struct FirewhirlBeamSpawner *BeamSpawnerR;
    struct FirewhirlBeamSpawner *BeamSpawnerL;
    struct EventTriggerAnimator *BeamSpawnEvent;
    struct EventTriggerAnimator *LookAngleFreezeWindow;
    struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_ *GroundBreakStateChange;
    struct KwolokBossLocomotion_StayAtRangeSettings *StayAtRangeSettings;
    float MaxMovementSpeed;
    float AccelerationMultiplier;
    float DecelerationMultiplier;
    float PositioningTimeOut;
    float DistanceXToSlam;
    float MinumumPositioningTime;
    struct StateMachine_2 *m_stateMachine;
    struct KwolokBossButtSlamBehaviour_States *m_states;
};

struct KwolokBossButtSlamBehaviour {
    struct KwolokBossButtSlamBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossButtSlamBehaviour__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_Moon_Setups_ChangeStateOnCondition___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_Moon_Setups_ChangeStateOnCondition_ *m_cachedProxyType;
    struct ChangeStateOnCondition *m_volatileValue;
};

struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_ {
    struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___Fields fields;
};

struct IMoonType_1_Moon_Setups_ChangeStateOnCondition_ {
    struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___Class *klass;
    MonitorData *monitor;
};

enum class CheckpointFunctionality_CheckpointPositionMode__Enum : int32_t {
    CharacterPosition = 0x00000000,
    ManualPosition = 0x00000001,
};

struct CheckpointFunctionality_CheckpointPositionMode__Enum__Boxed {
    struct CheckpointFunctionality_CheckpointPositionMode__Enum__Class *klass;
    MonitorData *monitor;
    CheckpointFunctionality_CheckpointPositionMode__Enum value;
    
};

struct CheckpointFunctionality {
    CheckpointFunctionality_CheckpointPositionMode__Enum Mode;
    
    struct Transform *RespawnTransform;
    struct Vector2 RespawnOffset;
    bool RefillHealthAndEnergy;
    bool ApplyRefillInstantly;
};

struct CheckpointFunctionality__Boxed {
    struct CheckpointFunctionality__Class *klass;
    MonitorData *monitor;
    struct CheckpointFunctionality fields;
};

struct ChangeStateOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1 *Condition;
    struct ChangeStateSetupHolder *StateChange;
    struct StateChangeDefinition *StateChangeOld;
    bool CreateCheckpointOnStateChange;
    struct CheckpointFunctionality Checkpoint;
    bool m_hasBeenUpgraded;
    bool m_hasBeenTriggered;
    bool _InvalidateParentTimelineCache_k__BackingField;
};

struct ChangeStateOnCondition {
    struct ChangeStateOnCondition__Class *klass;
    MonitorData *monitor;
    struct ChangeStateOnCondition__Fields fields;
};

struct __declspec(align(8)) KwolokBossLocomotion_StayAtRangeSettings__Fields {
    struct Vector2 Range;
    struct Vector2 IdleTimeBetweenMoves;
};

struct KwolokBossLocomotion_StayAtRangeSettings {
    struct KwolokBossLocomotion_StayAtRangeSettings__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion_StayAtRangeSettings__Fields fields;
};

struct __declspec(align(8)) KwolokBossButtSlamBehaviour_States__Fields {
    struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState *Positioning;
    struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState *Attack;
};

struct KwolokBossButtSlamBehaviour_States {
    struct KwolokBossButtSlamBehaviour_States__Class *klass;
    MonitorData *monitor;
    struct KwolokBossButtSlamBehaviour_States__Fields fields;
};

struct __declspec(align(8)) KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields {
    struct KwolokBossButtSlamBehaviour *m_behaviour;
    struct StateMachine_2 *m_stateMachine;
    struct KwolokBossButtSlamBehaviour_States *m_states;
    struct KwolokBossEntity *m_entity;
};

struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState {
    struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class *klass;
    MonitorData *monitor;
    struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields fields;
};

struct KwolokBossEntity__Fields {
    struct EnemyEntity__Fields _;
    struct EntityPlaceholderScalingLink *ScalingLink;
    struct SoundHost *MainSoundHost;
    struct Event_1 *BodyEnterWaterEvent;
    struct Event_1 *BodyExitWaterEvent;
    struct Transform *BodyReferencePosition;
    bool m_bodyConsideredInWater;
    struct Rect m_bodyPositionRect;
    struct Transform *StinkSpiritCenterBone;
    struct Transform *MouthProjectileShootBone;
    struct GameObject *ColliderParentObject;
    int32_t m_fightLayer;
    int32_t m_chaseLayer;
    struct Collider__Array *m_colliders;
    struct DamageDealer__Array *m_allDamageDealers;
    struct SkinnedMeshRenderer *HeadSkinnedMesh;
    struct FloatAnimationParameter *KwolokTongueLength;
    float MinTongueLength;
    float MaxTongueLength;
    struct MoonTimeline *TentacleShakeTimeline;
    struct MoonAnimation *StinkSpiritLookAtBlendAnimation;
    struct Transform *StinkSpiritLookAtReferenceBone;
    struct MoonAnimation *KwolokLookAtBlendAnimation;
    struct Transform *KwolokLookAtReferenceBone;
    struct Vector2 AnglesForFullLookAt;
    struct Transform *LookAtMaxValueProvider;
    struct FloatAnimationParameter *m_stinkSpiritLookHorizontalRatio;
    struct FloatAnimationParameter *m_stinkSpiritLookVerticalRatio;
    struct FloatAnimationParameter *m_kwolokLookHorizontalRatio;
    struct FloatAnimationParameter *m_kwolokLookVerticalRatio;
    struct ActiveAnimationHandle m_activeStinkSpiritLookAtBlendAnimation;
    struct ActiveAnimationHandle m_activeKwolokLookAtBlendAnimation;
    struct IKPostprocess *KwolokTongueIK;
    struct Transform *KwolokTongueIKTarget;
    struct IKPostprocess *FrontLeftLegIK;
    struct IKPostprocess *FrontRightLegIK;
    struct IKPostprocess *BackLeftLegIK;
    struct IKPostprocess *BackRightLegIK;
    struct KwolokBossEntity_ModifyDesiredLegsIKDelegate *ModifyLegsIK;
    struct AnimationCurve *LookAngleChangeSpeedForAngleDelta;
    struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate *ModifyLookAngleChangeSpeed;
    struct KwolokBossEntity_ModifyDesiredLookAngleDelegate *ModifyDesiredLookAngle;
    struct KwolokBossBaseBehaviour *IntroBehaviour;
    struct KwolokBossBaseBehaviour *EscapeBehaviour;
    struct KwolokBossBaseBehaviour *DryPhaseStartBehaviour;
    struct KwolokBossBaseBehaviour *CleanWaterPhaseStartBehaviour;
    struct SerializedByteUberState *PhasesState;
    float TransitionRatioCleanWater;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *TransitionToCleanWater;
    float TransitionRatioCorruptedWater;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *TransitionToCorruptedWater;
    struct MoonAnimator *StinkSpiritAnimator;
    struct MoonAnimator *KwolokAnimator;
    struct FloatAnimationParameter *m_lookAngle;
    struct AnimationCurve *MinLookAngleForPosition;
    struct AnimationCurve *MaxLookAngleForPosition;
    struct FloatAnimationParameter *m_bodyHeightRatio;
    struct FloatAnimationParameter *m_feetHeightRatio;
    struct FloatAnimationParameter *m_tongueAttackHeightRatio;
    struct MoonReference_1_KwolokBossBehaviourZones_ *ArenaBehaviourZones;
    struct Vector2 AttackCooldownTimeRandomRange;
    struct GameObject *HitEffectPrefab;
    struct HitFlash3D *StinkSpiritFlash;
    struct AnimationCurve *DamageRequiredForStaggerCurve;
    float m_timeSinceLastHitReact;
    float m_accumulatedHitDamage;
    bool m_isInHitAccumulationWindow;
    bool m_isInHitReactionAllowedWindow;
    struct KwolokBossEntity_OnDamageReceivedDelegate *OnDamageReceivedCallback;
    struct MoonReference_1_UnityEngine_Transform_ *DryPhaseStartCheckpointPosition;
    struct MoonReference_1_UnityEngine_Transform_ *EscapePhaseStartCheckpointPosition;
    struct MoonReference_1_UnityEngine_Transform_ *DefeatedPhaseStartCheckpointPosition;
    struct KwolokBossEntity_ModifyCameraTargetsDelegate *ModifyCameraTargets;
    struct List_1_KwolokBossBaseBehaviour_ *m_executingBehaviours;
    bool m_isOnCooldown;
    int32_t m_resetFrameID;
    bool m_isEnabling;
    float TimeToTurnHead;
    struct Transform *HitFlashTracker;
    struct IUberState__Array *m_affectingUberStates;
    struct KwolokBossBaseBehaviour *SpewBehaviour;
    struct KwolokBossBaseBehaviour *CeilingSlamBehaviour;
    struct KwolokBossBaseBehaviour *SpitBehaviour;
    struct KwolokBossBaseBehaviour *TentacleStabBehaviour;
    struct KwolokBossBaseBehaviour *TongueBehaviour;
    struct KwolokBossBaseBehaviour *UnderwaterPullBehaviour;
    struct KwolokBossBaseBehaviour *SpitWormBehaviour;
    struct KwolokBossBaseBehaviour *CannonBehaviour;
};

struct KwolokBossEntity {
    struct KwolokBossEntity__Class *klass;
    MonitorData *monitor;
    struct KwolokBossEntity__Fields fields;
};

struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossEntity_ModifyDesiredLegsIKDelegate {
    struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__Fields fields;
};

struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate {
    struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Fields fields;
};

struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossEntity_ModifyDesiredLookAngleDelegate {
    struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_KwolokBossBehaviourZones___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_KwolokBossBehaviourZones_ *m_cachedProxyType;
    struct KwolokBossBehaviourZones *m_volatileValue;
};

struct MoonReference_1_KwolokBossBehaviourZones_ {
    struct MoonReference_1_KwolokBossBehaviourZones___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_KwolokBossBehaviourZones___Fields fields;
};

struct IMoonType_1_KwolokBossBehaviourZones_ {
    struct IMoonType_1_KwolokBossBehaviourZones___Class *klass;
    MonitorData *monitor;
};

struct KwolokBossBehaviourZones__Fields {
    struct MonoBehaviour__Fields _;
    struct CageStructureTool *LeftZone;
    struct CageStructureTool *CenterZone;
    struct CageStructureTool *RightZone;
    struct CageStructureTool *TopLeftZone;
    struct CageStructureTool *TopRightZone;
    struct CageStructureTool *WaterZone;
    struct CageStructureTool *WaterSurfaceZone;
    struct CageStructureTool *WaterDeepZone;
    struct CageStructureTool *BottomSpikeZone;
    struct List_1_KwolokBossBehaviourZones_ZoneAndState_ *ZoneStateOfTargetL;
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ *ZoneStateOfTargetD;
    struct List_1_KwolokBossBehaviourZones_ZoneAndState_ *ZoneStateOfKwolokL;
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ *ZoneStateOfKwolokD;
};

struct KwolokBossBehaviourZones {
    struct KwolokBossBehaviourZones__Class *klass;
    MonitorData *monitor;
    struct KwolokBossBehaviourZones__Fields fields;
};

struct __declspec(align(8)) List_1_KwolokBossBehaviourZones_ZoneAndState___Fields {
    struct KwolokBossBehaviourZones_ZoneAndState__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_KwolokBossBehaviourZones_ZoneAndState_ {
    struct List_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
    struct List_1_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};

struct __declspec(align(8)) KwolokBossBehaviourZones_ZoneAndState__Fields {
    struct CageStructureTool *Cage;
    bool IsIn;
};

struct KwolokBossBehaviourZones_ZoneAndState {
    struct KwolokBossBehaviourZones_ZoneAndState__Class *klass;
    MonitorData *monitor;
    struct KwolokBossBehaviourZones_ZoneAndState__Fields fields;
};

struct KwolokBossBehaviourZones_ZoneAndState__Array {
    struct KwolokBossBehaviourZones_ZoneAndState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KwolokBossBehaviourZones_ZoneAndState *vector[32];
};

struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState_ {
    struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_CageStructureTool_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
    int32_t hashCode;
    int32_t next;
    struct CageStructureTool *key;
    struct KwolokBossBehaviourZones_ZoneAndState *value;
};

struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array {
    struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ vector[32];
};

struct IEqualityComparer_1_CageStructureTool_ {
    struct IEqualityComparer_1_CageStructureTool___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields {
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};

struct CageStructureTool__Array {
    struct CageStructureTool__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CageStructureTool *vector[32];
};

struct IEnumerator_1_CageStructureTool_ {
    struct IEnumerator_1_CageStructureTool___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields {
    struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};

struct ICollection_1_CageStructureTool_ {
    struct ICollection_1_CageStructureTool___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_KwolokBossBehaviourZones_ZoneAndState_ {
    struct ICollection_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
    struct CageStructureTool *key;
    struct KwolokBossBehaviourZones_ZoneAndState *value;
};

struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Boxed {
    struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ fields;
};

struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array {
    struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
    struct IEnumerator_1_KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_CageStructureTool_ {
    struct IEnumerable_1_CageStructureTool___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_KwolokBossBehaviourZones_ZoneAndState_ {
    struct IEnumerable_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
    MonitorData *monitor;
};

struct HitFlash3D__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *FlashAnimationObj;
    bool PlayAutomatically;
    struct LegacyTimelineSequence *m_flashSequence;
    struct List_1_HitFlash3D_Flash_ *m_flashEntries;
};

struct HitFlash3D {
    struct HitFlash3D__Class *klass;
    MonitorData *monitor;
    struct HitFlash3D__Fields fields;
};

struct __declspec(align(8)) List_1_HitFlash3D_Flash___Fields {
    struct HitFlash3D_Flash__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_HitFlash3D_Flash_ {
    struct List_1_HitFlash3D_Flash___Class *klass;
    MonitorData *monitor;
    struct List_1_HitFlash3D_Flash___Fields fields;
};

struct __declspec(align(8)) HitFlash3D_Flash__Fields {
    struct GameObject *Target;
    struct UberColorAnimator *Animator;
    float Amount;
};

struct HitFlash3D_Flash {
    struct HitFlash3D_Flash__Class *klass;
    MonitorData *monitor;
    struct HitFlash3D_Flash__Fields fields;
};

enum class UberColorAnimator_ColorName__Enum : int32_t {
    Color = 0x00000000,
    TintColor = 0x00000001,
    AdditiveLayerColor = 0x00000002,
    AdditiveLayerDistortColor = 0x00000003,
    AdditiveLayerExtraColor = 0x00000004,
    MultiplyLayerColor = 0x00000005,
    MultiplyLayerExtraColor = 0x00000006,
    MultiplyLayerThirdColor = 0x00000007,
    MultiplyLayerDistortColor = 0x00000008,
};

struct UberColorAnimator_ColorName__Enum__Boxed {
    struct UberColorAnimator_ColorName__Enum__Class *klass;
    MonitorData *monitor;
    UberColorAnimator_ColorName__Enum value;
    
};

struct UberColorAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct UberShaderProperty_Color__Enum__Array *ColorProperties;
    struct GameObject *ExternalTarget;
    struct Color Color;
    bool Red;
    bool Green;
    bool Blue;
    bool Alpha;
    struct AnimationCurve *AnimationCurve;
    UberColorAnimator_ColorName__Enum ColorTarget;
    
    struct Color m_originalColor;
    struct Renderer *m_renderer;
};

struct UberColorAnimator {
    struct UberColorAnimator__Class *klass;
    MonitorData *monitor;
    struct UberColorAnimator__Fields fields;
};

struct HitFlash3D_Flash__Array {
    struct HitFlash3D_Flash__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HitFlash3D_Flash *vector[32];
};

struct IEnumerator_1_HitFlash3D_Flash_ {
    struct IEnumerator_1_HitFlash3D_Flash___Class *klass;
    MonitorData *monitor;
};

struct KwolokBossEntity_OnDamageReceivedDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossEntity_OnDamageReceivedDelegate {
    struct KwolokBossEntity_OnDamageReceivedDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossEntity_OnDamageReceivedDelegate__Fields fields;
};

struct KwolokBossEntity_ModifyCameraTargetsDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossEntity_ModifyCameraTargetsDelegate {
    struct KwolokBossEntity_ModifyCameraTargetsDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossEntity_ModifyCameraTargetsDelegate__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_CameraTargetSettings___Fields {
    struct CameraTargetSettings__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_CameraTargetSettings_ {
    struct List_1_Moon_CameraTargetSettings___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_CameraTargetSettings___Fields fields;
};

struct CameraTargetSettings {
    struct Vector3 Pos;
    struct Vector2 Padding;
    float Weight;
    struct ICameraTarget *Target;
};

struct CameraTargetSettings__Boxed {
    struct CameraTargetSettings__Class *klass;
    MonitorData *monitor;
    struct CameraTargetSettings fields;
};

struct ICameraTarget {
    struct ICameraTarget__Class *klass;
    MonitorData *monitor;
};

struct CameraTargetSettings__Array {
    struct CameraTargetSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraTargetSettings vector[32];
};

struct IEnumerator_1_Moon_CameraTargetSettings_ {
    struct IEnumerator_1_Moon_CameraTargetSettings___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_KwolokBossBaseBehaviour___Fields {
    struct KwolokBossBaseBehaviour__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_KwolokBossBaseBehaviour_ {
    struct List_1_KwolokBossBaseBehaviour___Class *klass;
    MonitorData *monitor;
    struct List_1_KwolokBossBaseBehaviour___Fields fields;
};

struct KwolokBossBaseBehaviour__Array {
    struct KwolokBossBaseBehaviour__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KwolokBossBaseBehaviour *vector[32];
};

struct IEnumerator_1_KwolokBossBaseBehaviour_ {
    struct IEnumerator_1_KwolokBossBaseBehaviour___Class *klass;
    MonitorData *monitor;
};

enum class KwolokBossLocomotion_LocomotionMode__Enum : int32_t {
    Idle = 0x00000000,
    Follow = 0x00000001,
    MoveRequest = 0x00000002,
    Overriden = 0x00000003,
    Range = 0x00000004,
};

struct KwolokBossLocomotion_LocomotionMode__Enum__Boxed {
    struct KwolokBossLocomotion_LocomotionMode__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossLocomotion_LocomotionMode__Enum value;
    
};

struct KwolokBossLocomotion__Fields {
    struct Locomotion__Fields _;
    struct Transform *_FeetTransform_k__BackingField;
    struct Vector3 _FeetPosition_k__BackingField;
    bool _HasArrivedAtTarget_k__BackingField;
    float _Gravity_k__BackingField;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
    
    struct EntityLocomotionTask *_DefaultFSMState_k__BackingField;
    struct KwolokBossEntity *Kwolok;
    struct MoonTimeline *Idle;
    struct MoonAnimation *WalkLeftToRight;
    struct ActiveAnimationHandle m_activeWalkAnimation;
    float m_previousNormalizedAnimationTime;
    float m_normalizedAnimationTime;
    struct IKPostprocess *FrontLeftLegIK;
    struct IKPostprocess *FrontRightLegIK;
    struct IKPostprocess *BackLeftLegIK;
    struct IKPostprocess *BackRightLegIK;
    bool m_isIKLocked;
    float DefaultMaxMovementSpeed;
    struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate *ModifyMaxMovementSpeed;
    float SpeedForMaxFeetHeight;
    struct AnimationCurve *AccelerationCurve;
    struct AnimationCurve *DecelerationCurve;
    struct AnimationCurve *SpeedDecayAtLimits;
    struct KwolokBossLocomotion_ModifyAccelerationDelegate *ModifyAcceleration;
    struct KwolokBossLocomotion_ModifyBodyHeightDelegate *ModifyBodyHeight;
    float WalkLeftLimit;
    float WalkRightLimit;
    float BodyHeightLerpTime;
    float BodyHeightAdjustmentThreshold;
    float BodyHeightDryPhase;
    float BodyHeightWaterPhase;
    struct Vector2 FollowCooldownTimeRandomRange;
    float m_followCooldownTimer;
    float LookAngleChangeSpeed;
    struct KwolokBossLocomotion_StayAtRangeSettings *DefaultRangeSettings;
    struct Action_1_KwolokBossLocomotion_StayAtRangeSettings_ *ModifyStayAtRangeSettingsEvent;
    struct KwolokBossLocomotion_OverrideTurnMultiplier *OnOverrideTurnMultiplier;
    struct List_1_KwolokBossLocomotion_StepSoundInfo_ *StepSoundsLTR;
    struct List_1_KwolokBossLocomotion_StepSoundInfo_ *StepSoundsRTL;
    struct Event_1 *StepEvent;
    float PaddingBeforeRetriggeringNormalized;
    struct Event_1 *WalkLoopEvent;
    struct RTPC *WalkSpeedRTPC;
    struct WwiseEventSystem_SoundHandle m_walkingSoundHandle;
    KwolokBossLocomotion_LocomotionMode__Enum m_currentLocomotionMode;
    
    bool m_isMoving;
    float m_desiredSpeed;
    float m_currentSpeed;
    struct KwolokBossLocomotion_MoveRequest *m_moveRequest;
    struct Vector2 m_rangeModeRange;
    bool m_wasInRange;
    float m_rangeIdleTimer;
    float TestLookAngle;
    float TestDirectionChangeTime;
};

struct KwolokBossLocomotion {
    struct KwolokBossLocomotion__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion__Fields fields;
};

struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate {
    struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Fields fields;
};

struct KwolokBossLocomotion_ModifyAccelerationDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossLocomotion_ModifyAccelerationDelegate {
    struct KwolokBossLocomotion_ModifyAccelerationDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion_ModifyAccelerationDelegate__Fields fields;
};

struct KwolokBossLocomotion_ModifyBodyHeightDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossLocomotion_ModifyBodyHeightDelegate {
    struct KwolokBossLocomotion_ModifyBodyHeightDelegate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion_ModifyBodyHeightDelegate__Fields fields;
};

struct Action_1_KwolokBossLocomotion_StayAtRangeSettings___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_KwolokBossLocomotion_StayAtRangeSettings_ {
    struct Action_1_KwolokBossLocomotion_StayAtRangeSettings___Class *klass;
    MonitorData *monitor;
    struct Action_1_KwolokBossLocomotion_StayAtRangeSettings___Fields fields;
};

struct KwolokBossLocomotion_OverrideTurnMultiplier__Fields {
    struct MulticastDelegate__Fields _;
};

struct KwolokBossLocomotion_OverrideTurnMultiplier {
    struct KwolokBossLocomotion_OverrideTurnMultiplier__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion_OverrideTurnMultiplier__Fields fields;
};

struct __declspec(align(8)) List_1_KwolokBossLocomotion_StepSoundInfo___Fields {
    struct KwolokBossLocomotion_StepSoundInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_KwolokBossLocomotion_StepSoundInfo_ {
    struct List_1_KwolokBossLocomotion_StepSoundInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_KwolokBossLocomotion_StepSoundInfo___Fields fields;
};

struct __declspec(align(8)) KwolokBossLocomotion_StepSoundInfo__Fields {
    float NormalizedTime;
    struct SoundHost *SoundHost;
    bool WasPlayed;
};

struct KwolokBossLocomotion_StepSoundInfo {
    struct KwolokBossLocomotion_StepSoundInfo__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion_StepSoundInfo__Fields fields;
};

struct KwolokBossLocomotion_StepSoundInfo__Array {
    struct KwolokBossLocomotion_StepSoundInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KwolokBossLocomotion_StepSoundInfo *vector[32];
};

struct IEnumerator_1_KwolokBossLocomotion_StepSoundInfo_ {
    struct IEnumerator_1_KwolokBossLocomotion_StepSoundInfo___Class *klass;
    MonitorData *monitor;
};

enum class KwolokBossLocomotion_MoveRequest_RequestState__Enum : int32_t {
    InProgress = 0x00000000,
    Completed = 0x00000001,
    Failed = 0x00000002,
};

struct KwolokBossLocomotion_MoveRequest_RequestState__Enum__Boxed {
    struct KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossLocomotion_MoveRequest_RequestState__Enum value;
    
};

struct __declspec(align(8)) KwolokBossLocomotion_MoveRequest__Fields {
    float Target;
    KwolokBossLocomotion_MoveRequest_RequestState__Enum State;
    
    struct String *DebugName;
    float TimeElapsed;
};

struct KwolokBossLocomotion_MoveRequest {
    struct KwolokBossLocomotion_MoveRequest__Class *klass;
    MonitorData *monitor;
    struct KwolokBossLocomotion_MoveRequest__Fields fields;
};

struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

}
