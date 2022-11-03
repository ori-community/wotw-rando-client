#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete {
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class** type_info = (app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x04715D80));
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesRefreshComplete");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete
} // namespace app::classes::types
