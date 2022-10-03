#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_TimerQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimerThread_TimerQueue__Class** type_info;
        inline app::TimerThread_TimerQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerQueue__Class>(type_info, "System.Net", "TimerThread", "TimerQueue");
        }
        inline app::TimerThread_TimerQueue* create() {
            return il2cpp::create_object<app::TimerThread_TimerQueue>(get_class());
        }
    } // namespace TimerThread_TimerQueue
} // namespace app::classes::types
