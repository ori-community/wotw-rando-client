#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimerThread_TimerNode {
        inline app::TimerThread_TimerNode__Class** type_info = (app::TimerThread_TimerNode__Class**)(modloader::win::memory::resolve_rva(0x047548B8));
        inline app::TimerThread_TimerNode__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerNode__Class>(type_info, "System.Net", "TimerThread", "TimerNode");
        }
        inline app::TimerThread_TimerNode* create() {
            return il2cpp::create_object<app::TimerThread_TimerNode>(get_class());
        }
    } // namespace TimerThread_TimerNode
} // namespace app::classes::types
