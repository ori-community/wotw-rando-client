#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueueThreadLocals {
        inline app::ThreadPoolWorkQueueThreadLocals__Class** type_info = (app::ThreadPoolWorkQueueThreadLocals__Class**)(modloader::win::memory::resolve_rva(0x047254D0));
        inline app::ThreadPoolWorkQueueThreadLocals__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueueThreadLocals__Class>(type_info, "System.Threading", "ThreadPoolWorkQueueThreadLocals");
        }
        inline app::ThreadPoolWorkQueueThreadLocals* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueueThreadLocals>(get_class());
        }
    } // namespace ThreadPoolWorkQueueThreadLocals
} // namespace app::classes::types
