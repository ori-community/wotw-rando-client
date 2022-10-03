#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecutionOrderMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecutionOrderMap__Class** type_info;
        inline app::ExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::ExecutionOrderMap__Class>(type_info, "Moon", "ExecutionOrderMap");
        }
        inline app::ExecutionOrderMap* create() {
            return il2cpp::create_object<app::ExecutionOrderMap>(get_class());
        }
    } // namespace ExecutionOrderMap
} // namespace app::classes::types
