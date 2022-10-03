#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatCondition {
        namespace {
            app::FloatCondition__Class* type_info_ref = nullptr;
        }
        app::FloatCondition__Class** type_info = &type_info_ref;
        inline app::FloatCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatCondition__Class>(type_info, "Moon.BehaviourSystem", "FloatCondition");
        }
        inline app::FloatCondition* create() {
            return il2cpp::create_object<app::FloatCondition>(get_class());
        }
    } // namespace FloatCondition
} // namespace app::classes::types
