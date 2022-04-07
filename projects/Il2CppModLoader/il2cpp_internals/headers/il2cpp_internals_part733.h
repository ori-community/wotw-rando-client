namespace app {
struct UWPIdentityUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UWPIdentityUI__StaticFields {
  bool IsVisible;
};
struct UWPIdentityUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UWPIdentityUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UWPIdentityUI__VTable vtable;
};

struct MovieTextureController__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Fader;
  struct Fader * m_fader;
  struct MovieTexture * m_movieTexture;
  struct GameObject * MovieTextureGameObject;
  struct Vector3 MovieCameraOffset;
  struct String * LevelToLoad;
};
struct MovieTextureController {
  struct MovieTextureController__Class *klass;
  struct MonitorData *monitor;
  struct MovieTextureController__Fields fields;
};
struct MovieTextureController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MovieTextureController__StaticFields {
};
struct MovieTextureController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovieTextureController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovieTextureController__VTable vtable;
};

struct MovieTextureControllerB__Fields {
  struct MonoBehaviour__Fields _;
  struct VideoDescriptor * VideoDescriptor;
  struct Renderer * MovieTextureRenderer;
  struct AudioSource * MovieAudioSource;
  struct ActionMethod * OnFinishedAction;
  struct MessageProvider * PressToSkipVideoMessage;
  struct GameObject * PauseDimmer;
  struct LegacyAnimator__Array * m_dimmerAnimators;
  bool m_started;
  bool DestroyOnFinish;
  bool PlayAtStart;
  bool CanBePaused;
  bool CanBeSkipped;
  bool SkippedWithButtonPress;
  bool Loop;
  bool UseAudio;
  float m_movieTexturePlayingDuration;
  struct MessageBox * m_messageScreen;
  bool m_pausedByPlayer;
  bool m_finished;
  float m_prevTimeScale;
  struct GUISkin * Skin;
};
struct MovieTextureControllerB {
  struct MovieTextureControllerB__Class *klass;
  struct MonitorData *monitor;
  struct MovieTextureControllerB__Fields fields;
};
struct VideoDescriptor__Fields {
  struct ScriptableObject__Fields _;
  struct MovieTexture * MovieTexture;
  struct String * RelativeVideoPath;
};
struct VideoDescriptor {
  struct VideoDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct VideoDescriptor__Fields fields;
};
struct VideoDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VideoDescriptor__StaticFields {
};
struct VideoDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoDescriptor__VTable vtable;
};
struct MovieTextureControllerB__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MovieTextureControllerB__StaticFields {
  struct GUIStyle * style;
};
struct MovieTextureControllerB__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovieTextureControllerB__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovieTextureControllerB__VTable vtable;
};

struct __declspec(align(8)) MovieTextureControllerB_DestroyRoutine_d_22__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct MovieTextureControllerB * __4__this;
};
struct MovieTextureControllerB_DestroyRoutine_d_22 {
  struct MovieTextureControllerB_DestroyRoutine_d_22__Class *klass;
  struct MonitorData *monitor;
  struct MovieTextureControllerB_DestroyRoutine_d_22__Fields fields;
};
struct MovieTextureControllerB_DestroyRoutine_d_22__VTable {
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
struct MovieTextureControllerB_DestroyRoutine_d_22__StaticFields {
};
struct MovieTextureControllerB_DestroyRoutine_d_22__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovieTextureControllerB_DestroyRoutine_d_22__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovieTextureControllerB_DestroyRoutine_d_22__VTable vtable;
};

struct PlayMovieTextureActionC__Fields {
  struct PerformingAction__Fields _;
  struct VideoDescriptor * VideoDescriptor;
  struct GameObject * MovieTextureController;
  struct ActionMethod * OnFinishedAction;
  bool CanBePaused;
  bool CanBeSkipped;
  bool SkippedWithButtonPress;
  struct MovieTextureControllerB * m_movieTextureController;
};
struct PlayMovieTextureActionC {
  struct PlayMovieTextureActionC__Class *klass;
  struct MonitorData *monitor;
  struct PlayMovieTextureActionC__Fields fields;
};
struct PlayMovieTextureActionC__VTable {
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
struct PlayMovieTextureActionC__StaticFields {
};
struct PlayMovieTextureActionC__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayMovieTextureActionC__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayMovieTextureActionC__VTable vtable;
};

