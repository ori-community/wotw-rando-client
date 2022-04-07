namespace app {

struct ActivateCharacterAction__Fields {
  struct ActionMethod__Fields _;
  bool Active;
};
struct ActivateCharacterAction {
  struct ActivateCharacterAction__Class *klass;
  struct MonitorData *monitor;
  struct ActivateCharacterAction__Fields fields;
};
struct ActivateCharacterAction__VTable {
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
struct ActivateCharacterAction__StaticFields {
};
struct ActivateCharacterAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivateCharacterAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivateCharacterAction__VTable vtable;
};

struct ActivateLaserAction__Fields {
  struct ActionMethod__Fields _;
  struct BlockableLaser * Laser;
  bool ShouldActivate;
  bool Save;
};
struct ActivateLaserAction {
  struct ActivateLaserAction__Class *klass;
  struct MonitorData *monitor;
  struct ActivateLaserAction__Fields fields;
};
struct ActivateLaserAction__VTable {
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
struct ActivateLaserAction__StaticFields {
};
struct ActivateLaserAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivateLaserAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivateLaserAction__VTable vtable;
};

struct ActivateMenuAction__Fields {
  struct ActionMethod__Fields _;
  struct CleverMenuItemSelectionManager * Target;
  bool Activate;
};
struct ActivateMenuAction {
  struct ActivateMenuAction__Class *klass;
  struct MonitorData *monitor;
  struct ActivateMenuAction__Fields fields;
};
struct ActivateMenuAction__VTable {
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
struct ActivateMenuAction__StaticFields {
};
struct ActivateMenuAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivateMenuAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivateMenuAction__VTable vtable;
};

struct ActivateOriAction__Fields {
  struct ActionMethod__Fields _;
  bool ShouldActivate;
};
struct ActivateOriAction {
  struct ActivateOriAction__Class *klass;
  struct MonitorData *monitor;
  struct ActivateOriAction__Fields fields;
};
struct ActivateOriAction__VTable {
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
struct ActivateOriAction__StaticFields {
};
struct ActivateOriAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivateOriAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivateOriAction__VTable vtable;
};

enum AnimatorAction_FindAnimatorsMode__Enum : int32_t {
  AnimatorAction_FindAnimatorsMode__Enum_GameObject = 0,
  AnimatorAction_FindAnimatorsMode__Enum_GameObjectAndChildren = 1,
  AnimatorAction_FindAnimatorsMode__Enum_SpecifyAnimators = 2,
};
struct AnimatorAction_FindAnimatorsMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimatorAction_FindAnimatorsMode__Enum value;
};
enum AnimatorAction_PlayMode__Enum : int32_t {
  AnimatorAction_PlayMode__Enum_Restart = 0,
  AnimatorAction_PlayMode__Enum_RestartReversed = 1,
  AnimatorAction_PlayMode__Enum_Reverse = 2,
  AnimatorAction_PlayMode__Enum_Stop = 3,
  AnimatorAction_PlayMode__Enum_Continue = 4,
  AnimatorAction_PlayMode__Enum_ContinueForward = 5,
  AnimatorAction_PlayMode__Enum_ContinueReversed = 6,
  AnimatorAction_PlayMode__Enum_StopAtStart = 7,
  AnimatorAction_PlayMode__Enum_StopAtEnd = 8,
};
struct AnimatorAction_PlayMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimatorAction_PlayMode__Enum value;
};
struct AnimatorAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * Target;
  enum AnimatorAction_FindAnimatorsMode__Enum AnimatorsMode;
  enum AnimatorAction_PlayMode__Enum Command;
  struct LegacyAnimator__Array * Animators;
  struct DelayedAction * m_delayedAction;
};
struct AnimatorAction {
  struct AnimatorAction__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorAction__Fields fields;
};
struct AnimatorAction__VTable {
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
struct AnimatorAction__StaticFields {
};
struct AnimatorAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorAction__VTable vtable;
};

