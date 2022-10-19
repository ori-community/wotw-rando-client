#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsScene {
        inline app::PhysicsScene__Class** type_info = (app::PhysicsScene__Class**)(modloader::win::memory::resolve_rva(0x04708698));
        inline app::PhysicsScene__Class* get_class() {
            return il2cpp::get_class<app::PhysicsScene__Class>(type_info, "UnityEngine", "PhysicsScene");
        }
        inline app::PhysicsScene* create() {
            return il2cpp::create_object<app::PhysicsScene>(get_class());
        }
        inline app::PhysicsScene__Boxed* box(app::PhysicsScene value) {
            return il2cpp::box_value<app::PhysicsScene__Boxed>(get_class(), value);
        }
    } // namespace PhysicsScene
} // namespace app::classes::types
