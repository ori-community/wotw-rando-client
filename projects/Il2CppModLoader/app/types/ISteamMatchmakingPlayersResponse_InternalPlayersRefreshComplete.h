#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class** type_info;
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalPlayersRefreshComplete");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete
} // namespace app::classes::types