struct __declspec(align(8)) WaterSplashEffect__Fields {
  struct ParticleSystem * PS;
  int32_t count;
  float Speed;
  float SideSpeed;
  bool KillYSpeed;
  bool IsWaterPlane;
  bool isBig;
  bool IsDrip;
};
struct WaterSplashEffect {
  struct WaterSplashEffect__Class *klass;
  struct MonitorData *monitor;
  struct WaterSplashEffect__Fields fields;
};
struct WaterSplashEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterSplashEffect__StaticFields {
};
struct WaterSplashEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterSplashEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterSplashEffect__VTable vtable;
};

struct WaterSplashControl__Fields {
  struct MonoBehaviour__Fields _;
  struct WaterSplashEffect__Array * Effects;
  struct Transform * waterPlane;
  float maxSpeed;
  float speedScale;
  float speedPower;
  float fullForceDistance;
  float DripTimeMin;
  float DripTimeMax;
  float DripFaloffPower;
  float vertOffset;
  float waterImpactPower;
  float waterImpactRadius;
  struct Vector3 waterImpactPosOffet;
  float dripCooldownMax;
  bool useTimelineTime;
  bool dbgPause;
  float m_deltaTime;
  float m_prevRealTime;
  float m_prevTimelineTime;
  bool m_timelineInPreviewMode;
};
struct WaterSplashControl {
  struct WaterSplashControl__Class *klass;
  struct MonitorData *monitor;
  struct WaterSplashControl__Fields fields;
};
struct WaterSplashEffect__Array {
  struct WaterSplashEffect__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WaterSplashEffect * vector[32];
};
struct WaterSplashControl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TimelineSamplePriority;
  VirtualInvokeData TimelineSample;
  VirtualInvokeData EnterTimelinePreview;
  VirtualInvokeData ExitTimelinePreview;
};
struct WaterSplashControl__StaticFields {
};
struct WaterSplashControl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterSplashControl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterSplashControl__VTable vtable;
};

struct WaterSplashObject__Fields {
  struct MonoBehaviour__Fields _;
  struct WaterSplashControl * control;
  struct Transform * follow;
  struct Vector3 localPos;
  struct Mesh * mesh;
  float WaveRadius;
  float WavePower;
  float debugProb;
  bool debugAlwaysSplash;
  bool debugAlwaysDrip;
  bool debugAlwaysWave;
  bool debugDrawPoints;
  struct Transform * m_transform;
  struct WaterSplashObject_SplashPoint__Array * m_points;
  struct Vector3 m_lastPos;
  struct Quaternion m_lastRot;
};
struct WaterSplashObject {
  struct WaterSplashObject__Class *klass;
  struct MonitorData *monitor;
  struct WaterSplashObject__Fields fields;
};
struct __declspec(align(8)) WaterSplashObject_SplashPoint__Fields {
  struct Vector3 pos;
  struct Vector3 norm;
  struct Vector3 speed;
  float wetness;
  float dripCooldown;
  struct Vector3 lastPos;
};
struct WaterSplashObject_SplashPoint {
  struct WaterSplashObject_SplashPoint__Class *klass;
  struct MonitorData *monitor;
  struct WaterSplashObject_SplashPoint__Fields fields;
};
struct WaterSplashObject_SplashPoint__Array {
  struct WaterSplashObject_SplashPoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WaterSplashObject_SplashPoint * vector[32];
};
struct WaterSplashObject_SplashPoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterSplashObject_SplashPoint__StaticFields {
};
struct WaterSplashObject_SplashPoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterSplashObject_SplashPoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterSplashObject_SplashPoint__VTable vtable;
};
struct WaterSplashObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterSplashObject__StaticFields {
};
struct WaterSplashObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterSplashObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterSplashObject__VTable vtable;
};

