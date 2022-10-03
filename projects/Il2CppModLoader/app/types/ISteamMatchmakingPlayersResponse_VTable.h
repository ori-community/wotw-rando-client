#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_VTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingPlayersResponse_VTable__Class** type_info;
        inline app::ISteamMatchmakingPlayersResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "VTable");
        }
        inline app::ISteamMatchmakingPlayersResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_VTable
} // namespace app::classes::types