struct AttachToRopeAction__Fields {
  struct ActionMethod__Fields _;
  struct AttachToRope * AttachToRope;
  struct Rope * Rope;
};
struct AttachToRopeAction {
  struct AttachToRopeAction__Class *klass;
  struct MonitorData *monitor;
  struct AttachToRopeAction__Fields fields;
};
struct AttachToRope__Fields {
  struct MonoBehaviour__Fields _;
  struct Rope * RopeToAttachTo;
  struct Vector3 AttachmentPointOffset;
  bool UseDebug;
  bool AllowRotation;
  float RotationSpring;
  float RotationDampening;
  bool IsManagedByPhysicsSystemManager;
  struct ConfigurableJoint * m_generatedConfigurableJoint;
  bool m_shouldBeAttachedAfterLoading;
};
struct AttachToRope {
  struct AttachToRope__Class *klass;
  struct MonitorData *monitor;
  struct AttachToRope__Fields fields;
};
struct AttachToRope__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttachToRope__StaticFields {
};
struct AttachToRope__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachToRope__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachToRope__VTable vtable;
};
struct AttachToRopeAction__VTable {
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
struct AttachToRopeAction__StaticFields {
};
struct AttachToRopeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachToRopeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachToRopeAction__VTable vtable;
};

struct BabySeinRunToTargetAction__Fields {
  struct PerformingAction__Fields _;
  struct Transform * TargetPosition;
  bool m_isPerforming;
};
struct BabySeinRunToTargetAction {
  struct BabySeinRunToTargetAction__Class *klass;
  struct MonitorData *monitor;
  struct BabySeinRunToTargetAction__Fields fields;
};
struct BabySeinRunToTargetAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct BabySeinRunToTargetAction__StaticFields {
};
struct BabySeinRunToTargetAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabySeinRunToTargetAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabySeinRunToTargetAction__VTable vtable;
};

struct __declspec(align(8)) BabySeinRunToTargetAction_Perform_d_6__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct BabySeinRunToTargetAction * __4__this;
};
struct BabySeinRunToTargetAction_Perform_d_6 {
  struct BabySeinRunToTargetAction_Perform_d_6__Class *klass;
  struct MonitorData *monitor;
  struct BabySeinRunToTargetAction_Perform_d_6__Fields fields;
};
struct BabySeinRunToTargetAction_Perform_d_6__VTable {
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
struct BabySeinRunToTargetAction_Perform_d_6__StaticFields {
};
struct BabySeinRunToTargetAction_Perform_d_6__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabySeinRunToTargetAction_Perform_d_6__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabySeinRunToTargetAction_Perform_d_6__VTable vtable;
};

enum BaseAnimatorAction_FindAnimatorsMode__Enum : int32_t {
  BaseAnimatorAction_FindAnimatorsMode__Enum_GameObject = 0,
  BaseAnimatorAction_FindAnimatorsMode__Enum_GameObjectAndChildren = 1,
  BaseAnimatorAction_FindAnimatorsMode__Enum_SpecifyAnimators = 2,
};
struct BaseAnimatorAction_FindAnimatorsMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BaseAnimatorAction_FindAnimatorsMode__Enum value;
};
enum BaseAnimatorAction_PlayMode__Enum : int32_t {
  BaseAnimatorAction_PlayMode__Enum_Restart = 0,
  BaseAnimatorAction_PlayMode__Enum_RestartReversed = 1,
  BaseAnimatorAction_PlayMode__Enum_Reverse = 2,
  BaseAnimatorAction_PlayMode__Enum_Stop = 3,
  BaseAnimatorAction_PlayMode__Enum_Continue = 4,
  BaseAnimatorAction_PlayMode__Enum_ContinueForward = 5,
  BaseAnimatorAction_PlayMode__Enum_ContinueReversed = 6,
  BaseAnimatorAction_PlayMode__Enum_StopAtStart = 7,
  BaseAnimatorAction_PlayMode__Enum_StopAtEnd = 8,
  BaseAnimatorAction_PlayMode__Enum_RealContinueForward = 9,
  BaseAnimatorAction_PlayMode__Enum_RealContinueReversed = 10,
  BaseAnimatorAction_PlayMode__Enum_Pause = 11,
};
struct BaseAnimatorAction_PlayMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BaseAnimatorAction_PlayMode__Enum value;
};
struct BaseAnimatorAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * Target;
  enum BaseAnimatorAction_FindAnimatorsMode__Enum AnimatorsMode;
  enum BaseAnimatorAction_PlayMode__Enum Command;
  struct BaseAnimator__Array * Animators;
};
struct BaseAnimatorAction {
  struct BaseAnimatorAction__Class *klass;
  struct MonitorData *monitor;
  struct BaseAnimatorAction__Fields fields;
};
struct BaseAnimatorAction__VTable {
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
struct BaseAnimatorAction__StaticFields {
};
struct BaseAnimatorAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseAnimatorAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseAnimatorAction__VTable vtable;
};

