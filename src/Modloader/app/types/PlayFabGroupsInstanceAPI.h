#pragma once
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI.h>
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabGroupsInstanceAPI {
        inline app::PlayFabGroupsInstanceAPI__Class** type_info() {
            static app::PlayFabGroupsInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabGroupsInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabGroupsInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabGroupsInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabGroupsInstanceAPI");
        }
        inline app::PlayFabGroupsInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabGroupsInstanceAPI>(get_class());
        }
    } // namespace PlayFabGroupsInstanceAPI
} // namespace app::classes::types
