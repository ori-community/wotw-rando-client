#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_AddPlayerToList {
        namespace {
            inline app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_AddPlayerToList__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "AddPlayerToList");
        }
        inline app::ISteamMatchmakingPlayersResponse_AddPlayerToList* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_AddPlayerToList>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_AddPlayerToList
} // namespace app::classes::types
