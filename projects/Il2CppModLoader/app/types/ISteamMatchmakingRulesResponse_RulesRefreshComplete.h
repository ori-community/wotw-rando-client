#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesRefreshComplete {
        namespace {
            app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "RulesRefreshComplete");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesRefreshComplete
} // namespace app::classes::types
