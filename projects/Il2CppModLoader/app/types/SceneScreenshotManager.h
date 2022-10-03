#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneScreenshotManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneScreenshotManager__Class** type_info;
        inline app::SceneScreenshotManager__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshotManager__Class>(type_info, "", "SceneScreenshotManager");
        }
        inline app::SceneScreenshotManager* create() {
            return il2cpp::create_object<app::SceneScreenshotManager>(get_class());
        }
    } // namespace SceneScreenshotManager
} // namespace app::classes::types
