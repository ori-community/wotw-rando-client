#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundUserResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundUserResult__Class** type_info;
        inline app::GetLeaderboardAroundUserResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundUserResult__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundUserResult");
        }
        inline app::GetLeaderboardAroundUserResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundUserResult>(get_class());
        }
    } // namespace GetLeaderboardAroundUserResult
} // namespace app::classes::types
