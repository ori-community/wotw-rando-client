#pragma once
#include <Modloader/app/structs/TimerThread.h>
#include <Modloader/app/structs/TimerThread__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerThread {
        inline app::TimerThread__Class** type_info() {
            static app::TimerThread__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimerThread__Class**)(modloader::win::memory::resolve_rva(0x04713918));
            }
            return cache;
        }
        inline app::TimerThread__Class* get_class() {
            return il2cpp::get_class<app::TimerThread__Class>(type_info(), "System.Net", "TimerThread");
        }
        inline app::TimerThread* create() {
            return il2cpp::create_object<app::TimerThread>(get_class());
        }
    } // namespace TimerThread
} // namespace app::classes::types
