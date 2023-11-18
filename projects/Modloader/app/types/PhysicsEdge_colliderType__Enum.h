#pragma once
#include <Modloader/app/structs/PhysicsEdge_colliderType__Enum.h>
#include <Modloader/app/structs/PhysicsEdge_colliderType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge_colliderType__Enum {
        inline app::PhysicsEdge_colliderType__Enum__Class** type_info() {
            static app::PhysicsEdge_colliderType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsEdge_colliderType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsEdge_colliderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_colliderType__Enum__Class>(type_info(), "", "PhysicsEdge", "colliderType");
        }
        inline app::PhysicsEdge_colliderType__Enum* create() {
            return il2cpp::create_object<app::PhysicsEdge_colliderType__Enum>(get_class());
        }
    } // namespace PhysicsEdge_colliderType__Enum
} // namespace app::classes::types
