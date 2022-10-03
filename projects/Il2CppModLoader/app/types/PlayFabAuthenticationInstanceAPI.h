#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabAuthenticationInstanceAPI {
        namespace {
            app::PlayFabAuthenticationInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabAuthenticationInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabAuthenticationInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAuthenticationInstanceAPI__Class>(type_info, "PlayFab", "PlayFabAuthenticationInstanceAPI");
        }
        inline app::PlayFabAuthenticationInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabAuthenticationInstanceAPI>(get_class());
        }
    } // namespace PlayFabAuthenticationInstanceAPI
} // namespace app::classes::types
