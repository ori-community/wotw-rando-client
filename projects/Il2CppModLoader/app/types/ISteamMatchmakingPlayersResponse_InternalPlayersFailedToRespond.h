#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond {
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class** type_info = (app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x047306A8));
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalPlayersFailedToRespond");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond
} // namespace app::classes::types
