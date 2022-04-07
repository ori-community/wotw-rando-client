namespace app {
struct FishingMiniGameController_IdleState__VTable {
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
  VirtualInvokeData OnSuspended;
  VirtualInvokeData OnUnsuspended;
};
struct FishingMiniGameController_IdleState__StaticFields {
};
struct FishingMiniGameController_IdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishingMiniGameController_IdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishingMiniGameController_IdleState__VTable vtable;
};

struct FishingMiniGameController_EnteringState__Fields {
  struct FishingMiniGameController_FishingState__Fields _;
};
struct FishingMiniGameController_EnteringState {
  struct FishingMiniGameController_EnteringState__Class *klass;
  struct MonitorData *monitor;
  struct FishingMiniGameController_EnteringState__Fields fields;
};
struct FishingMiniGameController_EnteringState__VTable {
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
  VirtualInvokeData OnSuspended;
  VirtualInvokeData OnUnsuspended;
};
struct FishingMiniGameController_EnteringState__StaticFields {
};
struct FishingMiniGameController_EnteringState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishingMiniGameController_EnteringState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishingMiniGameController_EnteringState__VTable vtable;
};

struct FishingMiniGameController_FishingLoopState__Fields {
  struct FishingMiniGameController_FishingState__Fields _;
};
struct FishingMiniGameController_FishingLoopState {
  struct FishingMiniGameController_FishingLoopState__Class *klass;
  struct MonitorData *monitor;
  struct FishingMiniGameController_FishingLoopState__Fields fields;
};
struct FishingMiniGameController_FishingLoopState__VTable {
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
  VirtualInvokeData OnSuspended;
  VirtualInvokeData OnUnsuspended;
};
struct FishingMiniGameController_FishingLoopState__StaticFields {
};
struct FishingMiniGameController_FishingLoopState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishingMiniGameController_FishingLoopState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishingMiniGameController_FishingLoopState__VTable vtable;
};

struct FishingMiniGameController_ExitingState__Fields {
  struct FishingMiniGameController_FishingState__Fields _;
};
struct FishingMiniGameController_ExitingState {
  struct FishingMiniGameController_ExitingState__Class *klass;
  struct MonitorData *monitor;
  struct FishingMiniGameController_ExitingState__Fields fields;
};
struct FishingMiniGameController_ExitingState__VTable {
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
  VirtualInvokeData OnSuspended;
  VirtualInvokeData OnUnsuspended;
};
struct FishingMiniGameController_ExitingState__StaticFields {
};
struct FishingMiniGameController_ExitingState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FishingMiniGameController_ExitingState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FishingMiniGameController_ExitingState__VTable vtable;
};

struct FlipPlantLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct TextureAnimation * PlantUp;
  struct TextureAnimation * PlantDown;
  struct SpriteAnimator * m_spriteAnimator;
};
struct FlipPlantLogic {
  struct FlipPlantLogic__Class *klass;
  struct MonitorData *monitor;
  struct FlipPlantLogic__Fields fields;
};
struct FlipPlantLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FlipPlantLogic__StaticFields {
};
struct FlipPlantLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlipPlantLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlipPlantLogic__VTable vtable;
};

struct FlyToUserInterfaceSpot__Fields {
  struct Suspendable__Fields _;
  struct Vector2 ScreenPosition;
  float Duration;
  struct AnimationCurve * TimeCurve;
  struct Vector3 m_startPosition;
  struct Transform * m_transform;
  float m_time;
  struct Vector2 BiezerIn;
  struct Vector2 BiezerOut;
  bool _IsSuspended_k__BackingField;
};
struct FlyToUserInterfaceSpot {
  struct FlyToUserInterfaceSpot__Class *klass;
  struct MonitorData *monitor;
  struct FlyToUserInterfaceSpot__Fields fields;
};
struct FlyToUserInterfaceSpot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
};
struct FlyToUserInterfaceSpot__StaticFields {
};
struct FlyToUserInterfaceSpot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlyToUserInterfaceSpot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlyToUserInterfaceSpot__VTable vtable;
};

