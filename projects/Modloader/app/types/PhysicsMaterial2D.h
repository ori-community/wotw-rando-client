#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsMaterial2D {
        namespace {
            inline app::PhysicsMaterial2D__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsMaterial2D__Class** type_info = &type_info_ref;
        inline app::PhysicsMaterial2D__Class* get_class() {
            return il2cpp::get_class<app::PhysicsMaterial2D__Class>(type_info, "UnityEngine", "PhysicsMaterial2D");
        }
        inline app::PhysicsMaterial2D* create() {
            return il2cpp::create_object<app::PhysicsMaterial2D>(get_class());
        }
    } // namespace PhysicsMaterial2D
} // namespace app::classes::types
