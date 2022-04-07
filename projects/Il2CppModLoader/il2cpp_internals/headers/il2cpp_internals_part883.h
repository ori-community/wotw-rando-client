namespace app {

struct RecorderOutputAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
  bool IsOutputtingScreenshots;
  struct Action_1_Int32_ * onComplete;
  bool m_hideUi;
  bool m_spawnEnemies;
  struct String * m_shotName;
  int32_t m_crossFadeTime;
  bool m_flipInX;
  bool m_scenarioMode;
  bool m_shouldRecord;
  struct RecorderSettings * m_settings;
  float m_preRecordFadeTime;
};
struct RecorderOutputAnimatorEntity {
  struct RecorderOutputAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct RecorderOutputAnimatorEntity__Fields fields;
};
struct RecorderOutputAnimatorEntity__VTable {
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
  VirtualInvokeData get_ShotName;
  VirtualInvokeData get_InstanceId;
  VirtualInvokeData get_SpawnEnemies;
};
struct RecorderOutputAnimatorEntity__StaticFields {
  bool EnableRecording;
  int32_t FPS;
};
struct RecorderOutputAnimatorEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderOutputAnimatorEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderOutputAnimatorEntity__VTable vtable;
};

struct __declspec(align(8)) CaptureData__Fields {
  int32_t m_capturedFrames;
  int32_t m_crossFadeTime;
  struct String * m_shotName;
  bool m_flipInX;
};
struct CaptureData {
  struct CaptureData__Class *klass;
  struct MonitorData *monitor;
  struct CaptureData__Fields fields;
};
struct CaptureData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CaptureData__StaticFields {
};
struct CaptureData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CaptureData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CaptureData__VTable vtable;
};

struct SpriteTransparencyTweenAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_UnityEngine_GameObject_ * Target;
  struct MoonFloat * LocalStartAlpha;
  struct MoonFloat * LocalEndAlpha;
  struct MoonFloat * Speed;
  float m_currentStartAlpha;
  float m_currentEndAlpha;
  bool m_isFinished;
  struct GameObject * m_targetGameObject;
  struct SpriteRenderer * m_spriteRenderer;
  struct MoveTowardsFloatTweenable * m_tweenColorAlpha;
};
struct SpriteTransparencyTweenAnimator {
  struct SpriteTransparencyTweenAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SpriteTransparencyTweenAnimator__Fields fields;
};
struct SpriteTransparencyTweenAnimator__VTable {
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
  VirtualInvokeData HasFinished;
  VirtualInvokeData ApproximateEvent;
  VirtualInvokeData get_ExternalTarget;
  VirtualInvokeData OnEntityCreated;
};
struct SpriteTransparencyTweenAnimator__StaticFields {
};
struct SpriteTransparencyTweenAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteTransparencyTweenAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteTransparencyTweenAnimator__VTable vtable;
};

struct RemoveSpriteAnimationPlayerFromSwitchBuilds__Fields {
  struct MonoBehaviour__Fields _;
};
struct RemoveSpriteAnimationPlayerFromSwitchBuilds {
  struct RemoveSpriteAnimationPlayerFromSwitchBuilds__Class *klass;
  struct MonitorData *monitor;
  struct RemoveSpriteAnimationPlayerFromSwitchBuilds__Fields fields;
};
struct RemoveSpriteAnimationPlayerFromSwitchBuilds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeStrip;
  VirtualInvokeData DoStrip;
};
struct RemoveSpriteAnimationPlayerFromSwitchBuilds__StaticFields {
};
struct RemoveSpriteAnimationPlayerFromSwitchBuilds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoveSpriteAnimationPlayerFromSwitchBuilds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoveSpriteAnimationPlayerFromSwitchBuilds__VTable vtable;
};

struct SpriteAnimationPlayer__Fields {
  struct TimelineEntity__Fields _;
  bool HideWhenNotPlaying;
  bool UseSpriteSpaceUvs;
  float Speed;
  struct AnimationMeshingSettings * MeshSettings;
  struct AtlasSpriteTextureBinder * m_binder;
  bool m_useSpriteSpaceUvs;
  struct Renderer * m_renderer;
  bool m_editorEnabled;
  struct Mesh * m_mesh;
  struct TextureAnimation * DefaultAnimation;
  struct GameObject * DestroyTargetOnAnimationEnd;
  struct TextureAnimator * m_animator;
  struct SoundProvider * AnimationStartSound;
  struct Action * OnAnimationEndEvent;
  struct ActionMethod * AnimationEndAction;
  float PlaybackTime;
  struct MeshFilter * m_meshFilter;
  bool _HasAnimationEndedTriggered_k__BackingField;
  float m_hideCooldown;
  struct AtlasSpriteTexture * m_currentAtlasSpriteTexture;
  float m_lastTime;
  struct TextureAnimation * m_lastAnimation;
};
struct SpriteAnimationPlayer {
  struct SpriteAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct SpriteAnimationPlayer__Fields fields;
};
struct SpriteAnimationPlayer__VTable {
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
struct SpriteAnimationPlayer__StaticFields {
};
struct SpriteAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteAnimationPlayer__VTable vtable;
};

