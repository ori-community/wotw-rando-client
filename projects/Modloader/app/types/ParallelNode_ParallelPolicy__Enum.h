#pragma once
#include <Modloader/app/structs/ParallelNode_ParallelPolicy__Enum.h>
#include <Modloader/app/structs/ParallelNode_ParallelPolicy__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParallelNode_ParallelPolicy__Enum {
        inline app::ParallelNode_ParallelPolicy__Enum__Class** type_info() {
            static app::ParallelNode_ParallelPolicy__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParallelNode_ParallelPolicy__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParallelNode_ParallelPolicy__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ParallelNode_ParallelPolicy__Enum__Class>(type_info(), "Moon.BehaviourSystem", "ParallelNode", "ParallelPolicy");
        }
        inline app::ParallelNode_ParallelPolicy__Enum* create() {
            return il2cpp::create_object<app::ParallelNode_ParallelPolicy__Enum>(get_class());
        }
    } // namespace ParallelNode_ParallelPolicy__Enum
} // namespace app::classes::types
