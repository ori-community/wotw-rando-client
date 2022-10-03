#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabDataInstanceAPI {
        namespace {
            app::PlayFabDataInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabDataInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabDataInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDataInstanceAPI__Class>(type_info, "PlayFab", "PlayFabDataInstanceAPI");
        }
        inline app::PlayFabDataInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabDataInstanceAPI>(get_class());
        }
    } // namespace PlayFabDataInstanceAPI
} // namespace app::classes::types
