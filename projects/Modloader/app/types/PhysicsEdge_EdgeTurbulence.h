#pragma once
#include <Modloader/app/structs/PhysicsEdge_EdgeTurbulence.h>
#include <Modloader/app/structs/PhysicsEdge_EdgeTurbulence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge_EdgeTurbulence {
        inline app::PhysicsEdge_EdgeTurbulence__Class** type_info() {
            static app::PhysicsEdge_EdgeTurbulence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsEdge_EdgeTurbulence__Class**)(modloader::win::memory::resolve_rva(0x04722DE8));
            }
            return cache;
        }
        inline app::PhysicsEdge_EdgeTurbulence__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_EdgeTurbulence__Class>(type_info(), "", "PhysicsEdge", "EdgeTurbulence");
        }
        inline app::PhysicsEdge_EdgeTurbulence* create() {
            return il2cpp::create_object<app::PhysicsEdge_EdgeTurbulence>(get_class());
        }
    } // namespace PhysicsEdge_EdgeTurbulence
} // namespace app::classes::types
