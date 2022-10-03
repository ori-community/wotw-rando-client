#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionNode_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionNode_1__Class** type_info;
        inline app::ActionNode_1__Class* get_class() {
            return il2cpp::get_class<app::ActionNode_1__Class>(type_info, "UberBehaviourTree", "ActionNode");
        }
        inline app::ActionNode_1* create() {
            return il2cpp::create_object<app::ActionNode_1>(get_class());
        }
    } // namespace ActionNode_1
} // namespace app::classes::types
