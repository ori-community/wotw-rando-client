#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerChargeable {
        namespace {
            inline app::MeleeComboMoveHammerChargeable__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboMoveHammerChargeable__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveHammerChargeable__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerChargeable__Class>(type_info, "", "MeleeComboMoveHammerChargeable");
        }
        inline app::MeleeComboMoveHammerChargeable* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerChargeable>(get_class());
        }
    } // namespace MeleeComboMoveHammerChargeable
} // namespace app::classes::types
