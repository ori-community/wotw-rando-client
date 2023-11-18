#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_AddPlayerToList.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_AddPlayerToList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_AddPlayerToList {
        inline app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class** type_info() {
            static app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class>(type_info(), "Steamworks", "ISteamMatchmakingPlayersResponse", "AddPlayerToList");
        }
        inline app::ISteamMatchmakingPlayersResponse_AddPlayerToList* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_AddPlayerToList>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_AddPlayerToList
} // namespace app::classes::types
