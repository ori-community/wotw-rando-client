#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitNode_WaitNodeReturnType__Enum {
        namespace {
            app::WaitNode_WaitNodeReturnType__Enum__Class* type_info_ref = nullptr;
        }
        app::WaitNode_WaitNodeReturnType__Enum__Class** type_info = &type_info_ref;
        inline app::WaitNode_WaitNodeReturnType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitNode_WaitNodeReturnType__Enum__Class>(type_info, "Moon.BehaviourSystem", "WaitNode", "WaitNodeReturnType");
        }
        inline app::WaitNode_WaitNodeReturnType__Enum* create() {
            return il2cpp::create_object<app::WaitNode_WaitNodeReturnType__Enum>(get_class());
        }
    } // namespace WaitNode_WaitNodeReturnType__Enum
} // namespace app::classes::types
