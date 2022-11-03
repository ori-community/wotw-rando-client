#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShrineCombat_IdleState {
        inline app::ShrineCombat_IdleState__Class** type_info = (app::ShrineCombat_IdleState__Class**)(modloader::win::memory::resolve_rva(0x04711AE0));
        inline app::ShrineCombat_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_IdleState__Class>(type_info, "", "ShrineCombat", "IdleState");
        }
        inline app::ShrineCombat_IdleState* create() {
            return il2cpp::create_object<app::ShrineCombat_IdleState>(get_class());
        }
    } // namespace ShrineCombat_IdleState
} // namespace app::classes::types
