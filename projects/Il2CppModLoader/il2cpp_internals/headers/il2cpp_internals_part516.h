namespace app {
struct NickHitReactionBehaviour__StaticFields {
};
struct NickHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NickHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NickHitReactionBehaviour__VTable vtable;
};
struct NickDeathReaction__VTable {
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
struct NickDeathReaction__StaticFields {
};
struct NickDeathReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NickDeathReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NickDeathReaction__VTable vtable;
};

struct NickDeathReaction_c {
  struct NickDeathReaction_c__Class *klass;
  struct MonitorData *monitor;
};
struct NickDeathReaction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NickDeathReaction_c__StaticFields {
  struct NickDeathReaction_c * __9;
  struct Action * __9__22_0;
};
struct NickDeathReaction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NickDeathReaction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NickDeathReaction_c__VTable vtable;
};

struct NickHitReactionBehaviour_c {
  struct NickHitReactionBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct NickHitReactionBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NickHitReactionBehaviour_c__StaticFields {
  struct NickHitReactionBehaviour_c * __9;
  struct Action * __9__35_0;
};
struct NickHitReactionBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NickHitReactionBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NickHitReactionBehaviour_c__VTable vtable;
};

struct BabyCrabEntity__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_ * UpdateBlockingBehaviours;
  struct CrabPlaceholderGroup * _Group_k__BackingField;
  struct Sensor * m_sensor;
  float MinDistanceToOtherCrabs;
  float MinRunDistance;
  float DistanceToMumma;
  float DistanceToTargetToStartRunning;
  struct CrabEntity * _Entity_k__BackingField;
  bool _IsRunningAway_k__BackingField;
  struct Vector3 _RunPosition_k__BackingField;
};
struct BabyCrabEntity {
  struct BabyCrabEntity__Class *klass;
  struct MonitorData *monitor;
  struct BabyCrabEntity__Fields fields;
};
struct PlaceholderGroup__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_EntityPlaceholder_ * PlaceholdersInGroup;
};
struct PlaceholderGroup {
  struct PlaceholderGroup__Class *klass;
  struct MonitorData *monitor;
  struct PlaceholderGroup__Fields fields;
};
struct CrabPlaceholderGroup__Fields {
  struct PlaceholderGroup__Fields _;
  struct List_1_BabyCrabEntity_ * Babies;
  struct List_1_CrabEntity_ * Mothers;
};
struct CrabPlaceholderGroup {
  struct CrabPlaceholderGroup__Class *klass;
  struct MonitorData *monitor;
  struct CrabPlaceholderGroup__Fields fields;
};
struct __declspec(align(8)) List_1_BabyCrabEntity___Fields {
  struct BabyCrabEntity__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_BabyCrabEntity_ {
  struct List_1_BabyCrabEntity___Class *klass;
  struct MonitorData *monitor;
  struct List_1_BabyCrabEntity___Fields fields;
};
struct BabyCrabEntity__Array {
  struct BabyCrabEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BabyCrabEntity * vector[32];
};
struct IEnumerator_1_BabyCrabEntity_ {
  struct IEnumerator_1_BabyCrabEntity___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_CrabEntity___Fields {
  struct CrabEntity__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CrabEntity_ {
  struct List_1_CrabEntity___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CrabEntity___Fields fields;
};
struct CrabEntity__Array {
  struct CrabEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CrabEntity * vector[32];
};
struct IEnumerator_1_CrabEntity_ {
  struct IEnumerator_1_CrabEntity___Class *klass;
  struct MonitorData *monitor;
};
struct PlaceholderGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlaceholderGroup__StaticFields {
};
struct PlaceholderGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaceholderGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaceholderGroup__VTable vtable;
};
struct IEnumerator_1_BabyCrabEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_BabyCrabEntity___StaticFields {
};
struct IEnumerator_1_BabyCrabEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_BabyCrabEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_BabyCrabEntity___VTable vtable;
};
struct List_1_BabyCrabEntity___VTable {
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
struct List_1_BabyCrabEntity___StaticFields {
  struct BabyCrabEntity__Array * _emptyArray;
};
struct List_1_BabyCrabEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_BabyCrabEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_BabyCrabEntity___VTable vtable;
};
struct IEnumerator_1_CrabEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CrabEntity___StaticFields {
};
struct IEnumerator_1_CrabEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CrabEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CrabEntity___VTable vtable;
};
struct List_1_CrabEntity___VTable {
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
struct List_1_CrabEntity___StaticFields {
  struct CrabEntity__Array * _emptyArray;
};
struct List_1_CrabEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CrabEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CrabEntity___VTable vtable;
};
struct CrabPlaceholderGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrabPlaceholderGroup__StaticFields {
};
struct CrabPlaceholderGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabPlaceholderGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabPlaceholderGroup__VTable vtable;
};
struct BabyCrabEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BabyCrabEntity__StaticFields {
};
struct BabyCrabEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabyCrabEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabyCrabEntity__VTable vtable;
};

