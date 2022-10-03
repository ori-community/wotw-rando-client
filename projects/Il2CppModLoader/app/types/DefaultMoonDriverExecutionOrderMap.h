#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultMoonDriverExecutionOrderMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultMoonDriverExecutionOrderMap__Class** type_info;
        inline app::DefaultMoonDriverExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::DefaultMoonDriverExecutionOrderMap__Class>(type_info, "Moon", "DefaultMoonDriverExecutionOrderMap");
        }
        inline app::DefaultMoonDriverExecutionOrderMap* create() {
            return il2cpp::create_object<app::DefaultMoonDriverExecutionOrderMap>(get_class());
        }
    } // namespace DefaultMoonDriverExecutionOrderMap
} // namespace app::classes::types
