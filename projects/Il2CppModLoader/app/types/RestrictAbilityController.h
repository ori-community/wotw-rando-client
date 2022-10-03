#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestrictAbilityController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RestrictAbilityController__Class** type_info;
        inline app::RestrictAbilityController__Class* get_class() {
            return il2cpp::get_class<app::RestrictAbilityController__Class>(type_info, "", "RestrictAbilityController");
        }
        inline app::RestrictAbilityController* create() {
            return il2cpp::create_object<app::RestrictAbilityController>(get_class());
        }
    } // namespace RestrictAbilityController
} // namespace app::classes::types
