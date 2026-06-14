#pragma once
#include <Modloader/app/structs/ThreadPoolTaskScheduler.h>
#include <Modloader/app/structs/ThreadPoolTaskScheduler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolTaskScheduler {
        inline app::ThreadPoolTaskScheduler__Class** type_info() {
            static app::ThreadPoolTaskScheduler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPoolTaskScheduler__Class**)(modloader::win::memory::resolve_rva(0x04761B60));
            }
            return cache;
        }
        inline app::ThreadPoolTaskScheduler__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolTaskScheduler__Class>(type_info(), "System.Threading.Tasks", "ThreadPoolTaskScheduler");
        }
        inline app::ThreadPoolTaskScheduler* create() {
            return il2cpp::create_object<app::ThreadPoolTaskScheduler>(get_class());
        }
    } // namespace ThreadPoolTaskScheduler
} // namespace app::classes::types
