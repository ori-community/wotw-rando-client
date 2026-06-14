#pragma once
#include <Modloader/app/structs/PositionCondition_AxisType__Enum.h>
#include <Modloader/app/structs/PositionCondition_AxisType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionCondition_AxisType__Enum {
        inline app::PositionCondition_AxisType__Enum__Class** type_info() {
            static app::PositionCondition_AxisType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionCondition_AxisType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionCondition_AxisType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PositionCondition_AxisType__Enum__Class>(type_info(), "", "PositionCondition", "AxisType");
        }
        inline app::PositionCondition_AxisType__Enum* create() {
            return il2cpp::create_object<app::PositionCondition_AxisType__Enum>(get_class());
        }
    } // namespace PositionCondition_AxisType__Enum
} // namespace app::classes::types
