#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesRefreshComplete {
        namespace {
            inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "RulesRefreshComplete");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesRefreshComplete
} // namespace app::classes::types
