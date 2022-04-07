namespace app {

struct UberShaderPrewarmerProgress__Fields {
  struct FloatValueProvider__Fields _;
};
struct UberShaderPrewarmerProgress {
  struct UberShaderPrewarmerProgress__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderPrewarmerProgress__Fields fields;
};
struct UberShaderPrewarmerProgress__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFloatValue;
};
struct UberShaderPrewarmerProgress__StaticFields {
};
struct UberShaderPrewarmerProgress__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderPrewarmerProgress__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderPrewarmerProgress__VTable vtable;
};

struct UberShaderPrewarmLoad__Fields {
  struct MonoBehaviour__Fields _;
};
struct UberShaderPrewarmLoad {
  struct UberShaderPrewarmLoad__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderPrewarmLoad__Fields fields;
};
struct UberShaderPrewarmLoad__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderPrewarmLoad__StaticFields {
};
struct UberShaderPrewarmLoad__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderPrewarmLoad__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderPrewarmLoad__VTable vtable;
};

struct UberBuildMethod {
  struct UberBuildMethod__Class *klass;
  struct MonitorData *monitor;
};
struct UberBuildMethod__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UberBuildMethod__StaticFields {
};
struct UberBuildMethod__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberBuildMethod__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberBuildMethod__VTable vtable;
};

struct ColorStateModifierDataWisps__Fields {
  struct SetupStateModifierData__Fields _;
};
struct ColorStateModifierDataWisps {
  struct ColorStateModifierDataWisps__Class *klass;
  struct MonitorData *monitor;
  struct ColorStateModifierDataWisps__Fields fields;
};
struct ColorStateModifierDataWisps__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetIdToTypeMap;
  VirtualInvokeData Apply;
  VirtualInvokeData OnTargetChange;
  VirtualInvokeData CaptureCurrentTargetState;
  VirtualInvokeData GetIdToTypeMap_1;
};
struct ColorStateModifierDataWisps__StaticFields {
};
struct ColorStateModifierDataWisps__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorStateModifierDataWisps__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorStateModifierDataWisps__VTable vtable;
};

enum ColorAnimator_ColorType__Enum : int32_t {
  ColorAnimator_ColorType__Enum_Main = 0,
  ColorAnimator_ColorType__Enum_Tint = 1,
  ColorAnimator_ColorType__Enum_Additive = 2,
  ColorAnimator_ColorType__Enum_AdditiveDistort = 3,
  ColorAnimator_ColorType__Enum_AdditiveExtra = 4,
  ColorAnimator_ColorType__Enum_Multiply = 6,
  ColorAnimator_ColorType__Enum_MultiplyDistort = 9,
  ColorAnimator_ColorType__Enum_MultiplyExtra = 7,
  ColorAnimator_ColorType__Enum_Emissivity = 16,
};
struct ColorAnimator_ColorType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ColorAnimator_ColorType__Enum value;
};

struct DamageReceiversKilledStateWriter__Fields {
  struct MonoBehaviour__Fields _;
  struct StateChangeDefinition * OnAllReceiversDestroyed;
  struct List_1_LegacyDamageReciever_ * LegacyDamageReceivers;
  bool m_hasPerformed;
};
struct DamageReceiversKilledStateWriter {
  struct DamageReceiversKilledStateWriter__Class *klass;
  struct MonitorData *monitor;
  struct DamageReceiversKilledStateWriter__Fields fields;
};
struct __declspec(align(8)) List_1_LegacyDamageReciever___Fields {
  struct LegacyDamageReciever__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyDamageReciever_ {
  struct List_1_LegacyDamageReciever___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyDamageReciever___Fields fields;
};
struct IEnumerator_1_LegacyDamageReciever_ {
  struct IEnumerator_1_LegacyDamageReciever___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_LegacyDamageReciever___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LegacyDamageReciever___StaticFields {
};
struct IEnumerator_1_LegacyDamageReciever___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LegacyDamageReciever___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LegacyDamageReciever___VTable vtable;
};
struct List_1_LegacyDamageReciever___VTable {
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
struct List_1_LegacyDamageReciever___StaticFields {
  struct LegacyDamageReciever__Array * _emptyArray;
};
struct List_1_LegacyDamageReciever___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LegacyDamageReciever___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LegacyDamageReciever___VTable vtable;
};
struct DamageReceiversKilledStateWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct DamageReceiversKilledStateWriter__StaticFields {
};
struct DamageReceiversKilledStateWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageReceiversKilledStateWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageReceiversKilledStateWriter__VTable vtable;
};

