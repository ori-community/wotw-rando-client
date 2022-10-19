#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_PlayersFailedToRespond {
        namespace {
            inline app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "PlayersFailedToRespond");
        }
        inline app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_PlayersFailedToRespond
} // namespace app::classes::types
