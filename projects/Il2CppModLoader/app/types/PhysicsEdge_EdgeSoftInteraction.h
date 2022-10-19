#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsEdge_EdgeSoftInteraction {
        inline app::PhysicsEdge_EdgeSoftInteraction__Class** type_info = (app::PhysicsEdge_EdgeSoftInteraction__Class**)(modloader::win::memory::resolve_rva(0x04776138));
        inline app::PhysicsEdge_EdgeSoftInteraction__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_EdgeSoftInteraction__Class>(type_info, "", "PhysicsEdge", "EdgeSoftInteraction");
        }
        inline app::PhysicsEdge_EdgeSoftInteraction* create() {
            return il2cpp::create_object<app::PhysicsEdge_EdgeSoftInteraction>(get_class());
        }
    } // namespace PhysicsEdge_EdgeSoftInteraction
} // namespace app::classes::types
