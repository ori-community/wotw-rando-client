#pragma once
#include <Modloader/app/structs/PlayFabAuthenticationInstanceAPI.h>
#include <Modloader/app/structs/PlayFabAuthenticationInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabAuthenticationInstanceAPI {
        inline app::PlayFabAuthenticationInstanceAPI__Class** type_info() {
            static app::PlayFabAuthenticationInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabAuthenticationInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabAuthenticationInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAuthenticationInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabAuthenticationInstanceAPI");
        }
        inline app::PlayFabAuthenticationInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabAuthenticationInstanceAPI>(get_class());
        }
    } // namespace PlayFabAuthenticationInstanceAPI
} // namespace app::classes::types
