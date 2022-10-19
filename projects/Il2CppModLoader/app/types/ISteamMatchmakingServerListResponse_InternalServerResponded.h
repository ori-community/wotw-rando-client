#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalServerResponded {
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class** type_info = (app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class**)(modloader::win::memory::resolve_rva(0x04738628));
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "InternalServerResponded");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalServerResponded>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalServerResponded
} // namespace app::classes::types
