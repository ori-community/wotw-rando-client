#pragma once
#include <Modloader/app/structs/TimerThread_InfiniteTimer.h>
#include <Modloader/app/structs/TimerThread_InfiniteTimer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerThread_InfiniteTimer {
        inline app::TimerThread_InfiniteTimer__Class** type_info() {
            static app::TimerThread_InfiniteTimer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimerThread_InfiniteTimer__Class**)(modloader::win::memory::resolve_rva(0x0471A930));
            }
            return cache;
        }
        inline app::TimerThread_InfiniteTimer__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_InfiniteTimer__Class>(type_info(), "System.Net", "TimerThread", "InfiniteTimer");
        }
        inline app::TimerThread_InfiniteTimer* create() {
            return il2cpp::create_object<app::TimerThread_InfiniteTimer>(get_class());
        }
    } // namespace TimerThread_InfiniteTimer
} // namespace app::classes::types
