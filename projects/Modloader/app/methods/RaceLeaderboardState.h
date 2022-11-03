#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RaceLeaderboardState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RaceLeaderboardState * this_ptr, app::RaceSystem* race_system))
    IL2CPP_REGISTER_METHOD(0x00EA3910, void, OnEnter, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA40F0, void, OnSelected, (app::RaceLeaderboardState * this_ptr, app::String* player_name, bool spectate))
    IL2CPP_REGISTER_METHODINFO(0x04754CC0, RaceLeaderboardState_OnSelected__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EA43E0, void, OnCancelDownload, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475FB50, RaceLeaderboardState_OnCancelDownload__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EA4560, void, OnBackPressed, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B2E8, RaceLeaderboardState_OnBackPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EA4670, void, UpdateState, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA5180, bool, IsValidReplay, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EA5520, void, OnExit, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (app::RaceLeaderboardState * this_ptr, app::RaceConfiguration* config))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (app::RaceLeaderboardState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (app::RaceLeaderboardState * this_ptr))
} // namespace app::classes::RaceLeaderboardState
