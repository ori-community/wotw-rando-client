namespace app {
struct UberStateBoolCondition {
  struct UberStateBoolCondition__Class *klass;
  struct MonitorData *monitor;
  struct UberStateBoolCondition__Fields fields;
};
struct UberStateBoolCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct UberStateBoolCondition__StaticFields {
};
struct UberStateBoolCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateBoolCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateBoolCondition__VTable vtable;
};

enum UberStateValueCondition_ComparisonMode__Enum : int32_t {
  UberStateValueCondition_ComparisonMode__Enum_GreaterThanOrEqual = 0,
  UberStateValueCondition_ComparisonMode__Enum_LessThan = 1,
  UberStateValueCondition_ComparisonMode__Enum_Equal = 2,
};
struct UberStateValueCondition_ComparisonMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberStateValueCondition_ComparisonMode__Enum value;
};
struct UberStateValueCondition__Fields {
  struct Condition_1__Fields _;
  struct MoonReference_1_IGenericUberState_ * Descriptor;
  float Value;
  enum UberStateValueCondition_ComparisonMode__Enum Compare;
  bool m_evaluatedAtLeastOnce;
  bool m_validateResult;
  struct IUberState__Array * m_affectingUberStates;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct UberStateValueCondition {
  struct UberStateValueCondition__Class *klass;
  struct MonitorData *monitor;
  struct UberStateValueCondition__Fields fields;
};
struct UberStateValueCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct UberStateValueCondition__StaticFields {
  bool UberStateConditionOptimizationOn;
};
struct UberStateValueCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateValueCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateValueCondition__VTable vtable;
};

struct WwiseBootstrapInitializer__Fields {
  struct MonoBehaviour__Fields _;
};
struct WwiseBootstrapInitializer {
  struct WwiseBootstrapInitializer__Class *klass;
  struct MonitorData *monitor;
  struct WwiseBootstrapInitializer__Fields fields;
};
struct WwiseBootstrapInitializer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseBootstrapInitializer__StaticFields {
  struct GameObject * WWiseBootstrap;
};
struct WwiseBootstrapInitializer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseBootstrapInitializer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseBootstrapInitializer__VTable vtable;
};

