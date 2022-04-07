namespace app {
struct CutsceneItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CutsceneItem__StaticFields {
};
struct CutsceneItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneItem__VTable vtable;
};

struct CutsceneScreenController__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * LockedMessageProvider;
  struct ActionMethod * OnLockedItemPressed;
};
struct CutsceneScreenController {
  struct CutsceneScreenController__Class *klass;
  struct MonitorData *monitor;
  struct CutsceneScreenController__Fields fields;
};
struct CutsceneScreenController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CutsceneScreenController__StaticFields {
  struct CutsceneScreenController * Instance;
};
struct CutsceneScreenController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneScreenController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneScreenController__VTable vtable;
};

struct DamageReceiverCondition__Fields {
  struct Condition_1__Fields _;
  struct MoonReference_1_IDamageNotifier_ * DamageNotifier;
  bool m_damageReceived;
  struct IDamageNotifier * m_resolvedDamageNotifier;
};
struct DamageReceiverCondition {
  struct DamageReceiverCondition__Class *klass;
  struct MonitorData *monitor;
  struct DamageReceiverCondition__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IDamageNotifier___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IDamageNotifier_ * m_cachedProxyType;
  struct IDamageNotifier * m_volatileValue;
};
struct MoonReference_1_IDamageNotifier_ {
  struct MoonReference_1_IDamageNotifier___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IDamageNotifier___Fields fields;
};
struct IMoonType_1_IDamageNotifier_ {
  struct IMoonType_1_IDamageNotifier___Class *klass;
  struct MonitorData *monitor;
};
struct IDamageNotifier {
  struct IDamageNotifier__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_IDamageNotifier___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IDamageNotifier___StaticFields {
};
struct IMoonType_1_IDamageNotifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IDamageNotifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IDamageNotifier___VTable vtable;
};
struct IDamageNotifier__VTable {
  VirtualInvokeData get_DamageReceived;
  VirtualInvokeData set_DamageReceived;
};
struct IDamageNotifier__StaticFields {
};
struct IDamageNotifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDamageNotifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDamageNotifier__VTable vtable;
};
struct MoonReference_1_IDamageNotifier___VTable {
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
struct MoonReference_1_IDamageNotifier___StaticFields {
};
struct MoonReference_1_IDamageNotifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IDamageNotifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IDamageNotifier___VTable vtable;
};
struct DamageReceiverCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct DamageReceiverCondition__StaticFields {
};
struct DamageReceiverCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageReceiverCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageReceiverCondition__VTable vtable;
};

enum LogicUtility_ComparisonType__Enum : int32_t {
  LogicUtility_ComparisonType__Enum_LessThan = 0,
  LogicUtility_ComparisonType__Enum_LessThanOrEqual = 1,
  LogicUtility_ComparisonType__Enum_GreaterThan = 2,
  LogicUtility_ComparisonType__Enum_GreaterThanOrEqual = 3,
  LogicUtility_ComparisonType__Enum_Equal = 4,
  LogicUtility_ComparisonType__Enum_NotEqual = 5,
};
struct LogicUtility_ComparisonType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LogicUtility_ComparisonType__Enum value;
};
struct DamageTypeCondition__Fields {
  struct Condition_1__Fields _;
  bool ValidateDamageType;
  struct DamageType__Enum__Array * Allowed;
  bool ValidateDamageDirection;
  struct Vector2 DamageDirection;
  float DamageDirectionWithinDegrees;
  bool ValidateDamageAmount;
  enum LogicUtility_ComparisonType__Enum DamageAmountComparison;
  float DamageAmount;
};
struct DamageTypeCondition {
  struct DamageTypeCondition__Class *klass;
  struct MonitorData *monitor;
  struct DamageTypeCondition__Fields fields;
};
struct DamageTypeCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct DamageTypeCondition__StaticFields {
};
struct DamageTypeCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageTypeCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageTypeCondition__VTable vtable;
};

