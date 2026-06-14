#pragma once
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_InternalServerResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_InternalServerResponded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalServerResponded {
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class** type_info() {
            static app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class**)(modloader::win::memory::resolve_rva(0x04738628));
            }
            return cache;
        }
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class>(type_info(), "Steamworks", "ISteamMatchmakingServerListResponse", "InternalServerResponded");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalServerResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalServerResponded>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalServerResponded
} // namespace app::classes::types
