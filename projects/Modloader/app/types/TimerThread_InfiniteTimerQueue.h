#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimerThread_InfiniteTimerQueue {
        inline app::TimerThread_InfiniteTimerQueue__Class** type_info = (app::TimerThread_InfiniteTimerQueue__Class**)(modloader::win::memory::resolve_rva(0x047774F0));
        inline app::TimerThread_InfiniteTimerQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_InfiniteTimerQueue__Class>(type_info, "System.Net", "TimerThread", "InfiniteTimerQueue");
        }
        inline app::TimerThread_InfiniteTimerQueue* create() {
            return il2cpp::create_object<app::TimerThread_InfiniteTimerQueue>(get_class());
        }
    } // namespace TimerThread_InfiniteTimerQueue
} // namespace app::classes::types
