#pragma once
#include <Modloader/app/structs/TimerThread_TimerQueue.h>
#include <Modloader/app/structs/TimerThread_TimerQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerThread_TimerQueue {
        inline app::TimerThread_TimerQueue__Class** type_info() {
            static app::TimerThread_TimerQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimerThread_TimerQueue__Class**)(modloader::win::memory::resolve_rva(0x04769590));
            }
            return cache;
        }
        inline app::TimerThread_TimerQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerQueue__Class>(type_info(), "System.Net", "TimerThread", "TimerQueue");
        }
        inline app::TimerThread_TimerQueue* create() {
            return il2cpp::create_object<app::TimerThread_TimerQueue>(get_class());
        }
    } // namespace TimerThread_TimerQueue
} // namespace app::classes::types
