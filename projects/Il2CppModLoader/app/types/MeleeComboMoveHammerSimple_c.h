#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveHammerSimple_c__Class** type_info;
        inline app::MeleeComboMoveHammerSimple_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerSimple_c__Class>(type_info, "", "MeleeComboMoveHammerSimple", "<>c");
        }
        inline app::MeleeComboMoveHammerSimple_c* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple_c>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple_c
} // namespace app::classes::types