struct BrightnessZoneModifier__Fields {
  struct MonoBehaviour__Fields _;
  float BrightnessMultiplier;
  bool m_visible;
  float _BrightnessInfluceWeight_k__BackingField;
};
struct BrightnessZoneModifier {
  struct BrightnessZoneModifier__Class *klass;
  struct MonitorData *monitor;
  struct BrightnessZoneModifier__Fields fields;
};
struct BrightnessZoneModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_VisibleOnInspector;
  VirtualInvokeData set_VisibleOnInspector;
  VirtualInvokeData UpdateModifier;
  VirtualInvokeData InitializeModifier;
  VirtualInvokeData CleanUpModifier;
  VirtualInvokeData get_BrightnessInfluceOrder;
  VirtualInvokeData get_BrightnessInfluceAdditive;
  VirtualInvokeData get_BrightnessInfluceMultiplicative;
  VirtualInvokeData get_ContributeToAdditive;
  VirtualInvokeData get_ContributeToMultiplicative;
  VirtualInvokeData get_BrightnessInfluceWeight;
};
struct BrightnessZoneModifier__StaticFields {
};
struct BrightnessZoneModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrightnessZoneModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrightnessZoneModifier__VTable vtable;
};

struct CircleGameplayZone__Fields {
  struct BaseZone__Fields _;
  float OuterRadius;
  float InnerRadius;
};
struct CircleGameplayZone {
  struct CircleGameplayZone__Class *klass;
  struct MonitorData *monitor;
  struct CircleGameplayZone__Fields fields;
};
struct CircleGameplayZone__VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
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
};
struct CircleGameplayZone__StaticFields {
};
struct CircleGameplayZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CircleGameplayZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CircleGameplayZone__VTable vtable;
};

struct ColliderMask__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UnityEngine_Collider_ * Colliders;
  struct LayerMask LayerToIgnore;
  struct List_1_UnityEngine_Collider_ * m_intersectingColliders;
};
struct ColliderMask {
  struct ColliderMask__Class *klass;
  struct MonitorData *monitor;
  struct ColliderMask__Fields fields;
};
struct ColliderMask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColliderMask__StaticFields {
};
struct ColliderMask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColliderMask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColliderMask__VTable vtable;
};

struct ColorVariationZoneModifier__Fields {
  struct MonoBehaviour__Fields _;
  struct ColorVariationSettings * Settings;
  bool m_visible;
  float _ColorVariationWeight_k__BackingField;
};
struct ColorVariationZoneModifier {
  struct ColorVariationZoneModifier__Class *klass;
  struct MonitorData *monitor;
  struct ColorVariationZoneModifier__Fields fields;
};
enum ColorVariationManager_ColorVariationInfluencerOrder__Enum : int32_t {
  ColorVariationManager_ColorVariationInfluencerOrder__Enum_ModularZone = 0,
  ColorVariationManager_ColorVariationInfluencerOrder__Enum_Override = 10000,
};
struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ColorVariationManager_ColorVariationInfluencerOrder__Enum value;
};
struct ColorVariationZoneModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_VisibleOnInspector;
  VirtualInvokeData set_VisibleOnInspector;
  VirtualInvokeData UpdateModifier;
  VirtualInvokeData InitializeModifier;
  VirtualInvokeData CleanUpModifier;
  VirtualInvokeData get_ColorVariationWeight;
  VirtualInvokeData get_ColorVariationInfluencerOrder;
  VirtualInvokeData get_ColorVariationSettings;
};
struct ColorVariationZoneModifier__StaticFields {
};
struct ColorVariationZoneModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorVariationZoneModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorVariationZoneModifier__VTable vtable;
};

struct DofZoneModifier__Fields {
  struct MonoBehaviour__Fields _;
  bool m_visible;
  float BackgroundBlurOffset;
  float CenterBlurOffset;
  float ForegroundBlurOffset;
  float FarBackgroundDownsamplingOffset;
  float BackgroundDownsamplingOffset;
  float CenterDownsamplingOffset;
  float ForegroundDownsamplingOffset;
  float CloseForegroundDownsamplingOffset;
  bool OverrideEverything;
  float _SliceRenderSettingsWeight_k__BackingField;
};
struct DofZoneModifier {
  struct DofZoneModifier__Class *klass;
  struct MonitorData *monitor;
  struct DofZoneModifier__Fields fields;
};
enum SliceRenderSettingsInfluencerOrder__Enum : int32_t {
  SliceRenderSettingsInfluencerOrder__Enum_DofZone = 0,
  SliceRenderSettingsInfluencerOrder__Enum_DofAnimator = 10,
  SliceRenderSettingsInfluencerOrder__Enum_Override = 10000,
};
struct SliceRenderSettingsInfluencerOrder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SliceRenderSettingsInfluencerOrder__Enum value;
};
struct DofZoneModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_VisibleOnInspector;
  VirtualInvokeData set_VisibleOnInspector;
  VirtualInvokeData UpdateModifier;
  VirtualInvokeData InitializeModifier;
  VirtualInvokeData CleanUpModifier;
  VirtualInvokeData GetBlurOffsetForLayer;
  VirtualInvokeData GetDownsamplingOffsetForLayer;
  VirtualInvokeData get_SliceRenderSettingsWeight;
  VirtualInvokeData get_SliceRenderInfluenceOrder;
  VirtualInvokeData get_SliceRenderInfluenceOrderOffset;
};
struct DofZoneModifier__StaticFields {
};
struct DofZoneModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DofZoneModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DofZoneModifier__VTable vtable;
};

