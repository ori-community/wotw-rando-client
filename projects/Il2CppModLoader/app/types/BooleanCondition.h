#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanCondition {
        namespace {
            app::BooleanCondition__Class* type_info_ref = nullptr;
        }
        app::BooleanCondition__Class** type_info = &type_info_ref;
        inline app::BooleanCondition__Class* get_class() {
            return il2cpp::get_class<app::BooleanCondition__Class>(type_info, "Moon.BehaviourSystem", "BooleanCondition");
        }
        inline app::BooleanCondition* create() {
            return il2cpp::create_object<app::BooleanCondition>(get_class());
        }
    } // namespace BooleanCondition
} // namespace app::classes::types
