#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_ServerResponded {
        namespace {
            app::ISteamMatchmakingServerListResponse_ServerResponded__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingServerListResponse_ServerResponded__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingServerListResponse_ServerResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_ServerResponded__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "ServerResponded");
        }
        inline app::ISteamMatchmakingServerListResponse_ServerResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_ServerResponded>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_ServerResponded
} // namespace app::classes::types
