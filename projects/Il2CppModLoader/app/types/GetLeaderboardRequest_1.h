#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardRequest_1__Class** type_info;
        inline app::GetLeaderboardRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardRequest");
        }
        inline app::GetLeaderboardRequest_1* create() {
            return il2cpp::create_object<app::GetLeaderboardRequest_1>(get_class());
        }
    } // namespace GetLeaderboardRequest_1
} // namespace app::classes::types
