#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicMaterial__Array {
        namespace {
            app::PhysicMaterial__Array__Class* type_info_ref = nullptr;
        }
        app::PhysicMaterial__Array__Class** type_info = &type_info_ref;
        inline app::PhysicMaterial__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterial__Array__Class>(type_info, "UnityEngine", "PhysicMaterial[]");
        }
        inline app::PhysicMaterial__Array* create() {
            return il2cpp::create_object<app::PhysicMaterial__Array>(get_class());
        }
    } // namespace PhysicMaterial__Array
} // namespace app::classes::types
