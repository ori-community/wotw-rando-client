namespace app {
struct __declspec(align(8)) VerletStructure_JobSystem__Fields {
    struct VerletStructure__Array *entities;
    struct VerletStructure_SystemWithMonoBehaviour *systemWithMonoBehaviour;
};

struct VerletStructure_JobSystem {
    struct VerletStructure_JobSystem__Class *klass;
    MonitorData *monitor;
    struct VerletStructure_JobSystem__Fields fields;
};

struct __declspec(align(8)) VerletStructure_SystemWithMonoBehaviour__Fields {
    struct VerletStructure__Array *entities;
    struct TransformAccessArray transforms;
    struct Boolean__Array *shouldUpdates;
    bool needsPostJob;
};

struct VerletStructure_SystemWithMonoBehaviour {
    struct VerletStructure_SystemWithMonoBehaviour__Class *klass;
    MonitorData *monitor;
    struct VerletStructure_SystemWithMonoBehaviour__Fields fields;
};

struct VerletStructure_SystemWithMonoBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct VerletStructure_SystemWithMonoBehaviour__StaticFields {
};

struct VerletStructure_SystemWithMonoBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletStructure_SystemWithMonoBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletStructure_SystemWithMonoBehaviour__VTable vtable;
};

struct VerletStructure_JobSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Execute;
    VirtualInvokeData ExecuteLate;
    VirtualInvokeData Dispose;
};

struct VerletStructure_JobSystem__StaticFields {
    JobMode__Enum jobMode;
    
    bool forceComplete;
};

struct VerletStructure_JobSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletStructure_JobSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletStructure_JobSystem__VTable vtable;
};

struct Samplers_1_VerletStructure_SystemWithMonoBehaviour_ {
    struct Samplers_1_VerletStructure_SystemWithMonoBehaviour___Class *klass;
    MonitorData *monitor;
};

struct VerletStructure_SystemWithMonoBehaviour_Samplers {
    struct VerletStructure_SystemWithMonoBehaviour_Samplers__Class *klass;
    MonitorData *monitor;
};

struct Samplers_1_VerletStructure_SystemWithMonoBehaviour___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Samplers_1_VerletStructure_SystemWithMonoBehaviour___StaticFields {
    struct CustomSampler *Pre;
    struct CustomSampler *Post;
    struct CustomSampler *Schedule;
    struct CustomSampler *Complete;
    struct CustomSampler *ScheduleBatchedJobs;
};

struct Samplers_1_VerletStructure_SystemWithMonoBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Samplers_1_VerletStructure_SystemWithMonoBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Samplers_1_VerletStructure_SystemWithMonoBehaviour___VTable vtable;
};

struct VerletStructure_SystemWithMonoBehaviour_Samplers__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletStructure_SystemWithMonoBehaviour_Samplers__StaticFields {
};

struct VerletStructure_SystemWithMonoBehaviour_Samplers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletStructure_SystemWithMonoBehaviour_Samplers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletStructure_SystemWithMonoBehaviour_Samplers__VTable vtable;
};

struct VerletStructure_SystemWithMonoBehaviour_c {
    struct VerletStructure_SystemWithMonoBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct Converter_2_VerletStructure_UnityEngine_Transform___Fields {
    struct MulticastDelegate__Fields _;
};

struct Converter_2_VerletStructure_UnityEngine_Transform_ {
    struct Converter_2_VerletStructure_UnityEngine_Transform___Class *klass;
    MonitorData *monitor;
    struct Converter_2_VerletStructure_UnityEngine_Transform___Fields fields;
};

struct Converter_2_VerletStructure_UnityEngine_Transform___VTable {
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

struct Converter_2_VerletStructure_UnityEngine_Transform___StaticFields {
};

struct Converter_2_VerletStructure_UnityEngine_Transform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Converter_2_VerletStructure_UnityEngine_Transform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Converter_2_VerletStructure_UnityEngine_Transform___VTable vtable;
};

struct VerletStructure_SystemWithMonoBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletStructure_SystemWithMonoBehaviour_c__StaticFields {
    struct VerletStructure_SystemWithMonoBehaviour_c *__9;
    struct Converter_2_VerletStructure_UnityEngine_Transform_ *__9__4_0;
};

struct VerletStructure_SystemWithMonoBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletStructure_SystemWithMonoBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletStructure_SystemWithMonoBehaviour_c__VTable vtable;
};

