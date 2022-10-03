#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventAPI {
        namespace {
            app::PlayFabEventAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabEventAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabEventAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventAPI__Class>(type_info, "PlayFab", "PlayFabEventAPI");
        }
        inline app::PlayFabEventAPI* create() {
            return il2cpp::create_object<app::PlayFabEventAPI>(get_class());
        }
    } // namespace PlayFabEventAPI
} // namespace app::classes::types