struct FovZoneModifier__Fields {
  struct MonoBehaviour__Fields _;
  bool m_visible;
  float FieldOfViewOffset;
  struct Transform * FocalCenter;
  float _FOVInfluencerWeight_k__BackingField;
};
struct FovZoneModifier {
  struct FovZoneModifier__Class *klass;
  struct MonitorData *monitor;
  struct FovZoneModifier__Fields fields;
};
struct FovZoneModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_VisibleOnInspector;
  VirtualInvokeData set_VisibleOnInspector;
  VirtualInvokeData UpdateModifier;
  VirtualInvokeData InitializeModifier;
  VirtualInvokeData CleanUpModifier;
  VirtualInvokeData get_FOVInfluencerIsValid;
  VirtualInvokeData get_FOVInfluencerWeight;
  VirtualInvokeData get_FOVInfluencerOffset;
  VirtualInvokeData get_FOVInfluencerTargetZ;
};
struct FovZoneModifier__StaticFields {
};
struct FovZoneModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FovZoneModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FovZoneModifier__VTable vtable;
};

enum ModularZone_Target__Enum : int32_t {
  ModularZone_Target__Enum_Camera = 0,
  ModularZone_Target__Enum_Player = 1,
};
struct ModularZone_Target__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ModularZone_Target__Enum value;
};
struct ModularZone__Fields {
  struct RectangleGameplayZone__Fields _;
  enum ModularZone_Target__Enum TargetMode;
  struct WeightController * FadeController;
  struct List_1_Moon_MoonReference_1__11 * Conditions;
  bool ConditionsPassedEditor;
  struct IModularZoneModifier__Array * m_modifiers;
  float _TimeSinceLastActive_k__BackingField;
  int32_t m_lateEditorRefreshFrame;
  struct List_1_ICondition_ * m_resolvedConditions;
};
struct ModularZone {
  struct ModularZone__Class *klass;
  struct MonitorData *monitor;
  struct ModularZone__Fields fields;
};
struct IModularZoneModifier {
  struct IModularZoneModifier__Class *klass;
  struct MonitorData *monitor;
};
struct IModularZoneModifier__Array {
  struct IModularZoneModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IModularZoneModifier * vector[32];
};
struct IModularZoneModifier__VTable {
  VirtualInvokeData get_VisibleOnInspector;
  VirtualInvokeData set_VisibleOnInspector;
  VirtualInvokeData UpdateModifier;
  VirtualInvokeData InitializeModifier;
  VirtualInvokeData CleanUpModifier;
};
struct IModularZoneModifier__StaticFields {
};
struct IModularZoneModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IModularZoneModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IModularZoneModifier__VTable vtable;
};
struct ModularZone__VTable {
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
};
struct ModularZone__StaticFields {
};
struct ModularZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ModularZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ModularZone__VTable vtable;
};

struct ModularZoneActiveCondition__Fields {
  struct Condition_1__Fields _;
  float SecondsSinceLastActive;
  struct ModularZone * Zone;
};
struct ModularZoneActiveCondition {
  struct ModularZoneActiveCondition__Class *klass;
  struct MonitorData *monitor;
  struct ModularZoneActiveCondition__Fields fields;
};
struct ModularZoneActiveCondition__VTable {
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
struct ModularZoneActiveCondition__StaticFields {
};
struct ModularZoneActiveCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ModularZoneActiveCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ModularZoneActiveCondition__VTable vtable;
};

