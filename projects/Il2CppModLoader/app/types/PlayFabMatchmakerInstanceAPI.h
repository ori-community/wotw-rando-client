#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabMatchmakerInstanceAPI {
        namespace {
            app::PlayFabMatchmakerInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabMatchmakerInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabMatchmakerInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabMatchmakerInstanceAPI__Class>(type_info, "PlayFab", "PlayFabMatchmakerInstanceAPI");
        }
        inline app::PlayFabMatchmakerInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabMatchmakerInstanceAPI>(get_class());
        }
    } // namespace PlayFabMatchmakerInstanceAPI
} // namespace app::classes::types
