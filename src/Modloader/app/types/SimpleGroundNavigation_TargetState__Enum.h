#pragma once
#include <Modloader/app/structs/SimpleGroundNavigation_TargetState__Enum.h>
#include <Modloader/app/structs/SimpleGroundNavigation_TargetState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleGroundNavigation_TargetState__Enum {
        inline app::SimpleGroundNavigation_TargetState__Enum__Class** type_info() {
            static app::SimpleGroundNavigation_TargetState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleGroundNavigation_TargetState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleGroundNavigation_TargetState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleGroundNavigation_TargetState__Enum__Class>(type_info(), "Moon", "SimpleGroundNavigation", "TargetState");
        }
        inline app::SimpleGroundNavigation_TargetState__Enum* create() {
            return il2cpp::create_object<app::SimpleGroundNavigation_TargetState__Enum>(get_class());
        }
    } // namespace SimpleGroundNavigation_TargetState__Enum
} // namespace app::classes::types
