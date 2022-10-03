#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionPerformingCondition {
        namespace {
            app::ActionPerformingCondition__Class* type_info_ref = nullptr;
        }
        app::ActionPerformingCondition__Class** type_info = &type_info_ref;
        inline app::ActionPerformingCondition__Class* get_class() {
            return il2cpp::get_class<app::ActionPerformingCondition__Class>(type_info, "", "ActionPerformingCondition");
        }
        inline app::ActionPerformingCondition* create() {
            return il2cpp::create_object<app::ActionPerformingCondition>(get_class());
        }
    } // namespace ActionPerformingCondition
} // namespace app::classes::types
