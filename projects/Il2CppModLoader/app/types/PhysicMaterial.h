#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicMaterial {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicMaterial__Class** type_info;
        inline app::PhysicMaterial__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterial__Class>(type_info, "UnityEngine", "PhysicMaterial");
        }
        inline app::PhysicMaterial* create() {
            return il2cpp::create_object<app::PhysicMaterial>(get_class());
        }
        inline app::PhysicMaterial__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicMaterial__Array>(get_class(), size);
        }
    } // namespace PhysicMaterial
} // namespace app::classes::types
