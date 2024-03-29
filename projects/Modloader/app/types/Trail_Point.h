#pragma once
#include <Modloader/app/structs/Trail_Point.h>
#include <Modloader/app/structs/Trail_Point__Array.h>
#include <Modloader/app/structs/Trail_Point__Boxed.h>
#include <Modloader/app/structs/Trail_Point__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trail_Point {
        inline app::Trail_Point__Class** type_info() {
            static app::Trail_Point__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Trail_Point__Class**)(modloader::win::memory::resolve_rva(0x0472E2E8));
            }
            return cache;
        }
        inline app::Trail_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_Point__Class>(type_info(), "Moon", "Trail", "Point");
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