struct VerletStructure_JobWithMonoBehaviour {
    struct VerletStructure__Array *entities;
    struct Boolean__Array *shouldUpdates;
    float dt;
};

struct VerletStructure_JobWithMonoBehaviour__Boxed {
    struct VerletStructure_JobWithMonoBehaviour__Class *klass;
    MonitorData *monitor;
    struct VerletStructure_JobWithMonoBehaviour fields;
};

struct VerletStructure_JobWithMonoBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Execute;
};

struct VerletStructure_JobWithMonoBehaviour__StaticFields {
};

struct VerletStructure_JobWithMonoBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletStructure_JobWithMonoBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletStructure_JobWithMonoBehaviour__VTable vtable;
};

struct VerletUndergroundPlantController__Fields {
    struct MonoBehaviour__Fields _;
    struct VerletStructure__Array *VerletStructures;
    struct Transform *GroundPoint;
    struct AnimationCurve *AngleLerpCurve;
    float DefaultWigglePressure;
    struct FloatAnimator *WiggleForceCurve1;
    struct FloatAnimator *WiggleForceCurve2;
};

struct VerletUndergroundPlantController {
    struct VerletUndergroundPlantController__Class *klass;
    MonitorData *monitor;
    struct VerletUndergroundPlantController__Fields fields;
};

struct VerletUndergroundPlantController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUpdatePhysics;
};

struct VerletUndergroundPlantController__StaticFields {
};

struct VerletUndergroundPlantController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletUndergroundPlantController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletUndergroundPlantController__VTable vtable;
};

struct VSyncUtility {
    struct VSyncUtility__Class *klass;
    MonitorData *monitor;
};

struct VSyncUtility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VSyncUtility__StaticFields {
};

struct VSyncUtility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VSyncUtility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VSyncUtility__VTable vtable;
};

struct TimeUtility {
    struct TimeUtility__Class *klass;
    MonitorData *monitor;
};

struct TimeUtility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimeUtility__StaticFields {
};

struct TimeUtility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeUtility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeUtility__VTable vtable;
};

struct CameraRenderExporter__Fields {
    struct MonoBehaviour__Fields _;
    struct Camera *Camera;
};

struct CameraRenderExporter {
    struct CameraRenderExporter__Class *klass;
    MonitorData *monitor;
    struct CameraRenderExporter__Fields fields;
};

struct CameraRenderExporter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraRenderExporter__StaticFields {
};

struct CameraRenderExporter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraRenderExporter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraRenderExporter__VTable vtable;
};

struct CreditsController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *CreditsTimeline;
    struct ActionMethod *SkipCreditsAction;
};

struct CreditsController {
    struct CreditsController__Class *klass;
    MonitorData *monitor;
    struct CreditsController__Fields fields;
};

struct CreditsController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CreditsController__StaticFields {
    struct CreditsController *Instance;
};

struct CreditsController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CreditsController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CreditsController__VTable vtable;
};

struct Bootstrap__Fields {
    struct MonoBehaviour__Fields _;
    struct GameController *m_gameController;
    struct StateMachine *m_fsm;
};

struct Bootstrap {
    struct Bootstrap__Class *klass;
    MonitorData *monitor;
    struct Bootstrap__Fields fields;
};

