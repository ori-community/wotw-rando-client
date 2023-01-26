#pragma once
#include <Modloader/app/structs/MeleeComboMoveSettings.h>
#include <Modloader/app/structs/MeleeComboMoveSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSettings {
        inline app::MeleeComboMoveSettings__Class** type_info() {
            static app::MeleeComboMoveSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveSettings__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSettings__Class>(type_info(), "Moon.ComboSystem", "MeleeComboMoveSettings");
        }
        inline app::MeleeComboMoveSettings* create() {
            return il2cpp::create_object<app::MeleeComboMoveSettings>(get_class());
        }
    } // namespace MeleeComboMoveSettings
} // namespace app::classes::types
