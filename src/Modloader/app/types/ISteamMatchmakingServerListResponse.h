#pragma once
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse {
        inline app::ISteamMatchmakingServerListResponse__Class** type_info() {
            static app::ISteamMatchmakingServerListResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingServerListResponse__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingServerListResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingServerListResponse__Class>(type_info(), "Steamworks", "ISteamMatchmakingServerListResponse");
        }
        inline app::ISteamMatchmakingServerListResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse
} // namespace app::classes::types
