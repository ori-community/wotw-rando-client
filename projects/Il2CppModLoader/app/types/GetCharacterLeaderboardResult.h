#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterLeaderboardResult__Class** type_info;
        inline app::GetCharacterLeaderboardResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardResult__Class>(type_info, "PlayFab.ClientModels", "GetCharacterLeaderboardResult");
        }
        inline app::GetCharacterLeaderboardResult* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardResult>(get_class());
        }
    } // namespace GetCharacterLeaderboardResult
} // namespace app::classes::types
