#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimerThread {
        inline app::TimerThread__Class** type_info = (app::TimerThread__Class**)(modloader::win::memory::resolve_rva(0x04713918));
        inline app::TimerThread__Class* get_class() {
            return il2cpp::get_class<app::TimerThread__Class>(type_info, "System.Net", "TimerThread");
        }
        inline app::TimerThread* create() {
            return il2cpp::create_object<app::TimerThread>(get_class());
        }
    } // namespace TimerThread
} // namespace app::classes::types
