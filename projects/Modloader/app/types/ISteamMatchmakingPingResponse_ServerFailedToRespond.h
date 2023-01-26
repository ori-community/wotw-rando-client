#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerFailedToRespond__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_ServerFailedToRespond {
        inline app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class** type_info() {
            static app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class>(type_info(), "Steamworks", "ISteamMatchmakingPingResponse", "ServerFailedToRespond");
        }
        inline app::ISteamMatchmakingPingResponse_ServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_ServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_ServerFailedToRespond
} // namespace app::classes::types
