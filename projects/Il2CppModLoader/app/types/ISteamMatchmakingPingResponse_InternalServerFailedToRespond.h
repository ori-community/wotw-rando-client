#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_InternalServerFailedToRespond {
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class** type_info = (app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x0475FAF0));
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingPingResponse", "InternalServerFailedToRespond");
        }
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_InternalServerFailedToRespond
} // namespace app::classes::types
