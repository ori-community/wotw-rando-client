#pragma once
#include <Modloader/app/structs/CageStructureToolStressTester.h>
#include <Modloader/app/structs/CageStructureToolStressTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureToolStressTester {
        inline app::CageStructureToolStressTester__Class** type_info() {
            static app::CageStructureToolStressTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageStructureToolStressTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageStructureToolStressTester__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolStressTester__Class>(type_info(), "", "CageStructureToolStressTester");
        }
        inline app::CageStructureToolStressTester* create() {
            return il2cpp::create_object<app::CageStructureToolStressTester>(get_class());
        }
    } // namespace CageStructureToolStressTester
} // namespace app::classes::types
