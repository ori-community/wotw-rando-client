#pragma once
#include <Modloader/app/structs/PlayFabMatchmakerInstanceAPI.h>
#include <Modloader/app/structs/PlayFabMatchmakerInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabMatchmakerInstanceAPI {
        inline app::PlayFabMatchmakerInstanceAPI__Class** type_info() {
            static app::PlayFabMatchmakerInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabMatchmakerInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabMatchmakerInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabMatchmakerInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabMatchmakerInstanceAPI");
        }
        inline app::PlayFabMatchmakerInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabMatchmakerInstanceAPI>(get_class());
        }
    } // namespace PlayFabMatchmakerInstanceAPI
} // namespace app::classes::types
