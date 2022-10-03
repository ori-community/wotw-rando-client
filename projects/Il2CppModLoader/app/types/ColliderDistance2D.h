#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColliderDistance2D {
        namespace {
            app::ColliderDistance2D__Class* type_info_ref = nullptr;
        }
        app::ColliderDistance2D__Class** type_info = &type_info_ref;
        inline app::ColliderDistance2D__Class* get_class() {
            return il2cpp::get_class<app::ColliderDistance2D__Class>(type_info, "UnityEngine", "ColliderDistance2D");
        }
        inline app::ColliderDistance2D* create() {
            return il2cpp::create_object<app::ColliderDistance2D>(get_class());
        }
        inline app::ColliderDistance2D__Boxed* box(app::ColliderDistance2D value) {
            return il2cpp::box_value<app::ColliderDistance2D__Boxed>(get_class(), value);
        }
    } // namespace ColliderDistance2D
} // namespace app::classes::types
