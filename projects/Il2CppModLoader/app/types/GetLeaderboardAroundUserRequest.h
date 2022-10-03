#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundUserRequest__Class** type_info;
        inline app::GetLeaderboardAroundUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundUserRequest__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundUserRequest");
        }
        inline app::GetLeaderboardAroundUserRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundUserRequest>(get_class());
        }
    } // namespace GetLeaderboardAroundUserRequest
} // namespace app::classes::types
