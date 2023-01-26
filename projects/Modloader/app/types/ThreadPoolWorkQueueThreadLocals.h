#pragma once
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals.h>
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueueThreadLocals {
        inline app::ThreadPoolWorkQueueThreadLocals__Class** type_info() {
            static app::ThreadPoolWorkQueueThreadLocals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPoolWorkQueueThreadLocals__Class**)(modloader::win::memory::resolve_rva(0x047254D0));
            }
            return cache;
        }
        inline app::ThreadPoolWorkQueueThreadLocals__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueueThreadLocals__Class>(type_info(), "System.Threading", "ThreadPoolWorkQueueThreadLocals");
        }
        inline app::ThreadPoolWorkQueueThreadLocals* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueueThreadLocals>(get_class());
        }
    } // namespace ThreadPoolWorkQueueThreadLocals
} // namespace app::classes::types
