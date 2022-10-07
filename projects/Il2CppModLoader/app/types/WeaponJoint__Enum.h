#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponJoint__Enum {
        namespace {
            app::WeaponJoint__Enum__Class* type_info_ref = nullptr;
        }
        app::WeaponJoint__Enum__Class** type_info = &type_info_ref;
        inline app::WeaponJoint__Enum__Class* get_class() {
            return il2cpp::get_class<app::WeaponJoint__Enum__Class>(type_info, "Moon", "WeaponJoint");
        }
        inline app::WeaponJoint__Enum* create() {
            return il2cpp::create_object<app::WeaponJoint__Enum>(get_class());
        }
        inline app::WeaponJoint__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::WeaponJoint__Enum__Array>(get_class(), size);
        }
        inline app::WeaponJoint__Enum__Array* create_array(const std::vector<app::WeaponJoint__Enum*>& items) {
            return il2cpp::array_new<app::WeaponJoint__Enum__Array>(get_class(), items);
        }
    } // namespace WeaponJoint__Enum
} // namespace app::classes::types