struct BindAbilityButtonAction__Fields {
  struct ActionMethod__Fields _;
  enum AbilityType__Enum AbilityType;
  enum Input_Button__Enum Button;
};
struct BindAbilityButtonAction {
  struct BindAbilityButtonAction__Class *klass;
  struct MonitorData *monitor;
  struct BindAbilityButtonAction__Fields fields;
};
struct BindAbilityButtonAction__VTable {
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
struct BindAbilityButtonAction__StaticFields {
};
struct BindAbilityButtonAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BindAbilityButtonAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BindAbilityButtonAction__VTable vtable;
};

struct BreakPhysicsSystemAction__Fields {
  struct ActionMethod__Fields _;
  struct GameObject * partsContainer;
  struct PhysicalSystemManager * physicalManager;
  bool Save;
  struct LayerMask debrisLayer;
};
struct BreakPhysicsSystemAction {
  struct BreakPhysicsSystemAction__Class *klass;
  struct MonitorData *monitor;
  struct BreakPhysicsSystemAction__Fields fields;
};
struct BreakPhysicsSystemAction__VTable {
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
  VirtualInvokeData GetDynamicGraphicTarget;
};
struct BreakPhysicsSystemAction__StaticFields {
};
struct BreakPhysicsSystemAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BreakPhysicsSystemAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BreakPhysicsSystemAction__VTable vtable;
};

struct CacheBaseAnimatorAction__Fields {
  struct ActionMethod__Fields _;
  struct BaseAnimator * Animator;
};
struct CacheBaseAnimatorAction {
  struct CacheBaseAnimatorAction__Class *klass;
  struct MonitorData *monitor;
  struct CacheBaseAnimatorAction__Fields fields;
};
struct CacheBaseAnimatorAction__VTable {
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
struct CacheBaseAnimatorAction__StaticFields {
};
struct CacheBaseAnimatorAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CacheBaseAnimatorAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CacheBaseAnimatorAction__VTable vtable;
};

struct CameraShakeAction__Fields {
  struct ActionMethod__Fields _;
  struct CameraShake * ShakeCamera;
};
struct CameraShakeAction {
  struct CameraShakeAction__Class *klass;
  struct MonitorData *monitor;
  struct CameraShakeAction__Fields fields;
};
struct CameraShakeAction__VTable {
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
struct CameraShakeAction__StaticFields {
};
struct CameraShakeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraShakeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraShakeAction__VTable vtable;
};

struct CanSkipCreditsCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanSkipCreditsCondition {
  struct CanSkipCreditsCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanSkipCreditsCondition__Fields fields;
};
struct CanSkipCreditsCondition__VTable {
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
struct CanSkipCreditsCondition__StaticFields {
};
struct CanSkipCreditsCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanSkipCreditsCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanSkipCreditsCondition__VTable vtable;
};

