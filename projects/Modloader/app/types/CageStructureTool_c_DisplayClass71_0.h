#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CageStructureTool_c_DisplayClass71_0__Class.h>
#include <Modloader/app/structs/CageStructureTool_c_DisplayClass71_0.h>

namespace app::classes::types {
    namespace CageStructureTool_c_DisplayClass71_0 {
        inline app::CageStructureTool_c_DisplayClass71_0__Class** type_info = (app::CageStructureTool_c_DisplayClass71_0__Class**)(modloader::win::memory::resolve_rva(0x04789450));
        inline app::CageStructureTool_c_DisplayClass71_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_c_DisplayClass71_0__Class>(type_info, "", "CageStructureTool", "<>c__DisplayClass71_0");
        }
        inline app::CageStructureTool_c_DisplayClass71_0* create() {
            return il2cpp::create_object<app::CageStructureTool_c_DisplayClass71_0>(get_class());
        }
    } // namespace CageStructureTool_c_DisplayClass71_0
} // namespace app::classes::types
