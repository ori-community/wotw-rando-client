#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabProfilesAPI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabProfilesAPI__Class** type_info;
        inline app::PlayFabProfilesAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabProfilesAPI__Class>(type_info, "PlayFab", "PlayFabProfilesAPI");
        }
        inline app::PlayFabProfilesAPI* create() {
            return il2cpp::create_object<app::PlayFabProfilesAPI>(get_class());
        }
    } // namespace PlayFabProfilesAPI
} // namespace app::classes::types
