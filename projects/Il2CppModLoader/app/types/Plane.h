#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Plane {
        namespace {
            app::Plane__Class* type_info_ref = nullptr;
        }
        app::Plane__Class** type_info = &type_info_ref;
        inline app::Plane__Class* get_class() {
            return il2cpp::get_class<app::Plane__Class>(type_info, "UnityEngine", "Plane");
        }
        inline app::Plane* create() {
            return il2cpp::create_object<app::Plane>(get_class());
        }
        inline app::Plane__Boxed* box(app::Plane value) {
            return il2cpp::box_value<app::Plane__Boxed>(get_class(), value);
        }
        inline app::Plane__Array* create_array(int size) {
            return il2cpp::array_new<app::Plane__Array>(get_class(), size);
        }
    } // namespace Plane
} // namespace app::classes::types
