#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicMaterial__Array {
        namespace {
            inline app::PhysicMaterial__Array__Class* type_info_ref = nullptr;
        }
        inline app::PhysicMaterial__Array__Class** type_info = &type_info_ref;
        inline app::PhysicMaterial__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterial__Array__Class>(type_info, "UnityEngine", "PhysicMaterial[]");
        }
        inline app::PhysicMaterial__Array* create() {
            return il2cpp::create_object<app::PhysicMaterial__Array>(get_class());
        }
    } // namespace PhysicMaterial__Array
} // namespace app::classes::types
