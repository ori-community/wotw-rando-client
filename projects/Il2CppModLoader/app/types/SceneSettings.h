#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneSettings__Class** type_info;
        inline app::SceneSettings__Class* get_class() {
            return il2cpp::get_class<app::SceneSettings__Class>(type_info, "", "SceneSettings");
        }
        inline app::SceneSettings* create() {
            return il2cpp::create_object<app::SceneSettings>(get_class());
        }
    } // namespace SceneSettings
} // namespace app::classes::types