struct WaterSplashParticleSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct WaterSplashControl * control;
  bool isBig;
};
struct WaterSplashParticleSystem {
  struct WaterSplashParticleSystem__Class *klass;
  struct MonitorData *monitor;
  struct WaterSplashParticleSystem__Fields fields;
};
struct WaterSplashParticleSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterSplashParticleSystem__StaticFields {
};
struct WaterSplashParticleSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterSplashParticleSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterSplashParticleSystem__VTable vtable;
};

struct WaterSplashTest__Fields {
  struct MonoBehaviour__Fields _;
  struct ParticleSystem * part;
};
struct WaterSplashTest {
  struct WaterSplashTest__Class *klass;
  struct MonitorData *monitor;
  struct WaterSplashTest__Fields fields;
};
struct WaterSplashTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterSplashTest__StaticFields {
};
struct WaterSplashTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterSplashTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterSplashTest__VTable vtable;
};

struct AreaMapCanvas__Fields {
  struct MonoBehaviour__Fields _;
  struct GameWorldArea * Area;
  struct RuntimeGameWorldArea * RuntimeArea;
  struct Shader * WorldMapBlurShader;
  struct Transform * MapPlaneTexture;
  struct Texture * Mask;
  int32_t PixelsPerUnit;
  struct Shader * SetRGBAShader;
  struct GameObject * m_addToMap;
  struct RenderTexture * m_areaMaskTextureA;
  struct RenderTexture * m_areaMaskTextureB;
  bool m_forceUpdateMaskB;
  struct Renderer * m_mapPlaneTextureRenderer;
  int32_t MapMaskTexProp;
  int32_t BlurSizeProp;
  int32_t TextureScalingAndOffsetProp;
  struct Material * m_areaMaskRenderingMaterial;
  struct Material * m_blurMaterial;
  struct RenderTexture * m_worldmapCanvasRenderTexture;
  struct Matrix4x4 m_cageStructureLocalToWorldMatrix;
  bool m_inited;
  bool _WantsToUpdateMask_k__BackingField;
};
struct AreaMapCanvas {
  struct AreaMapCanvas__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapCanvas__Fields fields;
};
struct AreaMapCanvas__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AreaMapCanvas__StaticFields {
};
struct AreaMapCanvas__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AreaMapCanvas__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AreaMapCanvas__VTable vtable;
};

struct AreaMapCanvasOverlay__Fields {
  struct MonoBehaviour__Fields _;
  struct AreaMapCanvas * Canvas;
  struct Rect PixelRect;
  int32_t Width;
  int32_t Height;
  struct Renderer * m_renderer;
  struct Transform * m_transform;
};
struct AreaMapCanvasOverlay {
  struct AreaMapCanvasOverlay__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapCanvasOverlay__Fields fields;
};
struct AreaMapCanvasOverlay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AreaMapCanvasOverlay__StaticFields {
};
struct AreaMapCanvasOverlay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AreaMapCanvasOverlay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AreaMapCanvasOverlay__VTable vtable;
};

