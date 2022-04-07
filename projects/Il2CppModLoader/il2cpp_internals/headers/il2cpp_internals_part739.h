namespace app {
struct XboxOneUsers__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XboxOneUsers__StaticFields {
  struct Action_1_Int32_ * _OnUserWillChange_k__BackingField;
  struct Action * _OnUserChanged_k__BackingField;
  struct Action * _OnUserPicked_k__BackingField;
  struct Action * _OnUserSignedOut_k__BackingField;
  struct Action * _OnLoginCancel_k__BackingField;
};
struct XboxOneUsers__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XboxOneUsers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XboxOneUsers__VTable vtable;
};

struct BombableSolidWall__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedBooleanUberState * SerializedState;
  struct PrefabSpawner * PrefabSpawner;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * OnDestroyTimeline;
  bool CreateCheckpointOnDestruction;
  struct CheckpointFunctionality Checkpoint;
  struct IUberState__Array * m_affectingUberStates;
  struct List_1_UnityEngine_GameObject_ * m_allTargets;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct BombableSolidWall {
  struct BombableSolidWall__Class *klass;
  struct MonitorData *monitor;
  struct BombableSolidWall__Fields fields;
};
struct BombableSolidWall__VTable {
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
  VirtualInvokeData get_BabyWormAutoTargetPosition;
  VirtualInvokeData get_BabyWormAutoTargetPriority;
  VirtualInvokeData get_TargetActive;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct BombableSolidWall__StaticFields {
};
struct BombableSolidWall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BombableSolidWall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BombableSolidWall__VTable vtable;
};

struct BombableSolidWallEntity__Fields {
  struct Entity__Fields _;
};
struct BombableSolidWallEntity {
  struct BombableSolidWallEntity__Class *klass;
  struct MonitorData *monitor;
  struct BombableSolidWallEntity__Fields fields;
};
struct BombableSolidWallEntity__VTable {
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
};
struct BombableSolidWallEntity__StaticFields {
};
struct BombableSolidWallEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BombableSolidWallEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BombableSolidWallEntity__VTable vtable;
};

struct StompableFloor__Fields {
  struct MonoBehaviour__Fields _;
  int32_t _HammerPriority_k__BackingField;
  bool _HammerEnableAutoTarget_k__BackingField;
  struct MoonTimeline * HighlightTimeline;
  struct MoonTimeline * HighlightedLoopTimeline;
  struct MoonTimeline * UnhighlightTimeline;
  struct MoonTimeline * DestructionTimeline;
  struct VisibleOnWorldMap * VisibleOnWorldMapComponent;
  struct Transform * HighlightTriggerTransform;
  struct SerializedBooleanUberState * State;
  struct Rect GasBallAttractionZone;
  struct Vector3 m_position;
  bool m_isHighlighted;
  struct Rect m_bounds;
  struct Rect m_runTimeGasBallAtractionZone;
  bool AlwaysIgnoreEnemies;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct StompableFloor {
  struct StompableFloor__Class *klass;
  struct MonitorData *monitor;
  struct StompableFloor__Fields fields;
};
struct StompableFloor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
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
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_HammerPriority;
  VirtualInvokeData get_HammerEnableAutoTarget;
  VirtualInvokeData OnRange;
  VirtualInvokeData GasBallBaitCenter;
  VirtualInvokeData get_GasBallAttractionTime;
};
struct StompableFloor__StaticFields {
};
struct StompableFloor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StompableFloor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StompableFloor__VTable vtable;
};

struct CarryableRigidBody_c {
  struct CarryableRigidBody_c__Class *klass;
  struct MonitorData *monitor;
};
struct CarryableRigidBody_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CarryableRigidBody_c__StaticFields {
  struct CarryableRigidBody_c * __9;
  struct Action * __9__53_0;
};
struct CarryableRigidBody_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CarryableRigidBody_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CarryableRigidBody_c__VTable vtable;
};

struct Checkpoint__Fields {
  struct MonoBehaviour__Fields _;
  struct Condition_1 * Condition;
  struct Vector2 RespawnPosition;
  bool m_shouldAcceptRecievers;
};
struct Checkpoint {
  struct Checkpoint__Class *klass;
  struct MonitorData *monitor;
  struct Checkpoint__Fields fields;
};
struct Checkpoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
  VirtualInvokeData CanCreateCheckpoint;
};
struct Checkpoint__StaticFields {
};
struct Checkpoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Checkpoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Checkpoint__VTable vtable;
};

