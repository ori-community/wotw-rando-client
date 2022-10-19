#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue {
        inline app::ThreadPoolWorkQueue__Class** type_info = (app::ThreadPoolWorkQueue__Class**)(modloader::win::memory::resolve_rva(0x0477A7C0));
        inline app::ThreadPoolWorkQueue__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueue__Class>(type_info, "System.Threading", "ThreadPoolWorkQueue");
        }
        inline app::ThreadPoolWorkQueue* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue>(get_class());
        }
    } // namespace ThreadPoolWorkQueue
} // namespace app::classes::types
