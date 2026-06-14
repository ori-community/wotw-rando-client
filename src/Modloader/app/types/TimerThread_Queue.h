#pragma once
#include <Modloader/app/structs/TimerThread_Queue.h>
#include <Modloader/app/structs/TimerThread_Queue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerThread_Queue {
        inline app::TimerThread_Queue__Class** type_info() {
            static app::TimerThread_Queue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerThread_Queue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerThread_Queue__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_Queue__Class>(type_info(), "System.Net", "TimerThread", "Queue");
        }
        inline app::TimerThread_Queue* create() {
            return il2cpp::create_object<app::TimerThread_Queue>(get_class());
        }
    } // namespace TimerThread_Queue
} // namespace app::classes::types
