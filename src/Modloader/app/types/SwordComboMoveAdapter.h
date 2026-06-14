#pragma once
#include <Modloader/app/structs/SwordComboMoveAdapter.h>
#include <Modloader/app/structs/SwordComboMoveAdapter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwordComboMoveAdapter {
        inline app::SwordComboMoveAdapter__Class** type_info() {
            static app::SwordComboMoveAdapter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwordComboMoveAdapter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwordComboMoveAdapter__Class* get_class() {
            return il2cpp::get_class<app::SwordComboMoveAdapter__Class>(type_info(), "Moon.ComboSystem", "SwordComboMoveAdapter");
        }
        inline app::SwordComboMoveAdapter* create() {
            return il2cpp::create_object<app::SwordComboMoveAdapter>(get_class());
        }
    } // namespace SwordComboMoveAdapter
} // namespace app::classes::types
