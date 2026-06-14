#pragma once
#include <Modloader/app/structs/AxisButtonInput_AxisMode__Enum.h>
#include <Modloader/app/structs/AxisButtonInput_AxisMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisButtonInput_AxisMode__Enum {
        inline app::AxisButtonInput_AxisMode__Enum__Class** type_info() {
            static app::AxisButtonInput_AxisMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AxisButtonInput_AxisMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AxisButtonInput_AxisMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AxisButtonInput_AxisMode__Enum__Class>(type_info(), "SmartInput", "AxisButtonInput", "AxisMode");
        }
        inline app::AxisButtonInput_AxisMode__Enum* create() {
            return il2cpp::create_object<app::AxisButtonInput_AxisMode__Enum>(get_class());
        }
    } // namespace AxisButtonInput_AxisMode__Enum
} // namespace app::classes::types
