namespace app {
struct UberWaterReflectionView__StaticFields {
  struct ShaderPassName passObject;
  struct Camera * reflectionCam;
  struct Transform * reflectionCamTransform;
  struct Material * m_blurMaterial;
  int32_t blurRT;
};
struct UberWaterReflectionView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberWaterReflectionView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberWaterReflectionView__VTable vtable;
};

struct UberWaterReflection {
  struct UberWaterReflection__Class *klass;
  struct MonitorData *monitor;
};
struct UberWaterReflection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberWaterReflection__StaticFields {
  struct UberWaterReflectionView * gameView;
  struct UberWaterReflectionView * sceneView;
};
struct UberWaterReflection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberWaterReflection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberWaterReflection__VTable vtable;
};

struct UberWaterReflectionView_ViewCamInfo {
  struct Vector3 pos;
  struct Vector3 euler;
  struct Matrix4x4 viewMatrix;
  struct Matrix4x4 projectionMatrix;
  struct Color backgroundColor;
  enum SortFlags__Enum sortFlags;
  enum DrawRendererSortMode__Enum sortMode;
  struct Vector3 cameraCustomSortAxis;
  struct RenderQueueRange renderQueueRange;
};
struct UberWaterReflectionView_ViewCamInfo__Boxed {
  struct UberWaterReflectionView_ViewCamInfo__Class *klass;
  struct MonitorData *monitor;
  struct UberWaterReflectionView_ViewCamInfo fields;
};
struct UberWaterReflectionView_ViewCamInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberWaterReflectionView_ViewCamInfo__StaticFields {
};
struct UberWaterReflectionView_ViewCamInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberWaterReflectionView_ViewCamInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberWaterReflectionView_ViewCamInfo__VTable vtable;
};

struct UberWaterReflectionView_c_DisplayClass21_0 {
  int32_t updateStride;
  int32_t currentFrame;
};
struct UberWaterReflectionView_c_DisplayClass21_0__Boxed {
  struct UberWaterReflectionView_c_DisplayClass21_0__Class *klass;
  struct MonitorData *monitor;
  struct UberWaterReflectionView_c_DisplayClass21_0 fields;
};
struct UberWaterReflectionView_c_DisplayClass21_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberWaterReflectionView_c_DisplayClass21_0__StaticFields {
};
struct UberWaterReflectionView_c_DisplayClass21_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberWaterReflectionView_c_DisplayClass21_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberWaterReflectionView_c_DisplayClass21_0__VTable vtable;
};

struct UberWaterReflectionView_PlaneData {
  struct Vector3 pos;
  struct Vector3 normal;
  struct Vector4 plane;
  float strength;
};
struct UberWaterReflectionView_PlaneData__Boxed {
  struct UberWaterReflectionView_PlaneData__Class *klass;
  struct MonitorData *monitor;
  struct UberWaterReflectionView_PlaneData fields;
};
struct UberWaterReflectionView_PlaneData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberWaterReflectionView_PlaneData__StaticFields {
};
struct UberWaterReflectionView_PlaneData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberWaterReflectionView_PlaneData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberWaterReflectionView_PlaneData__VTable vtable;
};

struct UberWaterSplash__Fields {
  struct MonoBehaviour__Fields _;
  bool AutoDeleteSplash;
  float SplashLifetime;
  struct AudioClip__Array * SplashClips;
  struct ParticleSystem * ParticleEmitter;
  struct AudioSource * m_audioSource;
};
struct UberWaterSplash {
  struct UberWaterSplash__Class *klass;
  struct MonitorData *monitor;
  struct UberWaterSplash__Fields fields;
};
struct SeinSplashInfo {
  float Power;
  struct Vector3 Velocity;
};
struct SeinSplashInfo__Boxed {
  struct SeinSplashInfo__Class *klass;
  struct MonitorData *monitor;
  struct SeinSplashInfo fields;
};
struct UberWaterSplash__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberWaterSplash__StaticFields {
};
struct UberWaterSplash__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberWaterSplash__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberWaterSplash__VTable vtable;
};
struct SeinSplashInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinSplashInfo__StaticFields {
};
struct SeinSplashInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinSplashInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinSplashInfo__VTable vtable;
};

