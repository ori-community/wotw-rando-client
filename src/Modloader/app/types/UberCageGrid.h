#pragma once
#include <Modloader/app/structs/UberCageGrid.h>
#include <Modloader/app/structs/UberCageGrid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberCageGrid {
        inline app::UberCageGrid__Class** type_info() {
            static app::UberCageGrid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberCageGrid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberCageGrid__Class* get_class() {
            return il2cpp::get_class<app::UberCageGrid__Class>(type_info(), "", "UberCageGrid");
        }
        inline app::UberCageGrid* create() {
            return il2cpp::create_object<app::UberCageGrid>(get_class());
        }
    } // namespace UberCageGrid
} // namespace app::classes::types