enum LeverDirections__Enum : int32_t {
  LeverDirections__Enum_Left = 0,
  LeverDirections__Enum_Middle = 1,
  LeverDirections__Enum_Right = 2,
};
struct LeverDirections__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LeverDirections__Enum value;
};
struct ChangeLeverDirectionAction__Fields {
  struct ActionWithDuration__Fields _;
  struct LegacyLever * LegacyLever;
  enum LeverDirections__Enum NewLeverDirection;
  float _Duration_k__BackingField;
};
struct ChangeLeverDirectionAction {
  struct ChangeLeverDirectionAction__Class *klass;
  struct MonitorData *monitor;
  struct ChangeLeverDirectionAction__Fields fields;
};
enum LeverMode__Enum : int32_t {
  LeverMode__Enum_LeftRightToggle = 0,
  LeverMode__Enum_LeftRightGrab = 1,
  LeverMode__Enum_LeftMiddleRightSpring = 2,
  LeverMode__Enum_LeftMiddleRightStay = 3,
};
struct LeverMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LeverMode__Enum value;
};
struct LegacyLever__Fields {
  struct RecordableObject__Fields _;
  bool _InRange_k__BackingField;
  bool _IsGrabbed_k__BackingField;
  float LeverRadius;
  bool SnapToGround;
  enum LeverDirections__Enum LeverDirection;
  enum LeverDirections__Enum _OriginalDirection_k__BackingField;
  struct LegacyAnimator__Array * HighlightAnimators;
  struct Condition_1 * CanGrabCondition;
  struct Bounds m_bounds;
  bool m_insideFrustum;
  enum LeverMode__Enum LeverKind;
  struct SoundHost * m_soundHost;
  struct Transform * m_transform;
  bool m_autoadjustedtoGroundLevel;
  float m_grabbedTime;
  float HandleRotationSpeed;
  float HandleRotationAmount;
  float MaxAngularSpeed;
  struct Action * m_grabLeverEvent;
  struct Action * m_releaseLeverEvent;
  struct Action * m_leverLeftEvent;
  struct Action * m_leverRightEvent;
  struct Action * m_leverLeftFailedEvent;
  struct Action * m_leverRightFailedEvent;
  struct Action * m_leverMiddleEvent;
  struct Action * m_leverEnterEvent;
  struct Action * m_leverExitEvent;
  struct Func_1_Boolean_ * m_canLeverLeft;
  struct Func_1_Boolean_ * m_canLeverRight;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct LegacyLever {
  struct LegacyLever__Class *klass;
  struct MonitorData *monitor;
  struct LegacyLever__Fields fields;
};
struct LegacyLever__VTable {
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
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData get_InRange;
  VirtualInvokeData get_CanBeGrabbed;
  VirtualInvokeData get_CanTurn;
  VirtualInvokeData get_IsGrabbed;
  VirtualInvokeData get_Radius;
  VirtualInvokeData get_Transform;
  VirtualInvokeData get_SeinPositionOffset;
  VirtualInvokeData get_Position;
  VirtualInvokeData get_LeverType;
  VirtualInvokeData get_OriginalDirection;
  VirtualInvokeData get_Direction;
  VirtualInvokeData SetLeverDirection;
  VirtualInvokeData PlayLeverAnimation;
  VirtualInvokeData OnPushLeverLeft;
  VirtualInvokeData OnPushLeverMiddle;
  VirtualInvokeData OnPushLeverRight;
  VirtualInvokeData OnGrabLever;
  VirtualInvokeData OnReleaseLever;
  VirtualInvokeData get_CanLeverLeft;
  VirtualInvokeData set_CanLeverLeft;
  VirtualInvokeData get_CanLeverRight;
  VirtualInvokeData set_CanLeverRight;
  VirtualInvokeData get_NeedsToBeOnGround;
  VirtualInvokeData OnEnterLever;
  VirtualInvokeData OnExitLever;
  VirtualInvokeData GetGroundLevelOffset;
  VirtualInvokeData get_LeverEnterEvent;
  VirtualInvokeData set_LeverEnterEvent;
  VirtualInvokeData get_LeverExitEvent;
  VirtualInvokeData set_LeverExitEvent;
  VirtualInvokeData get_GrabLeverEvent;
  VirtualInvokeData set_GrabLeverEvent;
  VirtualInvokeData get_ReleaseLeverEvent;
  VirtualInvokeData set_ReleaseLeverEvent;
  VirtualInvokeData get_LeverLeftEvent;
  VirtualInvokeData set_LeverLeftEvent;
  VirtualInvokeData get_LeverRightEvent;
  VirtualInvokeData set_LeverRightEvent;
  VirtualInvokeData get_LeverLeftFailedEvent;
  VirtualInvokeData set_LeverLeftFailedEvent;
  VirtualInvokeData get_LeverRightFailedEvent;
  VirtualInvokeData set_LeverRightFailedEvent;
  VirtualInvokeData get_LeverMiddleEvent;
  VirtualInvokeData set_LeverMiddleEvent;
  VirtualInvokeData get_InsideFrustum_1;
};
struct LegacyLever__StaticFields {
};
struct LegacyLever__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyLever__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyLever__VTable vtable;
};
struct ChangeLeverDirectionAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData set_Duration;
  VirtualInvokeData get_Duration;
};
struct ChangeLeverDirectionAction__StaticFields {
};
struct ChangeLeverDirectionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeLeverDirectionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeLeverDirectionAction__VTable vtable;
};

