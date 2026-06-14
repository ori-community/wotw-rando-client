#pragma once
#include <Modloader/app/structs/Timer_TimerComparer.h>
#include <Modloader/app/structs/Timer_TimerComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Timer_TimerComparer {
        inline app::Timer_TimerComparer__Class** type_info() {
            static app::Timer_TimerComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Timer_TimerComparer__Class**)(modloader::win::memory::resolve_rva(0x04798290));
            }
            return cache;
        }
        inline app::Timer_TimerComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::Timer_TimerComparer__Class>(type_info(), "System.Threading", "Timer", "TimerComparer");
        }
        inline app::Timer_TimerComparer* create() {
            return il2cpp::create_object<app::Timer_TimerComparer>(get_class());
        }
    } // namespace Timer_TimerComparer
} // namespace app::classes::types
