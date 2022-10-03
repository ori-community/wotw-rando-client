#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordAirDown {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveSwordAirDown__Class** type_info;
        inline app::MeleeComboMoveSwordAirDown__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSwordAirDown__Class>(type_info, "", "MeleeComboMoveSwordAirDown");
        }
        inline app::MeleeComboMoveSwordAirDown* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordAirDown>(get_class());
        }
    } // namespace MeleeComboMoveSwordAirDown
} // namespace app::classes::types
