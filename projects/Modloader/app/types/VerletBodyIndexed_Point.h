#pragma once
#include <Modloader/app/structs/VerletBodyIndexed_Point.h>
#include <Modloader/app/structs/VerletBodyIndexed_Point__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_Point__Boxed.h>
#include <Modloader/app/structs/VerletBodyIndexed_Point__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Point {
        inline app::VerletBodyIndexed_Point__Class** type_info() {
            static app::VerletBodyIndexed_Point__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletBodyIndexed_Point__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletBodyIndexed_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBodyIndexed_Point__Class>(type_info(), "Moon", "VerletBodyIndexed", "Point");
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
        inline app::VerletBodyIndexed_Point__Array* create_array(const std::vector<app::VerletBodyIndexed_Point>& items) {
            return il2cpp::array_new<app::VerletBodyIndexed_Point__Array>(get_class(), items);
        }
    } // namespace VerletBodyIndexed_Point
} // namespace app::classes::types
