#pragma once
#include <Modloader/app/structs/CageStructureTool_c_DisplayClass62_0.h>
#include <Modloader/app/structs/CageStructureTool_c_DisplayClass62_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_c_DisplayClass62_0 {
        inline app::CageStructureTool_c_DisplayClass62_0__Class** type_info() {
            static app::CageStructureTool_c_DisplayClass62_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CageStructureTool_c_DisplayClass62_0__Class**)(modloader::win::memory::resolve_rva(0x04716900));
            }
            return cache;
        }
        inline app::CageStructureTool_c_DisplayClass62_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_c_DisplayClass62_0__Class>(type_info(), "", "CageStructureTool", "<>c__DisplayClass62_0");
        }
        inline app::CageStructureTool_c_DisplayClass62_0* create() {
            return il2cpp::create_object<app::CageStructureTool_c_DisplayClass62_0>(get_class());
        }
    } // namespace CageStructureTool_c_DisplayClass62_0
} // namespace app::classes::types
