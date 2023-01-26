#pragma once
#include <Modloader/app/structs/CommandPressedCondition_ButtonStates__Enum.h>
#include <Modloader/app/structs/CommandPressedCondition_ButtonStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommandPressedCondition_ButtonStates__Enum {
        inline app::CommandPressedCondition_ButtonStates__Enum__Class** type_info() {
            static app::CommandPressedCondition_ButtonStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CommandPressedCondition_ButtonStates__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CommandPressedCondition_ButtonStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CommandPressedCondition_ButtonStates__Enum__Class>(type_info(), "", "CommandPressedCondition", "ButtonStates");
        }
        inline app::CommandPressedCondition_ButtonStates__Enum* create() {
            return il2cpp::create_object<app::CommandPressedCondition_ButtonStates__Enum>(get_class());
        }
    } // namespace CommandPressedCondition_ButtonStates__Enum
} // namespace app::classes::types
