namespace app {
struct CameraRenderExporter__StaticFields {
};
struct CameraRenderExporter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraRenderExporter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraRenderExporter__VTable vtable;
};

struct CreditsController__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * CreditsTimeline;
  struct ActionMethod * SkipCreditsAction;
};
struct CreditsController {
  struct CreditsController__Class *klass;
  struct MonitorData *monitor;
  struct CreditsController__Fields fields;
};
struct CreditsController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CreditsController__StaticFields {
  struct CreditsController * Instance;
};
struct CreditsController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreditsController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreditsController__VTable vtable;
};

struct Bootstrap__Fields {
  struct MonoBehaviour__Fields _;
  struct GameController * m_gameController;
  struct StateMachine * m_fsm;
};
struct Bootstrap {
  struct Bootstrap__Class *klass;
  struct MonitorData *monitor;
  struct Bootstrap__Fields fields;
};
struct GameController_BrokenSavesFixingSettings {
  struct PlayerUberStateDescriptor * PlayerUberState;
  struct SerializedIntUberState * FindKuQuest;
  struct SerializedIntUberState * DesertWispQuestUberState;
  struct SerializedIntUberState * LagoonWispQuestUberState;
  struct SerializedIntUberState * MouldwoodDepthsWispQuestUberState;
  struct SerializedIntUberState * WinterForestWispQuestUberState;
  struct SavePedestalUberState * SilentWoodsPedestalUberState;
  struct List_1_System_Int32_ * SilentWoodsAreasToDiscover;
};
struct GameController_BrokenSavesFixingSettings__Boxed {
  struct GameController_BrokenSavesFixingSettings__Class *klass;
  struct MonitorData *monitor;
  struct GameController_BrokenSavesFixingSettings fields;
};
struct GameController__Fields {
  struct SaveSerialize__Fields _;
  bool _IsPressTourBuild_k__BackingField;
  struct GameTimer * Timer;
  struct DeathUberStateManager * DeathUberStateManager;
  struct SaveGameController * SaveGameController;
  struct List_1_UnityEngine_GameObject_ * Systems;
  struct GameScheduler * GameScheduler;
  struct AllContainer_1_Objective_ * ActiveObjectives;
  struct List_1_Objective_ * Objectives;
  struct UberStateCollectionReference * UberStateCollectionReference;
  struct MessageProvider * OfflineMessageProvider;
  struct SerializedIntUberState * GameDifficultyModeUberState;
  struct SerializedBooleanUberState * GameFinishedUberState;
  struct GameController_GameModeBalanceSettings * EasyModeBalanceSettings;
  struct GameController_GameModeBalanceSettings * NormalModeBalanceSettings;
  struct GameController_GameModeBalanceSettings * HardModeBalanceSettings;
  struct String * BuildID;
  struct String * BuildIDString;
  struct String * BuildName;
  enum UberAtlassingPlatform__Enum AtlasPlatform;
  struct HashSet_1_Moon_ISuspendable_ * m_suspendablesToIgnoreForGameplay;
  struct GameObject * m_systemsGameObject;
  struct LogCallbackHandler * m_logCallbackHandler;
  struct RestoreCheckpointController * m_restoreCheckpointController;
  int32_t VSyncCount;
  struct String * m_logOutputFile;
  float m_gameTime;
  struct ActionSequence * GameSaveSequence;
  bool PCTrialValue;
  bool EditorTrialValue;
  struct WorldEvents * DebugWorldEvents;
  bool m_isRestartingGame;
  bool m_setRunInBackgroundToFalse;
  bool RequireInitialValues;
  bool m_isLoadingGame;
  struct List_1_UnityEngine_Object_ * Resources;
  bool m_lastDebugControlsEnabledValue;
  int32_t m_previousScreenWidth;
  int32_t m_previousScreenHeight;
  float m_isPackageFullyInstalledTimer;
  struct Action * m_onRestoreCheckpointFinished;
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
  enum SuspendableMask__Enum m_suspensionMask;
  bool m_canSendNetCommunications;
  bool AutomaticGC;
  struct PlatformServiceProvider * _PlatformServiceProvider_k__BackingField;
  enum RestartReason__Enum _RestartReason_k__BackingField;
  struct NintendoSwitch * m_switch;
  struct Dictionary_2_System_Int32_System_Int32_ * m_exceptionCache;
  float m_timer;
  float m_lastTime;
  float m_debug_sharpness;
  float m_debug_additional_sharpness;
  float m_debug_resolutionScaleMultiplier;
  float m_internetCheckTimer;
  bool m_previousIsOnline;
  struct Action_1_Boolean_ * m_onNetworkStatusChangedCallback;
  struct Action * m_onActuallyOfflineCallback;
  float m_controllerDetectionTimer;
  struct String__Array * m_lastControllers;
  bool _UnityInputJoystickConnected_k__BackingField;
  struct INetworkConnectivityChecker * m_connectivityChecker;
  struct SwitchNetConnectivityChecker * m_switchConnectivityChecker;
  bool IsGameplaySuspended;
  bool DisableCheckpoints;
  float m_timeUntilNextCharacterHeartbeat;
  float m_timeUntilNextPerfSample;
  int32_t m_frameIndexSinceLastSample;
  struct List_1_TelemetryFpsSample_ * m_fpsSamples;
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
  struct IProfilingDataProvider * m_dataProvider;
  int32_t HandledShouldUseMinimalTelemetrySet;
  int32_t HandledShouldUseFullTelemetrySet;
  float m_telemetryQueryTime;
  int32_t HandledShouldAllowFriends;
  float m_allowFriendsQueryTime;
  bool ShouldCreateLoadTest;
  int32_t LoadTestAmount;
  int32_t LoadTestInterval;
  int32_t LoadTestTimeout;
  struct LeaderBoardService * m_leaderBoardService;
  struct String * m_replayToUpload;
  int32_t m_replaysToUpload;
  float m_timeout;
  struct AutomationRunWrapper * m_sceneLoadTestRun;
  struct AutomationRunWrapper * m_poolPerfTestRun;
  struct AutomationRunWrapper * m_perfTestRun;
  struct AutomationRunWrapper * m_stressTestRun;
};
struct GameController {
  struct GameController__Class *klass;
  struct MonitorData *monitor;
  struct GameController__Fields fields;
};
struct GameTimer__Fields {
  struct SaveSerialize__Fields _;
  double CurrentTime;
  double SessionTime;
  struct Stopwatch * m_realtimeStopwatch;
  double m_realtime;
  double m_deathTime;
  double m_menuTime;
  struct String * m_displayText;
  bool _ApplyOnEditor_k__BackingField;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct GameTimer {
  struct GameTimer__Class *klass;
  struct MonitorData *monitor;
  struct GameTimer__Fields fields;
};
struct DeathUberStateManager__Fields {
  struct MonoBehaviour__Fields _;
};
struct DeathUberStateManager {
  struct DeathUberStateManager__Class *klass;
  struct MonitorData *monitor;
  struct DeathUberStateManager__Fields fields;
};
struct __declspec(align(8)) List_1_IDeathUberStateSetter___Fields {
  struct IDeathUberStateSetter__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IDeathUberStateSetter_ {
  struct List_1_IDeathUberStateSetter___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IDeathUberStateSetter___Fields fields;
};
struct IDeathUberStateSetter {
  struct IDeathUberStateSetter__Class *klass;
  struct MonitorData *monitor;
};
struct IDeathUberStateSetter__Array {
  struct IDeathUberStateSetter__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDeathUberStateSetter * vector[32];
};
struct IEnumerator_1_IDeathUberStateSetter_ {
  struct IEnumerator_1_IDeathUberStateSetter___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SaveGameController__Fields {
  struct Byte__Array * m_saveSnapshot;
  int32_t m_saveSnapshotSize;
  int32_t m_lastSavedFrameIndex;
  float m_startTime;
};
struct SaveGameController {
  struct SaveGameController__Class *klass;
  struct MonitorData *monitor;
  struct SaveGameController__Fields fields;
};
struct __declspec(align(8)) GameScheduler__Fields {
  struct UberDelegate_1_SceneRoot_ * OnSceneRootLoadEarlyStart;
  struct UberDelegate_1_SceneRoot_ * OnSceneStartLateBeforeSerialize;
  struct UberDelegate_1_SceneRoot_ * OnSceneStartLateAfterSerialize;
  struct UberDelegate_1_SceneRoot_ * OnSceneRootPreEnabled;
  struct UberDelegate_1_SceneRoot_ * OnSceneRootEnabledAfterSerialize;
  struct UberDelegate_1_SceneRoot_ * OnSceneRootDisabled;
  struct UberDelegate * OnGameAwake;
  struct UberDelegate * OnGameStart;
  struct UberDelegate * OnGameStartLate;
  struct UberDelegate * OnGameSerializeLoad;
  struct UberDelegate * OnGameSerializeLoadFromMainMenu;
  struct UberDelegate * OnPassThroughScrollLock;
  struct UberDelegate * OnGameFixedUpdate;
  struct UberDelegate * OnGameFixedUpdateLate;
  struct UberDelegate * OnGameAfterCollisions;
  struct UberDelegate * OnPlayerDeath;
  struct UberDelegate * OnMenuOpen;
  struct UberDelegate * OnMenuClose;
  struct UberDelegate * OnEquipmentWhellOpen;
  struct UberDelegate * OnEquipmentWhellClose;
  struct UberDelegate * OnGameReset;
  struct UberDelegate * OnGameResetFinished;
  struct UberDelegate * OnGameLanguageChange;
  struct UberDelegate * OnGameControlSchemeChange;
  struct UberDelegate * OnLogosFinished;
  struct UberDelegate * OnPlayGame;
  struct UberDelegate * OnGameQuit;
  struct UberDelegate * OnDemoEnd;
  struct UberDelegate * OnGameEnd;
  struct UberDelegate * OnStartMenuRace;
  struct UberDelegate * OnGameSystemsCreated;
  struct UberDelegate * OnEndOfFrame;
  struct UberDelegate * OnAfterSimulationUpdate;
};
struct GameScheduler {
  struct GameScheduler__Class *klass;
  struct MonitorData *monitor;
  struct GameScheduler__Fields fields;
};
struct __declspec(align(8)) UberDelegate_1_SceneRoot___Fields {
  struct List_1_System_Action_1__1 * m_registers;
};
struct UberDelegate_1_SceneRoot_ {
  struct UberDelegate_1_SceneRoot___Class *klass;
  struct MonitorData *monitor;
  struct UberDelegate_1_SceneRoot___Fields fields;
};
struct __declspec(align(8)) List_1_System_Action_1__1__Fields {
  struct Action_1_SceneRoot___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Action_1__1 {
  struct List_1_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Action_1__1__Fields fields;
};
struct Action_1_SceneRoot___Array {
  struct Action_1_SceneRoot___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Action_1_SceneRoot_ * vector[32];
};
struct IEnumerator_1_System_Action_1__4 {
  struct IEnumerator_1_System_Action_1__4__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) AllContainer_1_Objective___Fields {
  struct List_1_Objective_ * m_objects;
};
struct AllContainer_1_Objective_ {
  struct AllContainer_1_Objective___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_Objective___Fields fields;
};
struct __declspec(align(8)) List_1_Objective___Fields {
  struct Objective__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Objective_ {
  struct List_1_Objective___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Objective___Fields fields;
};
struct Objective__Array {
  struct Objective__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Objective * vector[32];
};
struct IEnumerator_1_Objective_ {
  struct IEnumerator_1_Objective___Class *klass;
  struct MonitorData *monitor;
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
  struct MonitorData *monitor;
  struct GameController_GameModeBalanceSettings__Fields fields;
};
struct RestoreCheckpointController {
  struct RestoreCheckpointController__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PlatformServiceProvider__Fields {
  float m_timeSinceLastReset;
  float m_nextUpdateTime;
  bool m_playFabWasSignedIn;
  struct ISignInProvider * m_primarySignInProvider;
  struct IDataProvider * m_primaryAchievementProvider;
  struct ISignInProvider * m_secondarySignInProvider;
  struct IDataProvider * m_secondaryAchievementProvider;
  struct PlayFabSignInProvider * m_playFabSignInProvider;
  struct IDataProvider * m_playFabAchievementProvider;
  struct PlayFabStatistics * m_playFabStatistics;
  struct IDataProvider * m_playFabStatisticsProvider;
  struct ITelemetryProvider * m_playFabTelemetryDataProvider;
  struct INetworkConnectivityChecker * m_connectivityChecker;
  struct IDataProvider * m_primaryAndPlayFabProvider;
  struct IDataProvider * m_secondaryAndPlayFabProvider;
  struct List_1_System_Action_ * m_onUserChanged;
  bool m_offlinePlayfabAchievementsCacheBuilt;
  struct PlayFabRaceServiceProvider * _RaceServiceProvider_k__BackingField;
};
struct PlatformServiceProvider {
  struct PlatformServiceProvider__Class *klass;
  struct MonitorData *monitor;
  struct PlatformServiceProvider__Fields fields;
};
struct ISignInProvider {
  struct ISignInProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IDataProvider {
  struct IDataProvider__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PlayFabSignInProvider__Fields {
  struct INetworkConnectivityChecker * m_netConnectivityChecker;
  struct ISignInProvider * m_liveSignInProvider;
  struct ISignInProvider * m_nonLiveSignInProvider;
  struct String * m_playFabDesiredDisplayName;
  float m_displayNameCheck;
  struct Dictionary_2_System_String_System_Boolean_ * m_contentPolicyError;
  struct IPlatformUser * m_attemptingToSignInAs;
  struct Dictionary_2_System_String_System_Single_ * m_platformLinkCheck;
  struct Dictionary_2_System_String_System_Boolean_ * m_platformLinked;
  struct Dictionary_2_System_String_System_Int32_ * m_linkAttempts;
  struct PlayFabUser * m_playfabUser;
  bool _IsSigningIn_k__BackingField;
  struct String * _EntityId_k__BackingField;
  struct String * _EntityType_k__BackingField;
};
struct PlayFabSignInProvider {
  struct PlayFabSignInProvider__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabSignInProvider__Fields fields;
};
struct __declspec(align(8)) PlayFabUser__Fields {
  struct Texture2D * _Image_k__BackingField;
  struct String * _GamerTag_k__BackingField;
  struct String * _Uid_k__BackingField;
};
struct PlayFabUser {
  struct PlayFabUser__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabUser__Fields fields;
};
struct __declspec(align(8)) PlayFabStatistics__Fields {
  struct ISignInProvider * m_primarySignInProvider;
  struct ISignInProvider * m_secondarySignInProvider;
  struct List_1_SystemIntegration_CacheData_ * m_cachedData;
};
struct PlayFabStatistics {
  struct PlayFabStatistics__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabStatistics__Fields fields;
};
struct __declspec(align(8)) List_1_SystemIntegration_CacheData___Fields {
  struct CacheData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SystemIntegration_CacheData_ {
  struct List_1_SystemIntegration_CacheData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SystemIntegration_CacheData___Fields fields;
};
struct CacheData__Array {
  struct CacheData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CacheData * vector[32];
};
struct IEnumerator_1_SystemIntegration_CacheData_ {
  struct IEnumerator_1_SystemIntegration_CacheData___Class *klass;
  struct MonitorData *monitor;
};
struct ITelemetryProvider {
  struct ITelemetryProvider__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PlayFabRaceServiceProvider__Fields {
  struct IDataProvider * m_playFabStatisticsProvider;
  struct PlayFabSignInProvider * m_playFabSignInProvider;
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * m_cache;
  struct Dictionary_2_System_String_System_Double_ * m_lastSyncTime;
  struct HashSet_1_System_String_ * m_raceStringCacheToLoad;
  float m_checkStorageTimer;
};
struct PlayFabRaceServiceProvider {
  struct PlayFabRaceServiceProvider__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabRaceServiceProvider__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceDataCache_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceDataCache_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ {
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct RaceDataCache * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceDataCache_ vector[32];
};
struct __declspec(align(8)) RaceDataCache__Fields {
  struct String * m_ownerId;
  struct IPlatformStorageEventHandler * m_platformStorageEventHandler;
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ * m_cache;
  struct String * m_raceKey;
  struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * m_lastMasterLeaderBoardSync;
};
struct RaceDataCache {
  struct RaceDataCache__Class *klass;
  struct MonitorData *monitor;
  struct RaceDataCache__Fields fields;
};
struct IPlatformStorageEventHandler {
  struct IPlatformStorageEventHandler__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_SystemIntegration_Races_RaceEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ {
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct RaceEntry * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SystemIntegration_Races_RaceEntry_ vector[32];
};
struct __declspec(align(8)) RaceEntry__Fields {
  struct String * _UserId_k__BackingField;
  struct String * _DisplayName_k__BackingField;
  int32_t _Score_k__BackingField;
  int32_t _Position_k__BackingField;
  struct Byte__Array * _Data_k__BackingField;
  struct DateTime _EntryTime_k__BackingField;
  bool _IsMe_k__BackingField;
};
struct RaceEntry {
  struct RaceEntry__Class *klass;
  struct MonitorData *monitor;
  struct RaceEntry__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry___Fields {
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry___Fields {
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceEntry___Fields fields;
};
struct RaceEntry__Array {
  struct RaceEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceEntry * vector[32];
};
struct IEnumerator_1_SystemIntegration_Races_RaceEntry_ {
  struct IEnumerator_1_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SystemIntegration_Races_RaceEntry_ {
  struct ICollection_1_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ {
  struct String * key;
  struct RaceEntry * value;
};
struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry___Boxed {
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ fields;
};
struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry___Array {
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SystemIntegration_Races_RaceEntry_ {
  struct IEnumerable_1_SystemIntegration_Races_RaceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceDataCache___Fields {
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceDataCache_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SystemIntegration_Races_RaceDataCache___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceDataCache___Fields {
  struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceDataCache_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SystemIntegration_Races_RaceDataCache___Fields fields;
};
struct RaceDataCache__Array {
  struct RaceDataCache__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceDataCache * vector[32];
};
struct IEnumerator_1_SystemIntegration_Races_RaceDataCache_ {
  struct IEnumerator_1_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SystemIntegration_Races_RaceDataCache_ {
  struct ICollection_1_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache_ {
  struct String * key;
  struct RaceDataCache * value;
};
struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache___Boxed {
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache_ fields;
};
struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache___Array {
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SystemIntegration_Races_RaceDataCache_ {
  struct IEnumerable_1_SystemIntegration_Races_RaceDataCache___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Double___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Double_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Double_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Double_ {
  struct Dictionary_2_System_String_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Double___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  double value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Double_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Double___Fields {
  struct Dictionary_2_System_String_System_Double_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Double_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Double___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Double___Fields {
  struct Dictionary_2_System_String_System_Double_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Double_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Double___Fields fields;
};
struct KeyValuePair_2_System_String_System_Double_ {
  struct String * key;
  double value;
};
struct KeyValuePair_2_System_String_System_Double___Boxed {
  struct KeyValuePair_2_System_String_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Double_ fields;
};
struct KeyValuePair_2_System_String_System_Double___Array {
  struct KeyValuePair_2_System_String_System_Double___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Double_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Double_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Double___Class *klass;
  struct MonitorData *monitor;
};
struct Task_1_SystemIntegration_Races_RaceRequestResult___Fields {
  struct Task__Fields _;
  struct RaceRequestResult * m_result;
};
struct Task_1_SystemIntegration_Races_RaceRequestResult_ {
  struct Task_1_SystemIntegration_Races_RaceRequestResult___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_SystemIntegration_Races_RaceRequestResult___Fields fields;
};
struct __declspec(align(8)) RaceRequestResult__Fields {
  struct List_1_SystemIntegration_Races_RaceRequestResultEntry_ * Data;
};
struct RaceRequestResult {
  struct RaceRequestResult__Class *klass;
  struct MonitorData *monitor;
  struct RaceRequestResult__Fields fields;
};
struct __declspec(align(8)) List_1_SystemIntegration_Races_RaceRequestResultEntry___Fields {
  struct RaceRequestResultEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SystemIntegration_Races_RaceRequestResultEntry_ {
  struct List_1_SystemIntegration_Races_RaceRequestResultEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SystemIntegration_Races_RaceRequestResultEntry___Fields fields;
};
struct __declspec(align(8)) RaceRequestResultEntry__Fields {
  struct String * _DisplayName_k__BackingField;
  int32_t _Score_k__BackingField;
  int32_t _Position_k__BackingField;
  bool _IsMe_k__BackingField;
  struct Byte__Array * _Data_k__BackingField;
  bool _IsSteamEntry_k__BackingField;
  bool _IsLiveEntry_k__BackingField;
  struct String * _UserID_k__BackingField;
};
struct RaceRequestResultEntry {
  struct RaceRequestResultEntry__Class *klass;
  struct MonitorData *monitor;
  struct RaceRequestResultEntry__Fields fields;
};
struct RaceRequestResultEntry__Array {
  struct RaceRequestResultEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceRequestResultEntry * vector[32];
};
struct IEnumerator_1_SystemIntegration_Races_RaceRequestResultEntry_ {
  struct IEnumerator_1_SystemIntegration_Races_RaceRequestResultEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TaskFactory_1_SystemIntegration_Races_RaceRequestResult___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_SystemIntegration_Races_RaceRequestResult_ {
  struct TaskFactory_1_SystemIntegration_Races_RaceRequestResult___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_SystemIntegration_Races_RaceRequestResult___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__22__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__22 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__22__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__22__Fields fields;
};
enum RaceDataLeaderBoardType__Enum : int32_t {
  RaceDataLeaderBoardType__Enum_Adjacent = 0,
};
struct RaceDataLeaderBoardType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceDataLeaderBoardType__Enum value;
};
struct __declspec(align(8)) SwitchNetConnectivityChecker__Fields {
  bool m_currentlyConnected;
  bool m_resolvingNoNsaIdIssue;
  int32_t m_resolvingNoNsaIdFailCounter;
  float m_nsaIdCacheCheck;
  bool m_hasNsaId;
  int32_t m_errorHandleCount;
  bool m_runningInBackground;
  struct Action_1_Boolean_ * OnNetworkStatusChangedCallback;
  struct Action * OnActuallyOfflineCallback;
};
struct SwitchNetConnectivityChecker {
  struct SwitchNetConnectivityChecker__Class *klass;
  struct MonitorData *monitor;
  struct SwitchNetConnectivityChecker__Fields fields;
};
struct __declspec(align(8)) List_1_TelemetryFpsSample___Fields {
  struct TelemetryFpsSample__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TelemetryFpsSample_ {
  struct List_1_TelemetryFpsSample___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TelemetryFpsSample___Fields fields;
};
struct __declspec(align(8)) TelemetryFpsSample__Fields {
  double CPUTime;
  double GPUTime;
  double FrameTime;
  double DRSScale;
};
struct TelemetryFpsSample {
  struct TelemetryFpsSample__Class *klass;
  struct MonitorData *monitor;
  struct TelemetryFpsSample__Fields fields;
};
struct TelemetryFpsSample__Array {
  struct TelemetryFpsSample__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TelemetryFpsSample * vector[32];
};
struct IEnumerator_1_TelemetryFpsSample_ {
  struct IEnumerator_1_TelemetryFpsSample___Class *klass;
  struct MonitorData *monitor;
};
struct GameTimer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData OnBeforeSave;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData UpdateValueStoreOnDeath;
};
struct GameTimer__StaticFields {
  struct GameTimer * Instance;
};
struct GameTimer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameTimer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameTimer__VTable vtable;
};
struct IDeathUberStateSetter__VTable {
  VirtualInvokeData UpdateValueStoreOnDeath;
};
struct IDeathUberStateSetter__StaticFields {
};
struct IDeathUberStateSetter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDeathUberStateSetter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDeathUberStateSetter__VTable vtable;
};
struct IEnumerator_1_IDeathUberStateSetter___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_IDeathUberStateSetter___StaticFields {
};
struct IEnumerator_1_IDeathUberStateSetter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_IDeathUberStateSetter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_IDeathUberStateSetter___VTable vtable;
};
struct List_1_IDeathUberStateSetter___VTable {
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
struct List_1_IDeathUberStateSetter___StaticFields {
  struct IDeathUberStateSetter__Array * _emptyArray;
};
struct List_1_IDeathUberStateSetter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_IDeathUberStateSetter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_IDeathUberStateSetter___VTable vtable;
};
struct DeathUberStateManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeathUberStateManager__StaticFields {
  struct List_1_IDeathUberStateSetter_ * s_setters;
};
struct DeathUberStateManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeathUberStateManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeathUberStateManager__VTable vtable;
};}