struct InvisibleCheckpoint__Fields {
  struct MonoBehaviour__Fields _;
  struct Condition_1 * Condition;
  struct Vector2 RespawnPosition;
  bool m_shouldAcceptRecievers;
  struct Rect m_bounds;
  struct List_1_WaterZone_ * m_tempWaterZoneList;
};
struct InvisibleCheckpoint {
  struct InvisibleCheckpoint__Class *klass;
  struct MonitorData *monitor;
  struct InvisibleCheckpoint__Fields fields;
};
struct InvisibleCheckpoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
  VirtualInvokeData CanCreateCheckpoint;
};
struct InvisibleCheckpoint__StaticFields {
  bool ENABLE_INVISIBLE_CHECKPOINTS;
};
struct InvisibleCheckpoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvisibleCheckpoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvisibleCheckpoint__VTable vtable;
};

struct NoSoulFlameZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Rect _BoundingRect_k__BackingField;
};
struct NoSoulFlameZone {
  struct NoSoulFlameZone__Class *klass;
  struct MonitorData *monitor;
  struct NoSoulFlameZone__Fields fields;
};
struct __declspec(align(8)) List_1_NoSoulFlameZone___Fields {
  struct NoSoulFlameZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_NoSoulFlameZone_ {
  struct List_1_NoSoulFlameZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_NoSoulFlameZone___Fields fields;
};
struct NoSoulFlameZone__Array {
  struct NoSoulFlameZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NoSoulFlameZone * vector[32];
};
struct IEnumerator_1_NoSoulFlameZone_ {
  struct IEnumerator_1_NoSoulFlameZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_NoSoulFlameZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_NoSoulFlameZone___StaticFields {
};
struct IEnumerator_1_NoSoulFlameZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_NoSoulFlameZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_NoSoulFlameZone___VTable vtable;
};
struct List_1_NoSoulFlameZone___VTable {
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
struct List_1_NoSoulFlameZone___StaticFields {
  struct NoSoulFlameZone__Array * _emptyArray;
};
struct List_1_NoSoulFlameZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_NoSoulFlameZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_NoSoulFlameZone___VTable vtable;
};
struct NoSoulFlameZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct NoSoulFlameZone__StaticFields {
  struct List_1_NoSoulFlameZone_ * All;
};
struct NoSoulFlameZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NoSoulFlameZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NoSoulFlameZone__VTable vtable;
};

struct ContactSwitch__Fields {
  struct PlayerCollisionTrigger__Fields _;
  struct SerializedBooleanUberState * State;
  struct MoonTimeline * OnDeactivate;
  float ActiveDuration;
  bool Toggle;
  float ToggleDelay;
  struct Color InteractionColor;
  struct Color ActivatedColor;
  struct Color DeactivatedColor;
  bool m_isTouched;
  float m_currentTime;
  bool m_activated;
  struct PerformingAction * m_onActivatePerformingAction;
  bool m_wasPerforming;
  struct Renderer * m_renderer;
};
struct ContactSwitch {
  struct ContactSwitch__Class *klass;
  struct MonitorData *monitor;
  struct ContactSwitch__Fields fields;
};
struct ContactSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
  VirtualInvokeData get_Category;
  VirtualInvokeData get_StressTestName;
  VirtualInvokeData StartStressTest;
  VirtualInvokeData StressTestUpdate;
  VirtualInvokeData EndStressTest;
  VirtualInvokeData get_StressTestStatus;
  VirtualInvokeData set_StressTestStatus;
  VirtualInvokeData get_CanExecuteStressTest;
  VirtualInvokeData get_StopMovingPlayerWhilePerforming;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct ContactSwitch__StaticFields {
};
struct ContactSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContactSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContactSwitch__VTable vtable;
};

