#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_ShrineCombatState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShrineCombat_ShrineCombatState__Class** type_info;
        inline app::ShrineCombat_ShrineCombatState__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_ShrineCombatState__Class>(type_info, "", "ShrineCombat", "ShrineCombatState");
        }
        inline app::ShrineCombat_ShrineCombatState* create() {
            return il2cpp::create_object<app::ShrineCombat_ShrineCombatState>(get_class());
        }
    } // namespace ShrineCombat_ShrineCombatState
} // namespace app::classes::types
