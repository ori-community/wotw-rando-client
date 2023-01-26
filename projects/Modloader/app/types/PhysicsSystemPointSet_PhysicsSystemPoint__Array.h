#pragma once
#include <Modloader/app/structs/PhysicsSystemPointSet_PhysicsSystemPoint__Array.h>
#include <Modloader/app/structs/PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsSystemPointSet_PhysicsSystemPoint__Array {
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class** type_info() {
            static app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class>(type_info(), "", "PhysicsSystemPointSet+PhysicsSystemPoint[]");
        }
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array* create() {
            return il2cpp::create_object<app::PhysicsSystemPointSet_PhysicsSystemPoint__Array>(get_class());
        }
    } // namespace PhysicsSystemPointSet_PhysicsSystemPoint__Array
} // namespace app::classes::types
