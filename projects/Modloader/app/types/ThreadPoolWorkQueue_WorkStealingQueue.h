#pragma once
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue_WorkStealingQueue {
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Class** type_info() {
            static app::ThreadPoolWorkQueue_WorkStealingQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPoolWorkQueue_WorkStealingQueue__Class**)(modloader::win::memory::resolve_rva(0x04786500));
            }
            return cache;
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::ThreadPoolWorkQueue_WorkStealingQueue__Class>(type_info(), "System.Threading", "ThreadPoolWorkQueue", "WorkStealingQueue");
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue_WorkStealingQueue>(get_class());
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array* create_array(int size) {
            return il2cpp::array_new<app::ThreadPoolWorkQueue_WorkStealingQueue__Array>(get_class(), size);
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array* create_array(const std::vector<app::ThreadPoolWorkQueue_WorkStealingQueue*>& items) {
            return il2cpp::array_new<app::ThreadPoolWorkQueue_WorkStealingQueue__Array>(get_class(), items);
        }
    } // namespace ThreadPoolWorkQueue_WorkStealingQueue
} // namespace app::classes::types
