#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LeaderboardData_Entry {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, uint32_t, get_Rank, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Rank, (app::LeaderboardData_Entry * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_UserID, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_UserID, (app::LeaderboardData_Entry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_UserHandle, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_UserHandle, (app::LeaderboardData_Entry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x015B7110, void, ctor, (app::LeaderboardData_Entry * this_ptr, app::Leaderboard__Enum leaderboard, uint32_t rank, int32_t score, app::String* user_i_d, app::String* user_handle, bool is_steam_entry, bool is_live_entry))
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Time, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_DeathCount, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CompletionPercentage, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsSteamEntry, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_IsSteamEntry, (app::LeaderboardData_Entry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_IsLiveEntry, (app::LeaderboardData_Entry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_IsLiveEntry, (app::LeaderboardData_Entry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x015B74D0, app::String*, ToString, (app::LeaderboardData_Entry * this_ptr))
} // namespace app::classes::LeaderboardData_Entry
