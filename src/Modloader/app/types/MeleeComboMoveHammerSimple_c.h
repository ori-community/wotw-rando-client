#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_c.h>
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple_c {
        inline app::MeleeComboMoveHammerSimple_c__Class** type_info() {
            static app::MeleeComboMoveHammerSimple_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveHammerSimple_c__Class**)(modloader::win::memory::resolve_rva(0x0475AA10));
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerSimple_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerSimple_c__Class>(type_info(), "", "MeleeComboMoveHammerSimple", "<>c");
        }
        inline app::MeleeComboMoveHammerSimple_c* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple_c>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple_c
} // namespace app::classes::types
