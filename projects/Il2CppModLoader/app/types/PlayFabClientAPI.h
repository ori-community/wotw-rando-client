#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabClientAPI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabClientAPI__Class** type_info;
        inline app::PlayFabClientAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabClientAPI__Class>(type_info, "PlayFab", "PlayFabClientAPI");
        }
        inline app::PlayFabClientAPI* create() {
            return il2cpp::create_object<app::PlayFabClientAPI>(get_class());
        }
    } // namespace PlayFabClientAPI
} // namespace app::classes::types
