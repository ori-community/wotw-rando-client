#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Steamworks_UserStatsStored_t_.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserStatsStored_t_Boolean_.h>
#include <Modloader/app/structs/SteamAPICall_t.h>

namespace app::classes::Steamworks::UserStatsStoredCallback {
    IL2CPP_REGISTER_METHOD(0x027A9760, int32_t, get_CallbackCount, ())
    IL2CPP_REGISTER_METHOD(0x027A9860, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x027A9AD0, void, RegisterCallback, (app::Action_1_Steamworks_UserStatsStored_t_ * action))
    IL2CPP_REGISTER_METHOD(0x027A9CD0, void, UnregisterCallback, (app::Action_1_Steamworks_UserStatsStored_t_ * action))
    IL2CPP_REGISTER_METHOD(0x027A9EE0, void, RegisterCallResult, (app::Action_2_Steamworks_UserStatsStored_t_Boolean_ * action, app::SteamAPICall_t h_api_call))
    IL2CPP_REGISTER_METHOD(0x027A9FF0, void, UnregisterCallResult, (app::SteamAPICall_t h_api_call))
    IL2CPP_REGISTER_METHOD(0x027AA100, void, BuildCallbackData, ())
    IL2CPP_REGISTER_METHOD(0x027AA500, void, OnRunCallback, (void* thisptr, void* pv_param))
    IL2CPP_REGISTER_METHOD(0x027AA690, void, OnRunCallResult, (void* thisptr, void* pv_param, bool b_failed, uint64_t h_steam_a_p_i_call))
    IL2CPP_REGISTER_METHOD(0x027AA8F0, int32_t, OnGetCallbackSizeBytes, (void* thisptr))
    IL2CPP_REGISTER_METHOD(0x027AA990, void, cctor, ())
} // namespace app::classes::Steamworks::UserStatsStoredCallback
