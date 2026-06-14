#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#include <Modloader/app/structs/GameController.h>
#include <Modloader/app/structs/GameController_GameDifficultyModes__Enum.h>
#include <Modloader/app/structs/GameController_GameModeBalanceSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameParameters.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IRaceServiceProvider.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_TelemetryFpsSample_.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/Objective.h>
#include <Modloader/app/structs/PlatformServiceProvider.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>
#include <Modloader/app/structs/RestartReason__Enum.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/WorldEventsOnAwake.h>

namespace app::classes::GameController {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsPressTourBuild, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsPressTourBuild, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00689940, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00689A60, app::GameController_GameDifficultyModes__Enum, get_GameDifficultyMode, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689A90, void, set_GameDifficultyMode, app::GameController* this_ptr, app::GameController_GameDifficultyModes__Enum value)
    IL2CPP_REGISTER_METHOD(0x00689BE0, bool, get_GameFinished, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_GameTime, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689CD0, bool, get_IsLoadingGame, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689CE0, void, set_IsLoadingGame, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_MainMenuCanBeOpened, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689DB0, void, set_MainMenuCanBeOpened, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00689DC0, bool, get_SecondaryMapAndInventoryCanBeOpened, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689DD0, void, set_SecondaryMapAndInventoryCanBeOpened, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00689DE0, app::GameParameters*, get_Parameters, )
    IL2CPP_REGISTER_METHOD(0x00689E80, void, set_Parameters, app::GameParameters* value)
    IL2CPP_REGISTER_METHOD(0x00689F30, app::String*, get_GameParametersFilePath, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A020, int32_t, get_GameTimeInSeconds, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A0E0, bool, get_IsPackageFullyInstalled, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_IsTrial, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A190, bool, get_IsDemo, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A250, bool, get_InputLocked, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A390, bool, get_LockInputByAction, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A3A0, void, set_LockInputByAction, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0068A3B0, bool, get_LockInput, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A3C0, void, set_LockInput, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0068A3D0, void, LockInputForDuration, app::GameController* this_ptr, float lock_time)
    IL2CPP_REGISTER_METHOD(0x0068A490, bool, get_GameInTitleScreen, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005FA060, bool, get_PreventFocusPause, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A4E0, void, set_PreventFocusPause, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0068A4F0, bool, get_IsSuspended, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A500, void, set_IsSuspended, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0068A510, app::SuspendableMask__Enum, get_Mask, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A520, void, set_Mask, app::GameController* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0068A5E0, bool, get_CanSendNetCommunications, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A5F0, void, PerformSaveGameSequence, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A770, void, GoToEndTrialScreen, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A9B0, void, OnFinishedLoadingTrialEndScene, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A9C0, void, OnGameReset, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068ACD0, void, RemoveGameplayObjects, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B710, void, ResetStateForDebugMenuGoToScene, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B730, void, ResetStateForLoremasterReplayGoToScene, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B750, void, GoBackToMainMenu, app::GameController* this_ptr, bool select_save_slot, app::RestartReason__Enum reason)
    IL2CPP_REGISTER_METHOD(0x0068B8B0, void, RestartingFinished, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_IsRestarting, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B8D0, void, RestartGame, app::GameController* this_ptr, bool select_saveslot)
    IL2CPP_REGISTER_METHOD(0x0068BF00, void, OnFinishedRestarting, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068C050, app::IEnumerator*, RestartingCleanupNextFrame, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068C1A0, void, StartNewGame, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0068C1E0,
        app::PlayerLoopSystem,
        FilterLoopSubsytems,
        app::GameController* this_ptr,
        app::PlayerLoopSystem root,
        app::Type__Array* types
    )
    IL2CPP_REGISTER_METHOD(0x0068C450, void, Initialize, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068D630, app::PlatformServiceProvider*, get_PlatformServiceProvider, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068D640, void, set_PlatformServiceProvider, app::GameController* this_ptr, app::PlatformServiceProvider* value)
    IL2CPP_REGISTER_METHOD(0x0068D650, app::IRaceServiceProvider*, get_RaceServiceServiceProvider, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068D680, app::RestartReason__Enum, get_RestartReason, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068D690, void, set_RestartReason, app::GameController* this_ptr, app::RestartReason__Enum value)
    IL2CPP_REGISTER_METHOD(0x0068D6A0, void, PutUnderSystems, app::GameController* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x0068D780, void, OnGameAwake, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068DE80, void, InitializeSwitch, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068E050, void, HandleTestRunners, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068E390, app::IEnumerator*, Start, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldRegisterToHandleLogMessageReceived, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldHashAndSendExceptionTelemetry, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068E4E0, void, OnCurrentValueStoreChanged, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0068E580,
        void,
        OnLogMessageReceived,
        app::GameController* this_ptr,
        app::String* condition,
        app::String* stacktrace,
        app::LogType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x0068ECA0, int32_t, get_TotalExceptionsCount, )
    IL2CPP_REGISTER_METHOD(0x0068ED40, int32_t, get_RecentExceptionsCount, )
    IL2CPP_REGISTER_METHOD(0x0068EDE0, void, ResetRecentExceptionsCount, )
    IL2CPP_REGISTER_METHOD(0x0068EE80, void, ProcessGameParamsSwitch, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068EF70, void, ParseCommandLineArgs, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068FE50, app::IEnumerator*, StartBuildInScene, app::GameController* this_ptr, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x0068FFA0, app::String*, ParseArgument, app::GameController* this_ptr, app::String* flag)
    IL2CPP_REGISTER_METHOD(0x006903A0, void, OnApplicationFocus, app::GameController* this_ptr, bool focus_status)
    IL2CPP_REGISTER_METHOD(0x00690680, app::IEnumerator*, SetRunInBackgroundToTrue, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006907D0, app::IEnumerator*, LoadAssets, app::GameController* this_ptr, app::List_1_System_String_* assets_to_load)
    IL2CPP_REGISTER_METHOD(0x00690920, void, OnDestroy, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00690BF0, void, OnPostRestoreCheckpoint, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00690C00, void, FixBrokenSave, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00690CD0, void, FixQuestStateNotSavedAfterAct1, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00690EB0, void, DiscoverSilentWoodsAreasIfNeeded, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00691140, void, ResetInputLocks, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::GameController* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00691150, void, WarmUpResources, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00691730, app::IEnumerator*, WarmUpResourcesRoutine, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00691880,
        void,
        SetupGameplay,
        app::GameController* this_ptr,
        app::SceneRoot* scene_root,
        app::WorldEventsOnAwake* world_events_on_awake
    )
    IL2CPP_REGISTER_METHOD(0x00691BF0, void, OnApplicationQuit, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00691E00, void, Update, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckPackageFullyInstalled, )
    IL2CPP_REGISTER_METHOD(0x00692380, void, FixedUpdate, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00692C80, void, RegisterOnNetworkStatusChangedCallback, app::GameController* this_ptr, app::Action_1_Boolean_* action)
    IL2CPP_REGISTER_METHOD(0x00692D40, void, RegisterOnActuallyOfflineCallback, app::GameController* this_ptr, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x00692E00, void, HandleOnlineCallback, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00692F70, void, OnNetworkStatusChanged, app::GameController* this_ptr, bool online)
    IL2CPP_REGISTER_METHOD(0x00693060, void, ShowOfflineHint, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0520, bool, get_UnityInputJoystickConnected, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00693140, void, set_UnityInputJoystickConnected, app::GameController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00693150, void, HandleControllerConnectionTracking, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006934C0, bool, get_ShowDebug, )
    IL2CPP_REGISTER_METHOD(0x00693560, void, set_ShowDebug, bool value)
    IL2CPP_REGISTER_METHOD(0x00693690, void, OnGUI, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006951B0, void, ProcessScheduledTests, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00695500, app::Objective*, GetObjectiveFromIndex, app::GameController* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x006955D0, int32_t, GetObjectiveIndex, app::GameController* this_ptr, app::Objective* objective)
    IL2CPP_REGISTER_METHOD(0x00695690, void, SuspendGameplay, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00695750, void, ResumeGameplay, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00695800, void, SuspendGameplayForUI, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006958C0, void, ResumeGameplayForUI, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00695970, void, CreateCheckpointWithSave, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00695980, void, CreateCheckpoint, app::GameController* this_ptr, bool do_perform_save, bool respect_restrict_checkpoint_zone)
    IL2CPP_REGISTER_METHOD(0x00695BF0, void, RestoreCheckpoint, app::GameController* this_ptr, app::Action* on_finished)
    IL2CPP_REGISTER_METHOD(0x00695D80, void, RestoreCheckpointImmediate_1, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00695FF0, void, RestoreCheckpointImmediate_2, app::GameController* this_ptr, bool from_disc)
    IL2CPP_REGISTER_METHOD(0x00696040, bool, IsOriInSafeSpotForCheckpoint, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696100, void, HandleTrialData, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleCommands, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleBuildIDString, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696420, int32_t, get_MaxConsecutiveFramesCpuTimeOver25Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696430, void, set_MaxConsecutiveFramesCpuTimeOver25Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696440, int32_t, get_MaxConsecutiveFramesCpuTimeOver33Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696450, void, set_MaxConsecutiveFramesCpuTimeOver33Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696460, int32_t, get_MaxConsecutiveFramesCpuTimeOver50Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696470, void, set_MaxConsecutiveFramesCpuTimeOver50Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696480, int32_t, get_MaxConsecutiveFramesGpuTimeOver25Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696490, void, set_MaxConsecutiveFramesGpuTimeOver25Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006964A0, int32_t, get_MaxConsecutiveFramesGpuTimeOver33Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006964B0, void, set_MaxConsecutiveFramesGpuTimeOver33Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006964C0, int32_t, get_MaxConsecutiveFramesGpuTimeOver50Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006964D0, void, set_MaxConsecutiveFramesGpuTimeOver50Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006964E0, int32_t, get_MaxConsecutiveFramesFrameTimeOver25Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006964F0, void, set_MaxConsecutiveFramesFrameTimeOver25Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696500, int32_t, get_MaxConsecutiveFramesFrameTimeOver33Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696510, void, set_MaxConsecutiveFramesFrameTimeOver33Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696520, int32_t, get_MaxConsecutiveFramesFrameTimeOver50Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696530, void, set_MaxConsecutiveFramesFrameTimeOver50Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696540, int32_t, get_MaxConsecutiveFramesFrameTimeOver1000Ms, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696550, void, set_MaxConsecutiveFramesFrameTimeOver1000Ms, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696560, int32_t, get_MaxSceneUnloadsSinceLastResourceCollect, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696570, void, set_MaxSceneUnloadsSinceLastResourceCollect, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696580, int32_t, get_AvgDRSScaleX1, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696590, void, set_AvgDRSScaleX1, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006965A0, int32_t, get_AvgDRSScaleX2, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006965B0, void, set_AvgDRSScaleX2, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006965C0, int32_t, get_AvgDRSScaleX3, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006965D0, void, set_AvgDRSScaleX3, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006965E0, int32_t, get_AvgDRSScaleX4, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006965F0, void, set_AvgDRSScaleX4, app::GameController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00696600, app::List_1_TelemetryFpsSample_*, get_FPSSamples, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696610, void, HandleTelemetryKillSwitch, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleFriendsKillSwitch, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696F20, void, HandleTelemetry, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697A40, void, ResetFpsTelemetryData, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697A70, void, ResetInstantiationsTelemetryData, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleLoadTest, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697B60, void, EnsureRuntimeScene, )
    IL2CPP_REGISTER_METHOD(0x00697D30, app::GameController_GameModeBalanceSettings*, get_CurrentGameModeBalanceSettings, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697E30, float, GetOriDealtDamageMultiplier, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697E50, float, GetOriReceivedDamageMultiplier, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697E70, float, GetExperienceOrbCostMultiplier, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697E90, float, GetBossesHealthMultiplier, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697EB0, float, GetEscapeSpeedMultiplier, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00697ED0, void, ctor, app::GameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00698BE0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x00698E60, void, _HandleTelemetryKillSwitch_b__332_0, app::GameController* this_ptr, app::ExecuteCloudScriptResult* success)
    IL2CPP_REGISTER_METHOD(0x00699050, void, _HandleTelemetryKillSwitch_b__332_1, app::GameController* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x00699150, void, _HandleTelemetryKillSwitch_b__332_2, app::GameController* this_ptr, app::ExecuteCloudScriptResult* success)
    IL2CPP_REGISTER_METHOD(0x00699340, void, _HandleTelemetryKillSwitch_b__332_3, app::GameController* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x00699440, void, _HandleFriendsKillSwitch_b__333_0, app::GameController* this_ptr, app::ExecuteCloudScriptResult* success)
    IL2CPP_REGISTER_METHOD(0x00699630, void, _HandleFriendsKillSwitch_b__333_1, app::GameController* this_ptr, app::PlayFabError* error)
} // namespace app::classes::GameController