struct SpriteAnimationPlayer_c {
  struct SpriteAnimationPlayer_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpriteAnimationPlayer_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpriteAnimationPlayer_c__StaticFields {
  struct SpriteAnimationPlayer_c * __9;
  struct Action * __9__54_0;
};
struct SpriteAnimationPlayer_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteAnimationPlayer_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteAnimationPlayer_c__VTable vtable;
};

enum AlphaBlendModeEntity_AlphaBlendTargetType__Enum : int32_t {
  AlphaBlendModeEntity_AlphaBlendTargetType__Enum_Generic = 0,
  AlphaBlendModeEntity_AlphaBlendTargetType__Enum_Ori = 1,
};
struct AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlphaBlendModeEntity_AlphaBlendTargetType__Enum value;
};
struct AlphaBlendModeEntity__Fields {
  struct TimelineEntity__Fields _;
  enum AlphaBlendModeEntity_AlphaBlendTargetType__Enum TargetType;
  struct MoonReference_1_IAlphaBlendModeController_ * Target;
  struct SeinController3D * m_seinController3D;
  struct IAlphaBlendModeController * m_resolvedGenericTarget;
  float m_time;
};
struct AlphaBlendModeEntity {
  struct AlphaBlendModeEntity__Class *klass;
  struct MonitorData *monitor;
  struct AlphaBlendModeEntity__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IAlphaBlendModeController___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IAlphaBlendModeController_ * m_cachedProxyType;
  struct IAlphaBlendModeController * m_volatileValue;
};
struct MoonReference_1_IAlphaBlendModeController_ {
  struct MoonReference_1_IAlphaBlendModeController___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IAlphaBlendModeController___Fields fields;
};
struct IMoonType_1_IAlphaBlendModeController_ {
  struct IMoonType_1_IAlphaBlendModeController___Class *klass;
  struct MonitorData *monitor;
};
struct IAlphaBlendModeController {
  struct IAlphaBlendModeController__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_IAlphaBlendModeController___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IAlphaBlendModeController___StaticFields {
};
struct IMoonType_1_IAlphaBlendModeController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IAlphaBlendModeController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IAlphaBlendModeController___VTable vtable;
};
struct IAlphaBlendModeController__VTable {
  VirtualInvokeData get_OpaqueObject;
  VirtualInvokeData get_AlphaBlendObject;
};
struct IAlphaBlendModeController__StaticFields {
};
struct IAlphaBlendModeController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IAlphaBlendModeController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IAlphaBlendModeController__VTable vtable;
};
struct MoonReference_1_IAlphaBlendModeController___VTable {
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
struct MoonReference_1_IAlphaBlendModeController___StaticFields {
};
struct MoonReference_1_IAlphaBlendModeController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IAlphaBlendModeController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IAlphaBlendModeController___VTable vtable;
};
struct AlphaBlendModeEntity__VTable {
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
struct AlphaBlendModeEntity__StaticFields {
};
struct AlphaBlendModeEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AlphaBlendModeEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AlphaBlendModeEntity__VTable vtable;
};

struct CameraSpeedAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct AnimationCurve * Curve;
  bool RevertValueOnStop;
  struct GameplayCamera * m_gameplayCamera;
  float m_time;
  float m_valueOnStart;
};
struct CameraSpeedAnimator {
  struct CameraSpeedAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CameraSpeedAnimator__Fields fields;
};
struct CameraSpeedAnimator__VTable {
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
struct CameraSpeedAnimator__StaticFields {
};
struct CameraSpeedAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraSpeedAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraSpeedAnimator__VTable vtable;
};

struct GameplayToCinematicEntity_c {
  struct GameplayToCinematicEntity_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_3_Single_FloatProviderZone_Single___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_3_Single_FloatProviderZone_Single_ {
  struct Func_3_Single_FloatProviderZone_Single___Class *klass;
  struct MonitorData *monitor;
  struct Func_3_Single_FloatProviderZone_Single___Fields fields;
};
struct Func_3_Single_FloatProviderZone_Single___VTable {
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
struct Func_3_Single_FloatProviderZone_Single___StaticFields {
};
struct Func_3_Single_FloatProviderZone_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_3_Single_FloatProviderZone_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_3_Single_FloatProviderZone_Single___VTable vtable;
};
struct GameplayToCinematicEntity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameplayToCinematicEntity_c__StaticFields {
  struct GameplayToCinematicEntity_c * __9;
  struct Func_3_Single_FloatProviderZone_Single_ * __9__15_0;
};
struct GameplayToCinematicEntity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameplayToCinematicEntity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameplayToCinematicEntity_c__VTable vtable;
};

