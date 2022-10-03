#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsMaterial2D {
        namespace {
            app::PhysicsMaterial2D__Class* type_info_ref = nullptr;
        }
        app::PhysicsMaterial2D__Class** type_info = &type_info_ref;
        inline app::PhysicsMaterial2D__Class* get_class() {
            return il2cpp::get_class<app::PhysicsMaterial2D__Class>(type_info, "UnityEngine", "PhysicsMaterial2D");
        }
        inline app::PhysicsMaterial2D* create() {
            return il2cpp::create_object<app::PhysicsMaterial2D>(get_class());
        }
    } // namespace PhysicsMaterial2D
} // namespace app::classes::types