struct GameController_BrokenSavesFixingSettings {
    struct PlayerUberStateDescriptor *PlayerUberState;
    struct SerializedIntUberState *FindKuQuest;
    struct SerializedIntUberState *DesertWispQuestUberState;
    struct SerializedIntUberState *LagoonWispQuestUberState;
    struct SerializedIntUberState *MouldwoodDepthsWispQuestUberState;
    struct SerializedIntUberState *WinterForestWispQuestUberState;
    struct SavePedestalUberState *SilentWoodsPedestalUberState;
    struct List_1_System_Int32_ *SilentWoodsAreasToDiscover;
};

struct GameController_BrokenSavesFixingSettings__Boxed {
    struct GameController_BrokenSavesFixingSettings__Class *klass;
    MonitorData *monitor;
    struct GameController_BrokenSavesFixingSettings fields;
};

struct GameController__Fields {
    struct SaveSerialize__Fields _;
    bool _IsPressTourBuild_k__BackingField;
    struct GameTimer *Timer;
    struct DeathUberStateManager *DeathUberStateManager;
    struct SaveGameController *SaveGameController;
    struct List_1_UnityEngine_GameObject_ *Systems;
    struct GameScheduler *GameScheduler;
    struct AllContainer_1_Objective_ *ActiveObjectives;
    struct List_1_Objective_ *Objectives;
    struct UberStateCollectionReference *UberStateCollectionReference;
    struct MessageProvider *OfflineMessageProvider;
    struct SerializedIntUberState *GameDifficultyModeUberState;
    struct SerializedBooleanUberState *GameFinishedUberState;
    struct GameController_GameModeBalanceSettings *EasyModeBalanceSettings;
    struct GameController_GameModeBalanceSettings *NormalModeBalanceSettings;
    struct GameController_GameModeBalanceSettings *HardModeBalanceSettings;
    struct String *BuildID;
    struct String *BuildIDString;
    struct String *BuildName;
    UberAtlassingPlatform__Enum AtlasPlatform;
    
    struct HashSet_1_Moon_ISuspendable_ *m_suspendablesToIgnoreForGameplay;
    struct GameObject *m_systemsGameObject;
    struct LogCallbackHandler *m_logCallbackHandler;
    struct RestoreCheckpointController *m_restoreCheckpointController;
    int32_t VSyncCount;
    struct String *m_logOutputFile;
    float m_gameTime;
    struct ActionSequence *GameSaveSequence;
    bool PCTrialValue;
    bool EditorTrialValue;
    struct WorldEvents *DebugWorldEvents;
    bool m_isRestartingGame;
    bool m_setRunInBackgroundToFalse;
    bool RequireInitialValues;
    bool m_isLoadingGame;
    struct List_1_UnityEngine_Object_ *Resources;
    bool m_lastDebugControlsEnabledValue;
    int32_t m_previousScreenWidth;
    int32_t m_previousScreenHeight;
    float m_isPackageFullyInstalledTimer;
    struct Action *m_onRestoreCheckpointFinished;
    bool _MainMenuCanBeOpened_k__BackingField;
    bool _SecondaryMapAndInventoryCanBeOpened_k__BackingField;
    bool IsTrailerRecordingBuild;
    struct GameController_BrokenSavesFixingSettings BrokenSaveFixingInfo;
    int32_t GameplaySuspensionTicket;
    int32_t GameplayUISuspensionTicket;
    bool m_lockByAction;
    bool m_lockInput;
    float m_inputLockTime;
    bool _PreventFocusPause_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    bool m_canSendNetCommunications;
    bool AutomaticGC;
    struct PlatformServiceProvider *_PlatformServiceProvider_k__BackingField;
    RestartReason__Enum _RestartReason_k__BackingField;
    
