#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleAttackSelector {
        namespace {
            app::TurtleAttackSelector__Class* type_info_ref = nullptr;
        }
        app::TurtleAttackSelector__Class** type_info = &type_info_ref;
        inline app::TurtleAttackSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleAttackSelector__Class>(type_info, "", "TurtleAttackSelector");
        }
        inline app::TurtleAttackSelector* create() {
            return il2cpp::create_object<app::TurtleAttackSelector>(get_class());
        }
    } // namespace TurtleAttackSelector
} // namespace app::classes::types
