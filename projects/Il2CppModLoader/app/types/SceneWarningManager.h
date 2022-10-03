#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneWarningManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneWarningManager__Class** type_info;
        inline app::SceneWarningManager__Class* get_class() {
            return il2cpp::get_class<app::SceneWarningManager__Class>(type_info, "", "SceneWarningManager");
        }
        inline app::SceneWarningManager* create() {
            return il2cpp::create_object<app::SceneWarningManager>(get_class());
        }
    } // namespace SceneWarningManager
} // namespace app::classes::types
