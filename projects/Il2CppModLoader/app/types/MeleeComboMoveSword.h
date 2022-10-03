#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSword {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveSword__Class** type_info;
        inline app::MeleeComboMoveSword__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSword__Class>(type_info, "", "MeleeComboMoveSword");
        }
        inline app::MeleeComboMoveSword* create() {
            return il2cpp::create_object<app::MeleeComboMoveSword>(get_class());
        }
    } // namespace MeleeComboMoveSword
} // namespace app::classes::types
