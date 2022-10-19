#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammer {
        namespace {
            inline app::MeleeComboMoveHammer__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboMoveHammer__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveHammer__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammer__Class>(type_info, "", "MeleeComboMoveHammer");
        }
        inline app::MeleeComboMoveHammer* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammer>(get_class());
        }
    } // namespace MeleeComboMoveHammer
} // namespace app::classes::types
