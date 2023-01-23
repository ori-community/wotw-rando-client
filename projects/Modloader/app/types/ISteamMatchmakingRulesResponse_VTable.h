#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_VTable__Class.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_VTable.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_VTable {
        inline app::ISteamMatchmakingRulesResponse_VTable__Class** type_info = (app::ISteamMatchmakingRulesResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x047756B8));
        inline app::ISteamMatchmakingRulesResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "VTable");
        }
        inline app::ISteamMatchmakingRulesResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_VTable
} // namespace app::classes::types
