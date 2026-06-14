#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable.h>
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerChargeable {
        inline app::MeleeComboMoveHammerChargeable__Class** type_info() {
            static app::MeleeComboMoveHammerChargeable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveHammerChargeable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerChargeable__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerChargeable__Class>(type_info(), "", "MeleeComboMoveHammerChargeable");
        }
        inline app::MeleeComboMoveHammerChargeable* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerChargeable>(get_class());
        }
    } // namespace MeleeComboMoveHammerChargeable
} // namespace app::classes::types
