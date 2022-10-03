#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsSystemPointSet {
        namespace {
            app::PhysicsSystemPointSet__Class* type_info_ref = nullptr;
        }
        app::PhysicsSystemPointSet__Class** type_info = &type_info_ref;
        inline app::PhysicsSystemPointSet__Class* get_class() {
            return il2cpp::get_class<app::PhysicsSystemPointSet__Class>(type_info, "", "PhysicsSystemPointSet");
        }
        inline app::PhysicsSystemPointSet* create() {
            return il2cpp::create_object<app::PhysicsSystemPointSet>(get_class());
        }
    } // namespace PhysicsSystemPointSet
} // namespace app::classes::types
