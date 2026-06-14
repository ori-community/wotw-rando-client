#pragma once
#include <Modloader/app/structs/SceneScreenshotManager_c.h>
#include <Modloader/app/structs/SceneScreenshotManager_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneScreenshotManager_c {
        inline app::SceneScreenshotManager_c__Class** type_info() {
            static app::SceneScreenshotManager_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneScreenshotManager_c__Class**)(modloader::win::memory::resolve_rva(0x0475F3C8));
            }
            return cache;
        }
        inline app::SceneScreenshotManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneScreenshotManager_c__Class>(type_info(), "", "SceneScreenshotManager", "<>c");
        }
        inline app::SceneScreenshotManager_c* create() {
            return il2cpp::create_object<app::SceneScreenshotManager_c>(get_class());
        }
    } // namespace SceneScreenshotManager_c
} // namespace app::classes::types