struct ChangeSoundProviderInMetaDataSoundPlayerAction__Fields {
  struct ActionMethod__Fields _;
  struct List_1_NodeSoundPlayerPair_ * NodeSoundPlayerPair;
  struct AnimationMetaDataBasedSoundPlayer * MetaDataBasedSoundPlayer;
  bool ShouldUseSeinsMetaDataBasedSoundPlayer;
};
struct ChangeSoundProviderInMetaDataSoundPlayerAction {
  struct ChangeSoundProviderInMetaDataSoundPlayerAction__Class *klass;
  struct MonitorData *monitor;
  struct ChangeSoundProviderInMetaDataSoundPlayerAction__Fields fields;
};
struct __declspec(align(8)) List_1_NodeSoundPlayerPair___Fields {
  struct NodeSoundPlayerPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_NodeSoundPlayerPair_ {
  struct List_1_NodeSoundPlayerPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_NodeSoundPlayerPair___Fields fields;
};
struct __declspec(align(8)) NodeSoundPlayerPair__Fields {
  struct String * NodeName;
  struct Varying2DSoundProvider * SoundProvider;
};
struct NodeSoundPlayerPair {
  struct NodeSoundPlayerPair__Class *klass;
  struct MonitorData *monitor;
  struct NodeSoundPlayerPair__Fields fields;
};
struct NodeSoundPlayerPair__Array {
  struct NodeSoundPlayerPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NodeSoundPlayerPair * vector[32];
};
struct IEnumerator_1_NodeSoundPlayerPair_ {
  struct IEnumerator_1_NodeSoundPlayerPair___Class *klass;
  struct MonitorData *monitor;
};
struct AnimationMetaDataBasedSoundPlayer__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimatorWithTransitions * Animator;
  struct List_1_NodeSoundPlayerPair_ * NodeSoundPlayerPairs;
  int32_t m_previousframe;
};
struct AnimationMetaDataBasedSoundPlayer {
  struct AnimationMetaDataBasedSoundPlayer__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMetaDataBasedSoundPlayer__Fields fields;
};
struct NodeSoundPlayerPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NodeSoundPlayerPair__StaticFields {
};
struct NodeSoundPlayerPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NodeSoundPlayerPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NodeSoundPlayerPair__VTable vtable;
};
struct IEnumerator_1_NodeSoundPlayerPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_NodeSoundPlayerPair___StaticFields {
};
struct IEnumerator_1_NodeSoundPlayerPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_NodeSoundPlayerPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_NodeSoundPlayerPair___VTable vtable;
};
struct List_1_NodeSoundPlayerPair___VTable {
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
struct List_1_NodeSoundPlayerPair___StaticFields {
  struct NodeSoundPlayerPair__Array * _emptyArray;
};
struct List_1_NodeSoundPlayerPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_NodeSoundPlayerPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_NodeSoundPlayerPair___VTable vtable;
};
struct AnimationMetaDataBasedSoundPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationMetaDataBasedSoundPlayer__StaticFields {
};
struct AnimationMetaDataBasedSoundPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationMetaDataBasedSoundPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationMetaDataBasedSoundPlayer__VTable vtable;
};
struct ChangeSoundProviderInMetaDataSoundPlayerAction__VTable {
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
struct ChangeSoundProviderInMetaDataSoundPlayerAction__StaticFields {
};
struct ChangeSoundProviderInMetaDataSoundPlayerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeSoundProviderInMetaDataSoundPlayerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeSoundProviderInMetaDataSoundPlayerAction__VTable vtable;
};

