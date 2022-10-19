#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple_HitStop_d_76 {
        inline app::MeleeComboMoveHammerSimple_HitStop_d_76__Class** type_info = (app::MeleeComboMoveHammerSimple_HitStop_d_76__Class**)(modloader::win::memory::resolve_rva(0x04775B70));
        inline app::MeleeComboMoveHammerSimple_HitStop_d_76__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerSimple_HitStop_d_76__Class>(type_info, "", "MeleeComboMoveHammerSimple", "<HitStop>d__76");
        }
        inline app::MeleeComboMoveHammerSimple_HitStop_d_76* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple_HitStop_d_76>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple_HitStop_d_76
} // namespace app::classes::types
