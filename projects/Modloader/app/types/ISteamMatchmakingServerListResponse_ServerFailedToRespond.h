#pragma once
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_ServerFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_ServerFailedToRespond {
        inline app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class** type_info() {
            static app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class>(type_info(), "Steamworks", "ISteamMatchmakingServerListResponse", "ServerFailedToRespond");
        }
        inline app::ISteamMatchmakingServerListResponse_ServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_ServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_ServerFailedToRespond
} // namespace app::classes::types
