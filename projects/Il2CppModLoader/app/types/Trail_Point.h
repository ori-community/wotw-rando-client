#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Trail_Point {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Trail_Point__Class** type_info;
        inline app::Trail_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_Point__Class>(type_info, "Moon", "Trail", "Point");
        }
        inline app::Trail_Point* create() {
            return il2cpp::create_object<app::Trail_Point>(get_class());
        }
        inline app::Trail_Point__Boxed* box(app::Trail_Point value) {
            return il2cpp::box_value<app::Trail_Point__Boxed>(get_class(), value);
        }
        inline app::Trail_Point__Array* create_array(int size) {
            return il2cpp::array_new<app::Trail_Point__Array>(get_class(), size);
        }
        inline app::Trail_Point__Array* create_array(const std::vector<app::Trail_Point>& items) {
            return il2cpp::array_new<app::Trail_Point__Array>(get_class(), items);
        }
    } // namespace Trail_Point
} // namespace app::classes::types
