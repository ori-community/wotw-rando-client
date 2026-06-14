#pragma once
#include <Modloader/app/structs/PlayFabServerInstanceAPI.h>
#include <Modloader/app/structs/PlayFabServerInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabServerInstanceAPI {
        inline app::PlayFabServerInstanceAPI__Class** type_info() {
            static app::PlayFabServerInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabServerInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabServerInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabServerInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabServerInstanceAPI");
        }
        inline app::PlayFabServerInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabServerInstanceAPI>(get_class());
        }
    } // namespace PlayFabServerInstanceAPI
} // namespace app::classes::types