struct BossHealthbar__Fields {
  struct MonoBehaviour__Fields _;
  struct FloatValueProvider * ValueProvider;
  struct BaseAnimator * MaxAnimator;
  struct BaseAnimator * MinAnimator;
  struct List_1_LegacyMaterialColorGradientAnimator_ * Gradients;
  struct List_1_UnityEngine_Renderer_ * m_renderers;
  float ValueChangeRate;
  float m_minValue;
  float m_maxValue;
  struct MoonTimeline * ShowTimeline;
  struct MoonTimeline * HideTimeline;
  bool ForceDefaultPosition;
  bool m_visible;
  struct Vector3 m_lastPosition;
};
struct BossHealthbar {
  struct BossHealthbar__Class *klass;
  struct MonitorData *monitor;
  struct BossHealthbar__Fields fields;
};
struct __declspec(align(8)) List_1_LegacyMaterialColorGradientAnimator___Fields {
  struct LegacyMaterialColorGradientAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyMaterialColorGradientAnimator_ {
  struct List_1_LegacyMaterialColorGradientAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyMaterialColorGradientAnimator___Fields fields;
};
struct LegacyMaterialColorGradientAnimator__Array {
  struct LegacyMaterialColorGradientAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyMaterialColorGradientAnimator * vector[32];
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator_ {
  struct IEnumerator_1_LegacyMaterialColorGradientAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator___StaticFields {
};
struct IEnumerator_1_LegacyMaterialColorGradientAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LegacyMaterialColorGradientAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LegacyMaterialColorGradientAnimator___VTable vtable;
};
struct List_1_LegacyMaterialColorGradientAnimator___VTable {
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
struct List_1_LegacyMaterialColorGradientAnimator___StaticFields {
  struct LegacyMaterialColorGradientAnimator__Array * _emptyArray;
};
struct List_1_LegacyMaterialColorGradientAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LegacyMaterialColorGradientAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LegacyMaterialColorGradientAnimator___VTable vtable;
};
struct BossHealthbar__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BossHealthbar__StaticFields {
};
struct BossHealthbar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BossHealthbar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BossHealthbar__VTable vtable;
};

struct BossHealthbar2__Fields {
  struct MonoBehaviour__Fields _;
  struct BossesNamesMessages * BossNames;
  struct Func_1_Boolean_ * m_shouldShow;
  struct Vector2 HealthBarOffsetMax;
  struct Vector2 HealthBarOffsetMin;
  struct Vector2 DamageBarOffsetMax;
  struct Vector2 DamageBarOffsetMin;
  struct Vector2 DamageBarLowerOffsetMax;
  struct Vector2 DamageBarLowerOffsetMin;
  struct VitalsHealthProvider * VitalsProvider;
  struct FloatValueProvider * ValueProvider;
  float ValueChangeRate;
  float ValueFreezeTime;
  struct Renderer * BarRenderer;
  struct Renderer * BarDamageRenderer;
  struct MoonTimeline * ShowTimeline;
  struct MoonTimeline * HideTimeline;
  struct GameObject * BarVisualsParent;
  struct MessageBox * BossName;
  float m_minValue;
  float m_maxValue;
  float m_lastChange;
  bool m_visible;
  bool m_postRestoreNextFrameUpdateNeeded;
};
struct BossHealthbar2 {
  struct BossHealthbar2__Class *klass;
  struct MonitorData *monitor;
  struct BossHealthbar2__Fields fields;
};
struct BossesNamesMessages__Fields {
  struct ScriptableObject__Fields _;
  struct MessageProvider * NightcrawlerBossName;
  struct MessageProvider * SpiderBossName;
  struct MessageProvider * KwolokBossName;
  struct MessageProvider * PowlBossName;
  struct MessageProvider * HornBossName;
  struct MessageProvider * LaserBossName;
  struct MessageProvider * MinerBossName;
};
struct BossesNamesMessages {
  struct BossesNamesMessages__Class *klass;
  struct MonitorData *monitor;
  struct BossesNamesMessages__Fields fields;
};
struct BossesNamesMessages__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BossesNamesMessages__StaticFields {
};
struct BossesNamesMessages__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BossesNamesMessages__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BossesNamesMessages__VTable vtable;
};
struct BossHealthbar2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BossHealthbar2__StaticFields {
  struct BossHealthbar2 * m_instance;
};
struct BossHealthbar2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BossHealthbar2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BossHealthbar2__VTable vtable;
};