struct HasAbilityUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct HasAbilityUberStateCondition {
  struct HasAbilityUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasAbilityUberStateCondition__Fields fields;
};
struct HasAbilityUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct HasAbilityUberStateCondition__StaticFields {
};
struct HasAbilityUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasAbilityUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasAbilityUberStateCondition__VTable vtable;
};

struct PlayerAbilityStateMatcher__Fields {
  struct UberStateMatcher__Fields _;
};
struct PlayerAbilityStateMatcher {
  struct PlayerAbilityStateMatcher__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAbilityStateMatcher__Fields fields;
};
struct PlayerAbilityStateMatcher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetIdToTypeMap;
  VirtualInvokeData Resolve;
  VirtualInvokeData GetIdToTypeMap_1;
};
struct PlayerAbilityStateMatcher__StaticFields {
};
struct PlayerAbilityStateMatcher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAbilityStateMatcher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAbilityStateMatcher__VTable vtable;
};

struct __declspec(align(8)) PlayerAbilityStatePair__Fields {
  int32_t State;
  enum AbilityType__Enum Ability;
  bool HasAbility;
};
struct PlayerAbilityStatePair {
  struct PlayerAbilityStatePair__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAbilityStatePair__Fields fields;
};
struct PlayerAbilityStatePair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAbilityStatePair__StaticFields {
};
struct PlayerAbilityStatePair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAbilityStatePair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAbilityStatePair__VTable vtable;
};

struct PlayerHoldingTorchUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct PlayerHoldingTorchUberStateCondition {
  struct PlayerHoldingTorchUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct PlayerHoldingTorchUberStateCondition__Fields fields;
};
struct PlayerHoldingTorchUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct PlayerHoldingTorchUberStateCondition__StaticFields {
};
struct PlayerHoldingTorchUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerHoldingTorchUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerHoldingTorchUberStateCondition__VTable vtable;
};

struct SceneUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct SceneUberStateCondition {
  struct SceneUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct SceneUberStateCondition__Fields fields;
};
struct SceneUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct SceneUberStateCondition__StaticFields {
  struct Nullable_1_UnityEngine_Vector2_ CustomPosition;
};
struct SceneUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneUberStateCondition__VTable vtable;
};

enum SceneUberStateCondition_PositionSource__Enum : int32_t {
  SceneUberStateCondition_PositionSource__Enum_None = 0,
  SceneUberStateCondition_PositionSource__Enum_Player = 1,
  SceneUberStateCondition_PositionSource__Enum_Custom = 2,
};
struct SceneUberStateCondition_PositionSource__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneUberStateCondition_PositionSource__Enum value;
};

