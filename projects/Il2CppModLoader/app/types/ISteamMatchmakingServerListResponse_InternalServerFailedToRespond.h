#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalServerFailedToRespond {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class** type_info;
        inline app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "InternalServerFailedToRespond");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalServerFailedToRespond
} // namespace app::classes::types