enum BossHealthbar2_BossNameType__Enum : int32_t {
  BossHealthbar2_BossNameType__Enum_Nightcrawler = 0,
  BossHealthbar2_BossNameType__Enum_SpiderBoss = 1,
  BossHealthbar2_BossNameType__Enum_KwolokBoss = 2,
  BossHealthbar2_BossNameType__Enum_PowlBoss = 3,
  BossHealthbar2_BossNameType__Enum_HornBoss = 4,
  BossHealthbar2_BossNameType__Enum_LaserBoss = 5,
  BossHealthbar2_BossNameType__Enum_MinerBoss = 6,
};
struct BossHealthbar2_BossNameType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BossHealthbar2_BossNameType__Enum value;
};

struct CanvasCameraHooker__Fields {
  struct MonoBehaviour__Fields _;
};
struct CanvasCameraHooker {
  struct CanvasCameraHooker__Class *klass;
  struct MonitorData *monitor;
  struct CanvasCameraHooker__Fields fields;
};
struct CanvasCameraHooker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CanvasCameraHooker__StaticFields {
};
struct CanvasCameraHooker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanvasCameraHooker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanvasCameraHooker__VTable vtable;
};

struct Fader_c {
  struct Fader_c__Class *klass;
  struct MonitorData *monitor;
};
struct Fader_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Fader_c__StaticFields {
  struct Fader_c * __9;
  struct Action * __9__21_0;
  struct Action * __9__21_1;
};
struct Fader_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Fader_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Fader_c__VTable vtable;
};

enum FaderAnimatorEntity_FaderType__Enum : int32_t {
  FaderAnimatorEntity_FaderType__Enum_Default = 0,
  FaderAnimatorEntity_FaderType__Enum_NoCleanup = 1,
  FaderAnimatorEntity_FaderType__Enum_Cleanup = 2,
  FaderAnimatorEntity_FaderType__Enum_FinalInCutscene = 3,
  FaderAnimatorEntity_FaderType__Enum_PrologueEnd = 4,
  FaderAnimatorEntity_FaderType__Enum_KuFlightStart = 5,
  FaderAnimatorEntity_FaderType__Enum_MokiLowerRope = 6,
  FaderAnimatorEntity_FaderType__Enum_LeverAtDoubleJump = 7,
  FaderAnimatorEntity_FaderType__Enum_LumaPoolsAfterKwolokMeeting = 8,
  FaderAnimatorEntity_FaderType__Enum_SilentWoodsBurningVillage = 9,
  FaderAnimatorEntity_FaderType__Enum_MouldwoodDepthsLightRays = 10,
  FaderAnimatorEntity_FaderType__Enum_MidnightBurrowsEntrance = 11,
  FaderAnimatorEntity_FaderType__Enum_LumaPoolsSaveRoom = 12,
  FaderAnimatorEntity_FaderType__Enum_BaursReachAfterAvalanche = 13,
};
struct FaderAnimatorEntity_FaderType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FaderAnimatorEntity_FaderType__Enum value;
};
struct FaderB__Fields {
  struct Suspendable__Fields _;
  float FadeInTime;
  float FadeStayTime;
  float FadeOutTime;
  float PanicResetDelay;
  float CleanupThreshold;
  float GCOpacityThreshold;
  float FadeInOutPreviousOpacityThreshold;
  struct AnimationCurve * FaderBrightnessCurve;
  struct AnimationCurve * FaderBContrastCurve;
  struct AnimationCurve * FaderBWeightCurve;
  float TimelineFinishedFadeInDelay;
  float TimelineFinishedFadeInSpeed;
  float m_stateCurrentTime;
  float m_opacity;
  int32_t m_GCScheduledAtFrame;
  int32_t m_previouslyUnconditionallyScheduled;
  float m_panicResetTimer;
  bool m_faderBlocked;
  bool m_skipCameraMoveToTarget;
  bool m_doCleanUpIfPossible;
  float _EditorDebugValue_k__BackingField;
  enum FaderB_State__Enum CurrentState;
  enum FaderAnimatorEntity_FaderType__Enum m_currentTimelineFaderType;
  struct Action * OnFadeInEvent;
  struct Action * OnFadeOutEvent;
  bool m_shouldDoCleanUp;
  bool _IsSuspended_k__BackingField;
};
struct FaderB {
  struct FaderB__Class *klass;
  struct MonitorData *monitor;
  struct FaderB__Fields fields;
};
struct FaderB__VTable {
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
  VirtualInvokeData OnFadeInFinished;
  VirtualInvokeData OnFadeOutFinished;
};
struct FaderB__StaticFields {
  bool DebugOverlay;
};
struct FaderB__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FaderB__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FaderB__VTable vtable;
};

