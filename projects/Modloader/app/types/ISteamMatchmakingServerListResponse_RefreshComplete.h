#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_RefreshComplete {
        namespace {
            inline app::ISteamMatchmakingServerListResponse_RefreshComplete__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingServerListResponse_RefreshComplete__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingServerListResponse_RefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_RefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "RefreshComplete");
        }
        inline app::ISteamMatchmakingServerListResponse_RefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_RefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_RefreshComplete
} // namespace app::classes::types