struct ContactSwitchSequencer__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_ContactSwitch_ * Switches;
  int32_t m_activeSwitchIndex;
};
struct ContactSwitchSequencer {
  struct ContactSwitchSequencer__Class *klass;
  struct MonitorData *monitor;
  struct ContactSwitchSequencer__Fields fields;
};
struct __declspec(align(8)) List_1_ContactSwitch___Fields {
  struct ContactSwitch__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ContactSwitch_ {
  struct List_1_ContactSwitch___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ContactSwitch___Fields fields;
};
struct ContactSwitch__Array {
  struct ContactSwitch__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ContactSwitch * vector[32];
};
struct IEnumerator_1_ContactSwitch_ {
  struct IEnumerator_1_ContactSwitch___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ContactSwitch___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ContactSwitch___StaticFields {
};
struct IEnumerator_1_ContactSwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ContactSwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ContactSwitch___VTable vtable;
};
struct List_1_ContactSwitch___VTable {
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
struct List_1_ContactSwitch___StaticFields {
  struct ContactSwitch__Array * _emptyArray;
};
struct List_1_ContactSwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ContactSwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ContactSwitch___VTable vtable;
};
struct ContactSwitchSequencer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ContactSwitchSequencer__StaticFields {
};
struct ContactSwitchSequencer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContactSwitchSequencer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContactSwitchSequencer__VTable vtable;
};

struct LagoonContactSwitch__Fields {
  struct PlayerCollisionTrigger__Fields _;
  struct LagoonContactSwitchDoors * ConnectedDoors;
  struct MoonTimeline * Activate;
  struct MoonTimeline * ActivatedLoop;
  struct MoonTimeline * Deactivate;
  struct MoonTimeline * DeactivatedLoop;
  struct MoonTimeline * Touch;
  struct EventTriggerAnimator * OpenDoors;
  struct EventTriggerAnimator * CloseDoors;
  struct MoonTimeline * m_currentTimeline;
  struct SerializedBooleanUberState * State;
  struct DesiredUberStateBool * PuzzleSolvedState;
  bool CloseDoorWhenPuzzleSolved;
  struct Condition_1 * PuzzleSolvedCondition;
  float ActiveDuration;
  bool Toggle;
  float ToggleDelay;
  bool m_isTouched;
  float m_currentTime;
  bool m_activated;
};
struct LagoonContactSwitch {
  struct LagoonContactSwitch__Class *klass;
  struct MonitorData *monitor;
  struct LagoonContactSwitch__Fields fields;
};
struct LagoonContactSwitchDoors__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * Open;
  struct MoonTimeline * OpenedLoop;
  struct MoonTimeline * Close;
  struct MoonTimeline * ClosedLoop;
  struct LagoonContactSwitch__Array * AffectingSwitches;
  bool m_isOpened;
  bool m_isFrustumDisabled;
  bool m_appliedOpen;
  struct VerletStructure__Array * m_verletStructures;
  float m_delayBeforeDisableVerletStructuresTimer;
  bool m_insideFrustum;
  struct Bounds m_bounds;
};
struct LagoonContactSwitchDoors {
  struct LagoonContactSwitchDoors__Class *klass;
  struct MonitorData *monitor;
  struct LagoonContactSwitchDoors__Fields fields;
};
struct LagoonContactSwitch__Array {
  struct LagoonContactSwitch__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LagoonContactSwitch * vector[32];
};
struct VerletStructure__Array {
  struct VerletStructure__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VerletStructure * vector[32];
};
struct LagoonContactSwitchDoors__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct LagoonContactSwitchDoors__StaticFields {
};
struct LagoonContactSwitchDoors__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LagoonContactSwitchDoors__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LagoonContactSwitchDoors__VTable vtable;
};
struct LagoonContactSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
  VirtualInvokeData get_Category;
  VirtualInvokeData get_StressTestName;
  VirtualInvokeData StartStressTest;
  VirtualInvokeData StressTestUpdate;
  VirtualInvokeData EndStressTest;
  VirtualInvokeData get_StressTestStatus;
  VirtualInvokeData set_StressTestStatus;
  VirtualInvokeData get_CanExecuteStressTest;
  VirtualInvokeData get_StopMovingPlayerWhilePerforming;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct LagoonContactSwitch__StaticFields {
};
struct LagoonContactSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LagoonContactSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LagoonContactSwitch__VTable vtable;
};

