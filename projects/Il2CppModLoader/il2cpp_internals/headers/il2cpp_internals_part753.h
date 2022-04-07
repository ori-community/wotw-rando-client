namespace app {

struct Lever_c {
  struct Lever_c__Class *klass;
  struct MonitorData *monitor;
};
struct Lever_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Lever_c__StaticFields {
  struct Lever_c * __9;
  struct Action * __9__153_0;
  struct Action * __9__153_1;
  struct Action * __9__153_2;
  struct Action * __9__153_3;
  struct Action * __9__153_4;
  struct Action * __9__153_5;
  struct Action * __9__153_6;
  struct Action * __9__153_7;
  struct Action * __9__153_8;
  struct Func_1_Boolean_ * __9__153_9;
  struct Func_1_Boolean_ * __9__153_10;
};
struct Lever_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Lever_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Lever_c__VTable vtable;
};

struct LeverActionSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct Lever * Lever;
  struct MoonTimeline * LeverLeftTimeline;
  struct MoonTimeline * LeverRightTimeline;
  struct Condition_1 * CanLeverLeft;
  struct Condition_1 * CanLeverRight;
};
struct LeverActionSystem {
  struct LeverActionSystem__Class *klass;
  struct MonitorData *monitor;
  struct LeverActionSystem__Fields fields;
};
struct LeverActionSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeverActionSystem__StaticFields {
};
struct LeverActionSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeverActionSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeverActionSystem__VTable vtable;
};

struct StateHolder_1_DoorSetupData___Fields {
  struct StateHolder__Fields _;
  struct List_1_DoorSetupData_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_DoorSetupData_ {
  struct StateHolder_1_DoorSetupData___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_DoorSetupData___Fields fields;
};
struct TransitionBasedSetupHolder_1_DoorSetupData___Fields {
  struct StateHolder_1_DoorSetupData___Fields _;
};
struct TransitionBasedSetupHolder_1_DoorSetupData_ {
  struct TransitionBasedSetupHolder_1_DoorSetupData___Class *klass;
  struct MonitorData *monitor;
  struct TransitionBasedSetupHolder_1_DoorSetupData___Fields fields;
};
struct DoorSetupHolder__Fields {
  struct TransitionBasedSetupHolder_1_DoorSetupData___Fields _;
};
struct DoorSetupHolder {
  struct DoorSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct DoorSetupHolder__Fields fields;
};
struct __declspec(align(8)) List_1_DoorSetupData___Fields {
  struct DoorSetupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DoorSetupData_ {
  struct List_1_DoorSetupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DoorSetupData___Fields fields;
};
struct __declspec(align(8)) DoorSetupData__Fields {
  struct MoonTimeline * m_transition;
  float m_desiredValue;
  struct Vector3 DoorPosition;
};
struct DoorSetupData {
  struct DoorSetupData__Class *klass;
  struct MonitorData *monitor;
  struct DoorSetupData__Fields fields;
};
struct DoorSetupData__Array {
  struct DoorSetupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DoorSetupData * vector[32];
};
struct IEnumerator_1_DoorSetupData_ {
  struct IEnumerator_1_DoorSetupData___Class *klass;
  struct MonitorData *monitor;
};
struct DoorSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Transition;
  VirtualInvokeData get_DesiredValue;
};
struct DoorSetupData__StaticFields {
};
struct DoorSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoorSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoorSetupData__VTable vtable;
};
struct IEnumerator_1_DoorSetupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DoorSetupData___StaticFields {
};
struct IEnumerator_1_DoorSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DoorSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DoorSetupData___VTable vtable;
};
struct List_1_DoorSetupData___VTable {
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
struct List_1_DoorSetupData___StaticFields {
  struct DoorSetupData__Array * _emptyArray;
};
struct List_1_DoorSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DoorSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DoorSetupData___VTable vtable;
};
struct StateHolder_1_DoorSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct StateHolder_1_DoorSetupData___StaticFields {
};
struct StateHolder_1_DoorSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_DoorSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_DoorSetupData___VTable vtable;
};
struct TransitionBasedSetupHolder_1_DoorSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct TransitionBasedSetupHolder_1_DoorSetupData___StaticFields {
};
struct TransitionBasedSetupHolder_1_DoorSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransitionBasedSetupHolder_1_DoorSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransitionBasedSetupHolder_1_DoorSetupData___VTable vtable;
};
struct DoorSetupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct DoorSetupHolder__StaticFields {
};
struct DoorSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoorSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoorSetupHolder__VTable vtable;
};

