#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordCharge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveSwordCharge__Class** type_info;
        inline app::MeleeComboMoveSwordCharge__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSwordCharge__Class>(type_info, "Moon", "MeleeComboMoveSwordCharge");
        }
        inline app::MeleeComboMoveSwordCharge* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordCharge>(get_class());
        }
    } // namespace MeleeComboMoveSwordCharge
} // namespace app::classes::types
