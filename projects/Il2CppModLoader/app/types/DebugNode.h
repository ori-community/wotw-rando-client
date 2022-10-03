#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugNode {
        namespace {
            app::DebugNode__Class* type_info_ref = nullptr;
        }
        app::DebugNode__Class** type_info = &type_info_ref;
        inline app::DebugNode__Class* get_class() {
            return il2cpp::get_class<app::DebugNode__Class>(type_info, "Moon.BehaviourSystem", "DebugNode");
        }
        inline app::DebugNode* create() {
            return il2cpp::create_object<app::DebugNode>(get_class());
        }
    } // namespace DebugNode
} // namespace app::classes::types