struct Door__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct Transform * DoorTransform;
  struct DoorSetupHolder * SetupStates;
  struct IUberState__Array * m_affectingUberStates;
};
struct Door {
  struct Door__Class *klass;
  struct MonitorData *monitor;
  struct Door__Fields fields;
};
struct Door__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData PerformStateTransition;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData StopTransitions;
};
struct Door__StaticFields {
};
struct Door__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Door__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Door__VTable vtable;
};

struct DoorAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct DoorVisuals * Visuals;
  struct MoonTimeline * OpenTimeline;
  struct MoonTimeline * CloseTimeline;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct DoorAnimator {
  struct DoorAnimator__Class *klass;
  struct MonitorData *monitor;
  struct DoorAnimator__Fields fields;
};
struct DoorVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * OpenTimeline;
  struct MoonTimeline * CloseTimeline;
};
struct DoorVisuals {
  struct DoorVisuals__Class *klass;
  struct MonitorData *monitor;
  struct DoorVisuals__Fields fields;
};
struct DoorVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DoorVisuals__StaticFields {
};
struct DoorVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoorVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoorVisuals__VTable vtable;
};
struct DoorAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_MoonSetupVisuals;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct DoorAnimator__StaticFields {
};
struct DoorAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoorAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoorAnimator__VTable vtable;
};

struct DoorLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct DoorAnimator * Animator;
  struct MoonReference_1_IGenericUberState_ * State;
};
struct DoorLogic {
  struct DoorLogic__Class *klass;
  struct MonitorData *monitor;
  struct DoorLogic__Fields fields;
};
struct DoorLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PerformStateTransition;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData StopTransitions;
  VirtualInvokeData get_MoonSetupAnimator;
  VirtualInvokeData GetResolverForType;
};
struct DoorLogic__StaticFields {
};
struct DoorLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoorLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoorLogic__VTable vtable;
};

struct ProximityMine__Fields {
  struct Entity__Fields _;
  float PopOutTimelineTimescale;
  float ExplosionRadius;
  float DamageAmount;
  struct Sensor * MineSensor;
  struct DamageReceiver * Hitbox;
  struct MoonTimeline * PopOutTimeline;
  struct EventTriggerAnimator * ExplosionEvent;
  struct GameObject * ExplosionFXPrefab;
  bool m_destroyMine;
  int32_t DamageMask;
};
struct ProximityMine {
  struct ProximityMine__Class *klass;
  struct MonitorData *monitor;
  struct ProximityMine__Fields fields;
};
struct ProximityMine__VTable {
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
struct ProximityMine__StaticFields {
};
struct ProximityMine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProximityMine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProximityMine__VTable vtable;
};

struct RotatingObstacleAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct RotatingObstacleVisuals * Visuals;
};
struct RotatingObstacleAnimator {
  struct RotatingObstacleAnimator__Class *klass;
  struct MonitorData *monitor;
  struct RotatingObstacleAnimator__Fields fields;
};
struct RotatingObstacleVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * DefaultImpactEffect;
  struct GameObject * DefaultImpactEffectLoop;
  struct LayerMask BlockingLayers;
  struct Transform * EffectSpawnPoint;
  struct GameObject * m_lastImpactEffectLoop;
  bool m_isLooping;
  struct Vector3 m_lastSpawnPosition;
  struct List_1_UnityEngine_ParticleSystem_ * s_particleSystemList;
};
struct RotatingObstacleVisuals {
  struct RotatingObstacleVisuals__Class *klass;
  struct MonitorData *monitor;
  struct RotatingObstacleVisuals__Fields fields;
};
struct RotatingObstacleVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RotatingObstacleVisuals__StaticFields {
};
struct RotatingObstacleVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotatingObstacleVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotatingObstacleVisuals__VTable vtable;
};
struct RotatingObstacleAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_MoonSetupVisuals;
};
struct RotatingObstacleAnimator__StaticFields {
};
struct RotatingObstacleAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotatingObstacleAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotatingObstacleAnimator__VTable vtable;
};

