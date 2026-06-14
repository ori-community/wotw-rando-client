#pragma once
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse {
        inline app::ISteamMatchmakingRulesResponse__Class** type_info() {
            static app::ISteamMatchmakingRulesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingRulesResponse__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingRulesResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingRulesResponse__Class>(type_info(), "Steamworks", "ISteamMatchmakingRulesResponse");
        }
        inline app::ISteamMatchmakingRulesResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse
} // namespace app::classes::types
