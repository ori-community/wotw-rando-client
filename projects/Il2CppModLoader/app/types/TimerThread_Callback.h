#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_Callback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimerThread_Callback__Class** type_info;
        inline app::TimerThread_Callback__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_Callback__Class>(type_info, "System.Net", "TimerThread", "Callback");
        }
        inline app::TimerThread_Callback* create() {
            return il2cpp::create_object<app::TimerThread_Callback>(get_class());
        }
    } // namespace TimerThread_Callback
} // namespace app::classes::types
