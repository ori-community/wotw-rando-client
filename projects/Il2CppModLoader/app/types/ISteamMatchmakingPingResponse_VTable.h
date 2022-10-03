#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_VTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingPingResponse_VTable__Class** type_info;
        inline app::ISteamMatchmakingPingResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingPingResponse", "VTable");
        }
        inline app::ISteamMatchmakingPingResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_VTable
} // namespace app::classes::types
