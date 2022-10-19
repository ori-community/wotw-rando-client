#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultMoonDriverExecutionOrderMap {
        inline app::DefaultMoonDriverExecutionOrderMap__Class** type_info = (app::DefaultMoonDriverExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x0474D230));
        inline app::DefaultMoonDriverExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::DefaultMoonDriverExecutionOrderMap__Class>(type_info, "Moon", "DefaultMoonDriverExecutionOrderMap");
        }
        inline app::DefaultMoonDriverExecutionOrderMap* create() {
            return il2cpp::create_object<app::DefaultMoonDriverExecutionOrderMap>(get_class());
        }
    } // namespace DefaultMoonDriverExecutionOrderMap
} // namespace app::classes::types
