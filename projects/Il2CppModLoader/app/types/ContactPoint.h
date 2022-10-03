#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactPoint {
        namespace {
            app::ContactPoint__Class* type_info_ref = nullptr;
        }
        app::ContactPoint__Class** type_info = &type_info_ref;
        inline app::ContactPoint__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint__Class>(type_info, "UnityEngine", "ContactPoint");
        }
        inline app::ContactPoint* create() {
            return il2cpp::create_object<app::ContactPoint>(get_class());
        }
        inline app::ContactPoint__Boxed* box(app::ContactPoint value) {
            return il2cpp::box_value<app::ContactPoint__Boxed>(get_class(), value);
        }
        inline app::ContactPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactPoint__Array>(get_class(), size);
        }
    } // namespace ContactPoint
} // namespace app::classes::types
