#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_InternalServerFailedToRespond.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalServerFailedToRespond {
        inline app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class** type_info = (app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x04705C88));
        inline app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "InternalServerFailedToRespond");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalServerFailedToRespond
} // namespace app::classes::types
