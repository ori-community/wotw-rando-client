#pragma once
#include <Modloader/app/structs/PhysicMaterial__Array.h>
#include <Modloader/app/structs/PhysicMaterial__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicMaterial__Array {
        inline app::PhysicMaterial__Array__Class** type_info() {
            static app::PhysicMaterial__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicMaterial__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicMaterial__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterial__Array__Class>(type_info(), "UnityEngine", "PhysicMaterial[]");
        }
        inline app::PhysicMaterial__Array* create() {
            return il2cpp::create_object<app::PhysicMaterial__Array>(get_class());
        }
    } // namespace PhysicMaterial__Array
} // namespace app::classes::types
