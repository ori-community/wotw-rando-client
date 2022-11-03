#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IParentBehaviourTreeNode__Array {
        namespace {
            inline app::IParentBehaviourTreeNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::IParentBehaviourTreeNode__Array__Class** type_info = &type_info_ref;
        inline app::IParentBehaviourTreeNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IParentBehaviourTreeNode__Array__Class>(type_info, "UberBehaviourTree", "IParentBehaviourTreeNode[]");
        }
        inline app::IParentBehaviourTreeNode__Array* create() {
            return il2cpp::create_object<app::IParentBehaviourTreeNode__Array>(get_class());
        }
    } // namespace IParentBehaviourTreeNode__Array
} // namespace app::classes::types
