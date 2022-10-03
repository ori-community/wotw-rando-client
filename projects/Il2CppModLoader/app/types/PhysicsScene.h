#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsScene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsScene__Class** type_info;
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
