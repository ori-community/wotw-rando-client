#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesResponded {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class** type_info;
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesResponded");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesResponded>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesResponded
} // namespace app::classes::types