struct AchievementsLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_AchievementAsset_ * m_cache;
  struct AchievementsStateValidator * m_stateValidator;
  struct AchievementAsset * TestAchievement;
  struct AchievementAsset * A01FendHowlAchievementAsset;
  struct AchievementAsset * A03DefeatHornbugAchievementAsset;
  struct AchievementAsset * A04DefeatLaserShooterAchievementAsset;
  struct AchievementAsset * A07ReachWellspringGladesAchievementAsset;
  struct AchievementAsset * A08CompleteWatermillEscapeAchievementAsset;
  struct AchievementAsset * A09CompleteAvalancheEscapeAchievementAsset;
  struct AchievementAsset * A10DefeatMoraAchievementAsset;
  struct AchievementAsset * A11DefeatKwolokAchievementAsset;
  struct AchievementAsset * A12CompleteDesertEscapeAchievementAsset;
  struct AchievementAsset * A13DefeatShriekAchievementAsset;
  struct AchievementAsset * A14CompleteTheGameAchievementAsset;
  struct AchievementAsset * A15CompleteNGPlusAchievementAsset;
  struct AchievementAsset * B01UnlcokAllSkillsAchievementAsset;
  struct AchievementAsset * B02UpgradeAllSkillsAchievementAsset;
  struct AchievementAsset * B03UpgadeShardSlotsAchievementAsset;
  struct AchievementAsset * B04UnlockAllShardsAchievementAsset;
  struct AchievementAsset * B05UpgradeAllShardsAchievementAsset;
  struct AchievementAsset * B06MaxOutHealthAchievementAsset;
  struct AchievementAsset * B07MaxOutEnergyAchievementAsset;
  struct AchievementAsset * B08BuyAllMapsAchievementAsset;
  struct AchievementAsset * B09CompleteAllShrinesAchievementAsset;
  struct AchievementAsset * B10FoundAllPickupsAchievementAsset;
  struct AchievementAsset * B11CompleteTradeSequenceQuestAchievementAsset;
  struct AchievementAsset * B12CompleteAllSideQuestsAchievementAsset;
  struct AchievementAsset * B13CompleteAllWellspringProjectsAchievementAsset;
  struct AchievementAsset * B14BeatEveryGhostInEveryRaceAchievementAsset;
  struct AchievementAsset * C01DefeatBossWithoutTakingDamageAchievementAsset;
  struct AchievementAsset * C02DefeatBossUnderXMinutesAchievementAsset;
  struct AchievementAsset * C03Juggle3OrMoreProjectilesFor5SecAchievementAsset;
  struct AchievementAsset * C05DefeatXEnemiesWithoutTouchingGroundAchievementAsset;
  struct AchievementAsset * C07NeverTouchedCorruptedWaterAchievementAsset;
  struct AchievementAsset * C10PiercedXEnemiesWithSpearAchievementAsset;
  struct AchievementAsset * C11DefeatXEnemiesUsingHazardsAchievementAsset;
  struct AchievementAsset * C13BeatGameWithoutEquippingShardAchievementAsset;
  struct AchievementAsset * C14GeatGameWithoutSpendingSpiritLightAchievementAsset;
  struct AchievementAsset * C15CompleteGameUnderXHoursAchievementAsset;
  struct AchievementAsset * C16CompleteGameWithoutDyingAchievementAsset;
  enum SuspendableMask__Enum m_suspendableMask;
  bool _IsSuspended_k__BackingField;
  float m_commitPickupCollectionProgressCooldown;
  bool m_grantedJuggleProjectileAchievement;
  bool m_shouldGrantAchievements;
  bool m_delegatesAssigned;
  struct SerializedBooleanUberState * PoisonousWaterTouched;
  struct SerializedBooleanUberState * ShardEverEquipped;
  struct SerializedBooleanUberState * SpiritLightEverSpent;
  struct SerializedIntUberState * SpiritLightEverGainedCounter;
  struct SerializedIntUberState * CollectablesCounterState;
  struct SerializedIntUberState * EnemiesKilledByHazardsState;
  struct SerializedBooleanUberState * GotHitBySpider;
  struct SerializedIntUberState * HealthContainersCounterState;
  struct SerializedIntUberState * EnergyContainersCounterState;
  struct ConditionUberState * BoughtAllMapsState;
  bool m_spiderBossFightIsOn;
  float m_bossFightTimer;
  int32_t m_projectilesJuggled;
  float m_inAirTime;
  int32_t m_enemiesKilledInAir;
  int32_t m_enemiesKilledBySpear;
  double m_lastTotalPlaytime;
  int32_t m_lastCollectedPickupProggresion;
  int32_t m_lastSentCollectedPickupProggresion;
};
struct AchievementsLogic {
  struct AchievementsLogic__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsLogic__Fields fields;
};
struct AchievementsStateValidator__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_StateValidator_ * StateValidators;
  struct List_1_ConditionValidator_ * ConditionValidators;
  struct List_1_ConditionValidator_ * OnGameLoadConditionValidators;
  struct IUberState__Array * m_affectingStates;
};
struct AchievementsStateValidator {
  struct AchievementsStateValidator__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsStateValidator__Fields fields;
};
struct __declspec(align(8)) List_1_StateValidator___Fields {
  struct StateValidator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_StateValidator_ {
  struct List_1_StateValidator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_StateValidator___Fields fields;
};
struct StateValidator {
  struct MoonReference_1_IUberState_ * State;
  float DesiredValue;
  struct AchievementAsset * Achievement;
};
struct StateValidator__Boxed {
  struct StateValidator__Class *klass;
  struct MonitorData *monitor;
  struct StateValidator fields;
};
struct StateValidator__Array {
  struct StateValidator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StateValidator vector[32];
};
struct IEnumerator_1_StateValidator_ {
  struct IEnumerator_1_StateValidator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ConditionValidator___Fields {
  struct ConditionValidator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ConditionValidator_ {
  struct List_1_ConditionValidator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ConditionValidator___Fields fields;
};
struct ConditionValidator {
  struct MoonReference_1_ConditionUberState_ * State;
  struct AchievementAsset * Achievement;
};
struct ConditionValidator__Boxed {
  struct ConditionValidator__Class *klass;
  struct MonitorData *monitor;
  struct ConditionValidator fields;
};
struct ConditionValidator__Array {
  struct ConditionValidator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConditionValidator vector[32];
};
struct __declspec(align(8)) MoonReference_1_ConditionUberState___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ConditionUberState_ * m_cachedProxyType;
  struct ConditionUberState * m_volatileValue;
};
struct MoonReference_1_ConditionUberState_ {
  struct MoonReference_1_ConditionUberState___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ConditionUberState___Fields fields;
};
struct IMoonType_1_ConditionUberState_ {
  struct IMoonType_1_ConditionUberState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ConditionValidator_ {
  struct IEnumerator_1_ConditionValidator___Class *klass;
  struct MonitorData *monitor;
};
struct StateValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StateValidator__StaticFields {
};
struct StateValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateValidator__VTable vtable;
};
struct IEnumerator_1_StateValidator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_StateValidator___StaticFields {
};
struct IEnumerator_1_StateValidator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_StateValidator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_StateValidator___VTable vtable;
};
struct List_1_StateValidator___VTable {
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
struct List_1_StateValidator___StaticFields {
  struct StateValidator__Array * _emptyArray;
};
struct List_1_StateValidator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_StateValidator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_StateValidator___VTable vtable;
};
struct IMoonType_1_ConditionUberState___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ConditionUberState___StaticFields {
};
struct IMoonType_1_ConditionUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ConditionUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ConditionUberState___VTable vtable;
};
struct MoonReference_1_ConditionUberState___VTable {
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
struct MoonReference_1_ConditionUberState___StaticFields {
};
struct MoonReference_1_ConditionUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ConditionUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ConditionUberState___VTable vtable;
};
struct ConditionValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConditionValidator__StaticFields {
};
struct ConditionValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConditionValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConditionValidator__VTable vtable;
};
struct IEnumerator_1_ConditionValidator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ConditionValidator___StaticFields {
};
struct IEnumerator_1_ConditionValidator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ConditionValidator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ConditionValidator___VTable vtable;
};
struct List_1_ConditionValidator___VTable {
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
struct List_1_ConditionValidator___StaticFields {
  struct ConditionValidator__Array * _emptyArray;
};
struct List_1_ConditionValidator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ConditionValidator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ConditionValidator___VTable vtable;
};
struct AchievementsStateValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct AchievementsStateValidator__StaticFields {
};
struct AchievementsStateValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsStateValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsStateValidator__VTable vtable;
};
struct AchievementsLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct AchievementsLogic__StaticFields {
  struct AchievementsLogic * Instance;
  bool Act3Ended;
};
struct AchievementsLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsLogic__VTable vtable;
};

struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_ {
  struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___Fields fields;
};
struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___VTable {
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
struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___StaticFields {
};
struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___VTable vtable;
};

struct __declspec(align(8)) AchievementsTestMessageProvider_GetMessages_d_2__Fields {
  int32_t __1__state;
  struct MessageDescriptor __2__current;
  int32_t __l__initialThreadId;
  struct AchievementsTestMessageProvider * __4__this;
};
struct AchievementsTestMessageProvider_GetMessages_d_2 {
  struct AchievementsTestMessageProvider_GetMessages_d_2__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsTestMessageProvider_GetMessages_d_2__Fields fields;
};
struct IEnumerator_1_MessageDescriptor_ {
  struct IEnumerator_1_MessageDescriptor___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_MessageDescriptor___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MessageDescriptor___StaticFields {
};
struct IEnumerator_1_MessageDescriptor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MessageDescriptor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MessageDescriptor___VTable vtable;
};
struct AchievementsTestMessageProvider_GetMessages_d_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_MessageDescriptor__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_MessageDescriptor__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct AchievementsTestMessageProvider_GetMessages_d_2__StaticFields {
};
struct AchievementsTestMessageProvider_GetMessages_d_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsTestMessageProvider_GetMessages_d_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsTestMessageProvider_GetMessages_d_2__VTable vtable;
};

struct EndGameTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct EventTriggerAnimator * EndGameEventTrigger;
};
struct EndGameTrigger {
  struct EndGameTrigger__Class *klass;
  struct MonitorData *monitor;
  struct EndGameTrigger__Fields fields;
};
struct EndGameTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EndGameTrigger__StaticFields {
};
struct EndGameTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EndGameTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EndGameTrigger__VTable vtable;
};

struct __declspec(align(8)) Challenge__Fields {
  struct String * _Name_k__BackingField;
  struct String * _Description_k__BackingField;
  bool _Started_k__BackingField;
};
struct Challenge {
  struct Challenge__Class *klass;
  struct MonitorData *monitor;
  struct Challenge__Fields fields;
};
struct Challenge__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Challenge__StaticFields {
};
struct Challenge__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Challenge__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Challenge__VTable vtable;
};

struct AchievementToDisplay {
  struct String * AchievementText;
  struct Texture * AchievementIcon;
};
struct AchievementToDisplay__Boxed {
  struct AchievementToDisplay__Class *klass;
  struct MonitorData *monitor;
  struct AchievementToDisplay fields;
};
struct AchievementToDisplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementToDisplay__StaticFields {
};
struct AchievementToDisplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementToDisplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementToDisplay__VTable vtable;
};

