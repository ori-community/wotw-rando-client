#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageStructureTool_c_DisplayClass75_0 {
        inline app::CageStructureTool_c_DisplayClass75_0__Class** type_info = (app::CageStructureTool_c_DisplayClass75_0__Class**)(modloader::win::memory::resolve_rva(0x04799848));
        inline app::CageStructureTool_c_DisplayClass75_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_c_DisplayClass75_0__Class>(type_info, "", "CageStructureTool", "<>c__DisplayClass75_0");
        }
        inline app::CageStructureTool_c_DisplayClass75_0* create() {
            return il2cpp::create_object<app::CageStructureTool_c_DisplayClass75_0>(get_class());
        }
    } // namespace CageStructureTool_c_DisplayClass75_0
} // namespace app::classes::types
