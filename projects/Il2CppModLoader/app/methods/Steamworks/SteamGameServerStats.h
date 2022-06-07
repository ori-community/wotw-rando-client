#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::SteamGameServerStats {
    IL2CPP_REGISTER_METHOD(0x027FD120, app::SteamAPICall_t, RequestUserStats, (app::CSteamID steam_i_d_user))
    IL2CPP_REGISTER_METHOD(0x027FD260, bool, GetUserStat_1, (app::CSteamID steam_i_d_user, app::String * pch_name, int32_t * p_data))
    IL2CPP_REGISTER_METHOD(0x027FD560, bool, GetUserStat_2, (app::CSteamID steam_i_d_user, app::String * pch_name, float * p_data))
    IL2CPP_REGISTER_METHOD(0x027FD860, bool, GetUserAchievement, (app::CSteamID steam_i_d_user, app::String * pch_name, bool * pb_achieved))
    IL2CPP_REGISTER_METHOD(0x027FDB70, bool, SetUserStat_1, (app::CSteamID steam_i_d_user, app::String * pch_name, int32_t n_data))
    IL2CPP_REGISTER_METHOD(0x027FDE70, bool, SetUserStat_2, (app::CSteamID steam_i_d_user, app::String * pch_name, float f_data))
    IL2CPP_REGISTER_METHOD(0x027FE170, bool, UpdateUserAvgRateStat, (app::CSteamID steam_i_d_user, app::String * pch_name, float fl_count_this_session, double d_session_length))
    IL2CPP_REGISTER_METHOD(0x027FE480, bool, SetUserAchievement, (app::CSteamID steam_i_d_user, app::String * pch_name))
    IL2CPP_REGISTER_METHOD(0x027FE770, bool, ClearUserAchievement, (app::CSteamID steam_i_d_user, app::String * pch_name))
    IL2CPP_REGISTER_METHOD(0x027FEA60, app::SteamAPICall_t, StoreUserStats, (app::CSteamID steam_i_d_user))
}
