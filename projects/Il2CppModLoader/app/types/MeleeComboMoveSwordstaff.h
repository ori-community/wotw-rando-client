#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordstaff {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveSwordstaff__Class** type_info;
        inline app::MeleeComboMoveSwordstaff__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSwordstaff__Class>(type_info, "", "MeleeComboMoveSwordstaff");
        }
        inline app::MeleeComboMoveSwordstaff* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordstaff>(get_class());
        }
    } // namespace MeleeComboMoveSwordstaff
} // namespace app::classes::types
