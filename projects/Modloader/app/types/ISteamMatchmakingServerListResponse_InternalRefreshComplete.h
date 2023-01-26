#pragma once
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_InternalRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalRefreshComplete {
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class** type_info() {
            static app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x0471D098));
            }
            return cache;
        }
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class>(type_info(), "Steamworks", "ISteamMatchmakingServerListResponse", "InternalRefreshComplete");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalRefreshComplete
} // namespace app::classes::types
