#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMove {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMove__Class** type_info;
        inline app::MeleeComboMove__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMove__Class>(type_info, "", "MeleeComboMove");
        }
        inline app::MeleeComboMove* create() {
            return il2cpp::create_object<app::MeleeComboMove>(get_class());
        }
        inline app::MeleeComboMove__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeComboMove__Array>(get_class(), size);
        }
    } // namespace MeleeComboMove
} // namespace app::classes::types
