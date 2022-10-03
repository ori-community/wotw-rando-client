#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class** type_info;
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesRefreshComplete");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete
} // namespace app::classes::types
