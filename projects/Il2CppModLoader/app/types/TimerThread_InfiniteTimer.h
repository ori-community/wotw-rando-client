#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_InfiniteTimer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimerThread_InfiniteTimer__Class** type_info;
        inline app::TimerThread_InfiniteTimer__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_InfiniteTimer__Class>(type_info, "System.Net", "TimerThread", "InfiniteTimer");
        }
        inline app::TimerThread_InfiniteTimer* create() {
            return il2cpp::create_object<app::TimerThread_InfiniteTimer>(get_class());
        }
    } // namespace TimerThread_InfiniteTimer
} // namespace app::classes::types
