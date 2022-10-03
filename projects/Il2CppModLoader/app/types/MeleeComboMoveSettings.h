#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSettings {
        namespace {
            app::MeleeComboMoveSettings__Class* type_info_ref = nullptr;
        }
        app::MeleeComboMoveSettings__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveSettings__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSettings__Class>(type_info, "Moon.ComboSystem", "MeleeComboMoveSettings");
        }
        inline app::MeleeComboMoveSettings* create() {
            return il2cpp::create_object<app::MeleeComboMoveSettings>(get_class());
        }
    } // namespace MeleeComboMoveSettings
} // namespace app::classes::types
