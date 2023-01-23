#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimerCallback__Class.h>
#include <Modloader/app/structs/TimerCallback.h>

namespace app::classes::types {
    namespace TimerCallback {
        inline app::TimerCallback__Class** type_info = (app::TimerCallback__Class**)(modloader::win::memory::resolve_rva(0x04746068));
        inline app::TimerCallback__Class* get_class() {
            return il2cpp::get_class<app::TimerCallback__Class>(type_info, "System.Threading", "TimerCallback");
        }
        inline app::TimerCallback* create() {
            return il2cpp::create_object<app::TimerCallback>(get_class());
        }
    } // namespace TimerCallback
} // namespace app::classes::types
