#pragma once
#include <Modloader/app/structs/PlayFabDataInstanceAPI.h>
#include <Modloader/app/structs/PlayFabDataInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabDataInstanceAPI {
        inline app::PlayFabDataInstanceAPI__Class** type_info() {
            static app::PlayFabDataInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabDataInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabDataInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDataInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabDataInstanceAPI");
        }
        inline app::PlayFabDataInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabDataInstanceAPI>(get_class());
        }
    } // namespace PlayFabDataInstanceAPI
} // namespace app::classes::types
