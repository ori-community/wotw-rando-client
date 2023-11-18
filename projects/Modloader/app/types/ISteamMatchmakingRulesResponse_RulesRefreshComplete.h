#pragma once
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesRefreshComplete {
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class** type_info() {
            static app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class>(type_info(), "Steamworks", "ISteamMatchmakingRulesResponse", "RulesRefreshComplete");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesRefreshComplete
} // namespace app::classes::types
