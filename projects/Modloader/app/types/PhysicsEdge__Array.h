#pragma once
#include <Modloader/app/structs/PhysicsEdge__Array.h>
#include <Modloader/app/structs/PhysicsEdge__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge__Array {
        inline app::PhysicsEdge__Array__Class** type_info() {
            static app::PhysicsEdge__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsEdge__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEdge__Array__Class>(type_info(), "", "PhysicsEdge[]");
        }
        inline app::PhysicsEdge__Array* create() {
            return il2cpp::create_object<app::PhysicsEdge__Array>(get_class());
        }
    } // namespace PhysicsEdge__Array
} // namespace app::classes::types
