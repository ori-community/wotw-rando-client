namespace app {
struct WindupSwitch__StaticFields {
};
struct WindupSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindupSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindupSwitch__VTable vtable;
};

enum ActivateAndHold_State__Enum : int32_t {
  ActivateAndHold_State__Enum_Resting = 0,
  ActivateAndHold_State__Enum_Forward = 1,
  ActivateAndHold_State__Enum_Hold = 2,
  ActivateAndHold_State__Enum_Back = 3,
};
struct ActivateAndHold_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ActivateAndHold_State__Enum value;
};
struct ActivateAndHold__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_ILever_ * Lever;
  struct MoonTimeline * Forward;
  struct MoonTimeline * Hold;
  struct MoonTimeline * Back;
  enum ActivateAndHold_State__Enum m_currentState;
  struct ILever * m_resolvedLever;
};
struct ActivateAndHold {
  struct ActivateAndHold__Class *klass;
  struct MonitorData *monitor;
  struct ActivateAndHold__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_ILever___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ILever_ * m_cachedProxyType;
  struct ILever * m_volatileValue;
};
struct MoonReference_1_ILever_ {
  struct MoonReference_1_ILever___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ILever___Fields fields;
};
struct IMoonType_1_ILever_ {
  struct IMoonType_1_ILever___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_ILever___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ILever___StaticFields {
};
struct IMoonType_1_ILever___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ILever___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ILever___VTable vtable;
};
struct MoonReference_1_ILever___VTable {
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
struct MoonReference_1_ILever___StaticFields {
};
struct MoonReference_1_ILever___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ILever___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ILever___VTable vtable;
};
struct ActivateAndHold__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActivateAndHold__StaticFields {
};
struct ActivateAndHold__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivateAndHold__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivateAndHold__VTable vtable;
};

struct AnimatedCritter__Fields {
  struct MonoBehaviour__Fields _;
  float m_distance;
  struct MoonTimeline * Timeline;
  struct Transform * m_transform;
  struct Vector3 m_position;
  float m_effectiveDistance;
};
struct AnimatedCritter {
  struct AnimatedCritter__Class *klass;
  struct MonitorData *monitor;
  struct AnimatedCritter__Fields fields;
};
struct AnimatedCritter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimatedCritter__StaticFields {
};
struct AnimatedCritter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatedCritter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatedCritter__VTable vtable;
};

struct AnimatedCritterController__Fields {
  struct MonoBehaviour__Fields _;
  struct PlayerInsideZoneChecker * Trigger;
  struct List_1_AnimatedCritter_ * Critters;
  int32_t m_critterIndex;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct AnimatedCritterController {
  struct AnimatedCritterController__Class *klass;
  struct MonitorData *monitor;
  struct AnimatedCritterController__Fields fields;
};
struct __declspec(align(8)) List_1_AnimatedCritter___Fields {
  struct AnimatedCritter__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AnimatedCritter_ {
  struct List_1_AnimatedCritter___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AnimatedCritter___Fields fields;
};
struct AnimatedCritter__Array {
  struct AnimatedCritter__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimatedCritter * vector[32];
};
struct IEnumerator_1_AnimatedCritter_ {
  struct IEnumerator_1_AnimatedCritter___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AnimatedCritter___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AnimatedCritter___StaticFields {
};
struct IEnumerator_1_AnimatedCritter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AnimatedCritter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AnimatedCritter___VTable vtable;
};
struct List_1_AnimatedCritter___VTable {
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
struct List_1_AnimatedCritter___StaticFields {
  struct AnimatedCritter__Array * _emptyArray;
};
struct List_1_AnimatedCritter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AnimatedCritter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AnimatedCritter___VTable vtable;
};
struct AnimatedCritterController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct AnimatedCritterController__StaticFields {
};
struct AnimatedCritterController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatedCritterController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatedCritterController__VTable vtable;
};

struct BombableWallAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct BombableWallVisuals * Visuals;
  struct MoonTimeline * DestroyTimeline;
};
struct BombableWallAnimator {
  struct BombableWallAnimator__Class *klass;
  struct MonitorData *monitor;
  struct BombableWallAnimator__Fields fields;
};
struct BombableWallVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * DestroyTimeline;
  struct GameObject * VisualsToDeactivate;
  struct MeshCollider * Collider;
};
struct BombableWallVisuals {
  struct BombableWallVisuals__Class *klass;
  struct MonitorData *monitor;
  struct BombableWallVisuals__Fields fields;
};
struct BombableWallVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BombableWallVisuals__StaticFields {
};
struct BombableWallVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BombableWallVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BombableWallVisuals__VTable vtable;
};
struct BombableWallAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_MoonSetupVisuals;
};
struct BombableWallAnimator__StaticFields {
};
struct BombableWallAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BombableWallAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BombableWallAnimator__VTable vtable;
};

