#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneManager {
        inline app::SceneManager__Class** type_info = (app::SceneManager__Class**)(modloader::win::memory::resolve_rva(0x04717260));
        inline app::SceneManager__Class* get_class() {
            return il2cpp::get_class<app::SceneManager__Class>(type_info, "UnityEngine.SceneManagement", "SceneManager");
        }
        inline app::SceneManager* create() {
            return il2cpp::create_object<app::SceneManager>(get_class());
        }
    } // namespace SceneManager
} // namespace app::classes::types
