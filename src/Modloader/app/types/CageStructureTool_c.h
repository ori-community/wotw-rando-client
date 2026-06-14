#pragma once
#include <Modloader/app/structs/CageStructureTool_c.h>
#include <Modloader/app/structs/CageStructureTool_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_c {
        inline app::CageStructureTool_c__Class** type_info() {
            static app::CageStructureTool_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CageStructureTool_c__Class**)(modloader::win::memory::resolve_rva(0x0470F608));
            }
            return cache;
        }
        inline app::CageStructureTool_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_c__Class>(type_info(), "", "CageStructureTool", "<>c");
        }
        inline app::CageStructureTool_c* create() {
            return il2cpp::create_object<app::CageStructureTool_c>(get_class());
        }
    } // namespace CageStructureTool_c
} // namespace app::classes::types
