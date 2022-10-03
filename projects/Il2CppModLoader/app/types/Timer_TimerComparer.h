#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Timer_TimerComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Timer_TimerComparer__Class** type_info;
        inline app::Timer_TimerComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::Timer_TimerComparer__Class>(type_info, "System.Threading", "Timer", "TimerComparer");
        }
        inline app::Timer_TimerComparer* create() {
            return il2cpp::create_object<app::Timer_TimerComparer>(get_class());
        }
    } // namespace Timer_TimerComparer
} // namespace app::classes::types
