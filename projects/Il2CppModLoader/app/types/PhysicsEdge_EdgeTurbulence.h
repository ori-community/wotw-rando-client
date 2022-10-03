#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge_EdgeTurbulence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsEdge_EdgeTurbulence__Class** type_info;
        inline app::PhysicsEdge_EdgeTurbulence__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_EdgeTurbulence__Class>(type_info, "", "PhysicsEdge", "EdgeTurbulence");
        }
        inline app::PhysicsEdge_EdgeTurbulence* create() {
            return il2cpp::create_object<app::PhysicsEdge_EdgeTurbulence>(get_class());
        }
    } // namespace PhysicsEdge_EdgeTurbulence
} // namespace app::classes::types