struct DynamicGraphicsIsToggledCondition__Fields {
  struct Condition_1__Fields _;
};
struct DynamicGraphicsIsToggledCondition {
  struct DynamicGraphicsIsToggledCondition__Class *klass;
  struct MonitorData *monitor;
  struct DynamicGraphicsIsToggledCondition__Fields fields;
};
struct DynamicGraphicsIsToggledCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct DynamicGraphicsIsToggledCondition__StaticFields {
};
struct DynamicGraphicsIsToggledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicGraphicsIsToggledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicGraphicsIsToggledCondition__VTable vtable;
};

struct EnemyKilledCondition__Fields {
  struct Condition_1__Fields _;
  struct EntityPlaceholder * EnemyPlaceholder;
};
struct EnemyKilledCondition {
  struct EnemyKilledCondition__Class *klass;
  struct MonitorData *monitor;
  struct EnemyKilledCondition__Fields fields;
};
struct EnemyKilledCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct EnemyKilledCondition__StaticFields {
};
struct EnemyKilledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyKilledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyKilledCondition__VTable vtable;
};

struct EventTriggerAnimatorCondition__Fields {
  struct Condition_1__Fields _;
  struct EventTriggerAnimator * EventTrigger;
  bool Playing;
};
struct EventTriggerAnimatorCondition {
  struct EventTriggerAnimatorCondition__Class *klass;
  struct MonitorData *monitor;
  struct EventTriggerAnimatorCondition__Fields fields;
};
struct EventTriggerAnimatorCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct EventTriggerAnimatorCondition__StaticFields {
};
struct EventTriggerAnimatorCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventTriggerAnimatorCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventTriggerAnimatorCondition__VTable vtable;
};

struct FlammablesStateCondition__Fields {
  struct Condition_1__Fields _;
  struct Flammable__Array * Flammables;
  enum Flammable_FlameState__Enum RequiredFlameState;
};
struct FlammablesStateCondition {
  struct FlammablesStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct FlammablesStateCondition__Fields fields;
};
struct Flammable__Array {
  struct Flammable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Flammable * vector[32];
};
struct FlammablesStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct FlammablesStateCondition__StaticFields {
};
struct FlammablesStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlammablesStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlammablesStateCondition__VTable vtable;
};

struct __declspec(align(8)) ConditionAndValue_1_System_Single___Fields {
  struct Condition_1 * Condition;
  float Value;
};
struct ConditionAndValue_1_System_Single_ {
  struct ConditionAndValue_1_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct ConditionAndValue_1_System_Single___Fields fields;
};
struct FloatConditionAndValue__Fields {
  struct ConditionAndValue_1_System_Single___Fields _;
};
struct FloatConditionAndValue {
  struct FloatConditionAndValue__Class *klass;
  struct MonitorData *monitor;
  struct FloatConditionAndValue__Fields fields;
};
struct ConditionAndValue_1_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConditionAndValue_1_System_Single___StaticFields {
};
struct ConditionAndValue_1_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConditionAndValue_1_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConditionAndValue_1_System_Single___VTable vtable;
};
struct FloatConditionAndValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatConditionAndValue__StaticFields {
};
struct FloatConditionAndValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatConditionAndValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatConditionAndValue__VTable vtable;
};

struct ValueWithCondition_1_System_Single___Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  float DefaultValue;
};
struct ValueWithCondition_1_System_Single_ {
  struct ValueWithCondition_1_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct ValueWithCondition_1_System_Single___Fields fields;
};
struct FloatValueWithCondition__Fields {
  struct ValueWithCondition_1_System_Single___Fields _;
  struct FloatConditionAndValue__Array * ConditionsAndValues;
};
struct FloatValueWithCondition {
  struct FloatValueWithCondition__Class *klass;
  struct MonitorData *monitor;
  struct FloatValueWithCondition__Fields fields;
};
struct ConditionAndValue_1_System_Single___Array {
  struct ConditionAndValue_1_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConditionAndValue_1_System_Single_ * vector[32];
};
struct FloatConditionAndValue__Array {
  struct FloatConditionAndValue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FloatConditionAndValue * vector[32];
};
struct ValueWithCondition_1_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData __unknown;
};
struct ValueWithCondition_1_System_Single___StaticFields {
};
struct ValueWithCondition_1_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValueWithCondition_1_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValueWithCondition_1_System_Single___VTable vtable;
};
struct FloatValueWithCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_m_conditionsAndValues;
};
struct FloatValueWithCondition__StaticFields {
};
struct FloatValueWithCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatValueWithCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatValueWithCondition__VTable vtable;
};

