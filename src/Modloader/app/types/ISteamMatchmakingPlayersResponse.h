#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse {
        inline app::ISteamMatchmakingPlayersResponse__Class** type_info() {
            static app::ISteamMatchmakingPlayersResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingPlayersResponse__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingPlayersResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingPlayersResponse__Class>(type_info(), "Steamworks", "ISteamMatchmakingPlayersResponse");
        }
        inline app::ISteamMatchmakingPlayersResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse
} // namespace app::classes::types