struct CrabInGroupPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  struct CrabPlaceholderGroup * Group;
};
struct CrabInGroupPlaceholder {
  struct CrabInGroupPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct CrabInGroupPlaceholder__Fields fields;
};
struct CrabInGroupPlaceholder__VTable {
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
struct CrabInGroupPlaceholder__StaticFields {
};
struct CrabInGroupPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabInGroupPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabInGroupPlaceholder__VTable vtable;
};

struct EntityBehaviourNode_1_DropSlugVariationEntity___Fields {
  struct EntityBehaviourNode__Fields _;
};
struct EntityBehaviourNode_1_DropSlugVariationEntity_ {
  struct EntityBehaviourNode_1_DropSlugVariationEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityBehaviourNode_1_DropSlugVariationEntity___Fields fields;
};
struct DropSlugJumpAttackBehaviour__Fields {
  struct EntityBehaviourNode_1_DropSlugVariationEntity___Fields _;
  float JumpSpeed;
  struct DropSlugLocomotion * m_locomotion;
};
struct DropSlugJumpAttackBehaviour {
  struct DropSlugJumpAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugJumpAttackBehaviour__Fields fields;
};
struct EntityBehaviourNode_1_DropSlugVariationEntity___VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData CacheSerializedComponents;
  VirtualInvokeData OnEntityInitialized;
};
struct EntityBehaviourNode_1_DropSlugVariationEntity___StaticFields {
};
struct EntityBehaviourNode_1_DropSlugVariationEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityBehaviourNode_1_DropSlugVariationEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityBehaviourNode_1_DropSlugVariationEntity___VTable vtable;
};
struct DropSlugJumpAttackBehaviour__VTable {
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
struct DropSlugJumpAttackBehaviour__StaticFields {
};
struct DropSlugJumpAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugJumpAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugJumpAttackBehaviour__VTable vtable;
};

struct DropSlugVariationEntity__Fields {
  struct DropSlugEntity__Fields _;
};
struct DropSlugVariationEntity {
  struct DropSlugVariationEntity__Class *klass;
  struct MonitorData *monitor;
  struct DropSlugVariationEntity__Fields fields;
};
struct DropSlugVariationEntity__VTable {
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
struct DropSlugVariationEntity__StaticFields {
};
struct DropSlugVariationEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropSlugVariationEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropSlugVariationEntity__VTable vtable;
};

struct GiantSlugDeathReactionBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct GameObject__Array * Slugs;
  struct PrefabSpawner * Explosion;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
};
struct GiantSlugDeathReactionBehaviour {
  struct GiantSlugDeathReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct GiantSlugDeathReactionBehaviour__Fields fields;
};
struct GiantSlugDeathReactionBehaviour__VTable {
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
struct GiantSlugDeathReactionBehaviour__StaticFields {
};
struct GiantSlugDeathReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GiantSlugDeathReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GiantSlugDeathReactionBehaviour__VTable vtable;
};

