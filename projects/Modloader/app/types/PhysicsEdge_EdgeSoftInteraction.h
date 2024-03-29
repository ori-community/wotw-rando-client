#pragma once
#include <Modloader/app/structs/PhysicsEdge_EdgeSoftInteraction.h>
#include <Modloader/app/structs/PhysicsEdge_EdgeSoftInteraction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge_EdgeSoftInteraction {
        inline app::PhysicsEdge_EdgeSoftInteraction__Class** type_info() {
            static app::PhysicsEdge_EdgeSoftInteraction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsEdge_EdgeSoftInteraction__Class**)(modloader::win::memory::resolve_rva(0x04776138));
            }
            return cache;
        }
        inline app::PhysicsEdge_EdgeSoftInteraction__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_EdgeSoftInteraction__Class>(type_info(), "", "PhysicsEdge", "EdgeSoftInteraction");
        }
        inline app::PhysicsEdge_EdgeSoftInteraction* create() {
            return il2cpp::create_object<app::PhysicsEdge_EdgeSoftInteraction>(get_class());
        }
    } // namespace PhysicsEdge_EdgeSoftInteraction
} // namespace app::classes::types
