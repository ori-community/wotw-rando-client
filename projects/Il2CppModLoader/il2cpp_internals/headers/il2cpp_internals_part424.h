namespace app {
struct SpiritFlame__Array {
  struct SpiritFlame__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiritFlame * vector[32];
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinCarry___Fields {
  bool HasState;
  struct SeinCarry * State;
};
struct CharacterStateWrapper_1_SeinCarry_ {
  struct CharacterStateWrapper_1_SeinCarry___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinCarry___Fields fields;
};
struct SeinCarry__Fields {
  struct CharacterState__Fields _;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * AirMultiplier;
  struct SeinCarry_CarryAnimations * Animations;
  float CarryRange;
  struct SurfaceToSoundProviderMap * FootstepsSoundProvider;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * GroundMultiplier;
  struct StateMachine_2 * Logic;
  struct Varying2DSoundProvider * OnPickupSoundProvider;
  struct SeinCarry_States * State;
  float WalkSoundsPerSecond;
  bool _LockDroppingObject_k__BackingField;
  bool m_lastButtonOverrideActive;
  struct Transform * m_crossHair;
  struct ICarryable * m_currentCarryable;
  bool m_lockPlayer;
  float m_nextWalkTime;
  float m_pressedXTime;
  bool m_buttonOverrideActive;
};
struct SeinCarry {
  struct SeinCarry__Class *klass;
  struct MonitorData *monitor;
  struct SeinCarry__Fields fields;
};
struct __declspec(align(8)) SeinCarry_CarryAnimations__Fields {
  struct MoonAnimation * Drop;
  struct MoonAnimation * FallIdle;
  struct MoonAnimation * FallMoving;
  struct MoonAnimation * JumpIdle;
  struct MoonAnimation * JumpMoving;
  struct MoonAnimation * Pickup;
  struct MoonAnimation * RunIdle;
  struct MoonAnimation * RunMoving;
};
struct SeinCarry_CarryAnimations {
  struct SeinCarry_CarryAnimations__Class *klass;
  struct MonitorData *monitor;
  struct SeinCarry_CarryAnimations__Fields fields;
};
struct Varying2DSoundProvider__Fields {
  struct SoundProvider__Fields _;
  struct Byte__Array * valueGuid;
  uint32_t hash;
  bool hashed;
  struct Trigger * TriggerOnPlay;
  struct List_1_UnityEngine_AudioClip_ * AudioClips;
  int32_t m_index;
  float ProviderVolume;
  float MinPitch;
  float MaxPitch;
  struct SoundSize * SoundSize;
  bool ShouldBePanned;
  struct LowPassFilterSettings * LowPassFilterSettings;
  bool SyncToTime;
  enum MixerGroupType__Enum MixerGroup;
};
struct Varying2DSoundProvider {
  struct Varying2DSoundProvider__Class *klass;
  struct MonitorData *monitor;
  struct Varying2DSoundProvider__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_AudioClip___Fields {
  struct AudioClip__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_AudioClip_ {
  struct List_1_UnityEngine_AudioClip___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_AudioClip___Fields fields;
};
struct AudioClip__Array {
  struct AudioClip__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AudioClip * vector[32];
};
struct IEnumerator_1_UnityEngine_AudioClip_ {
  struct IEnumerator_1_UnityEngine_AudioClip___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SeinCarry_States__Fields {
  struct IState_2 * Carry;
  struct IState_2 * Dropping;
  struct IState_2 * Inactive;
  struct IState_2 * Pickup;
};
struct SeinCarry_States {
  struct SeinCarry_States__Class *klass;
  struct MonitorData *monitor;
  struct SeinCarry_States__Fields fields;
};
struct ICarryable {
  struct ICarryable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinHold___Fields {
  bool HasState;
  struct SeinHold * State;
};
struct CharacterStateWrapper_1_SeinHold_ {
  struct CharacterStateWrapper_1_SeinHold___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinHold___Fields fields;
};
struct SeinHold__Fields {
  struct CharacterState__Fields _;
  bool m_preventTorchPose;
  bool m_isUsing;
  struct IHoldable * m_currentHoldable;
  struct IThrowable * m_throwable;
  bool m_spriteMirrorLock;
  bool m_dropButtonActive;
  float m_dropButtonDownTime;
  struct SeinHold_States * State;
  struct StateMachine_2 * Logic;
  float PickupRadius;
  float PickupRadiusAir;
  float PickupMovingObjectsCheckRadius;
  float DropButtonMaxTime;
  struct LayerMask PickupCheckLayerMask;
  struct LayerMask EndDropCollisionLayerMask;
  struct MoonAnimation * PickupTorch;
  struct MoonAnimation * PickupTorchFinish;
  struct MoonAnimation * DropTorch;
  struct MessageProvider * PickupHintMessage;
  float AimSpeed;
  float AimSmoothDamp;
  float FlipCharacterThresholdZone;
  float FlipZoneSpeed;
  float ClampBelowYCord;
  struct AnimationCurve * VelocityCurve;
  float MinThrowVelocity;
  float MaxThrowVelocity;
  struct SeinGrenadeTrajectory * Trajectory;
  float ThrowInAirButtonMaxTime;
  float AirThrowVelocityMultiplier;
  float ThrowStartingMagnitude;
  float ThrowStartingAngle;
  struct SeinHold_ThrowAnimationSet__Array * ThrowAnimationSets;
  struct Action_1_IHoldable_ * OnPickUp;
  struct Action * OnDrop;
  struct Action * m_finishThrowAction;
  struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ * m_throwAnimationSets;
  bool m_dropImmediate;
  struct Vector2 m_aimerVelocity;
  struct Vector2 m_aimerPos;
  struct Vector2 m_targetAimerPos;
  struct Vector2 m_throwVelocity;
  bool m_playingThrowAnimation;
  bool m_shouldThrow;
  struct MessageBox * m_messageBox;
  float m_hintTimeout;
};
struct SeinHold {
  struct SeinHold__Class *klass;
  struct MonitorData *monitor;
  struct SeinHold__Fields fields;
};
struct IHoldable {
  struct IHoldable__Class *klass;
  struct MonitorData *monitor;
};
struct IThrowable {
  struct IThrowable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SeinHold_States__Fields {
  struct IState_2 * Inactive;
  struct IState_2 * Pickup;
  struct IState_2 * Holding;
  struct IState_2 * Dropping;
  struct IState_2 * Throwing;
};
struct SeinHold_States {
  struct SeinHold_States__Class *klass;
  struct MonitorData *monitor;
  struct SeinHold_States__Fields fields;
};
struct SeinGrenadeTrajectory__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector2 StartPosition;
  struct Vector2 InitialVelocity;
  float Gravity;
  struct LineRenderer * LineRenderer;
  int32_t LinePoints;
  bool StopLineOnMaxima;
  struct LegacyTransparencyAnimator * FadeIn;
  struct LayerMask LayerMask;
  struct List_1_UnityEngine_Vector3_ * m_trajectoryPoints;
};
struct SeinGrenadeTrajectory {
  struct SeinGrenadeTrajectory__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrenadeTrajectory__Fields fields;
};
enum LegacyTransparencyAnimator_AnimateMode__Enum : int32_t {
  LegacyTransparencyAnimator_AnimateMode__Enum_Color = 0,
  LegacyTransparencyAnimator_AnimateMode__Enum_Dissolve = 1,
  LegacyTransparencyAnimator_AnimateMode__Enum_Additive = 2,
};
struct LegacyTransparencyAnimator_AnimateMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LegacyTransparencyAnimator_AnimateMode__Enum value;
};
enum LegacyActivateAnimator_TargetMode__Enum : int32_t {
  LegacyActivateAnimator_TargetMode__Enum_UseDefinedTarget = 0,
  LegacyActivateAnimator_TargetMode__Enum_GameplayOri = 1,
  LegacyActivateAnimator_TargetMode__Enum_GameplayKu = 2,
  LegacyActivateAnimator_TargetMode__Enum_Current = 3,
};
struct LegacyActivateAnimator_TargetMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LegacyActivateAnimator_TargetMode__Enum value;
};
struct LegacyTransparencyAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * AnimationCurve;
  bool AnimateChildren;
  enum LegacyTransparencyAnimator_AnimateMode__Enum Mode;
  struct GameObject * AnimationTarget;
  enum LegacyActivateAnimator_TargetMode__Enum TargetType;
  bool IgnoreChildTransparencyAnimators;
  bool IgnoreInactiveChildObjs;
  bool AutoEnableTargets;
  struct List_1_LegacyTransparencyAnimator_RendererData_ * m_rendererData;
  struct List_1_LegacyTransparencyAnimator_ * m_childTransparencyAnimators;
  struct List_1_CleverMenuItem_ * m_cleverMenuItems;
  bool m_forceUseRendererMaterial;
  float m_opacity;
  struct Transform * m_target;
  struct List_1_UnityEngine_GameObject_ * m_objectsToEnable;
  struct HashSet_1_UnityEngine_Renderer_ * m_renderers;
  float m_lastFinalOpacity;
  struct Single__Array * ParentOpacityByMode;
};
struct LegacyTransparencyAnimator {
  struct LegacyTransparencyAnimator__Class *klass;
  struct MonitorData *monitor;
  struct LegacyTransparencyAnimator__Fields fields;
};
enum UberShaderProperty_Color__Enum : int32_t {
  UberShaderProperty_Color__Enum_MainColor = 0,
  UberShaderProperty_Color__Enum_TintColor = 1,
  UberShaderProperty_Color__Enum_AdditiveLayerColor = 2,
  UberShaderProperty_Color__Enum_AdditiveLayerDistortColor = 3,
  UberShaderProperty_Color__Enum_AdditiveLayerExtraColor = 4,
  UberShaderProperty_Color__Enum_AdditiveTintColor = 5,
  UberShaderProperty_Color__Enum_MultiplyLayerColor = 6,
  UberShaderProperty_Color__Enum_MultiplyLayerExtraColor = 7,
  UberShaderProperty_Color__Enum_MultiplyLayerThirdColor = 8,
  UberShaderProperty_Color__Enum_MultiplyLayerDistortColor = 9,
  UberShaderProperty_Color__Enum_BackgroundColor = 10,
  UberShaderProperty_Color__Enum_OutlineColor = 11,
  UberShaderProperty_Color__Enum_MaskDissolveColor = 12,
  UberShaderProperty_Color__Enum_DirectionalLightColor = 13,
  UberShaderProperty_Color__Enum_DirectionalLightColorExtra = 14,
  UberShaderProperty_Color__Enum_DecalLayerColor = 15,
  UberShaderProperty_Color__Enum_EmissivityColor = 16,
  UberShaderProperty_Color__Enum_EmissivityProps = 17,
  UberShaderProperty_Color__Enum_LigthCanvasFrontLayerColor = 18,
  UberShaderProperty_Color__Enum_LigthCanvasMiddleLayerColor = 19,
  UberShaderProperty_Color__Enum_LigthCanvasBackLayerColor = 20,
  UberShaderProperty_Color__Enum_TotalColorProperties = 21,
};
struct UberShaderProperty_Color__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberShaderProperty_Color__Enum value;
};
struct UberShaderProperty_Color__Enum__Array {
  struct UberShaderProperty_Color__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum UberShaderProperty_Color__Enum vector[32];
};
struct __declspec(align(8)) List_1_LegacyTransparencyAnimator_RendererData___Fields {
  struct LegacyTransparencyAnimator_RendererData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyTransparencyAnimator_RendererData_ {
  struct List_1_LegacyTransparencyAnimator_RendererData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyTransparencyAnimator_RendererData___Fields fields;
};
struct LegacyTransparencyAnimator_RendererData {
  float OriginalAlpha;
  struct Renderer * Renderer;
};
struct LegacyTransparencyAnimator_RendererData__Boxed {
  struct LegacyTransparencyAnimator_RendererData__Class *klass;
  struct MonitorData *monitor;
  struct LegacyTransparencyAnimator_RendererData fields;
};
struct LegacyTransparencyAnimator_RendererData__Array {
  struct LegacyTransparencyAnimator_RendererData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyTransparencyAnimator_RendererData vector[32];
};
struct IEnumerator_1_LegacyTransparencyAnimator_RendererData_ {
  struct IEnumerator_1_LegacyTransparencyAnimator_RendererData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_LegacyTransparencyAnimator___Fields {
  struct LegacyTransparencyAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyTransparencyAnimator_ {
  struct List_1_LegacyTransparencyAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyTransparencyAnimator___Fields fields;
};
struct LegacyTransparencyAnimator__Array {
  struct LegacyTransparencyAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyTransparencyAnimator * vector[32];
};
struct IEnumerator_1_LegacyTransparencyAnimator_ {
  struct IEnumerator_1_LegacyTransparencyAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_CleverMenuItem___Fields {
  struct CleverMenuItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CleverMenuItem_ {
  struct List_1_CleverMenuItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CleverMenuItem___Fields fields;
};
struct CleverMenuItem__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * m_transform;
  struct ActionMethod * Highlight;
  struct ActionMethod * Unhighlight;
  struct ActionMethod * Pressed;
  struct Condition_1 * Activated;
  struct Condition_1 * Visible;
  struct Color m_tweenLastColor;
  struct Color m_tweenNextColor;
  struct Vector2 Size;
  struct Vector2 Center;
  struct Action * HighlightCallback;
  struct Action_1_Boolean_ * HighlightBCallback;
  struct Action * UnhighlightCallback;
  struct Action * PressedCallback;
  bool UseNewTimelineForHightlight;
  struct BaseAnimator * HighlightAnimator;
  struct MoonTimelineUiFader * HighlightFader;
  struct LegacyTransparencyAnimator * ActiveAnimator;
  struct GameObject * ColorTarget;
  struct CleverMenuItem_TransitionSettings * Transition;
  bool AnimateColors;
  bool AnimateAlphaOnly;
  float Space;
  struct List_1_CleverMenuItem_ExtraNavigationButton_ * ExtraSelectionInput;
  struct List_1_CleverMenuItem_ExtraNavigationButton_ * ExtraDeselectionInput;
  bool DefaultSelection;
  bool RunHighlightActionsOnce;
  bool m_isHighlighted;
  float m_tweenTime;
  bool m_tweenPlay;
  bool m_boundsInitialized;
  struct Rect m_bounds;
  float m_parentOpacity;
  float m_opacity;
  struct Renderer__Array * m_renderers;
  struct Vector3 m_cachedPosition;
  bool m_isActive;
  bool m_wasActivated;
  bool m_isDisabled;
  struct CleverMenuItemSelectionManager * m_selectionManager;
};
struct CleverMenuItem {
  struct CleverMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItem__Fields fields;
};
struct CleverMenuItem__Array {
  struct CleverMenuItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CleverMenuItem * vector[32];
};
struct __declspec(align(8)) MoonTimelineUiFader__Fields {
  struct MoonTimeline * FadeOutTimeline;
  struct MoonTimeline * FadeInTimeline;
  struct GameObject * FadeGroup;
  struct GameObject * BlackFadeObject;
  bool RefreshTargetsEveryFade;
  struct ForceRefreshAnimatorContext * m_forceRefreshAnimatorContext;
};
struct MoonTimelineUiFader {
  struct MoonTimelineUiFader__Class *klass;
  struct MonitorData *monitor;
  struct MoonTimelineUiFader__Fields fields;
};
struct ForceRefreshAnimatorContext {
  struct ForceRefreshAnimatorContext__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CleverMenuItem_TransitionSettings__Fields {
  enum UberShaderProperty_Color__Enum ColorProperty;
  struct Color NormalColor;
  struct Color HighlightedColor;
  struct Color DisabledColor;
  float TweenDuration;
};
struct CleverMenuItem_TransitionSettings {
  struct CleverMenuItem_TransitionSettings__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItem_TransitionSettings__Fields fields;
};
struct __declspec(align(8)) List_1_CleverMenuItem_ExtraNavigationButton___Fields {
  struct CleverMenuItem_ExtraNavigationButton__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CleverMenuItem_ExtraNavigationButton_ {
  struct List_1_CleverMenuItem_ExtraNavigationButton___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CleverMenuItem_ExtraNavigationButton___Fields fields;
};
enum CleverMenuItem_ExtraNavigationButton__Enum : int32_t {
  CleverMenuItem_ExtraNavigationButton__Enum_Left = 0,
  CleverMenuItem_ExtraNavigationButton__Enum_Right = 1,
};
struct CleverMenuItem_ExtraNavigationButton__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CleverMenuItem_ExtraNavigationButton__Enum value;
};
struct CleverMenuItem_ExtraNavigationButton__Enum__Array {
  struct CleverMenuItem_ExtraNavigationButton__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum CleverMenuItem_ExtraNavigationButton__Enum vector[32];
};
struct IEnumerator_1_CleverMenuItem_ExtraNavigationButton_ {
  struct IEnumerator_1_CleverMenuItem_ExtraNavigationButton___Class *klass;
  struct MonitorData *monitor;
};
enum CleverMenuItemSelectionManager_Direction__Enum : int32_t {
  CleverMenuItemSelectionManager_Direction__Enum_LeftToRight = 0,
  CleverMenuItemSelectionManager_Direction__Enum_TopToBottom = 1,
  CleverMenuItemSelectionManager_Direction__Enum_NavigationCage = 2,
  CleverMenuItemSelectionManager_Direction__Enum_RadialNavigation = 3,
  CleverMenuItemSelectionManager_Direction__Enum_FiveColumns = 4,
  CleverMenuItemSelectionManager_Direction__Enum_None = 5,
};
struct CleverMenuItemSelectionManager_Direction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CleverMenuItemSelectionManager_Direction__Enum value;
};
struct CleverMenuItemSelectionManager__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_CleverMenuItemSelectionManager_NavigationData_ * Navigation;
  struct CageStructureTool * CopyFromCage;
  struct List_1_CleverMenuItem_ * m_menuItems;
  enum CleverMenuItemSelectionManager_Direction__Enum ItemDirection;
  struct ActionMethod * OptionChangeAction;
  struct Action * OptionChangeCallback;
  struct Action * OptionPressedCallback;
  struct Action * OnBackPressedCallback;
  struct Action * OnXPressedCallback;
  struct Action * OnYPressedCallback;
  struct Action * OnBPressedCallback;
  struct Action * OnVisibilityChangedCallback;
  struct Action * OnRadialItemChanged;
  bool HighlightOnMouseOver;
  bool UnhighlightOnMouseLeave;
  bool DisableAudioTriggering;
  bool UseNewTimeline;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct MoonTimelineUiFader * Fader;
  bool AlwaysForceInitializeFade;
  bool KeepSelectedItemActiveWhenInactive;
  bool KeepMouseInteractionsWhenInactive;
  bool AlwaysHighlightCurrentMenuItem;
  bool HighlightOnEnable;
  int32_t Index;
  int32_t m_defaultIndex;
  struct CleverMenuItem * BackItem;
  struct ActionMethod * BackAction;
  float ButtonPressDelay;
  float AngleTolerance;
  bool m_isVisible;
  bool m_isActive;
  float m_buttonPressDelay;
  float m_nextPressDelay;
  float m_holdDelayDuration;
  float m_holdRemainingTime;
  float m_lastRadialClick;
  bool m_initialRadialDelay;
  struct Vector2 m_lastMenuAxis;
  int32_t m_menuAxisAngleDeltaDir;
  int32_t m_itemsPerCicle;
  bool OnlyDigipad;
  bool NoDiaganals;
  bool WrapAround;
  bool PlayDefaultNavigateSound;
  bool CheckIfActiveWhenSettingIndexToFirst;
  bool DisableKeyboardScrolling;
  bool UnhighlightOnBackPressed;
  bool m_ignoreRefreshVisible;
  struct List_1_Moon_MoonReference_1__6 * FaderObservers;
  struct List_1_ICleverMenuFadeObserver_ * m_resolvedFaderObservers;
  bool m_isHighlightVisible;
  bool _IsLocked_k__BackingField;
  bool m_waitForRelease;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Func_1_UnityEngine_Vector2_ * MenuItemAxisOverride;
  struct Int32__Array * kGridDirections;
  struct Int32__Array * kGridDirectionsNoDiaganals;
};
struct CleverMenuItemSelectionManager {
  struct CleverMenuItemSelectionManager__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItemSelectionManager__Fields fields;
};
struct __declspec(align(8)) List_1_CleverMenuItemSelectionManager_NavigationData___Fields {
  struct CleverMenuItemSelectionManager_NavigationData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CleverMenuItemSelectionManager_NavigationData_ {
  struct List_1_CleverMenuItemSelectionManager_NavigationData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CleverMenuItemSelectionManager_NavigationData___Fields fields;
};
struct __declspec(align(8)) CleverMenuItemSelectionManager_NavigationData__Fields {
  struct CleverMenuItem * From;
  struct CleverMenuItem * To;
  struct Nullable_1_UnityEngine_Vector2_ Direction;
  struct Func_2_CleverMenuItemSelectionManager_NavigationData_Boolean_ * Condition;
};
struct CleverMenuItemSelectionManager_NavigationData {
  struct CleverMenuItemSelectionManager_NavigationData__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItemSelectionManager_NavigationData__Fields fields;
};
struct CleverMenuItemSelectionManager_NavigationData__Array {
  struct CleverMenuItemSelectionManager_NavigationData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CleverMenuItemSelectionManager_NavigationData * vector[32];
};
struct Func_2_CleverMenuItemSelectionManager_NavigationData_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_CleverMenuItemSelectionManager_NavigationData_Boolean_ {
  struct Func_2_CleverMenuItemSelectionManager_NavigationData_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_CleverMenuItemSelectionManager_NavigationData_Boolean___Fields fields;
};
struct IEnumerator_1_CleverMenuItemSelectionManager_NavigationData_ {
  struct IEnumerator_1_CleverMenuItemSelectionManager_NavigationData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__6__Fields {
  struct MoonReference_1_ICleverMenuFadeObserver___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__6 {
  struct List_1_Moon_MoonReference_1__6__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__6__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_ICleverMenuFadeObserver___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ICleverMenuFadeObserver_ * m_cachedProxyType;
  struct ICleverMenuFadeObserver * m_volatileValue;
};
struct MoonReference_1_ICleverMenuFadeObserver_ {
  struct MoonReference_1_ICleverMenuFadeObserver___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ICleverMenuFadeObserver___Fields fields;
};
struct MoonReference_1_ICleverMenuFadeObserver___Array {
  struct MoonReference_1_ICleverMenuFadeObserver___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_ICleverMenuFadeObserver_ * vector[32];
};
struct IMoonType_1_ICleverMenuFadeObserver_ {
  struct IMoonType_1_ICleverMenuFadeObserver___Class *klass;
  struct MonitorData *monitor;
};
struct ICleverMenuFadeObserver {
  struct ICleverMenuFadeObserver__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonReference_1__6 {
  struct IEnumerator_1_Moon_MoonReference_1__6__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ICleverMenuFadeObserver___Fields {
  struct ICleverMenuFadeObserver__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ICleverMenuFadeObserver_ {
  struct List_1_ICleverMenuFadeObserver___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ICleverMenuFadeObserver___Fields fields;
};
struct ICleverMenuFadeObserver__Array {
  struct ICleverMenuFadeObserver__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ICleverMenuFadeObserver * vector[32];
};
struct IEnumerator_1_ICleverMenuFadeObserver_ {
  struct IEnumerator_1_ICleverMenuFadeObserver___Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_UnityEngine_Vector2___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UnityEngine_Vector2_ {
  struct Func_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UnityEngine_Vector2___Fields fields;
};
struct IEnumerator_1_CleverMenuItem_ {
  struct IEnumerator_1_CleverMenuItem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_UnityEngine_Renderer___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_Renderer___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_Renderer_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_Renderer_ {
  struct HashSet_1_UnityEngine_Renderer___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_Renderer___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_Renderer_ {
  int32_t hashCode;
  int32_t next;
  struct Renderer * value;
};
struct HashSet_1_T_Slot_UnityEngine_Renderer___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_Renderer___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_Renderer_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_Renderer___Array {
  struct HashSet_1_T_Slot_UnityEngine_Renderer___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_Renderer_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_Renderer_ {
  struct IEqualityComparer_1_UnityEngine_Renderer___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Renderer_ {
  struct IEnumerable_1_UnityEngine_Renderer___Class *klass;
  struct MonitorData *monitor;
};
enum ThrowAnimationType__Enum : int32_t {
  ThrowAnimationType__Enum_Grenade = 0,
};
struct ThrowAnimationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ThrowAnimationType__Enum value;
};
struct __declspec(align(8)) SeinHold_ThrowAnimationSet__Fields {
  enum ThrowAnimationType__Enum ThrowAnimationType;
  struct FloatAnimationParameter * AimAngleParameter;
  struct MoonAnimation * Aiming;
  int32_t AimingPriority;
  struct MoonAnimation * Throw;
  int32_t ThrowPriority;
  struct MoonAnimation * WallAiming;
  struct MoonAnimation * WallThrow;
};
struct SeinHold_ThrowAnimationSet {
  struct SeinHold_ThrowAnimationSet__Class *klass;
  struct MonitorData *monitor;
  struct SeinHold_ThrowAnimationSet__Fields fields;
};
struct SeinHold_ThrowAnimationSet__Array {
  struct SeinHold_ThrowAnimationSet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinHold_ThrowAnimationSet * vector[32];
};
struct Action_1_IHoldable___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_IHoldable_ {
  struct Action_1_IHoldable___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_IHoldable___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_ThrowAnimationType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ {
  struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ {
  int32_t hashCode;
  int32_t next;
  enum ThrowAnimationType__Enum key;
  struct SeinHold_ThrowAnimationSet * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ vector[32];
};
struct IEqualityComparer_1_Moon_ThrowAnimationType_ {
  struct IEqualityComparer_1_Moon_ThrowAnimationType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Fields {
  struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Fields fields;
};
struct ThrowAnimationType__Enum__Array {
  struct ThrowAnimationType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum ThrowAnimationType__Enum vector[32];
};
struct IEnumerator_1_Moon_ThrowAnimationType_ {
  struct IEnumerator_1_Moon_ThrowAnimationType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Fields {
  struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Fields fields;
};
struct IEnumerator_1_SeinHold_ThrowAnimationSet_ {
  struct IEnumerator_1_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_ThrowAnimationType_ {
  struct ICollection_1_Moon_ThrowAnimationType___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SeinHold_ThrowAnimationSet_ {
  struct ICollection_1_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ {
  enum ThrowAnimationType__Enum key;
  struct SeinHold_ThrowAnimationSet * value;
};
struct KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Boxed {
  struct KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ fields;
};
struct KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Array {
  struct KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ThrowAnimationType_ {
  struct IEnumerable_1_Moon_ThrowAnimationType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SeinHold_ThrowAnimationSet_ {
  struct IEnumerable_1_SeinHold_ThrowAnimationSet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinInvincibility___Fields {
  bool HasState;
  struct SeinInvincibility * State;
};
struct CharacterStateWrapper_1_SeinInvincibility_ {
  struct CharacterStateWrapper_1_SeinInvincibility___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinInvincibility___Fields fields;
};
struct SeinInvincibility__Fields {
  struct CharacterState__Fields _;
  float GainLevelInvincibilityDuration;
  struct LegacyAnimator * LowHealthAnimator;
};
struct SeinInvincibility {
  struct SeinInvincibility__Class *klass;
  struct MonitorData *monitor;
  struct SeinInvincibility__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinPushAgainstWall___Fields {
  bool HasState;
  struct SeinPushAgainstWall * State;
};
struct CharacterStateWrapper_1_SeinPushAgainstWall_ {
  struct CharacterStateWrapper_1_SeinPushAgainstWall___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinPushAgainstWall___Fields fields;
};
struct SeinPushAgainstWall__Fields {
  struct CharacterState__Fields _;
  struct MoonAnimation * Idle;
  struct MoonAnimation * PushAgainstWall;
  struct Func_1_Boolean_ * m_shouldPushKeepPlaying;
};
struct SeinPushAgainstWall {
  struct SeinPushAgainstWall__Class *klass;
  struct MonitorData *monitor;
  struct SeinPushAgainstWall__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinStandingOnEdge___Fields {
  bool HasState;
  struct SeinStandingOnEdge * State;
};
struct CharacterStateWrapper_1_SeinStandingOnEdge_ {
  struct CharacterStateWrapper_1_SeinStandingOnEdge___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinStandingOnEdge___Fields fields;
};
struct SeinStandingOnEdge__Fields {
  struct CharacterState__Fields _;
  float Distance;
  struct MoonAnimation * FacingEdge;
  struct MoonAnimation * FacingEdgeBackwards;
  bool StandingOnEdgeBackwards;
  bool StandingOnEdgeForwards;
  bool m_lastFrameState;
  int32_t m_onEdgeBackReqId;
  int32_t m_onEdgeForwReqId;
};
struct SeinStandingOnEdge {
  struct SeinStandingOnEdge__Class *klass;
  struct MonitorData *monitor;
  struct SeinStandingOnEdge__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinLever___Fields {
  bool HasState;
  struct SeinLever * State;
};
struct CharacterStateWrapper_1_SeinLever_ {
  struct CharacterStateWrapper_1_SeinLever___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinLever___Fields fields;
};
struct SeinLever__Fields {
  struct CharacterState__Fields _;
  struct MessageProvider * PressToGrabMessage;
  struct MessageProvider * PressLeftRightMessage;
  struct ILever * m_lever;
  bool m_moveSeinPosition;
  float m_seinTargetPositionX;
  float m_seinSlidingTimeLeft;
  struct Vector3 m_seinSlidingOrigPos;
  struct MessageBox * m_pressToGrabHint;
  struct MessageBox * m_pressLeftRightHint;
  float m_releaseOnInputLockTimer;
  struct ILever * m_stressTestLever;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct SeinLever {
  struct SeinLever__Class *klass;
  struct MonitorData *monitor;
  struct SeinLever__Fields fields;
};
struct ILever {
  struct ILever__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinFootsteps___Fields {
  bool HasState;
  struct SeinFootsteps * State;
};
struct CharacterStateWrapper_1_SeinFootsteps_ {
  struct CharacterStateWrapper_1_SeinFootsteps___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinFootsteps___Fields fields;
};
struct SeinFootsteps__Fields {
  struct CharacterState__Fields _;
  struct GameObject * DustParticlesPrefab;
  struct MaterialBasedResourceMap * EffectsMap;
  struct AnimationCurve * SoundsPerSecondOverSpeed;
  float SoundsPerSecondWhenGrabbing;
  float MinSpeedForFootsteps;
  struct Transform * FootstepVFXHolder;
  float m_nextStepTime;
  struct MoonTimeline * m_currentFootstepVFX;
  enum SurfaceMaterialType__Enum m_currentFootstepSurfaceMaterial;
  struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ * m_footstepVFX;
  struct PlatformingFXFunctionality * m_fxFunctionality;
};
struct SeinFootsteps {
  struct SeinFootsteps__Class *klass;
  struct MonitorData *monitor;
  struct SeinFootsteps__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinInteraction___Fields {
  bool HasState;
  struct SeinInteraction * State;
};
struct CharacterStateWrapper_1_SeinInteraction_ {
  struct CharacterStateWrapper_1_SeinInteraction___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinInteraction___Fields fields;
};
struct SeinInteraction__Fields {
  struct CharacterState__Fields _;
  struct MoonAnimation * PickUpTorch;
  struct MoonAnimation * IdleListenAnimation;
  struct MoonAnimation * ReceiveMap;
  struct GameObject * KeystoneProjectile;
  struct Event_1 * ThrowSoundEvent;
  struct SeinInteraction_ThrowKeystoneSettings__Array * ThrowKeyStoneSetups;
  struct SeinInteraction_ThrowKeystoneSettings__Array * TandemThrowKeyStoneSetups;
  struct HorizontalPlatformMovementSettings * ThrowKeystoneMovementSettings;
  float AirThrowJumpSpeedY;
  float ThresholdSpeedToApplyJumpY;
  float KeystoneSpeed;
  struct AnimationCurve * KeystoneTrajectoryX;
  struct AnimationCurve * KeystoneTrajectoryY;
  struct Vector2 Variance;
  int32_t m_keystoneTimelineIndex;
  bool m_isInNPCInteraction;
  struct List_1_SeinInteraction_ThrownKeystone_ * m_thrownKeystones;
  bool m_spriteMirrorLock;
  struct ICharacterInteractable * m_currentInteractable;
  struct ActiveAnimationHandle m_activeAnimation;
  struct MessageBox * m_interactionHintMessageBox;
  struct Action * m_onFinishThrow;
  int32_t StonesBeingThrown;
};}