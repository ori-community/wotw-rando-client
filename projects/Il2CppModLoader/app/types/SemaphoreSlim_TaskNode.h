#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SemaphoreSlim_TaskNode {
        inline app::SemaphoreSlim_TaskNode__Class** type_info = (app::SemaphoreSlim_TaskNode__Class**)(modloader::win::memory::resolve_rva(0x04724720));
        inline app::SemaphoreSlim_TaskNode__Class* get_class() {
            return il2cpp::get_nested_class<app::SemaphoreSlim_TaskNode__Class>(type_info, "System.Threading", "SemaphoreSlim", "TaskNode");
        }
        inline app::SemaphoreSlim_TaskNode* create() {
            return il2cpp::create_object<app::SemaphoreSlim_TaskNode>(get_class());
        }
    } // namespace SemaphoreSlim_TaskNode
} // namespace app::classes::types