struct RotatingObstacleImpactEffect__Fields {
  struct MonoBehaviour__Fields _;
};
struct RotatingObstacleImpactEffect {
  struct RotatingObstacleImpactEffect__Class *klass;
  struct MonitorData *monitor;
  struct RotatingObstacleImpactEffect__Fields fields;
};
struct RotatingObstacleImpactEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RotatingObstacleImpactEffect__StaticFields {
};
struct RotatingObstacleImpactEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotatingObstacleImpactEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotatingObstacleImpactEffect__VTable vtable;
};

struct RotatingObstacleLogic__Fields {
  struct MonoBehaviour__Fields _;
  float Speed;
  float m_rotation;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
  struct RotatingObstacleAnimator * Animator;
};
struct RotatingObstacleLogic {
  struct RotatingObstacleLogic__Class *klass;
  struct MonitorData *monitor;
  struct RotatingObstacleLogic__Fields fields;
};
struct RotatingObstacleLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_MoonSetupAnimator;
};
struct RotatingObstacleLogic__StaticFields {
};
struct RotatingObstacleLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotatingObstacleLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotatingObstacleLogic__VTable vtable;
};

struct SetRotationFromDamage__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_IDamageNotifier_ * DamageNotifier;
  struct Transform * Target;
};
struct SetRotationFromDamage {
  struct SetRotationFromDamage__Class *klass;
  struct MonitorData *monitor;
  struct SetRotationFromDamage__Fields fields;
};
struct SetRotationFromDamage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetRotationFromDamage__StaticFields {
};
struct SetRotationFromDamage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetRotationFromDamage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetRotationFromDamage__VTable vtable;
};

struct ShootableCreepAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct ShootableCreepVisuals * Visuals;
  struct MoonTimeline * DeathSequence;
  struct MoonTimeline * HitSequence;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct ShootableCreepAnimator {
  struct ShootableCreepAnimator__Class *klass;
  struct MonitorData *monitor;
  struct ShootableCreepAnimator__Fields fields;
};
struct ShootableCreepVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * DeathTimeline;
  struct MoonTimeline * HitTimeline;
  struct BoxCollider * Hitbox;
  struct List_1_UnityEngine_GameObject_ * DisableOnCreepDestroyed;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct ShootableCreepVisuals {
  struct ShootableCreepVisuals__Class *klass;
  struct MonitorData *monitor;
  struct ShootableCreepVisuals__Fields fields;
};
struct ShootableCreepVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct ShootableCreepVisuals__StaticFields {
};
struct ShootableCreepVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShootableCreepVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShootableCreepVisuals__VTable vtable;
};
struct ShootableCreepAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_MoonSetupVisuals;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct ShootableCreepAnimator__StaticFields {
};
struct ShootableCreepAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShootableCreepAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShootableCreepAnimator__VTable vtable;
};

struct ShootableCreepLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct ShootableCreepAnimator * Animator;
  struct MoonReference_1_IGenericUberState_ * State;
  struct Vitals * Vitals;
  struct OrbSpawner * OrbSpawner;
  struct GameObject * DisableOnCreepDestroyed;
  struct BoxCollider * Hitbox;
  bool m_state;
  struct IUberState__Array * m_affectingUberStates;
};
struct ShootableCreepLogic {
  struct ShootableCreepLogic__Class *klass;
  struct MonitorData *monitor;
  struct ShootableCreepLogic__Fields fields;
};
struct ShootableCreepLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_MoonSetupAnimator;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData get_SharedState;
  VirtualInvokeData set_SharedState;
  VirtualInvokeData get_ObjectReference;
};
struct ShootableCreepLogic__StaticFields {
};
struct ShootableCreepLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShootableCreepLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShootableCreepLogic__VTable vtable;
};

