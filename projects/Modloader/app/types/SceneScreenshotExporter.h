#pragma once
#include <Modloader/app/structs/SceneScreenshotExporter.h>
#include <Modloader/app/structs/SceneScreenshotExporter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneScreenshotExporter {
        inline app::SceneScreenshotExporter__Class** type_info() {
            static app::SceneScreenshotExporter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneScreenshotExporter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneScreenshotExporter__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshotExporter__Class>(type_info(), "", "SceneScreenshotExporter");
        }
        inline app::SceneScreenshotExporter* create() {
            return il2cpp::create_object<app::SceneScreenshotExporter>(get_class());
        }
    } // namespace SceneScreenshotExporter
} // namespace app::classes::types
