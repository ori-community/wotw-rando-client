#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneModeManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneModeManager__Class** type_info;
        inline app::SceneModeManager__Class* get_class() {
            return il2cpp::get_class<app::SceneModeManager__Class>(type_info, "", "SceneModeManager");
        }
        inline app::SceneModeManager* create() {
            return il2cpp::create_object<app::SceneModeManager>(get_class());
        }
    } // namespace SceneModeManager
} // namespace app::classes::types