struct ChangeTargetToCurrentCharacterAction__Fields {
  struct ActionMethod__Fields _;
};
struct ChangeTargetToCurrentCharacterAction {
  struct ChangeTargetToCurrentCharacterAction__Class *klass;
  struct MonitorData *monitor;
  struct ChangeTargetToCurrentCharacterAction__Fields fields;
};
struct ChangeTargetToCurrentCharacterAction__VTable {
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
struct ChangeTargetToCurrentCharacterAction__StaticFields {
};
struct ChangeTargetToCurrentCharacterAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeTargetToCurrentCharacterAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeTargetToCurrentCharacterAction__VTable vtable;
};

struct ConfigureConfigurableJointAction__Fields {
  struct ActionMethod__Fields _;
  struct ConfigurableJoint * ConfigurableJoint;
  struct GameObject * ConfigurableJointGameObject;
  struct Rigidbody * ConnectedBody;
  enum ConfigurableJointMotion__Enum XMotion;
  enum ConfigurableJointMotion__Enum YMotion;
  enum ConfigurableJointMotion__Enum ZMotion;
  enum ConfigurableJointMotion__Enum AngularXMotion;
  enum ConfigurableJointMotion__Enum AngularYMotion;
  enum ConfigurableJointMotion__Enum AngularZMotion;
  float LinearLimitSprintSpring;
  float LinearLimitSprintDamper;
  float LinearLimitLimit;
  float LinearLimitBounciness;
  float LinearLimitContactDistance;
  float ZRotationSpringStiffness;
  float ZRotationSpringDamping;
  bool ShouldGenerateJoint;
  bool SetConnectedBody;
  bool SetXMotion;
  bool SetYMotion;
  bool SetZMotion;
  bool SetAngularXMotion;
  bool SetAngularYMotion;
  bool SetAngularZMotion;
  bool SetLinearLimitSpring;
  bool SetLinearLimit;
};
struct ConfigureConfigurableJointAction {
  struct ConfigureConfigurableJointAction__Class *klass;
  struct MonitorData *monitor;
  struct ConfigureConfigurableJointAction__Fields fields;
};
struct ConfigureConfigurableJointAction__VTable {
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
struct ConfigureConfigurableJointAction__StaticFields {
};
struct ConfigureConfigurableJointAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfigureConfigurableJointAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfigureConfigurableJointAction__VTable vtable;
};

struct CreateCheckpointAction__Fields {
  struct ActionMethod__Fields _;
  struct Vector2 RespawnPosition;
  bool SaveToDisk;
  bool UseCustomSequence;
  struct ActionSequence * CustomSaveSequence;
};
struct CreateCheckpointAction {
  struct CreateCheckpointAction__Class *klass;
  struct MonitorData *monitor;
  struct CreateCheckpointAction__Fields fields;
};}