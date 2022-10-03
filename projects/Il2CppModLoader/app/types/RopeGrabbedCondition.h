#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RopeGrabbedCondition {
        namespace {
            app::RopeGrabbedCondition__Class* type_info_ref = nullptr;
        }
        app::RopeGrabbedCondition__Class** type_info = &type_info_ref;
        inline app::RopeGrabbedCondition__Class* get_class() {
            return il2cpp::get_class<app::RopeGrabbedCondition__Class>(type_info, "", "RopeGrabbedCondition");
        }
        inline app::RopeGrabbedCondition* create() {
            return il2cpp::create_object<app::RopeGrabbedCondition>(get_class());
        }
    } // namespace RopeGrabbedCondition
} // namespace app::classes::types
