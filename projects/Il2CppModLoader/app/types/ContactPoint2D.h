#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactPoint2D {
        namespace {
            app::ContactPoint2D__Class* type_info_ref = nullptr;
        }
        app::ContactPoint2D__Class** type_info = &type_info_ref;
        inline app::ContactPoint2D__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint2D__Class>(type_info, "UnityEngine", "ContactPoint2D");
        }
        inline app::ContactPoint2D* create() {
            return il2cpp::create_object<app::ContactPoint2D>(get_class());
        }
        inline app::ContactPoint2D__Boxed* box(app::ContactPoint2D value) {
            return il2cpp::box_value<app::ContactPoint2D__Boxed>(get_class(), value);
        }
        inline app::ContactPoint2D__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactPoint2D__Array>(get_class(), size);
        }
    } // namespace ContactPoint2D
} // namespace app::classes::types
