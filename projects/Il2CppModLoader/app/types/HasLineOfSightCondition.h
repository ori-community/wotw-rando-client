#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasLineOfSightCondition {
        namespace {
            app::HasLineOfSightCondition__Class* type_info_ref = nullptr;
        }
        app::HasLineOfSightCondition__Class** type_info = &type_info_ref;
        inline app::HasLineOfSightCondition__Class* get_class() {
            return il2cpp::get_class<app::HasLineOfSightCondition__Class>(type_info, "Moon.BehaviourSystem", "HasLineOfSightCondition");
        }
        inline app::HasLineOfSightCondition* create() {
            return il2cpp::create_object<app::HasLineOfSightCondition>(get_class());
        }
    } // namespace HasLineOfSightCondition
} // namespace app::classes::types
