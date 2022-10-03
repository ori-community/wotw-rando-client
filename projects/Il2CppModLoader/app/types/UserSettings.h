#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserSettings__Class** type_info;
        inline app::UserSettings__Class* get_class() {
            return il2cpp::get_class<app::UserSettings__Class>(type_info, "PlayFab.ClientModels", "UserSettings");
        }
        inline app::UserSettings* create() {
            return il2cpp::create_object<app::UserSettings>(get_class());
        }
    } // namespace UserSettings
} // namespace app::classes::types
