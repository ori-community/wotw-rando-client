#pragma once
#include <Modloader/app/structs/ResetPathFollowerToNode.h>
#include <Modloader/app/structs/ResetPathFollowerToNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResetPathFollowerToNode {
        inline app::ResetPathFollowerToNode__Class** type_info() {
            static app::ResetPathFollowerToNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResetPathFollowerToNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResetPathFollowerToNode__Class* get_class() {
            return il2cpp::get_class<app::ResetPathFollowerToNode__Class>(type_info(), "", "ResetPathFollowerToNode");
        }
        inline app::ResetPathFollowerToNode* create() {
            return il2cpp::create_object<app::ResetPathFollowerToNode>(get_class());
        }
    } // namespace ResetPathFollowerToNode
} // namespace app::classes::types
