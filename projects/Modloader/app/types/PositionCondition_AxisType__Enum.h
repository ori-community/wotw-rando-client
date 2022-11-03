#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionCondition_AxisType__Enum {
        namespace {
            inline app::PositionCondition_AxisType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PositionCondition_AxisType__Enum__Class** type_info = &type_info_ref;
        inline app::PositionCondition_AxisType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PositionCondition_AxisType__Enum__Class>(type_info, "", "PositionCondition", "AxisType");
        }
        inline app::PositionCondition_AxisType__Enum* create() {
            return il2cpp::create_object<app::PositionCondition_AxisType__Enum>(get_class());
        }
    } // namespace PositionCondition_AxisType__Enum
} // namespace app::classes::types
