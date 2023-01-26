#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_PlayersRefreshComplete {
        inline app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class** type_info() {
            static app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class>(type_info(), "Steamworks", "ISteamMatchmakingPlayersResponse", "PlayersRefreshComplete");
        }
        inline app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_PlayersRefreshComplete
} // namespace app::classes::types
