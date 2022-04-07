namespace app {
struct MantisJumpAttackSettings__Fields {
  struct MonoBehaviour__Fields _;
  struct MantisJumpAttackSettings_Settings * NoAOE;
  struct MoonReference_1_UnityEngine_Transform_ * InstantiationLocation;
  struct Vector3 InstantiationOffset;
  bool ApplyRotation;
  bool ProjectOnGround;
  bool ProjectYOnly;
};
struct MantisJumpAttackSettings {
  struct MantisJumpAttackSettings__Class *klass;
  struct MonitorData *monitor;
  struct MantisJumpAttackSettings__Fields fields;
};
struct __declspec(align(8)) MantisJumpAttackSettings_Settings__Fields {
  struct MantisJumpAttackDamageDealer * Prefab;
  float Damage;
  enum DamageWeight__Enum DamageWeight;
};
struct MantisJumpAttackSettings_Settings {
  struct MantisJumpAttackSettings_Settings__Class *klass;
  struct MonitorData *monitor;
  struct MantisJumpAttackSettings_Settings__Fields fields;
};
struct MantisJumpAttackDamageDealer__Fields {
  struct MonoBehaviour__Fields _;
  struct DamageDealer * DamageDealer;
};
struct MantisJumpAttackDamageDealer {
  struct MantisJumpAttackDamageDealer__Class *klass;
  struct MonitorData *monitor;
  struct MantisJumpAttackDamageDealer__Fields fields;
};
enum MantisSpawnType__Enum : int32_t {
  MantisSpawnType__Enum_Instant = 0,
  MantisSpawnType__Enum_Emerge = 1,
  MantisSpawnType__Enum_FromForeground = 2,
  MantisSpawnType__Enum_FromBackground = 3,
};
struct MantisSpawnType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MantisSpawnType__Enum value;
};
struct MantisGrayboxEntity__Fields {
  struct EnemyEntity__Fields _;
  struct Action * OnRespawned;
  enum DamageWeight__Enum m_defaultTouchDamageWeight;
  struct IgnoreGoThroughPlatforms * m_ignoreGoThroughs;
  struct DamageDealer * m_hitbox;
  float m_baseJumpAttackCooldown;
  int32_t ShockwaveAttackBeamCount;
  float ShockwaveAttackDamageAmount;
  struct List_1_FirewhirlBeamSpawner_ * ShockwaveSpawners;
  struct RetaliationRuleHandler * RetaliationRule;
  struct Switch_1 * FirstJumpSwitch;
  struct Switch_1 * SecondJumpSwitch;
  struct Switch_1 * ThirdJumpSwitch;
  enum MantisSpawnType__Enum _SpawnType_k__BackingField;
};
struct MantisGrayboxEntity {
  struct MantisGrayboxEntity__Class *klass;
  struct MonitorData *monitor;
  struct MantisGrayboxEntity__Fields fields;
};
struct __declspec(align(8)) RetaliationRuleHandler__Fields {
  struct RetaliationRuleHandler_DamageTime * RetaliationConditions;
  float RetaliationActivationTimeWindow;
  struct Action * OnRetaliationContitionMet;
  float m_retaliationAllowedTimer;
  struct List_1_RetaliationRuleHandler_DamageTime_ * m_takenDamageElapsedTime;
};
struct RetaliationRuleHandler {
  struct RetaliationRuleHandler__Class *klass;
  struct MonitorData *monitor;
  struct RetaliationRuleHandler__Fields fields;
};
struct __declspec(align(8)) List_1_AbilityType___Fields {
  struct AbilityType__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AbilityType_ {
  struct List_1_AbilityType___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AbilityType___Fields fields;
};
struct __declspec(align(8)) RetaliationRuleHandler_DamageTime__Fields {
  float Damage;
  float Time;
};
struct RetaliationRuleHandler_DamageTime {
  struct RetaliationRuleHandler_DamageTime__Class *klass;
  struct MonitorData *monitor;
  struct RetaliationRuleHandler_DamageTime__Fields fields;
};
struct __declspec(align(8)) List_1_RetaliationRuleHandler_DamageTime___Fields {
  struct RetaliationRuleHandler_DamageTime__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RetaliationRuleHandler_DamageTime_ {
  struct List_1_RetaliationRuleHandler_DamageTime___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RetaliationRuleHandler_DamageTime___Fields fields;
};
struct RetaliationRuleHandler_DamageTime__Array {
  struct RetaliationRuleHandler_DamageTime__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RetaliationRuleHandler_DamageTime * vector[32];
};
struct IEnumerator_1_RetaliationRuleHandler_DamageTime_ {
  struct IEnumerator_1_RetaliationRuleHandler_DamageTime___Class *klass;
  struct MonitorData *monitor;
};
struct CharacterEnvironmentForceController__Fields {
  struct MonoBehaviour__Fields _;
  struct PlatformMovement * PlatformMovement;
  float LandImpulsePerUnitOfSpeed;
  float LandMaxImpulse;
  float LandMinFallTime;
  struct Transform * CenterOfMassPoint;
  struct Transform * GroundPoint;
  float CenterOfMassMotionImpulse;
  struct FloatRange_1 GroundImpulseRange;
  float GroundImpulseLandingTimeout;
  bool useDebug;
  float Weight;
  struct Vitals * Vitals;
  float DamageForceTransferToGround;
  struct Collider * GroundCollider;
  struct Vector3 GroundNormal;
  struct Vector3 m_oldVelocity;
  struct Vector3 m_oldCenterPos;
  struct Vector3 m_oldCenterVelocity;
  struct Rigidbody * m_groundRigidbody;
};
struct CharacterEnvironmentForceController {
  struct CharacterEnvironmentForceController__Class *klass;
  struct MonitorData *monitor;
  struct CharacterEnvironmentForceController__Fields fields;
};
struct MantisJumpAttackDamageDealer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MantisJumpAttackDamageDealer__StaticFields {
};
struct MantisJumpAttackDamageDealer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisJumpAttackDamageDealer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisJumpAttackDamageDealer__VTable vtable;
};
struct MantisJumpAttackSettings_Settings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MantisJumpAttackSettings_Settings__StaticFields {
};
struct MantisJumpAttackSettings_Settings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisJumpAttackSettings_Settings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisJumpAttackSettings_Settings__VTable vtable;
};
struct MantisJumpAttackSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MantisJumpAttackSettings__StaticFields {
};
struct MantisJumpAttackSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisJumpAttackSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisJumpAttackSettings__VTable vtable;
};
struct List_1_AbilityType___VTable {
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
struct List_1_AbilityType___StaticFields {
  struct AbilityType__Enum__Array * _emptyArray;
};
struct List_1_AbilityType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AbilityType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AbilityType___VTable vtable;
};
struct RetaliationRuleHandler_DamageTime__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RetaliationRuleHandler_DamageTime__StaticFields {
};
struct RetaliationRuleHandler_DamageTime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RetaliationRuleHandler_DamageTime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RetaliationRuleHandler_DamageTime__VTable vtable;
};
struct IEnumerator_1_RetaliationRuleHandler_DamageTime___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_RetaliationRuleHandler_DamageTime___StaticFields {
};
struct IEnumerator_1_RetaliationRuleHandler_DamageTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_RetaliationRuleHandler_DamageTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_RetaliationRuleHandler_DamageTime___VTable vtable;
};
struct List_1_RetaliationRuleHandler_DamageTime___VTable {
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
struct List_1_RetaliationRuleHandler_DamageTime___StaticFields {
  struct RetaliationRuleHandler_DamageTime__Array * _emptyArray;
};
struct List_1_RetaliationRuleHandler_DamageTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_RetaliationRuleHandler_DamageTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_RetaliationRuleHandler_DamageTime___VTable vtable;
};
struct RetaliationRuleHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RetaliationRuleHandler__StaticFields {
  struct List_1_AbilityType_ * AbilitiesFilteredOut;
};
struct RetaliationRuleHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RetaliationRuleHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RetaliationRuleHandler__VTable vtable;
};
struct MantisGrayboxEntity__VTable {
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
struct MantisGrayboxEntity__StaticFields {
};
struct MantisGrayboxEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisGrayboxEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisGrayboxEntity__VTable vtable;
};
struct CharacterEnvironmentForceController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct CharacterEnvironmentForceController__StaticFields {
};
struct CharacterEnvironmentForceController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterEnvironmentForceController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterEnvironmentForceController__VTable vtable;
};
struct MantisHorizontalJumpAttackBehaviour__VTable {
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
  VirtualInvokeData IsBlockingInterruption;
};
struct MantisHorizontalJumpAttackBehaviour__StaticFields {
};
struct MantisHorizontalJumpAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisHorizontalJumpAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisHorizontalJumpAttackBehaviour__VTable vtable;
};

