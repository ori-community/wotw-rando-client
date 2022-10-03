#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleAggroCondition {
        namespace {
            app::TurtleAggroCondition__Class* type_info_ref = nullptr;
        }
        app::TurtleAggroCondition__Class** type_info = &type_info_ref;
        inline app::TurtleAggroCondition__Class* get_class() {
            return il2cpp::get_class<app::TurtleAggroCondition__Class>(type_info, "Moon.Behaviour", "TurtleAggroCondition");
        }
        inline app::TurtleAggroCondition* create() {
            return il2cpp::create_object<app::TurtleAggroCondition>(get_class());
        }
    } // namespace TurtleAggroCondition
} // namespace app::classes::types
