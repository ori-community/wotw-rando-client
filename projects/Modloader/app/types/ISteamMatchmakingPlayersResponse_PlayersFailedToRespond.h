#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_PlayersFailedToRespond {
        inline app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class** type_info() {
            static app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class>(type_info(), "Steamworks", "ISteamMatchmakingPlayersResponse", "PlayersFailedToRespond");
        }
        inline app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_PlayersFailedToRespond
} // namespace app::classes::types
