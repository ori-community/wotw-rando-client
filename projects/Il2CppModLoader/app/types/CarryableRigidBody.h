#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CarryableRigidBody {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CarryableRigidBody__Class** type_info;
        inline app::CarryableRigidBody__Class* get_class() {
            return il2cpp::get_class<app::CarryableRigidBody__Class>(type_info, "", "CarryableRigidBody");
        }
        inline app::CarryableRigidBody* create() {
            return il2cpp::create_object<app::CarryableRigidBody>(get_class());
        }
    } // namespace CarryableRigidBody
} // namespace app::classes::types
