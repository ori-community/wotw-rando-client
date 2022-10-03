#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntCondition {
        namespace {
            app::IntCondition__Class* type_info_ref = nullptr;
        }
        app::IntCondition__Class** type_info = &type_info_ref;
        inline app::IntCondition__Class* get_class() {
            return il2cpp::get_class<app::IntCondition__Class>(type_info, "Moon.BehaviourSystem", "IntCondition");
        }
        inline app::IntCondition* create() {
            return il2cpp::create_object<app::IntCondition>(get_class());
        }
    } // namespace IntCondition
} // namespace app::classes::types