struct __declspec(align(8)) ReadOnlyCollection_1_Achievement___Fields {
  struct IList_1_Achievement_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_Achievement_ {
  struct ReadOnlyCollection_1_Achievement___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_Achievement___Fields fields;
};
struct IList_1_Achievement_ {
  struct IList_1_Achievement___Class *klass;
  struct MonitorData *monitor;
};
enum Achievement__Enum : int32_t {
  Achievement__Enum_UNKNOWN_ACHIEVEMENT = -1,
  Achievement__Enum_FoundOri = 4,
  Achievement__Enum_MapReader = 5,
  Achievement__Enum_LeverOperator = 6,
  Achievement__Enum_DoorsAreOpening = 7,
  Achievement__Enum_SpentFirstSkillPoint = 8,
  Achievement__Enum_LevelUp = 9,
};
struct Achievement__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Achievement__Enum value;
};
struct Achievement__Enum__Array {
  struct Achievement__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum Achievement__Enum vector[32];
};
struct IEnumerator_1_Achievement_ {
  struct IEnumerator_1_Achievement___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_Achievement___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_Achievement___StaticFields {
};
struct IList_1_Achievement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_Achievement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_Achievement___VTable vtable;
};
struct IEnumerator_1_Achievement___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Achievement___StaticFields {
};
struct IEnumerator_1_Achievement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Achievement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Achievement___VTable vtable;
};
struct ReadOnlyCollection_1_Achievement___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_T__Insert;
  VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Count_2;
};
struct ReadOnlyCollection_1_Achievement___StaticFields {
};
struct ReadOnlyCollection_1_Achievement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyCollection_1_Achievement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyCollection_1_Achievement___VTable vtable;
};

struct __declspec(align(8)) ReadOnlyCollection_1_Challenge___Fields {
  struct IList_1_Challenge_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_Challenge_ {
  struct ReadOnlyCollection_1_Challenge___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_Challenge___Fields fields;
};
struct IList_1_Challenge_ {
  struct IList_1_Challenge___Class *klass;
  struct MonitorData *monitor;
};
struct Challenge__Array {
  struct Challenge__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Challenge * vector[32];
};
struct IEnumerator_1_Challenge_ {
  struct IEnumerator_1_Challenge___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_Challenge___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_Challenge___StaticFields {
};
struct IList_1_Challenge___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_Challenge___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_Challenge___VTable vtable;
};
struct IEnumerator_1_Challenge___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Challenge___StaticFields {
};
struct IEnumerator_1_Challenge___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Challenge___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Challenge___VTable vtable;
};
struct ReadOnlyCollection_1_Challenge___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_T__Insert;
  VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Count_2;
};
struct ReadOnlyCollection_1_Challenge___StaticFields {
};
struct ReadOnlyCollection_1_Challenge___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyCollection_1_Challenge___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyCollection_1_Challenge___VTable vtable;
};

struct AchievementsController__Fields {
  struct MonoBehaviour__Fields _;
  struct AchievementsTestMessageProvider * AchievementGainedTestMessageProvider;
};
struct AchievementsController {
  struct AchievementsController__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsController__Fields fields;
};
struct __declspec(align(8)) Queue_1_AchievementToDisplay___Fields {
  struct AchievementToDisplay__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_AchievementToDisplay_ {
  struct Queue_1_AchievementToDisplay___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_AchievementToDisplay___Fields fields;
};
struct AchievementToDisplay__Array {
  struct AchievementToDisplay__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AchievementToDisplay vector[32];
};
struct IEnumerator_1_AchievementToDisplay_ {
  struct IEnumerator_1_AchievementToDisplay___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AchievementToDisplay___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AchievementToDisplay___StaticFields {
};
struct IEnumerator_1_AchievementToDisplay___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AchievementToDisplay___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AchievementToDisplay___VTable vtable;
};
struct Queue_1_AchievementToDisplay___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Queue_1_AchievementToDisplay___StaticFields {
};
struct Queue_1_AchievementToDisplay___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_AchievementToDisplay___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_AchievementToDisplay___VTable vtable;
};
struct AchievementsController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementsController__StaticFields {
  bool DebugAchievements;
  float m_showTimer;
  float m_actualMessageTimer;
  struct Queue_1_AchievementToDisplay_ * m_achievementQueue;
};
struct AchievementsController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsController__VTable vtable;
};

struct __declspec(align(8)) AchievementsController_c_DisplayClass19_0__Fields {
  struct AchievementAsset * achievement;
};
struct AchievementsController_c_DisplayClass19_0 {
  struct AchievementsController_c_DisplayClass19_0__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsController_c_DisplayClass19_0__Fields fields;
};
struct AchievementsController_c_DisplayClass19_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}