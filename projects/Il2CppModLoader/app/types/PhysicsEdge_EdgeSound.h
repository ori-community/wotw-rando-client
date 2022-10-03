#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge_EdgeSound {
        namespace {
            app::PhysicsEdge_EdgeSound__Class* type_info_ref = nullptr;
        }
        app::PhysicsEdge_EdgeSound__Class** type_info = &type_info_ref;
        inline app::PhysicsEdge_EdgeSound__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_EdgeSound__Class>(type_info, "", "PhysicsEdge", "EdgeSound");
        }
        inline app::PhysicsEdge_EdgeSound* create() {
            return il2cpp::create_object<app::PhysicsEdge_EdgeSound>(get_class());
        }
    } // namespace PhysicsEdge_EdgeSound
} // namespace app::classes::types
