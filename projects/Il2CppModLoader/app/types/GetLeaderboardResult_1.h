#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardResult_1__Class** type_info;
        inline app::GetLeaderboardResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardResult_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardResult");
        }
        inline app::GetLeaderboardResult_1* create() {
            return il2cpp::create_object<app::GetLeaderboardResult_1>(get_class());
        }
    } // namespace GetLeaderboardResult_1
} // namespace app::classes::types
