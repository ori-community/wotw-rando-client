#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBehaviourTreeNode__Array {
        namespace {
            app::IBehaviourTreeNode__Array__Class* type_info_ref = nullptr;
        }
        app::IBehaviourTreeNode__Array__Class** type_info = &type_info_ref;
        inline app::IBehaviourTreeNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourTreeNode__Array__Class>(type_info, "UberBehaviourTree", "IBehaviourTreeNode[]");
        }
        inline app::IBehaviourTreeNode__Array* create() {
            return il2cpp::create_object<app::IBehaviourTreeNode__Array>(get_class());
        }
    } // namespace IBehaviourTreeNode__Array
} // namespace app::classes::types
