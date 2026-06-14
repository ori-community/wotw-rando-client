#pragma once
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue_QueueSegment {
        inline app::ThreadPoolWorkQueue_QueueSegment__Class** type_info() {
            static app::ThreadPoolWorkQueue_QueueSegment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPoolWorkQueue_QueueSegment__Class**)(modloader::win::memory::resolve_rva(0x04778150));
            }
            return cache;
        }
        inline app::ThreadPoolWorkQueue_QueueSegment__Class* get_class() {
            return il2cpp::get_nested_class<app::ThreadPoolWorkQueue_QueueSegment__Class>(type_info(), "System.Threading", "ThreadPoolWorkQueue", "QueueSegment");
        }
        inline app::ThreadPoolWorkQueue_QueueSegment* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue_QueueSegment>(get_class());
        }
    } // namespace ThreadPoolWorkQueue_QueueSegment
} // namespace app::classes::types