enum SmallInteractivesPlaceholder_SpawnMode__Enum : int32_t {
  SmallInteractivesPlaceholder_SpawnMode__Enum_AutoSpawn = 0,
  SmallInteractivesPlaceholder_SpawnMode__Enum_SpawnOnEvent = 1,
};
struct SmallInteractivesPlaceholder_SpawnMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SmallInteractivesPlaceholder_SpawnMode__Enum value;
};
struct SmallInteractivesPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Prefab;
  int32_t Amount;
  float Radius;
  struct FloatRange_1 SizeVariation;
  float ForceAtSpawn;
  struct Condition_1 * Condition;
  enum SmallInteractivesPlaceholder_SpawnMode__Enum Mode;
  struct MoonReference_1_ISwitch_ * SpawnEvent;
  bool m_spawnedInstance;
  struct List_1_UnityEngine_GameObject_ * m_currentInstances;
  struct ISwitch * m_spawnEvent;
  struct List_1_UnityEngine_Vector3_ * m_previewData;
};
struct SmallInteractivesPlaceholder {
  struct SmallInteractivesPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SmallInteractivesPlaceholder__Fields fields;
};
struct SmallInteractivesPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
  VirtualInvokeData SpawnPrefab;
};
struct SmallInteractivesPlaceholder__StaticFields {
};
struct SmallInteractivesPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SmallInteractivesPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SmallInteractivesPlaceholder__VTable vtable;
};

struct TimeOutBreakable__Fields {
  struct GuidOwner__Fields _;
  float Timeout;
};
struct TimeOutBreakable {
  struct TimeOutBreakable__Class *klass;
  struct MonitorData *monitor;
  struct TimeOutBreakable__Fields fields;
};
struct TimeOutBreakable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnVitalsDeath;
};
struct TimeOutBreakable__StaticFields {
};
struct TimeOutBreakable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeOutBreakable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeOutBreakable__VTable vtable;
};

struct TimeTrackerForMoonGuid__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_TimeTrackerForMoonGuid_TrackerEntry_ * m_entries;
  int32_t m_index;
};
struct TimeTrackerForMoonGuid {
  struct TimeTrackerForMoonGuid__Class *klass;
  struct MonitorData *monitor;
  struct TimeTrackerForMoonGuid__Fields fields;
};
struct __declspec(align(8)) List_1_TimeTrackerForMoonGuid_TrackerEntry___Fields {
  struct TimeTrackerForMoonGuid_TrackerEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TimeTrackerForMoonGuid_TrackerEntry_ {
  struct List_1_TimeTrackerForMoonGuid_TrackerEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TimeTrackerForMoonGuid_TrackerEntry___Fields fields;
};
struct __declspec(align(8)) TimeTrackerForMoonGuid_TrackerEntry__Fields {
  struct MoonGuid * Guid;
  float _TimeRegistered_k__BackingField;
  float _TimeToUnregister_k__BackingField;
};
struct TimeTrackerForMoonGuid_TrackerEntry {
  struct TimeTrackerForMoonGuid_TrackerEntry__Class *klass;
  struct MonitorData *monitor;
  struct TimeTrackerForMoonGuid_TrackerEntry__Fields fields;
};
struct TimeTrackerForMoonGuid_TrackerEntry__Array {
  struct TimeTrackerForMoonGuid_TrackerEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TimeTrackerForMoonGuid_TrackerEntry * vector[32];
};
struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry_ {
  struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___Class *klass;
  struct MonitorData *monitor;
};
struct TimeTrackerForMoonGuid_TrackerEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeTrackerForMoonGuid_TrackerEntry__StaticFields {
};
struct TimeTrackerForMoonGuid_TrackerEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeTrackerForMoonGuid_TrackerEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeTrackerForMoonGuid_TrackerEntry__VTable vtable;
};
struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields {
};
struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___VTable vtable;
};
struct List_1_TimeTrackerForMoonGuid_TrackerEntry___VTable {
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
struct List_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields {
  struct TimeTrackerForMoonGuid_TrackerEntry__Array * _emptyArray;
};
struct List_1_TimeTrackerForMoonGuid_TrackerEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TimeTrackerForMoonGuid_TrackerEntry___VTable vtable;
};
struct TimeTrackerForMoonGuid__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeTrackerForMoonGuid__StaticFields {
  struct TimeTrackerForMoonGuid * Instance;
};
struct TimeTrackerForMoonGuid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeTrackerForMoonGuid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeTrackerForMoonGuid__VTable vtable;
};}