struct BombableWallLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedBooleanUberState * SerializedState;
  struct BombableWallAnimator * Animator;
  struct DamageReceiver * Hitbox;
  struct GasBallAttractionRect * GasballAttractionZone;
  bool CreateCheckpointOnDestruction;
  struct CheckpointFunctionality Checkpoint;
  struct IUberState__Array * m_affectingUberStates;
  struct List_1_UnityEngine_GameObject_ * m_allTargets;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct BombableWallLogic {
  struct BombableWallLogic__Class *klass;
  struct MonitorData *monitor;
  struct BombableWallLogic__Fields fields;
};
struct __declspec(align(8)) GasBallAttractionRect__Fields {
  struct Rect Zone;
  float AttractionTime;
  struct Transform * ReferenceTransfom;
  struct Rect m_runTimeZone;
  struct IGasBallBait * m_owner;
};
struct GasBallAttractionRect {
  struct GasBallAttractionRect__Class *klass;
  struct MonitorData *monitor;
  struct GasBallAttractionRect__Fields fields;
};
struct GasBallAttractionRect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GasBallAttractionRect__StaticFields {
};
struct GasBallAttractionRect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasBallAttractionRect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasBallAttractionRect__VTable vtable;
};
struct BombableWallLogic__VTable {
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
  VirtualInvokeData get_BabyWormAutoTargetPosition;
  VirtualInvokeData get_BabyWormAutoTargetPriority;
  VirtualInvokeData get_TargetActive;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData get_MoonSetupAnimator;
  VirtualInvokeData OnRange;
  VirtualInvokeData GasBallBaitCenter;
  VirtualInvokeData get_GasBallAttractionTime;
};
struct BombableWallLogic__StaticFields {
};
struct BombableWallLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BombableWallLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BombableWallLogic__VTable vtable;
};

struct BreakableWallAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct BreakableWallVisuals * Visuals;
  struct MoonTimeline * OnHitTimeline;
  struct MoonTimeline * BreakStage1Timeline;
  struct MoonTimeline * BreakStage2Timeline;
  struct MoonTimeline * OnDestroyTimeline;
  struct MoonTimeline * OnDestroyByFireTimeline;
  struct MoonTimeline * BreakStageA;
  struct MoonTimeline * BreakStageB;
  struct MoonTimeline * FadeoutTimeline;
  bool _InvalidateParentTimelineCache_k__BackingField;
  bool m_isSecret;
};
struct BreakableWallAnimator {
  struct BreakableWallAnimator__Class *klass;
  struct MonitorData *monitor;
  struct BreakableWallAnimator__Fields fields;
};
struct BreakableWallVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * WallRoot;
  struct GameObject * WallPartA;
  struct GameObject * WallPartB;
  struct GameObject * WallPartC;
  struct MoonTimeline * ToStageBTimeline;
  struct MoonTimeline * ToStageCTimeline;
  struct MoonTimeline * ToDestroyedTimeline;
  struct MoonTimeline * HitTimeline;
  struct GameObject * HighlightTarget;
  struct GameObject * FadeoutTarget;
};
struct BreakableWallVisuals {
  struct BreakableWallVisuals__Class *klass;
  struct MonitorData *monitor;
  struct BreakableWallVisuals__Fields fields;
};
struct BreakableWallVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BreakableWallVisuals__StaticFields {
};
struct BreakableWallVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BreakableWallVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BreakableWallVisuals__VTable vtable;
};
struct BreakableWallAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_MoonSetupVisuals;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct BreakableWallAnimator__StaticFields {
};
struct BreakableWallAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BreakableWallAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BreakableWallAnimator__VTable vtable;
};

struct BreakableWallLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct BreakableWallAnimator * Animator;
  struct MoonReference_1_IGenericUberState_ * State;
  struct Vitals * Vitals;
  struct GameObject * DisableOnDestroy;
  bool IsSecret;
  float HealthA;
  float HealthB;
  float HealthC;
  int32_t m_state;
  struct Collider * m_collider;
  struct IUberState__Array * m_affectingUberStates;
};
struct BreakableWallLogic {
  struct BreakableWallLogic__Class *klass;
  struct MonitorData *monitor;
  struct BreakableWallLogic__Fields fields;
};
struct BreakableWallLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_MoonSetupAnimator;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct BreakableWallLogic__StaticFields {
};
struct BreakableWallLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BreakableWallLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BreakableWallLogic__VTable vtable;
};

