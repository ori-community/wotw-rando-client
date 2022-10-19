#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Timer_TimerComparer {
        inline app::Timer_TimerComparer__Class** type_info = (app::Timer_TimerComparer__Class**)(modloader::win::memory::resolve_rva(0x04798290));
        inline app::Timer_TimerComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::Timer_TimerComparer__Class>(type_info, "System.Threading", "Timer", "TimerComparer");
        }
        inline app::Timer_TimerComparer* create() {
            return il2cpp::create_object<app::Timer_TimerComparer>(get_class());
        }
    } // namespace Timer_TimerComparer
} // namespace app::classes::types
