#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadPoolWorkQueue__Class** type_info;
        inline app::ThreadPoolWorkQueue__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueue__Class>(type_info, "System.Threading", "ThreadPoolWorkQueue");
        }
        inline app::ThreadPoolWorkQueue* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue>(get_class());
        }
    } // namespace ThreadPoolWorkQueue
} // namespace app::classes::types
