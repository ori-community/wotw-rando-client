#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveSettings {
        namespace {
            inline app::MeleeComboMoveSettings__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboMoveSettings__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveSettings__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSettings__Class>(type_info, "Moon.ComboSystem", "MeleeComboMoveSettings");
        }
        inline app::MeleeComboMoveSettings* create() {
            return il2cpp::create_object<app::MeleeComboMoveSettings>(get_class());
        }
    } // namespace MeleeComboMoveSettings
} // namespace app::classes::types