struct FPSLimitNotEnabledCondition__Fields {
  struct Condition_1__Fields _;
};
struct FPSLimitNotEnabledCondition {
  struct FPSLimitNotEnabledCondition__Class *klass;
  struct MonitorData *monitor;
  struct FPSLimitNotEnabledCondition__Fields fields;
};
struct FPSLimitNotEnabledCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct FPSLimitNotEnabledCondition__StaticFields {
};
struct FPSLimitNotEnabledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSLimitNotEnabledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSLimitNotEnabledCondition__VTable vtable;
};

struct HasAbilityCondition__Fields {
  struct Condition_1__Fields _;
  enum AbilityType__Enum AbilityType;
};
struct HasAbilityCondition {
  struct HasAbilityCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasAbilityCondition__Fields fields;
};
struct HasAbilityCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HasAbilityCondition__StaticFields {
};
struct HasAbilityCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasAbilityCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasAbilityCondition__VTable vtable;
};

struct HasAvailableShardUpgradeCondition__Fields {
  struct Condition_1__Fields _;
};
struct HasAvailableShardUpgradeCondition {
  struct HasAvailableShardUpgradeCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasAvailableShardUpgradeCondition__Fields fields;
};
struct HasAvailableShardUpgradeCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HasAvailableShardUpgradeCondition__StaticFields {
};
struct HasAvailableShardUpgradeCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasAvailableShardUpgradeCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasAvailableShardUpgradeCondition__VTable vtable;
};

struct HasComponentCondition__Fields {
  struct Condition_1__Fields _;
  struct String * RequiredComponent;
  struct Type * m_requiredComponentType;
};
struct HasComponentCondition {
  struct HasComponentCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasComponentCondition__Fields fields;
};
struct HasComponentCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HasComponentCondition__StaticFields {
};
struct HasComponentCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasComponentCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasComponentCondition__VTable vtable;
};

struct HasShardCondition__Fields {
  struct Condition_1__Fields _;
  enum SpiritShardType__Enum SpiritShardType;
  int32_t MinimumLevel;
  bool MustMeetMinimumLevel;
};
struct HasShardCondition {
  struct HasShardCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasShardCondition__Fields fields;
};
struct HasShardCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HasShardCondition__StaticFields {
};
struct HasShardCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasShardCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasShardCondition__VTable vtable;
};

struct HasUnlockedAnyCutscenesCondition__Fields {
  struct Condition_1__Fields _;
};
struct HasUnlockedAnyCutscenesCondition {
  struct HasUnlockedAnyCutscenesCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasUnlockedAnyCutscenesCondition__Fields fields;
};
struct HasUnlockedAnyCutscenesCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HasUnlockedAnyCutscenesCondition__StaticFields {
};
struct HasUnlockedAnyCutscenesCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasUnlockedAnyCutscenesCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasUnlockedAnyCutscenesCondition__VTable vtable;
};

struct HDREnabledCondition__Fields {
  struct Condition_1__Fields _;
};
struct HDREnabledCondition {
  struct HDREnabledCondition__Class *klass;
  struct MonitorData *monitor;
  struct HDREnabledCondition__Fields fields;
};
struct HDREnabledCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HDREnabledCondition__StaticFields {
};
struct HDREnabledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HDREnabledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HDREnabledCondition__VTable vtable;
};

struct HDRIsToggledCondition__Fields {
  struct Condition_1__Fields _;
};
struct HDRIsToggledCondition {
  struct HDRIsToggledCondition__Class *klass;
  struct MonitorData *monitor;
  struct HDRIsToggledCondition__Fields fields;
};
struct HDRIsToggledCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HDRIsToggledCondition__StaticFields {
};
struct HDRIsToggledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HDRIsToggledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HDRIsToggledCondition__VTable vtable;
};

