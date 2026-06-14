#pragma once
#include <Modloader/app/structs/HammerComboMoveAdapter.h>
#include <Modloader/app/structs/HammerComboMoveAdapter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveAdapter {
        inline app::HammerComboMoveAdapter__Class** type_info() {
            static app::HammerComboMoveAdapter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerComboMoveAdapter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerComboMoveAdapter__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveAdapter__Class>(type_info(), "Moon.ComboSystem", "HammerComboMoveAdapter");
        }
        inline app::HammerComboMoveAdapter* create() {
            return il2cpp::create_object<app::HammerComboMoveAdapter>(get_class());
        }
    } // namespace HammerComboMoveAdapter
} // namespace app::classes::types
