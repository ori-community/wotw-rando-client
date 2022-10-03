#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolTaskScheduler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadPoolTaskScheduler__Class** type_info;
        inline app::ThreadPoolTaskScheduler__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolTaskScheduler__Class>(type_info, "System.Threading.Tasks", "ThreadPoolTaskScheduler");
        }
        inline app::ThreadPoolTaskScheduler* create() {
            return il2cpp::create_object<app::ThreadPoolTaskScheduler>(get_class());
        }
    } // namespace ThreadPoolTaskScheduler
} // namespace app::classes::types
