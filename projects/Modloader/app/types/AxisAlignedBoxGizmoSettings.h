#pragma once
#include <Modloader/app/structs/AxisAlignedBoxGizmoSettings.h>
#include <Modloader/app/structs/AxisAlignedBoxGizmoSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisAlignedBoxGizmoSettings {
        inline app::AxisAlignedBoxGizmoSettings__Class** type_info() {
            static app::AxisAlignedBoxGizmoSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AxisAlignedBoxGizmoSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AxisAlignedBoxGizmoSettings__Class* get_class() {
            return il2cpp::get_class<app::AxisAlignedBoxGizmoSettings__Class>(type_info(), "Moon", "AxisAlignedBoxGizmoSettings");
        }
        inline app::AxisAlignedBoxGizmoSettings* create() {
            return il2cpp::create_object<app::AxisAlignedBoxGizmoSettings>(get_class());
        }
    } // namespace AxisAlignedBoxGizmoSettings
} // namespace app::classes::types
