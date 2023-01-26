#pragma once
#include <Modloader/app/structs/SceneScreenshotManager.h>
#include <Modloader/app/structs/SceneScreenshotManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneScreenshotManager {
        inline app::SceneScreenshotManager__Class** type_info() {
            static app::SceneScreenshotManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x04757530));
            }
            return cache;
        }
        inline app::SceneScreenshotManager__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshotManager__Class>(type_info(), "", "SceneScreenshotManager");
        }
        inline app::SceneScreenshotManager* create() {
            return il2cpp::create_object<app::SceneScreenshotManager>(get_class());
        }
    } // namespace SceneScreenshotManager
} // namespace app::classes::types
