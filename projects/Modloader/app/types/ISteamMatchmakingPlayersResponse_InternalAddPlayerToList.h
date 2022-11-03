#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalAddPlayerToList {
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class** type_info = (app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class**)(modloader::win::memory::resolve_rva(0x0476E5B0));
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalAddPlayerToList");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalAddPlayerToList
} // namespace app::classes::types
