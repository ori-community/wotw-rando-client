#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalAddPlayerToList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class** type_info;
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalAddPlayerToList");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalAddPlayerToList
} // namespace app::classes::types
