#pragma once
#include <Modloader/app/structs/PhysicsEdge_EdgeSound.h>
#include <Modloader/app/structs/PhysicsEdge_EdgeSound__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdge_EdgeSound {
        inline app::PhysicsEdge_EdgeSound__Class** type_info() {
            static app::PhysicsEdge_EdgeSound__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsEdge_EdgeSound__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsEdge_EdgeSound__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_EdgeSound__Class>(type_info(), "", "PhysicsEdge", "EdgeSound");
        }
        inline app::PhysicsEdge_EdgeSound* create() {
            return il2cpp::create_object<app::PhysicsEdge_EdgeSound>(get_class());
        }
    } // namespace PhysicsEdge_EdgeSound
} // namespace app::classes::types