struct DynamicBrightnessSource__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector2 Size;
  float Radius;
  float FalloffSize;
  float Brigthness;
  struct WeightController * TimeFadeController;
  float m_currentInfluenceMultiplier;
  float m_currentDistanceToCamera;
  struct Bounds m_bounds;
  bool m_insideFrustum;
};
struct DynamicBrightnessSource {
  struct DynamicBrightnessSource__Class *klass;
  struct MonitorData *monitor;
  struct DynamicBrightnessSource__Fields fields;
};
enum Ease_Easing__Enum : int32_t {
  Ease_Easing__Enum_Linear = 0,
  Ease_Easing__Enum_InQuad = 1,
  Ease_Easing__Enum_OutQuad = 2,
  Ease_Easing__Enum_InOutQuad = 3,
  Ease_Easing__Enum_OutInQuad = 4,
  Ease_Easing__Enum_InCubic = 5,
  Ease_Easing__Enum_OutCubic = 6,
  Ease_Easing__Enum_InOutCubic = 7,
  Ease_Easing__Enum_OutInCubic = 8,
  Ease_Easing__Enum_InQuart = 9,
  Ease_Easing__Enum_OutQuart = 10,
  Ease_Easing__Enum_InOutQuart = 11,
  Ease_Easing__Enum_OutInQuart = 12,
  Ease_Easing__Enum_InQuint = 13,
  Ease_Easing__Enum_OutQuint = 14,
  Ease_Easing__Enum_InOutQuint = 15,
  Ease_Easing__Enum_OutInQuint = 16,
  Ease_Easing__Enum_InSin = 17,
  Ease_Easing__Enum_OutSin = 18,
  Ease_Easing__Enum_InOutSin = 19,
  Ease_Easing__Enum_OutInSin = 20,
  Ease_Easing__Enum_InExp = 21,
  Ease_Easing__Enum_OutExp = 22,
  Ease_Easing__Enum_InOutExp = 23,
  Ease_Easing__Enum_OutInExp = 24,
  Ease_Easing__Enum_InCirc = 25,
  Ease_Easing__Enum_OutCirc = 26,
  Ease_Easing__Enum_InOutCirc = 27,
  Ease_Easing__Enum_OutInCirc = 28,
  Ease_Easing__Enum_InElastic = 29,
  Ease_Easing__Enum_OutElastic = 30,
  Ease_Easing__Enum_InOutElastic = 31,
  Ease_Easing__Enum_OutInElastic = 32,
  Ease_Easing__Enum_InBounce = 33,
  Ease_Easing__Enum_OutBounce = 34,
  Ease_Easing__Enum_InOutBounce = 35,
  Ease_Easing__Enum_OutInBounce = 36,
  Ease_Easing__Enum_InBack = 37,
  Ease_Easing__Enum_OutBack = 38,
  Ease_Easing__Enum_InOutBack = 39,
  Ease_Easing__Enum_OutInBack = 40,
};
struct Ease_Easing__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Ease_Easing__Enum value;
};
struct __declspec(align(8)) WeightController__Fields {
  float SpeedIn;
  float SpeedOut;
  enum Ease_Easing__Enum m_easingFunction;
  float m_timer;
  float m_weight;
};
struct WeightController {
  struct WeightController__Class *klass;
  struct MonitorData *monitor;
  struct WeightController__Fields fields;
};
struct WeightController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WeightController__StaticFields {
};
struct WeightController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeightController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeightController__VTable vtable;
};
struct DynamicBrightnessSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateBrigthnessInfluence;
  VirtualInvokeData get_BrightnessInfluceOrder;
  VirtualInvokeData get_BrightnessInfluceAdditive;
  VirtualInvokeData get_BrightnessInfluceMultiplicative;
  VirtualInvokeData get_ContributeToAdditive;
  VirtualInvokeData get_ContributeToMultiplicative;
  VirtualInvokeData get_BrightnessInfluceWeight;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct DynamicBrightnessSource__StaticFields {
};
struct DynamicBrightnessSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicBrightnessSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicBrightnessSource__VTable vtable;
};

struct IBrigthnessContributionAgent {
  struct IBrigthnessContributionAgent__Class *klass;
  struct MonitorData *monitor;
};
struct IBrigthnessContributionAgent__VTable {
  VirtualInvokeData get_BrightnessInfluceOrder;
  VirtualInvokeData get_BrightnessInfluceAdditive;
  VirtualInvokeData get_BrightnessInfluceMultiplicative;
  VirtualInvokeData get_ContributeToAdditive;
  VirtualInvokeData get_ContributeToMultiplicative;
  VirtualInvokeData get_BrightnessInfluceWeight;
};
struct IBrigthnessContributionAgent__StaticFields {
};
struct IBrigthnessContributionAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IBrigthnessContributionAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IBrigthnessContributionAgent__VTable vtable;
};

