#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabClientInstanceAPI {
        namespace {
            app::PlayFabClientInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabClientInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabClientInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabClientInstanceAPI__Class>(type_info, "PlayFab", "PlayFabClientInstanceAPI");
        }
        inline app::PlayFabClientInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabClientInstanceAPI>(get_class());
        }
    } // namespace PlayFabClientInstanceAPI
} // namespace app::classes::types
