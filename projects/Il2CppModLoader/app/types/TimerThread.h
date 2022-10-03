#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimerThread__Class** type_info;
        inline app::TimerThread__Class* get_class() {
            return il2cpp::get_class<app::TimerThread__Class>(type_info, "System.Net", "TimerThread");
        }
        inline app::TimerThread* create() {
            return il2cpp::create_object<app::TimerThread>(get_class());
        }
    } // namespace TimerThread
} // namespace app::classes::types
