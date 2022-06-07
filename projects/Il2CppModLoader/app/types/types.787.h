namespace app {
struct MoonTelemetrySettingsEvent__StaticFields {
};

struct MoonTelemetrySettingsEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetrySettingsEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetrySettingsEvent__VTable vtable;
};

struct NetworkTest__Fields {
    struct MonoBehaviour__Fields _;
    struct String *SiteId;
    struct String *Player;
    struct String *ReplayDataString;
};

struct NetworkTest {
    struct NetworkTest__Class *klass;
    MonitorData *monitor;
    struct NetworkTest__Fields fields;
};

struct NetworkTest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NetworkTest__StaticFields {
    struct String *HOST;
    struct String *headerType;
    struct String *headerTypeField;
    struct String *XSTSToken;
    struct String *m_fullUrl;
};

struct NetworkTest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkTest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkTest__VTable vtable;
};

struct NetworkTest_c {
    struct NetworkTest_c__Class *klass;
    MonitorData *monitor;
};

struct NetworkTest_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NetworkTest_c__StaticFields {
    struct NetworkTest_c *__9;
    struct Action_1_StatusCallback_ *__9__6_0;
    struct Action_1_StatusCallback_ *__9__7_0;
};

struct NetworkTest_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkTest_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkTest_c__VTable vtable;
};

struct __declspec(align(8)) NetworkTest_sendTelemetryCoroutine_d_15__Fields {
    int32_t __1__state;
    struct Object *__2__current;
};

struct NetworkTest_sendTelemetryCoroutine_d_15 {
    struct NetworkTest_sendTelemetryCoroutine_d_15__Class *klass;
    MonitorData *monitor;
    struct NetworkTest_sendTelemetryCoroutine_d_15__Fields fields;
};

struct NetworkTest_sendTelemetryCoroutine_d_15__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct NetworkTest_sendTelemetryCoroutine_d_15__StaticFields {
};

struct NetworkTest_sendTelemetryCoroutine_d_15__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkTest_sendTelemetryCoroutine_d_15__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkTest_sendTelemetryCoroutine_d_15__VTable vtable;
};

struct STCDemo__Fields {
    struct SaveSerialize__Fields _;
    struct ActionSequence *Action;
    bool m_executed;
};

struct STCDemo {
    struct STCDemo__Class *klass;
    MonitorData *monitor;
    struct STCDemo__Fields fields;
};

struct STCDemo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct STCDemo__StaticFields {
};

struct STCDemo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct STCDemo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct STCDemo__VTable vtable;
};

struct UberStateBoolCondition__Fields {
    struct Condition_1__Fields _;
    struct SerializedBooleanUberState *BooleanDescriptor;
    bool Value;
    bool m_validateResult;
    bool m_evaluatedAtLeastOnce;
    struct IUberState__Array *m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_ *_AllTargets_k__BackingField;
};

struct UberStateBoolCondition {
    struct UberStateBoolCondition__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateBoolCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateBoolCondition__VTable vtable;
};

enum class UberStateValueCondition_ComparisonMode__Enum : int32_t {
    GreaterThanOrEqual = 0x00000000,
    LessThan = 0x00000001,
    Equal = 0x00000002,
};

struct UberStateValueCondition_ComparisonMode__Enum__Boxed {
    struct UberStateValueCondition_ComparisonMode__Enum__Class *klass;
    MonitorData *monitor;
    UberStateValueCondition_ComparisonMode__Enum value;
    
};

struct UberStateValueCondition__Fields {
    struct Condition_1__Fields _;
    struct MoonReference_1_IGenericUberState_ *Descriptor;
    float Value;
    UberStateValueCondition_ComparisonMode__Enum Compare;
    
    bool m_evaluatedAtLeastOnce;
    bool m_validateResult;
    struct IUberState__Array *m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_ *_AllTargets_k__BackingField;
};

struct UberStateValueCondition {
    struct UberStateValueCondition__Class *klass;
    MonitorData *monitor;
    struct UberStateValueCondition__Fields fields;
};

struct UberStateValueCondition_ComparisonMode__Enum__VTable {
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

struct UberStateValueCondition_ComparisonMode__Enum__StaticFields {
};

struct UberStateValueCondition_ComparisonMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateValueCondition_ComparisonMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateValueCondition_ComparisonMode__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateValueCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateValueCondition__VTable vtable;
};

struct WwiseBootstrapInitializer__Fields {
    struct MonoBehaviour__Fields _;
};

struct WwiseBootstrapInitializer {
    struct WwiseBootstrapInitializer__Class *klass;
    MonitorData *monitor;
    struct WwiseBootstrapInitializer__Fields fields;
};

struct WwiseBootstrapInitializer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WwiseBootstrapInitializer__StaticFields {
    struct GameObject *WWiseBootstrap;
};

struct WwiseBootstrapInitializer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WwiseBootstrapInitializer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WwiseBootstrapInitializer__VTable vtable;
};

