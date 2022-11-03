#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShrineCombat_ShrineCombatState {
        inline app::ShrineCombat_ShrineCombatState__Class** type_info = (app::ShrineCombat_ShrineCombatState__Class**)(modloader::win::memory::resolve_rva(0x04779FF8));
        inline app::ShrineCombat_ShrineCombatState__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_ShrineCombatState__Class>(type_info, "", "ShrineCombat", "ShrineCombatState");
        }
        inline app::ShrineCombat_ShrineCombatState* create() {
            return il2cpp::create_object<app::ShrineCombat_ShrineCombatState>(get_class());
        }
    } // namespace ShrineCombat_ShrineCombatState
} // namespace app::classes::types
