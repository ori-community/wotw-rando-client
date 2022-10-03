#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParallelNode_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParallelNode_1__Class** type_info;
        inline app::ParallelNode_1__Class* get_class() {
            return il2cpp::get_class<app::ParallelNode_1__Class>(type_info, "UberBehaviourTree", "ParallelNode");
        }
        inline app::ParallelNode_1* create() {
            return il2cpp::create_object<app::ParallelNode_1>(get_class());
        }
    } // namespace ParallelNode_1
} // namespace app::classes::types
