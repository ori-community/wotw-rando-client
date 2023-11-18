#pragma once
#include <Modloader/app/structs/PlayFabClientInstanceAPI.h>
#include <Modloader/app/structs/PlayFabClientInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabClientInstanceAPI {
        inline app::PlayFabClientInstanceAPI__Class** type_info() {
            static app::PlayFabClientInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabClientInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabClientInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabClientInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabClientInstanceAPI");
        }
        inline app::PlayFabClientInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabClientInstanceAPI>(get_class());
        }
    } // namespace PlayFabClientInstanceAPI
} // namespace app::classes::types