struct GlobalBrightnessController {
  struct GlobalBrightnessController__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_IBrigthnessContributionAgent___Fields {
  struct IBrigthnessContributionAgent__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IBrigthnessContributionAgent_ {
  struct List_1_IBrigthnessContributionAgent___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IBrigthnessContributionAgent___Fields fields;
};
struct IBrigthnessContributionAgent__Array {
  struct IBrigthnessContributionAgent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IBrigthnessContributionAgent * vector[32];
};
struct IEnumerator_1_IBrigthnessContributionAgent_ {
  struct IEnumerator_1_IBrigthnessContributionAgent___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_IBrigthnessContributionAgent___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_IBrigthnessContributionAgent___StaticFields {
};
struct IEnumerator_1_IBrigthnessContributionAgent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_IBrigthnessContributionAgent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_IBrigthnessContributionAgent___VTable vtable;
};
struct List_1_IBrigthnessContributionAgent___VTable {
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
struct List_1_IBrigthnessContributionAgent___StaticFields {
  struct IBrigthnessContributionAgent__Array * _emptyArray;
};
struct List_1_IBrigthnessContributionAgent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_IBrigthnessContributionAgent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_IBrigthnessContributionAgent___VTable vtable;
};
struct GlobalBrightnessController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GlobalBrightnessController__StaticFields {
  float LightsGlobalDarkeningMultiplier;
  float LightsGlobalDarkeningOffset;
  float _GlobalBrightness_k__BackingField;
  float _GlobalBrightnessDebugOverride_k__BackingField;
  struct SceneDefaultSettingsHelper * s_helper;
  struct List_1_IBrigthnessContributionAgent_ * s_contributions;
  bool s_listeningToSceneChangedEvents;
};
struct GlobalBrightnessController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GlobalBrightnessController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GlobalBrightnessController__VTable vtable;
};

struct TempBrigthnessContributionAgent {
  enum GlobalBrightnessController_BrigthnessContributionOrder__Enum _BrightnessInfluceOrder_k__BackingField;
  float _BrightnessInfluceAdditive_k__BackingField;
  float _BrightnessInfluceMultiplicative_k__BackingField;
  bool _ContributeToAdditive_k__BackingField;
  bool _ContributeToMultiplicative_k__BackingField;
  struct WeightController * m_fadeController;
};
struct TempBrigthnessContributionAgent__Boxed {
  struct TempBrigthnessContributionAgent__Class *klass;
  struct MonitorData *monitor;
  struct TempBrigthnessContributionAgent fields;
};
struct TempBrigthnessContributionAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateBrigthnessInfluence;
  VirtualInvokeData get_BrightnessInfluceOrder;
  VirtualInvokeData get_BrightnessInfluceAdditive;
  VirtualInvokeData get_BrightnessInfluceMultiplicative;
  VirtualInvokeData get_ContributeToAdditive;
  VirtualInvokeData get_ContributeToMultiplicative;
  VirtualInvokeData get_BrightnessInfluceWeight;
};
struct TempBrigthnessContributionAgent__StaticFields {
};
struct TempBrigthnessContributionAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TempBrigthnessContributionAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TempBrigthnessContributionAgent__VTable vtable;
};

struct UberDofCache__Fields {
  struct ScriptableObject__Fields _;
};
struct UberDofCache {
  struct UberDofCache__Class *klass;
  struct MonitorData *monitor;
  struct UberDofCache__Fields fields;
};
struct UberDofCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberDofCache__StaticFields {
  struct UberDofCache * s_instance;
};
struct UberDofCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberDofCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberDofCache__VTable vtable;
};

struct __declspec(align(8)) UberDofCache_DOFBucket__Fields {
  struct UberDofCacheDictionary * m_textureCache;
  struct Vector2 Blur;
};
struct UberDofCache_DOFBucket {
  struct UberDofCache_DOFBucket__Class *klass;
  struct MonitorData *monitor;
  struct UberDofCache_DOFBucket__Fields fields;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_System_Int32___Fields {
  struct Dictionary_2_System_String_System_Int32_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_System_Int32_ * m_values;
};
struct UberShaderDictionary_2_System_String_System_Int32_ {
  struct UberShaderDictionary_2_System_String_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_System_Int32___Fields fields;
};
struct UberDofCacheDictionary__Fields {
  struct UberShaderDictionary_2_System_String_System_Int32___Fields _;
};
struct UberDofCacheDictionary {
  struct UberDofCacheDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberDofCacheDictionary__Fields fields;
};
struct UberShaderDictionary_2_System_String_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberShaderDictionary_2_System_String_System_Int32___StaticFields {
};
struct UberShaderDictionary_2_System_String_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderDictionary_2_System_String_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderDictionary_2_System_String_System_Int32___VTable vtable;
};
struct UberDofCacheDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberDofCacheDictionary__StaticFields {
};
struct UberDofCacheDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberDofCacheDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberDofCacheDictionary__VTable vtable;
};
struct UberDofCache_DOFBucket__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberDofCache_DOFBucket__StaticFields {
};
struct UberDofCache_DOFBucket__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberDofCache_DOFBucket__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberDofCache_DOFBucket__VTable vtable;
};

