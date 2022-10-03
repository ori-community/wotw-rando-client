#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UtilitySelectorNode_NodeUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UtilitySelectorNode_NodeUtility__Class** type_info;
        inline app::UtilitySelectorNode_NodeUtility__Class* get_class() {
            return il2cpp::get_nested_class<app::UtilitySelectorNode_NodeUtility__Class>(type_info, "Moon.BehaviourSystem", "UtilitySelectorNode", "NodeUtility");
        }
        inline app::UtilitySelectorNode_NodeUtility* create() {
            return il2cpp::create_object<app::UtilitySelectorNode_NodeUtility>(get_class());
        }
        inline app::UtilitySelectorNode_NodeUtility__Boxed* box(app::UtilitySelectorNode_NodeUtility value) {
            return il2cpp::box_value<app::UtilitySelectorNode_NodeUtility__Boxed>(get_class(), value);
        }
        inline app::UtilitySelectorNode_NodeUtility__Array* create_array(int size) {
            return il2cpp::array_new<app::UtilitySelectorNode_NodeUtility__Array>(get_class(), size);
        }
    } // namespace UtilitySelectorNode_NodeUtility
} // namespace app::classes::types
