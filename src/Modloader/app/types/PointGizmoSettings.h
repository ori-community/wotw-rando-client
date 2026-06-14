#pragma once
#include <Modloader/app/structs/PointGizmoSettings.h>
#include <Modloader/app/structs/PointGizmoSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointGizmoSettings {
        inline app::PointGizmoSettings__Class** type_info() {
            static app::PointGizmoSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointGizmoSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointGizmoSettings__Class* get_class() {
            return il2cpp::get_class<app::PointGizmoSettings__Class>(type_info(), "Moon", "PointGizmoSettings");
        }
        inline app::PointGizmoSettings* create() {
            return il2cpp::create_object<app::PointGizmoSettings>(get_class());
        }
    } // namespace PointGizmoSettings
} // namespace app::classes::types