struct MantisHorizontalJumpAttackBehaviour_c {
  struct MantisHorizontalJumpAttackBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct MantisHorizontalJumpAttackBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MantisHorizontalJumpAttackBehaviour_c__StaticFields {
  struct MantisHorizontalJumpAttackBehaviour_c * __9;
  struct Action * __9__68_0;
  struct Action * __9__69_0;
  struct Action * __9__70_0;
};
struct MantisHorizontalJumpAttackBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisHorizontalJumpAttackBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisHorizontalJumpAttackBehaviour_c__VTable vtable;
};

enum MantisJumpAttackBehaviour_JumpCountType__Enum : int32_t {
  MantisJumpAttackBehaviour_JumpCountType__Enum_SingleJump = 0,
  MantisJumpAttackBehaviour_JumpCountType__Enum_TripleJump = 1,
};
struct MantisJumpAttackBehaviour_JumpCountType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MantisJumpAttackBehaviour_JumpCountType__Enum value;
};
enum MantisJumpAttackBehaviour_State__Enum : int32_t {
  MantisJumpAttackBehaviour_State__Enum_Unset = 0,
  MantisJumpAttackBehaviour_State__Enum_Anticipation = 1,
  MantisJumpAttackBehaviour_State__Enum_Main = 2,
  MantisJumpAttackBehaviour_State__Enum_Land = 3,
  MantisJumpAttackBehaviour_State__Enum_LandAndJump = 4,
};
struct MantisJumpAttackBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MantisJumpAttackBehaviour_State__Enum value;
};
struct MantisJumpAttackBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
  enum MantisJumpAttackBehaviour_JumpCountType__Enum AttackType;
  struct MoonTimeline * Anticipation;
  struct MoonTimeline * TurnAnticipation;
  struct MoonTimeline * Main;
  struct MoonTimeline * Land;
  struct MoonTimeline * LandAndJump;
  struct MoonTimeline * TurnLandAndJump;
  struct MantisJumpAttackSettings * JumpAttackSettings;
  struct MantisJumpAttackSettings * MidJumpAttackSettings;
  struct MoonTimeline * MidJumpLandEffect;
  struct MoonTimeline * LastJumpLandEffect;
  struct MoonTimeline * m_currentTimeline;
  struct GroundEntityLocomotion * m_locomotion;
  struct CharacterPlatformMovement * m_platformMovement;
  float m_initGravity;
  float m_initDeceleration;
  struct Vector3 m_playerSmoothSpeed;
  struct Vector2 m_jumpSpeed;
  bool m_jumpDirectionRight;
  float m_turnDirection;
  float LandDecelerationMultiplier;
  float ShortJumpHeight;
  float JumpHeight1;
  float JumpDistance1;
  float JumpHeight2;
  float JumpDistance2;
  float JumpHeight3;
  float JumpDistance3;
  float Gravity;
  float MaxFallSpeed;
  float Acceleration;
  struct RootMotionProcessorData * RootMotion;
  struct Transform * StompPrefab;
  struct MantisGrayboxEntity * m_mantisEntity;
  struct GroundEntityMovementProcessor * m_movementProcessor;
  float m_lastFrameVerticalOffsetInAnticipation;
  bool m_isTurning;
  struct Vector3 m_targetPosition;
  int32_t m_totalJumps;
  float m_initMaxFallSpeed;
  struct Vector2 m_lastVelocity;
  bool m_tookOffTheGround;
  enum DamageWeight__Enum FallTouchDamageWeight;
  struct CharacterEnvironmentForceController * EnvironmentForceController;
  float GroundImpulse;
  bool DebugPauseOnLand;
  enum MantisJumpAttackBehaviour_State__Enum m_state;
  float m_stateTime;
  struct BlockDamageInterruptionHandler * m_blockingHandlerAnticipation;
  struct BlockDamageInterruptionHandler * m_blockingHandlerTurnAnticipation;
  struct BlockDamageInterruptionHandler * m_blockingHandlerMain;
};
struct MantisJumpAttackBehaviour {
  struct MantisJumpAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MantisJumpAttackBehaviour__Fields fields;
};
struct MantisJumpAttackBehaviour__VTable {
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
  VirtualInvokeData IsBlockingInterruption;
};
struct MantisJumpAttackBehaviour__StaticFields {
};
struct MantisJumpAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisJumpAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisJumpAttackBehaviour__VTable vtable;
};