struct Bubble__Fields {
  struct MonoBehaviour__Fields _;
  enum SuspendableMask__Enum m_suspensionMask;
  struct LayerMask DestroyMask;
  float MaxLifeTime;
  float InstantVelocityFromOriTouch;
  float MinAngleForAboveAction;
  struct MoonTimeline * OnOriLandAboveTimeline;
  struct MoonTimeline * BumpTimeline;
  struct MoonTimeline * UnderWaterPopTimeline;
  struct MoonTimeline * AboveWaterPopTimeline;
  bool TarBubble;
  struct String__Array * IgnoreBubblePhysicsLayers;
  float AccelerationY;
  float TurbulencePeriod;
  float TurbulenceAcceleration;
  float FeatherPushForceMultiplier;
  float OriInteractionCooldown;
  struct Vector3 BaseLocalScale;
  float BaseAccelerationY;
  float m_lastOriEnterTime;
  struct Rigidbody * m_rigidbody;
  struct Collider * m_collider;
  struct Collider__Array * m_colliders;
  float m_timeUntilDeath;
  float m_timeUntilDirectionFlip;
  int32_t m_direction;
  struct EntityTargetting * m_entityTargeting;
  struct DamageReceiver * m_damageReceiver;
  struct Vector2 m_externalForce;
  struct Vector2 m_velocityLastFrame;
  bool m_isSuspended;
  bool m_isExploded;
  float Height;
  float StopDecelerationMultiplier;
  struct Transform * m_transform;
};
struct Bubble {
  struct Bubble__Class *klass;
  struct MonitorData *monitor;
  struct Bubble__Fields fields;
};
struct Bubble__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnReceiveWindFromPipe;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData ShouldKillBubble;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnDestroy;
};
struct Bubble__StaticFields {
};
struct Bubble__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Bubble__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Bubble__VTable vtable;
};

struct Bubblemaker__Fields {
  struct MonoBehaviour__Fields _;
  enum SuspendableMask__Enum m_suspensionMask;
  float SpawnTime;
  float SpawnOffsetTime;
  struct MoonTimeline * LaunchTimeline;
  struct EventTriggerAnimator * SpawnBubbleTrigger;
  struct ProjectileSpawner * ProjectileSpawner;
  bool RandomizeScale;
  float MinScaleMultiplier;
  float MaxScaleMultiplier;
  bool RandomizeSpeed;
  float MinSpeedMultiplier;
  float MaxSpeedMultiplier;
  struct GameObject * ProxyBubble;
  bool RaceOverride;
  struct MoonTimeline * m_timelineToPlay;
  float m_spawnTimer;
  float m_spawnOffsetTimer;
  float m_raceTimeLastUpdate;
  struct Collider__Array * m_colliders;
  bool m_isSuspended;
};
struct Bubblemaker {
  struct Bubblemaker__Class *klass;
  struct MonitorData *monitor;
  struct Bubblemaker__Fields fields;
};
struct Bubblemaker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnRaceStart;
  VirtualInvokeData OnSyncRaceTimer;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData Start;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnRestoreCheckpoint;
};
struct Bubblemaker__StaticFields {
};
struct Bubblemaker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Bubblemaker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Bubblemaker__VTable vtable;
};

struct BubblemakerBlocked__Fields {
  struct Bubblemaker__Fields _;
  struct SerializedBooleanUberState * BubbleMakerUnblockedState;
  struct Vitals * BlockerVitals;
  struct MoonTimeline * BlockedTimeline;
  struct MoonTimeline * StarDestroyedTimeline;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct BubblemakerBlocked {
  struct BubblemakerBlocked__Class *klass;
  struct MonitorData *monitor;
  struct BubblemakerBlocked__Fields fields;
};
struct BubblemakerBlocked__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnRaceStart;
  VirtualInvokeData OnSyncRaceTimer;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData Start;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct BubblemakerBlocked__StaticFields {
};
struct BubblemakerBlocked__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BubblemakerBlocked__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BubblemakerBlocked__VTable vtable;
};

struct DashableSwitchAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct DashableSwitchVisuals * Visuals;
  struct MoonTimeline * OpenTimeline;
  struct MoonTimeline * CloseTimeline;
  struct MoonTimeline * RecedeTimeline;
};
struct DashableSwitchAnimator {
  struct DashableSwitchAnimator__Class *klass;
  struct MonitorData *monitor;
  struct DashableSwitchAnimator__Fields fields;
};
struct DashableSwitchVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * OpenTimeline;
  struct MoonTimeline * CloseTimeline;
  struct MoonTimeline * RecedeTimeline;
};
struct DashableSwitchVisuals {
  struct DashableSwitchVisuals__Class *klass;
  struct MonitorData *monitor;
  struct DashableSwitchVisuals__Fields fields;
};
struct DashableSwitchVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DashableSwitchVisuals__StaticFields {
};
struct DashableSwitchVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DashableSwitchVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DashableSwitchVisuals__VTable vtable;
};
struct DashableSwitchAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_MoonSetupVisuals;
};
struct DashableSwitchAnimator__StaticFields {
};
struct DashableSwitchAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DashableSwitchAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DashableSwitchAnimator__VTable vtable;
};

