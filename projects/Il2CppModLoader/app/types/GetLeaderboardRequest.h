#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardRequest__Class** type_info;
        inline app::GetLeaderboardRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardRequest__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardRequest");
        }
        inline app::GetLeaderboardRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardRequest>(get_class());
        }
    } // namespace GetLeaderboardRequest
} // namespace app::classes::types
