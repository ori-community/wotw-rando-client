#pragma once
#include <Modloader/app/structs/ColliderDistance2D.h>
#include <Modloader/app/structs/ColliderDistance2D__Boxed.h>
#include <Modloader/app/structs/ColliderDistance2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColliderDistance2D {
        inline app::ColliderDistance2D__Class** type_info() {
            static app::ColliderDistance2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColliderDistance2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColliderDistance2D__Class* get_class() {
            return il2cpp::get_class<app::ColliderDistance2D__Class>(type_info(), "UnityEngine", "ColliderDistance2D");
        }
        inline app::ColliderDistance2D* create() {
            return il2cpp::create_object<app::ColliderDistance2D>(get_class());
        }
        inline app::ColliderDistance2D__Boxed* box(app::ColliderDistance2D value) {
            return il2cpp::box_value<app::ColliderDistance2D__Boxed>(get_class(), value);
        }
    } // namespace ColliderDistance2D
} // namespace app::classes::types
