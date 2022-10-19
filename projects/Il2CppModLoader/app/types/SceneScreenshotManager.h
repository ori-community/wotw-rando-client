#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneScreenshotManager {
        inline app::SceneScreenshotManager__Class** type_info = (app::SceneScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x04757530));
        inline app::SceneScreenshotManager__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshotManager__Class>(type_info, "", "SceneScreenshotManager");
        }
        inline app::SceneScreenshotManager* create() {
            return il2cpp::create_object<app::SceneScreenshotManager>(get_class());
        }
    } // namespace SceneScreenshotManager
} // namespace app::classes::types
