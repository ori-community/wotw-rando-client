#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerSimple.h>
#include <Modloader/app/structs/MeleeComboMoveHammerSimple__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple {
        inline app::MeleeComboMoveHammerSimple__Class** type_info() {
            static app::MeleeComboMoveHammerSimple__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveHammerSimple__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerSimple__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerSimple__Class>(type_info(), "", "MeleeComboMoveHammerSimple");
        }
        inline app::MeleeComboMoveHammerSimple* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple
} // namespace app::classes::types
