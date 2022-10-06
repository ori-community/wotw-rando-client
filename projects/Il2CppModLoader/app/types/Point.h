#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Point {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Point__Class** type_info;
        inline app::Point__Class* get_class() {
            return il2cpp::get_class<app::Point__Class>(type_info, "TriangleNet.Geometry", "Point");
        }
        inline app::Point* create() {
            return il2cpp::create_object<app::Point>(get_class());
        }
        inline app::Point__Array* create_array(int size) {
            return il2cpp::array_new<app::Point__Array>(get_class(), size);
        }
        inline app::Point__Array* create_array(const std::vector<app::Point*>& items) {
            return il2cpp::array_new<app::Point__Array>(get_class(), items);
        }
    } // namespace Point
} // namespace app::classes::types
