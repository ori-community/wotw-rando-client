#pragma once
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_ServerResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_ServerResponded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_ServerResponded {
        inline app::ISteamMatchmakingServerListResponse_ServerResponded__Class** type_info() {
            static app::ISteamMatchmakingServerListResponse_ServerResponded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingServerListResponse_ServerResponded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingServerListResponse_ServerResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_ServerResponded__Class>(type_info(), "Steamworks", "ISteamMatchmakingServerListResponse", "ServerResponded");
        }
        inline app::ISteamMatchmakingServerListResponse_ServerResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_ServerResponded>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_ServerResponded
} // namespace app::classes::types
