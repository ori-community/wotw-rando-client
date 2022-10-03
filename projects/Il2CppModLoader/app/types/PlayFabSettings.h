#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabSettings__Class** type_info;
        inline app::PlayFabSettings__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSettings__Class>(type_info, "PlayFab", "PlayFabSettings");
        }
        inline app::PlayFabSettings* create() {
            return il2cpp::create_object<app::PlayFabSettings>(get_class());
        }
    } // namespace PlayFabSettings
} // namespace app::classes::types
