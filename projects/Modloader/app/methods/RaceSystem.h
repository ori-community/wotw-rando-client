#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/GhostService.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/ITrialHandler.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/RaceBaseState.h>
#include <Modloader/app/structs/RaceConfiguration.h>
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/RaceStateMachineContext.h>
#include <Modloader/app/structs/RaceSystem.h>
#include <Modloader/app/structs/RaceSystem_PrimaryFilter__Enum.h>
#include <Modloader/app/structs/RaceSystem_SecondaryFilter__Enum.h>
#include <Modloader/app/structs/RaceTargetIndicator.h>
#include <Modloader/app/structs/RaceTimer.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::RaceSystem {
    IL2CPP_REGISTER_METHOD(0x0071E490, app::RaceSystem*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x0071E530, void, set_Instance, app::RaceSystem* value)
    IL2CPP_REGISTER_METHOD(0x0071E5E0, bool, get_ShowDebug, )
    IL2CPP_REGISTER_METHOD(0x0071E680, void, set_ShowDebug, bool value)
    IL2CPP_REGISTER_METHOD(0x0071E7B0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsSuspended, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_IsSuspended, app::RaceSystem* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::SuspendableMask__Enum, get_Mask, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071E930, void, set_Mask, app::RaceSystem* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::RaceTimer*, get_Timer, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071E9E0, app::GhostRecorder*, get_Recorder, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::RaceLeaderboardScreen*, get_LeaderboardScreen, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAB0, app::RaceTargetIndicator*, get_TargetIndicator, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAC0, void, WroteOfflineReplayFiles, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_IsLoadingRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAD0, float, get_CurrentStateTime, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAF0, bool, get_IsIdle, )
    IL2CPP_REGISTER_METHOD(0x0071ECA0, bool, get_AllowSpawn, )
    IL2CPP_REGISTER_METHOD(0x0071EE50, bool, IsOverridingState, app::IUberState* state)
    IL2CPP_REGISTER_METHOD(0x0071F090, void, RequestSceneLoading, app::List_1_SceneMetaData_* scenes)
    IL2CPP_REGISTER_METHOD(0x0071F210, app::RaceStateMachineContext*, get_Context, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F220, void, set_Context, app::RaceSystem* this_ptr, app::RaceStateMachineContext* value)
    IL2CPP_REGISTER_METHOD(0x0071F230, bool, get_IsSpectatingRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F300, bool, get_IsRunningRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F3D0, bool, get_IsStoppedRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F4A0, bool, get_IsPreparingRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F570, app::LeaderboardFilter__Enum, get_LeaderboardFilter, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004B67E0, app::RaceSystem_PrimaryFilter__Enum, get_CurrentPrimaryFilter, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004B67F0, void, set_CurrentPrimaryFilter, app::RaceSystem* this_ptr, app::RaceSystem_PrimaryFilter__Enum value)
    IL2CPP_REGISTER_METHOD(0x0071F5B0, app::RaceSystem_SecondaryFilter__Enum, get_CurrentSecondaryFilter, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F5C0, void, set_CurrentSecondaryFilter, app::RaceSystem* this_ptr, app::RaceSystem_SecondaryFilter__Enum value)
    IL2CPP_REGISTER_METHOD(0x0071F5D0, void, InitializeStateMachine, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::StateMachine_2*, get_StateMachine, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720050, bool, get_HasState, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720080, app::RaceBaseState*, get_CurrentState, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720150, app::GhostService*, get_GhostService, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720160, bool, IsInState_1, app::RaceSystem* this_ptr, app::IState_2* state)
    IL2CPP_REGISTER_METHOD(0x00720190, bool, get_ShouldLockEquipment, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720290, void, Awake, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720630, void, NetworkStatusChangedCallback, app::RaceSystem* this_ptr, bool online)
    IL2CPP_REGISTER_METHOD(0x00720640, void, SetupContext, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720BF0, void, FixedUpdate, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720ED0, bool, get_IsShowingFloatingLeaderboard, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720EE0, void, ShowFloatingLeaderboards, app::RaceSystem* this_ptr, app::ITrialData* data)
    IL2CPP_REGISTER_METHOD(0x00721120, void, HideFloatingLeaderboards, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721180, void, OnDestroy, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721330, void, OnGameReset, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721380, void, StartRace, app::RaceSystem* this_ptr, app::RaceConfiguration* config)
    IL2CPP_REGISTER_METHOD(0x007213C0, void, Spectate, app::RaceSystem* this_ptr, app::ITrialData* data, app::ITrialHandler* handler)
    IL2CPP_REGISTER_METHOD(0x00721560, void, Race, app::RaceSystem* this_ptr, app::ITrialData* data, app::ITrialHandler* handler)
    IL2CPP_REGISTER_METHOD(0x00721A30, void, Leaderboard, app::RaceSystem* this_ptr, app::ITrialData* race, app::ITrialHandler* handler)
    IL2CPP_REGISTER_METHOD(0x00721BD0, void, CancelRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721CD0, void, RestartRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721D90, void, SkipAction, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721DC0, void, FinishRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721DF0, void, ResetMusicState, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721F00, void, TogglePrimaryFilterState, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721F20, void, ToggleSecondaryFilterState, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721F40, app::MessageProvider*, GetLeaderboardFilterMessage, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00721F60, void, OnGUI, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00722460, void, StartRaceFromMainMenu, app::RaceSystem* this_ptr, app::RaceSettings* settings)
    IL2CPP_REGISTER_METHOD(0x00722890, app::IEnumerator*, StartRaceFromMainMenuCoroutine, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007229E0, void, OnFinishedLoadingGoingToScene, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00722DE0, void, OnFinishedLoadingRace, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00722F40, void, UnloadScene, app::RaceSystem* this_ptr, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x00723050, void, ctor, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00723480, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01B350F0, bool, IsInState_2, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_1, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B350F0, bool, IsInState_3, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_2, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_3, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_4, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_5, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_6, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_7, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_8, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_9, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01555460, void, ChangeState_10, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B350F0, bool, IsInState_4, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B350F0, bool, IsInState_5, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B350F0, bool, IsInState_6, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B350F0, bool, IsInState_7, app::RaceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B350F0, bool, IsInState_8, app::RaceSystem* this_ptr)
} // namespace app::classes::RaceSystem
