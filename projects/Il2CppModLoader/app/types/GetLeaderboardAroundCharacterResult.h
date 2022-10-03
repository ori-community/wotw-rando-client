#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundCharacterResult__Class** type_info;
        inline app::GetLeaderboardAroundCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterResult__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardAroundCharacterResult");
        }
        inline app::GetLeaderboardAroundCharacterResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterResult>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterResult
} // namespace app::classes::types
