#pragma once
#include <Modloader/app/structs/PhysicsIgnoreCollisions.h>
#include <Modloader/app/structs/PhysicsIgnoreCollisions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsIgnoreCollisions {
        inline app::PhysicsIgnoreCollisions__Class** type_info() {
            static app::PhysicsIgnoreCollisions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsIgnoreCollisions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsIgnoreCollisions__Class* get_class() {
            return il2cpp::get_class<app::PhysicsIgnoreCollisions__Class>(type_info(), "", "PhysicsIgnoreCollisions");
        }
        inline app::PhysicsIgnoreCollisions* create() {
            return il2cpp::create_object<app::PhysicsIgnoreCollisions>(get_class());
        }
    } // namespace PhysicsIgnoreCollisions
} // namespace app::classes::types
