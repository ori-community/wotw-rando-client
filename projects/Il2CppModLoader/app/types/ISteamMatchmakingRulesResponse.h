#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse {
        namespace {
            inline app::ISteamMatchmakingRulesResponse__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingRulesResponse__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingRulesResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingRulesResponse__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse");
        }
        inline app::ISteamMatchmakingRulesResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse
} // namespace app::classes::types
