#pragma once
#include <Modloader/app/structs/IParentBehaviourTreeNode__Array.h>
#include <Modloader/app/structs/IParentBehaviourTreeNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IParentBehaviourTreeNode__Array {
        inline app::IParentBehaviourTreeNode__Array__Class** type_info() {
            static app::IParentBehaviourTreeNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IParentBehaviourTreeNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IParentBehaviourTreeNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IParentBehaviourTreeNode__Array__Class>(type_info(), "UberBehaviourTree", "IParentBehaviourTreeNode[]");
        }
        inline app::IParentBehaviourTreeNode__Array* create() {
            return il2cpp::create_object<app::IParentBehaviourTreeNode__Array>(get_class());
        }
    } // namespace IParentBehaviourTreeNode__Array
} // namespace app::classes::types
