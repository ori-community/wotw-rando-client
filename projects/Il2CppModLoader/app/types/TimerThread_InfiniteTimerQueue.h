#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_InfiniteTimerQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimerThread_InfiniteTimerQueue__Class** type_info;
        inline app::TimerThread_InfiniteTimerQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_InfiniteTimerQueue__Class>(type_info, "System.Net", "TimerThread", "InfiniteTimerQueue");
        }
        inline app::TimerThread_InfiniteTimerQueue* create() {
            return il2cpp::create_object<app::TimerThread_InfiniteTimerQueue>(get_class());
        }
    } // namespace TimerThread_InfiniteTimerQueue
} // namespace app::classes::types
