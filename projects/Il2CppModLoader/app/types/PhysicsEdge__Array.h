#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge__Array {
        namespace {
            app::PhysicsEdge__Array__Class* type_info_ref = nullptr;
        }
        app::PhysicsEdge__Array__Class** type_info = &type_info_ref;
        inline app::PhysicsEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEdge__Array__Class>(type_info, "", "PhysicsEdge[]");
        }
        inline app::PhysicsEdge__Array* create() {
            return il2cpp::create_object<app::PhysicsEdge__Array>(get_class());
        }
    } // namespace PhysicsEdge__Array
} // namespace app::classes::types
