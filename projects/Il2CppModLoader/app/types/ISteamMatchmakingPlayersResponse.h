#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse {
        namespace {
            app::ISteamMatchmakingPlayersResponse__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingPlayersResponse__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingPlayersResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingPlayersResponse__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse");
        }
        inline app::ISteamMatchmakingPlayersResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse
} // namespace app::classes::types
