#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompositeNode {
        namespace {
            inline app::CompositeNode__Class* type_info_ref = nullptr;
        }
        inline app::CompositeNode__Class** type_info = &type_info_ref;
        inline app::CompositeNode__Class* get_class() {
            return il2cpp::get_class<app::CompositeNode__Class>(type_info, "Moon.BehaviourSystem", "CompositeNode");
        }
        inline app::CompositeNode* create() {
            return il2cpp::create_object<app::CompositeNode>(get_class());
        }
    } // namespace CompositeNode
} // namespace app::classes::types
