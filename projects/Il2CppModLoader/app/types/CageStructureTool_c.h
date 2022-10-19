#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageStructureTool_c {
        inline app::CageStructureTool_c__Class** type_info = (app::CageStructureTool_c__Class**)(modloader::win::memory::resolve_rva(0x0470F608));
        inline app::CageStructureTool_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_c__Class>(type_info, "", "CageStructureTool", "<>c");
        }
        inline app::CageStructureTool_c* create() {
            return il2cpp::create_object<app::CageStructureTool_c>(get_class());
        }
    } // namespace CageStructureTool_c
} // namespace app::classes::types
