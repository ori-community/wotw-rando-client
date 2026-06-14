#pragma once
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabApiSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabApiSettings {
        inline app::PlayFabApiSettings__Class** type_info() {
            static app::PlayFabApiSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabApiSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabApiSettings__Class* get_class() {
            return il2cpp::get_class<app::PlayFabApiSettings__Class>(type_info(), "PlayFab", "PlayFabApiSettings");
        }
        inline app::PlayFabApiSettings* create() {
            return il2cpp::create_object<app::PlayFabApiSettings>(get_class());
        }
    } // namespace PlayFabApiSettings
} // namespace app::classes::types
