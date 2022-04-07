namespace app {
struct KwolokBossTauntBehaviour {
  struct KwolokBossTauntBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTauntBehaviour__Fields fields;
};
struct KwolokBossTauntBehaviour__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData IsLocomotionFollowAllowed;
  VirtualInvokeData IsLocomotionStayAtRangeAllowed;
  VirtualInvokeData ModifyPostAttackCooldown;
  VirtualInvokeData ModifyMaxLookAtWeights;
};
struct KwolokBossTauntBehaviour__StaticFields {
};
struct KwolokBossTauntBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTauntBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTauntBehaviour__VTable vtable;
};

enum KwolokBossTendril_DurationType__Enum : int32_t {
  KwolokBossTendril_DurationType__Enum_Short = 0,
  KwolokBossTendril_DurationType__Enum_Mid = 1,
};
struct KwolokBossTendril_DurationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokBossTendril_DurationType__Enum value;
};
enum KwolokBossTendril_VariationType__Enum : int32_t {
  KwolokBossTendril_VariationType__Enum_A = 0,
  KwolokBossTendril_VariationType__Enum_B = 1,
  KwolokBossTendril_VariationType__Enum_C = 2,
  KwolokBossTendril_VariationType__Enum_D = 3,
};
struct KwolokBossTendril_VariationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokBossTendril_VariationType__Enum value;
};
enum KwolokBossTendril_State__Enum : int32_t {
  KwolokBossTendril_State__Enum_None = 0,
  KwolokBossTendril_State__Enum_Attacking = 1,
  KwolokBossTendril_State__Enum_Holding = 2,
  KwolokBossTendril_State__Enum_Destroying = 3,
  KwolokBossTendril_State__Enum_Destroyed = 4,
};
struct KwolokBossTendril_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokBossTendril_State__Enum value;
};
struct KwolokBossTendril__Fields {
  struct MonoBehaviour__Fields _;
  struct Vitals * Vitals;
  struct HitFlash3D * HitFlash;
  struct MoonTimeline * AttackTimeline;
  struct MoonTimeline * HoldTimeline;
  struct MoonTimeline * DestroyTimeline;
  struct MoonTimeline * HitTimeline;
  struct List_1_Condition_ * AutoAttackConditions;
  struct KwolokBossTendril_AllowedTendrilVariations * AllowedVariations;
  bool ShouldSelfDestroy;
  bool DestroyOnRestoreCheckpoint;
  float HoldTime;
  float m_holdTimer;
  struct Collider__Array * m_colliders;
  enum KwolokBossTendril_DurationType__Enum m_duration;
  enum KwolokBossTendril_VariationType__Enum m_variation;
  enum KwolokBossTendril_State__Enum m_currentState;
  struct OrbSpawner * m_orbSpawner;
};
struct KwolokBossTendril {
  struct KwolokBossTendril__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendril__Fields fields;
};
struct __declspec(align(8)) List_1_Condition___Fields {
  struct Condition_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Condition_ {
  struct List_1_Condition___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Condition___Fields fields;
};
struct Condition_1__Array {
  struct Condition_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Condition_1 * vector[32];
};
struct IEnumerator_1_Condition_ {
  struct IEnumerator_1_Condition___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) KwolokBossTendril_AllowedTendrilVariations__Fields {
  bool Short;
  bool Mid;
  bool A;
  bool B;
  bool C;
  bool D;
};
struct KwolokBossTendril_AllowedTendrilVariations {
  struct KwolokBossTendril_AllowedTendrilVariations__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendril_AllowedTendrilVariations__Fields fields;
};
struct IEnumerator_1_Condition___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Condition___StaticFields {
};
struct IEnumerator_1_Condition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Condition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Condition___VTable vtable;
};
struct List_1_Condition___VTable {
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
struct List_1_Condition___StaticFields {
  struct Condition_1__Array * _emptyArray;
};
struct List_1_Condition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Condition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Condition___VTable vtable;
};
struct KwolokBossTendril_AllowedTendrilVariations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KwolokBossTendril_AllowedTendrilVariations__StaticFields {
};
struct KwolokBossTendril_AllowedTendrilVariations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendril_AllowedTendrilVariations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendril_AllowedTendrilVariations__VTable vtable;
};
struct KwolokBossTendril__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnSceneRootPostEnable;
};
struct KwolokBossTendril__StaticFields {
};
struct KwolokBossTendril__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendril__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendril__VTable vtable;
};

