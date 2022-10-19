#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_VTable {
        inline app::ISteamMatchmakingPlayersResponse_VTable__Class** type_info = (app::ISteamMatchmakingPlayersResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x04794D38));
        inline app::ISteamMatchmakingPlayersResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "VTable");
        }
        inline app::ISteamMatchmakingPlayersResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_VTable
} // namespace app::classes::types
