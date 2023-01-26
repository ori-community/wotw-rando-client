#pragma once
#include <Modloader/app/structs/CageStructureTool__Array.h>
#include <Modloader/app/structs/CageStructureTool__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool__Array {
        inline app::CageStructureTool__Array__Class** type_info() {
            static app::CageStructureTool__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageStructureTool__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageStructureTool__Array__Class* get_class() {
            return il2cpp::get_class<app::CageStructureTool__Array__Class>(type_info(), "", "CageStructureTool[]");
        }
        inline app::CageStructureTool__Array* create() {
            return il2cpp::create_object<app::CageStructureTool__Array>(get_class());
        }
    } // namespace CageStructureTool__Array
} // namespace app::classes::types
