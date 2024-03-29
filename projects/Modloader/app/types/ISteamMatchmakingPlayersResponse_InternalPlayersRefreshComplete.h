#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete {
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class** type_info() {
            static app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x04712DD0));
            }
            return cache;
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class>(type_info(), "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalPlayersRefreshComplete");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete
} // namespace app::classes::types
