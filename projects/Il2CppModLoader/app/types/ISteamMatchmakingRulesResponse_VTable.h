#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_VTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingRulesResponse_VTable__Class** type_info;
        inline app::ISteamMatchmakingRulesResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "VTable");
        }
        inline app::ISteamMatchmakingRulesResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_VTable
} // namespace app::classes::types
