#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SemaphoreSlim_TaskNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SemaphoreSlim_TaskNode__Class** type_info;
        inline app::SemaphoreSlim_TaskNode__Class* get_class() {
            return il2cpp::get_nested_class<app::SemaphoreSlim_TaskNode__Class>(type_info, "System.Threading", "SemaphoreSlim", "TaskNode");
        }
        inline app::SemaphoreSlim_TaskNode* create() {
            return il2cpp::create_object<app::SemaphoreSlim_TaskNode>(get_class());
        }
    } // namespace SemaphoreSlim_TaskNode
} // namespace app::classes::types
