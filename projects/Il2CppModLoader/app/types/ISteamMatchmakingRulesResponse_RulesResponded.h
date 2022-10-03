#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesResponded {
        namespace {
            app::ISteamMatchmakingRulesResponse_RulesResponded__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingRulesResponse_RulesResponded__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingRulesResponse_RulesResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesResponded__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "RulesResponded");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesResponded>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesResponded
} // namespace app::classes::types
