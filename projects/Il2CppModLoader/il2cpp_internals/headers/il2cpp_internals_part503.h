namespace app {
struct SpitterEnemy__StaticFields {
};
struct SpitterEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpitterEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpitterEnemy__VTable vtable;
};
struct ColosseumSpitterEnemy__VTable {
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
  VirtualInvokeData OnTimedRespawn;
  VirtualInvokeData RegisterRespawnDelegate;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
  VirtualInvokeData GetHitStopAutoSuspendables;
  VirtualInvokeData OnHitStopStart;
  VirtualInvokeData OnHitStopEnd;
  VirtualInvokeData GetHitStopAutoSuspendables_1;
  VirtualInvokeData CanBeOptimized;
  VirtualInvokeData get_Position;
  VirtualInvokeData OnFreeze;
  VirtualInvokeData OnUnfreeze;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnHitStopStart_1;
  VirtualInvokeData OnHitStopEnd_1;
  VirtualInvokeData IPuppetBase_get_Animation;
  VirtualInvokeData get_Animator;
  VirtualInvokeData get_SoundHost;
};
struct ColosseumSpitterEnemy__StaticFields {
};
struct ColosseumSpitterEnemy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColosseumSpitterEnemy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColosseumSpitterEnemy__VTable vtable;
};

struct ColosseumTower__Fields {
  struct MonoBehaviour__Fields _;
  struct SpiritSentry * Sentry;
  struct ColosseumTower_SentryStats__Array * Levels;
  int32_t m_level;
};
struct ColosseumTower {
  struct ColosseumTower__Class *klass;
  struct MonitorData *monitor;
  struct ColosseumTower__Fields fields;
};
struct ColosseumTower_SentryStats {
  float ShotCooldownMax;
  float ShotCooldownMin;
  float AttackDistance;
  int32_t UpgradeCost;
};
struct ColosseumTower_SentryStats__Boxed {
  struct ColosseumTower_SentryStats__Class *klass;
  struct MonitorData *monitor;
  struct ColosseumTower_SentryStats fields;
};
struct ColosseumTower_SentryStats__Array {
  struct ColosseumTower_SentryStats__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ColosseumTower_SentryStats vector[32];
};
struct ColosseumTower_SentryStats__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColosseumTower_SentryStats__StaticFields {
};
struct ColosseumTower_SentryStats__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColosseumTower_SentryStats__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColosseumTower_SentryStats__VTable vtable;
};
struct ColosseumTower__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColosseumTower__StaticFields {
};
struct ColosseumTower__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColosseumTower__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColosseumTower__VTable vtable;
};

struct SetColosseumTimeAction__Fields {
  struct ActionMethod__Fields _;
  struct ColosseumTimer * Timer;
  float Seconds;
};
struct SetColosseumTimeAction {
  struct SetColosseumTimeAction__Class *klass;
  struct MonitorData *monitor;
  struct SetColosseumTimeAction__Fields fields;
};
struct SetColosseumTimeAction__VTable {
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
struct SetColosseumTimeAction__StaticFields {
};
struct SetColosseumTimeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetColosseumTimeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetColosseumTimeAction__VTable vtable;
};

struct UpgradeTowerAction__Fields {
  struct ActionMethod__Fields _;
  struct ColosseumTower * Tower;
};
struct UpgradeTowerAction {
  struct UpgradeTowerAction__Class *klass;
  struct MonitorData *monitor;
  struct UpgradeTowerAction__Fields fields;
};
struct UpgradeTowerAction__VTable {
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
struct UpgradeTowerAction__StaticFields {
};
struct UpgradeTowerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpgradeTowerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpgradeTowerAction__VTable vtable;
};

enum CinematicCharacterAnimator_Character__Enum : int32_t {
  CinematicCharacterAnimator_Character__Enum_Ori = 0,
  CinematicCharacterAnimator_Character__Enum_Ku = 1,
};
struct CinematicCharacterAnimator_Character__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CinematicCharacterAnimator_Character__Enum value;
};