struct AchievementsLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_AchievementAsset_ *m_cache;
    struct AchievementsStateValidator *m_stateValidator;
    struct AchievementAsset *TestAchievement;
    struct AchievementAsset *A01FendHowlAchievementAsset;
    struct AchievementAsset *A03DefeatHornbugAchievementAsset;
    struct AchievementAsset *A04DefeatLaserShooterAchievementAsset;
    struct AchievementAsset *A07ReachWellspringGladesAchievementAsset;
    struct AchievementAsset *A08CompleteWatermillEscapeAchievementAsset;
    struct AchievementAsset *A09CompleteAvalancheEscapeAchievementAsset;
    struct AchievementAsset *A10DefeatMoraAchievementAsset;
    struct AchievementAsset *A11DefeatKwolokAchievementAsset;
    struct AchievementAsset *A12CompleteDesertEscapeAchievementAsset;
    struct AchievementAsset *A13DefeatShriekAchievementAsset;
    struct AchievementAsset *A14CompleteTheGameAchievementAsset;
    struct AchievementAsset *A15CompleteNGPlusAchievementAsset;
    struct AchievementAsset *B01UnlcokAllSkillsAchievementAsset;
    struct AchievementAsset *B02UpgradeAllSkillsAchievementAsset;
    struct AchievementAsset *B03UpgadeShardSlotsAchievementAsset;
    struct AchievementAsset *B04UnlockAllShardsAchievementAsset;
    struct AchievementAsset *B05UpgradeAllShardsAchievementAsset;
    struct AchievementAsset *B06MaxOutHealthAchievementAsset;
    struct AchievementAsset *B07MaxOutEnergyAchievementAsset;
    struct AchievementAsset *B08BuyAllMapsAchievementAsset;
    struct AchievementAsset *B09CompleteAllShrinesAchievementAsset;
    struct AchievementAsset *B10FoundAllPickupsAchievementAsset;
    struct AchievementAsset *B11CompleteTradeSequenceQuestAchievementAsset;
    struct AchievementAsset *B12CompleteAllSideQuestsAchievementAsset;
    struct AchievementAsset *B13CompleteAllWellspringProjectsAchievementAsset;
    struct AchievementAsset *B14BeatEveryGhostInEveryRaceAchievementAsset;
    struct AchievementAsset *C01DefeatBossWithoutTakingDamageAchievementAsset;
    struct AchievementAsset *C02DefeatBossUnderXMinutesAchievementAsset;
    struct AchievementAsset *C03Juggle3OrMoreProjectilesFor5SecAchievementAsset;
    struct AchievementAsset *C05DefeatXEnemiesWithoutTouchingGroundAchievementAsset;
    struct AchievementAsset *C07NeverTouchedCorruptedWaterAchievementAsset;
    struct AchievementAsset *C10PiercedXEnemiesWithSpearAchievementAsset;
    struct AchievementAsset *C11DefeatXEnemiesUsingHazardsAchievementAsset;
    struct AchievementAsset *C13BeatGameWithoutEquippingShardAchievementAsset;
    struct AchievementAsset *C14GeatGameWithoutSpendingSpiritLightAchievementAsset;
    struct AchievementAsset *C15CompleteGameUnderXHoursAchievementAsset;
    struct AchievementAsset *C16CompleteGameWithoutDyingAchievementAsset;
    SuspendableMask__Enum m_suspendableMask;
    
    bool _IsSuspended_k__BackingField;
    float m_commitPickupCollectionProgressCooldown;
    bool m_grantedJuggleProjectileAchievement;
    bool m_shouldGrantAchievements;
    bool m_delegatesAssigned;
    struct SerializedBooleanUberState *PoisonousWaterTouched;
    struct SerializedBooleanUberState *ShardEverEquipped;
    struct SerializedBooleanUberState *SpiritLightEverSpent;
    struct SerializedIntUberState *SpiritLightEverGainedCounter;
    struct SerializedIntUberState *CollectablesCounterState;
    struct SerializedIntUberState *EnemiesKilledByHazardsState;
    struct SerializedBooleanUberState *GotHitBySpider;
    struct SerializedIntUberState *HealthContainersCounterState;
    struct SerializedIntUberState *EnergyContainersCounterState;
    struct ConditionUberState *BoughtAllMapsState;
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
    MonitorData *monitor;
    struct AchievementsLogic__Fields fields;
};

struct AchievementsStateValidator__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_StateValidator_ *StateValidators;
    struct List_1_ConditionValidator_ *ConditionValidators;
    struct List_1_ConditionValidator_ *OnGameLoadConditionValidators;
    struct IUberState__Array *m_affectingStates;
};

struct AchievementsStateValidator {
    struct AchievementsStateValidator__Class *klass;
    MonitorData *monitor;
    struct AchievementsStateValidator__Fields fields;
};

