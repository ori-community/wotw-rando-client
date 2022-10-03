#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerStomp {
        namespace {
            app::MeleeComboMoveHammerStomp__Class* type_info_ref = nullptr;
        }
        app::MeleeComboMoveHammerStomp__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveHammerStomp__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerStomp__Class>(type_info, "", "MeleeComboMoveHammerStomp");
        }
        inline app::MeleeComboMoveHammerStomp* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerStomp>(get_class());
        }
    } // namespace MeleeComboMoveHammerStomp
} // namespace app::classes::types
