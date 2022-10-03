#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterLeaderboardRequest_1__Class** type_info;
        inline app::GetCharacterLeaderboardRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterLeaderboardRequest");
        }
        inline app::GetCharacterLeaderboardRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardRequest_1>(get_class());
        }
    } // namespace GetCharacterLeaderboardRequest_1
} // namespace app::classes::types
