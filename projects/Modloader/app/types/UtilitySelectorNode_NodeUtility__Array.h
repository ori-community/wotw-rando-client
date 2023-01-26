#pragma once
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility__Array.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UtilitySelectorNode_NodeUtility__Array {
        inline app::UtilitySelectorNode_NodeUtility__Array__Class** type_info() {
            static app::UtilitySelectorNode_NodeUtility__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UtilitySelectorNode_NodeUtility__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UtilitySelectorNode_NodeUtility__Array__Class* get_class() {
            return il2cpp::get_class<app::UtilitySelectorNode_NodeUtility__Array__Class>(type_info(), "Moon.BehaviourSystem", "UtilitySelectorNode+NodeUtility[]");
        }
        inline app::UtilitySelectorNode_NodeUtility__Array* create() {
            return il2cpp::create_object<app::UtilitySelectorNode_NodeUtility__Array>(get_class());
        }
    } // namespace UtilitySelectorNode_NodeUtility__Array
} // namespace app::classes::types
