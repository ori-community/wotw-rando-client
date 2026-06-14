#pragma once
#include <Modloader/app/structs/IParentBehaviourTreeNode.h>
#include <Modloader/app/structs/IParentBehaviourTreeNode__Array.h>
#include <Modloader/app/structs/IParentBehaviourTreeNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IParentBehaviourTreeNode {
        inline app::IParentBehaviourTreeNode__Class** type_info() {
            static app::IParentBehaviourTreeNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IParentBehaviourTreeNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IParentBehaviourTreeNode__Class* get_class() {
            return il2cpp::get_class<app::IParentBehaviourTreeNode__Class>(type_info(), "UberBehaviourTree", "IParentBehaviourTreeNode");
        }
        inline app::IParentBehaviourTreeNode* create() {
            return il2cpp::create_object<app::IParentBehaviourTreeNode>(get_class());
        }
        inline app::IParentBehaviourTreeNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IParentBehaviourTreeNode__Array>(get_class(), size);
        }
        inline app::IParentBehaviourTreeNode__Array* create_array(const std::vector<app::IParentBehaviourTreeNode*>& items) {
            return il2cpp::array_new<app::IParentBehaviourTreeNode__Array>(get_class(), items);
        }
    } // namespace IParentBehaviourTreeNode
} // namespace app::classes::types
