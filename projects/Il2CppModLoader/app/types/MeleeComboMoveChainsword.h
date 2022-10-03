#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveChainsword {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveChainsword__Class** type_info;
        inline app::MeleeComboMoveChainsword__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveChainsword__Class>(type_info, "Moon", "MeleeComboMoveChainsword");
        }
        inline app::MeleeComboMoveChainsword* create() {
            return il2cpp::create_object<app::MeleeComboMoveChainsword>(get_class());
        }
    } // namespace MeleeComboMoveChainsword
} // namespace app::classes::types
