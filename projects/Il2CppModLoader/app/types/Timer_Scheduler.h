#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Timer_Scheduler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Timer_Scheduler__Class** type_info;
        inline app::Timer_Scheduler__Class* get_class() {
            return il2cpp::get_nested_class<app::Timer_Scheduler__Class>(type_info, "System.Threading", "Timer", "Scheduler");
        }
        inline app::Timer_Scheduler* create() {
            return il2cpp::create_object<app::Timer_Scheduler>(get_class());
        }
    } // namespace Timer_Scheduler
} // namespace app::classes::types
