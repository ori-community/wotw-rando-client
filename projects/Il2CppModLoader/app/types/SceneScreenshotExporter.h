#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneScreenshotExporter {
        namespace {
            inline app::SceneScreenshotExporter__Class* type_info_ref = nullptr;
        }
        inline app::SceneScreenshotExporter__Class** type_info = &type_info_ref;
        inline app::SceneScreenshotExporter__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshotExporter__Class>(type_info, "", "SceneScreenshotExporter");
        }
        inline app::SceneScreenshotExporter* create() {
            return il2cpp::create_object<app::SceneScreenshotExporter>(get_class());
        }
    } // namespace SceneScreenshotExporter
} // namespace app::classes::types
