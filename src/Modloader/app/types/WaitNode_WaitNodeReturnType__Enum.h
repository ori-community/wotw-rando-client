#pragma once
#include <Modloader/app/structs/WaitNode_WaitNodeReturnType__Enum.h>
#include <Modloader/app/structs/WaitNode_WaitNodeReturnType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitNode_WaitNodeReturnType__Enum {
        inline app::WaitNode_WaitNodeReturnType__Enum__Class** type_info() {
            static app::WaitNode_WaitNodeReturnType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitNode_WaitNodeReturnType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitNode_WaitNodeReturnType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitNode_WaitNodeReturnType__Enum__Class>(type_info(), "Moon.BehaviourSystem", "WaitNode", "WaitNodeReturnType");
        }
        inline app::WaitNode_WaitNodeReturnType__Enum* create() {
            return il2cpp::create_object<app::WaitNode_WaitNodeReturnType__Enum>(get_class());
        }
    } // namespace WaitNode_WaitNodeReturnType__Enum
} // namespace app::classes::types
