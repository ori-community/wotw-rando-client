#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_AddPlayerToList.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersRefreshComplete.h>

namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse {
    IL2CPP_REGISTER_METHOD(
        0x015FC610,
        void,
        ctor,
        app::ISteamMatchmakingPlayersResponse* this_ptr,
        app::ISteamMatchmakingPlayersResponse_AddPlayerToList* on_add_player_to_list,
        app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* on_players_failed_to_respond,
        app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* on_players_refresh_complete
    )
    IL2CPP_REGISTER_METHOD(0x015FCBD0, void, Finalize, app::ISteamMatchmakingPlayersResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015FCCE0,
        void,
        InternalOnAddPlayerToList,
        app::ISteamMatchmakingPlayersResponse* this_ptr,
        void* thisptr,
        void* pch_name,
        int32_t n_score,
        float fl_time_played
    )
    IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnPlayersFailedToRespond, app::ISteamMatchmakingPlayersResponse* this_ptr, void* thisptr)
    IL2CPP_REGISTER_METHOD(0x012CB380, void, InternalOnPlayersRefreshComplete, app::ISteamMatchmakingPlayersResponse* this_ptr, void* thisptr)
    IL2CPP_REGISTER_METHOD(0x015FC460, void*, op_Explicit, app::ISteamMatchmakingPlayersResponse* that)
} // namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse
