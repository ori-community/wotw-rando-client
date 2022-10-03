#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionNode {
        namespace {
            app::ActionNode__Class* type_info_ref = nullptr;
        }
        app::ActionNode__Class** type_info = &type_info_ref;
        inline app::ActionNode__Class* get_class() {
            return il2cpp::get_class<app::ActionNode__Class>(type_info, "Moon.BehaviourSystem", "ActionNode");
        }
        inline app::ActionNode* create() {
            return il2cpp::create_object<app::ActionNode>(get_class());
        }
    } // namespace ActionNode
} // namespace app::classes::types
