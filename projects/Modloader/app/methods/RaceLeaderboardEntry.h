#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RaceLeaderboardEntry {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String*, get_PlayerName, (app::RaceLeaderboardEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_PlayerName, (app::RaceLeaderboardEntry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_UserID, (app::RaceLeaderboardEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_UserID, (app::RaceLeaderboardEntry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00E9F800, void, Configure, (app::RaceLeaderboardEntry * this_ptr, int32_t rank, app::String* player_name, float time, bool is_me, bool add_accuracy, bool hide_rank, bool is_live_entry, app::String* user_i_d))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RaceLeaderboardEntry * this_ptr))
} // namespace app::classes::RaceLeaderboardEntry
