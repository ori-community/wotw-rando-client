#pragma once
#include <Modloader/app/structs/PhysicsScene2D.h>
#include <Modloader/app/structs/PhysicsScene2D__Boxed.h>
#include <Modloader/app/structs/PhysicsScene2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsScene2D {
        inline app::PhysicsScene2D__Class** type_info() {
            static app::PhysicsScene2D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsScene2D__Class**)(modloader::win::memory::resolve_rva(0x04777D20));
            }
            return cache;
        }
        inline app::PhysicsScene2D__Class* get_class() {
            return il2cpp::get_class<app::PhysicsScene2D__Class>(type_info(), "UnityEngine", "PhysicsScene2D");
        }
        inline app::PhysicsScene2D* create() {
            return il2cpp::create_object<app::PhysicsScene2D>(get_class());
        }
        inline app::PhysicsScene2D__Boxed* box(app::PhysicsScene2D value) {
            return il2cpp::box_value<app::PhysicsScene2D__Boxed>(get_class(), value);
        }
    } // namespace PhysicsScene2D
} // namespace app::classes::types
