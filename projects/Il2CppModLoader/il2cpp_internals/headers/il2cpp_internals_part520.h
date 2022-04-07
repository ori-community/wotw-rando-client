namespace app {
struct CheckpointFunctionality__Boxed {
  struct CheckpointFunctionality__Class *klass;
  struct MonitorData *monitor;
  struct CheckpointFunctionality fields;
};
struct ChangeStateOnCondition__Fields {
  struct MonoBehaviour__Fields _;
  struct Condition_1 * Condition;
  struct ChangeStateSetupHolder * StateChange;
  struct StateChangeDefinition * StateChangeOld;
  bool CreateCheckpointOnStateChange;
  struct CheckpointFunctionality Checkpoint;
  bool m_hasBeenUpgraded;
  bool m_hasBeenTriggered;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct ChangeStateOnCondition {
  struct ChangeStateOnCondition__Class *klass;
  struct MonitorData *monitor;
  struct ChangeStateOnCondition__Fields fields;
};
struct __declspec(align(8)) KwolokBossLocomotion_StayAtRangeSettings__Fields {
  struct Vector2 Range;
  struct Vector2 IdleTimeBetweenMoves;
};
struct KwolokBossLocomotion_StayAtRangeSettings {
  struct KwolokBossLocomotion_StayAtRangeSettings__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion_StayAtRangeSettings__Fields fields;
};
struct __declspec(align(8)) KwolokBossButtSlamBehaviour_States__Fields {
  struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState * Positioning;
  struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState * Attack;
};
struct KwolokBossButtSlamBehaviour_States {
  struct KwolokBossButtSlamBehaviour_States__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossButtSlamBehaviour_States__Fields fields;
};
struct __declspec(align(8)) KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields {
  struct KwolokBossButtSlamBehaviour * m_behaviour;
  struct StateMachine_2 * m_stateMachine;
  struct KwolokBossButtSlamBehaviour_States * m_states;
  struct KwolokBossEntity * m_entity;
};
struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState {
  struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields fields;
};
struct KwolokBossEntity__Fields {
  struct EnemyEntity__Fields _;
  struct EntityPlaceholderScalingLink * ScalingLink;
  struct SoundHost * MainSoundHost;
  struct Event_1 * BodyEnterWaterEvent;
  struct Event_1 * BodyExitWaterEvent;
  struct Transform * BodyReferencePosition;
  bool m_bodyConsideredInWater;
  struct Rect m_bodyPositionRect;
  struct Transform * StinkSpiritCenterBone;
  struct Transform * MouthProjectileShootBone;
  struct GameObject * ColliderParentObject;
  int32_t m_fightLayer;
  int32_t m_chaseLayer;
  struct Collider__Array * m_colliders;
  struct DamageDealer__Array * m_allDamageDealers;
  struct SkinnedMeshRenderer * HeadSkinnedMesh;
  struct FloatAnimationParameter * KwolokTongueLength;
  float MinTongueLength;
  float MaxTongueLength;
  struct MoonTimeline * TentacleShakeTimeline;
  struct MoonAnimation * StinkSpiritLookAtBlendAnimation;
  struct Transform * StinkSpiritLookAtReferenceBone;
  struct MoonAnimation * KwolokLookAtBlendAnimation;
  struct Transform * KwolokLookAtReferenceBone;
  struct Vector2 AnglesForFullLookAt;
  struct Transform * LookAtMaxValueProvider;
  struct FloatAnimationParameter * m_stinkSpiritLookHorizontalRatio;
  struct FloatAnimationParameter * m_stinkSpiritLookVerticalRatio;
  struct FloatAnimationParameter * m_kwolokLookHorizontalRatio;
  struct FloatAnimationParameter * m_kwolokLookVerticalRatio;
  struct ActiveAnimationHandle m_activeStinkSpiritLookAtBlendAnimation;
  struct ActiveAnimationHandle m_activeKwolokLookAtBlendAnimation;
  struct IKPostprocess * KwolokTongueIK;
  struct Transform * KwolokTongueIKTarget;
  struct IKPostprocess * FrontLeftLegIK;
  struct IKPostprocess * FrontRightLegIK;
  struct IKPostprocess * BackLeftLegIK;
  struct IKPostprocess * BackRightLegIK;
  struct KwolokBossEntity_ModifyDesiredLegsIKDelegate * ModifyLegsIK;
  struct AnimationCurve * LookAngleChangeSpeedForAngleDelta;
  struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate * ModifyLookAngleChangeSpeed;
  struct KwolokBossEntity_ModifyDesiredLookAngleDelegate * ModifyDesiredLookAngle;
  struct KwolokBossBaseBehaviour * IntroBehaviour;
  struct KwolokBossBaseBehaviour * EscapeBehaviour;
  struct KwolokBossBaseBehaviour * DryPhaseStartBehaviour;
  struct KwolokBossBaseBehaviour * CleanWaterPhaseStartBehaviour;
  struct SerializedByteUberState * PhasesState;
  float TransitionRatioCleanWater;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * TransitionToCleanWater;
  float TransitionRatioCorruptedWater;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * TransitionToCorruptedWater;
  struct MoonAnimator * StinkSpiritAnimator;
  struct MoonAnimator * KwolokAnimator;
  struct FloatAnimationParameter * m_lookAngle;
  struct AnimationCurve * MinLookAngleForPosition;
  struct AnimationCurve * MaxLookAngleForPosition;
  struct FloatAnimationParameter * m_bodyHeightRatio;
  struct FloatAnimationParameter * m_feetHeightRatio;
  struct FloatAnimationParameter * m_tongueAttackHeightRatio;
  struct MoonReference_1_KwolokBossBehaviourZones_ * ArenaBehaviourZones;
  struct Vector2 AttackCooldownTimeRandomRange;
  struct GameObject * HitEffectPrefab;
  struct HitFlash3D * StinkSpiritFlash;
  struct AnimationCurve * DamageRequiredForStaggerCurve;
  float m_timeSinceLastHitReact;
  float m_accumulatedHitDamage;
  bool m_isInHitAccumulationWindow;
  bool m_isInHitReactionAllowedWindow;
  struct KwolokBossEntity_OnDamageReceivedDelegate * OnDamageReceivedCallback;
  struct MoonReference_1_UnityEngine_Transform_ * DryPhaseStartCheckpointPosition;
  struct MoonReference_1_UnityEngine_Transform_ * EscapePhaseStartCheckpointPosition;
  struct MoonReference_1_UnityEngine_Transform_ * DefeatedPhaseStartCheckpointPosition;
  struct KwolokBossEntity_ModifyCameraTargetsDelegate * ModifyCameraTargets;
  struct List_1_KwolokBossBaseBehaviour_ * m_executingBehaviours;
  bool m_isOnCooldown;
  int32_t m_resetFrameID;
  bool m_isEnabling;
  float TimeToTurnHead;
  struct Transform * HitFlashTracker;
  struct IUberState__Array * m_affectingUberStates;
  struct KwolokBossBaseBehaviour * SpewBehaviour;
  struct KwolokBossBaseBehaviour * CeilingSlamBehaviour;
  struct KwolokBossBaseBehaviour * SpitBehaviour;
  struct KwolokBossBaseBehaviour * TentacleStabBehaviour;
  struct KwolokBossBaseBehaviour * TongueBehaviour;
  struct KwolokBossBaseBehaviour * UnderwaterPullBehaviour;
  struct KwolokBossBaseBehaviour * SpitWormBehaviour;
  struct KwolokBossBaseBehaviour * CannonBehaviour;
};
struct KwolokBossEntity {
  struct KwolokBossEntity__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossEntity__Fields fields;
};
struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossEntity_ModifyDesiredLegsIKDelegate {
  struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__Fields fields;
};
struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate {
  struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Fields fields;
};
struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossEntity_ModifyDesiredLookAngleDelegate {
  struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_KwolokBossBehaviourZones___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_KwolokBossBehaviourZones_ * m_cachedProxyType;
  struct KwolokBossBehaviourZones * m_volatileValue;
};
struct MoonReference_1_KwolokBossBehaviourZones_ {
  struct MoonReference_1_KwolokBossBehaviourZones___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_KwolokBossBehaviourZones___Fields fields;
};
struct IMoonType_1_KwolokBossBehaviourZones_ {
  struct IMoonType_1_KwolokBossBehaviourZones___Class *klass;
  struct MonitorData *monitor;
};
struct KwolokBossBehaviourZones__Fields {
  struct MonoBehaviour__Fields _;
  struct CageStructureTool * LeftZone;
  struct CageStructureTool * CenterZone;
  struct CageStructureTool * RightZone;
  struct CageStructureTool * TopLeftZone;
  struct CageStructureTool * TopRightZone;
  struct CageStructureTool * WaterZone;
  struct CageStructureTool * WaterSurfaceZone;
  struct CageStructureTool * WaterDeepZone;
  struct CageStructureTool * BottomSpikeZone;
  struct List_1_KwolokBossBehaviourZones_ZoneAndState_ * ZoneStateOfTargetL;
  struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * ZoneStateOfTargetD;
  struct List_1_KwolokBossBehaviourZones_ZoneAndState_ * ZoneStateOfKwolokL;
  struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * ZoneStateOfKwolokD;
};
struct KwolokBossBehaviourZones {
  struct KwolokBossBehaviourZones__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossBehaviourZones__Fields fields;
};
struct __declspec(align(8)) List_1_KwolokBossBehaviourZones_ZoneAndState___Fields {
  struct KwolokBossBehaviourZones_ZoneAndState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_KwolokBossBehaviourZones_ZoneAndState_ {
  struct List_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};
struct __declspec(align(8)) KwolokBossBehaviourZones_ZoneAndState__Fields {
  struct CageStructureTool * Cage;
  bool IsIn;
};
struct KwolokBossBehaviourZones_ZoneAndState {
  struct KwolokBossBehaviourZones_ZoneAndState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossBehaviourZones_ZoneAndState__Fields fields;
};
struct KwolokBossBehaviourZones_ZoneAndState__Array {
  struct KwolokBossBehaviourZones_ZoneAndState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KwolokBossBehaviourZones_ZoneAndState * vector[32];
};
struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState_ {
  struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_CageStructureTool_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
  struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
  int32_t hashCode;
  int32_t next;
  struct CageStructureTool * key;
  struct KwolokBossBehaviourZones_ZoneAndState * value;
};
struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array {
  struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ vector[32];
};
struct IEqualityComparer_1_CageStructureTool_ {
  struct IEqualityComparer_1_CageStructureTool___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields {
  struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};
struct CageStructureTool__Array {
  struct CageStructureTool__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CageStructureTool * vector[32];
};
struct IEnumerator_1_CageStructureTool_ {
  struct IEnumerator_1_CageStructureTool___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields {
  struct Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Fields fields;
};
struct ICollection_1_CageStructureTool_ {
  struct ICollection_1_CageStructureTool___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_KwolokBossBehaviourZones_ZoneAndState_ {
  struct ICollection_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
  struct CageStructureTool * key;
  struct KwolokBossBehaviourZones_ZoneAndState * value;
};
struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Boxed {
  struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ fields;
};
struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array {
  struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ {
  struct IEnumerator_1_KeyValuePair_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_CageStructureTool_ {
  struct IEnumerable_1_CageStructureTool___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_KwolokBossBehaviourZones_ZoneAndState_ {
  struct IEnumerable_1_KwolokBossBehaviourZones_ZoneAndState___Class *klass;
  struct MonitorData *monitor;
};
struct HitFlash3D__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * FlashAnimationObj;
  bool PlayAutomatically;
  struct LegacyTimelineSequence * m_flashSequence;
  struct List_1_HitFlash3D_Flash_ * m_flashEntries;
};
struct HitFlash3D {
  struct HitFlash3D__Class *klass;
  struct MonitorData *monitor;
  struct HitFlash3D__Fields fields;
};
struct __declspec(align(8)) List_1_HitFlash3D_Flash___Fields {
  struct HitFlash3D_Flash__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_HitFlash3D_Flash_ {
  struct List_1_HitFlash3D_Flash___Class *klass;
  struct MonitorData *monitor;
  struct List_1_HitFlash3D_Flash___Fields fields;
};
struct __declspec(align(8)) HitFlash3D_Flash__Fields {
  struct GameObject * Target;
  struct UberColorAnimator * Animator;
  float Amount;
};
struct HitFlash3D_Flash {
  struct HitFlash3D_Flash__Class *klass;
  struct MonitorData *monitor;
  struct HitFlash3D_Flash__Fields fields;
};
struct HitFlash3D_Flash__Array {
  struct HitFlash3D_Flash__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HitFlash3D_Flash * vector[32];
};
enum UberColorAnimator_ColorName__Enum : int32_t {
  UberColorAnimator_ColorName__Enum_Color = 0,
  UberColorAnimator_ColorName__Enum_TintColor = 1,
  UberColorAnimator_ColorName__Enum_AdditiveLayerColor = 2,
  UberColorAnimator_ColorName__Enum_AdditiveLayerDistortColor = 3,
  UberColorAnimator_ColorName__Enum_AdditiveLayerExtraColor = 4,
  UberColorAnimator_ColorName__Enum_MultiplyLayerColor = 5,
  UberColorAnimator_ColorName__Enum_MultiplyLayerExtraColor = 6,
  UberColorAnimator_ColorName__Enum_MultiplyLayerThirdColor = 7,
  UberColorAnimator_ColorName__Enum_MultiplyLayerDistortColor = 8,
};
struct UberColorAnimator_ColorName__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberColorAnimator_ColorName__Enum value;
};
struct UberColorAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct UberShaderProperty_Color__Enum__Array * ColorProperties;
  struct GameObject * ExternalTarget;
  struct Color Color;
  bool Red;
  bool Green;
  bool Blue;
  bool Alpha;
  struct AnimationCurve * AnimationCurve;
  enum UberColorAnimator_ColorName__Enum ColorTarget;
  struct Color m_originalColor;
  struct Renderer * m_renderer;
};
struct UberColorAnimator {
  struct UberColorAnimator__Class *klass;
  struct MonitorData *monitor;
  struct UberColorAnimator__Fields fields;
};
struct IEnumerator_1_HitFlash3D_Flash_ {
  struct IEnumerator_1_HitFlash3D_Flash___Class *klass;
  struct MonitorData *monitor;
};
struct KwolokBossEntity_OnDamageReceivedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossEntity_OnDamageReceivedDelegate {
  struct KwolokBossEntity_OnDamageReceivedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossEntity_OnDamageReceivedDelegate__Fields fields;
};
struct KwolokBossEntity_ModifyCameraTargetsDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossEntity_ModifyCameraTargetsDelegate {
  struct KwolokBossEntity_ModifyCameraTargetsDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossEntity_ModifyCameraTargetsDelegate__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_CameraTargetSettings___Fields {
  struct CameraTargetSettings__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_CameraTargetSettings_ {
  struct List_1_Moon_CameraTargetSettings___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_CameraTargetSettings___Fields fields;
};
struct CameraTargetSettings {
  struct Vector3 Pos;
  struct Vector2 Padding;
  float Weight;
  struct ICameraTarget * Target;
};
struct CameraTargetSettings__Boxed {
  struct CameraTargetSettings__Class *klass;
  struct MonitorData *monitor;
  struct CameraTargetSettings fields;
};
struct CameraTargetSettings__Array {
  struct CameraTargetSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CameraTargetSettings vector[32];
};
struct ICameraTarget {
  struct ICameraTarget__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_CameraTargetSettings_ {
  struct IEnumerator_1_Moon_CameraTargetSettings___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_KwolokBossBaseBehaviour___Fields {
  struct KwolokBossBaseBehaviour__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_KwolokBossBaseBehaviour_ {
  struct List_1_KwolokBossBaseBehaviour___Class *klass;
  struct MonitorData *monitor;
  struct List_1_KwolokBossBaseBehaviour___Fields fields;
};
struct KwolokBossBaseBehaviour__Array {
  struct KwolokBossBaseBehaviour__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KwolokBossBaseBehaviour * vector[32];
};
struct IEnumerator_1_KwolokBossBaseBehaviour_ {
  struct IEnumerator_1_KwolokBossBaseBehaviour___Class *klass;
  struct MonitorData *monitor;
};
enum KwolokBossLocomotion_LocomotionMode__Enum : int32_t {
  KwolokBossLocomotion_LocomotionMode__Enum_Idle = 0,
  KwolokBossLocomotion_LocomotionMode__Enum_Follow = 1,
  KwolokBossLocomotion_LocomotionMode__Enum_MoveRequest = 2,
  KwolokBossLocomotion_LocomotionMode__Enum_Overriden = 3,
  KwolokBossLocomotion_LocomotionMode__Enum_Range = 4,
};
struct KwolokBossLocomotion_LocomotionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokBossLocomotion_LocomotionMode__Enum value;
};
struct KwolokBossLocomotion__Fields {
  struct Locomotion__Fields _;
  struct Transform * _FeetTransform_k__BackingField;
  struct Vector3 _FeetPosition_k__BackingField;
  bool _HasArrivedAtTarget_k__BackingField;
  float _Gravity_k__BackingField;
  enum EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
  struct EntityLocomotionTask * _DefaultFSMState_k__BackingField;
  struct KwolokBossEntity * Kwolok;
  struct MoonTimeline * Idle;
  struct MoonAnimation * WalkLeftToRight;
  struct ActiveAnimationHandle m_activeWalkAnimation;
  float m_previousNormalizedAnimationTime;
  float m_normalizedAnimationTime;
  struct IKPostprocess * FrontLeftLegIK;
  struct IKPostprocess * FrontRightLegIK;
  struct IKPostprocess * BackLeftLegIK;
  struct IKPostprocess * BackRightLegIK;
  bool m_isIKLocked;
  float DefaultMaxMovementSpeed;
  struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate * ModifyMaxMovementSpeed;
  float SpeedForMaxFeetHeight;
  struct AnimationCurve * AccelerationCurve;
  struct AnimationCurve * DecelerationCurve;
  struct AnimationCurve * SpeedDecayAtLimits;
  struct KwolokBossLocomotion_ModifyAccelerationDelegate * ModifyAcceleration;
  struct KwolokBossLocomotion_ModifyBodyHeightDelegate * ModifyBodyHeight;
  float WalkLeftLimit;
  float WalkRightLimit;
  float BodyHeightLerpTime;
  float BodyHeightAdjustmentThreshold;
  float BodyHeightDryPhase;
  float BodyHeightWaterPhase;
  struct Vector2 FollowCooldownTimeRandomRange;
  float m_followCooldownTimer;
  float LookAngleChangeSpeed;
  struct KwolokBossLocomotion_StayAtRangeSettings * DefaultRangeSettings;
  struct Action_1_KwolokBossLocomotion_StayAtRangeSettings_ * ModifyStayAtRangeSettingsEvent;
  struct KwolokBossLocomotion_OverrideTurnMultiplier * OnOverrideTurnMultiplier;
  struct List_1_KwolokBossLocomotion_StepSoundInfo_ * StepSoundsLTR;
  struct List_1_KwolokBossLocomotion_StepSoundInfo_ * StepSoundsRTL;
  struct Event_1 * StepEvent;
  float PaddingBeforeRetriggeringNormalized;
  struct Event_1 * WalkLoopEvent;
  struct RTPC * WalkSpeedRTPC;
  struct WwiseEventSystem_SoundHandle m_walkingSoundHandle;
  enum KwolokBossLocomotion_LocomotionMode__Enum m_currentLocomotionMode;
  bool m_isMoving;
  float m_desiredSpeed;
  float m_currentSpeed;
  struct KwolokBossLocomotion_MoveRequest * m_moveRequest;
  struct Vector2 m_rangeModeRange;
  bool m_wasInRange;
  float m_rangeIdleTimer;
  float TestLookAngle;
  float TestDirectionChangeTime;
};
struct KwolokBossLocomotion {
  struct KwolokBossLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion__Fields fields;
};
struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate {
  struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Fields fields;
};
struct KwolokBossLocomotion_ModifyAccelerationDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossLocomotion_ModifyAccelerationDelegate {
  struct KwolokBossLocomotion_ModifyAccelerationDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion_ModifyAccelerationDelegate__Fields fields;
};
struct KwolokBossLocomotion_ModifyBodyHeightDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossLocomotion_ModifyBodyHeightDelegate {
  struct KwolokBossLocomotion_ModifyBodyHeightDelegate__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion_ModifyBodyHeightDelegate__Fields fields;
};
struct Action_1_KwolokBossLocomotion_StayAtRangeSettings___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_KwolokBossLocomotion_StayAtRangeSettings_ {
  struct Action_1_KwolokBossLocomotion_StayAtRangeSettings___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_KwolokBossLocomotion_StayAtRangeSettings___Fields fields;
};
struct KwolokBossLocomotion_OverrideTurnMultiplier__Fields {
  struct MulticastDelegate__Fields _;
};
struct KwolokBossLocomotion_OverrideTurnMultiplier {
  struct KwolokBossLocomotion_OverrideTurnMultiplier__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion_OverrideTurnMultiplier__Fields fields;
};
struct __declspec(align(8)) List_1_KwolokBossLocomotion_StepSoundInfo___Fields {
  struct KwolokBossLocomotion_StepSoundInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_KwolokBossLocomotion_StepSoundInfo_ {
  struct List_1_KwolokBossLocomotion_StepSoundInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_KwolokBossLocomotion_StepSoundInfo___Fields fields;
};
struct __declspec(align(8)) KwolokBossLocomotion_StepSoundInfo__Fields {
  float NormalizedTime;
  struct SoundHost * SoundHost;
  bool WasPlayed;
};
struct KwolokBossLocomotion_StepSoundInfo {
  struct KwolokBossLocomotion_StepSoundInfo__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion_StepSoundInfo__Fields fields;
};
struct KwolokBossLocomotion_StepSoundInfo__Array {
  struct KwolokBossLocomotion_StepSoundInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KwolokBossLocomotion_StepSoundInfo * vector[32];
};
struct IEnumerator_1_KwolokBossLocomotion_StepSoundInfo_ {
  struct IEnumerator_1_KwolokBossLocomotion_StepSoundInfo___Class *klass;
  struct MonitorData *monitor;
};
enum KwolokBossLocomotion_MoveRequest_RequestState__Enum : int32_t {
  KwolokBossLocomotion_MoveRequest_RequestState__Enum_InProgress = 0,
  KwolokBossLocomotion_MoveRequest_RequestState__Enum_Completed = 1,
  KwolokBossLocomotion_MoveRequest_RequestState__Enum_Failed = 2,
};
struct KwolokBossLocomotion_MoveRequest_RequestState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokBossLocomotion_MoveRequest_RequestState__Enum value;
};
struct __declspec(align(8)) KwolokBossLocomotion_MoveRequest__Fields {
  float Target;
  enum KwolokBossLocomotion_MoveRequest_RequestState__Enum State;
  struct String * DebugName;
  float TimeElapsed;
};
struct KwolokBossLocomotion_MoveRequest {
  struct KwolokBossLocomotion_MoveRequest__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossLocomotion_MoveRequest__Fields fields;
};
struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___StaticFields {
};
struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___VTable vtable;
};
struct CheckpointFunctionality__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CheckpointFunctionality__StaticFields {
};
struct CheckpointFunctionality__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CheckpointFunctionality__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CheckpointFunctionality__VTable vtable;
};
struct ChangeStateOnCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
  VirtualInvokeData OnSkipCutscene;
};
struct ChangeStateOnCondition__StaticFields {
};
struct ChangeStateOnCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeStateOnCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeStateOnCondition__VTable vtable;
};
struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___StaticFields {
};
struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___VTable vtable;
};
struct KwolokBossLocomotion_StayAtRangeSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KwolokBossLocomotion_StayAtRangeSettings__StaticFields {
};
struct KwolokBossLocomotion_StayAtRangeSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossLocomotion_StayAtRangeSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossLocomotion_StayAtRangeSettings__VTable vtable;
};
struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__VTable {
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
struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__StaticFields {
};
struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossEntity_ModifyDesiredLegsIKDelegate__VTable vtable;
};
struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__VTable {
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
struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__StaticFields {
};
struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate__VTable vtable;
};
struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__VTable {
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
struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__StaticFields {
};
struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossEntity_ModifyDesiredLookAngleDelegate__VTable vtable;
};
struct IMoonType_1_KwolokBossBehaviourZones___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_KwolokBossBehaviourZones___StaticFields {
};
struct IMoonType_1_KwolokBossBehaviourZones___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_KwolokBossBehaviourZones___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_KwolokBossBehaviourZones___VTable vtable;
};
struct KwolokBossBehaviourZones_ZoneAndState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KwolokBossBehaviourZones_ZoneAndState__StaticFields {
};
struct KwolokBossBehaviourZones_ZoneAndState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossBehaviourZones_ZoneAndState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossBehaviourZones_ZoneAndState__VTable vtable;
};
struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState___StaticFields {
};
struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KwolokBossBehaviourZones_ZoneAndState___VTable vtable;
};
struct List_1_KwolokBossBehaviourZones_ZoneAndState___VTable {
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
struct List_1_KwolokBossBehaviourZones_ZoneAndState___StaticFields {
  struct KwolokBossBehaviourZones_ZoneAndState__Array * _emptyArray;
};
struct List_1_KwolokBossBehaviourZones_ZoneAndState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_KwolokBossBehaviourZones_ZoneAndState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_KwolokBossBehaviourZones_ZoneAndState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___VTable vtable;
};
struct IEqualityComparer_1_CageStructureTool___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_CageStructureTool___StaticFields {
};
struct IEqualityComparer_1_CageStructureTool___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_CageStructureTool___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_CageStructureTool___VTable vtable;
};
struct IEnumerator_1_CageStructureTool___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CageStructureTool___StaticFields {
};
struct IEnumerator_1_CageStructureTool___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CageStructureTool___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CageStructureTool___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___VTable vtable;
};}