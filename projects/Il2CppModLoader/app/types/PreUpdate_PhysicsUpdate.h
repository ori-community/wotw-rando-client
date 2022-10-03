#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_PhysicsUpdate {
        namespace {
            app::PreUpdate_PhysicsUpdate__Class* type_info_ref = nullptr;
        }
        app::PreUpdate_PhysicsUpdate__Class** type_info = &type_info_ref;
        inline app::PreUpdate_PhysicsUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_PhysicsUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "PhysicsUpdate");
        }
        inline app::PreUpdate_PhysicsUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_PhysicsUpdate>(get_class());
        }
        inline app::PreUpdate_PhysicsUpdate__Boxed* box(app::PreUpdate_PhysicsUpdate value) {
            return il2cpp::box_value<app::PreUpdate_PhysicsUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_PhysicsUpdate
} // namespace app::classes::types