struct MoveCameraToPlayerAnimator__Fields {
  struct TimelineEntity__Fields _;
  float duration;
};
struct MoveCameraToPlayerAnimator {
  struct MoveCameraToPlayerAnimator__Class *klass;
  struct MonitorData *monitor;
  struct MoveCameraToPlayerAnimator__Fields fields;
};
struct MoveCameraToPlayerAnimator__VTable {
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
struct MoveCameraToPlayerAnimator__StaticFields {
};
struct MoveCameraToPlayerAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveCameraToPlayerAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveCameraToPlayerAnimator__VTable vtable;
};

struct MoveCameraToPointAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_UnityEngine_Transform_ * Target;
  float AutoDistance;
  float ZoomOffset;
  bool IgnoreScrollLock;
  float WideScreenAdjustment;
  float duration;
  struct Transform * m_targetTransform;
};
struct MoveCameraToPointAnimator {
  struct MoveCameraToPointAnimator__Class *klass;
  struct MonitorData *monitor;
  struct MoveCameraToPointAnimator__Fields fields;
};
struct MoveCameraToPointAnimator__VTable {
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
  VirtualInvokeData GetTransformTarget;
  VirtualInvokeData get_ExternalTarget;
  VirtualInvokeData OnEntityCreated;
};
struct MoveCameraToPointAnimator__StaticFields {
};
struct MoveCameraToPointAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveCameraToPointAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveCameraToPointAnimator__VTable vtable;
};

struct CameraChaseTargetSetAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_UnityEngine_Transform_ * TargetTransform;
  bool MoveInstantly;
  bool Revert;
  struct Transform * m_originalTarget;
};
struct CameraChaseTargetSetAnimator {
  struct CameraChaseTargetSetAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CameraChaseTargetSetAnimator__Fields fields;
};
struct CameraChaseTargetSetAnimator__VTable {
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
  VirtualInvokeData OnEntityCreated;
};
struct CameraChaseTargetSetAnimator__StaticFields {
};
struct CameraChaseTargetSetAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraChaseTargetSetAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraChaseTargetSetAnimator__VTable vtable;
};

struct ColorAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_UnityEngine_GameObject_ * Target;
  bool AnimateChildren;
  struct MoonColor * TargetColor;
  bool Red;
  bool Green;
  bool Blue;
  bool Alpha;
  struct AnimationCurve * Curve;
  enum ColorAnimator_ColorType__Enum ColorProperty;
  float m_time;
  struct Renderer__Array * m_entries;
};
struct ColorAnimator {
  struct ColorAnimator__Class *klass;
  struct MonitorData *monitor;
  struct ColorAnimator__Fields fields;
};
struct ColorAnimator__VTable {
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
  VirtualInvokeData get_ExternalTarget;
  VirtualInvokeData OnEntityCreated;
};
struct ColorAnimator__StaticFields {
};
struct ColorAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorAnimator__VTable vtable;
};

struct ColorAnimatorSystem__Fields {
  struct MonoBehaviour__Fields _;
  bool _IsRunning_k__BackingField;
  struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ * m_statePool;
  struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array * m_colorTrackingDatas;
  struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ * m_rendererStates;
};
struct ColorAnimatorSystem {
  struct ColorAnimatorSystem__Class *klass;
  struct MonitorData *monitor;
  struct ColorAnimatorSystem__Fields fields;
};
struct __declspec(align(8)) Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
  struct ColorAnimatorSystem_RendererState__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
  struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
};
struct __declspec(align(8)) ColorAnimatorSystem_RendererState__Fields {
  enum UberShaderProperty_Color__Enum ColorProperty;
  int32_t InstanceID;
  struct Renderer * Renderer;
  struct Color OriginalColor;
  struct List_1_UnityEngine_Color_ * Requests;
};
struct ColorAnimatorSystem_RendererState {
  struct ColorAnimatorSystem_RendererState__Class *klass;
  struct MonitorData *monitor;
  struct ColorAnimatorSystem_RendererState__Fields fields;
};
struct ColorAnimatorSystem_RendererState__Array {
  struct ColorAnimatorSystem_RendererState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ColorAnimatorSystem_RendererState * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
  struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
  struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
};
struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array {
  struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ * vector[32];
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct ColorAnimatorSystem_RendererState * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
  struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
  struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
};}