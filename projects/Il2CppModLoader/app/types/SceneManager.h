#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneManager__Class** type_info;
        inline app::SceneManager__Class* get_class() {
            return il2cpp::get_class<app::SceneManager__Class>(type_info, "UnityEngine.SceneManagement", "SceneManager");
        }
        inline app::SceneManager* create() {
            return il2cpp::create_object<app::SceneManager>(get_class());
        }
    } // namespace SceneManager
} // namespace app::classes::types
