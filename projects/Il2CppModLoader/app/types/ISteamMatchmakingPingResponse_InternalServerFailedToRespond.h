#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_InternalServerFailedToRespond {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class** type_info;
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingPingResponse", "InternalServerFailedToRespond");
        }
        inline app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_InternalServerFailedToRespond
} // namespace app::classes::types