struct FaderB_c {
  struct FaderB_c__Class *klass;
  struct MonitorData *monitor;
};
struct FaderB_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FaderB_c__StaticFields {
  struct FaderB_c * __9;
  struct Action * __9__72_0;
  struct Action * __9__72_1;
};
struct FaderB_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FaderB_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FaderB_c__VTable vtable;
};

struct ScrollFader__Fields {
  struct Fader__Fields _;
};
struct ScrollFader {
  struct ScrollFader__Class *klass;
  struct MonitorData *monitor;
  struct ScrollFader__Fields fields;
};
struct ScrollFader__VTable {
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
  VirtualInvokeData OnFadeInFinished;
  VirtualInvokeData OnFadeOutFinished;
};
struct ScrollFader__StaticFields {
};
struct ScrollFader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScrollFader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScrollFader__VTable vtable;
};

enum HealthBarPositioning_PositionType__Enum : int32_t {
  HealthBarPositioning_PositionType__Enum_WeepingRidgeTumor = 0,
  HealthBarPositioning_PositionType__Enum_TentacleEnemy = 1,
};
struct HealthBarPositioning_PositionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HealthBarPositioning_PositionType__Enum value;
};
struct HealthBarPositioning__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * PivotTransform;
  struct Vector3 Offset;
  float OffsetToNeck;
  struct Vector3 VerticalOffset;
  struct Vector3 HorizontalOffset;
  enum HealthBarPositioning_PositionType__Enum PositioningType;
};
struct HealthBarPositioning {
  struct HealthBarPositioning__Class *klass;
  struct MonitorData *monitor;
  struct HealthBarPositioning__Fields fields;
};
struct HealthBarPositioning__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HealthBarPositioning__StaticFields {
};
struct HealthBarPositioning__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HealthBarPositioning__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HealthBarPositioning__VTable vtable;
};

struct IsWatchingCutsceneCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsWatchingCutsceneCondition {
  struct IsWatchingCutsceneCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsWatchingCutsceneCondition__Fields fields;
};
struct IsWatchingCutsceneCondition__VTable {
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
struct IsWatchingCutsceneCondition__StaticFields {
};
struct IsWatchingCutsceneCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsWatchingCutsceneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsWatchingCutsceneCondition__VTable vtable;
};

struct LegacyHealthBar__Fields {
  struct MonoBehaviour__Fields _;
  struct FloatValueProvider * ValueProvider;
  struct BaseAnimator * OnChangeAnimator;
  struct BaseAnimator * MaxAnimator;
  struct BaseAnimator * MinAnimator;
  struct List_1_LegacyMaterialColorGradientAnimator_ * Gradients;
  float ValueChangeRate;
  bool HideOnFastMovement;
  bool HideOnReachingZero;
  float ReachZeroSpeedOverride;
  float Rotation;
  float m_minValue;
  float m_maxValue;
  struct Transform * m_transform;
  struct Vector3 m_lastPosition;
};
struct LegacyHealthBar {
  struct LegacyHealthBar__Class *klass;
  struct MonitorData *monitor;
  struct LegacyHealthBar__Fields fields;
};
struct LegacyHealthBar__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
};
struct LegacyHealthBar__StaticFields {
};
struct LegacyHealthBar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyHealthBar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyHealthBar__VTable vtable;
};

