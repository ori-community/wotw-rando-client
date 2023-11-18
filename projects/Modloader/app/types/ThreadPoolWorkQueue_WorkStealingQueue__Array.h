#pragma once
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue_WorkStealingQueue__Array {
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class** type_info() {
            static app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class>(type_info(), "System.Threading", "ThreadPoolWorkQueue+WorkStealingQueue[]");
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue_WorkStealingQueue__Array>(get_class());
        }
    } // namespace ThreadPoolWorkQueue_WorkStealingQueue__Array
} // namespace app::classes::types
