#pragma once
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesResponded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesResponded {
        inline app::ISteamMatchmakingRulesResponse_RulesResponded__Class** type_info() {
            static app::ISteamMatchmakingRulesResponse_RulesResponded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingRulesResponse_RulesResponded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingRulesResponse_RulesResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesResponded__Class>(type_info(), "Steamworks", "ISteamMatchmakingRulesResponse", "RulesResponded");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesResponded>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesResponded
} // namespace app::classes::types
