#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParallelNode {
        namespace {
            inline app::ParallelNode__Class* type_info_ref = nullptr;
        }
        inline app::ParallelNode__Class** type_info = &type_info_ref;
        inline app::ParallelNode__Class* get_class() {
            return il2cpp::get_class<app::ParallelNode__Class>(type_info, "Moon.BehaviourSystem", "ParallelNode");
        }
        inline app::ParallelNode* create() {
            return il2cpp::create_object<app::ParallelNode>(get_class());
        }
    } // namespace ParallelNode
} // namespace app::classes::types
