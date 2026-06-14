#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_VTable.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_VTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_VTable {
        inline app::ISteamMatchmakingPingResponse_VTable__Class** type_info() {
            static app::ISteamMatchmakingPingResponse_VTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingPingResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x047875D0));
            }
            return cache;
        }
        inline app::ISteamMatchmakingPingResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_VTable__Class>(type_info(), "Steamworks", "ISteamMatchmakingPingResponse", "VTable");
        }
        inline app::ISteamMatchmakingPingResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_VTable
} // namespace app::classes::types
