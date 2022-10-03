#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventsInstanceAPI {
        namespace {
            app::PlayFabEventsInstanceAPI__Class* type_info_ref = nullptr;
        }
        app::PlayFabEventsInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabEventsInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventsInstanceAPI__Class>(type_info, "PlayFab", "PlayFabEventsInstanceAPI");
        }
        inline app::PlayFabEventsInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabEventsInstanceAPI>(get_class());
        }
    } // namespace PlayFabEventsInstanceAPI
} // namespace app::classes::types
