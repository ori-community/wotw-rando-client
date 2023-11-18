#pragma once
#include <Modloader/app/structs/Timer_Scheduler.h>
#include <Modloader/app/structs/Timer_Scheduler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Timer_Scheduler {
        inline app::Timer_Scheduler__Class** type_info() {
            static app::Timer_Scheduler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Timer_Scheduler__Class**)(modloader::win::memory::resolve_rva(0x047089E0));
            }
            return cache;
        }
        inline app::Timer_Scheduler__Class* get_class() {
            return il2cpp::get_nested_class<app::Timer_Scheduler__Class>(type_info(), "System.Threading", "Timer", "Scheduler");
        }
        inline app::Timer_Scheduler* create() {
            return il2cpp::create_object<app::Timer_Scheduler>(get_class());
        }
    } // namespace Timer_Scheduler
} // namespace app::classes::types
