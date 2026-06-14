#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController__Fields_DEFINED)
#include <Modloader/app/structs/GameController_BrokenSavesFixingSettings.h>
#include <Modloader/app/structs/RestartReason__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberAtlassingPlatform__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberAtlassingPlatform__Enum_DEFINED) && defined(IL2CPP_STRUCT_GameController_BrokenSavesFixingSettings_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_RestartReason__Enum_DEFINED)
#define IL2CPP_STRUCT_GameController__Fields_DEFINED
struct GameTimer;
struct DeathUberStateManager;
struct SaveGameController;
struct List_1_UnityEngine_GameObject_;
struct GameScheduler;
struct AllContainer_1_Objective_;
struct List_1_Objective_;
struct UberStateCollectionReference;
struct MessageProvider;
struct SerializedIntUberState;
struct SerializedBooleanUberState;
struct GameController_GameModeBalanceSettings;
struct String;
struct HashSet_1_Moon_ISuspendable_;
struct GameObject;
struct LogCallbackHandler;
struct RestoreCheckpointController;
struct ActionSequence;
struct WorldEvents;
struct List_1_UnityEngine_Object_;
struct Action;
struct PlatformServiceProvider;
struct NintendoSwitch;
struct Dictionary_2_System_Int32_System_Int32_;
struct Action_1_Boolean_;
struct String__Array;
struct INetworkConnectivityChecker;
struct SwitchNetConnectivityChecker;
struct List_1_TelemetryFpsSample_;
struct IProfilingDataProvider;
struct LeaderBoardService;
struct AutomationRunWrapper;
struct GameController__Fields {
    struct SaveSerialize__Fields _;
    bool _IsPressTourBuild_k__BackingField;
    struct GameTimer* Timer;
    struct DeathUberStateManager* DeathUberStateManager;
    struct SaveGameController* SaveGameController;
    struct List_1_UnityEngine_GameObject_* Systems;
    struct GameScheduler* GameScheduler;
    struct AllContainer_1_Objective_* ActiveObjectives;
    struct List_1_Objective_* Objectives;
    struct UberStateCollectionReference* UberStateCollectionReference;
    struct MessageProvider* OfflineMessageProvider;
    struct SerializedIntUberState* GameDifficultyModeUberState;
    struct SerializedBooleanUberState* GameFinishedUberState;
    struct GameController_GameModeBalanceSettings* EasyModeBalanceSettings;
    struct GameController_GameModeBalanceSettings* NormalModeBalanceSettings;
    struct GameController_GameModeBalanceSettings* HardModeBalanceSettings;
    struct String* BuildID;
    struct String* BuildIDString;
    struct String* BuildName;
    UberAtlassingPlatform__Enum AtlasPlatform;

    struct HashSet_1_Moon_ISuspendable_* m_suspendablesToIgnoreForGameplay;
    struct GameObject* m_systemsGameObject;
    struct LogCallbackHandler* m_logCallbackHandler;
    struct RestoreCheckpointController* m_restoreCheckpointController;
    int32_t VSyncCount;
    struct String* m_logOutputFile;
    float m_gameTime;
    struct ActionSequence* GameSaveSequence;
    bool PCTrialValue;
    bool EditorTrialValue;
    struct WorldEvents* DebugWorldEvents;
    bool m_isRestartingGame;
    bool m_setRunInBackgroundToFalse;
    bool RequireInitialValues;
    bool m_isLoadingGame;
    struct List_1_UnityEngine_Object_* Resources;
    bool m_lastDebugControlsEnabledValue;
    int32_t m_previousScreenWidth;
    int32_t m_previousScreenHeight;
    float m_isPackageFullyInstalledTimer;
    struct Action* m_onRestoreCheckpointFinished;
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
    struct PlatformServiceProvider* _PlatformServiceProvider_k__BackingField;
    RestartReason__Enum _RestartReason_k__BackingField;

    struct NintendoSwitch* m_switch;
    struct Dictionary_2_System_Int32_System_Int32_* m_exceptionCache;
    float m_timer;
    float m_lastTime;
    float m_debug_sharpness;
    float m_debug_additional_sharpness;
    float m_debug_resolutionScaleMultiplier;
    float m_internetCheckTimer;
    bool m_previousIsOnline;
    struct Action_1_Boolean_* m_onNetworkStatusChangedCallback;
    struct Action* m_onActuallyOfflineCallback;
    float m_controllerDetectionTimer;
    struct String__Array* m_lastControllers;
    bool _UnityInputJoystickConnected_k__BackingField;
    struct INetworkConnectivityChecker* m_connectivityChecker;
    struct SwitchNetConnectivityChecker* m_switchConnectivityChecker;
    bool IsGameplaySuspended;
    bool DisableCheckpoints;
    float m_timeUntilNextCharacterHeartbeat;
    float m_timeUntilNextPerfSample;
    int32_t m_frameIndexSinceLastSample;
    struct List_1_TelemetryFpsSample_* m_fpsSamples;
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
    struct IProfilingDataProvider* m_dataProvider;
    int32_t HandledShouldUseMinimalTelemetrySet;
    int32_t HandledShouldUseFullTelemetrySet;
    float m_telemetryQueryTime;
    int32_t HandledShouldAllowFriends;
    float m_allowFriendsQueryTime;
    bool ShouldCreateLoadTest;
    int32_t LoadTestAmount;
    int32_t LoadTestInterval;
    int32_t LoadTestTimeout;
    struct LeaderBoardService* m_leaderBoardService;
    struct String* m_replayToUpload;
    int32_t m_replaysToUpload;
    float m_timeout;
    struct AutomationRunWrapper* m_sceneLoadTestRun;
    struct AutomationRunWrapper* m_poolPerfTestRun;
    struct AutomationRunWrapper* m_perfTestRun;
    struct AutomationRunWrapper* m_stressTestRun;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameController__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/AllContainer_1_Objective_.h>
#include <Modloader/app/structs/AutomationRunWrapper.h>
#include <Modloader/app/structs/DeathUberStateManager.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/GameController_GameModeBalanceSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameScheduler.h>
#include <Modloader/app/structs/GameTimer.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/LeaderBoardService.h>
#include <Modloader/app/structs/List_1_Objective_.h>
#include <Modloader/app/structs/List_1_TelemetryFpsSample_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/LogCallbackHandler.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/NintendoSwitch.h>
#include <Modloader/app/structs/PlatformServiceProvider.h>
#include <Modloader/app/structs/RestoreCheckpointController.h>
#include <Modloader/app/structs/SaveGameController.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/SwitchNetConnectivityChecker.h>
#include <Modloader/app/structs/UberStateCollectionReference.h>
#include <Modloader/app/structs/WorldEvents.h>
#endif
#undef IL2CPP_STRUCT_GameController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameController__Fields_FWDDECL)
#include <Modloader/app/structs/GameController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
