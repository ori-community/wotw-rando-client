#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_VTable {
        inline app::ISteamMatchmakingPingResponse_VTable__Class** type_info = (app::ISteamMatchmakingPingResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x047875D0));
        inline app::ISteamMatchmakingPingResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingPingResponse", "VTable");
        }
        inline app::ISteamMatchmakingPingResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_VTable
} // namespace app::classes::types
