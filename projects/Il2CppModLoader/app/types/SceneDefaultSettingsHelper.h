#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneDefaultSettingsHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneDefaultSettingsHelper__Class** type_info;
        inline app::SceneDefaultSettingsHelper__Class* get_class() {
            return il2cpp::get_class<app::SceneDefaultSettingsHelper__Class>(type_info, "", "SceneDefaultSettingsHelper");
        }
        inline app::SceneDefaultSettingsHelper* create() {
            return il2cpp::create_object<app::SceneDefaultSettingsHelper>(get_class());
        }
    } // namespace SceneDefaultSettingsHelper
} // namespace app::classes::types
