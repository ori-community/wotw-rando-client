#pragma once
#include <Modloader/app/structs/PlayFabLocalizationInstanceAPI.h>
#include <Modloader/app/structs/PlayFabLocalizationInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabLocalizationInstanceAPI {
        inline app::PlayFabLocalizationInstanceAPI__Class** type_info() {
            static app::PlayFabLocalizationInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabLocalizationInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabLocalizationInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLocalizationInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabLocalizationInstanceAPI");
        }
        inline app::PlayFabLocalizationInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabLocalizationInstanceAPI>(get_class());
        }
    } // namespace PlayFabLocalizationInstanceAPI
} // namespace app::classes::types
