#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond {
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class** type_info() {
            static app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x047306A8));
            }
            return cache;
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class>(type_info(), "Steamworks", "ISteamMatchmakingPlayersResponse", "InternalPlayersFailedToRespond");
        }
        inline app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond
} // namespace app::classes::types
