#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_HitStop_d_76.h>
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_HitStop_d_76__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple_HitStop_d_76 {
        inline app::MeleeComboMoveHammerSimple_HitStop_d_76__Class** type_info() {
            static app::MeleeComboMoveHammerSimple_HitStop_d_76__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveHammerSimple_HitStop_d_76__Class**)(modloader::win::memory::resolve_rva(0x04775B70));
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerSimple_HitStop_d_76__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerSimple_HitStop_d_76__Class>(type_info(), "", "MeleeComboMoveHammerSimple", "<HitStop>d__76");
        }
        inline app::MeleeComboMoveHammerSimple_HitStop_d_76* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple_HitStop_d_76>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple_HitStop_d_76
} // namespace app::classes::types
