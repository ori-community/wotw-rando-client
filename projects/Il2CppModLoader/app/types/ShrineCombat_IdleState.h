#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_IdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShrineCombat_IdleState__Class** type_info;
        inline app::ShrineCombat_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_IdleState__Class>(type_info, "", "ShrineCombat", "IdleState");
        }
        inline app::ShrineCombat_IdleState* create() {
            return il2cpp::create_object<app::ShrineCombat_IdleState>(get_class());
        }
    } // namespace ShrineCombat_IdleState
} // namespace app::classes::types
