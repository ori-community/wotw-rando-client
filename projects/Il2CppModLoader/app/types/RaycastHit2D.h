#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaycastHit2D {
        namespace {
            app::RaycastHit2D__Class* type_info_ref = nullptr;
        }
        app::RaycastHit2D__Class** type_info = &type_info_ref;
        inline app::RaycastHit2D__Class* get_class() {
            return il2cpp::get_class<app::RaycastHit2D__Class>(type_info, "UnityEngine", "RaycastHit2D");
        }
        inline app::RaycastHit2D* create() {
            return il2cpp::create_object<app::RaycastHit2D>(get_class());
        }
        inline app::RaycastHit2D__Boxed* box(app::RaycastHit2D value) {
            return il2cpp::box_value<app::RaycastHit2D__Boxed>(get_class(), value);
        }
        inline app::RaycastHit2D__Array* create_array(int size) {
            return il2cpp::array_new<app::RaycastHit2D__Array>(get_class(), size);
        }
        inline app::RaycastHit2D__Array* create_array(const std::vector<app::RaycastHit2D>& items) {
            return il2cpp::array_new<app::RaycastHit2D__Array>(get_class(), items);
        }
    } // namespace RaycastHit2D
} // namespace app::classes::types
