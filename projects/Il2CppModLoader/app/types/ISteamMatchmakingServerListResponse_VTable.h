#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_VTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingServerListResponse_VTable__Class** type_info;
        inline app::ISteamMatchmakingServerListResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "VTable");
        }
        inline app::ISteamMatchmakingServerListResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_VTable
} // namespace app::classes::types