struct __declspec(align(8)) List_1_KwolokBossTendril_DurationType___Fields {
  struct KwolokBossTendril_DurationType__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_KwolokBossTendril_DurationType_ {
  struct List_1_KwolokBossTendril_DurationType___Class *klass;
  struct MonitorData *monitor;
  struct List_1_KwolokBossTendril_DurationType___Fields fields;
};
struct KwolokBossTendril_DurationType__Enum__Array {
  struct KwolokBossTendril_DurationType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum KwolokBossTendril_DurationType__Enum vector[32];
};
struct IEnumerator_1_KwolokBossTendril_DurationType_ {
  struct IEnumerator_1_KwolokBossTendril_DurationType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_KwolokBossTendril_DurationType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KwolokBossTendril_DurationType___StaticFields {
};
struct IEnumerator_1_KwolokBossTendril_DurationType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KwolokBossTendril_DurationType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KwolokBossTendril_DurationType___VTable vtable;
};
struct List_1_KwolokBossTendril_DurationType___VTable {
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
struct List_1_KwolokBossTendril_DurationType___StaticFields {
  struct KwolokBossTendril_DurationType__Enum__Array * _emptyArray;
};
struct List_1_KwolokBossTendril_DurationType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_KwolokBossTendril_DurationType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_KwolokBossTendril_DurationType___VTable vtable;
};

struct __declspec(align(8)) List_1_KwolokBossTendril_VariationType___Fields {
  struct KwolokBossTendril_VariationType__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_KwolokBossTendril_VariationType_ {
  struct List_1_KwolokBossTendril_VariationType___Class *klass;
  struct MonitorData *monitor;
  struct List_1_KwolokBossTendril_VariationType___Fields fields;
};
struct KwolokBossTendril_VariationType__Enum__Array {
  struct KwolokBossTendril_VariationType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum KwolokBossTendril_VariationType__Enum vector[32];
};
struct IEnumerator_1_KwolokBossTendril_VariationType_ {
  struct IEnumerator_1_KwolokBossTendril_VariationType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_KwolokBossTendril_VariationType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KwolokBossTendril_VariationType___StaticFields {
};
struct IEnumerator_1_KwolokBossTendril_VariationType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KwolokBossTendril_VariationType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KwolokBossTendril_VariationType___VTable vtable;
};
struct List_1_KwolokBossTendril_VariationType___VTable {
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
struct List_1_KwolokBossTendril_VariationType___StaticFields {
  struct KwolokBossTendril_VariationType__Enum__Array * _emptyArray;
};
struct List_1_KwolokBossTendril_VariationType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_KwolokBossTendril_VariationType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_KwolokBossTendril_VariationType___VTable vtable;
};

struct KwolokBossTendrilLengthBrain__Fields {
  struct MonoBehaviour__Fields _;
  struct KwolokBossTendril * m_tendril;
  struct Enum__Array * Entries;
};
struct KwolokBossTendrilLengthBrain {
  struct KwolokBossTendrilLengthBrain__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilLengthBrain__Fields fields;
};
struct KwolokBossTendrilLengthBrain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEntries;
  VirtualInvokeData Evaluate;
  VirtualInvokeData get_ShouldSkip;
};
struct KwolokBossTendrilLengthBrain__StaticFields {
};
struct KwolokBossTendrilLengthBrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilLengthBrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilLengthBrain__VTable vtable;
};

