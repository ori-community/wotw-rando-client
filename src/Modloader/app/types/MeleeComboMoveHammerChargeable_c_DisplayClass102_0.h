#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable_c_DisplayClass102_0.h>
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerChargeable_c_DisplayClass102_0 {
        inline app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class** type_info() {
            static app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class**)(modloader::win::memory::resolve_rva(0x04761A50));
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class>(type_info(), "", "MeleeComboMoveHammerChargeable", "<>c__DisplayClass102_0");
        }
        inline app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerChargeable_c_DisplayClass102_0>(get_class());
        }
    } // namespace MeleeComboMoveHammerChargeable_c_DisplayClass102_0
} // namespace app::classes::types
