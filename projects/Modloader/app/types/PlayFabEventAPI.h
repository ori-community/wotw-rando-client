#pragma once
#include <Modloader/app/structs/PlayFabEventAPI.h>
#include <Modloader/app/structs/PlayFabEventAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventAPI {
        inline app::PlayFabEventAPI__Class** type_info() {
            static app::PlayFabEventAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabEventAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabEventAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventAPI__Class>(type_info(), "PlayFab", "PlayFabEventAPI");
        }
        inline app::PlayFabEventAPI* create() {
            return il2cpp::create_object<app::PlayFabEventAPI>(get_class());
        }
    } // namespace PlayFabEventAPI
} // namespace app::classes::types
