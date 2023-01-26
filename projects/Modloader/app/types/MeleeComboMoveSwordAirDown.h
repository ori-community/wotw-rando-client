#pragma once
#include <Modloader/app/structs/MeleeComboMoveSwordAirDown.h>
#include <Modloader/app/structs/MeleeComboMoveSwordAirDown__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordAirDown {
        inline app::MeleeComboMoveSwordAirDown__Class** type_info() {
            static app::MeleeComboMoveSwordAirDown__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveSwordAirDown__Class**)(modloader::win::memory::resolve_rva(0x04728840));
            }
            return cache;
        }
        inline app::MeleeComboMoveSwordAirDown__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSwordAirDown__Class>(type_info(), "", "MeleeComboMoveSwordAirDown");
        }
        inline app::MeleeComboMoveSwordAirDown* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordAirDown>(get_class());
        }
    } // namespace MeleeComboMoveSwordAirDown
} // namespace app::classes::types
