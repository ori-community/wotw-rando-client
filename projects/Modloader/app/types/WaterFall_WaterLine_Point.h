#pragma once
#include <Modloader/app/structs/WaterFall_WaterLine_Point.h>
#include <Modloader/app/structs/WaterFall_WaterLine_Point__Array.h>
#include <Modloader/app/structs/WaterFall_WaterLine_Point__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine_Point {
        inline app::WaterFall_WaterLine_Point__Class** type_info() {
            static app::WaterFall_WaterLine_Point__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterFall_WaterLine_Point__Class**)(modloader::win::memory::resolve_rva(0x0470D6B0));
            }
            return cache;
        }
        inline app::WaterFall_WaterLine_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFall_WaterLine_Point__Class>(type_info(), "Moon", "WaterFall+WaterLine", "Point");
        }
        inline app::WaterFall_WaterLine_Point* create() {
            return il2cpp::create_object<app::WaterFall_WaterLine_Point>(get_class());
        }
        inline app::WaterFall_WaterLine_Point__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterFall_WaterLine_Point__Array>(get_class(), size);
        }
        inline app::WaterFall_WaterLine_Point__Array* create_array(const std::vector<app::WaterFall_WaterLine_Point*>& items) {
            return il2cpp::array_new<app::WaterFall_WaterLine_Point__Array>(get_class(), items);
        }
    } // namespace WaterFall_WaterLine_Point
} // namespace app::classes::types
