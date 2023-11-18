#pragma once
#include <Modloader/app/structs/PhysicsSystemPointSet.h>
#include <Modloader/app/structs/PhysicsSystemPointSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsSystemPointSet {
        inline app::PhysicsSystemPointSet__Class** type_info() {
            static app::PhysicsSystemPointSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsSystemPointSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsSystemPointSet__Class* get_class() {
            return il2cpp::get_class<app::PhysicsSystemPointSet__Class>(type_info(), "", "PhysicsSystemPointSet");
        }
        inline app::PhysicsSystemPointSet* create() {
            return il2cpp::create_object<app::PhysicsSystemPointSet>(get_class());
        }
    } // namespace PhysicsSystemPointSet
} // namespace app::classes::types
