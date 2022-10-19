#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionNode_c {
        inline app::ActionNode_c__Class** type_info = (app::ActionNode_c__Class**)(modloader::win::memory::resolve_rva(0x04715980));
        inline app::ActionNode_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionNode_c__Class>(type_info, "Moon.BehaviourSystem", "ActionNode", "<>c");
        }
        inline app::ActionNode_c* create() {
            return il2cpp::create_object<app::ActionNode_c>(get_class());
        }
    } // namespace ActionNode_c
} // namespace app::classes::types
