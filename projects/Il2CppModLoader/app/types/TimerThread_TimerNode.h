#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_TimerNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimerThread_TimerNode__Class** type_info;
        inline app::TimerThread_TimerNode__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerNode__Class>(type_info, "System.Net", "TimerThread", "TimerNode");
        }
        inline app::TimerThread_TimerNode* create() {
            return il2cpp::create_object<app::TimerThread_TimerNode>(get_class());
        }
    } // namespace TimerThread_TimerNode
} // namespace app::classes::types
