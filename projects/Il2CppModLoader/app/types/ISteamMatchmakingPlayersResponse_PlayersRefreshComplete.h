#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_PlayersRefreshComplete {
        namespace {
            app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "PlayersRefreshComplete");
        }
        inline app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_PlayersRefreshComplete
} // namespace app::classes::types
