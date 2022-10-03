#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeComboMoveHammerBase__Class** type_info;
        inline app::MeleeComboMoveHammerBase__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerBase__Class>(type_info, "", "MeleeComboMoveHammerBase");
        }
        inline app::MeleeComboMoveHammerBase* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerBase>(get_class());
        }
    } // namespace MeleeComboMoveHammerBase
} // namespace app::classes::types
