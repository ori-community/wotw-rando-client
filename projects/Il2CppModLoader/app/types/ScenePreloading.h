#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenePreloading {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenePreloading__Class** type_info;
        inline app::ScenePreloading__Class* get_class() {
            return il2cpp::get_class<app::ScenePreloading__Class>(type_info, "Moon.Timeline", "ScenePreloading");
        }
        inline app::ScenePreloading* create() {
            return il2cpp::create_object<app::ScenePreloading>(get_class());
        }
    } // namespace ScenePreloading
} // namespace app::classes::types
