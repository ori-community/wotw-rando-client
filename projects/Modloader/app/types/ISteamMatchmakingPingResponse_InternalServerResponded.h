#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_InternalServerResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_InternalServerResponded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_InternalServerResponded {
        inline app::ISteamMatchmakingPingResponse_InternalServerResponded__Class** type_info() {
            static app::ISteamMatchmakingPingResponse_InternalServerResponded__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingPingResponse_InternalServerResponded__Class**)(modloader::win::memory::resolve_rva(0x04708CD8));
            }
            return cache;
        }
        inline app::ISteamMatchmakingPingResponse_InternalServerResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_InternalServerResponded__Class>(type_info(), "Steamworks", "ISteamMatchmakingPingResponse", "InternalServerResponded");
        }
        inline app::ISteamMatchmakingPingResponse_InternalServerResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_InternalServerResponded>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_InternalServerResponded
} // namespace app::classes::types
