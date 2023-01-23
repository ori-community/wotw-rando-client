#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerResponded__Class.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerResponded.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_ServerResponded {
        namespace {
            inline app::ISteamMatchmakingPingResponse_ServerResponded__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingPingResponse_ServerResponded__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingPingResponse_ServerResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_ServerResponded__Class>(type_info, "Steamworks", "ISteamMatchmakingPingResponse", "ServerResponded");
        }
        inline app::ISteamMatchmakingPingResponse_ServerResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_ServerResponded>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_ServerResponded
} // namespace app::classes::types
