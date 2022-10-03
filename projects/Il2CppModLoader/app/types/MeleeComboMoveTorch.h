#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveTorch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveTorch__Class** type_info;
        inline app::MeleeComboMoveTorch__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveTorch__Class>(type_info, "", "MeleeComboMoveTorch");
        }
        inline app::MeleeComboMoveTorch* create() {
            return il2cpp::create_object<app::MeleeComboMoveTorch>(get_class());
        }
    } // namespace MeleeComboMoveTorch
} // namespace app::classes::types
