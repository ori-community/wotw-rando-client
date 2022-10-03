#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundCharacterResult_1__Class** type_info;
        inline app::GetLeaderboardAroundCharacterResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterResult_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundCharacterResult");
        }
        inline app::GetLeaderboardAroundCharacterResult_1* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterResult_1>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterResult_1
} // namespace app::classes::types