struct DashableSwitchLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct MoonReference_1_IStateTransitionHolder_ * LinkedSetup;
  bool CreateCheckpoint;
  struct CheckpointFunctionality Checkpoint;
  struct DashableSwitchAnimator * Animator;
  struct MoonReference_1_IGenericUberState_ * State;
  bool AllowTriggeringMultipleTimes;
  float CooldownTime;
  float m_timeLastTriggered;
};
struct DashableSwitchLogic {
  struct DashableSwitchLogic__Class *klass;
  struct MonitorData *monitor;
  struct DashableSwitchLogic__Fields fields;
};
struct DashableSwitchLogic__VTable {
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
struct DashableSwitchLogic__StaticFields {
};
struct DashableSwitchLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DashableSwitchLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DashableSwitchLogic__VTable vtable;
};

struct DashableSwitchPhysics__Fields {
  struct MonoBehaviour__Fields _;
  struct DashableSwitchLogic * Logic;
};
struct DashableSwitchPhysics {
  struct DashableSwitchPhysics__Class *klass;
  struct MonitorData *monitor;
  struct DashableSwitchPhysics__Fields fields;
};
struct IMoonSetupLogic {
  struct IMoonSetupLogic__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonSetupLogic__VTable {
  VirtualInvokeData get_MoonSetupAnimator;
};
struct IMoonSetupLogic__StaticFields {
};
struct IMoonSetupLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonSetupLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonSetupLogic__VTable vtable;
};
struct DashableSwitchPhysics__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData OnDashHit;
  VirtualInvokeData OnDashHit_1;
  VirtualInvokeData get_MoonSetupLogic;
};
struct DashableSwitchPhysics__StaticFields {
};
struct DashableSwitchPhysics__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DashableSwitchPhysics__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DashableSwitchPhysics__VTable vtable;
};

struct Elevator__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * ElevatorSuport;
  struct SerializedByteUberState * UberState;
  float Speed;
  struct MoonTimeline * StartGoingUpTimeline;
  struct MoonTimeline * StartGoingDownTimeline;
  struct MoonTimeline * StopMovingTimeline;
  struct MoonReference_1_ILever_ * Lever;
  struct List_1_Elevator_ElevatorStop_ * Stops;
  float m_timer;
  float m_duration;
  struct Vector3 m_fromPosition;
  struct Vector3 m_toPosition;
  bool m_isMoving;
  struct IUberState__Array * m_affectingUberStates;
  struct List_1_UnityEngine_GameObject_ * m_targets;
  enum SuspendableMask__Enum _Mask_k__BackingField;
  bool _IsSuspended_k__BackingField;
};
struct Elevator {
  struct Elevator__Class *klass;
  struct MonitorData *monitor;
  struct Elevator__Fields fields;
};
struct __declspec(align(8)) List_1_Elevator_ElevatorStop___Fields {
  struct Elevator_ElevatorStop__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Elevator_ElevatorStop_ {
  struct List_1_Elevator_ElevatorStop___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Elevator_ElevatorStop___Fields fields;
};
struct __declspec(align(8)) Elevator_ElevatorStop__Fields {
  float Height;
  struct Condition_1 * ValidCondition;
};
struct Elevator_ElevatorStop {
  struct Elevator_ElevatorStop__Class *klass;
  struct MonitorData *monitor;
  struct Elevator_ElevatorStop__Fields fields;
};
struct Elevator_ElevatorStop__Array {
  struct Elevator_ElevatorStop__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Elevator_ElevatorStop * vector[32];
};
struct IEnumerator_1_Elevator_ElevatorStop_ {
  struct IEnumerator_1_Elevator_ElevatorStop___Class *klass;
  struct MonitorData *monitor;
};
struct Elevator_ElevatorStop__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Elevator_ElevatorStop__StaticFields {
};
struct Elevator_ElevatorStop__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Elevator_ElevatorStop__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Elevator_ElevatorStop__VTable vtable;
};
struct IEnumerator_1_Elevator_ElevatorStop___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Elevator_ElevatorStop___StaticFields {
};
struct IEnumerator_1_Elevator_ElevatorStop___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Elevator_ElevatorStop___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Elevator_ElevatorStop___VTable vtable;
};
struct List_1_Elevator_ElevatorStop___VTable {
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
struct List_1_Elevator_ElevatorStop___StaticFields {
  struct Elevator_ElevatorStop__Array * _emptyArray;
};
struct List_1_Elevator_ElevatorStop___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Elevator_ElevatorStop___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Elevator_ElevatorStop___VTable vtable;
};
struct Elevator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData GetTweenNormalizedValue;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct Elevator__StaticFields {
};
struct Elevator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Elevator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Elevator__VTable vtable;
};}