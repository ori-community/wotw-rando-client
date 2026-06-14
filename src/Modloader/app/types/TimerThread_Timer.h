#pragma once
#include <Modloader/app/structs/TimerThread_Timer.h>
#include <Modloader/app/structs/TimerThread_Timer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerThread_Timer {
        inline app::TimerThread_Timer__Class** type_info() {
            static app::TimerThread_Timer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerThread_Timer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerThread_Timer__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_Timer__Class>(type_info(), "System.Net", "TimerThread", "Timer");
        }
        inline app::TimerThread_Timer* create() {
            return il2cpp::create_object<app::TimerThread_Timer>(get_class());
        }
    } // namespace TimerThread_Timer
} // namespace app::classes::types