struct MantisJumpAttackBehaviour_c {
  struct MantisJumpAttackBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct MantisJumpAttackBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MantisJumpAttackBehaviour_c__StaticFields {
  struct MantisJumpAttackBehaviour_c * __9;
  struct Action * __9__61_0;
  struct Action * __9__62_0;
  struct Action * __9__63_0;
};
struct MantisJumpAttackBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisJumpAttackBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisJumpAttackBehaviour_c__VTable vtable;
};

struct MantisGrayboxPatrolBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
};
struct MantisGrayboxPatrolBehaviour {
  struct MantisGrayboxPatrolBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MantisGrayboxPatrolBehaviour__Fields fields;
};
struct MantisGrayboxPatrolBehaviour__VTable {
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
};
struct MantisGrayboxPatrolBehaviour__StaticFields {
};
struct MantisGrayboxPatrolBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisGrayboxPatrolBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisGrayboxPatrolBehaviour__VTable vtable;
};

struct MantisGrayboxEntity_c {
  struct MantisGrayboxEntity_c__Class *klass;
  struct MonitorData *monitor;
};
struct MantisGrayboxEntity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MantisGrayboxEntity_c__StaticFields {
  struct MantisGrayboxEntity_c * __9;
  struct Action * __9__35_0;
};
struct MantisGrayboxEntity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisGrayboxEntity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisGrayboxEntity_c__VTable vtable;
};

