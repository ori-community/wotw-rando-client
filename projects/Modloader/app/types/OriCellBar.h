#pragma once
#include <Modloader/app/structs/OriCellBar.h>
#include <Modloader/app/structs/OriCellBar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriCellBar {
        inline app::OriCellBar__Class** type_info() {
            static app::OriCellBar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriCellBar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriCellBar__Class* get_class() {
            return il2cpp::get_class<app::OriCellBar__Class>(type_info(), "", "OriCellBar");
        }
        inline app::OriCellBar* create() {
            return il2cpp::create_object<app::OriCellBar>(get_class());
        }
    } // namespace OriCellBar
} // namespace app::classes::types
