#pragma once
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete {
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class** type_info() {
            static app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x04715D80));
            }
            return cache;
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class>(type_info(), "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesRefreshComplete");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete
} // namespace app::classes::types
