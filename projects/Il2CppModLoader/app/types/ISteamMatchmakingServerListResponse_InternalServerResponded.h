#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalServerResponded {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class** type_info;
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "InternalServerResponded");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalServerResponded>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalServerResponded
} // namespace app::classes::types
