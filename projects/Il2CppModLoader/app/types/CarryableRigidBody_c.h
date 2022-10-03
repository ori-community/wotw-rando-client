#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CarryableRigidBody_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CarryableRigidBody_c__Class** type_info;
        inline app::CarryableRigidBody_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CarryableRigidBody_c__Class>(type_info, "", "CarryableRigidBody", "<>c");
        }
        inline app::CarryableRigidBody_c* create() {
            return il2cpp::create_object<app::CarryableRigidBody_c>(get_class());
        }
    } // namespace CarryableRigidBody_c
} // namespace app::classes::types