struct EntityReactionBehaviour_1_SpikeSlugEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_SpikeSlugEntity_ {
  struct EntityReactionBehaviour_1_SpikeSlugEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_SpikeSlugEntity___Fields fields;
};
struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields {
  struct EntityReactionBehaviour_1_SpikeSlugEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_SpikeSlugEntity_ {
  struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields fields;
};
struct GiantSlugHitReactionBehaviour__Fields {
  struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields _;
  struct MoonTimeline * HitGround;
  struct MoonTimeline * HitAir;
  struct MoonTimeline * HitGroundAdditive;
  struct MoonTimeline * HitAirAdditive;
  struct MoonTimeline * m_currentTimeline;
  struct SpikeSlugFallReactionBehaviour * m_fallBehaviour;
  struct SpikeSlugLocomotion * m_locomotion;
  struct EntityDamageEvent * _DamageEvent_k__BackingField;
  float KickbackMultiplier;
  float WindKickbackMultiplier;
  float AirHorziontalKnockbackMultiplier;
  float MinForceWhenJuggling;
  float AirSpinRotationAmount;
};
struct GiantSlugHitReactionBehaviour {
  struct GiantSlugHitReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct GiantSlugHitReactionBehaviour__Fields fields;
};
struct SpikeSlugFallReactionBehaviour__Fields {
  struct ReactionFallingBehaviour__Fields _;
  float ImpactSpringForce;
  int32_t MaxAmountOfGroundBounces;
  bool ZeroGravityAngleMidAir;
  float GravityChangeDelay;
  float GravityChangeRate;
  float m_fallTime;
  struct SpikeSlugEntity * m_spikeSlugEntity;
  struct EnemyPlatformMovement * m_platformMovement;
};
struct SpikeSlugFallReactionBehaviour {
  struct SpikeSlugFallReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugFallReactionBehaviour__Fields fields;
};
enum SpikeSlugEntity_SpikeSlugShellState__Enum : int32_t {
  SpikeSlugEntity_SpikeSlugShellState__Enum_Shelled = 0,
  SpikeSlugEntity_SpikeSlugShellState__Enum_Unshelled = 1,
};
struct SpikeSlugEntity_SpikeSlugShellState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpikeSlugEntity_SpikeSlugShellState__Enum value;
};
enum GroundPatrolDirectionMode__Enum : int32_t {
  GroundPatrolDirectionMode__Enum_ToggleDirection = 0,
  GroundPatrolDirectionMode__Enum_AlwaysLeft = 1,
  GroundPatrolDirectionMode__Enum_AlwaysRight = 2,
};
struct GroundPatrolDirectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GroundPatrolDirectionMode__Enum value;
};
struct SpikeSlugEntity__Fields {
  struct GroundMovingEntity__Fields _;
  enum SpikeSlugEntity_SpikeSlugShellState__Enum m_shellState;
  struct GenericSpring1D * ImpactSpring;
  struct Transform * ScaleTransform;
  struct Transform * ShellTransform;
  struct MoonTimeline * ShellBlockedHitTimeline;
  struct MoonTimeline * DestroyShellTimeline;
  struct GameObject * ShellPrefab;
  struct Vector2 ShellEjectStartOffset;
  float ShellEjectForce;
  struct EntityTargetting * BashableHitBox;
  struct SpikeSlugEntity_AnimsToSwap * LocomotionAnims;
  struct GenericSpring1D_Particle * m_impactSettings;
  struct Vector3 m_scaleCache;
  struct GroundEntityLocomotion * m_slugLocomotion;
  bool m_protectedByShell;
  enum SpikeSlugEntity_SpikeSlugShellState__Enum m_initialShellState;
  enum GroundPatrolDirectionMode__Enum _MovementPattern_k__BackingField;
  struct GameObject * creepPrefab;
  float creepDistance;
  float randomCreepDistance;
  struct Vector3 m_oldCreepPos;
  float m_creepDistance;
  float DeathKickbackMultiplier;
  float LightHitMutliplier;
  float MediumHitMutliplier;
  float HeavyHitMutliplier;
  float InputForceXClamp;
  struct Vector2 BashMultiplier;
  bool _ShouldIdleDuringPatrol_k__BackingField;
  struct Vector2 m_lastPosition;
  struct Vector2 m_newPosition;
  bool m_wasShelled;
  bool m_suspended;
  bool m_suspendedOnMovingPlatform;
};
struct SpikeSlugEntity {
  struct SpikeSlugEntity__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugEntity__Fields fields;
};
struct __declspec(align(8)) SpikeSlugEntity_AnimsToSwap__Fields {
  struct List_1_SpikeSlugEntity_ShelledUnshelledAnimPair_ * Anims;
};
struct SpikeSlugEntity_AnimsToSwap {
  struct SpikeSlugEntity_AnimsToSwap__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugEntity_AnimsToSwap__Fields fields;
};
struct __declspec(align(8)) List_1_SpikeSlugEntity_ShelledUnshelledAnimPair___Fields {
  struct SpikeSlugEntity_ShelledUnshelledAnimPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpikeSlugEntity_ShelledUnshelledAnimPair_ {
  struct List_1_SpikeSlugEntity_ShelledUnshelledAnimPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpikeSlugEntity_ShelledUnshelledAnimPair___Fields fields;
};
struct __declspec(align(8)) SpikeSlugEntity_ShelledUnshelledAnimPair__Fields {
  struct MoonAnimation * ShelledAnimation;
  struct MoonAnimation * UnshelledAnimation;
};
struct SpikeSlugEntity_ShelledUnshelledAnimPair {
  struct SpikeSlugEntity_ShelledUnshelledAnimPair__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugEntity_ShelledUnshelledAnimPair__Fields fields;
};
struct SpikeSlugEntity_ShelledUnshelledAnimPair__Array {
  struct SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpikeSlugEntity_ShelledUnshelledAnimPair * vector[32];
};
struct IEnumerator_1_SpikeSlugEntity_ShelledUnshelledAnimPair_ {
  struct IEnumerator_1_SpikeSlugEntity_ShelledUnshelledAnimPair___Class *klass;
  struct MonitorData *monitor;
};
struct EnemyPlatformMovement__Fields {
  struct CharacterPlatformMovement__Fields _;
  bool AdjustGravityToGround;
  bool UseOnDemandSnapToGround;
  float SnapToGroundDistance;
  bool CutFallingSpeedOnGround;
  struct EnemyEntity * m_entity;
  struct Vector2 m_prevExternalForce;
  struct Vector3 m_preSleepVelocity;
};
struct EnemyPlatformMovement {
  struct EnemyPlatformMovement__Class *klass;
  struct MonitorData *monitor;
  struct EnemyPlatformMovement__Fields fields;
};
struct EntityReactionBehaviour_1_SpikeSlugEntity___VTable {
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
struct EntityReactionBehaviour_1_SpikeSlugEntity___StaticFields {
};
struct EntityReactionBehaviour_1_SpikeSlugEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_SpikeSlugEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_SpikeSlugEntity___VTable vtable;
};
struct EntityHitReactionBehaviour_1_SpikeSlugEntity___VTable {
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
  VirtualInvokeData IsDamageTypePreventingInterruption;
  VirtualInvokeData IsInterruptingDamageWeight;
};
struct EntityHitReactionBehaviour_1_SpikeSlugEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_SpikeSlugEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_SpikeSlugEntity___VTable vtable;
};
struct SpikeSlugEntity_ShelledUnshelledAnimPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpikeSlugEntity_ShelledUnshelledAnimPair__StaticFields {
};
struct SpikeSlugEntity_ShelledUnshelledAnimPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpikeSlugEntity_ShelledUnshelledAnimPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpikeSlugEntity_ShelledUnshelledAnimPair__VTable vtable;
};
struct IEnumerator_1_SpikeSlugEntity_ShelledUnshelledAnimPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpikeSlugEntity_ShelledUnshelledAnimPair___StaticFields {
};
struct IEnumerator_1_SpikeSlugEntity_ShelledUnshelledAnimPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpikeSlugEntity_ShelledUnshelledAnimPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpikeSlugEntity_ShelledUnshelledAnimPair___VTable vtable;
};}