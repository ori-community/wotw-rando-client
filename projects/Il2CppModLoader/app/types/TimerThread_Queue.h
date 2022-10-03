#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_Queue {
        namespace {
            app::TimerThread_Queue__Class* type_info_ref = nullptr;
        }
        app::TimerThread_Queue__Class** type_info = &type_info_ref;
        inline app::TimerThread_Queue__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_Queue__Class>(type_info, "System.Net", "TimerThread", "Queue");
        }
        inline app::TimerThread_Queue* create() {
            return il2cpp::create_object<app::TimerThread_Queue>(get_class());
        }
    } // namespace TimerThread_Queue
} // namespace app::classes::types
