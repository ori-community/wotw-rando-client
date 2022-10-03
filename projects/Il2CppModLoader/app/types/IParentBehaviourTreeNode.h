#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IParentBehaviourTreeNode {
        namespace {
            app::IParentBehaviourTreeNode__Class* type_info_ref = nullptr;
        }
        app::IParentBehaviourTreeNode__Class** type_info = &type_info_ref;
        inline app::IParentBehaviourTreeNode__Class* get_class() {
            return il2cpp::get_class<app::IParentBehaviourTreeNode__Class>(type_info, "UberBehaviourTree", "IParentBehaviourTreeNode");
        }
        inline app::IParentBehaviourTreeNode* create() {
            return il2cpp::create_object<app::IParentBehaviourTreeNode>(get_class());
        }
        inline app::IParentBehaviourTreeNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IParentBehaviourTreeNode__Array>(get_class(), size);
        }
    } // namespace IParentBehaviourTreeNode
} // namespace app::classes::types
