#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsCollisionResender {
        namespace {
            app::PhysicsCollisionResender__Class* type_info_ref = nullptr;
        }
        app::PhysicsCollisionResender__Class** type_info = &type_info_ref;
        inline app::PhysicsCollisionResender__Class* get_class() {
            return il2cpp::get_class<app::PhysicsCollisionResender__Class>(type_info, "", "PhysicsCollisionResender");
        }
        inline app::PhysicsCollisionResender* create() {
            return il2cpp::create_object<app::PhysicsCollisionResender>(get_class());
        }
    } // namespace PhysicsCollisionResender
} // namespace app::classes::types
