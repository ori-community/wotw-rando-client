#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventsAPI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabEventsAPI__Class** type_info;
        inline app::PlayFabEventsAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventsAPI__Class>(type_info, "PlayFab", "PlayFabEventsAPI");
        }
        inline app::PlayFabEventsAPI* create() {
            return il2cpp::create_object<app::PlayFabEventsAPI>(get_class());
        }
    } // namespace PlayFabEventsAPI
} // namespace app::classes::types
