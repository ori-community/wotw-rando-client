#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine_Point__Array {
        namespace {
            inline app::WaterFall_WaterLine_Point__Array__Class* type_info_ref = nullptr;
        }
        inline app::WaterFall_WaterLine_Point__Array__Class** type_info = &type_info_ref;
        inline app::WaterFall_WaterLine_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFall_WaterLine_Point__Array__Class>(type_info, "Moon", "WaterFall+WaterLine+Point[]");
        }
        inline app::WaterFall_WaterLine_Point__Array* create() {
            return il2cpp::create_object<app::WaterFall_WaterLine_Point__Array>(get_class());
        }
    } // namespace WaterFall_WaterLine_Point__Array
} // namespace app::classes::types
