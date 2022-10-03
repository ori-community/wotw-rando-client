#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse {
        namespace {
            app::ISteamMatchmakingRulesResponse__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingRulesResponse__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingRulesResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingRulesResponse__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse");
        }
        inline app::ISteamMatchmakingRulesResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse
} // namespace app::classes::types
