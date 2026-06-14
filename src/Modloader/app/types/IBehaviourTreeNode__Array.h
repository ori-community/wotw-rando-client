#pragma once
#include <Modloader/app/structs/IBehaviourTreeNode__Array.h>
#include <Modloader/app/structs/IBehaviourTreeNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBehaviourTreeNode__Array {
        inline app::IBehaviourTreeNode__Array__Class** type_info() {
            static app::IBehaviourTreeNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IBehaviourTreeNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IBehaviourTreeNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourTreeNode__Array__Class>(type_info(), "UberBehaviourTree", "IBehaviourTreeNode[]");
        }
        inline app::IBehaviourTreeNode__Array* create() {
            return il2cpp::create_object<app::IBehaviourTreeNode__Array>(get_class());
        }
    } // namespace IBehaviourTreeNode__Array
} // namespace app::classes::types
