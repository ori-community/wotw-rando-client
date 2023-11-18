#pragma once
#include <Modloader/app/structs/PhysicsMaterial2D.h>
#include <Modloader/app/structs/PhysicsMaterial2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsMaterial2D {
        inline app::PhysicsMaterial2D__Class** type_info() {
            static app::PhysicsMaterial2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsMaterial2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsMaterial2D__Class* get_class() {
            return il2cpp::get_class<app::PhysicsMaterial2D__Class>(type_info(), "UnityEngine", "PhysicsMaterial2D");
        }
        inline app::PhysicsMaterial2D* create() {
            return il2cpp::create_object<app::PhysicsMaterial2D>(get_class());
        }
    } // namespace PhysicsMaterial2D
} // namespace app::classes::types
