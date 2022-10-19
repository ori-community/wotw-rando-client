#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsCollisionResender {
        namespace {
            inline app::PhysicsCollisionResender__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsCollisionResender__Class** type_info = &type_info_ref;
        inline app::PhysicsCollisionResender__Class* get_class() {
            return il2cpp::get_class<app::PhysicsCollisionResender__Class>(type_info, "", "PhysicsCollisionResender");
        }
        inline app::PhysicsCollisionResender* create() {
            return il2cpp::create_object<app::PhysicsCollisionResender>(get_class());
        }
    } // namespace PhysicsCollisionResender
} // namespace app::classes::types
