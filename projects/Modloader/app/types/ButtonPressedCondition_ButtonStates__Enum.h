#pragma once
#include <Modloader/app/structs/ButtonPressedCondition_ButtonStates__Enum.h>
#include <Modloader/app/structs/ButtonPressedCondition_ButtonStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ButtonPressedCondition_ButtonStates__Enum {
        inline app::ButtonPressedCondition_ButtonStates__Enum__Class** type_info() {
            static app::ButtonPressedCondition_ButtonStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ButtonPressedCondition_ButtonStates__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ButtonPressedCondition_ButtonStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ButtonPressedCondition_ButtonStates__Enum__Class>(type_info(), "", "ButtonPressedCondition", "ButtonStates");
        }
        inline app::ButtonPressedCondition_ButtonStates__Enum* create() {
            return il2cpp::create_object<app::ButtonPressedCondition_ButtonStates__Enum>(get_class());
        }
    } // namespace ButtonPressedCondition_ButtonStates__Enum
} // namespace app::classes::types
