#pragma once
#include <Modloader/app/structs/CommandPressedCondition.h>
#include <Modloader/app/structs/CommandPressedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommandPressedCondition {
        inline app::CommandPressedCondition__Class** type_info() {
            static app::CommandPressedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CommandPressedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CommandPressedCondition__Class* get_class() {
            return il2cpp::get_class<app::CommandPressedCondition__Class>(type_info(), "", "CommandPressedCondition");
        }
        inline app::CommandPressedCondition* create() {
            return il2cpp::create_object<app::CommandPressedCondition>(get_class());
        }
    } // namespace CommandPressedCondition
} // namespace app::classes::types
