#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CommandPressedCondition_ButtonStates__Enum {
        namespace {
            app::CommandPressedCondition_ButtonStates__Enum__Class* type_info_ref = nullptr;
        }
        app::CommandPressedCondition_ButtonStates__Enum__Class** type_info = &type_info_ref;
        inline app::CommandPressedCondition_ButtonStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CommandPressedCondition_ButtonStates__Enum__Class>(type_info, "", "CommandPressedCondition", "ButtonStates");
        }
        inline app::CommandPressedCondition_ButtonStates__Enum* create() {
            return il2cpp::create_object<app::CommandPressedCondition_ButtonStates__Enum>(get_class());
        }
    } // namespace CommandPressedCondition_ButtonStates__Enum
} // namespace app::classes::types