struct __declspec(align(8)) List_1_StateValidator___Fields {
    struct StateValidator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_StateValidator_ {
    struct List_1_StateValidator___Class *klass;
    MonitorData *monitor;
    struct List_1_StateValidator___Fields fields;
};

struct StateValidator {
    struct MoonReference_1_IUberState_ *State;
    float DesiredValue;
    struct AchievementAsset *Achievement;
};

struct StateValidator__Boxed {
    struct StateValidator__Class *klass;
    MonitorData *monitor;
    struct StateValidator fields;
};

struct StateValidator__Array {
    struct StateValidator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StateValidator vector[32];
};

struct IEnumerator_1_StateValidator_ {
    struct IEnumerator_1_StateValidator___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_ConditionValidator___Fields {
    struct ConditionValidator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ConditionValidator_ {
    struct List_1_ConditionValidator___Class *klass;
    MonitorData *monitor;
    struct List_1_ConditionValidator___Fields fields;
};

struct ConditionValidator {
    struct MoonReference_1_ConditionUberState_ *State;
    struct AchievementAsset *Achievement;
};

struct ConditionValidator__Boxed {
    struct ConditionValidator__Class *klass;
    MonitorData *monitor;
    struct ConditionValidator fields;
};

struct __declspec(align(8)) MoonReference_1_ConditionUberState___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_ConditionUberState_ *m_cachedProxyType;
    struct ConditionUberState *m_volatileValue;
};

struct MoonReference_1_ConditionUberState_ {
    struct MoonReference_1_ConditionUberState___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_ConditionUberState___Fields fields;
};

struct IMoonType_1_ConditionUberState_ {
    struct IMoonType_1_ConditionUberState___Class *klass;
    MonitorData *monitor;
};

struct ConditionValidator__Array {
    struct ConditionValidator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConditionValidator vector[32];
};

struct IEnumerator_1_ConditionValidator_ {
    struct IEnumerator_1_ConditionValidator___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateValidator__VTable vtable;
};

struct StateValidator__Array__VTable {
};

struct StateValidator__Array__StaticFields {
};

struct StateValidator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateValidator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateValidator__Array__VTable vtable;
};

struct IEnumerator_1_StateValidator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_StateValidator___StaticFields {
};

struct IEnumerator_1_StateValidator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_StateValidator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct StateValidator__Array *_emptyArray;
};

struct List_1_StateValidator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_StateValidator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_ConditionUberState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_ConditionUberState___VTable vtable;
};

struct ConditionUberState___VTable {
};

struct ConditionUberState___StaticFields {
};

struct ConditionUberState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConditionUberState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConditionUberState___VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_ConditionUberState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConditionValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConditionValidator__VTable vtable;
};

struct ConditionValidator__Array__VTable {
};

struct ConditionValidator__Array__StaticFields {
};

struct ConditionValidator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConditionValidator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConditionValidator__Array__VTable vtable;
};

struct IEnumerator_1_ConditionValidator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ConditionValidator___StaticFields {
};

struct IEnumerator_1_ConditionValidator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ConditionValidator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct ConditionValidator__Array *_emptyArray;
};

struct List_1_ConditionValidator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ConditionValidator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AchievementsStateValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct AchievementsLogic *Instance;
    bool Act3Ended;
};

struct AchievementsLogic__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AchievementsLogic__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AchievementsLogic__VTable vtable;
};

struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_ {
    struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean___VTable vtable;
};

struct __declspec(align(8)) AchievementsTestMessageProvider_GetMessages_d_2__Fields {
    int32_t __1__state;
    struct MessageDescriptor __2__current;
    int32_t __l__initialThreadId;
    struct AchievementsTestMessageProvider *__4__this;
};

struct AchievementsTestMessageProvider_GetMessages_d_2 {
    struct AchievementsTestMessageProvider_GetMessages_d_2__Class *klass;
    MonitorData *monitor;
    struct AchievementsTestMessageProvider_GetMessages_d_2__Fields fields;
};

struct IEnumerator_1_MessageDescriptor_ {
    struct IEnumerator_1_MessageDescriptor___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_MessageDescriptor___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MessageDescriptor___StaticFields {
};

struct IEnumerator_1_MessageDescriptor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MessageDescriptor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AchievementsTestMessageProvider_GetMessages_d_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AchievementsTestMessageProvider_GetMessages_d_2__VTable vtable;
};

struct EndGameTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct EventTriggerAnimator *EndGameEventTrigger;
};

struct EndGameTrigger {
    struct EndGameTrigger__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EndGameTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EndGameTrigger__VTable vtable;
};

struct __declspec(align(8)) Challenge__Fields {
    struct String *_Name_k__BackingField;
    struct String *_Description_k__BackingField;
    bool _Started_k__BackingField;
};

struct Challenge {
    struct Challenge__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Challenge__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Challenge__VTable vtable;
};

struct AchievementToDisplay {
    struct String *AchievementText;
    struct Texture *AchievementIcon;
};

struct AchievementToDisplay__Boxed {
    struct AchievementToDisplay__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AchievementToDisplay__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AchievementToDisplay__VTable vtable;
};

}
