#pragma once
#include <Modloader/app/structs/Physics.h>
#include <Modloader/app/structs/Physics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Physics {
        inline app::Physics__Class** type_info() {
            static app::Physics__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Physics__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Physics__Class* get_class() {
            return il2cpp::get_class<app::Physics__Class>(type_info(), "UnityEngine", "Physics");
        }
        inline app::Physics* create() {
            return il2cpp::create_object<app::Physics>(get_class());
        }
    } // namespace Physics
} // namespace app::classes::types
