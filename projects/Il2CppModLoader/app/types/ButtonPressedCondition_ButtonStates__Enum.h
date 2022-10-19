#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ButtonPressedCondition_ButtonStates__Enum {
        namespace {
            inline app::ButtonPressedCondition_ButtonStates__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ButtonPressedCondition_ButtonStates__Enum__Class** type_info = &type_info_ref;
        inline app::ButtonPressedCondition_ButtonStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ButtonPressedCondition_ButtonStates__Enum__Class>(type_info, "", "ButtonPressedCondition", "ButtonStates");
        }
        inline app::ButtonPressedCondition_ButtonStates__Enum* create() {
            return il2cpp::create_object<app::ButtonPressedCondition_ButtonStates__Enum>(get_class());
        }
    } // namespace ButtonPressedCondition_ButtonStates__Enum
} // namespace app::classes::types
