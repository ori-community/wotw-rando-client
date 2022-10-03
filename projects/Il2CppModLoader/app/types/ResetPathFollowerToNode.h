#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResetPathFollowerToNode {
        namespace {
            app::ResetPathFollowerToNode__Class* type_info_ref = nullptr;
        }
        app::ResetPathFollowerToNode__Class** type_info = &type_info_ref;
        inline app::ResetPathFollowerToNode__Class* get_class() {
            return il2cpp::get_class<app::ResetPathFollowerToNode__Class>(type_info, "", "ResetPathFollowerToNode");
        }
        inline app::ResetPathFollowerToNode* create() {
            return il2cpp::create_object<app::ResetPathFollowerToNode>(get_class());
        }
    } // namespace ResetPathFollowerToNode
} // namespace app::classes::types
