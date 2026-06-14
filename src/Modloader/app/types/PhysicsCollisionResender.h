#pragma once
#include <Modloader/app/structs/PhysicsCollisionResender.h>
#include <Modloader/app/structs/PhysicsCollisionResender__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsCollisionResender {
        inline app::PhysicsCollisionResender__Class** type_info() {
            static app::PhysicsCollisionResender__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsCollisionResender__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsCollisionResender__Class* get_class() {
            return il2cpp::get_class<app::PhysicsCollisionResender__Class>(type_info(), "", "PhysicsCollisionResender");
        }
        inline app::PhysicsCollisionResender* create() {
            return il2cpp::create_object<app::PhysicsCollisionResender>(get_class());
        }
    } // namespace PhysicsCollisionResender
} // namespace app::classes::types
