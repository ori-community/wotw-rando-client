#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesResponded {
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class** type_info = (app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class**)(modloader::win::memory::resolve_rva(0x0475F880));
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesResponded");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesResponded>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesResponded
} // namespace app::classes::types
