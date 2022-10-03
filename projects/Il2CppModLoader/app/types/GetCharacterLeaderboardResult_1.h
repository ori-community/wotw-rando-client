#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterLeaderboardResult_1__Class** type_info;
        inline app::GetCharacterLeaderboardResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardResult_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterLeaderboardResult");
        }
        inline app::GetCharacterLeaderboardResult_1* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardResult_1>(get_class());
        }
    } // namespace GetCharacterLeaderboardResult_1
} // namespace app::classes::types
