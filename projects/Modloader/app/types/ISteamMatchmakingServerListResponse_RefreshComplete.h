#pragma once
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_RefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_RefreshComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_RefreshComplete {
        inline app::ISteamMatchmakingServerListResponse_RefreshComplete__Class** type_info() {
            static app::ISteamMatchmakingServerListResponse_RefreshComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingServerListResponse_RefreshComplete__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingServerListResponse_RefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_RefreshComplete__Class>(type_info(), "Steamworks", "ISteamMatchmakingServerListResponse", "RefreshComplete");
        }
        inline app::ISteamMatchmakingServerListResponse_RefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_RefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_RefreshComplete
} // namespace app::classes::types
