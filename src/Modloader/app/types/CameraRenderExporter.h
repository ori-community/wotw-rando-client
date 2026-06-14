#pragma once
#include <Modloader/app/structs/CameraRenderExporter.h>
#include <Modloader/app/structs/CameraRenderExporter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraRenderExporter {
        inline app::CameraRenderExporter__Class** type_info() {
            static app::CameraRenderExporter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraRenderExporter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraRenderExporter__Class* get_class() {
            return il2cpp::get_class<app::CameraRenderExporter__Class>(type_info(), "", "CameraRenderExporter");
        }
        inline app::CameraRenderExporter* create() {
            return il2cpp::create_object<app::CameraRenderExporter>(get_class());
        }
    } // namespace CameraRenderExporter
} // namespace app::classes::types