struct LagoonContactSwitchGroupAction__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_LagoonContactSwitch_ * ContactSwitches;
  struct MoonTimeline * TimelineToPlay;
  int32_t m_activeSwitches;
};
struct LagoonContactSwitchGroupAction {
  struct LagoonContactSwitchGroupAction__Class *klass;
  struct MonitorData *monitor;
  struct LagoonContactSwitchGroupAction__Fields fields;
};
struct __declspec(align(8)) List_1_LagoonContactSwitch___Fields {
  struct LagoonContactSwitch__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LagoonContactSwitch_ {
  struct List_1_LagoonContactSwitch___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LagoonContactSwitch___Fields fields;
};
struct IEnumerator_1_LagoonContactSwitch_ {
  struct IEnumerator_1_LagoonContactSwitch___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_LagoonContactSwitch___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LagoonContactSwitch___StaticFields {
};
struct IEnumerator_1_LagoonContactSwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LagoonContactSwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LagoonContactSwitch___VTable vtable;
};
struct List_1_LagoonContactSwitch___VTable {
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
struct List_1_LagoonContactSwitch___StaticFields {
  struct LagoonContactSwitch__Array * _emptyArray;
};
struct List_1_LagoonContactSwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LagoonContactSwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LagoonContactSwitch___VTable vtable;
};
struct LagoonContactSwitchGroupAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LagoonContactSwitchGroupAction__StaticFields {
};
struct LagoonContactSwitchGroupAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LagoonContactSwitchGroupAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LagoonContactSwitchGroupAction__VTable vtable;
};

struct LegacyContactSwitch__Fields {
  struct LegacyPlayerCollisionTrigger__Fields _;
  struct ActionMethod * OnDeactivate;
  float ActiveTimer;
  bool Toggle;
  float ToggleDelay;
  struct Color InteractionColor;
  struct Color ActivatedColor;
  struct Color DeactivatedColor;
  bool m_isTouched;
  float m_currentTime;
  bool m_isActivated;
  struct PerformingAction * m_onActivatePerformingAction;
  bool m_wasPerforming;
  struct Renderer * m_renderer;
};
struct LegacyContactSwitch {
  struct LegacyContactSwitch__Class *klass;
  struct MonitorData *monitor;
  struct LegacyContactSwitch__Fields fields;
};
struct LegacyContactSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
  VirtualInvokeData get_Category;
  VirtualInvokeData get_StressTestName;
  VirtualInvokeData StartStressTest;
  VirtualInvokeData StressTestUpdate;
  VirtualInvokeData EndStressTest;
  VirtualInvokeData get_StressTestStatus;
  VirtualInvokeData set_StressTestStatus;
  VirtualInvokeData get_CanExecuteStressTest;
  VirtualInvokeData get_StopMovingPlayerWhilePerforming;
  VirtualInvokeData get_IsOn;
};
struct LegacyContactSwitch__StaticFields {
};
struct LegacyContactSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyContactSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyContactSwitch__VTable vtable;
};

struct DeadlyDarknessRectangleZone__Fields {
  struct RectangleGameplayZone__Fields _;
};
struct DeadlyDarknessRectangleZone {
  struct DeadlyDarknessRectangleZone__Class *klass;
  struct MonitorData *monitor;
  struct DeadlyDarknessRectangleZone__Fields fields;
};
struct DeadlyDarknessRectangleZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_Category;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_ShouldUpdateWhileDisabled;
  VirtualInvokeData ContainsPoint;
  VirtualInvokeData OnEnableRuntime;
  VirtualInvokeData OnDisableRuntime;
  VirtualInvokeData OnZoneUpdate;
  VirtualInvokeData get_Category_1;
  VirtualInvokeData get_ShouldSerialize;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
  VirtualInvokeData AwakeInternal;
  VirtualInvokeData DestroyInternal;
  VirtualInvokeData OnEnableEditor;
  VirtualInvokeData OnDisableEditor;
  VirtualInvokeData EditorUpdate;
  VirtualInvokeData ShouldTriggerZoneChange;
  VirtualInvokeData OnZoneChange;
  VirtualInvokeData get_EditorBounds;
  VirtualInvokeData set_EditorBounds;
  VirtualInvokeData RefreshBounds;
};}