    struct NintendoSwitch *m_switch;
    struct Dictionary_2_System_Int32_System_Int32_ *m_exceptionCache;
    float m_timer;
    float m_lastTime;
    float m_debug_sharpness;
    float m_debug_additional_sharpness;
    float m_debug_resolutionScaleMultiplier;
    float m_internetCheckTimer;
    bool m_previousIsOnline;
    struct Action_1_Boolean_ *m_onNetworkStatusChangedCallback;
    struct Action *m_onActuallyOfflineCallback;
    float m_controllerDetectionTimer;
    struct String__Array *m_lastControllers;
    bool _UnityInputJoystickConnected_k__BackingField;
    struct INetworkConnectivityChecker *m_connectivityChecker;
    struct SwitchNetConnectivityChecker *m_switchConnectivityChecker;
    bool IsGameplaySuspended;
    bool DisableCheckpoints;
    float m_timeUntilNextCharacterHeartbeat;
    float m_timeUntilNextPerfSample;
    int32_t m_frameIndexSinceLastSample;
    struct List_1_TelemetryFpsSample_ *m_fpsSamples;
    float SceneSlowedTime;
    float SceneStalledTime;
    int32_t _MaxConsecutiveFramesCpuTimeOver25Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesCpuTimeOver33Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesCpuTimeOver50Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesGpuTimeOver25Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesGpuTimeOver33Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesGpuTimeOver50Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesFrameTimeOver25Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesFrameTimeOver33Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesFrameTimeOver50Ms_k__BackingField;
    int32_t _MaxConsecutiveFramesFrameTimeOver1000Ms_k__BackingField;
    int32_t _MaxSceneUnloadsSinceLastResourceCollect_k__BackingField;
    int32_t _AvgDRSScaleX1_k__BackingField;
    int32_t _AvgDRSScaleX2_k__BackingField;
    int32_t _AvgDRSScaleX3_k__BackingField;
    int32_t _AvgDRSScaleX4_k__BackingField;
    struct IProfilingDataProvider *m_dataProvider;
    int32_t HandledShouldUseMinimalTelemetrySet;
    int32_t HandledShouldUseFullTelemetrySet;
    float m_telemetryQueryTime;
    int32_t HandledShouldAllowFriends;
    float m_allowFriendsQueryTime;
    bool ShouldCreateLoadTest;
    int32_t LoadTestAmount;
    int32_t LoadTestInterval;
    int32_t LoadTestTimeout;
    struct LeaderBoardService *m_leaderBoardService;
    struct String *m_replayToUpload;
    int32_t m_replaysToUpload;
    float m_timeout;
    struct AutomationRunWrapper *m_sceneLoadTestRun;
    struct AutomationRunWrapper *m_poolPerfTestRun;
    struct AutomationRunWrapper *m_perfTestRun;
    struct AutomationRunWrapper *m_stressTestRun;
};

struct GameController {
    struct GameController__Class *klass;
    MonitorData *monitor;
    struct GameController__Fields fields;
};

struct GameTimer__Fields {
    struct SaveSerialize__Fields _;
    double CurrentTime;
    double SessionTime;
    struct Stopwatch *m_realtimeStopwatch;
    double m_realtime;
    double m_deathTime;
    double m_menuTime;
    struct String *m_displayText;
    bool _ApplyOnEditor_k__BackingField;
    struct IUberState__Array *_AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_ *_AllTargets_k__BackingField;
};

struct GameTimer {
    struct GameTimer__Class *klass;
    MonitorData *monitor;
    struct GameTimer__Fields fields;
};

struct DeathUberStateManager__Fields {
    struct MonoBehaviour__Fields _;
};

struct DeathUberStateManager {
    struct DeathUberStateManager__Class *klass;
    MonitorData *monitor;
    struct DeathUberStateManager__Fields fields;
};

