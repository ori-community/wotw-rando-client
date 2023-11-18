#pragma once
#include <Modloader/app/structs/WeaponJoint__Enum__Array.h>
#include <Modloader/app/structs/WeaponJoint__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponJoint__Enum__Array {
        inline app::WeaponJoint__Enum__Array__Class** type_info() {
            static app::WeaponJoint__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponJoint__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponJoint__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::WeaponJoint__Enum__Array__Class>(type_info(), "Moon", "WeaponJoint[]");
        }
        inline app::WeaponJoint__Enum__Array* create() {
            return il2cpp::create_object<app::WeaponJoint__Enum__Array>(get_class());
        }
    } // namespace WeaponJoint__Enum__Array
} // namespace app::classes::types
