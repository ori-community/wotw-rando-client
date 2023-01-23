#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterFall_WaterLine__Array__Class.h>
#include <Modloader/app/structs/WaterFall_WaterLine__Array.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine__Array {
        namespace {
            inline app::WaterFall_WaterLine__Array__Class* type_info_ref = nullptr;
        }
        inline app::WaterFall_WaterLine__Array__Class** type_info = &type_info_ref;
        inline app::WaterFall_WaterLine__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFall_WaterLine__Array__Class>(type_info, "Moon", "WaterFall+WaterLine[]");
        }
        inline app::WaterFall_WaterLine__Array* create() {
            return il2cpp::create_object<app::WaterFall_WaterLine__Array>(get_class());
        }
    } // namespace WaterFall_WaterLine__Array
} // namespace app::classes::types