struct AreaMapDebugNavigation__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * DebugSceneBoundsMarkerPrefab;
  float HiddenColorAlpha;
  float UndiscoveredColorAlpha;
  struct MessageBox * DebugText;
  struct AreaMapUI * m_areaMapUi;
  struct RuntimeSceneMetaData * m_currentScene;
  struct GameObject * m_sceneBoundsMarker;
  bool m_debugModeEnabled;
  bool UndiscoveredMapVisible;
};
struct AreaMapDebugNavigation {
  struct AreaMapDebugNavigation__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapDebugNavigation__Fields fields;
};
struct AreaMapUI__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_AreaMapCanvas_ * Canvases;
  struct GameObject * PlayerPositionMarkerPrefab;
  struct GameObject * SoulFlamePositionMarkerPrefab;
  struct GameObject * ObjectivePrefab;
  struct GameObject * IconPrefab;
  struct GameObject * TrailPrefab;
  struct MessageBox * ObjectiveText;
  struct ScaleAnimator * ObjectiveTextAnimator;
  struct GameObject * ObjectiveIcon;
  struct MoonTimeline * FadeOutTimeline;
  struct MoonTimeline * FadeInTimeline;
  struct Transform * m_fadeGroup;
  struct AreaMapLegend * AreaMapLegend;
  struct MessageProvider * ObjectiveMessageProvider;
  struct MessageProvider * CompletedMessageProvider;
  struct Vector3 PlayerPositionOffset;
  struct GameObject * _PlayerPositionMarker_k__BackingField;
  struct GameObject * _SoulFlamePositionMarker_k__BackingField;
  struct AreaMapDebugNavigation * _DebugNavigation_k__BackingField;
  struct AreaMapNavigation * _Navigation_k__BackingField;
  struct AreaMapIconManager * _IconManager_k__BackingField;
  struct IconPlacementScaler * _IconScaler_k__BackingField;
  bool m_isInited;
  bool m_shouldResetMaps;
  bool m_shouldResetMapsImmediate;
  struct AreaMapCanvasOverlay__Array * m_canvasOverlays;
  int32_t m_maskGenerationIndex;
  struct List_1_UnityEngine_GameObject_ * m_Trail;
  int32_t TrailFadeStartSeconds;
  bool TrailFill;
  bool TrailEnabled;
  bool m_showingLabels;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct AreaMapUI {
  struct AreaMapUI__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapUI__Fields fields;
};
struct __declspec(align(8)) List_1_AreaMapCanvas___Fields {
  struct AreaMapCanvas__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AreaMapCanvas_ {
  struct List_1_AreaMapCanvas___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AreaMapCanvas___Fields fields;
};
struct AreaMapCanvas__Array {
  struct AreaMapCanvas__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AreaMapCanvas * vector[32];
};
struct IEnumerator_1_AreaMapCanvas_ {
  struct IEnumerator_1_AreaMapCanvas___Class *klass;
  struct MonitorData *monitor;
};
struct AreaMapLegend__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundProvider * AppearSound;
  struct SoundProvider * DisappearSound;
  bool m_visible;
};
struct AreaMapLegend {
  struct AreaMapLegend__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapLegend__Fields fields;
};
enum AreaMapNavigation_State__Enum : int32_t {
  AreaMapNavigation_State__Enum_Player = 0,
  AreaMapNavigation_State__Enum_ActiveQuest = 1,
  AreaMapNavigation_State__Enum_SelectedQuest = 2,
  AreaMapNavigation_State__Enum_Target = 3,
  AreaMapNavigation_State__Enum_FollowTransform = 4,
};
struct AreaMapNavigation_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AreaMapNavigation_State__Enum value;
};
struct AreaMapNavigation__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * MapPivot;
  float AreaMapZoomLevel;
  float WorldMapZoomLevel;
  float AreaMapCloseZoomLevel;
  float m_scrollTime;
  float m_time;
  float m_volumeFactor;
  float m_lastZoom;
  bool m_focusOnPlayer;
  struct WwiseEventSystem_SoundHandle m_zoomOutHandle;
  struct WwiseEventSystem_SoundHandle m_zoomInHandle;
  float m_zoomBuffer;
  float VolumeDecayFactor;
  struct UISoundSettingsAsset * Sounds;
  struct WwiseEventSystem_SoundHandle m_scrollingSoundHandle;
  struct AnimationCurve * ScrollingSensitivityCurve;
  struct Vector2 m_lastDragPosition;
  bool m_firstUpdate;
  struct Vector2 m_scrollPosition;
  struct AreaMapUI * m_areaMapUi;
  struct AreaMapScrollLimit__Array * m_scrollLimits;
  enum AreaMapNavigation_State__Enum CurrentState;
  struct Vector3 m_target;
  struct Bounds _Bounds_k__BackingField;
  struct Vector2 m_fromPosition;
  struct Vector2 m_toPosition;
  float m_focusTime;
  struct Transform * m_followTransform;
  struct Nullable_1_UnityEngine_Vector2_ m_retainedPosition;
  struct Rect m_scrollAreaLimit;
  bool m_wasScrolling;
};
struct AreaMapNavigation {
  struct AreaMapNavigation__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapNavigation__Fields fields;
};
struct AreaMapScrollLimit__Fields {
  struct MonoBehaviour__Fields _;
  struct Condition_1 * Condition;
  struct Rect m_area;
  bool m_areaCalculated;
};
struct AreaMapScrollLimit {
  struct AreaMapScrollLimit__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapScrollLimit__Fields fields;
};
struct AreaMapScrollLimit__Array {
  struct AreaMapScrollLimit__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AreaMapScrollLimit * vector[32];
};
enum AreaMapIconFilter__Enum : int32_t {
  AreaMapIconFilter__Enum_All = 0,
  AreaMapIconFilter__Enum_Quests = 1,
  AreaMapIconFilter__Enum_Teleports = 2,
  AreaMapIconFilter__Enum_Collectibles = 3,
  AreaMapIconFilter__Enum_COUNT = 4,
};
struct AreaMapIconFilter__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AreaMapIconFilter__Enum value;
};
struct AreaMapIconManager__Fields {
  struct MonoBehaviour__Fields _;
  enum AreaMapIconFilter__Enum Filter;
  struct AreaMapIconFilterFooterLabel__Array * Labels;
  struct AreaMapIconManager_IconGameObjects * Icons;
};
struct AreaMapIconManager {
  struct AreaMapIconManager__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapIconManager__Fields fields;
};
struct AreaMapIconFilterFooterLabel {
  enum AreaMapIconFilter__Enum Filter;
  struct MessageProvider * Footer;
};
struct AreaMapIconFilterFooterLabel__Boxed {
  struct AreaMapIconFilterFooterLabel__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapIconFilterFooterLabel fields;
};
struct AreaMapIconFilterFooterLabel__Array {
  struct AreaMapIconFilterFooterLabel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AreaMapIconFilterFooterLabel vector[32];
};
struct __declspec(align(8)) AreaMapIconManager_IconGameObjects__Fields {
  struct GameObject * Keystone;
  struct GameObject * Eyestone;
  struct GameObject * Mapstone;
  struct GameObject * BreakableWall;
  struct GameObject * BreakableWallBroken;
  struct GameObject * StompableFloor;
  struct GameObject * StompableFloorBroken;
  struct GameObject * EnergyGateOpen;
  struct GameObject * KeystoneDoorTwo;
  struct GameObject * KeystoneDoorFour;
  struct GameObject * KeystoneDoorOpen;
  struct GameObject * AbilityPedestal;
  struct GameObject * HealthUpgrade;
  struct GameObject * EnergyUpgrade;
  struct GameObject * SavePedestal;
  struct GameObject * AbilityPoint;
  struct GameObject * Experience;
  struct GameObject * MapstonePickup;
  struct GameObject * EnergyGateTwelve;
  struct GameObject * EnergyGateTen;
  struct GameObject * EnergyGateEight;
  struct GameObject * EnergyGateSix;
  struct GameObject * EnergyGateFour;
  struct GameObject * EnergyGateTwo;
  struct GameObject * NPC;
  struct GameObject * QuestItem;
  struct GameObject * Shard;
  struct GameObject * ShardSlot;
  struct GameObject * TeleportPrefab;
  struct GameObject * QuestStart;
  struct GameObject * QuestEnd;
  struct GameObject * RaceStart;
  struct GameObject * RaceEnd;
  struct GameObject * WatermillDoor;
  struct GameObject * TempleDoor;
  struct GameObject * SmallDoor;
  struct GameObject * Shrine;
  struct GameObject * Loremaster;
  struct GameObject * Weaponmaster;
  struct GameObject * Gardener;
  struct GameObject * Mapmaker;
  struct GameObject * Shardtrader;
  struct GameObject * Wanderer;
  struct GameObject * Treekeeper;
  struct GameObject * Builder;
  struct GameObject * Kwolok;
  struct GameObject * Statistician;
  struct GameObject * CreepHeart;
  struct GameObject * HealthFragment;
  struct GameObject * EnergyFragment;
  struct GameObject * Ore;
  struct GameObject * Seed;
  struct GameObject * Miner;
  struct GameObject * Spiderling;
  struct GameObject * Moki;
  struct GameObject * MokiBrave;
  struct GameObject * MokiAdventurer;
  struct GameObject * MokiArtist;
  struct GameObject * MokiDarkness;
  struct GameObject * MokiFashionable;
  struct GameObject * MokiFisherman;
  struct GameObject * MokiFrozen;
  struct GameObject * MokiKwolokAmulet;
  struct GameObject * MokiSpyglass;
  struct GameObject * Ku;
  struct GameObject * IceFisher;
  struct GameObject * Siira;
};
struct AreaMapIconManager_IconGameObjects {
  struct AreaMapIconManager_IconGameObjects__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapIconManager_IconGameObjects__Fields fields;
};
struct IconPlacementScaler__Fields {
  struct MonoBehaviour__Fields _;
  float MaxScaleFactor;
  float MinScaleFactor;
  struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ * m_icons;
  struct Vector3 m_offset;
  struct List_1_System_Int32_ * m_keysToRemove;
};
struct IconPlacementScaler {
  struct IconPlacementScaler__Class *klass;
  struct MonitorData *monitor;
  struct IconPlacementScaler__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
  struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct IconPlacementScaler_IconOffsetPosition * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition_ vector[32];
};
struct __declspec(align(8)) IconPlacementScaler_IconOffsetPosition__Fields {
  struct GameObject * iconObject;
  struct Vector3 RealPosition;
  struct Vector3 OriginalScale;
  bool IsTeleportable;
};
struct IconPlacementScaler_IconOffsetPosition {
  struct IconPlacementScaler_IconOffsetPosition__Class *klass;
  struct MonitorData *monitor;
  struct IconPlacementScaler_IconOffsetPosition__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields {
  struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields {
  struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields fields;
};
struct IconPlacementScaler_IconOffsetPosition__Array {
  struct IconPlacementScaler_IconOffsetPosition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IconPlacementScaler_IconOffsetPosition * vector[32];
};
struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition_ {
  struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_IconPlacementScaler_IconOffsetPosition_ {
  struct ICollection_1_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
  int32_t key;
  struct IconPlacementScaler_IconOffsetPosition * value;
};
struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Boxed {
  struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ fields;
};
struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array {
  struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition_ {
  struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition___Class *klass;
  struct MonitorData *monitor;
};
struct AreaMapCanvasOverlay__Array {
  struct AreaMapCanvasOverlay__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AreaMapCanvasOverlay * vector[32];
};
struct IEnumerator_1_AreaMapCanvas___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AreaMapCanvas___StaticFields {
};
struct IEnumerator_1_AreaMapCanvas___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AreaMapCanvas___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AreaMapCanvas___VTable vtable;
};
struct List_1_AreaMapCanvas___VTable {
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
struct List_1_AreaMapCanvas___StaticFields {
  struct AreaMapCanvas__Array * _emptyArray;
};
struct List_1_AreaMapCanvas___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AreaMapCanvas___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AreaMapCanvas___VTable vtable;
};
struct AreaMapLegend__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AreaMapLegend__StaticFields {
};
struct AreaMapLegend__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AreaMapLegend__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AreaMapLegend__VTable vtable;
};
struct AreaMapScrollLimit__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct AreaMapScrollLimit__StaticFields {
};
struct AreaMapScrollLimit__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AreaMapScrollLimit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AreaMapScrollLimit__VTable vtable;
};
struct AreaMapNavigation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPostTimeSlicedEnable;
};
struct AreaMapNavigation__StaticFields {
};
struct AreaMapNavigation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AreaMapNavigation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AreaMapNavigation__VTable vtable;
};
struct AreaMapIconFilterFooterLabel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}