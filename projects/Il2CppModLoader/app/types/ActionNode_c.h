#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionNode_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionNode_c__Class** type_info;
        inline app::ActionNode_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionNode_c__Class>(type_info, "Moon.BehaviourSystem", "ActionNode", "<>c");
        }
        inline app::ActionNode_c* create() {
            return il2cpp::create_object<app::ActionNode_c>(get_class());
        }
    } // namespace ActionNode_c
} // namespace app::classes::types