struct MoveWithCondition__Fields {
  struct MonoBehaviour__Fields _;
  struct Condition_1 * Condition;
  struct Transform * Target;
  struct Vector3 Amount;
  float Duration;
  float SpeedSmoothingTime;
  bool InvertIfConditionNotMet;
  struct Vector3 m_startPos;
  struct Vector3 m_endPos;
  float m_ratio;
  float m_currentSpeed;
};
struct MoveWithCondition {
  struct MoveWithCondition__Class *klass;
  struct MonitorData *monitor;
  struct MoveWithCondition__Fields fields;
};
struct MoveWithCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetTweenNormalizedValue;
};
struct MoveWithCondition__StaticFields {
};
struct MoveWithCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveWithCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveWithCondition__VTable vtable;
};

struct PlayerPositionOverride__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Target;
  struct Rect m_bounds;
  bool m_active;
};
struct PlayerPositionOverride {
  struct PlayerPositionOverride__Class *klass;
  struct MonitorData *monitor;
  struct PlayerPositionOverride__Fields fields;
};
struct PlayerPositionOverride__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct PlayerPositionOverride__StaticFields {
  bool Active;
  struct Vector3 Position;
};
struct PlayerPositionOverride__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerPositionOverride__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerPositionOverride__VTable vtable;
};

struct GetAbilityAction__Fields {
  struct ActionMethod__Fields _;
  enum AbilityType__Enum Ability;
  bool Gain;
};
struct GetAbilityAction {
  struct GetAbilityAction__Class *klass;
  struct MonitorData *monitor;
  struct GetAbilityAction__Fields fields;
};
struct GetAbilityAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct GetAbilityAction__StaticFields {
};
struct GetAbilityAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetAbilityAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetAbilityAction__VTable vtable;
};

enum LegacyGetAbilityPedestal_States__Enum : int32_t {
  LegacyGetAbilityPedestal_States__Enum_OutOfRange = 0,
  LegacyGetAbilityPedestal_States__Enum_InRange = 1,
  LegacyGetAbilityPedestal_States__Enum_Completed = 2,
};
struct LegacyGetAbilityPedestal_States__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LegacyGetAbilityPedestal_States__Enum value;
};
struct LegacyGetAbilityPedestal__Fields {
  struct SaveSerialize__Fields _;
  enum LegacyGetAbilityPedestal_States__Enum CurrentState;
  enum AbilityType__Enum Ability;
  struct PerformingAction * ActivatePedestalSequence;
  struct IContext * ActivatePedestalSequenceContext;
  float ActivationDuration;
  struct MoonAnimation * GetAbility;
  struct Texture2D * PressUpToActivatePedestal;
  struct MessageProvider * PressUpToActivatePedestalMessage;
  struct MessageBox * m_message;
  float Radius;
  struct Transform * m_transform;
  struct Action * OnGetAbilityFinished;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct LegacyGetAbilityPedestal {
  struct LegacyGetAbilityPedestal__Class *klass;
  struct MonitorData *monitor;
  struct LegacyGetAbilityPedestal__Fields fields;
};
struct __declspec(align(8)) List_1_LegacyGetAbilityPedestal___Fields {
  struct LegacyGetAbilityPedestal__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyGetAbilityPedestal_ {
  struct List_1_LegacyGetAbilityPedestal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyGetAbilityPedestal___Fields fields;
};
struct LegacyGetAbilityPedestal__Array {
  struct LegacyGetAbilityPedestal__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyGetAbilityPedestal * vector[32];
};
struct IEnumerator_1_LegacyGetAbilityPedestal_ {
  struct IEnumerator_1_LegacyGetAbilityPedestal___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_LegacyGetAbilityPedestal___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LegacyGetAbilityPedestal___StaticFields {
};
struct IEnumerator_1_LegacyGetAbilityPedestal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LegacyGetAbilityPedestal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LegacyGetAbilityPedestal___VTable vtable;
};
struct List_1_LegacyGetAbilityPedestal___VTable {
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
struct List_1_LegacyGetAbilityPedestal___StaticFields {
  struct LegacyGetAbilityPedestal__Array * _emptyArray;
};
struct List_1_LegacyGetAbilityPedestal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LegacyGetAbilityPedestal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LegacyGetAbilityPedestal___VTable vtable;
};
struct LegacyGetAbilityPedestal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_StressTestName;
  VirtualInvokeData StartStressTest;
  VirtualInvokeData StressTestUpdate;
  VirtualInvokeData EndStressTest;
  VirtualInvokeData get_StressTestStatus;
  VirtualInvokeData set_StressTestStatus;
  VirtualInvokeData get_CanExecuteStressTest;
  VirtualInvokeData get_StopMovingPlayerWhilePerforming;
};
struct LegacyGetAbilityPedestal__StaticFields {
  struct List_1_LegacyGetAbilityPedestal_ * All;
};
struct LegacyGetAbilityPedestal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyGetAbilityPedestal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyGetAbilityPedestal__VTable vtable;
};

