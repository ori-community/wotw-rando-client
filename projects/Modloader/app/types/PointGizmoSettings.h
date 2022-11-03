#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointGizmoSettings {
        namespace {
            inline app::PointGizmoSettings__Class* type_info_ref = nullptr;
        }
        inline app::PointGizmoSettings__Class** type_info = &type_info_ref;
        inline app::PointGizmoSettings__Class* get_class() {
            return il2cpp::get_class<app::PointGizmoSettings__Class>(type_info, "Moon", "PointGizmoSettings");
        }
        inline app::PointGizmoSettings* create() {
            return il2cpp::create_object<app::PointGizmoSettings>(get_class());
        }
    } // namespace PointGizmoSettings
} // namespace app::classes::types
