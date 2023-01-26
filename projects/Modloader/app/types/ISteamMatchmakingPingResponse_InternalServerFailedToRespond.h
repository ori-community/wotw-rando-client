#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_InternalServerFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_InternalServerFailedToRespond {
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class** type_info() {
            static app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x0475FAF0));
            }
            return cache;
        }
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class>(type_info(), "Steamworks", "ISteamMatchmakingPingResponse", "InternalServerFailedToRespond");
        }
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_InternalServerFailedToRespond
} // namespace app::classes::types
