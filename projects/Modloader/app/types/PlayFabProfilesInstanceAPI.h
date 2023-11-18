#pragma once
#include <Modloader/app/structs/PlayFabProfilesInstanceAPI.h>
#include <Modloader/app/structs/PlayFabProfilesInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabProfilesInstanceAPI {
        inline app::PlayFabProfilesInstanceAPI__Class** type_info() {
            static app::PlayFabProfilesInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabProfilesInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabProfilesInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabProfilesInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabProfilesInstanceAPI");
        }
        inline app::PlayFabProfilesInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabProfilesInstanceAPI>(get_class());
        }
    } // namespace PlayFabProfilesInstanceAPI
} // namespace app::classes::types
