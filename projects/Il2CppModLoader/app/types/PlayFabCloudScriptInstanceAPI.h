#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabCloudScriptInstanceAPI {
        namespace {
            app::PlayFabCloudScriptInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabCloudScriptInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabCloudScriptInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabCloudScriptInstanceAPI__Class>(type_info, "PlayFab", "PlayFabCloudScriptInstanceAPI");
        }
        inline app::PlayFabCloudScriptInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabCloudScriptInstanceAPI>(get_class());
        }
    } // namespace PlayFabCloudScriptInstanceAPI
} // namespace app::classes::types
