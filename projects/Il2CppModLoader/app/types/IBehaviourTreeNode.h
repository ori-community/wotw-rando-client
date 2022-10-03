#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBehaviourTreeNode {
        namespace {
            app::IBehaviourTreeNode__Class* type_info_ref = nullptr;
        }
        app::IBehaviourTreeNode__Class** type_info = &type_info_ref;
        inline app::IBehaviourTreeNode__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourTreeNode__Class>(type_info, "UberBehaviourTree", "IBehaviourTreeNode");
        }
        inline app::IBehaviourTreeNode* create() {
            return il2cpp::create_object<app::IBehaviourTreeNode>(get_class());
        }
        inline app::IBehaviourTreeNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IBehaviourTreeNode__Array>(get_class(), size);
        }
    } // namespace IBehaviourTreeNode
} // namespace app::classes::types