struct __declspec(align(8)) List_1_IDeathUberStateSetter___Fields {
    struct IDeathUberStateSetter__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IDeathUberStateSetter_ {
    struct List_1_IDeathUberStateSetter___Class *klass;
    MonitorData *monitor;
    struct List_1_IDeathUberStateSetter___Fields fields;
};

struct IDeathUberStateSetter {
    struct IDeathUberStateSetter__Class *klass;
    MonitorData *monitor;
};

struct IDeathUberStateSetter__Array {
    struct IDeathUberStateSetter__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IDeathUberStateSetter *vector[32];
};

struct IEnumerator_1_IDeathUberStateSetter_ {
    struct IEnumerator_1_IDeathUberStateSetter___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SaveGameController__Fields {
    struct Byte__Array *m_saveSnapshot;
    int32_t m_saveSnapshotSize;
    int32_t m_lastSavedFrameIndex;
    float m_startTime;
};

struct SaveGameController {
    struct SaveGameController__Class *klass;
    MonitorData *monitor;
    struct SaveGameController__Fields fields;
};

struct __declspec(align(8)) GameScheduler__Fields {
    struct UberDelegate_1_SceneRoot_ *OnSceneRootLoadEarlyStart;
    struct UberDelegate_1_SceneRoot_ *OnSceneStartLateBeforeSerialize;
    struct UberDelegate_1_SceneRoot_ *OnSceneStartLateAfterSerialize;
    struct UberDelegate_1_SceneRoot_ *OnSceneRootPreEnabled;
    struct UberDelegate_1_SceneRoot_ *OnSceneRootEnabledAfterSerialize;
    struct UberDelegate_1_SceneRoot_ *OnSceneRootDisabled;
    struct UberDelegate *OnGameAwake;
    struct UberDelegate *OnGameStart;
    struct UberDelegate *OnGameStartLate;
    struct UberDelegate *OnGameSerializeLoad;
    struct UberDelegate *OnGameSerializeLoadFromMainMenu;
    struct UberDelegate *OnPassThroughScrollLock;
    struct UberDelegate *OnGameFixedUpdate;
    struct UberDelegate *OnGameFixedUpdateLate;
    struct UberDelegate *OnGameAfterCollisions;
    struct UberDelegate *OnPlayerDeath;
    struct UberDelegate *OnMenuOpen;
    struct UberDelegate *OnMenuClose;
    struct UberDelegate *OnEquipmentWhellOpen;
    struct UberDelegate *OnEquipmentWhellClose;
    struct UberDelegate *OnGameReset;
    struct UberDelegate *OnGameResetFinished;
    struct UberDelegate *OnGameLanguageChange;
    struct UberDelegate *OnGameControlSchemeChange;
    struct UberDelegate *OnLogosFinished;
    struct UberDelegate *OnPlayGame;
    struct UberDelegate *OnGameQuit;
    struct UberDelegate *OnDemoEnd;
    struct UberDelegate *OnGameEnd;
    struct UberDelegate *OnStartMenuRace;
    struct UberDelegate *OnGameSystemsCreated;
    struct UberDelegate *OnEndOfFrame;
    struct UberDelegate *OnAfterSimulationUpdate;
};

struct GameScheduler {
    struct GameScheduler__Class *klass;
    MonitorData *monitor;
    struct GameScheduler__Fields fields;
};

struct __declspec(align(8)) UberDelegate_1_SceneRoot___Fields {
    struct List_1_System_Action_1__1 *m_registers;
};

struct UberDelegate_1_SceneRoot_ {
    struct UberDelegate_1_SceneRoot___Class *klass;
    MonitorData *monitor;
    struct UberDelegate_1_SceneRoot___Fields fields;
};

struct __declspec(align(8)) List_1_System_Action_1__1__Fields {
    struct Action_1_SceneRoot___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Action_1__1 {
    struct List_1_System_Action_1__1__Class *klass;
    MonitorData *monitor;
    struct List_1_System_Action_1__1__Fields fields;
};

struct Action_1_SceneRoot___Array {
    struct Action_1_SceneRoot___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Action_1_SceneRoot_ *vector[32];
};

struct IEnumerator_1_System_Action_1__4 {
    struct IEnumerator_1_System_Action_1__4__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) AllContainer_1_Objective___Fields {
    struct List_1_Objective_ *m_objects;
};

struct AllContainer_1_Objective_ {
    struct AllContainer_1_Objective___Class *klass;
    MonitorData *monitor;
    struct AllContainer_1_Objective___Fields fields;
};

struct __declspec(align(8)) List_1_Objective___Fields {
    struct Objective__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Objective_ {
    struct List_1_Objective___Class *klass;
    MonitorData *monitor;
    struct List_1_Objective___Fields fields;
};

struct Objective__Array {
    struct Objective__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Objective *vector[32];
};

struct IEnumerator_1_Objective_ {
    struct IEnumerator_1_Objective___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) GameController_GameModeBalanceSettings__Fields {
    float OriDealtDamageMultiplier;
    float OriReceivedDamageMultiplier;
    float ExperienceOrbCostMultiplier;
    float BossesHealthMultiplier;
    float EscapeSpeedMultiplier;
};

struct GameController_GameModeBalanceSettings {
    struct GameController_GameModeBalanceSettings__Class *klass;
    MonitorData *monitor;
    struct GameController_GameModeBalanceSettings__Fields fields;
};

struct RestoreCheckpointController {
    struct RestoreCheckpointController__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PlatformServiceProvider__Fields {
    float m_timeSinceLastReset;
    float m_nextUpdateTime;
    bool m_playFabWasSignedIn;
    struct ISignInProvider *m_primarySignInProvider;
    struct IDataProvider *m_primaryAchievementProvider;
    struct ISignInProvider *m_secondarySignInProvider;
    struct IDataProvider *m_secondaryAchievementProvider;
    struct PlayFabSignInProvider *m_playFabSignInProvider;
    struct IDataProvider *m_playFabAchievementProvider;
    struct PlayFabStatistics *m_playFabStatistics;
    struct IDataProvider *m_playFabStatisticsProvider;
    struct ITelemetryProvider *m_playFabTelemetryDataProvider;
    struct INetworkConnectivityChecker *m_connectivityChecker;
    struct IDataProvider *m_primaryAndPlayFabProvider;
    struct IDataProvider *m_secondaryAndPlayFabProvider;
    struct List_1_System_Action_ *m_onUserChanged;
    bool m_offlinePlayfabAchievementsCacheBuilt;
    struct PlayFabRaceServiceProvider *_RaceServiceProvider_k__BackingField;
};

struct PlatformServiceProvider {
    struct PlatformServiceProvider__Class *klass;
    MonitorData *monitor;
    struct PlatformServiceProvider__Fields fields;
};

struct ISignInProvider {
    struct ISignInProvider__Class *klass;
    MonitorData *monitor;
};

struct IDataProvider {
    struct IDataProvider__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PlayFabSignInProvider__Fields {
    struct INetworkConnectivityChecker *m_netConnectivityChecker;
    struct ISignInProvider *m_liveSignInProvider;
    struct ISignInProvider *m_nonLiveSignInProvider;
    struct String *m_playFabDesiredDisplayName;
    float m_displayNameCheck;
    struct Dictionary_2_System_String_System_Boolean_ *m_contentPolicyError;
    struct IPlatformUser *m_attemptingToSignInAs;
    struct Dictionary_2_System_String_System_Single_ *m_platformLinkCheck;
    struct Dictionary_2_System_String_System_Boolean_ *m_platformLinked;
    struct Dictionary_2_System_String_System_Int32_ *m_linkAttempts;
    struct PlayFabUser *m_playfabUser;
    bool _IsSigningIn_k__BackingField;
    struct String *_EntityId_k__BackingField;
    struct String *_EntityType_k__BackingField;
};

struct PlayFabSignInProvider {
    struct PlayFabSignInProvider__Class *klass;
    MonitorData *monitor;
    struct PlayFabSignInProvider__Fields fields;
};

struct __declspec(align(8)) PlayFabUser__Fields {
    struct Texture2D *_Image_k__BackingField;
    struct String *_GamerTag_k__BackingField;
    struct String *_Uid_k__BackingField;
};

struct PlayFabUser {
    struct PlayFabUser__Class *klass;
    MonitorData *monitor;
    struct PlayFabUser__Fields fields;
};

struct __declspec(align(8)) PlayFabStatistics__Fields {
    struct ISignInProvider *m_primarySignInProvider;
    struct ISignInProvider *m_secondarySignInProvider;
    struct List_1_SystemIntegration_CacheData_ *m_cachedData;
};

struct PlayFabStatistics {
    struct PlayFabStatistics__Class *klass;
    MonitorData *monitor;
    struct PlayFabStatistics__Fields fields;
};

struct __declspec(align(8)) List_1_SystemIntegration_CacheData___Fields {
    struct CacheData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SystemIntegration_CacheData_ {
    struct List_1_SystemIntegration_CacheData___Class *klass;
    MonitorData *monitor;
    struct List_1_SystemIntegration_CacheData___Fields fields;
};

struct CacheData__Array {
    struct CacheData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CacheData *vector[32];
};

struct IEnumerator_1_SystemIntegration_CacheData_ {
    struct IEnumerator_1_SystemIntegration_CacheData___Class *klass;
    MonitorData *monitor;
};

struct ITelemetryProvider {
    struct ITelemetryProvider__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PlayFabRaceServiceProvider__Fields {
    struct IDataProvider *m_playFabStatisticsProvider;
    struct PlayFabSignInProvider *m_playFabSignInProvider;
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ *m_cache;
    struct Dictionary_2_System_String_System_Double_ *m_lastSyncTime;
    struct HashSet_1_System_String_ *m_raceStringCacheToLoad;
    float m_checkStorageTimer;
};

struct PlayFabRaceServiceProvider {
    struct PlayFabRaceServiceProvider__Class *klass;
    MonitorData *monitor;
    struct PlayFabRaceServiceProvider__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceDataCache_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceDataCache_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ {
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct RaceDataCache *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache_ fields;
};

struct __declspec(align(8)) RaceDataCache__Fields {
    struct String *m_ownerId;
    struct IPlatformStorageEventHandler *m_platformStorageEventHandler;
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ *m_cache;
    struct String *m_raceKey;
    struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ *m_lastMasterLeaderBoardSync;
};

struct RaceDataCache {
    struct RaceDataCache__Class *klass;
    MonitorData *monitor;
    struct RaceDataCache__Fields fields;
};

struct IPlatformStorageEventHandler {
    struct IPlatformStorageEventHandler__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_SystemIntegration_Races_RaceEntry___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ {
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct RaceEntry *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry_ fields;
};

struct __declspec(align(8)) RaceEntry__Fields {
    struct String *_UserId_k__BackingField;
    struct String *_DisplayName_k__BackingField;
    int32_t _Score_k__BackingField;
    int32_t _Position_k__BackingField;
    struct Byte__Array *_Data_k__BackingField;
    struct DateTime _EntryTime_k__BackingField;
    bool _IsMe_k__BackingField;
};

struct RaceEntry {
    struct RaceEntry__Class *klass;
    MonitorData *monitor;
    struct RaceEntry__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry___Fields {
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry___Fields {
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry___Fields fields;
};

struct RaceEntry__Array {
    struct RaceEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RaceEntry *vector[32];
};

struct IEnumerator_1_SystemIntegration_Races_RaceEntry_ {
    struct IEnumerator_1_SystemIntegration_Races_RaceEntry___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_SystemIntegration_Races_RaceEntry_ {
    struct ICollection_1_SystemIntegration_Races_RaceEntry___Class *klass;
    MonitorData *monitor;
};

}
