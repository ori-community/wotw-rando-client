#pragma once
#include <Modloader/app/structs/PlayFabCloudScriptInstanceAPI.h>
#include <Modloader/app/structs/PlayFabCloudScriptInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabCloudScriptInstanceAPI {
        inline app::PlayFabCloudScriptInstanceAPI__Class** type_info() {
            static app::PlayFabCloudScriptInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabCloudScriptInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabCloudScriptInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabCloudScriptInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabCloudScriptInstanceAPI");
        }
        inline app::PlayFabCloudScriptInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabCloudScriptInstanceAPI>(get_class());
        }
    } // namespace PlayFabCloudScriptInstanceAPI
} // namespace app::classes::types
