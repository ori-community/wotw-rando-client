#pragma once
#include <Modloader/app/structs/ISteamMatchmakingPingResponse.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse {
        inline app::ISteamMatchmakingPingResponse__Class** type_info() {
            static app::ISteamMatchmakingPingResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingPingResponse__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingPingResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingPingResponse__Class>(type_info(), "Steamworks", "ISteamMatchmakingPingResponse");
        }
        inline app::ISteamMatchmakingPingResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse
} // namespace app::classes::types
