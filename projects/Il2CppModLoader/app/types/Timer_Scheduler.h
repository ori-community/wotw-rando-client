#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Timer_Scheduler {
        inline app::Timer_Scheduler__Class** type_info = (app::Timer_Scheduler__Class**)(modloader::win::memory::resolve_rva(0x047089E0));
        inline app::Timer_Scheduler__Class* get_class() {
            return il2cpp::get_nested_class<app::Timer_Scheduler__Class>(type_info, "System.Threading", "Timer", "Scheduler");
        }
        inline app::Timer_Scheduler* create() {
            return il2cpp::create_object<app::Timer_Scheduler>(get_class());
        }
    } // namespace Timer_Scheduler
} // namespace app::classes::types
