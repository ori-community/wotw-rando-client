#pragma once
#include <Modloader/app/structs/TurtleAggroCondition.h>
#include <Modloader/app/structs/TurtleAggroCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleAggroCondition {
        inline app::TurtleAggroCondition__Class** type_info() {
            static app::TurtleAggroCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleAggroCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleAggroCondition__Class* get_class() {
            return il2cpp::get_class<app::TurtleAggroCondition__Class>(type_info(), "Moon.Behaviour", "TurtleAggroCondition");
        }
        inline app::TurtleAggroCondition* create() {
            return il2cpp::create_object<app::TurtleAggroCondition>(get_class());
        }
    } // namespace TurtleAggroCondition
} // namespace app::classes::types
