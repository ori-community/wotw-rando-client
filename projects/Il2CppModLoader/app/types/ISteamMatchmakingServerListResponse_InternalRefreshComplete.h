#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalRefreshComplete {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class** type_info;
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "InternalRefreshComplete");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalRefreshComplete
} // namespace app::classes::types