struct KwolokBossTendrilStrikeBehaviour__Fields {
  struct KwolokBossBaseBehaviour__Fields _;
  struct MoonTimeline * StabInTimeline;
  struct MoonTimeline * StabLeftTimeline;
  struct MoonTimeline * StabLeftOutTimeline;
  struct MoonTimeline * StabRightTimeline;
  struct MoonTimeline * StabRightOutTimeline;
  struct List_1_Moon_Timeline_EventTriggerAnimator_ * TendrilStrikeAttackTriggers;
  float NumberOfStrikes;
  float CancelBehaviourAtDamageThreshold;
  int32_t MinStrikesBeforeCancellation;
  float TendrilHeartChance;
  float TendrilEnergyChance;
  struct GameObject * TendrilPrefab;
  struct List_1_Moon_MoonReference_1__8 * TendrilPositioningPaths;
  struct List_1_LinearPath_ * m_tendrilPositioningPathsCached;
  int32_t m_tendrilIndex;
  int32_t m_strikeCount;
  float m_damageTaken;
  bool m_wasCancelled;
  struct StateMachine_2 * m_stateMachine;
  struct KwolokBossTendrilStrikeBehaviour_States * m_states;
};
struct KwolokBossTendrilStrikeBehaviour {
  struct KwolokBossTendrilStrikeBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__8__Fields {
  struct MoonReference_1_LinearPath___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__8 {
  struct List_1_Moon_MoonReference_1__8__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__8__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_LinearPath___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_LinearPath_ * m_cachedProxyType;
  struct LinearPath * m_volatileValue;
};
struct MoonReference_1_LinearPath_ {
  struct MoonReference_1_LinearPath___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_LinearPath___Fields fields;
};
struct MoonReference_1_LinearPath___Array {
  struct MoonReference_1_LinearPath___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_LinearPath_ * vector[32];
};
struct IMoonType_1_LinearPath_ {
  struct IMoonType_1_LinearPath___Class *klass;
  struct MonitorData *monitor;
};
struct LinearPath__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UnityEngine_Vector3_ * Path;
  struct Color PathColor;
  bool ClosedPath;
};
struct LinearPath {
  struct LinearPath__Class *klass;
  struct MonitorData *monitor;
  struct LinearPath__Fields fields;
};
struct IEnumerator_1_Moon_MoonReference_1__8 {
  struct IEnumerator_1_Moon_MoonReference_1__8__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_LinearPath___Fields {
  struct LinearPath__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LinearPath_ {
  struct List_1_LinearPath___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LinearPath___Fields fields;
};
struct LinearPath__Array {
  struct LinearPath__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LinearPath * vector[32];
};
struct IEnumerator_1_LinearPath_ {
  struct IEnumerator_1_LinearPath___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) KwolokBossTendrilStrikeBehaviour_States__Fields {
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * StabIn;
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * StabLeft;
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * StabLeftOut;
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * StabRight;
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * StabRightOut;
};
struct KwolokBossTendrilStrikeBehaviour_States {
  struct KwolokBossTendrilStrikeBehaviour_States__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour_States__Fields fields;
};
struct __declspec(align(8)) KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields {
  struct KwolokBossTendrilStrikeBehaviour * m_behaviour;
  struct StateMachine_2 * m_stateMachine;
  struct KwolokBossTendrilStrikeBehaviour_States * m_states;
  struct KwolokBossEntity * m_entity;
};
struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState {
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields fields;
};
struct IMoonType_1_LinearPath___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_LinearPath___StaticFields {
};
struct IMoonType_1_LinearPath___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_LinearPath___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_LinearPath___VTable vtable;
};
struct LinearPath__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LinearPath__StaticFields {
};
struct LinearPath__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LinearPath__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LinearPath__VTable vtable;
};
struct MoonReference_1_LinearPath___VTable {
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
struct MoonReference_1_LinearPath___StaticFields {
};
struct MoonReference_1_LinearPath___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_LinearPath___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_LinearPath___VTable vtable;
};
struct IEnumerator_1_Moon_MoonReference_1__8__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonReference_1__8__StaticFields {
};
struct IEnumerator_1_Moon_MoonReference_1__8__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonReference_1__8__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonReference_1__8__VTable vtable;
};
struct List_1_Moon_MoonReference_1__8__VTable {
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
struct List_1_Moon_MoonReference_1__8__StaticFields {
  struct MoonReference_1_LinearPath___Array * _emptyArray;
};
struct List_1_Moon_MoonReference_1__8__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonReference_1__8__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonReference_1__8__VTable vtable;
};
struct IEnumerator_1_LinearPath___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LinearPath___StaticFields {
};
struct IEnumerator_1_LinearPath___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LinearPath___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LinearPath___VTable vtable;
};
struct List_1_LinearPath___VTable {
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
struct List_1_LinearPath___StaticFields {
  struct LinearPath__Array * _emptyArray;
};
struct List_1_LinearPath___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LinearPath___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LinearPath___VTable vtable;
};
struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__VTable vtable;
};
struct KwolokBossTendrilStrikeBehaviour_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KwolokBossTendrilStrikeBehaviour_States__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour_States__VTable vtable;
};
struct KwolokBossTendrilStrikeBehaviour__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData IsLocomotionFollowAllowed;
  VirtualInvokeData IsLocomotionStayAtRangeAllowed;
  VirtualInvokeData ModifyPostAttackCooldown;
  VirtualInvokeData ModifyMaxLookAtWeights;
};
struct KwolokBossTendrilStrikeBehaviour__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour__VTable vtable;
};

struct KwolokBossTendrilStrikeBehaviour_StabInState__Fields {
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields _;
};
struct KwolokBossTendrilStrikeBehaviour_StabInState {
  struct KwolokBossTendrilStrikeBehaviour_StabInState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour_StabInState__Fields fields;
};
struct KwolokBossTendrilStrikeBehaviour_StabInState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct KwolokBossTendrilStrikeBehaviour_StabInState__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour_StabInState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour_StabInState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour_StabInState__VTable vtable;
};

struct KwolokBossTendrilStrikeBehaviour_StabLeftState__Fields {
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields _;
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftState {
  struct KwolokBossTendrilStrikeBehaviour_StabLeftState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour_StabLeftState__Fields fields;
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftState__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour_StabLeftState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour_StabLeftState__VTable vtable;
};

struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Fields {
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields _;
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState {
  struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Fields fields;
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour_StabLeftOutState__VTable vtable;
};

struct KwolokBossTendrilStrikeBehaviour_StabRightState__Fields {
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields _;
};
struct KwolokBossTendrilStrikeBehaviour_StabRightState {
  struct KwolokBossTendrilStrikeBehaviour_StabRightState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour_StabRightState__Fields fields;
};
struct KwolokBossTendrilStrikeBehaviour_StabRightState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct KwolokBossTendrilStrikeBehaviour_StabRightState__StaticFields {
};
struct KwolokBossTendrilStrikeBehaviour_StabRightState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBossTendrilStrikeBehaviour_StabRightState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBossTendrilStrikeBehaviour_StabRightState__VTable vtable;
};

struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__Fields {
  struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields _;
};
struct KwolokBossTendrilStrikeBehaviour_StabRightOutState {
  struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__Fields fields;
};
struct KwolokBossTendrilStrikeBehaviour_StabRightOutState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};}