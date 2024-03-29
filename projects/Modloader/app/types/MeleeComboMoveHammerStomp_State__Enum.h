#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerStomp_State__Enum.h>
#include <Modloader/app/structs/MeleeComboMoveHammerStomp_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerStomp_State__Enum {
        inline app::MeleeComboMoveHammerStomp_State__Enum__Class** type_info() {
            static app::MeleeComboMoveHammerStomp_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveHammerStomp_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerStomp_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerStomp_State__Enum__Class>(type_info(), "", "MeleeComboMoveHammerStomp", "State");
        }
        inline app::MeleeComboMoveHammerStomp_State__Enum* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerStomp_State__Enum>(get_class());
        }
    } // namespace MeleeComboMoveHammerStomp_State__Enum
} // namespace app::classes::types
