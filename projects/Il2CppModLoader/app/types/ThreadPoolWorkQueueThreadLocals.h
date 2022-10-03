#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueueThreadLocals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadPoolWorkQueueThreadLocals__Class** type_info;
        inline app::ThreadPoolWorkQueueThreadLocals__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueueThreadLocals__Class>(type_info, "System.Threading", "ThreadPoolWorkQueueThreadLocals");
        }
        inline app::ThreadPoolWorkQueueThreadLocals* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueueThreadLocals>(get_class());
        }
    } // namespace ThreadPoolWorkQueueThreadLocals
} // namespace app::classes::types
