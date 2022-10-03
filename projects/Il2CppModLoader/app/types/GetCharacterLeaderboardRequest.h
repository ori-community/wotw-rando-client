#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterLeaderboardRequest__Class** type_info;
        inline app::GetCharacterLeaderboardRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterLeaderboardRequest");
        }
        inline app::GetCharacterLeaderboardRequest* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardRequest>(get_class());
        }
    } // namespace GetCharacterLeaderboardRequest
} // namespace app::classes::types