struct HoldingNightberryCondition__Fields {
  struct Condition_1__Fields _;
  bool IsHolding;
};
struct HoldingNightberryCondition {
  struct HoldingNightberryCondition__Class *klass;
  struct MonitorData *monitor;
  struct HoldingNightberryCondition__Fields fields;
};
struct HoldingNightberryCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HoldingNightberryCondition__StaticFields {
};
struct HoldingNightberryCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HoldingNightberryCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HoldingNightberryCondition__VTable vtable;
};

struct IsAct3EndedCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsAct3EndedCondition {
  struct IsAct3EndedCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsAct3EndedCondition__Fields fields;
};
struct IsAct3EndedCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsAct3EndedCondition__StaticFields {
};
struct IsAct3EndedCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsAct3EndedCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsAct3EndedCondition__VTable vtable;
};

struct IsChinaRegionCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsChinaRegionCondition {
  struct IsChinaRegionCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsChinaRegionCondition__Fields fields;
};
struct IsChinaRegionCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsChinaRegionCondition__StaticFields {
};
struct IsChinaRegionCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsChinaRegionCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsChinaRegionCondition__VTable vtable;
};

struct IsFullyInstalledCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsFullyInstalledCondition {
  struct IsFullyInstalledCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsFullyInstalledCondition__Fields fields;
};
struct IsFullyInstalledCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsFullyInstalledCondition__StaticFields {
};
struct IsFullyInstalledCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsFullyInstalledCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsFullyInstalledCondition__VTable vtable;
};

struct IsHDRToggleActive__Fields {
  struct Condition_1__Fields _;
};
struct IsHDRToggleActive {
  struct IsHDRToggleActive__Class *klass;
  struct MonitorData *monitor;
  struct IsHDRToggleActive__Fields fields;
};
struct IsHDRToggleActive__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsHDRToggleActive__StaticFields {
};
struct IsHDRToggleActive__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsHDRToggleActive__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsHDRToggleActive__VTable vtable;
};

struct IsInNPCInteractionCondition__Fields {
  struct Condition_1__Fields _;
  bool Inverse;
};
struct IsInNPCInteractionCondition {
  struct IsInNPCInteractionCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsInNPCInteractionCondition__Fields fields;
};
struct IsInNPCInteractionCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsInNPCInteractionCondition__StaticFields {
};
struct IsInNPCInteractionCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsInNPCInteractionCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsInNPCInteractionCondition__VTable vtable;
};

struct IsInZoneCondition__Fields {
  struct Condition_1__Fields _;
  struct Transform * Target;
  struct Transform__Array * Zones;
};
struct IsInZoneCondition {
  struct IsInZoneCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsInZoneCondition__Fields fields;
};
struct IsInZoneCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsInZoneCondition__StaticFields {
};
struct IsInZoneCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsInZoneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsInZoneCondition__VTable vtable;
};

struct IsLoadingInProgressCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsLoadingInProgressCondition {
  struct IsLoadingInProgressCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsLoadingInProgressCondition__Fields fields;
};
struct IsLoadingInProgressCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsLoadingInProgressCondition__StaticFields {
};
struct IsLoadingInProgressCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsLoadingInProgressCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsLoadingInProgressCondition__VTable vtable;
};

struct IsOnlineCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsOnlineCondition {
  struct IsOnlineCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsOnlineCondition__Fields fields;
};
struct IsOnlineCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsOnlineCondition__StaticFields {
};
struct IsOnlineCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsOnlineCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsOnlineCondition__VTable vtable;
};

struct IsPressTourBuildCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsPressTourBuildCondition {
  struct IsPressTourBuildCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsPressTourBuildCondition__Fields fields;
};
struct IsPressTourBuildCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct IsPressTourBuildCondition__StaticFields {
};
struct IsPressTourBuildCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsPressTourBuildCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsPressTourBuildCondition__VTable vtable;
};}