struct __declspec(align(8)) TimelineCharacterPreviewManager_CharacterPreviewInstance__Fields {
  struct GameObject * GameObject;
  struct MoonAnimator * Animator;
};
struct TimelineCharacterPreviewManager_CharacterPreviewInstance {
  struct TimelineCharacterPreviewManager_CharacterPreviewInstance__Class *klass;
  struct MonitorData *monitor;
  struct TimelineCharacterPreviewManager_CharacterPreviewInstance__Fields fields;
};
struct TimelineCharacterPreviewManager_CharacterPreviewInstance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimelineCharacterPreviewManager_CharacterPreviewInstance__StaticFields {
};
struct TimelineCharacterPreviewManager_CharacterPreviewInstance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineCharacterPreviewManager_CharacterPreviewInstance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineCharacterPreviewManager_CharacterPreviewInstance__VTable vtable;
};

struct SeinController3D__Fields {
  struct MonoBehaviour__Fields _;
  struct Action_1_SeinController3D_EventId_ * OnAnimationEventCallback;
  struct Action_1_String_ * OnStringAnimationEventCallback;
  struct MoonAnimator * Animator;
  struct Transform * mirrorHolder;
  struct GameObject * modelGroup;
  struct GameObject * fadeModelGroup;
  struct Transform * followTrans;
  struct Transform * mirrorTrans;
  struct Transform * pelvisTrans;
  struct Transform * getItem;
  struct Transform * throwGrenade;
  struct Transform * rootPoint;
  struct Transform * weapon1Point;
  struct Transform * rightHandPoint;
  struct Transform * m_ItemSlotPalmL;
  struct Transform * itemSlotPalmR;
  struct Transform * LightsTransform;
  float TargetRootAngle;
  float RootAngleChangeSpeed;
  bool active;
  float AnimationMovementSpeed;
  float AnimationMovementSlope;
  float KeepRigAtOriginSpeed;
  struct Transform * CenterOfMassPoint;
  struct Transform * GroundPoint;
  struct PerspectiveRotationAdjustment * m_perspectiveAdjustment;
  float m_slopeTarget;
  float m_currentSlopeValue;
  float m_slopeUpdateDuration;
  float m_currentRootAngle;
  struct Transform * m_myTransform;
  bool m_isInstance;
  struct IPuppet * m_puppetMaster;
  int32_t m_direction;
  float m_mirrorHolderResetTimer;
  float m_mirrorHolderResetDuration;
  float m_fromRotation;
  bool m_hasEmissivity;
  struct Vector4 m_defaultEmissivity;
  struct Renderer * m_renderer;
  bool m_alphaBlendedHasEmissivity;
  struct Vector4 m_alphaBlendedDefaultEmissivity;
  struct Renderer * m_alphaBlendedRenderer;
  struct OriHeadIk * _OriHeadIk_k__BackingField;
};
struct SeinController3D {
  struct SeinController3D__Class *klass;
  struct MonitorData *monitor;
  struct SeinController3D__Fields fields;
};
struct Action_1_SeinController3D_EventId___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_SeinController3D_EventId_ {
  struct Action_1_SeinController3D_EventId___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_SeinController3D_EventId___Fields fields;
};
struct OriHeadIk__Fields {
  struct IKPostprocess__Fields _;
  float DontLookBackLimit;
  float LookLerpCoeff;
  struct Vector3 m_smoothedPos;
  struct Vector3 m_limitAxis;
  struct Nullable_1_UnityEngine_Vector3_ m_lookPosition;
  int32_t m_framesLeft;
  struct Vector3 m_stableOffset;
};
struct OriHeadIk {
  struct OriHeadIk__Class *klass;
  struct MonitorData *monitor;
  struct OriHeadIk__Fields fields;
};
struct Action_1_SeinController3D_EventId___VTable {
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
struct Action_1_SeinController3D_EventId___StaticFields {
};
struct Action_1_SeinController3D_EventId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_SeinController3D_EventId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_SeinController3D_EventId___VTable vtable;
};
struct OriHeadIk__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_RequiresOnUpdate;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData OnUpdate_1;
  VirtualInvokeData get_TotalWeight;
  VirtualInvokeData get_HasFinished;
  VirtualInvokeData get_Order;
  VirtualInvokeData OnPostEnable;
  VirtualInvokeData OnPostDisable;
  VirtualInvokeData OnAddedToAnimator;
  VirtualInvokeData OnRemovedFromAnimator;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData Process;
  VirtualInvokeData OnSceneGui;
};
struct OriHeadIk__StaticFields {
};
struct OriHeadIk__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriHeadIk__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriHeadIk__VTable vtable;
};
struct SeinController3D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStateMachineBehaviourEnter;
  VirtualInvokeData OnStateMachineBehaviourUpdate;
  VirtualInvokeData OnStateMachineBehaviourExit;
  VirtualInvokeData OnAnimationEvent;
  VirtualInvokeData OnAnimationEvent_1;
  VirtualInvokeData get_OpaqueObject;
  VirtualInvokeData get_AlphaBlendObject;
};
struct SeinController3D__StaticFields {
  bool DisableMoonAnimatorOptimizations;
  struct SeinController3D * instance;
};
struct SeinController3D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinController3D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinController3D__VTable vtable;
};

