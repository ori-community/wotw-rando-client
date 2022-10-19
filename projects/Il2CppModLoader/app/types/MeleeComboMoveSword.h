#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveSword {
        inline app::MeleeComboMoveSword__Class** type_info = (app::MeleeComboMoveSword__Class**)(modloader::win::memory::resolve_rva(0x047324E0));
        inline app::MeleeComboMoveSword__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSword__Class>(type_info, "", "MeleeComboMoveSword");
        }
        inline app::MeleeComboMoveSword* create() {
            return il2cpp::create_object<app::MeleeComboMoveSword>(get_class());
        }
    } // namespace MeleeComboMoveSword
} // namespace app::classes::types
