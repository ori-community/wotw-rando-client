#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsSystemPointSet_PhysicsSystemPoint__Array {
        namespace {
            app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class* type_info_ref = nullptr;
        }
        app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class** type_info = &type_info_ref;
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class>(type_info, "", "PhysicsSystemPointSet+PhysicsSystemPoint[]");
        }
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array* create() {
            return il2cpp::create_object<app::PhysicsSystemPointSet_PhysicsSystemPoint__Array>(get_class());
        }
    } // namespace PhysicsSystemPointSet_PhysicsSystemPoint__Array
} // namespace app::classes::types