struct MantisPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  struct GameObject * MantisPrefab;
  enum MantisSpawnType__Enum m_spawnType;
};
struct MantisPlaceholder {
  struct MantisPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct MantisPlaceholder__Fields fields;
};
struct MantisPlaceholder__VTable {
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
struct MantisPlaceholder__StaticFields {
};
struct MantisPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisPlaceholder__VTable vtable;
};

struct MantisSpawnTask__Fields {
  struct EntitySpawnTask__Fields _;
  struct MoonTimeline * EmergeSpawnTimeline;
  struct MoonTimeline * ForegroundSpawnTimeline;
  struct MoonTimeline * BackgroundSpawnTimeline;
  struct MoonTimeline * m_currentTimeline;
};
struct MantisSpawnTask {
  struct MantisSpawnTask__Class *klass;
  struct MonitorData *monitor;
  struct MantisSpawnTask__Fields fields;
};
struct MantisSpawnTask__VTable {
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
  VirtualInvokeData SetActivateDamageDealers;
  VirtualInvokeData SetPlatformMovementColliderEnabledState;
};
struct MantisSpawnTask__StaticFields {
};
struct MantisSpawnTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisSpawnTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisSpawnTask__VTable vtable;
};

struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_MantisGrayboxEntity_ {
  struct EntityReactionBehaviour_1_MantisGrayboxEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields fields;
};
enum MantisDeathReactionBehaviour_State__Enum : int32_t {
  MantisDeathReactionBehaviour_State__Enum_Invalid = -1,
  MantisDeathReactionBehaviour_State__Enum_Launch = 0,
  MantisDeathReactionBehaviour_State__Enum_Loop = 1,
  MantisDeathReactionBehaviour_State__Enum_Land = 2,
  MantisDeathReactionBehaviour_State__Enum_Drowning = 3,
};
struct MantisDeathReactionBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MantisDeathReactionBehaviour_State__Enum value;
};
struct MantisDeathReactionBehaviour__Fields {
  struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields _;
  struct MoonTimeline * DeathLaunch;
  struct MoonTimeline * DeathLoop;
  struct MoonTimeline * DeathLand;
  struct MoonTimeline * ShakeTimeline;
  struct Transform * SpinTransform;
  struct Transform * FeetTransform;
  float FallAngleMultiplier;
  struct MoonTimeline * DrownTimeline;
  float InitialDrowningSubmersion;
  struct GameObject * SplashPrefab;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
  struct MoonTimeline * m_currentTimeline;
  struct MantisFallReactionBehaviour * m_fallBehaviour;
  struct MantisHitReactionBehaviour * m_hitReactionBehaviour;
  struct CharacterPlatformMovement * m_platformMovement;
  struct GroundEntityLocomotion * m_locomotion;
  bool m_waitingForDeath;
  struct RootMotionProcessorData * RootMotion;
  struct PerspectiveRotationAdjustment * PerspectiveRotationAdjustment;
  bool DebugPauseOnEnter;
  enum MantisDeathReactionBehaviour_State__Enum m_state;
  float m_initialMoveAngle;
  struct Vector2 m_initialMoveSpeed;
  bool m_startedFalling;
  float m_timeDrowning;
  struct Vector2 m_initialDrowningSpeed;
  struct EntityWeightData_EntityWeightSettings m_weightData;
};
struct MantisDeathReactionBehaviour {
  struct MantisDeathReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MantisDeathReactionBehaviour__Fields fields;
};
enum MantisFallReactionBehaviour_FallState__Enum : int32_t {
  MantisFallReactionBehaviour_FallState__Enum_Resting = 0,
  MantisFallReactionBehaviour_FallState__Enum_Falling = 1,
  MantisFallReactionBehaviour_FallState__Enum_Landing = 2,
  MantisFallReactionBehaviour_FallState__Enum_HandlingCollision = 3,
};
struct MantisFallReactionBehaviour_FallState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MantisFallReactionBehaviour_FallState__Enum value;
};
struct MantisFallReactionBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * LandSequenceNew;
  struct EventTriggerAnimator * EndLandEventTrigger;
  struct LegacyTimelineSequence * LandSequence;
  struct MoonTimeline * FallingTimeline;
  struct MoonTimeline * FallingUpToDownTimeline;
  struct MoonTimeline * FallingUpToDownFastTimeline;
  float VerticalSpeedToEnableUpToDownTransition;
  float VerticalSpeedToStartUpToDownTransition;
  struct MoonAnimation * FallingAnimation;
  bool LoopFallingAnimation;
  struct MoonTimeline * BounceTimeline;
  struct FloatAnimationParameter * FallSpeedParameter;
  int32_t AnimationPriority;
  struct RootMotionProcessorData * LandRootMotion;
  float CollisionHitStop;
  struct GameObject * ImpactEffect;
  float MinBounceForce;
  float MaxBounceForce;
  float WallRepelForce;
  float BounceEnergyConservation;
  bool LooseExtraEnergyWhenHitWall;
  float ExtraEnergyPercentageTooLooseWhenHitWall;
  float OutOfCameraViewDecelerationX;
  float OutOfCameraViewDecelerationY;
  struct ActiveAnimationHandle m_animation;
  struct Locomotion * m_locomotion;
  enum MantisFallReactionBehaviour_FallState__Enum m_state;
  struct MoonControllerColliderHit m_hit;
  float m_collisionTimer;
  struct Vector2 m_bounceSpeed;
  float m_effectInstantiationTimer;
  float m_bounceMultiplier;
  bool m_shouldDoUpToDownTransition;
  bool m_hasDoneUpToDownTransition;
  bool m_wasMovingDown;
  struct MantisHitReactionBehaviour * m_hitReaction;
};}