struct NewGameAction__Fields {
  struct ActionMethod__Fields _;
};
struct NewGameAction {
  struct NewGameAction__Class *klass;
  struct MonitorData *monitor;
  struct NewGameAction__Fields fields;
};
struct NewGameAction__VTable {
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
struct NewGameAction__StaticFields {
};
struct NewGameAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NewGameAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NewGameAction__VTable vtable;
};

enum GameController_GameDifficultyModes__Enum : int32_t {
  GameController_GameDifficultyModes__Enum_Easy = 0,
  GameController_GameDifficultyModes__Enum_Normal = 1,
  GameController_GameDifficultyModes__Enum_Hard = 2,
};
struct GameController_GameDifficultyModes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GameController_GameDifficultyModes__Enum value;
};
struct NewGameSetDifficultyAction__Fields {
  struct ActionMethod__Fields _;
  enum GameController_GameDifficultyModes__Enum Difficulty;
};
struct NewGameSetDifficultyAction {
  struct NewGameSetDifficultyAction__Class *klass;
  struct MonitorData *monitor;
  struct NewGameSetDifficultyAction__Fields fields;
};
struct NewGameSetDifficultyAction__VTable {
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
struct NewGameSetDifficultyAction__StaticFields {
};
struct NewGameSetDifficultyAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NewGameSetDifficultyAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NewGameSetDifficultyAction__VTable vtable;
};

struct NewSaveDataAction__Fields {
  struct ActionMethod__Fields _;
};
struct NewSaveDataAction {
  struct NewSaveDataAction__Class *klass;
  struct MonitorData *monitor;
  struct NewSaveDataAction__Fields fields;
};
struct NewSaveDataAction__VTable {
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
struct NewSaveDataAction__StaticFields {
};
struct NewSaveDataAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NewSaveDataAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NewSaveDataAction__VTable vtable;
};

struct OriBar__Fields {
  struct MonoBehaviour__Fields _;
  struct Func_1_Boolean_ * m_shouldShow;
  struct Vector2 BackgroundBarOffsetMax;
  struct Vector2 BackgroundBarOffsetMin;
  struct Vector2 BarOffsetMax;
  struct Vector2 BarOffsetMin;
  struct Vector2 DamageBarOffsetMax;
  struct Vector2 DamageBarOffsetMin;
  struct Vector2 DamageBarLowerOffsetMax;
  struct Vector2 DamageBarLowerOffsetMin;
  struct Vector2 GlowOffsetMax;
  struct Vector2 GlowOffsetMin;
  struct Vector2 SparkOffsetMax;
  struct Vector2 SparkOffsetMin;
  struct FloatValueProvider * CurrentValueProvider;
  struct FloatValueProvider * MaxValueProvider;
  float ValueChangeRate;
  float ValueFreezeTime;
  struct Renderer * BackgroundRenderer;
  struct Renderer * BarRenderer;
  struct Renderer * BarDamageRenderer;
  struct Renderer__Array * BarGlowRenderer;
  struct Renderer * SparkRenderer;
  struct MoonTimeline * ShowTimeline;
  struct MoonTimeline * HideTimeline;
  struct GameObject * BarVisualsParent;
  float m_currentMinValue;
  float m_currentMaxValue;
  float m_capMinValue;
  float m_capMaxValue;
  float m_lastChange;
  bool m_visible;
};
struct OriBar {
  struct OriBar__Class *klass;
  struct MonitorData *monitor;
  struct OriBar__Fields fields;
};
struct OriBar__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OriBar__StaticFields {
};
struct OriBar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriBar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriBar__VTable vtable;
};

