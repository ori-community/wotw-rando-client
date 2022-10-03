#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UtilitySelectorNode_NodeUtility__Array {
        namespace {
            app::UtilitySelectorNode_NodeUtility__Array__Class* type_info_ref = nullptr;
        }
        app::UtilitySelectorNode_NodeUtility__Array__Class** type_info = &type_info_ref;
        inline app::UtilitySelectorNode_NodeUtility__Array__Class* get_class() {
            return il2cpp::get_class<app::UtilitySelectorNode_NodeUtility__Array__Class>(type_info, "Moon.BehaviourSystem", "UtilitySelectorNode+NodeUtility[]");
        }
        inline app::UtilitySelectorNode_NodeUtility__Array* create() {
            return il2cpp::create_object<app::UtilitySelectorNode_NodeUtility__Array>(get_class());
        }
    } // namespace UtilitySelectorNode_NodeUtility__Array
} // namespace app::classes::types
