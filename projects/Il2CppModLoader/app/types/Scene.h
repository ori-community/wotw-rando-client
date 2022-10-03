#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Scene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Scene__Class** type_info;
        inline app::Scene__Class* get_class() {
            return il2cpp::get_class<app::Scene__Class>(type_info, "UnityEngine.SceneManagement", "Scene");
        }
        inline app::Scene* create() {
            return il2cpp::create_object<app::Scene>(get_class());
        }
        inline app::Scene__Boxed* box(app::Scene value) {
            return il2cpp::box_value<app::Scene__Boxed>(get_class(), value);
        }
    } // namespace Scene
} // namespace app::classes::types
