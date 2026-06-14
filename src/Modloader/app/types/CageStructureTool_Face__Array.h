#pragma once
#include <Modloader/app/structs/CageStructureTool_Face__Array.h>
#include <Modloader/app/structs/CageStructureTool_Face__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_Face__Array {
        inline app::CageStructureTool_Face__Array__Class** type_info() {
            static app::CageStructureTool_Face__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageStructureTool_Face__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageStructureTool_Face__Array__Class* get_class() {
            return il2cpp::get_class<app::CageStructureTool_Face__Array__Class>(type_info(), "", "CageStructureTool+Face[]");
        }
        inline app::CageStructureTool_Face__Array* create() {
            return il2cpp::create_object<app::CageStructureTool_Face__Array>(get_class());
        }
    } // namespace CageStructureTool_Face__Array
} // namespace app::classes::types
