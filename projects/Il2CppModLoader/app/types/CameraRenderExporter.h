#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraRenderExporter {
        namespace {
            inline app::CameraRenderExporter__Class* type_info_ref = nullptr;
        }
        inline app::CameraRenderExporter__Class** type_info = &type_info_ref;
        inline app::CameraRenderExporter__Class* get_class() {
            return il2cpp::get_class<app::CameraRenderExporter__Class>(type_info, "", "CameraRenderExporter");
        }
        inline app::CameraRenderExporter* create() {
            return il2cpp::create_object<app::CameraRenderExporter>(get_class());
        }
    } // namespace CameraRenderExporter
} // namespace app::classes::types
