#pragma once
#include <Modloader/app/structs/WaterFall_WaterLine_Point__Array.h>
#include <Modloader/app/structs/WaterFall_WaterLine_Point__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine_Point__Array {
        inline app::WaterFall_WaterLine_Point__Array__Class** type_info() {
            static app::WaterFall_WaterLine_Point__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterFall_WaterLine_Point__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterFall_WaterLine_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFall_WaterLine_Point__Array__Class>(type_info(), "Moon", "WaterFall+WaterLine+Point[]");
        }
        inline app::WaterFall_WaterLine_Point__Array* create() {
            return il2cpp::create_object<app::WaterFall_WaterLine_Point__Array>(get_class());
        }
    } // namespace WaterFall_WaterLine_Point__Array
} // namespace app::classes::types
