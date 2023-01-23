#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeleeComboMoveHammerStomp__Class.h>
#include <Modloader/app/structs/MeleeComboMoveHammerStomp.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerStomp {
        namespace {
            inline app::MeleeComboMoveHammerStomp__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboMoveHammerStomp__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveHammerStomp__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerStomp__Class>(type_info, "", "MeleeComboMoveHammerStomp");
        }
        inline app::MeleeComboMoveHammerStomp* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerStomp>(get_class());
        }
    } // namespace MeleeComboMoveHammerStomp
} // namespace app::classes::types
