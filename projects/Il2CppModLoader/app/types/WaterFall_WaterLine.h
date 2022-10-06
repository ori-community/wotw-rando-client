#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaterFall_WaterLine__Class** type_info;
        inline app::WaterFall_WaterLine__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFall_WaterLine__Class>(type_info, "Moon", "WaterFall", "WaterLine");
        }
        inline app::WaterFall_WaterLine* create() {
            return il2cpp::create_object<app::WaterFall_WaterLine>(get_class());
        }
        inline app::WaterFall_WaterLine__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterFall_WaterLine__Array>(get_class(), size);
        }
        inline app::WaterFall_WaterLine__Array* create_array(const std::vector<app::WaterFall_WaterLine*>& items) {
            return il2cpp::array_new<app::WaterFall_WaterLine__Array>(get_class(), items);
        }
    } // namespace WaterFall_WaterLine
} // namespace app::classes::types