struct CageMath__Fields {
  struct MonoBehaviour__Fields _;
};
struct CageMath {
  struct CageMath__Class *klass;
  struct MonitorData *monitor;
  struct CageMath__Fields fields;
};
struct CageMath__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CageMath__StaticFields {
};
struct CageMath__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CageMath__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CageMath__VTable vtable;
};

struct __declspec(align(8)) List_1_List_1_System_Int32___Fields {
  struct List_1_System_Int32___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_List_1_System_Int32_ {
  struct List_1_List_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct List_1_List_1_System_Int32___Fields fields;
};
struct List_1_List_1_System_Int32___VTable {
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
struct List_1_List_1_System_Int32___StaticFields {
  struct List_1_System_Int32___Array * _emptyArray;
};
struct List_1_List_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_List_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_List_1_System_Int32___VTable vtable;
};

struct __declspec(align(8)) HashSet_1_CageStructureTool_Vertex___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_CageStructureTool_Vertex___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_CageStructureTool_Vertex_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_CageStructureTool_Vertex_ {
  struct HashSet_1_CageStructureTool_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_CageStructureTool_Vertex___Fields fields;
};
struct HashSet_1_T_Slot_CageStructureTool_Vertex_ {
  int32_t hashCode;
  int32_t next;
  struct CageStructureTool_Vertex * value;
};
struct HashSet_1_T_Slot_CageStructureTool_Vertex___Boxed {
  struct HashSet_1_T_Slot_CageStructureTool_Vertex___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_CageStructureTool_Vertex_ fields;
};
struct HashSet_1_T_Slot_CageStructureTool_Vertex___Array {
  struct HashSet_1_T_Slot_CageStructureTool_Vertex___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_CageStructureTool_Vertex_ vector[32];
};
struct IEqualityComparer_1_CageStructureTool_Vertex_ {
  struct IEqualityComparer_1_CageStructureTool_Vertex___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_CageStructureTool_Vertex_ {
  struct IEnumerable_1_CageStructureTool_Vertex___Class *klass;
  struct MonitorData *monitor;
};
struct HashSet_1_T_Slot_CageStructureTool_Vertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_CageStructureTool_Vertex___StaticFields {
};
struct HashSet_1_T_Slot_CageStructureTool_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_CageStructureTool_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_CageStructureTool_Vertex___VTable vtable;
};
struct IEqualityComparer_1_CageStructureTool_Vertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_CageStructureTool_Vertex___StaticFields {
};
struct IEqualityComparer_1_CageStructureTool_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_CageStructureTool_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_CageStructureTool_Vertex___VTable vtable;
};
struct IEnumerable_1_CageStructureTool_Vertex___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_CageStructureTool_Vertex___StaticFields {
};
struct IEnumerable_1_CageStructureTool_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_CageStructureTool_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_CageStructureTool_Vertex___VTable vtable;
};
struct HashSet_1_CageStructureTool_Vertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_CageStructureTool_Vertex___StaticFields {
};
struct HashSet_1_CageStructureTool_Vertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_CageStructureTool_Vertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_CageStructureTool_Vertex___VTable vtable;
};

struct __declspec(align(8)) CageStructureTool_c_DisplayClass62_0__Fields {
  int32_t ID;
};
struct CageStructureTool_c_DisplayClass62_0 {
  struct CageStructureTool_c_DisplayClass62_0__Class *klass;
  struct MonitorData *monitor;
  struct CageStructureTool_c_DisplayClass62_0__Fields fields;
};
struct CageStructureTool_c_DisplayClass62_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CageStructureTool_c_DisplayClass62_0__StaticFields {
};
struct CageStructureTool_c_DisplayClass62_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CageStructureTool_c_DisplayClass62_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CageStructureTool_c_DisplayClass62_0__VTable vtable;
};}