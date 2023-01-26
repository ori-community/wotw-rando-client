#pragma once
#include <Modloader/app/structs/AxisAlignedBoxGizmoSettings_ModeType__Enum.h>
#include <Modloader/app/structs/AxisAlignedBoxGizmoSettings_ModeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisAlignedBoxGizmoSettings_ModeType__Enum {
        inline app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class** type_info() {
            static app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class>(type_info(), "Moon", "AxisAlignedBoxGizmoSettings", "ModeType");
        }
        inline app::AxisAlignedBoxGizmoSettings_ModeType__Enum* create() {
            return il2cpp::create_object<app::AxisAlignedBoxGizmoSettings_ModeType__Enum>(get_class());
        }
    } // namespace AxisAlignedBoxGizmoSettings_ModeType__Enum
} // namespace app::classes::types
