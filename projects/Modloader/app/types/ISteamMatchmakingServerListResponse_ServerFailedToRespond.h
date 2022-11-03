#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_ServerFailedToRespond {
        namespace {
            inline app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "ServerFailedToRespond");
        }
        inline app::ISteamMatchmakingServerListResponse_ServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_ServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_ServerFailedToRespond
} // namespace app::classes::types
