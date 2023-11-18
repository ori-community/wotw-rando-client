#pragma once
#include <Modloader/app/structs/PlayFabEventsInstanceAPI.h>
#include <Modloader/app/structs/PlayFabEventsInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventsInstanceAPI {
        inline app::PlayFabEventsInstanceAPI__Class** type_info() {
            static app::PlayFabEventsInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabEventsInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabEventsInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventsInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabEventsInstanceAPI");
        }
        inline app::PlayFabEventsInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabEventsInstanceAPI>(get_class());
        }
    } // namespace PlayFabEventsInstanceAPI
} // namespace app::classes::types
