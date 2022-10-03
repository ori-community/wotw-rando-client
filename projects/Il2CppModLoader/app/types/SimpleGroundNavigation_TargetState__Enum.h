#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleGroundNavigation_TargetState__Enum {
        namespace {
            app::SimpleGroundNavigation_TargetState__Enum__Class* type_info_ref = nullptr;
        }
        app::SimpleGroundNavigation_TargetState__Enum__Class** type_info = &type_info_ref;
        inline app::SimpleGroundNavigation_TargetState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleGroundNavigation_TargetState__Enum__Class>(type_info, "Moon", "SimpleGroundNavigation", "TargetState");
        }
        inline app::SimpleGroundNavigation_TargetState__Enum* create() {
            return il2cpp::create_object<app::SimpleGroundNavigation_TargetState__Enum>(get_class());
        }
    } // namespace SimpleGroundNavigation_TargetState__Enum
} // namespace app::classes::types
