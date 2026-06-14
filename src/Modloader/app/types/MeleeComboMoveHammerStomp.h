#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerStomp.h>
#include <Modloader/app/structs/MeleeComboMoveHammerStomp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerStomp {
        inline app::MeleeComboMoveHammerStomp__Class** type_info() {
            static app::MeleeComboMoveHammerStomp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveHammerStomp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerStomp__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerStomp__Class>(type_info(), "", "MeleeComboMoveHammerStomp");
        }
        inline app::MeleeComboMoveHammerStomp* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerStomp>(get_class());
        }
    } // namespace MeleeComboMoveHammerStomp
} // namespace app::classes::types
