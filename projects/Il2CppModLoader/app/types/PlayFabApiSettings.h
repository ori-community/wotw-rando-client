#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabApiSettings {
        namespace {
            app::PlayFabApiSettings__Class* type_info_ref = nullptr;
        }
        app::PlayFabApiSettings__Class** type_info = &type_info_ref;
        inline app::PlayFabApiSettings__Class* get_class() {
            return il2cpp::get_class<app::PlayFabApiSettings__Class>(type_info, "PlayFab", "PlayFabApiSettings");
        }
        inline app::PlayFabApiSettings* create() {
            return il2cpp::create_object<app::PlayFabApiSettings>(get_class());
        }
    } // namespace PlayFabApiSettings
} // namespace app::classes::types
