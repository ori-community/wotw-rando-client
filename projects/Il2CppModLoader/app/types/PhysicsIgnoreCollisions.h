#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsIgnoreCollisions {
        namespace {
            inline app::PhysicsIgnoreCollisions__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsIgnoreCollisions__Class** type_info = &type_info_ref;
        inline app::PhysicsIgnoreCollisions__Class* get_class() {
            return il2cpp::get_class<app::PhysicsIgnoreCollisions__Class>(type_info, "", "PhysicsIgnoreCollisions");
        }
        inline app::PhysicsIgnoreCollisions* create() {
            return il2cpp::create_object<app::PhysicsIgnoreCollisions>(get_class());
        }
    } // namespace PhysicsIgnoreCollisions
} // namespace app::classes::types
