#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse {
        namespace {
            inline app::ISteamMatchmakingPingResponse__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingPingResponse__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingPingResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingPingResponse__Class>(type_info, "Steamworks", "ISteamMatchmakingPingResponse");
        }
        inline app::ISteamMatchmakingPingResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse
} // namespace app::classes::types
