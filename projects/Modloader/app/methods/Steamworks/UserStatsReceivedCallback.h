#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Steamworks_UserStatsReceived_t_.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserStatsReceived_t_Boolean_.h>
#include <Modloader/app/structs/SteamAPICall_t.h>

namespace app::classes::Steamworks::UserStatsReceivedCallback {
    IL2CPP_REGISTER_METHOD(0x027A8220, int32_t, get_CallbackCount, ())
    IL2CPP_REGISTER_METHOD(0x027A8320, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x027A8590, void, RegisterCallback, (app::Action_1_Steamworks_UserStatsReceived_t_ * action))
    IL2CPP_REGISTER_METHOD(0x027A8770, void, UnregisterCallback, (app::Action_1_Steamworks_UserStatsReceived_t_ * action))
    IL2CPP_REGISTER_METHOD(0x027A8980, void, RegisterCallResult, (app::Action_2_Steamworks_UserStatsReceived_t_Boolean_ * action, app::SteamAPICall_t h_api_call))
    IL2CPP_REGISTER_METHOD(0x027A8A90, void, UnregisterCallResult, (app::SteamAPICall_t h_api_call))
    IL2CPP_REGISTER_METHOD(0x027A8BA0, void, BuildCallbackData, ())
    IL2CPP_REGISTER_METHOD(0x027A8FA0, void, OnRunCallback, (void* thisptr, void* pv_param))
    IL2CPP_REGISTER_METHOD(0x027A9140, void, OnRunCallResult, (void* thisptr, void* pv_param, bool b_failed, uint64_t h_steam_a_p_i_call))
    IL2CPP_REGISTER_METHOD(0x027A93B0, int32_t, OnGetCallbackSizeBytes, (void* thisptr))
    IL2CPP_REGISTER_METHOD(0x027A9450, void, cctor, ())
} // namespace app::classes::Steamworks::UserStatsReceivedCallback
