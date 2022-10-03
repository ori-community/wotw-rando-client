#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine_Point {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaterFall_WaterLine_Point__Class** type_info;
        inline app::WaterFall_WaterLine_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFall_WaterLine_Point__Class>(type_info, "Moon", "WaterFall+WaterLine", "Point");
        }
        inline app::WaterFall_WaterLine_Point* create() {
            return il2cpp::create_object<app::WaterFall_WaterLine_Point>(get_class());
        }
        inline app::WaterFall_WaterLine_Point__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterFall_WaterLine_Point__Array>(get_class(), size);
        }
    } // namespace WaterFall_WaterLine_Point
} // namespace app::classes::types