struct TimelineCharacterPreviewManager {
  struct TimelineCharacterPreviewManager__Class *klass;
  struct MonitorData *monitor;
};
struct TimelineCharacterPreviewManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimelineCharacterPreviewManager__StaticFields {
  struct TimelineCharacterPreviewManager_CharacterPreviewInstance * m_playerOriInstance;
  struct TimelineCharacterPreviewManager_CharacterPreviewInstance * m_playerKuInstance;
  struct GhostPlayer * m_ghostInstance;
  struct SeinController3D * m_previewSeinController3D;
};
struct TimelineCharacterPreviewManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineCharacterPreviewManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineCharacterPreviewManager__VTable vtable;
};

struct WeaponPreviewAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct Transform * WeaponRoot;
  enum WeaponJoint__Enum AttachTo;
  struct Transform * m_attachedJoint;
};
struct WeaponPreviewAnimator {
  struct WeaponPreviewAnimator__Class *klass;
  struct MonitorData *monitor;
  struct WeaponPreviewAnimator__Fields fields;
};
struct WeaponPreviewAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct WeaponPreviewAnimator__StaticFields {
};
struct WeaponPreviewAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponPreviewAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponPreviewAnimator__VTable vtable;
};

struct CutsceneTransition__Fields {
  struct MonoBehaviour__Fields _;
  struct CutsceneState * NewState;
  struct CutsceneState * m_parentState;
};
struct CutsceneTransition {
  struct CutsceneTransition__Class *klass;
  struct MonitorData *monitor;
  struct CutsceneTransition__Fields fields;
};
struct CutsceneButtonPressedTransition__Fields {
  struct CutsceneTransition__Fields _;
  struct List_1_Core_Input_Button_ * ButtonsOnPressed;
  struct List_1_Core_Input_Button_ * ButtonsOnRelease;
  struct List_1_Core_Input_Button_ * ButtonsPressed;
  struct List_1_Core_Input_Button_ * ButtonsReleased;
};
struct CutsceneButtonPressedTransition {
  struct CutsceneButtonPressedTransition__Class *klass;
  struct MonitorData *monitor;
  struct CutsceneButtonPressedTransition__Fields fields;
};
struct CutsceneState__Fields {
  struct MonoBehaviour__Fields _;
  struct CutsceneController * Parent;
  struct HashSet_1_CutsceneTransition_ * Transitions;
};
struct CutsceneState {
  struct CutsceneState__Class *klass;
  struct MonitorData *monitor;
  struct CutsceneState__Fields fields;
};
struct CutsceneController__Fields {
  struct MonoBehaviour__Fields _;
  struct CutsceneState * CurrentState;
  float CurrentStateTime;
  struct SeinCharacter * m_cutsceneSein;
  bool m_foundSein;
};
struct CutsceneController {
  struct CutsceneController__Class *klass;
  struct MonitorData *monitor;
  struct CutsceneController__Fields fields;
};
struct __declspec(align(8)) HashSet_1_CutsceneTransition___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_CutsceneTransition___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_CutsceneTransition_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_CutsceneTransition_ {
  struct HashSet_1_CutsceneTransition___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_CutsceneTransition___Fields fields;
};
struct HashSet_1_T_Slot_CutsceneTransition_ {
  int32_t hashCode;
  int32_t next;
  struct CutsceneTransition * value;
};
struct HashSet_1_T_Slot_CutsceneTransition___Boxed {
  struct HashSet_1_T_Slot_CutsceneTransition___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_CutsceneTransition_ fields;
};
struct HashSet_1_T_Slot_CutsceneTransition___Array {
  struct HashSet_1_T_Slot_CutsceneTransition___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_CutsceneTransition_ vector[32];
};
struct IEqualityComparer_1_CutsceneTransition_ {
  struct IEqualityComparer_1_CutsceneTransition___Class *klass;
  struct MonitorData *monitor;
};
struct CutsceneTransition__Array {
  struct CutsceneTransition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CutsceneTransition * vector[32];
};
struct IEnumerator_1_CutsceneTransition_ {
  struct IEnumerator_1_CutsceneTransition___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_CutsceneTransition_ {
  struct IEnumerable_1_CutsceneTransition___Class *klass;
  struct MonitorData *monitor;
};
struct NormalBackwardsCutsceneState__Fields {
  struct CutsceneState__Fields _;
  struct TextureAnimationWithTransitions * Normal;
  struct TextureAnimationWithTransitions * Backwards;
  struct CutsceneState * Next;
  struct ActionMethod * ActionOnEnter;
  struct ActionMethod * ActionOnExit;
};
struct NormalBackwardsCutsceneState {
  struct NormalBackwardsCutsceneState__Class *klass;
  struct MonitorData *monitor;
  struct NormalBackwardsCutsceneState__Fields fields;
};
struct HoldRightCutsceneState__Fields {
  struct NormalBackwardsCutsceneState__Fields _;
  struct List_1_Core_Input_Button_ * OnPressButtonList;
};
struct HoldRightCutsceneState {
  struct HoldRightCutsceneState__Class *klass;
  struct MonitorData *monitor;
  struct HoldRightCutsceneState__Fields fields;
};
struct __declspec(align(8)) List_1_Core_Input_Button___Fields {
  struct Input_Button__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Core_Input_Button_ {
  struct List_1_Core_Input_Button___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Core_Input_Button___Fields fields;
};
struct Input_Button__Enum__Array {
  struct Input_Button__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum Input_Button__Enum vector[32];
};
struct IEnumerator_1_Core_Input_Button_ {
  struct IEnumerator_1_Core_Input_Button___Class *klass;
  struct MonitorData *monitor;
};
struct CutsceneController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CutsceneController__StaticFields {
};
struct CutsceneController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneController__VTable vtable;
};
struct HashSet_1_T_Slot_CutsceneTransition___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_CutsceneTransition___StaticFields {
};
struct HashSet_1_T_Slot_CutsceneTransition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_CutsceneTransition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_CutsceneTransition___VTable vtable;
};
struct IEqualityComparer_1_CutsceneTransition___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_CutsceneTransition___StaticFields {
};
struct IEqualityComparer_1_CutsceneTransition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_CutsceneTransition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_CutsceneTransition___VTable vtable;
};
struct IEnumerator_1_CutsceneTransition___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CutsceneTransition___StaticFields {
};
struct IEnumerator_1_CutsceneTransition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CutsceneTransition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CutsceneTransition___VTable vtable;
};
struct IEnumerable_1_CutsceneTransition___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_CutsceneTransition___StaticFields {
};
struct IEnumerable_1_CutsceneTransition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_CutsceneTransition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_CutsceneTransition___VTable vtable;
};
struct HashSet_1_CutsceneTransition___VTable {
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
struct HashSet_1_CutsceneTransition___StaticFields {
};
struct HashSet_1_CutsceneTransition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_CutsceneTransition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_CutsceneTransition___VTable vtable;
};
struct NormalBackwardsCutsceneState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData OnUpdate;
};
struct NormalBackwardsCutsceneState__StaticFields {
};
struct NormalBackwardsCutsceneState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NormalBackwardsCutsceneState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NormalBackwardsCutsceneState__VTable vtable;
};
struct IEnumerator_1_Core_Input_Button___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Core_Input_Button___StaticFields {
};
struct IEnumerator_1_Core_Input_Button___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Core_Input_Button___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Core_Input_Button___VTable vtable;
};
struct List_1_Core_Input_Button___VTable {
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
struct List_1_Core_Input_Button___StaticFields {
  struct Input_Button__Enum__Array * _emptyArray;
};
struct List_1_Core_Input_Button___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Core_Input_Button___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Core_Input_Button___VTable vtable;
};
struct HoldRightCutsceneState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData OnUpdate;
};
struct HoldRightCutsceneState__StaticFields {
};
struct HoldRightCutsceneState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HoldRightCutsceneState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HoldRightCutsceneState__VTable vtable;
};
struct CutsceneState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData OnUpdate;
};
struct CutsceneState__StaticFields {
};
struct CutsceneState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneState__VTable vtable;
};
struct CutsceneTransition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct CutsceneTransition__StaticFields {
};
struct CutsceneTransition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneTransition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneTransition__VTable vtable;
};
struct CutsceneButtonPressedTransition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ShouldTransition;
};
struct CutsceneButtonPressedTransition__StaticFields {
};
struct CutsceneButtonPressedTransition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneButtonPressedTransition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneButtonPressedTransition__VTable vtable;
};

