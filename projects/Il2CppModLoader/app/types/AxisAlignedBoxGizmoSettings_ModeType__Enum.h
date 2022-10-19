#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AxisAlignedBoxGizmoSettings_ModeType__Enum {
        namespace {
            inline app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class** type_info = &type_info_ref;
        inline app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AxisAlignedBoxGizmoSettings_ModeType__Enum__Class>(type_info, "Moon", "AxisAlignedBoxGizmoSettings", "ModeType");
        }
        inline app::AxisAlignedBoxGizmoSettings_ModeType__Enum* create() {
            return il2cpp::create_object<app::AxisAlignedBoxGizmoSettings_ModeType__Enum>(get_class());
        }
    } // namespace AxisAlignedBoxGizmoSettings_ModeType__Enum
} // namespace app::classes::types
