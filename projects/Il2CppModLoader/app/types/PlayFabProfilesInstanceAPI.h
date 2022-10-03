#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabProfilesInstanceAPI {
        namespace {
            app::PlayFabProfilesInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabProfilesInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabProfilesInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabProfilesInstanceAPI__Class>(type_info, "PlayFab", "PlayFabProfilesInstanceAPI");
        }
        inline app::PlayFabProfilesInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabProfilesInstanceAPI>(get_class());
        }
    } // namespace PlayFabProfilesInstanceAPI
} // namespace app::classes::types