enum MoonGetAbilityPedestal_States__Enum : int32_t {
  MoonGetAbilityPedestal_States__Enum_OutOfRange = 0,
  MoonGetAbilityPedestal_States__Enum_InRange = 1,
  MoonGetAbilityPedestal_States__Enum_Completed = 2,
};
struct MoonGetAbilityPedestal_States__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonGetAbilityPedestal_States__Enum value;
};
struct MoonGetAbilityPedestal__Fields {
  struct MonoBehaviour__Fields _;
  struct Action * OnCollectEvent;
  enum MoonGetAbilityPedestal_States__Enum CurrentState;
  enum AbilityType__Enum Ability;
  struct DesiredPlayerAbilityState * HasAbility;
  struct MoonTimeline * ActivatePedestalTimeline;
  struct EventTriggerAnimator * OnCollectTrigger;
  struct EventTriggerAnimator * OnSequenceCompleted;
  struct IContext * ActivatePedestalSequenceContext;
  float ActivationDuration;
  struct MoonAnimation * GetAbility;
  struct Texture2D * PressUpToActivatePedestal;
  struct MessageProvider * PressUpToActivatePedestalMessage;
  struct MessageBox * m_message;
  float Radius;
  struct Transform * m_transform;
  struct Action * OnGetAbilityFinished;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
  struct IUberState__Array * m_affectingUberStates;
};
struct MoonGetAbilityPedestal {
  struct MoonGetAbilityPedestal__Class *klass;
  struct MonitorData *monitor;
  struct MoonGetAbilityPedestal__Fields fields;
};
struct __declspec(align(8)) List_1_MoonGetAbilityPedestal___Fields {
  struct MoonGetAbilityPedestal__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MoonGetAbilityPedestal_ {
  struct List_1_MoonGetAbilityPedestal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MoonGetAbilityPedestal___Fields fields;
};
struct MoonGetAbilityPedestal__Array {
  struct MoonGetAbilityPedestal__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonGetAbilityPedestal * vector[32];
};
struct IEnumerator_1_MoonGetAbilityPedestal_ {
  struct IEnumerator_1_MoonGetAbilityPedestal___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_MoonGetAbilityPedestal___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MoonGetAbilityPedestal___StaticFields {
};
struct IEnumerator_1_MoonGetAbilityPedestal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MoonGetAbilityPedestal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MoonGetAbilityPedestal___VTable vtable;
};
struct List_1_MoonGetAbilityPedestal___VTable {
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
struct List_1_MoonGetAbilityPedestal___StaticFields {
  struct MoonGetAbilityPedestal__Array * _emptyArray;
};
struct List_1_MoonGetAbilityPedestal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MoonGetAbilityPedestal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MoonGetAbilityPedestal___VTable vtable;
};
struct MoonGetAbilityPedestal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_StressTestName;
  VirtualInvokeData StartStressTest;
  VirtualInvokeData StressTestUpdate;
  VirtualInvokeData EndStressTest;
  VirtualInvokeData get_StressTestStatus;
  VirtualInvokeData set_StressTestStatus;
  VirtualInvokeData get_CanExecuteStressTest;
  VirtualInvokeData get_StopMovingPlayerWhilePerforming;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct MoonGetAbilityPedestal__StaticFields {
  struct List_1_MoonGetAbilityPedestal_ * All;
};
struct MoonGetAbilityPedestal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonGetAbilityPedestal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonGetAbilityPedestal__VTable vtable;
};

struct GlowChargeEffect_c {
  struct GlowChargeEffect_c__Class *klass;
  struct MonitorData *monitor;
};
struct GlowChargeEffect_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GlowChargeEffect_c__StaticFields {
  struct GlowChargeEffect_c * __9;
  struct Action * __9__16_0;
};
struct GlowChargeEffect_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GlowChargeEffect_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GlowChargeEffect_c__VTable vtable;
};}