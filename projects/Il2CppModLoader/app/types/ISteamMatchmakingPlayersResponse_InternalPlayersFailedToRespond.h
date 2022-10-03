#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class** type_info;
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalPlayersFailedToRespond");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond
} // namespace app::classes::types
