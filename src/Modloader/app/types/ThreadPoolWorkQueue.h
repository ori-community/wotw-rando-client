#pragma once
#include <Modloader/app/structs/ThreadPoolWorkQueue.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue {
        inline app::ThreadPoolWorkQueue__Class** type_info() {
            static app::ThreadPoolWorkQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPoolWorkQueue__Class**)(modloader::win::memory::resolve_rva(0x0477A7C0));
            }
            return cache;
        }
        inline app::ThreadPoolWorkQueue__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueue__Class>(type_info(), "System.Threading", "ThreadPoolWorkQueue");
        }
        inline app::ThreadPoolWorkQueue* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue>(get_class());
        }
    } // namespace ThreadPoolWorkQueue
} // namespace app::classes::types
