#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalAddPlayerToList.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalAddPlayerToList {
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class** type_info() {
            static app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class**)(modloader::win::memory::resolve_rva(0x0476E5B0));
            }
            return cache;
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class>(type_info(), "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalAddPlayerToList");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalAddPlayerToList
} // namespace app::classes::types
