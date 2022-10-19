#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParallelNode_ParallelPolicy__Enum {
        namespace {
            inline app::ParallelNode_ParallelPolicy__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParallelNode_ParallelPolicy__Enum__Class** type_info = &type_info_ref;
        inline app::ParallelNode_ParallelPolicy__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ParallelNode_ParallelPolicy__Enum__Class>(type_info, "Moon.BehaviourSystem", "ParallelNode", "ParallelPolicy");
        }
        inline app::ParallelNode_ParallelPolicy__Enum* create() {
            return il2cpp::create_object<app::ParallelNode_ParallelPolicy__Enum>(get_class());
        }
    } // namespace ParallelNode_ParallelPolicy__Enum
} // namespace app::classes::types
