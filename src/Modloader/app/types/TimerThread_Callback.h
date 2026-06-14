#pragma once
#include <Modloader/app/structs/TimerThread_Callback.h>
#include <Modloader/app/structs/TimerThread_Callback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerThread_Callback {
        inline app::TimerThread_Callback__Class** type_info() {
            static app::TimerThread_Callback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimerThread_Callback__Class**)(modloader::win::memory::resolve_rva(0x04731FA8));
            }
            return cache;
        }
        inline app::TimerThread_Callback__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_Callback__Class>(type_info(), "System.Net", "TimerThread", "Callback");
        }
        inline app::TimerThread_Callback* create() {
            return il2cpp::create_object<app::TimerThread_Callback>(get_class());
        }
    } // namespace TimerThread_Callback
} // namespace app::classes::types