struct CutsceneButtonPressedTransition_c {
  struct CutsceneButtonPressedTransition_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Core_Input_Button_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Core_Input_Button_Boolean_ {
  struct Func_2_Core_Input_Button_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Core_Input_Button_Boolean___Fields fields;
};
struct Func_2_Core_Input_Button_Boolean___VTable {
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
struct Func_2_Core_Input_Button_Boolean___StaticFields {
};
struct Func_2_Core_Input_Button_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Core_Input_Button_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Core_Input_Button_Boolean___VTable vtable;
};
struct CutsceneButtonPressedTransition_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CutsceneButtonPressedTransition_c__StaticFields {
  struct CutsceneButtonPressedTransition_c * __9;
  struct Func_2_Core_Input_Button_Boolean_ * __9__4_0;
  struct Func_2_Core_Input_Button_Boolean_ * __9__4_1;
  struct Func_2_Core_Input_Button_Boolean_ * __9__4_2;
  struct Func_2_Core_Input_Button_Boolean_ * __9__4_3;
};
struct CutsceneButtonPressedTransition_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneButtonPressedTransition_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneButtonPressedTransition_c__VTable vtable;
};

struct CutsceneTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct CutsceneController * Cutscene;
  struct CutsceneState * State;
  bool m_wasTriggered;
};
struct CutsceneTrigger {
  struct CutsceneTrigger__Class *klass;
  struct MonitorData *monitor;
  struct CutsceneTrigger__Fields fields;
};
struct CutsceneTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CutsceneTrigger__StaticFields {
};
struct CutsceneTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CutsceneTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CutsceneTrigger__VTable vtable;
};

struct MovingCutsceneState__Fields {
  struct CutsceneState__Fields _;
  struct TextureAnimationWithTransitions * Moving;
  struct TextureAnimationWithTransitions * Idle;
  bool m_enteringTransitionFinished;
  float ForceMoveLeftTime;
  struct GameObject__Array * BlockingMovingLeftZones;
};
struct MovingCutsceneState {
  struct MovingCutsceneState__Class *klass;
  struct MonitorData *monitor;
  struct MovingCutsceneState__Fields fields;
};
struct MovingCutsceneState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData OnUpdate;
};
struct MovingCutsceneState__StaticFields {
};
struct MovingCutsceneState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovingCutsceneState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovingCutsceneState__VTable vtable;
};

struct NightberryCutscene__Fields {
  struct CutsceneController__Fields _;
};
struct NightberryCutscene {
  struct NightberryCutscene__Class *klass;
  struct MonitorData *monitor;
  struct NightberryCutscene__Fields fields;
};
struct NightberryCutscene__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}