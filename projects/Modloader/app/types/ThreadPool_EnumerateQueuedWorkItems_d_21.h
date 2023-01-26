#pragma once
#include <Modloader/app/structs/ThreadPool_EnumerateQueuedWorkItems_d_21.h>
#include <Modloader/app/structs/ThreadPool_EnumerateQueuedWorkItems_d_21__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPool_EnumerateQueuedWorkItems_d_21 {
        inline app::ThreadPool_EnumerateQueuedWorkItems_d_21__Class** type_info() {
            static app::ThreadPool_EnumerateQueuedWorkItems_d_21__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPool_EnumerateQueuedWorkItems_d_21__Class**)(modloader::win::memory::resolve_rva(0x04723F30));
            }
            return cache;
        }
        inline app::ThreadPool_EnumerateQueuedWorkItems_d_21__Class* get_class() {
            return il2cpp::get_nested_class<app::ThreadPool_EnumerateQueuedWorkItems_d_21__Class>(type_info(), "System.Threading", "ThreadPool", "<EnumerateQueuedWorkItems>d__21");
        }
        inline app::ThreadPool_EnumerateQueuedWorkItems_d_21* create() {
            return il2cpp::create_object<app::ThreadPool_EnumerateQueuedWorkItems_d_21>(get_class());
        }
    } // namespace ThreadPool_EnumerateQueuedWorkItems_d_21
} // namespace app::classes::types