struct OriCell__Fields {
  struct MonoBehaviour__Fields _;
  struct Func_1_Boolean_ * m_shouldShow;
  float CellBaseValue;
  struct Vector2 BackgroundBarOffsetMax;
  struct Vector2 BackgroundBarOffsetMin;
  struct Vector2 BarOffsetMax;
  struct Vector2 BarOffsetMin;
  struct Vector2 DamageBarOffsetMax;
  struct Vector2 DamageBarOffsetMin;
  struct Vector2 DamageBarLowerOffsetMax;
  struct Vector2 DamageBarLowerOffsetMin;
  float _CurrentValue_k__BackingField;
  float _MaxValue_k__BackingField;
  bool DebugUpdate;
  float ValueChangeRate;
  float ValueFreezeTime;
  struct Renderer * BackgroundRenderer;
  struct Renderer * BarRenderer;
  struct Renderer * BarDamageRenderer;
  struct Renderer * BarShieldRenderer;
  struct MoonTimeline * ShowTimeline;
  struct MoonTimeline * HideTimeline;
  float m_currentMinValue;
  float m_currentMaxValue;
  float m_capMinValue;
  float m_capMaxValue;
  float m_firstChange;
  float m_lastChange;
  bool m_visible;
  bool inRange;
  bool updateVisualsDebug;
};
struct OriCell {
  struct OriCell__Class *klass;
  struct MonitorData *monitor;
  struct OriCell__Fields fields;
};
struct OriCell__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OriCell__StaticFields {
};
struct OriCell__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriCell__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriCell__VTable vtable;
};

struct OriCellBar__Fields {
  struct MonoBehaviour__Fields _;
  struct Func_1_Boolean_ * m_shouldShow;
  struct GameObject * NewCellEffectPrefab;
  struct OriCell__Array * Cells;
  struct GameObject__Array * Backgrounds;
  struct GameObject__Array * Health;
  struct GameObject__Array * Damage;
  struct GameObject__Array * Shield;
  struct Vector2 GlowOffsetMax;
  struct Vector2 GlowOffsetMin;
  struct Vector2 SparkOffsetMax;
  struct Vector2 SparkOffsetMin;
  struct FloatValueProvider * CurrentValueProvider;
  struct FloatValueProvider * MaxValueProvider;
  struct FloatValueProvider * MaxUnshieldedValueProvider;
  float ValueChangeRate;
  float ValueFreezeTime;
  struct Renderer__Array * BarGlowRenderer;
  struct Renderer * SparkRenderer;
  struct MoonTimeline * ShowTimeline;
  struct MoonTimeline * HideTimeline;
  struct GameObject * BarVisualsParent;
  struct GameObject * GlowScale;
  struct Vector2 GlowScaleMin;
  struct Vector2 GlowScaleMax;
  bool nextDrainUsesDrain1;
  struct GameObject * DrainObject1;
  struct GameObject * DrainObject2;
  struct ParticleSystem * Drain1Start;
  struct MoonTimeline * Drain1Cancel;
  struct MoonTimeline * Drain1End;
  struct ParticleSystem * Drain2Start;
  struct MoonTimeline * Drain2Cancel;
  struct MoonTimeline * Drain2End;
  float m_currentMinValue;
  float m_currentMaxValue;
  float m_capMinValue;
  float m_capMaxValue;
  float m_firstChange;
  float m_lastChange;
  bool m_visible;
  bool m_firstUpdate;
  float m_cachedCurrentValue;
  float m_cachedMaxValue;
  float m_cachedMaxUnshieldedValue;
  bool m_dirtiedShardState;
  float m_lastDrainCheck;
  bool m_wasDraining;
  float m_maxDrainScale;
  float m_minDrainScale;
  struct SeinGlowSpell * m_glow;
};
struct OriCellBar {
  struct OriCellBar__Class *klass;
  struct MonitorData *monitor;
  struct OriCellBar__Fields fields;
};
struct OriCell__Array {
  struct OriCell__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OriCell * vector[32];
};
struct OriCellBar__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OriCellBar__StaticFields {
};
struct OriCellBar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriCellBar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriCellBar__VTable vtable;
};

enum SetDemoPlaytimeAction_Mode__Enum : int32_t {
  SetDemoPlaytimeAction_Mode__Enum_Normal = 0,
  SetDemoPlaytimeAction_Mode__Enum_Race = 1,
};}