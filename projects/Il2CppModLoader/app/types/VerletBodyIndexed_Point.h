#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Point {
        namespace {
            app::VerletBodyIndexed_Point__Class* type_info_ref = nullptr;
        }
        app::VerletBodyIndexed_Point__Class** type_info = &type_info_ref;
        inline app::VerletBodyIndexed_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBodyIndexed_Point__Class>(type_info, "Moon", "VerletBodyIndexed", "Point");
        }
        inline app::VerletBodyIndexed_Point* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_Point>(get_class());
        }
        inline app::VerletBodyIndexed_Point__Boxed* box(app::VerletBodyIndexed_Point value) {
            return il2cpp::box_value<app::VerletBodyIndexed_Point__Boxed>(get_class(), value);
        }
        inline app::VerletBodyIndexed_Point__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBodyIndexed_Point__Array>(get_class(), size);
        }
    } // namespace VerletBodyIndexed_Point
} // namespace app::classes::types
