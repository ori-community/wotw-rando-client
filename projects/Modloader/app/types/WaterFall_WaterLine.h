#pragma once
#include <Modloader/app/structs/WaterFall_WaterLine.h>
#include <Modloader/app/structs/WaterFall_WaterLine__Array.h>
#include <Modloader/app/structs/WaterFall_WaterLine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine {
        inline app::WaterFall_WaterLine__Class** type_info() {
            static app::WaterFall_WaterLine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterFall_WaterLine__Class**)(modloader::win::memory::resolve_rva(0x04793888));
            }
            return cache;
        }
        inline app::WaterFall_WaterLine__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFall_WaterLine__Class>(type_info(), "Moon", "WaterFall", "WaterLine");
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
