#pragma once
#include <Modloader/app/structs/ParallelNode.h>
#include <Modloader/app/structs/ParallelNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParallelNode {
        inline app::ParallelNode__Class** type_info() {
            static app::ParallelNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParallelNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParallelNode__Class* get_class() {
            return il2cpp::get_class<app::ParallelNode__Class>(type_info(), "Moon.BehaviourSystem", "ParallelNode");
        }
        inline app::ParallelNode* create() {
            return il2cpp::create_object<app::ParallelNode>(get_class());
        }
    } // namespace ParallelNode
} // namespace app::classes::types
